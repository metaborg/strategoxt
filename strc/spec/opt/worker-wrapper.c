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
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
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
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
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
ATerm term_d_21;
ATerm term_c_21;
ATerm term_a_21;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_m_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_k_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_c_15;
ATerm term_z_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_c_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Sort_2, term_c_13, (ATerm) ATempty);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_y_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__2, term_f_16, term_l_15);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_o_16, term_p_16);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__2, term_w_18, term_l_15);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_l_15);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_u_17, term_l_15);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_k_14, term_l_15);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
static ATerm s_4 (ATerm d_91 (ATerm), ATerm e_28, ATerm d_28, ATerm t);
ATerm genzip_4_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm x_4 (ATerm x_590, ATerm c_591, ATerm k_56, ATerm t);
ATerm while_not_2_0 (ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm t);
ATerm for_3_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm z_5 (ATerm h_3, ATerm j_3, ATerm k_3, ATerm t);
static ATerm u_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm h_111 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm c_5 (ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm k_28, ATerm j_28, ATerm t);
static ATerm d_5 (ATerm i_91 (ATerm), ATerm g_28, ATerm f_28, ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm free_vars_3_0 (ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm e_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm worker_wrapper_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm u_87 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm u_33 (ATerm g_33, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm worker_wrapper_spec_0_0 (ATerm t);
static ATerm e_5 (ATerm g_37, ATerm h_37, ATerm t);
static ATerm f_5 (ATerm n_22, ATerm o_22, ATerm t);
static ATerm h_5 (ATerm v_86 (ATerm), ATerm k_147, ATerm r_22, ATerm t);
static ATerm g_5 (ATerm j_22, ATerm k_22, ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm output_1_0 (ATerm x_104 (ATerm), ATerm t);
static ATerm v_35 (ATerm p_35, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_5 (ATerm p_22, ATerm t);
static ATerm j_5 (ATerm i_37, ATerm j_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_37 (ATerm h_36, ATerm t);
static ATerm r_37 (ATerm l_36, ATerm m_36, ATerm n_36, ATerm t);
static ATerm s_37 (ATerm v_36, ATerm w_36, ATerm x_36, ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm y_104 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_5 (ATerm y_46, ATerm z_46, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_5 (ATerm y_51, ATerm z_51, ATerm x_51, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_5 (ATerm b_40, ATerm c_40, ATerm t);
ATerm foldr_2_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm y_101 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm need_help_1_0 (ATerm o_104 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm o_5 (ATerm a_36, ATerm b_36, ATerm t);
ATerm debug_1_0 (ATerm t_86 (ATerm), ATerm t);
ATerm map_1_0 (ATerm e_87 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm p_5 (ATerm p_53, ATerm q_53, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_106 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm parse_options_1_0 (ATerm q_106 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
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
static ATerm s_4 (ATerm d_91 (ATerm), ATerm e_28, ATerm d_28, ATerm t)
{
  static ATerm d_1 (ATerm t)
  {
    ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL;
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
            y_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_7 = t;
          int t_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_0;
              {
                static ATerm a_0 (ATerm t)
                {
                  t = d_28;
                  return(t);
                }
                t = c_5(d_91, a_0, x_0, y_0, t);
              }
              t = d_1(t);
              LocalPopChoice(t_7);
            }
          else
            {
              t = s_7;
              {
                ATerm h_0 = NULL,a_1 = NULL,e_0 = NULL;
                t = SSLgetAnnotations(w_0);
                h_0 = t;
                t = y_0;
                t = d_1(t);
                a_1 = t;
                t = (ATerm) ATinsert(CheckATermList(a_1), x_0);
                e_0 = t;
                t = SSLsetAnnotations(e_0, h_0);
              }
            }
        }
      }
    return(t);
  }
  t = e_28;
  t = d_1(t);
  return(t);
}
ATerm genzip_4_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t)
{
  static ATerm m_1 (ATerm t)
  {
    ATerm y_7 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_89(t);
        LocalPopChoice(c_8);
      }
    else
      {
        t = y_7;
        {
          ATerm f_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,q_0 = NULL;
          t = i_89(t);
          l_1 = t;
          if(match_cons(t, sym__2))
            {
              h_1 = ATgetArgument(t, 0);
              i_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_1);
          f_1 = t;
          t = h_1;
          t = k_89(t);
          j_1 = t;
          t = i_1;
          t = m_1(t);
          k_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_1, k_1);
          q_0 = t;
          t = SSLsetAnnotations(q_0, f_1);
          t = j_89(t);
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
      ATerm d_8 = ATgetArgument(t, 0);
      if(((ATgetType(d_8) != AT_LIST) || !(ATisEmpty(d_8))))
        _fail(t);
      {
        ATerm e_8 = ATgetArgument(t, 1);
        if(((ATgetType(e_8) != AT_LIST) || !(ATisEmpty(e_8))))
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
  ATerm g_2 = NULL,i_2 = NULL,j_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if(((ATgetType(g_8) == AT_LIST) && !(ATisEmpty(g_8))))
        {
          g_2 = ATgetFirst((ATermList) g_8);
          i_2 = (ATerm) ATgetNext((ATermList) g_8);
        }
      else
        _fail(t);
      {
        ATerm h_8 = ATgetArgument(t, 1);
        if(((ATgetType(h_8) == AT_LIST) && !(ATisEmpty(h_8))))
          {
            j_2 = ATgetFirst((ATermList) h_8);
            l_2 = (ATerm) ATgetNext((ATermList) h_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_2, j_2), (ATerm) ATmakeAppl(sym__2, i_2, l_2));
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_2), m_2);
  return(t);
}
static ATerm x_4 (ATerm x_590, ATerm c_591, ATerm k_56, ATerm t)
{
  ATerm o_1 = NULL,u_1 = NULL,x_1 = NULL,y_1 = NULL;
  t = SSL_explode_term(c_591);
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_590);
  if(match_cons(t, sym__2))
    {
      if((o_1 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_1, x_1);
  t = genzip_4_0(b_0, c_0, f_0, _id, t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_1, k_56);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm t)
{
  static ATerm q_2 (ATerm t)
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_80(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        t = k_80(t);
        t = q_2(t);
      }
    return(t);
  }
  t = q_2(t);
  return(t);
}
ATerm for_3_0 (ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm t)
{
  t = m_80(t);
  t = while_not_2_0(n_80, o_80, t);
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
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,s_0 = NULL;
  d_3 = t;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_3);
  a_3 = t;
  t = c_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_3, c_3);
  s_0 = t;
  t = SSLsetAnnotations(s_0, a_3);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
  h_4 = t;
  if(match_cons(t, sym__2))
    {
      i_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_4 = ATgetFirst((ATermList) t);
      m_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_5(i_4, k_4, h_4, t);
            LocalPopChoice(p_8);
          }
        else
          {
            t = n_8;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_4), l_4), m_4);
          }
      }
    }
  else
    {
      t = z_5(i_4, k_4, h_4, t);
    }
  return(t);
}
static ATerm z_5 (ATerm h_3, ATerm j_3, ATerm k_3, ATerm t)
{
  ATerm l_3 = NULL,r_3 = NULL,t_0 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  t = SSLgetAnnotations(k_3);
  l_3 = t;
  t = j_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_3 = ATgetFirst((ATermList) t);
      z_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_3;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_3;
        if((x_3 != t))
          {
            _fail(t);
          }
        t = z_3;
        LocalPopChoice(y_8);
      }
    else
      {
        t = r_8;
        t = j_3;
        t = x_4(x_3, y_3, z_3, t);
      }
  }
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, r_3);
  t_0 = t;
  t = SSLsetAnnotations(t_0, l_3);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      if((y_5 != ATgetArgument(t, 1)))
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
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_0, m_0, r_0, t);
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm y_4 = NULL,m_5 = NULL,v_5 = NULL;
        y_4 = t;
        if(match_cons(t, sym__2))
          {
            m_5 = ATgetArgument(t, 0);
            v_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_4;
        t = s_4(u_0, m_5, v_5, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm h_111 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,i_12 = NULL,j_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
      {
        ATerm t_1 = NULL,z_1 = NULL,a_2 = NULL,e_1 = NULL;
        t = SSLgetAnnotations(i_12);
        t_1 = t;
        t = j_12;
        t = h_111(t);
        z_1 = t;
        t = e_12;
        t = f_111(t);
        a_2 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, z_1, a_2);
        e_1 = t;
        t = SSLsetAnnotations(e_1, t_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          j_12 = ATgetArgument(t, 0);
          e_12 = ATgetArgument(t, 1);
          f_12 = ATgetArgument(t, 2);
          g_12 = ATgetArgument(t, 3);
          {
            ATerm t_2 = NULL,y_2 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,u_7 = NULL;
            t = SSLgetAnnotations(i_12);
            t_2 = t;
            t = j_12;
            t = h_111(t);
            y_2 = t;
            t = e_12;
            t = h_111(t);
            e_3 = t;
            t = f_12;
            t = h_111(t);
            f_3 = t;
            t = g_12;
            t = f_111(t);
            g_3 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_2, e_3, f_3, g_3);
            u_7 = t;
            t = SSLsetAnnotations(u_7, t_2);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              j_12 = ATgetArgument(t, 0);
              e_12 = ATgetArgument(t, 1);
              f_12 = ATgetArgument(t, 2);
              g_12 = ATgetArgument(t, 3);
              {
                ATerm q_4 = NULL,a_5 = NULL,b_5 = NULL,n_5 = NULL,r_5 = NULL,v_7 = NULL;
                t = SSLgetAnnotations(i_12);
                q_4 = t;
                t = j_12;
                t = h_111(t);
                a_5 = t;
                t = e_12;
                t = h_111(t);
                b_5 = t;
                t = f_12;
                t = h_111(t);
                n_5 = t;
                t = g_12;
                t = f_111(t);
                r_5 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, a_5, b_5, n_5, r_5);
                v_7 = t;
                t = SSLsetAnnotations(v_7, q_4);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  j_12 = ATgetArgument(t, 0);
                  {
                    ATerm g_6 = NULL,i_6 = NULL,w_7 = NULL;
                    t = SSLgetAnnotations(i_12);
                    g_6 = t;
                    t = j_12;
                    t = f_111(t);
                    i_6 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, i_6);
                    w_7 = t;
                    t = SSLsetAnnotations(w_7, g_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      j_12 = ATgetArgument(t, 0);
                      {
                        ATerm o_6 = NULL,q_6 = NULL,x_7 = NULL;
                        t = SSLgetAnnotations(i_12);
                        o_6 = t;
                        t = j_12;
                        t = f_111(t);
                        q_6 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, q_6);
                        x_7 = t;
                        t = SSLsetAnnotations(x_7, o_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          j_12 = ATgetArgument(t, 0);
                          {
                            ATerm w_6 = NULL,y_6 = NULL,a_8 = NULL;
                            t = SSLgetAnnotations(i_12);
                            w_6 = t;
                            t = j_12;
                            t = f_111(t);
                            y_6 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, y_6);
                            a_8 = t;
                            t = SSLsetAnnotations(a_8, w_6);
                          }
                        }
                      else
                        {
                          ATerm e_7 = NULL,g_7 = NULL,b_8 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              j_12 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(i_12);
                          e_7 = t;
                          t = j_12;
                          t = f_111(t);
                          g_7 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, g_7);
                          b_8 = t;
                          t = SSLsetAnnotations(b_8, e_7);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm v_0 (ATerm t)
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
static ATerm z_0 (ATerm t)
{
  ATerm d_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_9);
    }
  else
    {
      t = d_9;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            {
              ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,f_14 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_14 = ATgetArgument(t, 0);
                  b_14 = ATgetArgument(t, 1);
                  c_14 = ATgetArgument(t, 2);
                  f_14 = ATgetArgument(t, 3);
                  t = c_14;
                  t = map_1_0(b_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_14 = ATgetArgument(t, 0);
                      b_14 = ATgetArgument(t, 1);
                      c_14 = ATgetArgument(t, 2);
                      f_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_14;
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
  ATerm q_14 = NULL;
  ATerm j_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_14 = ATgetArgument(t, 0);
          {
            ATerm n_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_9);
      t = q_14;
    }
  else
    {
      t = j_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_14;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm g_15 = NULL;
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_15 = ATgetArgument(t, 0);
          {
            ATerm t_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_9);
      t = g_15;
    }
  else
    {
      t = q_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_15;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm k_15 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_15);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm v_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_9);
    }
  else
    {
      t = v_9;
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_15 = ATgetArgument(t, 0);
                  p_15 = ATgetArgument(t, 1);
                  q_15 = ATgetArgument(t, 2);
                  r_15 = ATgetArgument(t, 3);
                  t = q_15;
                  t = map_1_0(p_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_15 = ATgetArgument(t, 0);
                      p_15 = ATgetArgument(t, 1);
                      q_15 = ATgetArgument(t, 2);
                      r_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_15;
                  t = map_1_0(q_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm e_16 = NULL;
  ATerm a_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_16 = ATgetArgument(t, 0);
          {
            ATerm d_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_10);
      t = e_16;
    }
  else
    {
      t = a_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_16;
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm s_16 = NULL;
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_16 = ATgetArgument(t, 0);
          {
            ATerm g_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_10);
      t = s_16;
    }
  else
    {
      t = e_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_16;
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm y_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_16);
  return(t);
}
static ATerm s_1 (ATerm t)
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
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
              ATerm a_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_17 = ATgetArgument(t, 0);
                  f_17 = ATgetArgument(t, 1);
                  g_17 = ATgetArgument(t, 2);
                  h_17 = ATgetArgument(t, 3);
                  t = g_17;
                  t = map_1_0(v_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_17 = ATgetArgument(t, 0);
                      f_17 = ATgetArgument(t, 1);
                      g_17 = ATgetArgument(t, 2);
                      h_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_17;
                  t = map_1_0(w_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm q_17 = NULL;
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_17 = ATgetArgument(t, 0);
          {
            ATerm p_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_10);
      t = q_17;
    }
  else
    {
      t = n_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_17;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm i_18 = NULL;
  ATerm q_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_18 = ATgetArgument(t, 0);
          {
            ATerm u_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_10);
      t = i_18;
    }
  else
    {
      t = q_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_18;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm v_18 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_18);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm d_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_11);
          }
        else
          {
            t = d_11;
            {
              ATerm y_18 = NULL,e_19 = NULL,g_19 = NULL,h_19 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_18 = ATgetArgument(t, 0);
                  e_19 = ATgetArgument(t, 1);
                  g_19 = ATgetArgument(t, 2);
                  h_19 = ATgetArgument(t, 3);
                  t = g_19;
                  t = map_1_0(d_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_18 = ATgetArgument(t, 0);
                      e_19 = ATgetArgument(t, 1);
                      g_19 = ATgetArgument(t, 2);
                      h_19 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_19;
                  t = map_1_0(e_2, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm s_19 = NULL;
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_19 = ATgetArgument(t, 0);
          {
            ATerm i_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_11);
      t = s_19;
    }
  else
    {
      t = g_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_19;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm b_21 = NULL;
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_21 = ATgetArgument(t, 0);
          {
            ATerm n_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_11);
      t = b_21;
    }
  else
    {
      t = j_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_21;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm s_13 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      s_13 = ATgetArgument(t, 0);
      t = s_13;
      t = free_vars_3_0(v_0, z_0, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          s_13 = ATgetArgument(t, 0);
          t = s_13;
          t = free_vars_3_0(g_1, n_1, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              s_13 = ATgetArgument(t, 0);
              t = s_13;
              t = free_vars_3_0(r_1, s_1, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  s_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = s_13;
              t = free_vars_3_0(b_2, c_2, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm x_21 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_21);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm q_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_11);
          }
        else
          {
            t = q_11;
            {
              ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_22 = ATgetArgument(t, 0);
                  c_22 = ATgetArgument(t, 1);
                  d_22 = ATgetArgument(t, 2);
                  e_22 = ATgetArgument(t, 3);
                  t = d_22;
                  t = map_1_0(k_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_22 = ATgetArgument(t, 0);
                      c_22 = ATgetArgument(t, 1);
                      d_22 = ATgetArgument(t, 2);
                      e_22 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_22;
                  t = map_1_0(o_2, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm h_23 = NULL;
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_23 = ATgetArgument(t, 0);
          {
            ATerm v_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_11);
      t = h_23;
    }
  else
    {
      t = t_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_23;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm c_24 = NULL;
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_24 = ATgetArgument(t, 0);
          {
            ATerm y_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_11);
      t = c_24;
    }
  else
    {
      t = w_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_24;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm m_21 = NULL,u_21 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_21 = ATgetArgument(t, 0);
      t = u_21;
      if(match_cons(t, sym_Rule_3))
        {
          m_21 = ATgetArgument(t, 0);
          {
            ATerm z_11 = ATgetArgument(t, 1);
          }
          {
            ATerm a_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = m_21;
      t = free_vars_3_0(f_2, h_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_21 = ATgetArgument(t, 0);
          {
            ATerm b_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_21;
    }
  return(t);
}
static ATerm c_5 (ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm k_28, ATerm j_28, ATerm t)
{
  t = m_91(t);
  {
    static ATerm p_2 (ATerm t)
    {
      ATerm l_24 = NULL;
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_28, l_24);
      t = l_91(t);
      return(t);
    }
    t = fetch_1_0(p_2, t);
  }
  t = j_28;
  return(t);
}
static ATerm d_5 (ATerm i_91 (ATerm), ATerm g_28, ATerm f_28, ATerm t)
{
  static ATerm a_26 (ATerm t)
  {
    ATerm q_25 = NULL,u_25 = NULL,w_25 = NULL;
    q_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_25 = ATgetFirst((ATermList) t);
            w_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_12 = t;
          int d_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_25;
              {
                static ATerm r_2 (ATerm t)
                {
                  t = f_28;
                  return(t);
                }
                t = c_5(i_91, r_2, u_25, w_25, t);
              }
              t = a_26(t);
              LocalPopChoice(d_12);
            }
          else
            {
              t = c_12;
              {
                ATerm n_7 = NULL,q_7 = NULL,o_8 = NULL;
                t = SSLgetAnnotations(q_25);
                n_7 = t;
                t = w_25;
                t = a_26(t);
                q_7 = t;
                t = (ATerm) ATinsert(CheckATermList(q_7), u_25);
                o_8 = t;
                t = SSLsetAnnotations(o_8, n_7);
              }
            }
        }
      }
    return(t);
  }
  t = g_28;
  t = a_26(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL;
  if(match_cons(t, sym__2))
    {
      k_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(x_2, k_8, l_8, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm m_8 = NULL;
  if(match_cons(t, sym__2))
    {
      m_8 = ATgetArgument(t, 0);
      if((m_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm x_8 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(n_3, x_8, e_9, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm f_9 = NULL;
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      if((f_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm e_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm h_27 (ATerm t)
  {
    ATerm h_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_109(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = h_12;
        {
          ATerm m_12 = t;
          int n_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_26 = NULL,o_26 = NULL,z_7 = NULL,f_8 = NULL;
              m_26 = t;
              t = d_109(t);
              o_26 = t;
              t = m_26;
              {
                static ATerm s_2 (ATerm t)
                {
                  ATerm s_26 = NULL;
                  t = h_27(t);
                  s_26 = t;
                  t = (ATerm) ATmakeAppl(sym__2, s_26, o_26);
                  t = diff_0_0(t);
                  return(t);
                }
                t = e_109(s_2, h_27, u_2, t);
              }
              f_8 = t;
              t = SSL_explode_term(f_8);
              if(match_cons(t, sym__2))
                {
                  ATerm o_12 = ATgetArgument(t, 0);
                  z_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_7;
              t = foldr_3_0(v_2, w_2, _id, t);
              LocalPopChoice(n_12);
            }
          else
            {
              t = m_12;
              {
                ATerm s_8 = NULL,t_8 = NULL;
                t_8 = t;
                t = SSL_explode_term(t_8);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_12 = ATgetArgument(t, 0);
                    s_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_8;
                t = foldr_3_0(i_3, m_3, h_27, t);
              }
            }
        }
      }
    return(t);
  }
  t = h_27(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm c_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_11);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            {
              ATerm e_11 = NULL,l_11 = NULL,m_11 = NULL,r_11 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_11 = ATgetArgument(t, 0);
                  l_11 = ATgetArgument(t, 1);
                  m_11 = ATgetArgument(t, 2);
                  r_11 = ATgetArgument(t, 3);
                  t = m_11;
                  t = map_1_0(q_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_11 = ATgetArgument(t, 0);
                      l_11 = ATgetArgument(t, 1);
                      m_11 = ATgetArgument(t, 2);
                      r_11 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_11;
                  t = map_1_0(s_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm k_12 = NULL;
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_12 = ATgetArgument(t, 0);
          {
            ATerm w_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_12);
      t = k_12;
    }
  else
    {
      t = u_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_12;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm a_13 = NULL;
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_13 = ATgetArgument(t, 0);
          {
            ATerm z_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_12);
      t = a_13;
    }
  else
    {
      t = x_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_13;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm d_13 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      d_13 = ATgetArgument(t, 0);
      {
        ATerm b_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_13;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm e_13 = NULL;
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_13, term_i_13);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm f_13 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      f_13 = ATgetArgument(t, 0);
      {
        ATerm j_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_13), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm g_13 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      g_13 = ATgetArgument(t, 0);
      {
        ATerm k_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, g_13);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,g_31 = NULL,h_31 = NULL,k_31 = NULL,l_31 = NULL;
  y_30 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_30 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
      c_31 = ATgetArgument(t, 2);
      d_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = d_31;
  if(match_cons(t, sym_Seq_2))
    {
      e_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
      t = e_31;
      if(match_cons(t, sym_Match_1))
        {
          x_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, z_30, b_31, c_31, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_30), g_31)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm l_10 = NULL,m_10 = NULL,r_10 = NULL,s_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,b_11 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          e_31 = ATgetArgument(t, 0);
          g_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_31;
      if(match_cons(t, sym_Seq_2))
        {
          h_31 = ATgetArgument(t, 0);
          l_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_31;
      if(match_cons(t, sym_Match_1))
        {
          k_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_31;
      if(match_cons(t, sym_Op_2))
        {
          ATerm l_13 = ATgetArgument(t, 0);
          ATerm m_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_31;
      t = free_vars_3_0(o_3, p_3, tboundin_3_0, t);
      y_10 = t;
      t = c_31;
      t = map_1_0(t_3, t);
      b_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_10, b_11);
      t = diff_0_0(t);
      m_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_31, m_10);
      t = diff_0_0(t);
      l_10 = t;
      t = m_10;
      t = map_1_0(u_3, t);
      r_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_31, r_10);
      t = conc_0_0(t);
      w_10 = t;
      t = new_0_0(t);
      s_10 = t;
      t = b_31;
      t = map_1_0(w_3, t);
      v_10 = t;
      t = w_10;
      t = map_1_0(a_4, t);
      x_10 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, s_10, b_31, w_10, (ATerm) ATmakeAppl(sym_Scope_2, l_10, l_31))), (ATerm) ATmakeAppl(sym_SDefT_4, z_30, b_31, c_31, (ATerm) ATmakeAppl(sym_Scope_2, m_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_31), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_10), v_10, x_10)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  static ATerm a_33 (ATerm t)
  {
    ATerm v_32 = NULL,y_32 = NULL,z_32 = NULL;
    z_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_32 = ATgetFirst((ATermList) t);
        y_32 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_13 = NULL,w_13 = NULL,q_8 = NULL;
          t = SSLgetAnnotations(z_32);
          t_13 = t;
          t = y_32;
          t = a_33(t);
          w_13 = t;
          t = (ATerm) ATinsert(CheckATermList(w_13), v_32);
          q_8 = t;
          t = SSLsetAnnotations(q_8, t_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_32;
        t = u_87(t);
      }
    return(t);
  }
  t = a_33(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_31;
    }
  else
    {
      static ATerm b_4 (ATerm t)
      {
        t = not_null(w_31);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_31 = ATgetFirst((ATermList) t);
          if(((w_31 != NULL) && (w_31 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_31;
      t = at_end_1_0(b_4, t);
    }
  return(t);
}
static ATerm u_33 (ATerm g_33, ATerm t)
{
  ATerm k_33 = NULL;
  t = SSL_explode_term(g_33);
  if(match_cons(t, sym__2))
    {
      ATerm n_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_33;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  r_33 = t;
  if(match_cons(t, sym__2))
    {
      p_33 = ATgetArgument(t, 0);
      q_33 = ATgetArgument(t, 1);
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_4 (ATerm t)
            {
              t = q_33;
              return(t);
            }
            t = p_33;
            t = at_end_1_0(c_4, t);
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            t = u_33(r_33, t);
          }
      }
    }
  else
    {
      t = u_33(r_33, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm l_93 (ATerm), ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_33;
      t = j_93(t);
    }
  else
    {
      ATerm b_34 = NULL,c_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_33 = ATgetFirst((ATermList) t);
          y_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_33;
      t = l_93(t);
      b_34 = t;
      t = y_33;
      t = foldr_3_0(j_93, k_93, l_93, t);
      c_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_34, c_34);
      t = k_93(t);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,u_8 = NULL;
  p_34 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_34);
  m_34 = t;
  t = n_34;
  t = foldr_3_0(_id, conc_0_0, f_4, t);
  o_34 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_34);
  u_8 = t;
  t = SSLsetAnnotations(u_8, m_34);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm r_34 = NULL;
        r_34 = t;
        t = (ATerm) ATinsert(ATempty, r_34);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,w_8 = NULL,v_8 = NULL;
  l_34 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_34);
  e_34 = t;
  t = f_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_34 = ATgetFirst((ATermList) t);
      i_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_34);
  g_34 = t;
  t = i_34;
  t = Cons_2_0(d_4, e_4, t);
  j_34 = t;
  t = (ATerm) ATinsert(CheckATermList(j_34), h_34);
  v_8 = t;
  t = SSLsetAnnotations(v_8, g_34);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_34);
  w_8 = t;
  t = SSLsetAnnotations(w_8, e_34);
  return(t);
}
static ATerm e_5 (ATerm g_37, ATerm h_37, ATerm t)
{
  ATerm v_34 = NULL;
  t = SSL_fputc(g_37, h_37);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_34);
  return(t);
}
static ATerm f_5 (ATerm n_22, ATerm o_22, ATerm t)
{
  ATerm w_34 = NULL;
  t = SSL_write_term_to_stream_text(n_22, o_22);
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_34);
  return(t);
}
static ATerm h_5 (ATerm v_86 (ATerm), ATerm k_147, ATerm r_22, ATerm t)
{
  ATerm x_34 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_147, term_u_13);
  t = k_5(t);
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_34, r_22);
  t = v_86(t);
  t = fclose_0_0(t);
  t = r_22;
  return(t);
}
static ATerm g_5 (ATerm j_22, ATerm k_22, ATerm t)
{
  ATerm y_34 = NULL;
  t = SSL_write_term_to_stream_baf(j_22, k_22);
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_34);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_13 = ATgetArgument(t, 0);
      if(match_cons(v_13, sym_Stream_1))
        {
          b_35 = ATgetArgument(v_13, 0);
        }
      else
        _fail(t);
      c_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(b_35, c_35, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_13 = ATgetArgument(t, 0);
      if(match_cons(x_13, sym_Stream_1))
        {
          g_35 = ATgetArgument(x_13, 0);
        }
      else
        _fail(t);
      h_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(g_35, h_35, t);
  d_35 = t;
  t = term_z_13;
  e_35 = t;
  t = d_35;
  if(match_cons(t, sym_Stream_1))
    {
      f_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_13, d_35);
  t = e_5(e_35, f_35, t);
  return(t);
}
ATerm output_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  t = x_104(t);
  a_35 = t;
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_14;
        t = get_config_0_0(t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = term_h_14;
      }
  }
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_34, a_35);
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_14;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, z_34, a_35);
        LocalPopChoice(j_14);
        if(match_cons(t, sym__2))
          {
            ATerm l_14 = ATgetArgument(t, 0);
            ATerm m_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_5(g_4, z_34, a_35, t);
      }
    else
      {
        t = i_14;
        if(match_cons(t, sym__2))
          {
            ATerm n_14 = ATgetArgument(t, 0);
            ATerm o_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_5(j_4, z_34, a_35, t);
      }
  }
  return(t);
}
static ATerm v_35 (ATerm p_35, ATerm t)
{
  t = SSL_fclose(p_35);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  t_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_35 = ATgetArgument(t, 0);
      {
        ATerm p_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_35);
            LocalPopChoice(r_14);
          }
        else
          {
            t = p_14;
            t = v_35(t_35, t);
          }
      }
    }
  else
    {
      t = v_35(t_35, t);
    }
  return(t);
}
static ATerm i_5 (ATerm p_22, ATerm t)
{
  t = SSL_read_term_from_stream(p_22);
  return(t);
}
static ATerm j_5 (ATerm i_37, ATerm j_37, ATerm t)
{
  ATerm w_35 = NULL;
  t = SSL_fopen(i_37, j_37);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_35);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_35 = NULL;
  t = SSL_stdin_stream();
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_35);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_35 = NULL;
  t = SSL_stdout_stream();
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_35);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_35 = NULL;
  t = SSL_stderr_stream();
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_35);
  return(t);
}
static ATerm o_37 (ATerm h_36, ATerm t)
{
  ATerm i_36 = NULL;
  t = SSL_explode_term(h_36);
  if(match_cons(t, sym__2))
    {
      ATerm s_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_14 = ATgetArgument(t, 1);
        if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
          {
            i_36 = ATgetFirst((ATermList) t_14);
            {
              ATerm u_14 = (ATerm) ATgetNext((ATermList) t_14);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_37 (ATerm l_36, ATerm m_36, ATerm n_36, ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,t_36 = NULL,b_9 = NULL;
  t = SSLgetAnnotations(n_36);
  q_36 = t;
  t = l_36;
  if(match_cons(t, sym_Path_1))
    {
      t_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_36, m_36);
  b_9 = t;
  t = SSLsetAnnotations(b_9, q_36);
  if(match_cons(t, sym__2))
    {
      o_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(o_36, p_36, t);
  return(t);
}
static ATerm s_37 (ATerm v_36, ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,d_37 = NULL,c_9 = NULL;
  t = SSLgetAnnotations(x_36);
  a_37 = t;
  t = SSL_is_string(v_36);
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_37, w_36);
  c_9 = t;
  t = SSLsetAnnotations(c_9, a_37);
  if(match_cons(t, sym__2))
    {
      y_36 = ATgetArgument(t, 0);
      z_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(y_36, z_36, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm f_37 = NULL,m_37 = NULL,n_37 = NULL;
  f_37 = t;
  if(match_cons(t, sym__2))
    {
      m_37 = ATgetArgument(t, 0);
      n_37 = ATgetArgument(t, 1);
      {
        ATerm v_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_37(f_37, t);
            LocalPopChoice(w_14);
          }
        else
          {
            t = v_14;
            {
              ATerm x_14 = t;
              int y_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_37(m_37, n_37, f_37, t);
                  LocalPopChoice(y_14);
                }
              else
                {
                  t = x_14;
                  t = s_37(m_37, n_37, f_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_37(f_37, t);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_z_14;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_37 = NULL;
      w_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_37, term_c_15);
      t = k_5(t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      t = debug_1_0(n_4, t);
      _fail(t);
    }
  u_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5(v_37, t);
  t_37 = t;
  t = u_37;
  t = fclose_0_0(t);
  t = t_37;
  return(t);
}
ATerm input_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm f_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_15;
      t = get_config_0_0(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = f_15;
      t = term_j_15;
    }
  t = ReadFromFile_0_0(t);
  t = y_104(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  y_37 = t;
  t = term_l_15;
  t = whoami_0_0(t);
  z_37 = t;
  t = term_m_15;
  b_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_15), z_37), term_t_15);
  c_38 = t;
  t = SSL_printnl(b_38, c_38);
  t = term_v_15;
  a_38 = t;
  t = SSL_exit(a_38);
  t = y_37;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm e_38 = NULL;
  e_38 = t;
  if(match_string(t, "-k"))
    {
      t = e_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_38;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  t = SSL_string_to_int(f_38);
  g_38 = t;
  t = term_w_15;
  h_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_15, g_38);
  t = s_5(h_38, g_38, t);
  t = f_38;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, r_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm j_38 = NULL;
  j_38 = t;
  if(match_string(t, "-S"))
    {
      t = j_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_38;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL;
  t = term_y_15;
  k_38 = t;
  t = term_z_15;
  l_38 = t;
  t = term_a_16;
  t = s_5(k_38, l_38, t);
  t = term_b_16;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_c_16;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
  m_38 = t;
  t = SSL_string_to_int(m_38);
  n_38 = t;
  t = term_y_15;
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_15, n_38);
  t = s_5(o_38, n_38, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_38);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_d_16;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL;
  t = term_f_16;
  p_38 = t;
  t = term_l_15;
  q_38 = t;
  t = term_g_16;
  t = s_5(p_38, q_38, t);
  t = term_h_16;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_i_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_4, u_4, v_4, t);
      LocalPopChoice(k_16);
    }
  else
    {
      t = j_16;
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_4, z_4, t_5, t);
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            t = Option_3_0(u_5, w_5, x_5, t);
          }
      }
    }
  return(t);
}
static ATerm s_5 (ATerm y_46, ATerm z_46, ATerm t)
{
  ATerm r_38 = NULL;
  t = term_n_16;
  r_38 = t;
  t = SSL_table_put(r_38, y_46, z_46);
  t = (ATerm) ATmakeAppl(sym__3, term_n_16, y_46, z_46);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
      t = term_l_15;
      t = i_0(t);
      w_38 = t;
      t = term_o_16;
      x_38 = t;
      t = term_p_16;
      y_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_16, term_p_16, w_38);
      t = q_5(x_38, y_38, w_38, t);
      _fail(t);
    }
  else
    {
      ATerm b_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_38 = ATgetFirst((ATermList) t);
          v_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_38;
      t = d_0(t);
      t = term_l_15;
      t = g_0(t);
      b_39 = t;
      t = (ATerm) ATinsert(CheckATermList(v_38), b_39);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm d_39 = NULL;
  d_39 = t;
  if(match_string(t, "-o"))
    {
      t = d_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_39;
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  e_39 = t;
  t = term_g_14;
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_14, e_39);
  t = s_5(f_39, e_39, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_39);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_q_16;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_6, b_6, c_6, t);
  return(t);
}
static ATerm q_5 (ATerm y_51, ATerm z_51, ATerm x_51, ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_51, z_51);
  {
    ATerm r_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_16 = ATgetArgument(t, 0);
            ATerm v_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_51, z_51);
        t = p_5(y_51, z_51, t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = r_16;
        t = (ATerm) ATempty;
      }
  }
  i_39 = t;
  t = (ATerm) ATinsert(CheckATermList(i_39), x_51);
  j_39 = t;
  t = SSL_table_put(y_51, z_51, j_39);
  t = h_39;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
      t = term_l_15;
      t = p_0(t);
      u_39 = t;
      t = term_o_16;
      v_39 = t;
      t = term_p_16;
      w_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_16, term_p_16, u_39);
      t = q_5(v_39, w_39, u_39, t);
      _fail(t);
    }
  else
    {
      ATerm a_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_39 = ATgetFirst((ATermList) t);
          r_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_39 = ATgetFirst((ATermList) t);
          t_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_39;
      t = n_0(t);
      t = s_39;
      t = o_0(t);
      a_40 = t;
      t = (ATerm) ATinsert(CheckATermList(t_39), a_40);
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  if(match_string(t, "-i"))
    {
      t = e_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_40;
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  f_40 = t;
  t = term_i_15;
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_15, f_40);
  t = s_5(g_40, f_40, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_40);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_x_16;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_6, e_6, f_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_15;
  t = whoami_0_0(t);
  h_40 = t;
  t = term_m_15;
  j_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_16), h_40);
  k_40 = t;
  t = SSL_printnl(j_40, k_40);
  t = term_v_15;
  i_40 = t;
  t = SSL_exit(i_40);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_17;
  t = get_config_0_0(t);
  return(t);
}
static ATerm l_5 (ATerm b_40, ATerm c_40, ATerm t)
{
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_40, c_40);
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
      t = SSL_addr(b_40, c_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_93 (ATerm), ATerm i_93 (ATerm), ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_40;
      t = h_93(t);
    }
  else
    {
      ATerm r_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_40 = ATgetFirst((ATermList) t);
          o_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_40;
      t = foldr_2_0(h_93, i_93, t);
      r_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_40, r_40);
      t = i_93(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_z_15;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm n_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      n_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(n_15, s_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_40 = NULL,d_15 = NULL,e_15 = NULL;
  t = times_0_0(t);
  e_15 = t;
  t = SSL_explode_term(e_15);
  if(match_cons(t, sym__2))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15;
  t = foldr_2_0(h_6, j_6, t);
  u_40 = t;
  t = SSL_TicksToSeconds(u_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,i_41 = NULL;
  f_41 = t;
  if(match_cons(t, sym__2))
    {
      g_41 = ATgetArgument(t, 0);
      i_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_41;
        if((g_41 != t))
          {
            _fail(t);
          }
        t = f_41;
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = (ATerm) ATmakeAppl(sym__2, g_41, i_41);
        {
          ATerm k_17 = t;
          int l_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_41, i_41);
              LocalPopChoice(l_17);
            }
          else
            {
              t = k_17;
              t = SSL_gtr(g_41, i_41);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_41, i_41);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_41 = NULL;
        t = term_y_15;
        t = get_config_0_0(t);
        o_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_41, term_v_15);
        t = geq_0_0(t);
        t = m_41;
        t = y_101(t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = m_41;
      }
  }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,t_41 = NULL,u_41 = NULL;
  t = run_time_0_0(t);
  q_41 = t;
  t = term_l_15;
  t = whoami_0_0(t);
  r_41 = t;
  t = term_m_15;
  t_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), q_41), term_o_17), r_41);
  u_41 = t;
  t = SSL_printnl(t_41, u_41);
  t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_17), q_41), term_o_17), r_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_15;
  v_41 = t;
  t = SSL_exit(v_41);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL;
  e_42 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_42;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_42 = ATgetArgument(t, 0);
          {
            ATerm w_16 = NULL,k_9 = NULL;
            t = SSLgetAnnotations(e_42);
            w_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_42);
            k_9 = t;
            t = SSLsetAnnotations(k_9, w_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_42;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_17;
      t = get_config_0_0(t);
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      t = fetch_1_0(l_6, t);
    }
  t = o_104(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_42 = ATgetFirst((ATermList) t);
      i_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_42 = NULL,n_42 = NULL;
        static ATerm m_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_42)), not_null(n_42));
          return(t);
        }
        t = i_42;
        t = l_0(t);
        if(((m_42 != NULL) && (m_42 != t)))
          _fail(t);
        else
          m_42 = t;
        t = h_42;
        t = k_0(t);
        if(((n_42 != NULL) && (n_42 != t)))
          _fail(t);
        else
          n_42 = t;
        t = i_42;
        t = reverse_acc_2_0(k_0, m_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_15;
      t = l_0(t);
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,m_9 = NULL;
  t_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_42);
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_42);
  m_9 = t;
  t = SSLsetAnnotations(m_9, r_42);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm v_42 = NULL;
  v_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_42), term_v_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  ATerm w_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_17;
      t = get_config_0_0(t);
      LocalPopChoice(y_17);
    }
  else
    {
      t = w_17;
      t = fetch_1_0(n_6, t);
    }
  t = term_z_17;
  t = echo_0_0(t);
  t = term_o_16;
  p_42 = t;
  t = term_p_16;
  q_42 = t;
  t = term_a_18;
  t = p_5(p_42, q_42, t);
  t = reverse_acc_2_0(_id, p_6, t);
  t = map_1_0(r_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  static ATerm s_43 (ATerm t)
  {
    ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
    p_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_43 = ATgetFirst((ATermList) t);
        r_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_18 = t;
      int c_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_17 = NULL,x_17 = NULL,o_9 = NULL;
          t = SSLgetAnnotations(p_43);
          t_17 = t;
          t = q_43;
          t = o_87(t);
          x_17 = t;
          t = (ATerm) ATinsert(CheckATermList(r_43), x_17);
          o_9 = t;
          t = SSLsetAnnotations(o_9, t_17);
          LocalPopChoice(c_18);
        }
      else
        {
          t = b_18;
          {
            ATerm n_18 = NULL,s_18 = NULL,p_9 = NULL;
            t = SSLgetAnnotations(p_43);
            n_18 = t;
            t = r_43;
            t = s_43(t);
            s_18 = t;
            t = (ATerm) ATinsert(CheckATermList(s_18), q_43);
            p_9 = t;
            t = SSLsetAnnotations(p_9, n_18);
          }
        }
    }
    return(t);
  }
  t = s_43(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
  w_43 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_43;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_18 = ATgetFirst((ATermList) t);
                ATerm g_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_43;
          }
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = (ATerm) ATinsert(ATempty, w_43);
      }
  }
  x_43 = t;
  t = term_h_14;
  y_43 = t;
  t = SSL_printnl(y_43, x_43);
  t = w_43;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm o_5 (ATerm a_36, ATerm b_36, ATerm t)
{
  t = SSL_strcat(a_36, b_36);
  return(t);
}
ATerm debug_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
  c_44 = t;
  t = t_86(t);
  d_44 = t;
  t = term_m_15;
  e_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_44), d_44);
  f_44 = t;
  t = SSL_printnl(e_44, f_44);
  t = c_44;
  return(t);
}
ATerm map_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  static ATerm u_44 (ATerm t)
  {
    ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
    r_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_44;
      }
    else
      {
        ATerm d_19 = NULL,p_19 = NULL,q_19 = NULL,s_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_44 = ATgetFirst((ATermList) t);
            t_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_44);
        d_19 = t;
        t = s_44;
        t = e_87(t);
        p_19 = t;
        t = t_44;
        t = u_44(t);
        q_19 = t;
        t = (ATerm) ATinsert(CheckATermList(q_19), p_19);
        s_9 = t;
        t = SSLsetAnnotations(s_9, d_19);
      }
    return(t);
  }
  t = u_44(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm h_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(j_18);
    }
  else
    {
      t = h_18;
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_45 = NULL;
      c_45 = t;
      t = SSL_is_string(c_45);
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_6, t);
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
            {
              ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL;
              i_45 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_45 = ATgetArgument(t, 0);
                  t = j_45;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_45 = ATgetArgument(t, 0);
                      t = j_45;
                      {
                        ATerm q_18 = t;
                        int r_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(r_18);
                          }
                        else
                          {
                            t = q_18;
                            t = debug_1_0(t_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_45 = NULL,p_45 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_45 = ATgetArgument(t, 0);
                          k_45 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_45;
                      t = eval_config_0_0(t);
                      o_45 = t;
                      t = k_45;
                      t = eval_config_0_0(t);
                      p_45 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
                      t = o_5(o_45, p_45, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_5 (ATerm p_53, ATerm q_53, ATerm t)
{
  t = SSL_table_get(p_53, q_53);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  t_45 = t;
  t = term_n_16;
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, t_45);
  t = p_5(u_45, t_45, t);
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_45 = NULL,w_45 = NULL;
        t = eval_config_0_0(t);
        v_45 = t;
        t = term_n_16;
        w_45 = t;
        t = SSL_table_put(w_45, t_45, v_45);
        t = v_45;
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
      }
  }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL;
  t = term_w_18;
  z_45 = t;
  t = term_l_15;
  a_46 = t;
  t = term_x_18;
  t = s_5(z_45, a_46, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_z_18;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL;
  t = term_w_18;
  d_46 = t;
  t = term_l_15;
  e_46 = t;
  t = term_x_18;
  t = s_5(d_46, e_46, t);
  t = term_a_19;
  b_46 = t;
  t = term_l_15;
  c_46 = t;
  t = term_b_19;
  t = s_5(b_46, c_46, t);
  t = term_c_19;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_6, v_6, x_6, t);
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      t = Option_3_0(z_6, a_7, b_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_66 (ATerm), ATerm s_66 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,u_9 = NULL;
  k_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_46 = ATgetFirst((ATermList) t);
      h_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_46);
  f_46 = t;
  t = g_46;
  t = r_66(t);
  i_46 = t;
  t = h_46;
  t = s_66(t);
  j_46 = t;
  t = (ATerm) ATinsert(CheckATermList(j_46), i_46);
  u_9 = t;
  t = SSLsetAnnotations(u_9, f_46);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,u_46 = NULL,v_46 = NULL,w_9 = NULL;
  p_46 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_19;
        t = r_106(t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
      }
  }
  t = p_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_46 = ATgetFirst((ATermList) t);
      s_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_46);
  q_46 = t;
  t = term_b_17;
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_17, r_46);
  t = s_5(v_46, r_46, t);
  t = s_46;
  {
    static ATerm m_47 (ATerm t)
    {
      ATerm n_19 = t;
      int o_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_19 = t;
          int t_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_47 = NULL;
              a_47 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_47;
              LocalPopChoice(t_19);
            }
          else
            {
              t = r_19;
              t = r_106(t);
              t = Cons_2_0(_id, m_47, t);
            }
          LocalPopChoice(o_19);
        }
      else
        {
          t = n_19;
          {
            ATerm d_47 = NULL,e_47 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_47 = ATgetFirst((ATermList) t);
                e_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_47), (ATerm) ATmakeAppl(sym_Undefined_1, d_47));
          }
        }
      return(t);
    }
    t = m_47(t);
  }
  u_46 = t;
  t = (ATerm) ATinsert(CheckATermList(u_46), (ATerm) ATmakeAppl(sym_Program_1, r_46));
  w_9 = t;
  t = SSLsetAnnotations(w_9, q_46);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  if(match_string(t, "--help"))
    {
      t = y_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_47;
        }
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL;
  t = term_u_17;
  z_47 = t;
  t = term_l_15;
  a_48 = t;
  t = term_u_19;
  t = s_5(z_47, a_48, t);
  t = term_v_19;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_106 (ATerm), ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  t_47 = t;
  t = term_o_16;
  v_47 = t;
  t = term_p_16;
  w_47 = t;
  t = (ATerm) ATempty;
  x_47 = t;
  t = SSL_table_put(v_47, w_47, x_47);
  t = t_47;
  {
    static ATerm c_7 (ATerm t)
    {
      ATerm x_19 = t;
      int y_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_106(t);
          LocalPopChoice(y_19);
        }
      else
        {
          t = x_19;
          {
            ATerm z_19 = t;
            int a_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_7, f_7, h_7, t);
                LocalPopChoice(a_20);
              }
            else
              {
                t = z_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_7, t);
  }
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_48 = NULL;
        h_48 = t;
        {
          ATerm d_20 = t;
          int e_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_20 = NULL;
              t = h_48;
              {
                ATerm f_20 = t;
                int g_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_u_17;
                    t = get_config_0_0(t);
                    LocalPopChoice(g_20);
                  }
                else
                  {
                    t = f_20;
                    t = fetch_1_0(i_7, t);
                  }
              }
              t = h_48;
              t = default_system_usage_0_0(t);
              t = term_z_15;
              o_20 = t;
              t = SSL_exit(o_20);
              LocalPopChoice(e_20);
            }
          else
            {
              t = d_20;
              {
                ATerm s_20 = NULL;
                t = term_w_18;
                t = get_config_0_0(t);
                t = h_48;
                t = default_system_about_0_0(t);
                t = term_z_15;
                s_20 = t;
                t = SSL_exit(s_20);
              }
            }
        }
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
              static ATerm j_7 (ATerm t)
              {
                ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,b_10 = NULL;
                n_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_48);
                l_48 = t;
                t = m_48;
                if(((r_47 != NULL) && (r_47 != t)))
                  _fail(t);
                else
                  r_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_48);
                b_10 = t;
                t = SSLsetAnnotations(b_10, l_48);
                return(t);
              }
              t = fetch_1_0(j_7, t);
              t = term_m_15;
              j_48 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_47)), term_j_20);
              k_48 = t;
              t = SSL_printnl(j_48, k_48);
              t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_47)), term_j_20));
              t = default_system_usage_0_0(t);
              t = term_v_15;
              i_48 = t;
              t = SSL_exit(i_48);
              LocalPopChoice(i_20);
            }
          else
            {
              t = h_20;
            }
        }
      }
  }
  s_47 = t;
  t = term_o_16;
  u_47 = t;
  t = SSL_table_destroy(u_47);
  t = s_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t = parse_options_1_0(q_104, t);
  s_48 = t;
  t = term_k_20;
  v_48 = t;
  t = SSL_table_create(v_48);
  t = term_k_20;
  t_48 = t;
  t = term_l_20;
  u_48 = t;
  t = SSL_table_put(t_48, u_48, s_48);
  t = s_48;
  t = s_104(t);
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_104, t);
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_104(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_20);
            }
          else
            {
              t = p_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm r_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(t_20);
    }
  else
    {
      t = r_20;
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            {
              ATerm w_20 = t;
              int x_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(m_7, o_7, p_7, t);
                  LocalPopChoice(x_20);
                }
              else
                {
                  t = w_20;
                  {
                    ATerm y_20 = t;
                    int z_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(z_20);
                      }
                    else
                      {
                        t = y_20;
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
static ATerm l_7 (ATerm t)
{
  t = input_1_0(r_7, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL;
  t = term_k_14;
  x_48 = t;
  t = term_l_15;
  y_48 = t;
  t = term_a_21;
  t = s_5(x_48, y_48, t);
  t = term_c_21;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_d_21;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_7, default_usage_0_0, _id, l_7, t);
  return(t);
}
