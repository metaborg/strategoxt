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
Symbol sym_OverrideDynamicRules_1;
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
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
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
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_b_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_d_17;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_b_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_l_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Sort_2, term_t_11, (ATerm) ATempty);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_11);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, term_n_14, term_o_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_b_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_h_15);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_b_14);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_r_17, term_b_14);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_i_16, term_b_14);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_b_14);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
static ATerm q_4 (ATerm d_90 (ATerm), ATerm c_28, ATerm b_28, ATerm t);
ATerm genzip_4_0 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm v_4 (ATerm n_585, ATerm s_585, ATerm o_55, ATerm t);
ATerm while_not_2_0 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm t);
ATerm for_3_0 (ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm p_6 (ATerm i_3, ATerm j_3, ATerm k_3, ATerm t);
static ATerm u_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm a_5 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm i_28, ATerm h_28, ATerm t);
static ATerm b_5 (ATerm i_90 (ATerm), ATerm e_28, ATerm d_28, ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm free_vars_3_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm worker_wrapper_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm u_86 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm t_28 (ATerm k_28, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm worker_wrapper_spec_0_0 (ATerm t);
static ATerm c_5 (ATerm f_37, ATerm g_37, ATerm t);
static ATerm d_5 (ATerm l_22, ATerm m_22, ATerm t);
static ATerm f_5 (ATerm v_85 (ATerm), ATerm h_146, ATerm p_22, ATerm t);
static ATerm e_5 (ATerm h_22, ATerm i_22, ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm output_1_0 (ATerm s_103 (ATerm), ATerm t);
static ATerm r_31 (ATerm l_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_5 (ATerm n_22, ATerm t);
static ATerm h_5 (ATerm h_37, ATerm i_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_33 (ATerm d_32, ATerm t);
static ATerm f_33 (ATerm h_32, ATerm i_32, ATerm j_32, ATerm t);
static ATerm g_33 (ATerm r_32, ATerm s_32, ATerm t_32, ATerm t);
static ATerm i_5 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm t_103 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_5 (ATerm c_46, ATerm d_46, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_5 (ATerm c_51, ATerm d_51, ATerm b_51, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_5 (ATerm b_40, ATerm c_40, ATerm t);
ATerm foldr_2_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_100 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm need_help_1_0 (ATerm j_103 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_86 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm m_5 (ATerm y_35, ATerm z_35, ATerm t);
ATerm debug_1_0 (ATerm t_85 (ATerm), ATerm t);
ATerm map_1_0 (ATerm e_86 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm n_5 (ATerm t_52, ATerm u_52, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_65 (ATerm), ATerm s_65 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_105 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm parse_options_1_0 (ATerm l_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm n_7 (ATerm t);
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
static ATerm q_4 (ATerm d_90 (ATerm), ATerm c_28, ATerm b_28, ATerm t)
{
  static ATerm d_1 (ATerm t)
  {
    ATerm w_0 = NULL,x_0 = NULL,z_0 = NULL;
    w_0 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_0;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_0 = ATgetFirst((ATermList) t);
            z_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_7 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_0;
              {
                static ATerm a_0 (ATerm t)
                {
                  t = b_28;
                  return(t);
                }
                t = a_5(d_90, a_0, x_0, z_0, t);
              }
              t = d_1(t);
              LocalPopChoice(s_7);
            }
          else
            {
              t = r_7;
              {
                ATerm h_0 = NULL,y_0 = NULL,e_0 = NULL;
                t = SSLgetAnnotations(w_0);
                h_0 = t;
                t = z_0;
                t = d_1(t);
                y_0 = t;
                t = (ATerm) ATinsert(CheckATermList(y_0), x_0);
                e_0 = t;
                t = SSLsetAnnotations(e_0, h_0);
              }
            }
        }
      }
    return(t);
  }
  t = c_28;
  t = d_1(t);
  return(t);
}
ATerm genzip_4_0 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm t)
{
  static ATerm m_1 (ATerm t)
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_88(t);
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        {
          ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,q_0 = NULL;
          t = i_88(t);
          l_1 = t;
          if(match_cons(t, sym__2))
            {
              h_1 = ATgetArgument(t, 0);
              i_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_1);
          g_1 = t;
          t = h_1;
          t = k_88(t);
          j_1 = t;
          t = i_1;
          t = m_1(t);
          k_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_1, k_1);
          q_0 = t;
          t = SSLsetAnnotations(q_0, g_1);
          t = j_88(t);
        }
      }
    return(t);
  }
  t = m_1(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if(((ATgetType(v_7) != AT_LIST) || !(ATisEmpty(v_7))))
        _fail(t);
      {
        ATerm y_7 = ATgetArgument(t, 1);
        if(((ATgetType(y_7) != AT_LIST) || !(ATisEmpty(y_7))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if(((ATgetType(a_8) == AT_LIST) && !(ATisEmpty(a_8))))
        {
          h_2 = ATgetFirst((ATermList) a_8);
          j_2 = (ATerm) ATgetNext((ATermList) a_8);
        }
      else
        _fail(t);
      {
        ATerm e_8 = ATgetArgument(t, 1);
        if(((ATgetType(e_8) == AT_LIST) && !(ATisEmpty(e_8))))
          {
            k_2 = ATgetFirst((ATermList) e_8);
            l_2 = (ATerm) ATgetNext((ATermList) e_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_2, k_2), (ATerm) ATmakeAppl(sym__2, j_2, l_2));
  return(t);
}
static ATerm f_0 (ATerm t)
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
static ATerm v_4 (ATerm n_585, ATerm s_585, ATerm o_55, ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,b_2 = NULL,e_2 = NULL;
  t = SSL_explode_term(s_585);
  if(match_cons(t, sym__2))
    {
      v_1 = ATgetArgument(t, 0);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_585);
  if(match_cons(t, sym__2))
    {
      if((v_1 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_1, b_2);
  t = genzip_4_0(b_0, c_0, f_0, _id, t);
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_2, o_55);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm t)
{
  static ATerm q_2 (ATerm t)
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_79(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        t = k_79(t);
        t = q_2(t);
      }
    return(t);
  }
  t = q_2(t);
  return(t);
}
ATerm for_3_0 (ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm o_79 (ATerm), ATerm t)
{
  t = m_79(t);
  t = while_not_2_0(n_79, o_79, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm z_2 = NULL;
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_2);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,f_3 = NULL,h_3 = NULL,s_0 = NULL;
  h_3 = t;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      f_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_3);
  a_3 = t;
  t = f_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_3, f_3);
  s_0 = t;
  t = SSLsetAnnotations(s_0, a_3);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,s_4 = NULL;
  i_4 = t;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_4 = ATgetFirst((ATermList) t);
      s_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_6(j_4, k_4, i_4, t);
            LocalPopChoice(m_8);
          }
        else
          {
            t = j_8;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_4), l_4), s_4);
          }
      }
    }
  else
    {
      t = p_6(j_4, k_4, i_4, t);
    }
  return(t);
}
static ATerm p_6 (ATerm i_3, ATerm j_3, ATerm k_3, ATerm t)
{
  ATerm l_3 = NULL,s_3 = NULL,t_0 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,a_4 = NULL;
  t = SSLgetAnnotations(k_3);
  l_3 = t;
  t = j_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_3 = ATgetFirst((ATermList) t);
      a_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_3;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_3;
        if((x_3 != t))
          {
            _fail(t);
          }
        t = a_4;
        LocalPopChoice(q_8);
      }
    else
      {
        t = o_8;
        t = j_3;
        t = v_4(x_3, y_3, a_4, t);
      }
  }
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_3, s_3);
  t_0 = t;
  t = SSLsetAnnotations(t_0, l_3);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm e_6 = NULL;
  if(match_cons(t, sym__2))
    {
      e_6 = ATgetArgument(t, 0);
      if((e_6 != ATgetArgument(t, 1)))
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
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_0, m_0, r_0, t);
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      {
        ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
        t_5 = t;
        if(match_cons(t, sym__2))
          {
            u_5 = ATgetArgument(t, 0);
            v_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_5;
        t = q_4(u_0, u_5, v_5, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  k_11 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
      {
        ATerm s_1 = NULL,x_1 = NULL,y_1 = NULL,f_1 = NULL;
        t = SSLgetAnnotations(k_11);
        s_1 = t;
        t = l_11;
        t = c_110(t);
        x_1 = t;
        t = f_11;
        t = a_110(t);
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, x_1, y_1);
        f_1 = t;
        t = SSLsetAnnotations(f_1, s_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          l_11 = ATgetArgument(t, 0);
          f_11 = ATgetArgument(t, 1);
          g_11 = ATgetArgument(t, 2);
          j_11 = ATgetArgument(t, 3);
          {
            ATerm t_2 = NULL,y_2 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,h_7 = NULL;
            t = SSLgetAnnotations(k_11);
            t_2 = t;
            t = l_11;
            t = c_110(t);
            y_2 = t;
            t = f_11;
            t = c_110(t);
            c_3 = t;
            t = g_11;
            t = c_110(t);
            d_3 = t;
            t = j_11;
            t = a_110(t);
            e_3 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_2, c_3, d_3, e_3);
            h_7 = t;
            t = SSLsetAnnotations(h_7, t_2);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              l_11 = ATgetArgument(t, 0);
              f_11 = ATgetArgument(t, 1);
              g_11 = ATgetArgument(t, 2);
              j_11 = ATgetArgument(t, 3);
              {
                ATerm o_4 = NULL,y_4 = NULL,z_4 = NULL,l_5 = NULL,p_5 = NULL,i_7 = NULL;
                t = SSLgetAnnotations(k_11);
                o_4 = t;
                t = l_11;
                t = c_110(t);
                y_4 = t;
                t = f_11;
                t = c_110(t);
                z_4 = t;
                t = g_11;
                t = c_110(t);
                l_5 = t;
                t = j_11;
                t = a_110(t);
                p_5 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, y_4, z_4, l_5, p_5);
                i_7 = t;
                t = SSLsetAnnotations(i_7, o_4);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  l_11 = ATgetArgument(t, 0);
                  {
                    ATerm f_6 = NULL,h_6 = NULL,j_7 = NULL;
                    t = SSLgetAnnotations(k_11);
                    f_6 = t;
                    t = l_11;
                    t = a_110(t);
                    h_6 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_6);
                    j_7 = t;
                    t = SSLsetAnnotations(j_7, f_6);
                  }
                }
              else
                {
                  ATerm n_6 = NULL,q_6 = NULL,q_7 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      l_11 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_11);
                  n_6 = t;
                  t = l_11;
                  t = a_110(t);
                  q_6 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, q_6);
                  q_7 = t;
                  t = SSLsetAnnotations(q_7, n_6);
                }
            }
        }
    }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm m_12 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_12);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            {
              ATerm o_12 = NULL,p_12 = NULL,s_12 = NULL,t_12 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_12 = ATgetArgument(t, 0);
                  p_12 = ATgetArgument(t, 1);
                  s_12 = ATgetArgument(t, 2);
                  t_12 = ATgetArgument(t, 3);
                  t = s_12;
                  t = map_1_0(b_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_12 = ATgetArgument(t, 0);
                      p_12 = ATgetArgument(t, 1);
                      s_12 = ATgetArgument(t, 2);
                      t_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_12;
                  t = map_1_0(c_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm e_13 = NULL;
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_13 = ATgetArgument(t, 0);
          {
            ATerm c_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_9);
      t = e_13;
    }
  else
    {
      t = z_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_13;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm u_13 = NULL;
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_13 = ATgetArgument(t, 0);
          {
            ATerm f_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_9);
      t = u_13;
    }
  else
    {
      t = d_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_13;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm y_13 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_13);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      {
        ATerm j_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_9);
          }
        else
          {
            t = j_9;
            {
              ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,j_14 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_14 = ATgetArgument(t, 0);
                  d_14 = ATgetArgument(t, 1);
                  e_14 = ATgetArgument(t, 2);
                  j_14 = ATgetArgument(t, 3);
                  t = e_14;
                  t = map_1_0(o_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_14 = ATgetArgument(t, 0);
                      d_14 = ATgetArgument(t, 1);
                      e_14 = ATgetArgument(t, 2);
                      j_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_14;
                  t = map_1_0(p_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm s_14 = NULL;
  ATerm o_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_14 = ATgetArgument(t, 0);
          {
            ATerm t_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_9);
      t = s_14;
    }
  else
    {
      t = o_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_14;
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm i_15 = NULL;
  ATerm u_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_15 = ATgetArgument(t, 0);
          {
            ATerm y_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_9);
      t = i_15;
    }
  else
    {
      t = u_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_15;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm k_12 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      k_12 = ATgetArgument(t, 0);
      t = k_12;
      t = free_vars_3_0(v_0, a_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          k_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_12;
      t = free_vars_3_0(e_1, n_1, tboundin_3_0, t);
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm m_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_16);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm z_9 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_10);
    }
  else
    {
      t = z_9;
      {
        ATerm f_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_10);
          }
        else
          {
            t = f_10;
            {
              ATerm o_16 = NULL,r_16 = NULL,t_16 = NULL,u_16 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_16 = ATgetArgument(t, 0);
                  r_16 = ATgetArgument(t, 1);
                  t_16 = ATgetArgument(t, 2);
                  u_16 = ATgetArgument(t, 3);
                  t = t_16;
                  t = map_1_0(t_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_16 = ATgetArgument(t, 0);
                      r_16 = ATgetArgument(t, 1);
                      t_16 = ATgetArgument(t, 2);
                      u_16 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_16;
                  t = map_1_0(u_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm l_17 = NULL;
  ATerm k_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_17 = ATgetArgument(t, 0);
          {
            ATerm n_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_10);
      t = l_17;
    }
  else
    {
      t = k_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_17;
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm a_18 = NULL;
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_18 = ATgetArgument(t, 0);
          {
            ATerm q_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_10);
      t = a_18;
    }
  else
    {
      t = o_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_18;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm c_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_16 = ATgetArgument(t, 0);
      t = j_16;
      if(match_cons(t, sym_Rule_3))
        {
          c_16 = ATgetArgument(t, 0);
          {
            ATerm r_10 = ATgetArgument(t, 1);
          }
          {
            ATerm s_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = c_16;
      t = free_vars_3_0(q_1, r_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_16 = ATgetArgument(t, 0);
          {
            ATerm t_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_16;
    }
  return(t);
}
static ATerm a_5 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm i_28, ATerm h_28, ATerm t)
{
  t = m_90(t);
  {
    static ATerm z_1 (ATerm t)
    {
      ATerm e_18 = NULL;
      e_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_28, e_18);
      t = l_90(t);
      return(t);
    }
    t = fetch_1_0(z_1, t);
  }
  t = h_28;
  return(t);
}
static ATerm b_5 (ATerm i_90 (ATerm), ATerm e_28, ATerm d_28, ATerm t)
{
  static ATerm o_19 (ATerm t)
  {
    ATerm w_18 = NULL,y_18 = NULL,g_19 = NULL;
    w_18 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_18 = ATgetFirst((ATermList) t);
            g_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_10 = t;
          int v_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_18;
              {
                static ATerm a_2 (ATerm t)
                {
                  t = d_28;
                  return(t);
                }
                t = a_5(i_90, a_2, y_18, g_19, t);
              }
              t = o_19(t);
              LocalPopChoice(v_10);
            }
          else
            {
              t = u_10;
              {
                ATerm x_6 = NULL,a_7 = NULL,w_7 = NULL;
                t = SSLgetAnnotations(w_18);
                x_6 = t;
                t = g_19;
                t = o_19(t);
                a_7 = t;
                t = (ATerm) ATinsert(CheckATermList(a_7), y_18);
                w_7 = t;
                t = SSLsetAnnotations(w_7, x_6);
              }
            }
        }
      }
    return(t);
  }
  t = e_28;
  t = o_19(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      k_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(i_2, k_7, l_7, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm m_7 = NULL;
  if(match_cons(t, sym__2))
    {
      m_7 = ATgetArgument(t, 0);
      if((m_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm x_7 = NULL,k_8 = NULL;
  if(match_cons(t, sym__2))
    {
      x_7 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(r_2, x_7, k_8, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm l_8 = NULL;
  if(match_cons(t, sym__2))
    {
      l_8 = ATgetArgument(t, 0);
      if((l_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm d_22 (ATerm t)
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_107(t);
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        {
          ATerm y_10 = t;
          int a_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_19 = NULL,e_20 = NULL,f_7 = NULL,g_7 = NULL;
              y_19 = t;
              t = y_107(t);
              e_20 = t;
              t = y_19;
              {
                static ATerm c_2 (ATerm t)
                {
                  ATerm b_21 = NULL;
                  t = d_22(t);
                  b_21 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_21, e_20);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_107(c_2, d_22, d_2, t);
              }
              g_7 = t;
              t = SSL_explode_term(g_7);
              if(match_cons(t, sym__2))
                {
                  ATerm b_11 = ATgetArgument(t, 0);
                  f_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_7;
              t = foldr_3_0(f_2, g_2, _id, t);
              LocalPopChoice(a_11);
            }
          else
            {
              t = y_10;
              {
                ATerm o_7 = NULL,p_7 = NULL;
                p_7 = t;
                t = SSL_explode_term(p_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_11 = ATgetArgument(t, 0);
                    o_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_7;
                t = foldr_3_0(m_2, p_2, d_22, t);
              }
            }
        }
      }
    return(t);
  }
  t = d_22(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm d_10 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_10);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm g_10 = NULL,h_10 = NULL,j_10 = NULL,l_10 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_10 = ATgetArgument(t, 0);
                  h_10 = ATgetArgument(t, 1);
                  j_10 = ATgetArgument(t, 2);
                  l_10 = ATgetArgument(t, 3);
                  t = j_10;
                  t = map_1_0(v_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_10 = ATgetArgument(t, 0);
                      h_10 = ATgetArgument(t, 1);
                      j_10 = ATgetArgument(t, 2);
                      l_10 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_10;
                  t = map_1_0(w_2, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm z_10 = NULL;
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_10 = ATgetArgument(t, 0);
          {
            ATerm o_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_11);
      t = z_10;
    }
  else
    {
      t = m_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_10;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm w_11 = NULL;
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_11 = ATgetArgument(t, 0);
          {
            ATerm r_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_11);
      t = w_11;
    }
  else
    {
      t = p_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_11;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm z_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_11 = ATgetArgument(t, 0);
      {
        ATerm s_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_11;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm a_12 = NULL;
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_12, term_v_11);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm b_12 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      b_12 = ATgetArgument(t, 0);
      {
        ATerm x_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_12), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm c_12 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      c_12 = ATgetArgument(t, 0);
      {
        ATerm y_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, c_12);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  y_25 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
      c_26 = ATgetArgument(t, 2);
      d_26 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = d_26;
  if(match_cons(t, sym_Seq_2))
    {
      e_26 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
      t = e_26;
      if(match_cons(t, sym_Match_1))
        {
          x_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, z_25, a_26, c_26, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_25), f_26)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm k_9 = NULL,m_9 = NULL,r_9 = NULL,s_9 = NULL,v_9 = NULL,w_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          e_26 = ATgetArgument(t, 0);
          f_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_26;
      if(match_cons(t, sym_Seq_2))
        {
          g_26 = ATgetArgument(t, 0);
          i_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_26;
      if(match_cons(t, sym_Match_1))
        {
          h_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_26;
      if(match_cons(t, sym_Op_2))
        {
          ATerm d_12 = ATgetArgument(t, 0);
          ATerm e_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_26;
      t = free_vars_3_0(s_2, u_2, tboundin_3_0, t);
      b_10 = t;
      t = c_26;
      t = map_1_0(x_2, t);
      c_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_10, c_10);
      t = diff_0_0(t);
      m_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_26, m_9);
      t = diff_0_0(t);
      k_9 = t;
      t = m_9;
      t = map_1_0(g_3, t);
      r_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_26, r_9);
      t = conc_0_0(t);
      w_9 = t;
      t = new_0_0(t);
      s_9 = t;
      t = a_26;
      t = map_1_0(m_3, t);
      v_9 = t;
      t = w_9;
      t = map_1_0(n_3, t);
      a_10 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, s_9, a_26, w_9, (ATerm) ATmakeAppl(sym_Scope_2, k_9, i_26))), (ATerm) ATmakeAppl(sym_SDefT_4, z_25, a_26, c_26, (ATerm) ATmakeAppl(sym_Scope_2, m_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_26), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_9), v_9, a_10)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  static ATerm x_27 (ATerm t)
  {
    ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
    v_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_27 = ATgetFirst((ATermList) t);
        u_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_12 = NULL,h_13 = NULL,z_7 = NULL;
          t = SSLgetAnnotations(v_27);
          y_12 = t;
          t = u_27;
          t = x_27(t);
          h_13 = t;
          t = (ATerm) ATinsert(CheckATermList(h_13), t_27);
          z_7 = t;
          t = SSLsetAnnotations(z_7, y_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_27;
        t = u_86(t);
      }
    return(t);
  }
  t = x_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_26 = NULL,u_26 = NULL,v_26 = NULL;
  s_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_26;
    }
  else
    {
      static ATerm o_3 (ATerm t)
      {
        t = not_null(v_26);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_26 = ATgetFirst((ATermList) t);
          if(((v_26 != NULL) && (v_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_26;
      t = at_end_1_0(o_3, t);
    }
  return(t);
}
static ATerm t_28 (ATerm k_28, ATerm t)
{
  ATerm l_28 = NULL;
  t = SSL_explode_term(k_28);
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_28;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,q_28 = NULL;
  q_28 = t;
  if(match_cons(t, sym__2))
    {
      n_28 = ATgetArgument(t, 0);
      o_28 = ATgetArgument(t, 1);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_3 (ATerm t)
            {
              t = o_28;
              return(t);
            }
            t = n_28;
            t = at_end_1_0(p_3, t);
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = t_28(q_28, t);
          }
      }
    }
  else
    {
      t = t_28(q_28, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_28;
      t = j_92(t);
    }
  else
    {
      ATerm a_29 = NULL,d_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_28 = ATgetFirst((ATermList) t);
          x_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_28;
      t = l_92(t);
      a_29 = t;
      t = x_28;
      t = foldr_3_0(j_92, k_92, l_92, t);
      d_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_29, d_29);
      t = k_92(t);
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,g_30 = NULL,h_30 = NULL,b_8 = NULL;
  h_30 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_30);
  c_30 = t;
  t = d_30;
  t = foldr_3_0(_id, conc_0_0, t_3, t);
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_30);
  b_8 = t;
  t = SSLsetAnnotations(b_8, c_30);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm m_30 = NULL;
        m_30 = t;
        t = (ATerm) ATinsert(ATempty, m_30);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,r_29 = NULL,u_29 = NULL,x_29 = NULL,a_30 = NULL,b_30 = NULL,d_8 = NULL,c_8 = NULL;
  b_30 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_30);
  l_29 = t;
  t = m_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_29 = ATgetFirst((ATermList) t);
      u_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_29);
  n_29 = t;
  t = u_29;
  t = Cons_2_0(q_3, r_3, t);
  x_29 = t;
  t = (ATerm) ATinsert(CheckATermList(x_29), r_29);
  c_8 = t;
  t = SSLsetAnnotations(c_8, n_29);
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_30);
  d_8 = t;
  t = SSLsetAnnotations(d_8, l_29);
  return(t);
}
static ATerm c_5 (ATerm f_37, ATerm g_37, ATerm t)
{
  ATerm r_30 = NULL;
  t = SSL_fputc(f_37, g_37);
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_30);
  return(t);
}
static ATerm d_5 (ATerm l_22, ATerm m_22, ATerm t)
{
  ATerm s_30 = NULL;
  t = SSL_write_term_to_stream_text(l_22, m_22);
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_30);
  return(t);
}
static ATerm f_5 (ATerm v_85 (ATerm), ATerm h_146, ATerm p_22, ATerm t)
{
  ATerm t_30 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_146, term_l_12);
  t = i_5(t);
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_30, p_22);
  t = v_85(t);
  t = fclose_0_0(t);
  t = p_22;
  return(t);
}
static ATerm e_5 (ATerm h_22, ATerm i_22, ATerm t)
{
  ATerm u_30 = NULL;
  t = SSL_write_term_to_stream_baf(h_22, i_22);
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_30);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_12 = ATgetArgument(t, 0);
      if(match_cons(n_12, sym_Stream_1))
        {
          x_30 = ATgetArgument(n_12, 0);
        }
      else
        _fail(t);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5(x_30, y_30, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_12 = ATgetArgument(t, 0);
      if(match_cons(q_12, sym_Stream_1))
        {
          c_31 = ATgetArgument(q_12, 0);
        }
      else
        _fail(t);
      d_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(c_31, d_31, t);
  z_30 = t;
  t = term_r_12;
  a_31 = t;
  t = z_30;
  if(match_cons(t, sym_Stream_1))
    {
      b_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_12, z_30);
  t = c_5(a_31, b_31, t);
  return(t);
}
ATerm output_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  t = s_103(t);
  w_30 = t;
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_12;
        t = get_config_0_0(t);
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = term_x_12;
      }
  }
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_30, w_30);
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_13;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, v_30, w_30);
        LocalPopChoice(a_13);
        if(match_cons(t, sym__2))
          {
            ATerm c_13 = ATgetArgument(t, 0);
            ATerm d_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_5(u_3, v_30, w_30, t);
      }
    else
      {
        t = z_12;
        if(match_cons(t, sym__2))
          {
            ATerm f_13 = ATgetArgument(t, 0);
            ATerm g_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_5(v_3, v_30, w_30, t);
      }
  }
  return(t);
}
static ATerm r_31 (ATerm l_31, ATerm t)
{
  t = SSL_fclose(l_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  p_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_31 = ATgetArgument(t, 0);
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_31);
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            t = r_31(p_31, t);
          }
      }
    }
  else
    {
      t = r_31(p_31, t);
    }
  return(t);
}
static ATerm g_5 (ATerm n_22, ATerm t)
{
  t = SSL_read_term_from_stream(n_22);
  return(t);
}
static ATerm h_5 (ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm s_31 = NULL;
  t = SSL_fopen(h_37, i_37);
  s_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_31 = NULL;
  t = SSL_stdin_stream();
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_31 = NULL;
  t = SSL_stdout_stream();
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_31 = NULL;
  t = SSL_stderr_stream();
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_31);
  return(t);
}
static ATerm e_33 (ATerm d_32, ATerm t)
{
  ATerm e_32 = NULL;
  t = SSL_explode_term(d_32);
  if(match_cons(t, sym__2))
    {
      ATerm k_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_13 = ATgetArgument(t, 1);
        if(((ATgetType(l_13) == AT_LIST) && !(ATisEmpty(l_13))))
          {
            e_32 = ATgetFirst((ATermList) l_13);
            {
              ATerm m_13 = (ATerm) ATgetNext((ATermList) l_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_33 (ATerm h_32, ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,p_32 = NULL,h_8 = NULL;
  t = SSLgetAnnotations(j_32);
  m_32 = t;
  t = h_32;
  if(match_cons(t, sym_Path_1))
    {
      p_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_32, i_32);
  h_8 = t;
  t = SSLsetAnnotations(h_8, m_32);
  if(match_cons(t, sym__2))
    {
      k_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(k_32, l_32, t);
  return(t);
}
static ATerm g_33 (ATerm r_32, ATerm s_32, ATerm t_32, ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,z_32 = NULL,i_8 = NULL;
  t = SSLgetAnnotations(t_32);
  w_32 = t;
  t = SSL_is_string(r_32);
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_32, s_32);
  i_8 = t;
  t = SSLsetAnnotations(i_8, w_32);
  if(match_cons(t, sym__2))
    {
      u_32 = ATgetArgument(t, 0);
      v_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(u_32, v_32, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
  b_33 = t;
  if(match_cons(t, sym__2))
    {
      c_33 = ATgetArgument(t, 0);
      d_33 = ATgetArgument(t, 1);
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_33(b_33, t);
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            {
              ATerm p_13 = t;
              int q_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_33(c_33, d_33, b_33, t);
                  LocalPopChoice(q_13);
                }
              else
                {
                  t = p_13;
                  t = g_33(c_33, d_33, b_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_33(b_33, t);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_33 = NULL;
      k_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_33, term_v_13);
      t = i_5(t);
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      t = debug_1_0(z_3, t);
      _fail(t);
    }
  i_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_5(j_33, t);
  h_33 = t;
  t = i_33;
  t = fclose_0_0(t);
  t = h_33;
  return(t);
}
ATerm input_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_13;
      t = get_config_0_0(t);
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      t = term_a_14;
    }
  t = ReadFromFile_0_0(t);
  t = t_103(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
  m_33 = t;
  t = term_b_14;
  t = whoami_0_0(t);
  n_33 = t;
  t = term_f_14;
  p_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_14), n_33), term_g_14);
  q_33 = t;
  t = SSL_printnl(p_33, q_33);
  t = term_k_14;
  o_33 = t;
  t = SSL_exit(o_33);
  t = m_33;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  if(match_string(t, "-k"))
    {
      t = s_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_33;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  t = SSL_string_to_int(t_33);
  u_33 = t;
  t = term_l_14;
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, u_33);
  t = q_5(v_33, u_33, t);
  t = t_33;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, c_4, d_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm x_33 = NULL;
  x_33 = t;
  if(match_string(t, "-S"))
    {
      t = x_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_33;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  t = term_n_14;
  y_33 = t;
  t = term_o_14;
  z_33 = t;
  t = term_q_14;
  t = q_5(y_33, z_33, t);
  t = term_r_14;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_t_14;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  a_34 = t;
  t = SSL_string_to_int(a_34);
  b_34 = t;
  t = term_n_14;
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, b_34);
  t = q_5(c_34, b_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_34);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_u_14;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  t = term_v_14;
  d_34 = t;
  t = term_b_14;
  e_34 = t;
  t = term_w_14;
  t = q_5(d_34, e_34, t);
  t = term_x_14;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_z_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_4, f_4, g_4, t);
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
        ATerm d_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_4, m_4, n_4, t);
            LocalPopChoice(e_15);
          }
        else
          {
            t = d_15;
            t = Option_3_0(p_4, r_4, t_4, t);
          }
      }
    }
  return(t);
}
static ATerm q_5 (ATerm c_46, ATerm d_46, ATerm t)
{
  ATerm f_34 = NULL;
  t = term_f_15;
  f_34 = t;
  t = SSL_table_put(f_34, c_46, d_46);
  t = (ATerm) ATmakeAppl(sym__3, term_f_15, c_46, d_46);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
      t = term_b_14;
      t = i_0(t);
      k_34 = t;
      t = term_g_15;
      l_34 = t;
      t = term_h_15;
      m_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_15, term_h_15, k_34);
      t = o_5(l_34, m_34, k_34, t);
      _fail(t);
    }
  else
    {
      ATerm p_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_34 = ATgetFirst((ATermList) t);
          j_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_34;
      t = d_0(t);
      t = term_b_14;
      t = g_0(t);
      p_34 = t;
      t = (ATerm) ATinsert(CheckATermList(j_34), p_34);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  if(match_string(t, "-o"))
    {
      t = r_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_34;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL;
  s_34 = t;
  t = term_w_12;
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, s_34);
  t = q_5(t_34, s_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_34);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, w_4, x_4, t);
  return(t);
}
static ATerm o_5 (ATerm c_51, ATerm d_51, ATerm b_51, ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_51, d_51);
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_15 = ATgetArgument(t, 0);
            ATerm n_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_51, d_51);
        t = n_5(c_51, d_51, t);
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        t = (ATerm) ATempty;
      }
  }
  w_34 = t;
  t = (ATerm) ATinsert(CheckATermList(w_34), b_51);
  x_34 = t;
  t = SSL_table_put(c_51, d_51, x_34);
  t = v_34;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
      t = term_b_14;
      t = p_0(t);
      i_35 = t;
      t = term_g_15;
      j_35 = t;
      t = term_h_15;
      k_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_15, term_h_15, i_35);
      t = o_5(j_35, k_35, i_35, t);
      _fail(t);
    }
  else
    {
      ATerm o_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_35 = ATgetFirst((ATermList) t);
          f_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_35 = ATgetFirst((ATermList) t);
          h_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_35;
      t = n_0(t);
      t = g_35;
      t = o_0(t);
      o_35 = t;
      t = (ATerm) ATinsert(CheckATermList(h_35), o_35);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm q_35 = NULL;
  q_35 = t;
  if(match_string(t, "-i"))
    {
      t = q_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_35;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL;
  r_35 = t;
  t = term_z_13;
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_13, r_35);
  t = q_5(s_35, r_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_35);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_o_15;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_5, r_5, s_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_14;
  t = whoami_0_0(t);
  t_35 = t;
  t = term_f_14;
  v_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_15), t_35);
  w_35 = t;
  t = SSL_printnl(v_35, w_35);
  t = term_k_14;
  u_35 = t;
  t = SSL_exit(u_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_15;
  t = get_config_0_0(t);
  return(t);
}
static ATerm j_5 (ATerm b_40, ATerm c_40, ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_40, c_40);
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      t = SSL_addr(b_40, c_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_36;
      t = h_92(t);
    }
  else
    {
      ATerm f_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_36 = ATgetFirst((ATermList) t);
          c_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_36;
      t = foldr_2_0(h_92, i_92, t);
      f_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_36, f_36);
      t = i_92(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_o_14;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm y_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      y_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(y_14, a_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_36 = NULL,i_14 = NULL,p_14 = NULL;
  t = times_0_0(t);
  p_14 = t;
  t = SSL_explode_term(p_14);
  if(match_cons(t, sym__2))
    {
      ATerm u_15 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_14;
  t = foldr_2_0(w_5, x_5, t);
  i_36 = t;
  t = SSL_TicksToSeconds(i_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  if(match_cons(t, sym__2))
    {
      u_36 = ATgetArgument(t, 0);
      v_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_36;
        if((u_36 != t))
          {
            _fail(t);
          }
        t = t_36;
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_36, v_36);
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              t = SSL_gtr(u_36, v_36);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  {
    ATerm z_15 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_37 = NULL;
        t = term_n_14;
        t = get_config_0_0(t);
        b_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_37, term_k_14);
        t = geq_0_0(t);
        t = z_36;
        t = t_100(t);
        LocalPopChoice(b_16);
      }
    else
      {
        t = z_15;
        t = z_36;
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,m_37 = NULL,n_37 = NULL;
  t = run_time_0_0(t);
  d_37 = t;
  t = term_b_14;
  t = whoami_0_0(t);
  e_37 = t;
  t = term_f_14;
  m_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_16), d_37), term_d_16), e_37);
  n_37 = t;
  t = SSL_printnl(m_37, n_37);
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_16), d_37), term_d_16), e_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_14;
  o_37 = t;
  t = SSL_exit(o_37);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL;
  z_37 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_37;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_37 = ATgetArgument(t, 0);
          {
            ATerm r_15 = NULL,n_8 = NULL;
            t = SSLgetAnnotations(z_37);
            r_15 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_37);
            n_8 = t;
            t = SSLsetAnnotations(n_8, r_15);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_37;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm f_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_16;
      t = get_config_0_0(t);
      LocalPopChoice(h_16);
    }
  else
    {
      t = f_16;
      t = fetch_1_0(z_5, t);
    }
  t = j_103(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_38 = ATgetFirst((ATermList) t);
      d_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_38 = NULL,i_38 = NULL;
        static ATerm a_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_38)), not_null(i_38));
          return(t);
        }
        t = d_38;
        t = l_0(t);
        if(((h_38 != NULL) && (h_38 != t)))
          _fail(t);
        else
          h_38 = t;
        t = c_38;
        t = k_0(t);
        if(((i_38 != NULL) && (i_38 != t)))
          _fail(t);
        else
          i_38 = t;
        t = d_38;
        t = reverse_acc_2_0(k_0, a_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_14;
      t = l_0(t);
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_8 = NULL;
  o_38 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_38);
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_38);
  p_8 = t;
  t = SSLsetAnnotations(p_8, m_38);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm q_38 = NULL;
  q_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_38), term_k_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL;
  ATerm l_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_15;
      t = get_config_0_0(t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = l_16;
      t = fetch_1_0(b_6, t);
    }
  t = term_p_16;
  t = echo_0_0(t);
  t = term_g_15;
  k_38 = t;
  t = term_h_15;
  l_38 = t;
  t = term_q_16;
  t = n_5(k_38, l_38, t);
  t = reverse_acc_2_0(_id, c_6, t);
  t = map_1_0(d_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm o_86 (ATerm), ATerm t)
{
  static ATerm n_39 (ATerm t)
  {
    ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
    k_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_39 = ATgetFirst((ATermList) t);
        m_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_16 = t;
      int v_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_16 = NULL,g_16 = NULL,x_8 = NULL;
          t = SSLgetAnnotations(k_39);
          a_16 = t;
          t = l_39;
          t = o_86(t);
          g_16 = t;
          t = (ATerm) ATinsert(CheckATermList(m_39), g_16);
          x_8 = t;
          t = SSLsetAnnotations(x_8, a_16);
          LocalPopChoice(v_16);
        }
      else
        {
          t = s_16;
          {
            ATerm z_16 = NULL,f_17 = NULL,y_8 = NULL;
            t = SSLgetAnnotations(k_39);
            z_16 = t;
            t = m_39;
            t = n_39(t);
            f_17 = t;
            t = (ATerm) ATinsert(CheckATermList(f_17), l_39);
            y_8 = t;
            t = SSLsetAnnotations(y_8, z_16);
          }
        }
    }
    return(t);
  }
  t = n_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  r_39 = t;
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_16 = ATgetFirst((ATermList) t);
                ATerm a_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_39;
          }
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        t = (ATerm) ATinsert(ATempty, r_39);
      }
  }
  s_39 = t;
  t = term_x_12;
  t_39 = t;
  t = SSL_printnl(t_39, s_39);
  t = r_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_15;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm m_5 (ATerm y_35, ATerm z_35, ATerm t)
{
  t = SSL_strcat(y_35, z_35);
  return(t);
}
ATerm debug_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
  x_39 = t;
  t = t_85(t);
  y_39 = t;
  t = term_f_14;
  z_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_39), y_39);
  a_40 = t;
  t = SSL_printnl(z_39, a_40);
  t = x_39;
  return(t);
}
ATerm map_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  static ATerm r_40 (ATerm t)
  {
    ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
    o_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_40;
      }
    else
      {
        ATerm x_17 = NULL,g_18 = NULL,h_18 = NULL,b_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_40 = ATgetFirst((ATermList) t);
            q_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_40);
        x_17 = t;
        t = p_40;
        t = e_86(t);
        g_18 = t;
        t = q_40;
        t = r_40(t);
        h_18 = t;
        t = (ATerm) ATinsert(CheckATermList(h_18), g_18);
        b_9 = t;
        t = SSLsetAnnotations(b_9, x_17);
      }
    return(t);
  }
  t = r_40(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_d_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_40 = NULL;
      z_40 = t;
      t = SSL_is_string(z_40);
      LocalPopChoice(g_17);
    }
  else
    {
      t = e_17;
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_6, t);
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            {
              ATerm f_41 = NULL,g_41 = NULL,i_41 = NULL;
              f_41 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_41 = ATgetArgument(t, 0);
                  t = g_41;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_41 = ATgetArgument(t, 0);
                      t = g_41;
                      {
                        ATerm j_17 = t;
                        int k_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(k_17);
                          }
                        else
                          {
                            t = j_17;
                            t = debug_1_0(i_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_41 = NULL,n_41 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_41 = ATgetArgument(t, 0);
                          i_41 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_41;
                      t = eval_config_0_0(t);
                      m_41 = t;
                      t = i_41;
                      t = eval_config_0_0(t);
                      n_41 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_41, n_41);
                      t = m_5(m_41, n_41, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_5 (ATerm t_52, ATerm u_52, ATerm t)
{
  t = SSL_table_get(t_52, u_52);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL;
  r_41 = t;
  t = term_f_15;
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_15, r_41);
  t = n_5(s_41, r_41, t);
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_41 = NULL,u_41 = NULL;
        t = eval_config_0_0(t);
        t_41 = t;
        t = term_f_15;
        u_41 = t;
        t = SSL_table_put(u_41, r_41, t_41);
        t = t_41;
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
      }
  }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL;
  t = term_o_17;
  x_41 = t;
  t = term_b_14;
  y_41 = t;
  t = term_p_17;
  t = q_5(x_41, y_41, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_q_17;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
  t = term_o_17;
  b_42 = t;
  t = term_b_14;
  c_42 = t;
  t = term_p_17;
  t = q_5(b_42, c_42, t);
  t = term_r_17;
  z_41 = t;
  t = term_b_14;
  a_42 = t;
  t = term_s_17;
  t = q_5(z_41, a_42, t);
  t = term_t_17;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_6, k_6, l_6, t);
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      t = Option_3_0(m_6, o_6, r_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_65 (ATerm), ATerm s_65 (ATerm), ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,g_9 = NULL;
  i_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_42 = ATgetFirst((ATermList) t);
      f_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_42);
  d_42 = t;
  t = e_42;
  t = r_65(t);
  g_42 = t;
  t = f_42;
  t = s_65(t);
  h_42 = t;
  t = (ATerm) ATinsert(CheckATermList(h_42), g_42);
  g_9 = t;
  t = SSLsetAnnotations(g_9, d_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_105 (ATerm), ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,s_42 = NULL,t_42 = NULL,l_9 = NULL;
  n_42 = t;
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_18;
        t = m_105(t);
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
      }
  }
  t = n_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_42 = ATgetFirst((ATermList) t);
      q_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_42);
  o_42 = t;
  t = term_q_15;
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_15, p_42);
  t = q_5(t_42, p_42, t);
  t = q_42;
  {
    static ATerm d_43 (ATerm t)
    {
      ATerm c_18 = t;
      int d_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_42 = NULL;
              w_42 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_42;
              LocalPopChoice(i_18);
            }
          else
            {
              t = f_18;
              t = m_105(t);
              t = Cons_2_0(_id, d_43, t);
            }
          LocalPopChoice(d_18);
        }
      else
        {
          t = c_18;
          {
            ATerm z_42 = NULL,a_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_42 = ATgetFirst((ATermList) t);
                a_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_43), (ATerm) ATmakeAppl(sym_Undefined_1, z_42));
          }
        }
      return(t);
    }
    t = d_43(t);
  }
  s_42 = t;
  t = (ATerm) ATinsert(CheckATermList(s_42), (ATerm) ATmakeAppl(sym_Program_1, p_42));
  l_9 = t;
  t = SSLsetAnnotations(l_9, o_42);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm p_43 = NULL;
  p_43 = t;
  if(match_string(t, "--help"))
    {
      t = p_43;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_43;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_43;
        }
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL;
  t = term_i_16;
  q_43 = t;
  t = term_b_14;
  r_43 = t;
  t = term_j_18;
  t = q_5(q_43, r_43, t);
  t = term_k_18;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_l_18;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL;
  k_43 = t;
  t = term_g_15;
  m_43 = t;
  t = term_h_15;
  n_43 = t;
  t = (ATerm) ATempty;
  o_43 = t;
  t = SSL_table_put(m_43, n_43, o_43);
  t = k_43;
  {
    static ATerm s_6 (ATerm t)
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_105(t);
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
          {
            ATerm o_18 = t;
            int p_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_6, u_6, v_6, t);
                LocalPopChoice(p_18);
              }
            else
              {
                t = o_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_6, t);
  }
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_43 = NULL;
        y_43 = t;
        {
          ATerm s_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_19 = NULL;
              t = y_43;
              {
                ATerm u_18 = t;
                int v_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_16;
                    t = get_config_0_0(t);
                    LocalPopChoice(v_18);
                  }
                else
                  {
                    t = u_18;
                    t = fetch_1_0(w_6, t);
                  }
              }
              t = y_43;
              t = default_system_usage_0_0(t);
              t = term_o_14;
              j_19 = t;
              t = SSL_exit(j_19);
              LocalPopChoice(t_18);
            }
          else
            {
              t = s_18;
              {
                ATerm n_19 = NULL;
                t = term_o_17;
                t = get_config_0_0(t);
                t = y_43;
                t = default_system_about_0_0(t);
                t = term_o_14;
                n_19 = t;
                t = SSL_exit(n_19);
              }
            }
        }
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm x_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
              static ATerm y_6 (ATerm t)
              {
                ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,p_9 = NULL;
                e_44 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_44);
                c_44 = t;
                t = d_44;
                if(((i_43 != NULL) && (i_43 != t)))
                  _fail(t);
                else
                  i_43 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_44);
                p_9 = t;
                t = SSLsetAnnotations(p_9, c_44);
                return(t);
              }
              t = fetch_1_0(y_6, t);
              t = term_f_14;
              a_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_43)), term_a_19);
              b_44 = t;
              t = SSL_printnl(a_44, b_44);
              t = (ATerm) ATmakeAppl(sym__2, term_f_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_43)), term_a_19));
              t = default_system_usage_0_0(t);
              t = term_k_14;
              z_43 = t;
              t = SSL_exit(z_43);
              LocalPopChoice(z_18);
            }
          else
            {
              t = x_18;
            }
        }
      }
  }
  j_43 = t;
  t = term_g_15;
  l_43 = t;
  t = SSL_table_destroy(l_43);
  t = j_43;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  t = parse_options_1_0(l_103, t);
  j_44 = t;
  t = term_b_19;
  m_44 = t;
  t = SSL_table_create(m_44);
  t = term_b_19;
  k_44 = t;
  t = term_c_19;
  l_44 = t;
  t = SSL_table_put(k_44, l_44, j_44);
  t = j_44;
  t = n_103(t);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_103, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        {
          ATerm f_19 = t;
          int h_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_19);
            }
          else
            {
              t = f_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm i_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(k_19);
    }
  else
    {
      t = i_19;
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm p_19 = t;
              int q_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(c_7, d_7, e_7, t);
                  LocalPopChoice(q_19);
                }
              else
                {
                  t = p_19;
                  {
                    ATerm r_19 = t;
                    int s_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(s_19);
                      }
                    else
                      {
                        t = r_19;
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
static ATerm b_7 (ATerm t)
{
  t = input_1_0(n_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  t = term_b_13;
  o_44 = t;
  t = term_b_14;
  p_44 = t;
  t = term_t_19;
  t = q_5(o_44, p_44, t);
  t = term_u_19;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_6, default_usage_0_0, _id, b_7, t);
  return(t);
}
