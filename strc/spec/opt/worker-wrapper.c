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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
}
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_l_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_l_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Sort_2, term_e_13, (ATerm) ATempty);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_f_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_i_14);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_c_16, term_d_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__2, term_l_16, term_s_15);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_e_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_c_16);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_b_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_v_16);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_s_15);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_s_15);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__2, term_b_18, term_s_15);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym__3, term_u_16, term_v_16, (ATerm) ATempty);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_x_18);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_s_15);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
static ATerm w_4 (ATerm e_94 (ATerm), ATerm q_28, ATerm p_28, ATerm t);
ATerm genzip_4_0 (ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm b_5 (ATerm k_615, ATerm p_615, ATerm n_58, ATerm t);
ATerm while_not_2_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm t);
ATerm for_3_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm o_7 (ATerm m_3, ATerm n_3, ATerm o_3, ATerm t);
static ATerm u_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm t);
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
static ATerm g_5 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm w_28, ATerm v_28, ATerm t);
static ATerm h_5 (ATerm j_94 (ATerm), ATerm s_28, ATerm r_28, ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm free_vars_3_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm worker_wrapper_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm p_90 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_34 (ATerm z_33, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm worker_wrapper_spec_0_0 (ATerm t);
static ATerm i_5 (ATerm t_37, ATerm u_37, ATerm t);
static ATerm j_5 (ATerm o_22, ATerm p_22, ATerm t);
static ATerm l_5 (ATerm p_89 (ATerm), ATerm l_151, ATerm u_22, ATerm t);
static ATerm k_5 (ATerm k_22, ATerm l_22, ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm output_1_0 (ATerm f_108 (ATerm), ATerm t);
static ATerm s_37 (ATerm m_37, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_5 (ATerm q_22, ATerm t);
static ATerm n_5 (ATerm m_36, ATerm n_36, ATerm t);
static ATerm o_5 (ATerm v_37, ATerm w_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_39 (ATerm m_38, ATerm t);
static ATerm o_39 (ATerm q_38, ATerm r_38, ATerm s_38, ATerm t);
static ATerm p_39 (ATerm a_39, ATerm b_39, ATerm c_39, ATerm t);
static ATerm p_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm g_108 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_5 (ATerm m_47, ATerm n_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_5 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_5 (ATerm p_40, ATerm q_40, ATerm t);
ATerm foldr_2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_105 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm need_help_1_0 (ATerm w_107 (ATerm), ATerm t);
static ATerm z_5 (ATerm o_55, ATerm p_55, ATerm q_55, ATerm t);
ATerm lookup_table_0_1 (ATerm t_53, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_55, ATerm x_55, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm s_5 (ATerm t_55, ATerm u_55, ATerm t);
static ATerm t_5 (ATerm y_55, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm y_89 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_90 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_6 (ATerm r_55, ATerm s_55, ATerm t);
static ATerm v_5 (ATerm a_54, ATerm b_54, ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_69 (ATerm), ATerm l_69 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_109 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm parse_options_1_0 (ATerm y_109 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
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
static ATerm w_4 (ATerm e_94 (ATerm), ATerm q_28, ATerm p_28, ATerm t)
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
                  t = p_28;
                  return(t);
                }
                t = g_5(e_94, a_0, x_0, y_0, t);
              }
              t = d_1(t);
              LocalPopChoice(t_7);
            }
          else
            {
              t = s_7;
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
ATerm genzip_4_0 (ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm t)
{
  static ATerm m_1 (ATerm t)
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_92(t);
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        {
          ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,q_0 = NULL;
          t = d_92(t);
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
          t = f_92(t);
          j_1 = t;
          t = i_1;
          t = m_1(t);
          k_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_1, k_1);
          q_0 = t;
          t = SSLsetAnnotations(q_0, g_1);
          t = e_92(t);
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
      ATerm x_7 = ATgetArgument(t, 0);
      if(((ATgetType(x_7) != AT_LIST) || !(ATisEmpty(x_7))))
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
static ATerm f_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if(((ATgetType(k_8) == AT_LIST) && !(ATisEmpty(k_8))))
        {
          i_2 = ATgetFirst((ATermList) k_8);
          j_2 = (ATerm) ATgetNext((ATermList) k_8);
        }
      else
        _fail(t);
      {
        ATerm l_8 = ATgetArgument(t, 1);
        if(((ATgetType(l_8) == AT_LIST) && !(ATisEmpty(l_8))))
          {
            l_2 = ATgetFirst((ATermList) l_8);
            m_2 = (ATerm) ATgetNext((ATermList) l_8);
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
static ATerm b_5 (ATerm k_615, ATerm p_615, ATerm n_58, ATerm t)
{
  ATerm t_1 = NULL,w_1 = NULL,x_1 = NULL,c_2 = NULL;
  t = SSL_explode_term(p_615);
  if(match_cons(t, sym__2))
    {
      t_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_615);
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
  t = (ATerm) ATmakeAppl(sym__2, c_2, n_58);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_83 (ATerm), ATerm e_83 (ATerm), ATerm t)
{
  static ATerm r_2 (ATerm t)
  {
    ATerm m_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_83(t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = m_8;
        t = e_83(t);
        t = r_2(t);
      }
    return(t);
  }
  t = r_2(t);
  return(t);
}
ATerm for_3_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm i_83 (ATerm), ATerm t)
{
  t = g_83(t);
  t = while_not_2_0(h_83, i_83, t);
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
  ATerm n_4 = NULL,o_4 = NULL,x_4 = NULL,y_4 = NULL,a_5 = NULL;
  n_4 = t;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_4 = ATgetFirst((ATermList) t);
      a_5 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_7(o_4, x_4, n_4, t);
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_4), y_4), a_5);
          }
      }
    }
  else
    {
      t = o_7(o_4, x_4, n_4, t);
    }
  return(t);
}
static ATerm o_7 (ATerm m_3, ATerm n_3, ATerm o_3, ATerm t)
{
  ATerm p_3 = NULL,v_3 = NULL,t_0 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  t = SSLgetAnnotations(o_3);
  p_3 = t;
  t = n_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_4 = ATgetFirst((ATermList) t);
      e_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_4;
  if(match_cons(t, sym__2))
    {
      c_4 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_4;
        if((c_4 != t))
          {
            _fail(t);
          }
        t = e_4;
        LocalPopChoice(w_8);
      }
    else
      {
        t = s_8;
        t = n_3;
        t = b_5(c_4, d_4, e_4, t);
      }
  }
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_3, v_3);
  t_0 = t;
  t = SSLsetAnnotations(t_0, p_3);
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
  ATerm y_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_0, p_0, r_0, t);
      LocalPopChoice(a_9);
    }
  else
    {
      t = y_8;
      {
        ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
        e_6 = t;
        if(match_cons(t, sym__2))
          {
            f_6 = ATgetArgument(t, 0);
            g_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6;
        t = w_4(u_0, f_6, g_6, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm u_114 (ATerm), ATerm v_114 (ATerm), ATerm w_114 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
  x_12 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
      {
        ATerm s_1 = NULL,y_1 = NULL,z_1 = NULL,e_1 = NULL;
        t = SSLgetAnnotations(x_12);
        s_1 = t;
        t = y_12;
        t = w_114(t);
        y_1 = t;
        t = q_12;
        t = u_114(t);
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
          y_12 = ATgetArgument(t, 0);
          q_12 = ATgetArgument(t, 1);
          r_12 = ATgetArgument(t, 2);
          w_12 = ATgetArgument(t, 3);
          {
            ATerm t_2 = NULL,y_2 = NULL,z_2 = NULL,e_3 = NULL,f_3 = NULL,b_8 = NULL;
            t = SSLgetAnnotations(x_12);
            t_2 = t;
            t = y_12;
            t = w_114(t);
            y_2 = t;
            t = q_12;
            t = w_114(t);
            z_2 = t;
            t = r_12;
            t = w_114(t);
            e_3 = t;
            t = w_12;
            t = u_114(t);
            f_3 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_2, z_2, e_3, f_3);
            b_8 = t;
            t = SSLsetAnnotations(b_8, t_2);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              y_12 = ATgetArgument(t, 0);
              q_12 = ATgetArgument(t, 1);
              r_12 = ATgetArgument(t, 2);
              w_12 = ATgetArgument(t, 3);
              {
                ATerm f_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,c_8 = NULL;
                t = SSLgetAnnotations(x_12);
                f_4 = t;
                t = y_12;
                t = w_114(t);
                r_4 = t;
                t = q_12;
                t = w_114(t);
                s_4 = t;
                t = r_12;
                t = w_114(t);
                t_4 = t;
                t = w_12;
                t = u_114(t);
                u_4 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, r_4, s_4, t_4, u_4);
                c_8 = t;
                t = SSLsetAnnotations(c_8, f_4);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  y_12 = ATgetArgument(t, 0);
                  {
                    ATerm c_6 = NULL,i_6 = NULL,d_8 = NULL;
                    t = SSLgetAnnotations(x_12);
                    c_6 = t;
                    t = y_12;
                    t = u_114(t);
                    i_6 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, i_6);
                    d_8 = t;
                    t = SSLsetAnnotations(d_8, c_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      y_12 = ATgetArgument(t, 0);
                      {
                        ATerm p_6 = NULL,r_6 = NULL,f_8 = NULL;
                        t = SSLgetAnnotations(x_12);
                        p_6 = t;
                        t = y_12;
                        t = u_114(t);
                        r_6 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, r_6);
                        f_8 = t;
                        t = SSLsetAnnotations(f_8, p_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          y_12 = ATgetArgument(t, 0);
                          {
                            ATerm x_6 = NULL,a_7 = NULL,i_8 = NULL;
                            t = SSLgetAnnotations(x_12);
                            x_6 = t;
                            t = y_12;
                            t = u_114(t);
                            a_7 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, a_7);
                            i_8 = t;
                            t = SSLsetAnnotations(i_8, x_6);
                          }
                        }
                      else
                        {
                          ATerm g_7 = NULL,i_7 = NULL,j_8 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              y_12 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(x_12);
                          g_7 = t;
                          t = y_12;
                          t = u_114(t);
                          i_7 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, i_7);
                          j_8 = t;
                          t = SSLsetAnnotations(j_8, g_7);
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
  ATerm j_14 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_14);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            {
              ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  n_14 = ATgetArgument(t, 0);
                  o_14 = ATgetArgument(t, 1);
                  p_14 = ATgetArgument(t, 2);
                  q_14 = ATgetArgument(t, 3);
                  t = p_14;
                  t = map_1_0(b_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_14 = ATgetArgument(t, 0);
                      o_14 = ATgetArgument(t, 1);
                      p_14 = ATgetArgument(t, 2);
                      q_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_14;
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
  ATerm d_15 = NULL;
  ATerm f_9 = t;
  int g_9 = stack_ptr;
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
      LocalPopChoice(g_9);
      t = d_15;
    }
  else
    {
      t = f_9;
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
static ATerm c_1 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_15 = ATgetArgument(t, 0);
          {
            ATerm n_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_9);
      t = r_15;
    }
  else
    {
      t = l_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_15;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm x_15 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_15);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm q_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_9);
          }
        else
          {
            t = q_9;
            {
              ATerm z_15 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  z_15 = ATgetArgument(t, 0);
                  e_16 = ATgetArgument(t, 1);
                  f_16 = ATgetArgument(t, 2);
                  g_16 = ATgetArgument(t, 3);
                  t = f_16;
                  t = map_1_0(o_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_15 = ATgetArgument(t, 0);
                      e_16 = ATgetArgument(t, 1);
                      f_16 = ATgetArgument(t, 2);
                      g_16 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_16;
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
  ATerm p_16 = NULL;
  ATerm u_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_16 = ATgetArgument(t, 0);
          {
            ATerm y_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_9);
      t = p_16;
    }
  else
    {
      t = u_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_16;
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm f_17 = NULL;
  ATerm a_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_17 = ATgetArgument(t, 0);
          {
            ATerm e_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_10);
      t = f_17;
    }
  else
    {
      t = a_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_17;
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm n_17 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_17);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm f_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_10);
    }
  else
    {
      t = f_10;
      {
        ATerm l_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_10);
          }
        else
          {
            t = l_10;
            {
              ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_17 = ATgetArgument(t, 0);
                  q_17 = ATgetArgument(t, 1);
                  r_17 = ATgetArgument(t, 2);
                  s_17 = ATgetArgument(t, 3);
                  t = r_17;
                  t = map_1_0(u_1, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_17 = ATgetArgument(t, 0);
                      q_17 = ATgetArgument(t, 1);
                      r_17 = ATgetArgument(t, 2);
                      s_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_17;
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
  ATerm i_18 = NULL;
  ATerm p_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_18 = ATgetArgument(t, 0);
          {
            ATerm v_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_10);
      t = i_18;
    }
  else
    {
      t = p_10;
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
static ATerm v_1 (ATerm t)
{
  ATerm d_19 = NULL;
  ATerm w_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_19 = ATgetArgument(t, 0);
          {
            ATerm b_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_11);
      t = d_19;
    }
  else
    {
      t = w_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_19;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm o_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_19);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm f_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = f_11;
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            {
              ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_19 = ATgetArgument(t, 0);
                  s_19 = ATgetArgument(t, 1);
                  t_19 = ATgetArgument(t, 2);
                  u_19 = ATgetArgument(t, 3);
                  t = t_19;
                  t = map_1_0(d_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_19 = ATgetArgument(t, 0);
                      s_19 = ATgetArgument(t, 1);
                      t_19 = ATgetArgument(t, 2);
                      u_19 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_19;
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
  ATerm e_21 = NULL;
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_21 = ATgetArgument(t, 0);
          {
            ATerm m_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_11);
      t = e_21;
    }
  else
    {
      t = k_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_21;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm u_21 = NULL;
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_21 = ATgetArgument(t, 0);
          {
            ATerm p_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_11);
      t = u_21;
    }
  else
    {
      t = n_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_21;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm h_14 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      h_14 = ATgetArgument(t, 0);
      t = h_14;
      t = free_vars_3_0(v_0, a_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          h_14 = ATgetArgument(t, 0);
          t = h_14;
          t = free_vars_3_0(f_1, n_1, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              h_14 = ATgetArgument(t, 0);
              t = h_14;
              t = free_vars_3_0(q_1, r_1, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  h_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = h_14;
              t = free_vars_3_0(a_2, b_2, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm w_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_22);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            {
              ATerm y_22 = NULL,z_22 = NULL,h_23 = NULL,j_23 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_22 = ATgetArgument(t, 0);
                  z_22 = ATgetArgument(t, 1);
                  h_23 = ATgetArgument(t, 2);
                  j_23 = ATgetArgument(t, 3);
                  t = h_23;
                  t = map_1_0(h_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_22 = ATgetArgument(t, 0);
                      z_22 = ATgetArgument(t, 1);
                      h_23 = ATgetArgument(t, 2);
                      j_23 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_23;
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
  ATerm b_24 = NULL;
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_24 = ATgetArgument(t, 0);
          {
            ATerm w_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_11);
      t = b_24;
    }
  else
    {
      t = u_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_24;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm s_24 = NULL;
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_24 = ATgetArgument(t, 0);
          {
            ATerm a_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_11);
      t = s_24;
    }
  else
    {
      t = x_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_24;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm g_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      r_22 = ATgetArgument(t, 0);
      t = r_22;
      if(match_cons(t, sym_Rule_3))
        {
          g_22 = ATgetArgument(t, 0);
          {
            ATerm b_12 = ATgetArgument(t, 1);
          }
          {
            ATerm c_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = g_22;
      t = free_vars_3_0(f_2, g_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          r_22 = ATgetArgument(t, 0);
          {
            ATerm d_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_22;
    }
  return(t);
}
static ATerm g_5 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm w_28, ATerm v_28, ATerm t)
{
  t = n_94(t);
  {
    static ATerm o_2 (ATerm t)
    {
      ATerm w_24 = NULL;
      w_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_28, w_24);
      t = m_94(t);
      return(t);
    }
    t = fetch_1_0(o_2, t);
  }
  t = v_28;
  return(t);
}
static ATerm h_5 (ATerm j_94 (ATerm), ATerm s_28, ATerm r_28, ATerm t)
{
  static ATerm s_26 (ATerm t)
  {
    ATerm d_26 = NULL,f_26 = NULL,h_26 = NULL;
    d_26 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_26 = ATgetFirst((ATermList) t);
            h_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_26;
              {
                static ATerm q_2 (ATerm t)
                {
                  t = r_28;
                  return(t);
                }
                t = g_5(j_94, q_2, f_26, h_26, t);
              }
              t = s_26(t);
              LocalPopChoice(f_12);
            }
          else
            {
              t = e_12;
              {
                ATerm r_7 = NULL,u_7 = NULL,x_8 = NULL;
                t = SSLgetAnnotations(d_26);
                r_7 = t;
                t = h_26;
                t = s_26(t);
                u_7 = t;
                t = (ATerm) ATinsert(CheckATermList(u_7), f_26);
                x_8 = t;
                t = SSLsetAnnotations(x_8, r_7);
              }
            }
        }
      }
    return(t);
  }
  t = s_28;
  t = s_26(t);
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
  ATerm e_8 = NULL,g_8 = NULL;
  if(match_cons(t, sym__2))
    {
      e_8 = ATgetArgument(t, 0);
      g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(x_2, e_8, g_8, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm h_8 = NULL;
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      if((h_8 != ATgetArgument(t, 1)))
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
  ATerm t_8 = NULL,u_8 = NULL;
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(j_3, t_8, u_8, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      v_8 = ATgetArgument(t, 0);
      if((v_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm w_27 (ATerm t)
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_112(t);
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        {
          ATerm i_12 = t;
          int j_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_27 = NULL,f_27 = NULL,z_7 = NULL,a_8 = NULL;
              e_27 = t;
              t = l_112(t);
              f_27 = t;
              t = e_27;
              {
                static ATerm s_2 (ATerm t)
                {
                  ATerm h_27 = NULL;
                  t = w_27(t);
                  h_27 = t;
                  t = (ATerm) ATmakeAppl(sym__2, h_27, f_27);
                  t = diff_0_0(t);
                  return(t);
                }
                t = m_112(s_2, w_27, u_2, t);
              }
              a_8 = t;
              t = SSL_explode_term(a_8);
              if(match_cons(t, sym__2))
                {
                  ATerm k_12 = ATgetArgument(t, 0);
                  z_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_7;
              t = foldr_3_0(v_2, w_2, _id, t);
              LocalPopChoice(j_12);
            }
          else
            {
              t = i_12;
              {
                ATerm n_8 = NULL,o_8 = NULL;
                o_8 = t;
                t = SSL_explode_term(o_8);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_12 = ATgetArgument(t, 0);
                    n_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_8;
                t = foldr_3_0(g_3, i_3, w_27, t);
              }
            }
        }
      }
    return(t);
  }
  t = w_27(t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm z_10 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_10);
  return(t);
}
static ATerm l_3 (ATerm t)
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
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,g_11 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_11 = ATgetArgument(t, 0);
                  d_11 = ATgetArgument(t, 1);
                  e_11 = ATgetArgument(t, 2);
                  g_11 = ATgetArgument(t, 3);
                  t = e_11;
                  t = map_1_0(q_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_11 = ATgetArgument(t, 0);
                      d_11 = ATgetArgument(t, 1);
                      e_11 = ATgetArgument(t, 2);
                      g_11 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_11;
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
  ATerm z_11 = NULL;
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_11 = ATgetArgument(t, 0);
          {
            ATerm v_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_12);
      t = z_11;
    }
  else
    {
      t = s_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_11;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm u_12 = NULL;
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_12 = ATgetArgument(t, 0);
          {
            ATerm b_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_13);
      t = u_12;
    }
  else
    {
      t = z_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_12;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm d_13 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      d_13 = ATgetArgument(t, 0);
      {
        ATerm c_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_13;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_13, term_g_13);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm j_13 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      j_13 = ATgetArgument(t, 0);
      {
        ATerm h_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_13), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm k_13 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      k_13 = ATgetArgument(t, 0);
      {
        ATerm l_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, k_13);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,v_31 = NULL,w_31 = NULL,d_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
  q_31 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_31 = ATgetArgument(t, 0);
      s_31 = ATgetArgument(t, 1);
      v_31 = ATgetArgument(t, 2);
      w_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = w_31;
  if(match_cons(t, sym_Seq_2))
    {
      d_32 = ATgetArgument(t, 0);
      g_32 = ATgetArgument(t, 1);
      t = d_32;
      if(match_cons(t, sym_Match_1))
        {
          p_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, r_31, s_31, v_31, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_31), g_32)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm g_10 = NULL,h_10 = NULL,k_10 = NULL,o_10 = NULL,q_10 = NULL,s_10 = NULL,t_10 = NULL,x_10 = NULL,y_10 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          d_32 = ATgetArgument(t, 0);
          g_32 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_32;
      if(match_cons(t, sym_Seq_2))
        {
          h_32 = ATgetArgument(t, 0);
          j_32 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_32;
      if(match_cons(t, sym_Match_1))
        {
          i_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_32;
      if(match_cons(t, sym_Op_2))
        {
          ATerm m_13 = ATgetArgument(t, 0);
          ATerm n_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_32;
      t = free_vars_3_0(k_3, l_3, tboundin_3_0, t);
      x_10 = t;
      t = v_31;
      t = map_1_0(s_3, t);
      y_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_10, y_10);
      t = diff_0_0(t);
      h_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_32, h_10);
      t = diff_0_0(t);
      g_10 = t;
      t = h_10;
      t = map_1_0(t_3, t);
      k_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_31, k_10);
      t = conc_0_0(t);
      s_10 = t;
      t = new_0_0(t);
      o_10 = t;
      t = s_31;
      t = map_1_0(u_3, t);
      q_10 = t;
      t = s_10;
      t = map_1_0(w_3, t);
      t_10 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, o_10, s_31, s_10, (ATerm) ATmakeAppl(sym_Scope_2, g_10, j_32))), (ATerm) ATmakeAppl(sym_SDefT_4, r_31, s_31, v_31, (ATerm) ATmakeAppl(sym_Scope_2, h_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_32), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_10), q_10, t_10)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_90 (ATerm), ATerm t)
{
  static ATerm t_33 (ATerm t)
  {
    ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
    s_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_33 = ATgetFirst((ATermList) t);
        r_33 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_13 = NULL,y_13 = NULL,z_8 = NULL;
          t = SSLgetAnnotations(s_33);
          v_13 = t;
          t = r_33;
          t = t_33(t);
          y_13 = t;
          t = (ATerm) ATinsert(CheckATermList(y_13), q_33);
          z_8 = t;
          t = SSLsetAnnotations(z_8, v_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_33;
        t = p_90(t);
      }
    return(t);
  }
  t = t_33(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,z_32 = NULL;
  v_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_32;
    }
  else
    {
      static ATerm x_3 (ATerm t)
      {
        t = not_null(z_32);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_32 = ATgetFirst((ATermList) t);
          if(((z_32 != NULL) && (z_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_32;
      t = at_end_1_0(x_3, t);
    }
  return(t);
}
static ATerm l_34 (ATerm z_33, ATerm t)
{
  ATerm c_34 = NULL;
  t = SSL_explode_term(z_33);
  if(match_cons(t, sym__2))
    {
      ATerm o_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_34;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,i_34 = NULL;
  i_34 = t;
  if(match_cons(t, sym__2))
    {
      e_34 = ATgetArgument(t, 0);
      f_34 = ATgetArgument(t, 1);
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_3 (ATerm t)
            {
              t = f_34;
              return(t);
            }
            t = e_34;
            t = at_end_1_0(y_3, t);
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
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
ATerm foldr_3_0 (ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t)
{
  ATerm p_34 = NULL,s_34 = NULL,u_34 = NULL;
  p_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_34;
      t = r_96(t);
    }
  else
    {
      ATerm x_34 = NULL,y_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_34 = ATgetFirst((ATermList) t);
          u_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_34;
      t = t_96(t);
      x_34 = t;
      t = u_34;
      t = foldr_3_0(r_96, s_96, t_96, t);
      y_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_34, y_34);
      t = s_96(t);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,z_35 = NULL,a_36 = NULL,h_9 = NULL;
  a_36 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_36);
  u_35 = t;
  t = v_35;
  t = foldr_3_0(_id, conc_0_0, g_4, t);
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, z_35);
  h_9 = t;
  t = SSLsetAnnotations(h_9, u_35);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm c_36 = NULL;
        c_36 = t;
        t = (ATerm) ATinsert(ATempty, c_36);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,i_35 = NULL,l_35 = NULL,o_35 = NULL,p_35 = NULL,s_35 = NULL,j_9 = NULL,i_9 = NULL;
  s_35 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_35);
  b_35 = t;
  t = c_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_35 = ATgetFirst((ATermList) t);
      l_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_35);
  d_35 = t;
  t = l_35;
  t = Cons_2_0(z_3, b_4, t);
  o_35 = t;
  t = (ATerm) ATinsert(CheckATermList(o_35), i_35);
  i_9 = t;
  t = SSLsetAnnotations(i_9, d_35);
  p_35 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, p_35);
  j_9 = t;
  t = SSLsetAnnotations(j_9, b_35);
  return(t);
}
static ATerm i_5 (ATerm t_37, ATerm u_37, ATerm t)
{
  ATerm g_36 = NULL;
  t = SSL_fputc(t_37, u_37);
  g_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_36);
  return(t);
}
static ATerm j_5 (ATerm o_22, ATerm p_22, ATerm t)
{
  ATerm h_36 = NULL;
  t = SSL_write_term_to_stream_text(o_22, p_22);
  h_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_36);
  return(t);
}
static ATerm l_5 (ATerm p_89 (ATerm), ATerm l_151, ATerm u_22, ATerm t)
{
  ATerm k_36 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_151, term_t_13);
  t = p_5(t);
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_36, u_22);
  t = p_89(t);
  t = fclose_0_0(t);
  t = u_22;
  return(t);
}
static ATerm k_5 (ATerm k_22, ATerm l_22, ATerm t)
{
  ATerm o_36 = NULL;
  t = SSL_write_term_to_stream_baf(k_22, l_22);
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_36);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_13 = ATgetArgument(t, 0);
      if(match_cons(u_13, sym_Stream_1))
        {
          y_36 = ATgetArgument(u_13, 0);
        }
      else
        _fail(t);
      z_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(y_36, z_36, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      if(match_cons(w_13, sym_Stream_1))
        {
          d_37 = ATgetArgument(w_13, 0);
        }
      else
        _fail(t);
      e_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(d_37, e_37, t);
  a_37 = t;
  t = term_x_13;
  b_37 = t;
  t = a_37;
  if(match_cons(t, sym_Stream_1))
    {
      c_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, a_37);
  t = i_5(b_37, c_37, t);
  return(t);
}
ATerm output_1_0 (ATerm f_108 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL;
  t = f_108(t);
  q_36 = t;
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_36 = NULL,t_36 = NULL;
        t = term_b_14;
        r_36 = t;
        t = term_c_14;
        t_36 = t;
        t = term_d_14;
        t = v_5(r_36, t_36, t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = term_e_14;
      }
  }
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_36 = NULL,x_36 = NULL;
        t = term_b_14;
        w_36 = t;
        t = term_i_14;
        x_36 = t;
        t = term_k_14;
        t = v_5(w_36, x_36, t);
        t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
        LocalPopChoice(g_14);
        if(match_cons(t, sym__2))
          {
            ATerm l_14 = ATgetArgument(t, 0);
            ATerm m_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_5(h_4, p_36, q_36, t);
      }
    else
      {
        t = f_14;
        if(match_cons(t, sym__2))
          {
            ATerm r_14 = ATgetArgument(t, 0);
            ATerm s_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_5(i_4, p_36, q_36, t);
      }
  }
  return(t);
}
static ATerm s_37 (ATerm m_37, ATerm t)
{
  t = SSL_fclose(m_37);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL;
  q_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_37 = ATgetArgument(t, 0);
      {
        ATerm t_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_37);
            LocalPopChoice(v_14);
          }
        else
          {
            t = t_14;
            t = s_37(q_37, t);
          }
      }
    }
  else
    {
      t = s_37(q_37, t);
    }
  return(t);
}
static ATerm m_5 (ATerm q_22, ATerm t)
{
  t = SSL_read_term_from_stream(q_22);
  return(t);
}
static ATerm n_5 (ATerm m_36, ATerm n_36, ATerm t)
{
  t = SSL_strcat(m_36, n_36);
  return(t);
}
static ATerm o_5 (ATerm v_37, ATerm w_37, ATerm t)
{
  ATerm z_37 = NULL;
  t = SSL_fopen(v_37, w_37);
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_37);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_38 = NULL;
  t = SSL_stdin_stream();
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_38);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_38 = NULL;
  t = SSL_stdout_stream();
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_38);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_38 = NULL;
  t = SSL_stderr_stream();
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_38);
  return(t);
}
static ATerm n_39 (ATerm m_38, ATerm t)
{
  ATerm n_38 = NULL;
  t = SSL_explode_term(m_38);
  if(match_cons(t, sym__2))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_14 = ATgetArgument(t, 1);
        if(((ATgetType(x_14) == AT_LIST) && !(ATisEmpty(x_14))))
          {
            n_38 = ATgetFirst((ATermList) x_14);
            {
              ATerm y_14 = (ATerm) ATgetNext((ATermList) x_14);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_38;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_38;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_38;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_38;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_39 (ATerm q_38, ATerm r_38, ATerm s_38, ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,y_38 = NULL,r_9 = NULL;
  t = SSLgetAnnotations(s_38);
  v_38 = t;
  t = q_38;
  if(match_cons(t, sym_Path_1))
    {
      y_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_38, r_38);
  r_9 = t;
  t = SSLsetAnnotations(r_9, v_38);
  if(match_cons(t, sym__2))
    {
      t_38 = ATgetArgument(t, 0);
      u_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(t_38, u_38, t);
  return(t);
}
static ATerm p_39 (ATerm a_39, ATerm b_39, ATerm c_39, ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,i_39 = NULL,s_9 = NULL;
  t = SSLgetAnnotations(c_39);
  f_39 = t;
  t = SSL_is_string(a_39);
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_39, b_39);
  s_9 = t;
  t = SSLsetAnnotations(s_9, f_39);
  if(match_cons(t, sym__2))
    {
      d_39 = ATgetArgument(t, 0);
      e_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(d_39, e_39, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
  k_39 = t;
  if(match_cons(t, sym__2))
    {
      l_39 = ATgetArgument(t, 0);
      m_39 = ATgetArgument(t, 1);
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_39(k_39, t);
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            {
              ATerm c_15 = t;
              int e_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_39(l_39, m_39, k_39, t);
                  LocalPopChoice(e_15);
                }
              else
                {
                  t = c_15;
                  t = p_39(l_39, m_39, k_39, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_39(k_39, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,y_39 = NULL;
  y_39 = t;
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_39, term_i_15);
        t = p_5(t);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        {
          ATerm u_14 = NULL,b_15 = NULL;
          t = term_j_15;
          b_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_15, y_39);
          t = n_5(b_15, y_39, t);
          u_14 = t;
          t = SSL_perror(u_14);
          _fail(t);
        }
      }
  }
  s_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(t_39, t);
  r_39 = t;
  t = s_39;
  t = fclose_0_0(t);
  t = r_39;
  return(t);
}
ATerm input_1_0 (ATerm g_108 (ATerm), ATerm t)
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_40 = NULL,c_40 = NULL;
      t = term_b_14;
      b_40 = t;
      t = term_o_15;
      c_40 = t;
      t = term_p_15;
      t = v_5(b_40, c_40, t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      t = term_q_15;
    }
  t = ReadFromFile_0_0(t);
  t = g_108(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  d_40 = t;
  t = term_s_15;
  t = whoami_0_0(t);
  e_40 = t;
  t = term_t_15;
  g_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_15), e_40), term_v_15);
  h_40 = t;
  t = SSL_printnl(g_40, h_40);
  t = term_y_15;
  f_40 = t;
  t = SSL_exit(f_40);
  t = d_40;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm j_40 = NULL;
  j_40 = t;
  if(match_string(t, "-k"))
    {
      t = j_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_40;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  t = SSL_string_to_int(k_40);
  l_40 = t;
  t = term_a_16;
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_16, l_40);
  t = y_5(m_40, l_40, t);
  t = k_40;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_b_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, l_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm o_40 = NULL;
  o_40 = t;
  if(match_string(t, "-S"))
    {
      t = o_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_40;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL;
  t = term_c_16;
  r_40 = t;
  t = term_d_16;
  s_40 = t;
  t = term_h_16;
  t = y_5(r_40, s_40, t);
  t = term_i_16;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  t = SSL_string_to_int(t_40);
  u_40 = t;
  t = term_c_16;
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_16, u_40);
  t = y_5(v_40, u_40, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_40);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_k_16;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL;
  t = term_l_16;
  w_40 = t;
  t = term_s_15;
  x_40 = t;
  t = term_m_16;
  t = y_5(w_40, x_40, t);
  t = term_n_16;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_4, p_4, q_4, t);
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_4, z_4, c_5, t);
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            t = Option_3_0(d_5, e_5, f_5, t);
          }
      }
    }
  return(t);
}
static ATerm y_5 (ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  t = term_b_14;
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_14, m_47, n_47);
  t = lookup_table_0_1(y_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(m_47, n_47, z_40, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_14, m_47, n_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
      t = term_s_15;
      t = e_0(t);
      f_41 = t;
      t = term_u_16;
      g_41 = t;
      t = term_v_16;
      h_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_16, term_v_16, f_41);
      t = w_5(g_41, h_41, f_41, t);
      _fail(t);
    }
  else
    {
      ATerm k_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_41 = ATgetFirst((ATermList) t);
          e_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_41;
      t = c_0(t);
      t = term_s_15;
      t = d_0(t);
      k_41 = t;
      t = (ATerm) ATinsert(CheckATermList(e_41), k_41);
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  if(match_string(t, "-o"))
    {
      t = m_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_41;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  n_41 = t;
  t = term_c_14;
  o_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_14, n_41);
  t = y_5(o_41, n_41, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_41);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_x_16;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_5, u_5, x_5, t);
  return(t);
}
static ATerm w_5 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL;
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_17 = ATgetArgument(t, 0);
            ATerm b_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
        t = v_5(h_52, i_52, t);
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        t = (ATerm) ATempty;
      }
  }
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_52, i_52, (ATerm) ATinsert(CheckATermList(r_41), g_52));
  t = lookup_table_0_1(h_52, t);
  u_41 = t;
  t = (ATerm) ATinsert(CheckATermList(r_41), g_52);
  s_41 = t;
  t = u_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(i_52, s_41, t_41, t);
  t = q_41;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
      t = term_s_15;
      t = n_0(t);
      g_42 = t;
      t = term_u_16;
      h_42 = t;
      t = term_v_16;
      i_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_16, term_v_16, g_42);
      t = w_5(h_42, i_42, g_42, t);
      _fail(t);
    }
  else
    {
      ATerm m_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_42 = ATgetFirst((ATermList) t);
          d_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_42 = ATgetFirst((ATermList) t);
          f_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_42;
      t = k_0(t);
      t = e_42;
      t = l_0(t);
      m_42 = t;
      t = (ATerm) ATinsert(CheckATermList(f_42), m_42);
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm o_42 = NULL;
  o_42 = t;
  if(match_string(t, "-i"))
    {
      t = o_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_42;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  p_42 = t;
  t = term_o_15;
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_15, p_42);
  t = y_5(q_42, p_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_42);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_c_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_6, d_6, h_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_15;
  t = whoami_0_0(t);
  r_42 = t;
  t = term_t_15;
  t_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_17), r_42);
  u_42 = t;
  t = SSL_printnl(t_42, u_42);
  t = term_y_15;
  s_42 = t;
  t = SSL_exit(s_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL;
  t = term_b_14;
  v_42 = t;
  t = term_e_17;
  w_42 = t;
  t = term_g_17;
  t = v_5(v_42, w_42, t);
  return(t);
}
static ATerm q_5 (ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_40, q_40);
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      t = SSL_addr(p_40, q_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
  y_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_42;
      t = p_96(t);
    }
  else
    {
      ATerm d_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_42 = ATgetFirst((ATermList) t);
          a_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_43;
      t = foldr_2_0(p_96, q_96, t);
      d_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_42, d_43);
      t = q_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_d_16;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm n_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      n_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(n_15, u_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_43 = NULL,h_15 = NULL,k_15 = NULL;
  t = times_0_0(t);
  k_15 = t;
  t = SSL_explode_term(k_15);
  if(match_cons(t, sym__2))
    {
      ATerm j_17 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_15;
  t = foldr_2_0(j_6, k_6, t);
  g_43 = t;
  t = SSL_TicksToSeconds(g_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
  r_43 = t;
  if(match_cons(t, sym__2))
    {
      s_43 = ATgetArgument(t, 0);
      t_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_43;
        if((s_43 != t))
          {
            _fail(t);
          }
        t = r_43;
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        t = (ATerm) ATmakeAppl(sym__2, s_43, t_43);
        {
          ATerm o_17 = t;
          int t_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_43, t_43);
              LocalPopChoice(t_17);
            }
          else
            {
              t = o_17;
              t = SSL_gtr(s_43, t_43);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_43, t_43);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  ATerm x_43 = NULL;
  x_43 = t;
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
        t = term_b_14;
        a_44 = t;
        t = term_c_16;
        b_44 = t;
        t = term_w_17;
        t = v_5(a_44, b_44, t);
        z_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_43, term_y_15);
        t = geq_0_0(t);
        t = x_43;
        t = g_105(t);
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = x_43;
      }
  }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,g_44 = NULL,h_44 = NULL;
  t = run_time_0_0(t);
  d_44 = t;
  t = term_s_15;
  t = whoami_0_0(t);
  e_44 = t;
  t = term_t_15;
  g_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_17), d_44), term_x_17), e_44);
  h_44 = t;
  t = SSL_printnl(g_44, h_44);
  t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_17), d_44), term_x_17), e_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_16;
  i_44 = t;
  t = SSL_exit(i_44);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL;
  t_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_44 = ATgetArgument(t, 0);
          {
            ATerm w_16 = NULL,v_9 = NULL;
            t = SSLgetAnnotations(t_44);
            w_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_44);
            v_9 = t;
            t = SSLsetAnnotations(v_9, w_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_44 = NULL,m_44 = NULL;
      t = term_b_14;
      l_44 = t;
      t = term_b_18;
      m_44 = t;
      t = term_d_18;
      t = v_5(l_44, m_44, t);
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      t = fetch_1_0(m_6, t);
    }
  t = w_107(t);
  return(t);
}
static ATerm z_5 (ATerm o_55, ATerm p_55, ATerm q_55, ATerm t)
{
  ATerm v_44 = NULL;
  t = SSL_hashtable_put(q_55, o_55, p_55);
  v_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_44);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_53, ATerm t)
{
  ATerm e_45 = NULL;
  t = table_hashtable_0_0(t);
  e_45 = t;
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_17 = NULL;
        t = e_45;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_6(t_53, m_17, t);
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        {
          ATerm c_18 = NULL;
          t = t_53;
          t = table_create_0_0(t);
          t = e_45;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_6(t_53, c_18, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_55, ATerm x_55, ATerm t)
{
  ATerm h_45 = NULL;
  t = SSL_hashtable_create(w_55, x_55);
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_45);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,m_45 = NULL,n_45 = NULL;
  i_45 = t;
  t = term_g_18;
  m_45 = t;
  t = term_h_18;
  n_45 = t;
  t = i_45;
  t = new_hashtable_0_2(m_45, n_45, t);
  j_45 = t;
  t = i_45;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(i_45, j_45, k_45, t);
  t = i_45;
  return(t);
}
static ATerm s_5 (ATerm t_55, ATerm u_55, ATerm t)
{
  ATerm o_45 = NULL;
  t = SSL_hashtable_remove(u_55, t_55);
  o_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_45);
  return(t);
}
static ATerm t_5 (ATerm y_55, ATerm t)
{
  ATerm p_45 = NULL;
  t = SSL_hashtable_destroy(y_55);
  p_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_45);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm q_45 = NULL;
  t = SSL_table_hashtable();
  q_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_45);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
  r_45 = t;
  t = table_hashtable_0_0(t);
  s_45 = t;
  t = lookup_table_0_1(r_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(u_45, t);
  t = s_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(r_45, t_45, t);
  t = r_45;
  return(t);
}
ATerm map_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  static ATerm j_46 (ATerm t)
  {
    ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
    g_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_46;
      }
    else
      {
        ATerm m_18 = NULL,t_18 = NULL,u_18 = NULL,x_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_46 = ATgetFirst((ATermList) t);
            i_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_46);
        m_18 = t;
        t = h_46;
        t = y_89(t);
        t_18 = t;
        t = i_46;
        t = j_46(t);
        u_18 = t;
        t = (ATerm) ATinsert(CheckATermList(u_18), t_18);
        x_9 = t;
        t = SSLsetAnnotations(x_9, m_18);
      }
    return(t);
  }
  t = j_46(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_46 = ATgetFirst((ATermList) t);
      n_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_46 = NULL,s_46 = NULL;
        static ATerm n_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_46)), not_null(s_46));
          return(t);
        }
        t = n_46;
        t = i_0(t);
        if(((r_46 != NULL) && (r_46 != t)))
          _fail(t);
        else
          r_46 = t;
        t = m_46;
        t = g_0(t);
        if(((s_46 != NULL) && (s_46 != t)))
          _fail(t);
        else
          s_46 = t;
        t = n_46;
        t = reverse_acc_2_0(g_0, n_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_15;
      t = i_0(t);
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,z_9 = NULL;
  a_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_47);
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_46);
  z_9 = t;
  t = SSLsetAnnotations(z_9, y_46);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm c_47 = NULL;
  c_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_47), term_j_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_46 = NULL,x_46 = NULL;
      t = term_b_14;
      w_46 = t;
      t = term_e_17;
      x_46 = t;
      t = term_g_17;
      t = v_5(w_46, x_46, t);
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      t = fetch_1_0(o_6, t);
    }
  t = term_n_18;
  t = echo_0_0(t);
  t = term_u_16;
  u_46 = t;
  t = term_v_16;
  v_46 = t;
  t = term_o_18;
  t = v_5(u_46, v_46, t);
  t = reverse_acc_2_0(_id, q_6, t);
  t = map_1_0(s_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  static ATerm b_48 (ATerm t)
  {
    ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
    y_47 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_47 = ATgetFirst((ATermList) t);
        a_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_18 = t;
      int q_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_19 = NULL,j_19 = NULL,b_10 = NULL;
          t = SSLgetAnnotations(y_47);
          f_19 = t;
          t = z_47;
          t = i_90(t);
          j_19 = t;
          t = (ATerm) ATinsert(CheckATermList(a_48), j_19);
          b_10 = t;
          t = SSLsetAnnotations(b_10, f_19);
          LocalPopChoice(q_18);
        }
      else
        {
          t = p_18;
          {
            ATerm e_20 = NULL,h_20 = NULL,c_10 = NULL;
            t = SSLgetAnnotations(y_47);
            e_20 = t;
            t = a_48;
            t = b_48(t);
            h_20 = t;
            t = (ATerm) ATinsert(CheckATermList(h_20), z_47);
            c_10 = t;
            t = SSLsetAnnotations(c_10, e_20);
          }
        }
    }
    return(t);
  }
  t = b_48(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
  f_48 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_48;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_18 = ATgetFirst((ATermList) t);
                ATerm w_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_48;
          }
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        t = (ATerm) ATinsert(ATempty, f_48);
      }
  }
  g_48 = t;
  t = term_e_14;
  h_48 = t;
  t = SSL_printnl(h_48, g_48);
  t = f_48;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  t = term_b_14;
  l_48 = t;
  t = term_e_17;
  m_48 = t;
  t = term_g_17;
  t = v_5(l_48, m_48, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_6 (ATerm r_55, ATerm s_55, ATerm t)
{
  t = SSL_hashtable_get(s_55, r_55);
  return(t);
}
static ATerm v_5 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm n_48 = NULL;
  t = lookup_table_0_1(a_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(b_54, n_48, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL;
  t = term_x_18;
  p_48 = t;
  t = term_s_15;
  q_48 = t;
  t = term_y_18;
  t = y_5(p_48, q_48, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_z_18;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  t = term_x_18;
  t_48 = t;
  t = term_s_15;
  u_48 = t;
  t = term_y_18;
  t = y_5(t_48, u_48, t);
  t = term_a_19;
  r_48 = t;
  t = term_s_15;
  s_48 = t;
  t = term_b_19;
  t = y_5(r_48, s_48, t);
  t = term_c_19;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_6, u_6, v_6, t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      t = Option_3_0(w_6, y_6, z_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_69 (ATerm), ATerm l_69 (ATerm), ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,i_10 = NULL;
  a_49 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_48 = ATgetFirst((ATermList) t);
      x_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_49);
  v_48 = t;
  t = w_48;
  t = k_69(t);
  y_48 = t;
  t = x_48;
  t = l_69(t);
  z_48 = t;
  t = (ATerm) ATinsert(CheckATermList(z_48), y_48);
  i_10 = t;
  t = SSLsetAnnotations(i_10, v_48);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_109 (ATerm), ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,k_49 = NULL,l_49 = NULL,m_10 = NULL;
  f_49 = t;
  {
    ATerm i_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_19;
        t = z_109(t);
        LocalPopChoice(k_19);
      }
    else
      {
        t = i_19;
      }
  }
  t = f_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_49 = ATgetFirst((ATermList) t);
      i_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_49);
  g_49 = t;
  t = term_e_17;
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_17, h_49);
  t = y_5(l_49, h_49, t);
  t = i_49;
  {
    static ATerm v_49 (ATerm t)
    {
      ATerm m_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_49 = NULL;
              o_49 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_49;
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
              t = z_109(t);
              t = Cons_2_0(_id, v_49, t);
            }
          LocalPopChoice(n_19);
        }
      else
        {
          t = m_19;
          {
            ATerm r_49 = NULL,s_49 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_49 = ATgetFirst((ATermList) t);
                s_49 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_49), (ATerm) ATmakeAppl(sym_Undefined_1, r_49));
          }
        }
      return(t);
    }
    t = v_49(t);
  }
  k_49 = t;
  t = (ATerm) ATinsert(CheckATermList(k_49), (ATerm) ATmakeAppl(sym_Program_1, h_49));
  m_10 = t;
  t = SSLsetAnnotations(m_10, g_49);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm i_50 = NULL;
  i_50 = t;
  if(match_string(t, "--help"))
    {
      t = i_50;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_50;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_50;
        }
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL;
  t = term_b_18;
  j_50 = t;
  t = term_s_15;
  k_50 = t;
  t = term_v_19;
  t = y_5(j_50, k_50, t);
  t = term_w_19;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_x_19;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_109 (ATerm), ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  c_50 = t;
  t = term_u_16;
  d_50 = t;
  t = term_y_19;
  t = lookup_table_0_1(d_50, t);
  h_50 = t;
  t = term_v_16;
  e_50 = t;
  t = (ATerm) ATempty;
  f_50 = t;
  t = h_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(e_50, f_50, g_50, t);
  t = c_50;
  {
    static ATerm b_7 (ATerm t)
    {
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_109(t);
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
          {
            ATerm b_20 = t;
            int c_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_7, d_7, e_7, t);
                LocalPopChoice(c_20);
              }
            else
              {
                t = b_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_7, t);
  }
  {
    ATerm d_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_50 = NULL;
        v_50 = t;
        {
          ATerm g_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_20 = NULL;
              t = v_50;
              {
                ATerm j_20 = t;
                int k_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_20 = NULL,q_20 = NULL;
                    t = term_b_14;
                    p_20 = t;
                    t = term_b_18;
                    q_20 = t;
                    t = term_d_18;
                    t = v_5(p_20, q_20, t);
                    LocalPopChoice(k_20);
                  }
                else
                  {
                    t = j_20;
                    t = fetch_1_0(f_7, t);
                  }
              }
              t = v_50;
              t = default_system_usage_0_0(t);
              t = term_d_16;
              o_20 = t;
              t = SSL_exit(o_20);
              LocalPopChoice(i_20);
            }
          else
            {
              t = g_20;
              {
                ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
                t = term_b_14;
                v_20 = t;
                t = term_x_18;
                w_20 = t;
                t = term_l_20;
                t = v_5(v_20, w_20, t);
                t = v_50;
                t = default_system_about_0_0(t);
                t = term_d_16;
                u_20 = t;
                t = SSL_exit(u_20);
              }
            }
        }
        LocalPopChoice(f_20);
      }
    else
      {
        t = d_20;
        {
          ATerm m_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL;
              static ATerm h_7 (ATerm t)
              {
                ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,r_10 = NULL;
                b_51 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_51 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_51);
                z_50 = t;
                t = a_51;
                if(((a_50 != NULL) && (a_50 != t)))
                  _fail(t);
                else
                  a_50 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_51);
                r_10 = t;
                t = SSLsetAnnotations(r_10, z_50);
                return(t);
              }
              t = fetch_1_0(h_7, t);
              t = term_t_15;
              x_50 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_50)), term_r_20);
              y_50 = t;
              t = SSL_printnl(x_50, y_50);
              t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_50)), term_r_20));
              t = default_system_usage_0_0(t);
              t = term_y_15;
              w_50 = t;
              t = SSL_exit(w_50);
              LocalPopChoice(n_20);
            }
          else
            {
              t = m_20;
            }
        }
      }
  }
  b_50 = t;
  t = term_u_16;
  t = table_destroy_0_0(t);
  t = b_50;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
  t = parse_options_1_0(y_107, t);
  g_51 = t;
  t = term_s_20;
  t = table_create_0_0(t);
  t = term_s_20;
  h_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_20, term_t_20, g_51);
  t = lookup_table_0_1(h_51, t);
  k_51 = t;
  t = term_t_20;
  i_51 = t;
  t = k_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(i_51, g_51, j_51, t);
  t = g_51;
  t = a_108(t);
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_107, t);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        {
          ATerm z_20 = t;
          int a_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_108(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_21);
            }
          else
            {
              t = z_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm d_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_21);
          }
        else
          {
            t = d_21;
            {
              ATerm g_21 = t;
              int h_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(m_7, n_7, p_7, t);
                  LocalPopChoice(h_21);
                }
              else
                {
                  t = g_21;
                  {
                    ATerm i_21 = t;
                    int j_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(j_21);
                      }
                    else
                      {
                        t = i_21;
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
  t = input_1_0(q_7, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  t = term_i_14;
  m_51 = t;
  t = term_s_15;
  n_51 = t;
  t = term_k_21;
  t = y_5(m_51, n_51, t);
  t = term_l_21;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_m_21;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_7, default_usage_0_0, _id, l_7, t);
  return(t);
}
