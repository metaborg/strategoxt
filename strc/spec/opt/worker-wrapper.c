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
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_b_19;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Sort_2, term_y_12, (ATerm) ATempty);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_12);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_j_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_c_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_n_15);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_a_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_b_16);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_x_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_r_16);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_n_15);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_r_18, term_n_15);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_n_15);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_n_18);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_n_15);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
static ATerm k_4 (ATerm v_92 (ATerm), ATerm q_28, ATerm p_28, ATerm t);
ATerm genzip_4_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm p_4 (ATerm v_598, ATerm a_599, ATerm e_57, ATerm t);
ATerm while_not_2_0 (ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t);
ATerm for_3_0 (ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm k_7 (ATerm j_3, ATerm k_3, ATerm l_3, ATerm t);
static ATerm u_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm u_4 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm w_28, ATerm v_28, ATerm t);
static ATerm v_4 (ATerm a_93 (ATerm), ATerm s_28, ATerm r_28, ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm free_vars_3_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm d_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm worker_wrapper_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm g_89 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_34 (ATerm x_33, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm worker_wrapper_spec_0_0 (ATerm t);
static ATerm w_4 (ATerm t_37, ATerm u_37, ATerm t);
static ATerm x_4 (ATerm o_22, ATerm p_22, ATerm t);
static ATerm z_4 (ATerm g_88 (ATerm), ATerm c_150, ATerm u_22, ATerm t);
static ATerm y_4 (ATerm k_22, ATerm l_22, ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm output_1_0 (ATerm w_106 (ATerm), ATerm t);
static ATerm s_36 (ATerm k_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_5 (ATerm q_22, ATerm t);
static ATerm b_5 (ATerm m_36, ATerm n_36, ATerm t);
static ATerm c_5 (ATerm v_37, ATerm w_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_38 (ATerm c_37, ATerm t);
static ATerm m_38 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t);
static ATerm n_38 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t);
static ATerm d_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm x_106 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_5 (ATerm m_47, ATerm n_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm i_5 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_5 (ATerm p_40, ATerm q_40, ATerm t);
ATerm foldr_2_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_103 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm need_help_1_0 (ATerm n_106 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_88 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_88 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_5 (ATerm y_53, ATerm z_53, ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_108 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm parse_options_1_0 (ATerm p_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
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
static ATerm k_4 (ATerm v_92 (ATerm), ATerm q_28, ATerm p_28, ATerm t)
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
          ATerm o_7 = t;
          int p_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_0;
              {
                static ATerm a_0 (ATerm t)
                {
                  t = p_28;
                  return(t);
                }
                t = u_4(v_92, a_0, x_0, y_0, t);
              }
              t = d_1(t);
              LocalPopChoice(p_7);
            }
          else
            {
              t = o_7;
              {
                ATerm h_0 = NULL,z_0 = NULL,j_0 = NULL;
                t = SSLgetAnnotations(w_0);
                h_0 = t;
                t = y_0;
                t = d_1(t);
                z_0 = t;
                t = (ATerm) ATinsert(CheckATermList(z_0), x_0);
                j_0 = t;
                t = SSLsetAnnotations(j_0, h_0);
              }
            }
        }
      }
    return(t);
  }
  t = q_28;
  t = d_1(t);
  return(t);
}
ATerm genzip_4_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm t)
{
  static ATerm m_1 (ATerm t)
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_90(t);
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        {
          ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,q_0 = NULL;
          t = u_90(t);
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
          t = w_90(t);
          j_1 = t;
          t = i_1;
          t = m_1(t);
          k_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_1, k_1);
          q_0 = t;
          t = SSLsetAnnotations(q_0, g_1);
          t = v_90(t);
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
      ATerm t_7 = ATgetArgument(t, 0);
      if(((ATgetType(t_7) != AT_LIST) || !(ATisEmpty(t_7))))
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
static ATerm f_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if(((ATgetType(g_8) == AT_LIST) && !(ATisEmpty(g_8))))
        {
          i_2 = ATgetFirst((ATermList) g_8);
          j_2 = (ATerm) ATgetNext((ATermList) g_8);
        }
      else
        _fail(t);
      {
        ATerm h_8 = ATgetArgument(t, 1);
        if(((ATgetType(h_8) == AT_LIST) && !(ATisEmpty(h_8))))
          {
            l_2 = ATgetFirst((ATermList) h_8);
            m_2 = (ATerm) ATgetNext((ATermList) h_8);
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
static ATerm p_4 (ATerm v_598, ATerm a_599, ATerm e_57, ATerm t)
{
  ATerm t_1 = NULL,w_1 = NULL,x_1 = NULL,c_2 = NULL;
  t = SSL_explode_term(a_599);
  if(match_cons(t, sym__2))
    {
      t_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_598);
  if(match_cons(t, sym__2))
    {
      if((t_1 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
  t = genzip_4_0(b_0, f_0, m_0, _id, t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_2, e_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t)
{
  static ATerm r_2 (ATerm t)
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_81(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        t = v_81(t);
        t = r_2(t);
      }
    return(t);
  }
  t = r_2(t);
  return(t);
}
ATerm for_3_0 (ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm t)
{
  t = x_81(t);
  t = while_not_2_0(y_81, z_81, t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm a_3 = NULL;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_3);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,h_3 = NULL,s_0 = NULL;
  h_3 = t;
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_3);
  b_3 = t;
  t = d_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_3, d_3);
  s_0 = t;
  t = SSLsetAnnotations(s_0, b_3);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm o_4 = NULL,r_4 = NULL,g_5 = NULL,o_5 = NULL,p_5 = NULL;
  o_4 = t;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_5 = ATgetFirst((ATermList) t);
      p_5 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_7(r_4, g_5, o_4, t);
            LocalPopChoice(n_8);
          }
        else
          {
            t = k_8;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_4), o_5), p_5);
          }
      }
    }
  else
    {
      t = k_7(r_4, g_5, o_4, t);
    }
  return(t);
}
static ATerm k_7 (ATerm j_3, ATerm k_3, ATerm l_3, ATerm t)
{
  ATerm m_3 = NULL,s_3 = NULL,t_0 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,c_4 = NULL;
  t = SSLgetAnnotations(l_3);
  m_3 = t;
  t = k_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_3 = ATgetFirst((ATermList) t);
      c_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_3;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_4;
        if((z_3 != t))
          {
            _fail(t);
          }
        t = c_4;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = k_3;
        t = p_4(z_3, a_4, c_4, t);
      }
  }
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_3, s_3);
  t_0 = t;
  t = SSLsetAnnotations(t_0, m_3);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm j_7 = NULL;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      if((j_7 != ATgetArgument(t, 1)))
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
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_0, p_0, r_0, t);
      LocalPopChoice(t_8);
    }
  else
    {
      t = r_8;
      {
        ATerm z_5 = NULL,k_6 = NULL,v_6 = NULL;
        z_5 = t;
        if(match_cons(t, sym__2))
          {
            k_6 = ATgetArgument(t, 0);
            v_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_5;
        t = k_4(u_0, k_6, v_6, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,o_12 = NULL;
  l_12 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
      {
        ATerm s_1 = NULL,y_1 = NULL,z_1 = NULL,e_1 = NULL;
        t = SSLgetAnnotations(l_12);
        s_1 = t;
        t = o_12;
        t = n_113(t);
        y_1 = t;
        t = i_12;
        t = l_113(t);
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, y_1, z_1);
        e_1 = t;
        t = SSLsetAnnotations(e_1, s_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          o_12 = ATgetArgument(t, 0);
          i_12 = ATgetArgument(t, 1);
          j_12 = ATgetArgument(t, 2);
          k_12 = ATgetArgument(t, 3);
          {
            ATerm t_2 = NULL,y_2 = NULL,z_2 = NULL,e_3 = NULL,f_3 = NULL,v_7 = NULL;
            t = SSLgetAnnotations(l_12);
            t_2 = t;
            t = o_12;
            t = n_113(t);
            y_2 = t;
            t = i_12;
            t = n_113(t);
            z_2 = t;
            t = j_12;
            t = n_113(t);
            e_3 = t;
            t = k_12;
            t = l_113(t);
            f_3 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_2, z_2, e_3, f_3);
            v_7 = t;
            t = SSLsetAnnotations(v_7, t_2);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              o_12 = ATgetArgument(t, 0);
              i_12 = ATgetArgument(t, 1);
              j_12 = ATgetArgument(t, 2);
              k_12 = ATgetArgument(t, 3);
              {
                ATerm j_4 = NULL,t_4 = NULL,f_5 = NULL,j_5 = NULL,l_5 = NULL,x_7 = NULL;
                t = SSLgetAnnotations(l_12);
                j_4 = t;
                t = o_12;
                t = n_113(t);
                t_4 = t;
                t = i_12;
                t = n_113(t);
                f_5 = t;
                t = j_12;
                t = n_113(t);
                j_5 = t;
                t = k_12;
                t = l_113(t);
                l_5 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, t_4, f_5, j_5, l_5);
                x_7 = t;
                t = SSLsetAnnotations(x_7, j_4);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  o_12 = ATgetArgument(t, 0);
                  {
                    ATerm a_6 = NULL,c_6 = NULL,z_7 = NULL;
                    t = SSLgetAnnotations(l_12);
                    a_6 = t;
                    t = o_12;
                    t = l_113(t);
                    c_6 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, c_6);
                    z_7 = t;
                    t = SSLsetAnnotations(z_7, a_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      o_12 = ATgetArgument(t, 0);
                      {
                        ATerm i_6 = NULL,l_6 = NULL,a_8 = NULL;
                        t = SSLgetAnnotations(l_12);
                        i_6 = t;
                        t = o_12;
                        t = l_113(t);
                        l_6 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, l_6);
                        a_8 = t;
                        t = SSLsetAnnotations(a_8, i_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          o_12 = ATgetArgument(t, 0);
                          {
                            ATerm r_6 = NULL,t_6 = NULL,b_8 = NULL;
                            t = SSLgetAnnotations(l_12);
                            r_6 = t;
                            t = o_12;
                            t = l_113(t);
                            t_6 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, t_6);
                            b_8 = t;
                            t = SSLsetAnnotations(b_8, r_6);
                          }
                        }
                      else
                        {
                          ATerm b_7 = NULL,d_7 = NULL,c_8 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              o_12 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(l_12);
                          b_7 = t;
                          t = o_12;
                          t = l_113(t);
                          d_7 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, d_7);
                          c_8 = t;
                          t = SSLsetAnnotations(c_8, b_7);
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
  ATerm z_13 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_13);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm b_9 = t;
        int d_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_9);
          }
        else
          {
            t = b_9;
            {
              ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_14 = ATgetArgument(t, 0);
                  g_14 = ATgetArgument(t, 1);
                  h_14 = ATgetArgument(t, 2);
                  i_14 = ATgetArgument(t, 3);
                  t = h_14;
                  t = map_1_0(b_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_14 = ATgetArgument(t, 0);
                      g_14 = ATgetArgument(t, 1);
                      h_14 = ATgetArgument(t, 2);
                      i_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_14;
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
  ATerm s_14 = NULL;
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_14 = ATgetArgument(t, 0);
          {
            ATerm i_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_9);
      t = s_14;
    }
  else
    {
      t = e_9;
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
static ATerm c_1 (ATerm t)
{
  ATerm h_15 = NULL;
  ATerm j_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_15 = ATgetArgument(t, 0);
          {
            ATerm n_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_9);
      t = h_15;
    }
  else
    {
      t = j_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_15;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm p_15 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_15);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm p_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_9);
    }
  else
    {
      t = p_9;
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            {
              ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,w_15 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_15 = ATgetArgument(t, 0);
                  s_15 = ATgetArgument(t, 1);
                  t_15 = ATgetArgument(t, 2);
                  w_15 = ATgetArgument(t, 3);
                  t = t_15;
                  t = map_1_0(o_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_15 = ATgetArgument(t, 0);
                      s_15 = ATgetArgument(t, 1);
                      t_15 = ATgetArgument(t, 2);
                      w_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_15;
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
  ATerm i_16 = NULL;
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_16 = ATgetArgument(t, 0);
          {
            ATerm x_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_9);
      t = i_16;
    }
  else
    {
      t = v_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_16;
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm x_16 = NULL;
  ATerm y_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_16 = ATgetArgument(t, 0);
          {
            ATerm b_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_10);
      t = x_16;
    }
  else
    {
      t = y_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_16;
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm b_17 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_17);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm h_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_10);
          }
        else
          {
            t = h_10;
            {
              ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_17 = ATgetArgument(t, 0);
                  g_17 = ATgetArgument(t, 1);
                  h_17 = ATgetArgument(t, 2);
                  i_17 = ATgetArgument(t, 3);
                  t = h_17;
                  t = map_1_0(u_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_17 = ATgetArgument(t, 0);
                      g_17 = ATgetArgument(t, 1);
                      h_17 = ATgetArgument(t, 2);
                      i_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_17;
                  t = map_1_0(v_1, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_17 = NULL;
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_17 = ATgetArgument(t, 0);
          {
            ATerm r_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_10);
      t = y_17;
    }
  else
    {
      t = m_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_17;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm w_18 = NULL;
  ATerm s_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_18 = ATgetArgument(t, 0);
          {
            ATerm x_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_10);
      t = w_18;
    }
  else
    {
      t = s_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_18;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm c_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_19);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,k_19 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_19 = ATgetArgument(t, 0);
                  f_19 = ATgetArgument(t, 1);
                  g_19 = ATgetArgument(t, 2);
                  k_19 = ATgetArgument(t, 3);
                  t = g_19;
                  t = map_1_0(d_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_19 = ATgetArgument(t, 0);
                      f_19 = ATgetArgument(t, 1);
                      g_19 = ATgetArgument(t, 2);
                      k_19 = ATgetArgument(t, 3);
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
  ATerm c_20 = NULL;
  ATerm c_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_20 = ATgetArgument(t, 0);
          {
            ATerm g_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_11);
      t = c_20;
    }
  else
    {
      t = c_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_20;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm m_21 = NULL;
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_21 = ATgetArgument(t, 0);
          {
            ATerm l_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_11);
      t = m_21;
    }
  else
    {
      t = h_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_21;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm x_13 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      x_13 = ATgetArgument(t, 0);
      t = x_13;
      t = free_vars_3_0(v_0, a_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          x_13 = ATgetArgument(t, 0);
          t = x_13;
          t = free_vars_3_0(f_1, n_1, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              x_13 = ATgetArgument(t, 0);
              t = x_13;
              t = free_vars_3_0(q_1, r_1, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  x_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = x_13;
              t = free_vars_3_0(a_2, b_2, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm e_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_22);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            {
              ATerm j_22 = NULL,m_22 = NULL,r_22 = NULL,s_22 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_22 = ATgetArgument(t, 0);
                  m_22 = ATgetArgument(t, 1);
                  r_22 = ATgetArgument(t, 2);
                  s_22 = ATgetArgument(t, 3);
                  t = r_22;
                  t = map_1_0(h_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_22 = ATgetArgument(t, 0);
                      m_22 = ATgetArgument(t, 1);
                      r_22 = ATgetArgument(t, 2);
                      s_22 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_22;
                  t = map_1_0(k_2, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm r_23 = NULL;
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_23 = ATgetArgument(t, 0);
          {
            ATerm s_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_11);
      t = r_23;
    }
  else
    {
      t = q_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_23;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm m_24 = NULL;
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_24 = ATgetArgument(t, 0);
          {
            ATerm v_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_11);
      t = m_24;
    }
  else
    {
      t = t_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_24;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_21 = NULL,b_22 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      b_22 = ATgetArgument(t, 0);
      t = b_22;
      if(match_cons(t, sym_Rule_3))
        {
          w_21 = ATgetArgument(t, 0);
          {
            ATerm w_11 = ATgetArgument(t, 1);
          }
          {
            ATerm x_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_21;
      t = free_vars_3_0(f_2, g_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          b_22 = ATgetArgument(t, 0);
          {
            ATerm y_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_22;
    }
  return(t);
}
static ATerm u_4 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm w_28, ATerm v_28, ATerm t)
{
  t = e_93(t);
  {
    static ATerm o_2 (ATerm t)
    {
      ATerm s_24 = NULL;
      s_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_28, s_24);
      t = d_93(t);
      return(t);
    }
    t = fetch_1_0(o_2, t);
  }
  t = v_28;
  return(t);
}
static ATerm v_4 (ATerm a_93 (ATerm), ATerm s_28, ATerm r_28, ATerm t)
{
  static ATerm m_26 (ATerm t)
  {
    ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
    b_26 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_26 = ATgetFirst((ATermList) t);
            d_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_26;
              {
                static ATerm q_2 (ATerm t)
                {
                  t = r_28;
                  return(t);
                }
                t = u_4(a_93, q_2, c_26, d_26, t);
              }
              t = m_26(t);
              LocalPopChoice(a_12);
            }
          else
            {
              t = z_11;
              {
                ATerm n_7 = NULL,q_7 = NULL,q_8 = NULL;
                t = SSLgetAnnotations(b_26);
                n_7 = t;
                t = d_26;
                t = m_26(t);
                q_7 = t;
                t = (ATerm) ATinsert(CheckATermList(q_7), c_26);
                q_8 = t;
                t = SSLsetAnnotations(q_8, n_7);
              }
            }
        }
      }
    return(t);
  }
  t = s_28;
  t = m_26(t);
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
  ATerm d_8 = NULL,e_8 = NULL;
  if(match_cons(t, sym__2))
    {
      d_8 = ATgetArgument(t, 0);
      e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(x_2, d_8, e_8, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm f_8 = NULL;
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      if((f_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(n_3, w_8, x_8, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      if((y_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm d_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm q_27 (ATerm t)
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_111(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        {
          ATerm e_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_26 = NULL,w_26 = NULL,w_7 = NULL,y_7 = NULL;
              v_26 = t;
              t = c_111(t);
              w_26 = t;
              t = v_26;
              {
                static ATerm s_2 (ATerm t)
                {
                  ATerm z_26 = NULL;
                  t = q_27(t);
                  z_26 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_26, w_26);
                  t = diff_0_0(t);
                  return(t);
                }
                t = d_111(s_2, q_27, u_2, t);
              }
              y_7 = t;
              t = SSL_explode_term(y_7);
              if(match_cons(t, sym__2))
                {
                  ATerm g_12 = ATgetArgument(t, 0);
                  w_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_7;
              t = foldr_3_0(v_2, w_2, _id, t);
              LocalPopChoice(f_12);
            }
          else
            {
              t = e_12;
              {
                ATerm l_8 = NULL,m_8 = NULL;
                m_8 = t;
                t = SSL_explode_term(m_8);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_12 = ATgetArgument(t, 0);
                    l_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_8;
                t = foldr_3_0(g_3, i_3, q_27, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_27(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm v_10 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_10);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            {
              ATerm d_11 = NULL,e_11 = NULL,j_11 = NULL,k_11 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  d_11 = ATgetArgument(t, 0);
                  e_11 = ATgetArgument(t, 1);
                  j_11 = ATgetArgument(t, 2);
                  k_11 = ATgetArgument(t, 3);
                  t = j_11;
                  t = map_1_0(q_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_11 = ATgetArgument(t, 0);
                      e_11 = ATgetArgument(t, 1);
                      j_11 = ATgetArgument(t, 2);
                      k_11 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_11;
                  t = map_1_0(r_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm d_12 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_12 = ATgetArgument(t, 0);
          {
            ATerm t_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_12);
      t = d_12;
    }
  else
    {
      t = r_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_12;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm a_13 = NULL;
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_13 = ATgetArgument(t, 0);
          {
            ATerm w_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_12);
      t = a_13;
    }
  else
    {
      t = u_12;
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
        ATerm x_12 = ATgetArgument(t, 1);
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
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_13, term_b_13);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm f_13 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      f_13 = ATgetArgument(t, 0);
      {
        ATerm c_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_13), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm g_13 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      g_13 = ATgetArgument(t, 0);
      {
        ATerm h_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, g_13);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,p_31 = NULL,q_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL;
  m_31 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      n_31 = ATgetArgument(t, 0);
      p_31 = ATgetArgument(t, 1);
      q_31 = ATgetArgument(t, 2);
      t_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_31;
  if(match_cons(t, sym_Seq_2))
    {
      u_31 = ATgetArgument(t, 0);
      v_31 = ATgetArgument(t, 1);
      t = u_31;
      if(match_cons(t, sym_Match_1))
        {
          l_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, n_31, p_31, q_31, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_31), v_31)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm e_10 = NULL,f_10 = NULL,k_10 = NULL,l_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,t_10 = NULL,u_10 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          u_31 = ATgetArgument(t, 0);
          v_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_31;
      if(match_cons(t, sym_Seq_2))
        {
          w_31 = ATgetArgument(t, 0);
          y_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_31;
      if(match_cons(t, sym_Match_1))
        {
          x_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_31;
      if(match_cons(t, sym_Op_2))
        {
          ATerm i_13 = ATgetArgument(t, 0);
          ATerm j_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_31;
      t = free_vars_3_0(o_3, p_3, tboundin_3_0, t);
      t_10 = t;
      t = q_31;
      t = map_1_0(t_3, t);
      u_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_10, u_10);
      t = diff_0_0(t);
      f_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_31, f_10);
      t = diff_0_0(t);
      e_10 = t;
      t = f_10;
      t = map_1_0(u_3, t);
      k_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_31, k_10);
      t = conc_0_0(t);
      p_10 = t;
      t = new_0_0(t);
      l_10 = t;
      t = p_31;
      t = map_1_0(v_3, t);
      o_10 = t;
      t = p_10;
      t = map_1_0(w_3, t);
      q_10 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, l_10, p_31, p_10, (ATerm) ATmakeAppl(sym_Scope_2, e_10, y_31))), (ATerm) ATmakeAppl(sym_SDefT_4, n_31, p_31, q_31, (ATerm) ATmakeAppl(sym_Scope_2, f_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_31), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_10), o_10, q_10)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  static ATerm r_33 (ATerm t)
  {
    ATerm l_33 = NULL,p_33 = NULL,q_33 = NULL;
    q_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_33 = ATgetFirst((ATermList) t);
        p_33 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_13 = NULL,v_13 = NULL,s_8 = NULL;
          t = SSLgetAnnotations(q_33);
          r_13 = t;
          t = p_33;
          t = r_33(t);
          v_13 = t;
          t = (ATerm) ATinsert(CheckATermList(v_13), l_33);
          s_8 = t;
          t = SSLsetAnnotations(s_8, r_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_33;
        t = g_89(t);
      }
    return(t);
  }
  t = r_33(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
  h_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_32;
    }
  else
    {
      static ATerm x_3 (ATerm t)
      {
        t = not_null(j_32);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_32 = ATgetFirst((ATermList) t);
          if(((j_32 != NULL) && (j_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_32;
      t = at_end_1_0(x_3, t);
    }
  return(t);
}
static ATerm l_34 (ATerm x_33, ATerm t)
{
  ATerm b_34 = NULL;
  t = SSL_explode_term(x_33);
  if(match_cons(t, sym__2))
    {
      ATerm k_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_34;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  i_34 = t;
  if(match_cons(t, sym__2))
    {
      g_34 = ATgetArgument(t, 0);
      h_34 = ATgetArgument(t, 1);
      {
        ATerm l_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_4 (ATerm t)
            {
              t = h_34;
              return(t);
            }
            t = g_34;
            t = at_end_1_0(b_4, t);
            LocalPopChoice(m_13);
          }
        else
          {
            t = l_13;
            t = l_34(i_34, t);
          }
      }
    }
  else
    {
      t = l_34(i_34, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  n_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_34;
      t = i_95(t);
    }
  else
    {
      ATerm s_34 = NULL,t_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_34 = ATgetFirst((ATermList) t);
          p_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_34;
      t = k_95(t);
      s_34 = t;
      t = p_34;
      t = foldr_3_0(i_95, j_95, k_95, t);
      t_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
      t = j_95(t);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,u_8 = NULL;
  g_35 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      e_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_35);
  d_35 = t;
  t = e_35;
  t = foldr_3_0(_id, conc_0_0, f_4, t);
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, f_35);
  u_8 = t;
  t = SSLsetAnnotations(u_8, d_35);
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
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm i_35 = NULL;
        i_35 = t;
        t = (ATerm) ATinsert(ATempty, i_35);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,c_9 = NULL,v_8 = NULL;
  c_35 = t;
  if(match_cons(t, sym_Specification_1))
    {
      w_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_35);
  v_34 = t;
  t = w_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_34 = ATgetFirst((ATermList) t);
      z_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_34);
  x_34 = t;
  t = z_34;
  t = Cons_2_0(d_4, e_4, t);
  a_35 = t;
  t = (ATerm) ATinsert(CheckATermList(a_35), y_34);
  v_8 = t;
  t = SSLsetAnnotations(v_8, x_34);
  b_35 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, b_35);
  c_9 = t;
  t = SSLsetAnnotations(c_9, v_34);
  return(t);
}
static ATerm w_4 (ATerm t_37, ATerm u_37, ATerm t)
{
  ATerm m_35 = NULL;
  t = SSL_fputc(t_37, u_37);
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_35);
  return(t);
}
static ATerm x_4 (ATerm o_22, ATerm p_22, ATerm t)
{
  ATerm n_35 = NULL;
  t = SSL_write_term_to_stream_text(o_22, p_22);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_35);
  return(t);
}
static ATerm z_4 (ATerm g_88 (ATerm), ATerm c_150, ATerm u_22, ATerm t)
{
  ATerm o_35 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_150, term_p_13);
  t = d_5(t);
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_35, u_22);
  t = g_88(t);
  t = fclose_0_0(t);
  t = u_22;
  return(t);
}
static ATerm y_4 (ATerm k_22, ATerm l_22, ATerm t)
{
  ATerm p_35 = NULL;
  t = SSL_write_term_to_stream_baf(k_22, l_22);
  p_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_35);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if(match_cons(q_13, sym_Stream_1))
        {
          w_35 = ATgetArgument(q_13, 0);
        }
      else
        _fail(t);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4(w_35, x_35, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_13 = ATgetArgument(t, 0);
      if(match_cons(s_13, sym_Stream_1))
        {
          b_36 = ATgetArgument(s_13, 0);
        }
      else
        _fail(t);
      c_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(b_36, c_36, t);
  y_35 = t;
  t = term_t_13;
  z_35 = t;
  t = y_35;
  if(match_cons(t, sym_Stream_1))
    {
      a_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, y_35);
  t = w_4(z_35, a_36, t);
  return(t);
}
ATerm output_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  t = w_106(t);
  r_35 = t;
  {
    ATerm u_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_35 = NULL,t_35 = NULL;
        t = term_y_13;
        s_35 = t;
        t = term_a_14;
        t_35 = t;
        t = term_b_14;
        t = h_5(s_35, t_35, t);
        LocalPopChoice(w_13);
      }
    else
      {
        t = u_13;
        t = term_c_14;
      }
  }
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_35, r_35);
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_35 = NULL,v_35 = NULL;
        t = term_y_13;
        u_35 = t;
        t = term_j_14;
        v_35 = t;
        t = term_k_14;
        t = h_5(u_35, v_35, t);
        t = (ATerm) ATmakeAppl(sym__2, q_35, r_35);
        LocalPopChoice(e_14);
        if(match_cons(t, sym__2))
          {
            ATerm l_14 = ATgetArgument(t, 0);
            ATerm m_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_4(g_4, q_35, r_35, t);
      }
    else
      {
        t = d_14;
        if(match_cons(t, sym__2))
          {
            ATerm n_14 = ATgetArgument(t, 0);
            ATerm o_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_4(h_4, q_35, r_35, t);
      }
  }
  return(t);
}
static ATerm s_36 (ATerm k_36, ATerm t)
{
  t = SSL_fclose(k_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL;
  q_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_36 = ATgetArgument(t, 0);
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_36);
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            t = s_36(q_36, t);
          }
      }
    }
  else
    {
      t = s_36(q_36, t);
    }
  return(t);
}
static ATerm a_5 (ATerm q_22, ATerm t)
{
  t = SSL_read_term_from_stream(q_22);
  return(t);
}
static ATerm b_5 (ATerm m_36, ATerm n_36, ATerm t)
{
  t = SSL_strcat(m_36, n_36);
  return(t);
}
static ATerm c_5 (ATerm v_37, ATerm w_37, ATerm t)
{
  ATerm t_36 = NULL;
  t = SSL_fopen(v_37, w_37);
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_36 = NULL;
  t = SSL_stdin_stream();
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_36 = NULL;
  t = SSL_stdout_stream();
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_36 = NULL;
  t = SSL_stderr_stream();
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_36);
  return(t);
}
static ATerm l_38 (ATerm c_37, ATerm t)
{
  ATerm d_37 = NULL;
  t = SSL_explode_term(c_37);
  if(match_cons(t, sym__2))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_14 = ATgetArgument(t, 1);
        if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
          {
            d_37 = ATgetFirst((ATermList) t_14);
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
  t = d_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_38 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,o_37 = NULL,g_9 = NULL;
  t = SSLgetAnnotations(i_37);
  l_37 = t;
  t = g_37;
  if(match_cons(t, sym_Path_1))
    {
      o_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_37, h_37);
  g_9 = t;
  t = SSLsetAnnotations(g_9, l_37);
  if(match_cons(t, sym__2))
    {
      j_37 = ATgetArgument(t, 0);
      k_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(j_37, k_37, t);
  return(t);
}
static ATerm n_38 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,g_38 = NULL,h_9 = NULL;
  t = SSLgetAnnotations(s_37);
  b_38 = t;
  t = SSL_is_string(q_37);
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_38, r_37);
  h_9 = t;
  t = SSLsetAnnotations(h_9, b_38);
  if(match_cons(t, sym__2))
    {
      z_37 = ATgetArgument(t, 0);
      a_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(z_37, a_38, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
  i_38 = t;
  if(match_cons(t, sym__2))
    {
      j_38 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
      {
        ATerm v_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_38(i_38, t);
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
                  t = m_38(j_38, k_38, i_38, t);
                  LocalPopChoice(y_14);
                }
              else
                {
                  t = x_14;
                  t = n_38(j_38, k_38, i_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_38(i_38, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,w_38 = NULL;
  w_38 = t;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_38, term_b_15);
        t = d_5(t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        {
          ATerm e_15 = NULL,f_15 = NULL;
          t = term_c_15;
          f_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_15, w_38);
          t = b_5(f_15, w_38, t);
          e_15 = t;
          t = SSL_perror(e_15);
          _fail(t);
        }
      }
  }
  q_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(r_38, t);
  p_38 = t;
  t = q_38;
  t = fclose_0_0(t);
  t = p_38;
  return(t);
}
ATerm input_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm d_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_38 = NULL,a_39 = NULL;
      t = term_y_13;
      z_38 = t;
      t = term_i_15;
      a_39 = t;
      t = term_j_15;
      t = h_5(z_38, a_39, t);
      LocalPopChoice(g_15);
    }
  else
    {
      t = d_15;
      t = term_k_15;
    }
  t = ReadFromFile_0_0(t);
  t = x_106(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  b_39 = t;
  t = term_n_15;
  t = whoami_0_0(t);
  c_39 = t;
  t = term_o_15;
  e_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_15), c_39), term_q_15);
  f_39 = t;
  t = SSL_printnl(e_39, f_39);
  t = term_x_15;
  d_39 = t;
  t = SSL_exit(d_39);
  t = b_39;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm h_39 = NULL;
  h_39 = t;
  if(match_string(t, "-k"))
    {
      t = h_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_39;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  i_39 = t;
  t = SSL_string_to_int(i_39);
  j_39 = t;
  t = term_y_15;
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_15, j_39);
  t = k_5(k_39, j_39, t);
  t = i_39;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_z_15;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, l_4, m_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm m_39 = NULL;
  m_39 = t;
  if(match_string(t, "-S"))
    {
      t = m_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_39;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  t = term_b_16;
  n_39 = t;
  t = term_c_16;
  o_39 = t;
  t = term_d_16;
  t = k_5(n_39, o_39, t);
  t = term_e_16;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_f_16;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
  p_39 = t;
  t = SSL_string_to_int(p_39);
  q_39 = t;
  t = term_b_16;
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, q_39);
  t = k_5(r_39, q_39, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_39);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_g_16;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL;
  t = term_h_16;
  s_39 = t;
  t = term_n_15;
  t_39 = t;
  t = term_j_16;
  t = k_5(s_39, t_39, t);
  t = term_k_16;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_4, q_4, s_4, t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_5, n_5, q_5, t);
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            t = Option_3_0(r_5, s_5, t_5, t);
          }
      }
    }
  return(t);
}
static ATerm k_5 (ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm u_39 = NULL;
  t = term_y_13;
  u_39 = t;
  t = SSL_table_put(u_39, m_47, n_47);
  t = (ATerm) ATmakeAppl(sym__3, term_y_13, m_47, n_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
      t = term_n_15;
      t = e_0(t);
      z_39 = t;
      t = term_q_16;
      a_40 = t;
      t = term_r_16;
      b_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_16, term_r_16, z_39);
      t = i_5(a_40, b_40, z_39, t);
      _fail(t);
    }
  else
    {
      ATerm e_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_39 = ATgetFirst((ATermList) t);
          y_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_39;
      t = c_0(t);
      t = term_n_15;
      t = d_0(t);
      e_40 = t;
      t = (ATerm) ATinsert(CheckATermList(y_39), e_40);
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm g_40 = NULL;
  g_40 = t;
  if(match_string(t, "-o"))
    {
      t = g_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_40;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL;
  h_40 = t;
  t = term_a_14;
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_14, h_40);
  t = k_5(i_40, h_40, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_40);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_s_16;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_5, v_5, w_5, t);
  return(t);
}
static ATerm i_5 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_16 = ATgetArgument(t, 0);
            ATerm w_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
        t = h_5(h_52, i_52, t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        t = (ATerm) ATempty;
      }
  }
  l_40 = t;
  t = (ATerm) ATinsert(CheckATermList(l_40), g_52);
  m_40 = t;
  t = SSL_table_put(h_52, i_52, m_40);
  t = k_40;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
      t = term_n_15;
      t = n_0(t);
      z_40 = t;
      t = term_q_16;
      a_41 = t;
      t = term_r_16;
      b_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_16, term_r_16, z_40);
      t = i_5(a_41, b_41, z_40, t);
      _fail(t);
    }
  else
    {
      ATerm f_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_40 = ATgetFirst((ATermList) t);
          w_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_40 = ATgetFirst((ATermList) t);
          y_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_40;
      t = k_0(t);
      t = x_40;
      t = l_0(t);
      f_41 = t;
      t = (ATerm) ATinsert(CheckATermList(y_40), f_41);
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm h_41 = NULL;
  h_41 = t;
  if(match_string(t, "-i"))
    {
      t = h_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_41;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL;
  i_41 = t;
  t = term_i_15;
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_15, i_41);
  t = k_5(j_41, i_41, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_41);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_y_16;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_5, y_5, b_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_15;
  t = whoami_0_0(t);
  k_41 = t;
  t = term_o_15;
  m_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_16), k_41);
  n_41 = t;
  t = SSL_printnl(m_41, n_41);
  t = term_x_15;
  l_41 = t;
  t = SSL_exit(l_41);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL;
  t = term_y_13;
  o_41 = t;
  t = term_a_17;
  p_41 = t;
  t = term_c_17;
  t = h_5(o_41, p_41, t);
  return(t);
}
static ATerm e_5 (ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm d_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_40, q_40);
      LocalPopChoice(j_17);
    }
  else
    {
      t = d_17;
      t = SSL_addr(p_40, q_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_41;
      t = g_95(t);
    }
  else
    {
      ATerm x_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_41 = ATgetFirst((ATermList) t);
          t_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_41;
      t = foldr_2_0(g_95, h_95, t);
      x_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_41, x_41);
      t = h_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_c_16;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm v_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5(v_15, a_16, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_42 = NULL,l_15 = NULL,m_15 = NULL;
  t = times_0_0(t);
  m_15 = t;
  t = SSL_explode_term(m_15);
  if(match_cons(t, sym__2))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      l_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_15;
  t = foldr_2_0(d_6, e_6, t);
  a_42 = t;
  t = SSL_TicksToSeconds(a_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
  l_42 = t;
  if(match_cons(t, sym__2))
    {
      m_42 = ATgetArgument(t, 0);
      n_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_42;
        if((m_42 != t))
          {
            _fail(t);
          }
        t = l_42;
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        t = (ATerm) ATmakeAppl(sym__2, m_42, n_42);
        {
          ATerm n_17 = t;
          int o_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_42, n_42);
              LocalPopChoice(o_17);
            }
          else
            {
              t = n_17;
              t = SSL_gtr(m_42, n_42);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_42, n_42);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  ATerm r_42 = NULL;
  r_42 = t;
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
        t = term_y_13;
        u_42 = t;
        t = term_b_16;
        v_42 = t;
        t = term_r_17;
        t = h_5(u_42, v_42, t);
        t_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_42, term_x_15);
        t = geq_0_0(t);
        t = r_42;
        t = x_103(t);
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = r_42;
      }
  }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,a_43 = NULL,b_43 = NULL;
  t = run_time_0_0(t);
  x_42 = t;
  t = term_n_15;
  t = whoami_0_0(t);
  y_42 = t;
  t = term_o_15;
  a_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_17), x_42), term_s_17), y_42);
  b_43 = t;
  t = SSL_printnl(a_43, b_43);
  t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_17), x_42), term_s_17), y_42));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_16;
  c_43 = t;
  t = SSL_exit(c_43);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL;
  n_43 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_43;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_43 = ATgetArgument(t, 0);
          {
            ATerm e_17 = NULL,k_9 = NULL;
            t = SSLgetAnnotations(n_43);
            e_17 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_43);
            k_9 = t;
            t = SSLsetAnnotations(k_9, e_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_43;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_43 = NULL,g_43 = NULL;
      t = term_y_13;
      f_43 = t;
      t = term_x_17;
      g_43 = t;
      t = term_z_17;
      t = h_5(f_43, g_43, t);
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      t = fetch_1_0(g_6, t);
    }
  t = n_106(t);
  return(t);
}
ATerm map_1_0 (ATerm p_88 (ATerm), ATerm t)
{
  static ATerm d_44 (ATerm t)
  {
    ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
    a_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_44;
      }
    else
      {
        ATerm t_17 = NULL,c_18 = NULL,d_18 = NULL,m_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_44 = ATgetFirst((ATermList) t);
            c_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_44);
        t_17 = t;
        t = b_44;
        t = p_88(t);
        c_18 = t;
        t = c_44;
        t = d_44(t);
        d_18 = t;
        t = (ATerm) ATinsert(CheckATermList(d_18), c_18);
        m_9 = t;
        t = SSLsetAnnotations(m_9, t_17);
      }
    return(t);
  }
  t = d_44(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_44 = ATgetFirst((ATermList) t);
      h_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_44 = NULL,m_44 = NULL;
        static ATerm h_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_44)), not_null(m_44));
          return(t);
        }
        t = h_44;
        t = i_0(t);
        if(((l_44 != NULL) && (l_44 != t)))
          _fail(t);
        else
          l_44 = t;
        t = g_44;
        t = g_0(t);
        if(((m_44 != NULL) && (m_44 != t)))
          _fail(t);
        else
          m_44 = t;
        t = h_44;
        t = reverse_acc_2_0(g_0, h_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_15;
      t = i_0(t);
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,o_9 = NULL;
  u_44 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_44);
  s_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_44);
  o_9 = t;
  t = SSLsetAnnotations(o_9, s_44);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm w_44 = NULL;
  w_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_44), term_a_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  ATerm b_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_44 = NULL,r_44 = NULL;
      t = term_y_13;
      q_44 = t;
      t = term_a_17;
      r_44 = t;
      t = term_c_17;
      t = h_5(q_44, r_44, t);
      LocalPopChoice(e_18);
    }
  else
    {
      t = b_18;
      t = fetch_1_0(j_6, t);
    }
  t = term_f_18;
  t = echo_0_0(t);
  t = term_q_16;
  o_44 = t;
  t = term_r_16;
  p_44 = t;
  t = term_g_18;
  t = h_5(o_44, p_44, t);
  t = reverse_acc_2_0(_id, m_6, t);
  t = map_1_0(n_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_88 (ATerm), ATerm t)
{
  static ATerm t_45 (ATerm t)
  {
    ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL;
    q_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_45 = ATgetFirst((ATermList) t);
        s_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_18 = NULL,u_18 = NULL,q_9 = NULL;
          t = SSLgetAnnotations(q_45);
          q_18 = t;
          t = r_45;
          t = z_88(t);
          u_18 = t;
          t = (ATerm) ATinsert(CheckATermList(s_45), u_18);
          q_9 = t;
          t = SSLsetAnnotations(q_9, q_18);
          LocalPopChoice(i_18);
        }
      else
        {
          t = h_18;
          {
            ATerm p_19 = NULL,s_19 = NULL,u_9 = NULL;
            t = SSLgetAnnotations(q_45);
            p_19 = t;
            t = s_45;
            t = t_45(t);
            s_19 = t;
            t = (ATerm) ATinsert(CheckATermList(s_19), r_45);
            u_9 = t;
            t = SSLsetAnnotations(u_9, p_19);
          }
        }
    }
    return(t);
  }
  t = t_45(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
  x_45 = t;
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_45;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_18 = ATgetFirst((ATermList) t);
                ATerm m_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_45;
          }
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        t = (ATerm) ATinsert(ATempty, x_45);
      }
  }
  y_45 = t;
  t = term_c_14;
  z_45 = t;
  t = SSL_printnl(z_45, y_45);
  t = x_45;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL;
  t = term_y_13;
  d_46 = t;
  t = term_a_17;
  e_46 = t;
  t = term_c_17;
  t = h_5(d_46, e_46, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_5 (ATerm y_53, ATerm z_53, ATerm t)
{
  t = SSL_table_get(y_53, z_53);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  t = term_n_18;
  f_46 = t;
  t = term_n_15;
  g_46 = t;
  t = term_o_18;
  t = k_5(f_46, g_46, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_p_18;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  t = term_n_18;
  j_46 = t;
  t = term_n_15;
  k_46 = t;
  t = term_o_18;
  t = k_5(j_46, k_46, t);
  t = term_r_18;
  h_46 = t;
  t = term_n_15;
  i_46 = t;
  t = term_s_18;
  t = k_5(h_46, i_46, t);
  t = term_t_18;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_v_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_6, p_6, q_6, t);
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      t = Option_3_0(s_6, u_6, w_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,z_9 = NULL;
  q_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_46 = ATgetFirst((ATermList) t);
      n_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_46);
  l_46 = t;
  t = m_46;
  t = b_68(t);
  o_46 = t;
  t = n_46;
  t = c_68(t);
  p_46 = t;
  t = (ATerm) ATinsert(CheckATermList(p_46), o_46);
  z_9 = t;
  t = SSLsetAnnotations(z_9, l_46);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_108 (ATerm), ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,a_47 = NULL,b_47 = NULL,g_10 = NULL;
  v_46 = t;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_19;
        t = q_108(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
      }
  }
  t = v_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_46 = ATgetFirst((ATermList) t);
      y_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_46);
  w_46 = t;
  t = term_a_17;
  b_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_17, x_46);
  t = k_5(b_47, x_46, t);
  t = y_46;
  {
    static ATerm l_47 (ATerm t)
    {
      ATerm d_19 = t;
      int h_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_19 = t;
          int j_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_47 = NULL;
              e_47 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_47;
              LocalPopChoice(j_19);
            }
          else
            {
              t = i_19;
              t = q_108(t);
              t = Cons_2_0(_id, l_47, t);
            }
          LocalPopChoice(h_19);
        }
      else
        {
          t = d_19;
          {
            ATerm h_47 = NULL,i_47 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_47 = ATgetFirst((ATermList) t);
                i_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_47), (ATerm) ATmakeAppl(sym_Undefined_1, h_47));
          }
        }
      return(t);
    }
    t = l_47(t);
  }
  a_47 = t;
  t = (ATerm) ATinsert(CheckATermList(a_47), (ATerm) ATmakeAppl(sym_Program_1, x_46));
  g_10 = t;
  t = SSLsetAnnotations(g_10, w_46);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  if(match_string(t, "--help"))
    {
      t = z_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_47;
        }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL;
  t = term_x_17;
  a_48 = t;
  t = term_n_15;
  b_48 = t;
  t = term_l_19;
  t = k_5(a_48, b_48, t);
  t = term_m_19;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL;
  u_47 = t;
  t = term_q_16;
  w_47 = t;
  t = term_r_16;
  x_47 = t;
  t = (ATerm) ATempty;
  y_47 = t;
  t = SSL_table_put(w_47, x_47, y_47);
  t = u_47;
  {
    static ATerm x_6 (ATerm t)
    {
      ATerm o_19 = t;
      int q_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_108(t);
          LocalPopChoice(q_19);
        }
      else
        {
          t = o_19;
          {
            ATerm r_19 = t;
            int t_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_6, z_6, a_7, t);
                LocalPopChoice(t_19);
              }
            else
              {
                t = r_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_6, t);
  }
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_48 = NULL;
        m_48 = t;
        {
          ATerm w_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_20 = NULL;
              t = m_48;
              {
                ATerm y_19 = t;
                int z_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_20 = NULL,j_20 = NULL;
                    t = term_y_13;
                    i_20 = t;
                    t = term_x_17;
                    j_20 = t;
                    t = term_z_17;
                    t = h_5(i_20, j_20, t);
                    LocalPopChoice(z_19);
                  }
                else
                  {
                    t = y_19;
                    t = fetch_1_0(c_7, t);
                  }
              }
              t = m_48;
              t = default_system_usage_0_0(t);
              t = term_c_16;
              h_20 = t;
              t = SSL_exit(h_20);
              LocalPopChoice(x_19);
            }
          else
            {
              t = w_19;
              {
                ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
                t = term_y_13;
                o_20 = t;
                t = term_n_18;
                p_20 = t;
                t = term_a_20;
                t = h_5(o_20, p_20, t);
                t = m_48;
                t = default_system_about_0_0(t);
                t = term_c_16;
                n_20 = t;
                t = SSL_exit(n_20);
              }
            }
        }
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        {
          ATerm b_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
              static ATerm e_7 (ATerm t)
              {
                ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,i_10 = NULL;
                s_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_48);
                q_48 = t;
                t = r_48;
                if(((s_47 != NULL) && (s_47 != t)))
                  _fail(t);
                else
                  s_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_48);
                i_10 = t;
                t = SSLsetAnnotations(i_10, q_48);
                return(t);
              }
              t = fetch_1_0(e_7, t);
              t = term_o_15;
              o_48 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_47)), term_e_20);
              p_48 = t;
              t = SSL_printnl(o_48, p_48);
              t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_47)), term_e_20));
              t = default_system_usage_0_0(t);
              t = term_x_15;
              n_48 = t;
              t = SSL_exit(n_48);
              LocalPopChoice(d_20);
            }
          else
            {
              t = b_20;
            }
        }
      }
  }
  t_47 = t;
  t = term_q_16;
  v_47 = t;
  t = SSL_table_destroy(v_47);
  t = t_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL;
  t = parse_options_1_0(p_106, t);
  x_48 = t;
  t = term_f_20;
  a_49 = t;
  t = SSL_table_create(a_49);
  t = term_f_20;
  y_48 = t;
  t = term_g_20;
  z_48 = t;
  t = SSL_table_put(y_48, z_48, x_48);
  t = x_48;
  t = r_106(t);
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_106, t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        {
          ATerm m_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_106(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_20);
            }
          else
            {
              t = m_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm v_20 = t;
              int w_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_7, i_7, l_7, t);
                  LocalPopChoice(w_20);
                }
              else
                {
                  t = v_20;
                  {
                    ATerm x_20 = t;
                    int y_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(y_20);
                      }
                    else
                      {
                        t = x_20;
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
static ATerm g_7 (ATerm t)
{
  t = input_1_0(m_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  t = term_j_14;
  c_49 = t;
  t = term_n_15;
  d_49 = t;
  t = term_z_20;
  t = k_5(c_49, d_49, t);
  t = term_a_21;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(f_7, default_usage_0_0, _id, g_7, t);
  return(t);
}
