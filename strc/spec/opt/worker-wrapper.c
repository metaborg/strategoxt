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
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_RDecT_3;
Symbol sym_GenDynRules_1;
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
Symbol sym_DynamicRules_1;
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
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
}
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_f_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Sort_2, term_t_13, (ATerm) ATempty);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_13);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_b_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_n_16, term_q_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_e_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_w_17);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_n_16);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_q_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_g_17, term_h_17);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_e_16);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_t_19, term_e_16);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_e_16);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__3, term_g_17, term_h_17, (ATerm) ATempty);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_p_19);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_b_15, term_e_16);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
static ATerm y_4 (ATerm i_96 (ATerm), ATerm j_29, ATerm i_29, ATerm t);
ATerm genzip_4_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm d_5 (ATerm m_622, ATerm r_622, ATerm r_59, ATerm t);
ATerm while_not_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t);
ATerm for_3_0 (ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm q_6 (ATerm f_3, ATerm g_3, ATerm j_3, ATerm t);
static ATerm u_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm h_5 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm p_29, ATerm o_29, ATerm t);
static ATerm i_5 (ATerm n_96 (ATerm), ATerm l_29, ATerm k_29, ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm free_vars_3_0 (ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm z_114 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm worker_wrapper_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm t_92 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_35 (ATerm u_34, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm worker_wrapper_spec_0_0 (ATerm t);
static ATerm j_5 (ATerm m_38, ATerm n_38, ATerm t);
static ATerm k_5 (ATerm h_23, ATerm i_23, ATerm t);
static ATerm m_5 (ATerm t_91 (ATerm), ATerm f_153, ATerm n_23, ATerm t);
static ATerm l_5 (ATerm d_23, ATerm e_23, ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm output_1_0 (ATerm r_110 (ATerm), ATerm t);
static ATerm h_37 (ATerm z_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_5 (ATerm j_23, ATerm t);
static ATerm o_5 (ATerm f_37, ATerm g_37, ATerm t);
static ATerm p_5 (ATerm o_38, ATerm p_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_39 (ATerm r_37, ATerm t);
static ATerm b_39 (ATerm v_37, ATerm w_37, ATerm x_37, ATerm t);
static ATerm c_39 (ATerm f_38, ATerm g_38, ATerm h_38, ATerm t);
static ATerm q_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm s_110 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_5 (ATerm f_48, ATerm g_48, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_5 (ATerm a_53, ATerm b_53, ATerm z_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_5 (ATerm i_41, ATerm j_41, ATerm t);
ATerm foldr_2_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_107 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm need_help_1_0 (ATerm i_110 (ATerm), ATerm t);
static ATerm a_6 (ATerm s_56, ATerm t_56, ATerm u_56, ATerm t);
ATerm lookup_table_0_1 (ATerm m_54, ATerm t);
ATerm new_hashtable_0_2 (ATerm a_57, ATerm b_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_5 (ATerm x_56, ATerm y_56, ATerm t);
static ATerm u_5 (ATerm c_57, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm c_92 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_92 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm b_6 (ATerm v_56, ATerm w_56, ATerm t);
static ATerm w_5 (ATerm t_54, ATerm u_54, ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_112 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm parse_options_1_0 (ATerm k_112 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
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
static ATerm y_4 (ATerm i_96 (ATerm), ATerm j_29, ATerm i_29, ATerm t)
{
  static ATerm a_1 (ATerm t)
  {
    ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL;
    v_0 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_0;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_0 = ATgetFirst((ATermList) t);
            x_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_7 = t;
          int t_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_0;
              {
                static ATerm a_0 (ATerm t)
                {
                  t = i_29;
                  return(t);
                }
                t = h_5(i_96, a_0, w_0, x_0, t);
              }
              t = a_1(t);
              LocalPopChoice(t_7);
            }
          else
            {
              t = r_7;
              {
                ATerm h_0 = NULL,c_1 = NULL,j_0 = NULL;
                t = SSLgetAnnotations(v_0);
                h_0 = t;
                t = x_0;
                t = a_1(t);
                c_1 = t;
                t = (ATerm) ATinsert(CheckATermList(c_1), w_0);
                j_0 = t;
                t = SSLsetAnnotations(j_0, h_0);
              }
            }
        }
      }
    return(t);
  }
  t = j_29;
  t = a_1(t);
  return(t);
}
ATerm genzip_4_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm t)
{
  static ATerm m_1 (ATerm t)
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_94(t);
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        {
          ATerm f_1 = NULL,g_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,o_0 = NULL;
          t = h_94(t);
          l_1 = t;
          if(match_cons(t, sym__2))
            {
              g_1 = ATgetArgument(t, 0);
              i_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_1);
          f_1 = t;
          t = g_1;
          t = j_94(t);
          j_1 = t;
          t = i_1;
          t = m_1(t);
          k_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_1, k_1);
          o_0 = t;
          t = SSLsetAnnotations(o_0, f_1);
          t = i_94(t);
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
  ATerm z_1 = NULL,i_2 = NULL,k_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_7 = ATgetArgument(t, 0);
      if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
        {
          z_1 = ATgetFirst((ATermList) z_7);
          i_2 = (ATerm) ATgetNext((ATermList) z_7);
        }
      else
        _fail(t);
      {
        ATerm b_8 = ATgetArgument(t, 1);
        if(((ATgetType(b_8) == AT_LIST) && !(ATisEmpty(b_8))))
          {
            k_2 = ATgetFirst((ATermList) b_8);
            l_2 = (ATerm) ATgetNext((ATermList) b_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_1, k_2), (ATerm) ATmakeAppl(sym__2, i_2, l_2));
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
static ATerm d_5 (ATerm m_622, ATerm r_622, ATerm r_59, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,v_1 = NULL;
  t = SSL_explode_term(r_622);
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_622);
  if(match_cons(t, sym__2))
    {
      if((o_1 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_1, q_1);
  t = genzip_4_0(b_0, f_0, m_0, _id, t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_1, r_59);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  static ATerm r_2 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_85(t);
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        t = i_85(t);
        t = r_2(t);
      }
    return(t);
  }
  t = r_2(t);
  return(t);
}
ATerm for_3_0 (ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t)
{
  t = k_85(t);
  t = while_not_2_0(l_85, m_85, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm a_3 = NULL;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_3);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,r_0 = NULL;
  e_3 = t;
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  b_3 = t;
  t = d_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_3, d_3);
  r_0 = t;
  t = SSLsetAnnotations(r_0, b_3);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,t_4 = NULL;
  n_4 = t;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_4 = ATgetFirst((ATermList) t);
      t_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_6(o_4, p_4, n_4, t);
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_4), q_4), t_4);
          }
      }
    }
  else
    {
      t = q_6(o_4, p_4, n_4, t);
    }
  return(t);
}
static ATerm q_6 (ATerm f_3, ATerm g_3, ATerm j_3, ATerm t)
{
  ATerm o_3 = NULL,r_3 = NULL,s_0 = NULL,x_3 = NULL,y_3 = NULL,b_4 = NULL,c_4 = NULL;
  t = SSLgetAnnotations(j_3);
  o_3 = t;
  t = g_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_3 = ATgetFirst((ATermList) t);
      c_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_3;
  if(match_cons(t, sym__2))
    {
      y_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_4;
        if((y_3 != t))
          {
            _fail(t);
          }
        t = c_4;
        LocalPopChoice(o_8);
      }
    else
      {
        t = h_8;
        t = g_3;
        t = d_5(y_3, b_4, c_4, t);
      }
  }
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_3, r_3);
  s_0 = t;
  t = SSLsetAnnotations(s_0, o_3);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm j_6 = NULL;
  if(match_cons(t, sym__2))
    {
      j_6 = ATgetArgument(t, 0);
      if((j_6 != ATgetArgument(t, 1)))
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
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_0, q_0, t_0, t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm v_5 = NULL,f_6 = NULL,g_6 = NULL;
        v_5 = t;
        if(match_cons(t, sym__2))
          {
            f_6 = ATgetArgument(t, 0);
            g_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_5;
        t = y_4(u_0, f_6, g_6, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,a_14 = NULL,b_14 = NULL,g_14 = NULL;
  b_14 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_14 = ATgetArgument(t, 0);
      x_13 = ATgetArgument(t, 1);
      {
        ATerm w_1 = NULL,b_2 = NULL,c_2 = NULL,e_1 = NULL;
        t = SSLgetAnnotations(b_14);
        w_1 = t;
        t = g_14;
        t = j_117(t);
        b_2 = t;
        t = x_13;
        t = h_117(t);
        c_2 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_2, c_2);
        e_1 = t;
        t = SSLsetAnnotations(e_1, w_1);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          g_14 = ATgetArgument(t, 0);
          x_13 = ATgetArgument(t, 1);
          y_13 = ATgetArgument(t, 2);
          {
            ATerm s_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,j_8 = NULL;
            t = SSLgetAnnotations(b_14);
            s_2 = t;
            t = g_14;
            t = j_117(t);
            w_2 = t;
            t = x_13;
            t = j_117(t);
            x_2 = t;
            t = y_13;
            t = j_117(t);
            y_2 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, w_2, x_2, y_2);
            j_8 = t;
            t = SSLsetAnnotations(j_8, s_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              g_14 = ATgetArgument(t, 0);
              x_13 = ATgetArgument(t, 1);
              y_13 = ATgetArgument(t, 2);
              a_14 = ATgetArgument(t, 3);
              {
                ATerm z_3 = NULL,l_4 = NULL,m_4 = NULL,r_4 = NULL,s_4 = NULL,k_8 = NULL;
                t = SSLgetAnnotations(b_14);
                z_3 = t;
                t = g_14;
                t = j_117(t);
                l_4 = t;
                t = x_13;
                t = j_117(t);
                m_4 = t;
                t = y_13;
                t = j_117(t);
                r_4 = t;
                t = a_14;
                t = h_117(t);
                s_4 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_4, m_4, r_4, s_4);
                k_8 = t;
                t = SSLsetAnnotations(k_8, z_3);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  g_14 = ATgetArgument(t, 0);
                  x_13 = ATgetArgument(t, 1);
                  y_13 = ATgetArgument(t, 2);
                  a_14 = ATgetArgument(t, 3);
                  {
                    ATerm d_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,r_6 = NULL,l_8 = NULL;
                    t = SSLgetAnnotations(b_14);
                    d_6 = t;
                    t = g_14;
                    t = j_117(t);
                    n_6 = t;
                    t = x_13;
                    t = j_117(t);
                    o_6 = t;
                    t = y_13;
                    t = j_117(t);
                    p_6 = t;
                    t = a_14;
                    t = h_117(t);
                    r_6 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, n_6, o_6, p_6, r_6);
                    l_8 = t;
                    t = SSLsetAnnotations(l_8, d_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      g_14 = ATgetArgument(t, 0);
                      {
                        ATerm a_7 = NULL,c_7 = NULL,m_8 = NULL;
                        t = SSLgetAnnotations(b_14);
                        a_7 = t;
                        t = g_14;
                        t = h_117(t);
                        c_7 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, c_7);
                        m_8 = t;
                        t = SSLsetAnnotations(m_8, a_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          g_14 = ATgetArgument(t, 0);
                          {
                            ATerm i_7 = NULL,k_7 = NULL,n_8 = NULL;
                            t = SSLgetAnnotations(b_14);
                            i_7 = t;
                            t = g_14;
                            t = h_117(t);
                            k_7 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, k_7);
                            n_8 = t;
                            t = SSLsetAnnotations(n_8, i_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              g_14 = ATgetArgument(t, 0);
                              {
                                ATerm q_7 = NULL,s_7 = NULL,s_8 = NULL;
                                t = SSLgetAnnotations(b_14);
                                q_7 = t;
                                t = g_14;
                                t = h_117(t);
                                s_7 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, s_7);
                                s_8 = t;
                                t = SSLsetAnnotations(s_8, q_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  g_14 = ATgetArgument(t, 0);
                                  {
                                    ATerm y_7 = NULL,a_8 = NULL,x_8 = NULL;
                                    t = SSLgetAnnotations(b_14);
                                    y_7 = t;
                                    t = g_14;
                                    t = h_117(t);
                                    a_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, a_8);
                                    x_8 = t;
                                    t = SSLsetAnnotations(x_8, y_7);
                                  }
                                }
                              else
                                {
                                  ATerm g_8 = NULL,i_8 = NULL,y_8 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      g_14 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(b_14);
                                  g_8 = t;
                                  t = g_14;
                                  t = h_117(t);
                                  i_8 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, i_8);
                                  y_8 = t;
                                  t = SSLsetAnnotations(y_8, g_8);
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
static ATerm y_0 (ATerm t)
{
  ATerm k_15 = NULL;
  ATerm r_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_15 = ATgetArgument(t, 0);
          {
            ATerm u_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_8);
      t = k_15;
    }
  else
    {
      t = r_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_15;
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm y_15 = NULL;
  ATerm w_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_15 = ATgetArgument(t, 0);
          {
            ATerm a_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_8);
      t = y_15;
    }
  else
    {
      t = w_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_15;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm d_15 = NULL;
  ATerm b_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm e_9 = ATgetArgument(t, 0);
          ATerm f_9 = ATgetArgument(t, 1);
          d_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(d_9);
      t = d_15;
      t = map_1_0(y_0, t);
    }
  else
    {
      t = b_9;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm g_9 = ATgetArgument(t, 0);
          ATerm h_9 = ATgetArgument(t, 1);
          d_15 = ATgetArgument(t, 2);
          {
            ATerm i_9 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_15;
      t = map_1_0(z_0, t);
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm o_17 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_17);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            {
              ATerm p_9 = t;
              int r_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_17 = ATgetArgument(t, 0);
                      t_17 = ATgetArgument(t, 1);
                      u_17 = ATgetArgument(t, 2);
                      v_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_17;
                  t = map_1_0(h_1, t);
                  LocalPopChoice(r_9);
                }
              else
                {
                  t = p_9;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm g_18 = NULL;
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_18 = ATgetArgument(t, 0);
          {
            ATerm d_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_9);
      t = g_18;
    }
  else
    {
      t = w_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_18;
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm o_18 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_18);
  return(t);
}
static ATerm r_1 (ATerm t)
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
              ATerm l_10 = t;
              int m_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_18 = NULL,w_18 = NULL,y_18 = NULL,b_19 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_18 = ATgetArgument(t, 0);
                      w_18 = ATgetArgument(t, 1);
                      y_18 = ATgetArgument(t, 2);
                      b_19 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_18;
                  t = map_1_0(s_1, t);
                  LocalPopChoice(m_10);
                }
              else
                {
                  t = l_10;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm o_19 = NULL;
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_19 = ATgetArgument(t, 0);
          {
            ATerm s_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_10);
      t = o_19;
    }
  else
    {
      t = p_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_19;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm y_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_19);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm u_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_10);
    }
  else
    {
      t = u_10;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            {
              ATerm b_11 = t;
              int d_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,i_20 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_20 = ATgetArgument(t, 0);
                      d_20 = ATgetArgument(t, 1);
                      e_20 = ATgetArgument(t, 2);
                      i_20 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_20;
                  t = map_1_0(x_1, t);
                  LocalPopChoice(d_11);
                }
              else
                {
                  t = b_11;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm x_20 = NULL;
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_20 = ATgetArgument(t, 0);
          {
            ATerm g_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_11);
      t = x_20;
    }
  else
    {
      t = e_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_20;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm d_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_22);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm h_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = h_11;
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            {
              ATerm n_11 = t;
              int o_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_22 = ATgetArgument(t, 0);
                      l_22 = ATgetArgument(t, 1);
                      m_22 = ATgetArgument(t, 2);
                      n_22 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_22;
                  t = map_1_0(d_2, t);
                  LocalPopChoice(o_11);
                }
              else
                {
                  t = n_11;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm x_22 = NULL;
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_22 = ATgetArgument(t, 0);
          {
            ATerm r_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_11);
      t = x_22;
    }
  else
    {
      t = p_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_22;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm k_23 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_23);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        ATerm v_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_11);
          }
        else
          {
            t = v_11;
            {
              ATerm y_11 = t;
              int b_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_23 = NULL,e_24 = NULL,h_24 = NULL,i_24 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_23 = ATgetArgument(t, 0);
                      e_24 = ATgetArgument(t, 1);
                      h_24 = ATgetArgument(t, 2);
                      i_24 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_24;
                  t = map_1_0(g_2, t);
                  LocalPopChoice(b_12);
                }
              else
                {
                  t = y_11;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm t_24 = NULL;
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_24 = ATgetArgument(t, 0);
          {
            ATerm e_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_12);
      t = t_24;
    }
  else
    {
      t = c_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_24;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm m_17 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      m_17 = ATgetArgument(t, 0);
      t = m_17;
      t = free_vars_3_0(b_1, d_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          m_17 = ATgetArgument(t, 0);
          t = m_17;
          t = free_vars_3_0(n_1, r_1, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              m_17 = ATgetArgument(t, 0);
              t = m_17;
              t = free_vars_3_0(t_1, u_1, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  m_17 = ATgetArgument(t, 0);
                  t = m_17;
                  t = free_vars_3_0(y_1, a_2, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      m_17 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_17;
                  t = free_vars_3_0(e_2, f_2, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm r_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_25);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm h_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_12);
          }
        else
          {
            t = h_12;
            {
              ATerm k_12 = t;
              int l_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_25 = NULL,v_25 = NULL,x_25 = NULL,a_26 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_25 = ATgetArgument(t, 0);
                      v_25 = ATgetArgument(t, 1);
                      x_25 = ATgetArgument(t, 2);
                      a_26 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_25;
                  t = map_1_0(m_2, t);
                  LocalPopChoice(l_12);
                }
              else
                {
                  t = k_12;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm t_26 = NULL;
  ATerm m_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_26 = ATgetArgument(t, 0);
          {
            ATerm p_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_12);
      t = t_26;
    }
  else
    {
      t = m_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_26;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm f_25 = NULL,l_25 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      l_25 = ATgetArgument(t, 0);
      t = l_25;
      if(match_cons(t, sym_Rule_3))
        {
          f_25 = ATgetArgument(t, 0);
          {
            ATerm u_12 = ATgetArgument(t, 1);
          }
          {
            ATerm v_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_25;
      t = free_vars_3_0(h_2, j_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          l_25 = ATgetArgument(t, 0);
          {
            ATerm w_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_25;
    }
  return(t);
}
static ATerm h_5 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm p_29, ATerm o_29, ATerm t)
{
  t = r_96(t);
  {
    static ATerm p_2 (ATerm t)
    {
      ATerm x_26 = NULL;
      x_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_29, x_26);
      t = q_96(t);
      return(t);
    }
    t = fetch_1_0(p_2, t);
  }
  t = o_29;
  return(t);
}
static ATerm i_5 (ATerm n_96 (ATerm), ATerm l_29, ATerm k_29, ATerm t)
{
  static ATerm e_28 (ATerm t)
  {
    ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
    z_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_28 = ATgetFirst((ATermList) t);
            b_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_12 = t;
          int y_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_27;
              {
                static ATerm q_2 (ATerm t)
                {
                  t = k_29;
                  return(t);
                }
                t = h_5(n_96, q_2, a_28, b_28, t);
              }
              t = e_28(t);
              LocalPopChoice(y_12);
            }
          else
            {
              t = x_12;
              {
                ATerm v_8 = NULL,c_9 = NULL,q_9 = NULL;
                t = SSLgetAnnotations(z_27);
                v_8 = t;
                t = b_28;
                t = e_28(t);
                c_9 = t;
                t = (ATerm) ATinsert(CheckATermList(c_9), a_28);
                q_9 = t;
                t = SSLsetAnnotations(q_9, v_8);
              }
            }
        }
      }
    return(t);
  }
  t = l_29;
  t = e_28(t);
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
static ATerm z_2 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(h_3, t_9, u_9, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm v_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      if((v_9 != ATgetArgument(t, 1)))
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
static ATerm k_3 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(l_3, e_10, f_10, t);
  return(t);
}
static ATerm l_3 (ATerm t)
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
ATerm free_vars_3_0 (ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm z_114 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm n_29 (ATerm t)
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_114(t);
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        {
          ATerm c_13 = t;
          int d_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_28 = NULL,s_28 = NULL,n_9 = NULL,o_9 = NULL;
              o_28 = t;
              t = y_114(t);
              s_28 = t;
              t = o_28;
              {
                static ATerm t_2 (ATerm t)
                {
                  ATerm x_28 = NULL;
                  t = n_29(t);
                  x_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_28, s_28);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_114(t_2, n_29, u_2, t);
              }
              o_9 = t;
              t = SSL_explode_term(o_9);
              if(match_cons(t, sym__2))
                {
                  ATerm e_13 = ATgetArgument(t, 0);
                  n_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_9;
              t = foldr_3_0(v_2, z_2, _id, t);
              LocalPopChoice(d_13);
            }
          else
            {
              t = c_13;
              {
                ATerm y_9 = NULL,z_9 = NULL;
                z_9 = t;
                t = SSL_explode_term(z_9);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_13 = ATgetArgument(t, 0);
                    y_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_9;
                t = foldr_3_0(i_3, k_3, n_29, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_29(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm t_12 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_12);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm l_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_13);
          }
        else
          {
            t = l_13;
            {
              ATerm n_13 = t;
              int o_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_13 = NULL,g_13 = NULL,j_13 = NULL,k_13 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_13 = ATgetArgument(t, 0);
                      g_13 = ATgetArgument(t, 1);
                      j_13 = ATgetArgument(t, 2);
                      k_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_13;
                  t = map_1_0(p_3, t);
                  LocalPopChoice(o_13);
                }
              else
                {
                  t = n_13;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm d_14 = NULL;
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_14 = ATgetArgument(t, 0);
          {
            ATerm r_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_13);
      t = d_14;
    }
  else
    {
      t = p_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_14;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm m_14 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_14 = ATgetArgument(t, 0);
      {
        ATerm s_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_14;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_14, term_v_13);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm s_14 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_14 = ATgetArgument(t, 0);
      {
        ATerm w_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_14), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm t_14 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_14 = ATgetArgument(t, 0);
      {
        ATerm z_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, t_14);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
  e_33 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      f_33 = ATgetArgument(t, 0);
      g_33 = ATgetArgument(t, 1);
      h_33 = ATgetArgument(t, 2);
      i_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = i_33;
  if(match_cons(t, sym_Seq_2))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
      t = j_33;
      if(match_cons(t, sym_Match_1))
        {
          d_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, f_33, g_33, h_33, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_33), k_33)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm u_11 = NULL,x_11 = NULL,z_11 = NULL,a_12 = NULL,i_12 = NULL,n_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          j_33 = ATgetArgument(t, 0);
          k_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_33;
      if(match_cons(t, sym_Seq_2))
        {
          l_33 = ATgetArgument(t, 0);
          n_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_33;
      if(match_cons(t, sym_Match_1))
        {
          m_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_33;
      if(match_cons(t, sym_Op_2))
        {
          ATerm c_14 = ATgetArgument(t, 0);
          ATerm e_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_33;
      t = free_vars_3_0(m_3, n_3, tboundin_3_0, t);
      r_12 = t;
      t = h_33;
      t = map_1_0(q_3, t);
      s_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_12, s_12);
      t = diff_0_0(t);
      x_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_33, x_11);
      t = diff_0_0(t);
      u_11 = t;
      t = x_11;
      t = map_1_0(s_3, t);
      z_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_33, z_11);
      t = conc_0_0(t);
      n_12 = t;
      t = new_0_0(t);
      a_12 = t;
      t = g_33;
      t = map_1_0(t_3, t);
      i_12 = t;
      t = n_12;
      t = map_1_0(u_3, t);
      q_12 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, a_12, g_33, n_12, (ATerm) ATmakeAppl(sym_Scope_2, u_11, n_33))), (ATerm) ATmakeAppl(sym_SDefT_4, f_33, g_33, h_33, (ATerm) ATmakeAppl(sym_Scope_2, x_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_33), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_12), i_12, q_12)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  static ATerm q_34 (ATerm t)
  {
    ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
    p_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_34 = ATgetFirst((ATermList) t);
        o_34 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_15 = NULL,u_15 = NULL,s_9 = NULL;
          t = SSLgetAnnotations(p_34);
          q_15 = t;
          t = o_34;
          t = q_34(t);
          u_15 = t;
          t = (ATerm) ATinsert(CheckATermList(u_15), n_34);
          s_9 = t;
          t = SSLsetAnnotations(s_9, q_15);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_34;
        t = t_92(t);
      }
    return(t);
  }
  t = q_34(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  v_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_33;
    }
  else
    {
      static ATerm v_3 (ATerm t)
      {
        t = not_null(x_33);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_33 = ATgetFirst((ATermList) t);
          if(((x_33 != NULL) && (x_33 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_33;
      t = at_end_1_0(v_3, t);
    }
  return(t);
}
static ATerm c_35 (ATerm u_34, ATerm t)
{
  ATerm v_34 = NULL;
  t = SSL_explode_term(u_34);
  if(match_cons(t, sym__2))
    {
      ATerm f_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_34;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  z_34 = t;
  if(match_cons(t, sym__2))
    {
      x_34 = ATgetArgument(t, 0);
      y_34 = ATgetArgument(t, 1);
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_3 (ATerm t)
            {
              t = y_34;
              return(t);
            }
            t = x_34;
            t = at_end_1_0(w_3, t);
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            t = c_35(z_34, t);
          }
      }
    }
  else
    {
      t = c_35(z_34, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
  e_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_35;
      t = d_99(t);
    }
  else
    {
      ATerm j_35 = NULL,k_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_35 = ATgetFirst((ATermList) t);
          g_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_35;
      t = f_99(t);
      j_35 = t;
      t = g_35;
      t = foldr_3_0(d_99, e_99, f_99, t);
      k_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_35, k_35);
      t = e_99(t);
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,a_10 = NULL;
  x_35 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_35);
  u_35 = t;
  t = v_35;
  t = foldr_3_0(_id, conc_0_0, e_4, t);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_35);
  a_10 = t;
  t = SSLsetAnnotations(a_10, u_35);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      {
        ATerm z_35 = NULL;
        z_35 = t;
        t = (ATerm) ATinsert(ATempty, z_35);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,c_10 = NULL,b_10 = NULL;
  t_35 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_35);
  m_35 = t;
  t = n_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_35 = ATgetFirst((ATermList) t);
      q_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_35);
  o_35 = t;
  t = q_35;
  t = Cons_2_0(a_4, d_4, t);
  r_35 = t;
  t = (ATerm) ATinsert(CheckATermList(r_35), p_35);
  b_10 = t;
  t = SSLsetAnnotations(b_10, o_35);
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, s_35);
  c_10 = t;
  t = SSLsetAnnotations(c_10, m_35);
  return(t);
}
static ATerm j_5 (ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm b_36 = NULL;
  t = SSL_fputc(m_38, n_38);
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_36);
  return(t);
}
static ATerm k_5 (ATerm h_23, ATerm i_23, ATerm t)
{
  ATerm c_36 = NULL;
  t = SSL_write_term_to_stream_text(h_23, i_23);
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_36);
  return(t);
}
static ATerm m_5 (ATerm t_91 (ATerm), ATerm f_153, ATerm n_23, ATerm t)
{
  ATerm d_36 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_153, term_l_14);
  t = q_5(t);
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_36, n_23);
  t = t_91(t);
  t = fclose_0_0(t);
  t = n_23;
  return(t);
}
static ATerm l_5 (ATerm d_23, ATerm e_23, ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_write_term_to_stream_baf(d_23, e_23);
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_36);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if(match_cons(o_14, sym_Stream_1))
        {
          l_36 = ATgetArgument(o_14, 0);
        }
      else
        _fail(t);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(l_36, m_36, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      if(match_cons(p_14, sym_Stream_1))
        {
          q_36 = ATgetArgument(p_14, 0);
        }
      else
        _fail(t);
      r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(q_36, r_36, t);
  n_36 = t;
  t = term_q_14;
  o_36 = t;
  t = n_36;
  if(match_cons(t, sym_Stream_1))
    {
      p_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_14, n_36);
  t = j_5(o_36, p_36, t);
  return(t);
}
ATerm output_1_0 (ATerm r_110 (ATerm), ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL;
  t = r_110(t);
  g_36 = t;
  {
    ATerm r_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_36 = NULL,i_36 = NULL;
        t = term_v_14;
        h_36 = t;
        t = term_w_14;
        i_36 = t;
        t = term_x_14;
        t = w_5(h_36, i_36, t);
        LocalPopChoice(u_14);
      }
    else
      {
        t = r_14;
        t = term_y_14;
      }
  }
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_36 = NULL,k_36 = NULL;
        t = term_v_14;
        j_36 = t;
        t = term_b_15;
        k_36 = t;
        t = term_c_15;
        t = w_5(j_36, k_36, t);
        t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
        LocalPopChoice(a_15);
        if(match_cons(t, sym__2))
          {
            ATerm e_15 = ATgetArgument(t, 0);
            ATerm f_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_5(f_4, f_36, g_36, t);
      }
    else
      {
        t = z_14;
        if(match_cons(t, sym__2))
          {
            ATerm g_15 = ATgetArgument(t, 0);
            ATerm h_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_5(g_4, f_36, g_36, t);
      }
  }
  return(t);
}
static ATerm h_37 (ATerm z_36, ATerm t)
{
  t = SSL_fclose(z_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  d_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_37 = ATgetArgument(t, 0);
      {
        ATerm i_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_37);
            LocalPopChoice(j_15);
          }
        else
          {
            t = i_15;
            t = h_37(d_37, t);
          }
      }
    }
  else
    {
      t = h_37(d_37, t);
    }
  return(t);
}
static ATerm n_5 (ATerm j_23, ATerm t)
{
  t = SSL_read_term_from_stream(j_23);
  return(t);
}
static ATerm o_5 (ATerm f_37, ATerm g_37, ATerm t)
{
  t = SSL_strcat(f_37, g_37);
  return(t);
}
static ATerm p_5 (ATerm o_38, ATerm p_38, ATerm t)
{
  ATerm i_37 = NULL;
  t = SSL_fopen(o_38, p_38);
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_37);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_37 = NULL;
  t = SSL_stdin_stream();
  j_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_37);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_37 = NULL;
  t = SSL_stdout_stream();
  k_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_37);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_37 = NULL;
  t = SSL_stderr_stream();
  l_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_37);
  return(t);
}
static ATerm a_39 (ATerm r_37, ATerm t)
{
  ATerm s_37 = NULL;
  t = SSL_explode_term(r_37);
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_15 = ATgetArgument(t, 1);
        if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
          {
            s_37 = ATgetFirst((ATermList) m_15);
            {
              ATerm n_15 = (ATerm) ATgetNext((ATermList) m_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_39 (ATerm v_37, ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,d_38 = NULL,n_10 = NULL;
  t = SSLgetAnnotations(x_37);
  a_38 = t;
  t = v_37;
  if(match_cons(t, sym_Path_1))
    {
      d_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_38, w_37);
  n_10 = t;
  t = SSLsetAnnotations(n_10, a_38);
  if(match_cons(t, sym__2))
    {
      y_37 = ATgetArgument(t, 0);
      z_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(y_37, z_37, t);
  return(t);
}
static ATerm c_39 (ATerm f_38, ATerm g_38, ATerm h_38, ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,t_38 = NULL,o_10 = NULL;
  t = SSLgetAnnotations(h_38);
  k_38 = t;
  t = SSL_is_string(f_38);
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_38, g_38);
  o_10 = t;
  t = SSLsetAnnotations(o_10, k_38);
  if(match_cons(t, sym__2))
    {
      i_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(i_38, j_38, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm v_38 = NULL,y_38 = NULL,z_38 = NULL;
  v_38 = t;
  if(match_cons(t, sym__2))
    {
      y_38 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
      {
        ATerm o_15 = t;
        int p_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_39(v_38, t);
            LocalPopChoice(p_15);
          }
        else
          {
            t = o_15;
            {
              ATerm r_15 = t;
              int s_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_39(y_38, z_38, v_38, t);
                  LocalPopChoice(s_15);
                }
              else
                {
                  t = r_15;
                  t = c_39(y_38, z_38, v_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_39(v_38, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,l_39 = NULL;
  l_39 = t;
  {
    ATerm t_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_39, term_w_15);
        t = q_5(t);
        LocalPopChoice(v_15);
      }
    else
      {
        t = t_15;
        {
          ATerm l_16 = NULL,m_16 = NULL;
          t = term_x_15;
          m_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_15, l_39);
          t = o_5(m_16, l_39, t);
          l_16 = t;
          t = SSL_perror(l_16);
          _fail(t);
        }
      }
  }
  f_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_5(g_39, t);
  e_39 = t;
  t = f_39;
  t = fclose_0_0(t);
  t = e_39;
  return(t);
}
ATerm input_1_0 (ATerm s_110 (ATerm), ATerm t)
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_39 = NULL,p_39 = NULL;
      t = term_v_14;
      o_39 = t;
      t = term_b_16;
      p_39 = t;
      t = term_c_16;
      t = w_5(o_39, p_39, t);
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      t = term_d_16;
    }
  t = ReadFromFile_0_0(t);
  t = s_110(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  q_39 = t;
  t = term_e_16;
  t = whoami_0_0(t);
  r_39 = t;
  t = term_f_16;
  t_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_16), r_39), term_g_16);
  u_39 = t;
  t = SSL_printnl(t_39, u_39);
  t = term_i_16;
  s_39 = t;
  t = SSL_exit(s_39);
  t = q_39;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm w_39 = NULL;
  w_39 = t;
  if(match_string(t, "-k"))
    {
      t = w_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_39;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  t = SSL_string_to_int(x_39);
  y_39 = t;
  t = term_j_16;
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_16, y_39);
  t = z_5(z_39, y_39, t);
  t = x_39;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_k_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, j_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm b_40 = NULL;
  b_40 = t;
  if(match_string(t, "-S"))
    {
      t = b_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_40;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL;
  t = term_n_16;
  c_40 = t;
  t = term_q_16;
  d_40 = t;
  t = term_r_16;
  t = z_5(c_40, d_40, t);
  t = term_u_16;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  e_40 = t;
  t = SSL_string_to_int(e_40);
  f_40 = t;
  t = term_n_16;
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, f_40);
  t = z_5(g_40, f_40, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_40);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_w_16;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL;
  t = term_x_16;
  h_40 = t;
  t = term_e_16;
  i_40 = t;
  t = term_y_16;
  t = z_5(h_40, i_40, t);
  t = term_z_16;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_a_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, u_4, v_4, t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_4, x_4, z_4, t);
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            t = Option_3_0(a_5, b_5, c_5, t);
          }
      }
    }
  return(t);
}
static ATerm z_5 (ATerm f_48, ATerm g_48, ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  t = term_v_14;
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_14, f_48, g_48);
  t = lookup_table_0_1(j_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(f_48, g_48, k_40, t);
  t = (ATerm) ATmakeAppl(sym__3, term_v_14, f_48, g_48);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
      t = term_e_16;
      t = e_0(t);
      q_40 = t;
      t = term_g_17;
      r_40 = t;
      t = term_h_17;
      s_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_17, term_h_17, q_40);
      t = x_5(r_40, s_40, q_40, t);
      _fail(t);
    }
  else
    {
      ATerm v_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_40 = ATgetFirst((ATermList) t);
          p_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_40;
      t = c_0(t);
      t = term_e_16;
      t = d_0(t);
      v_40 = t;
      t = (ATerm) ATinsert(CheckATermList(p_40), v_40);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm x_40 = NULL;
  x_40 = t;
  if(match_string(t, "-o"))
    {
      t = x_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_40;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  y_40 = t;
  t = term_w_14;
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_14, y_40);
  t = z_5(z_40, y_40, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_40);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_i_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, f_5, g_5, t);
  return(t);
}
static ATerm x_5 (ATerm a_53, ATerm b_53, ATerm z_52, ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_53, b_53);
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_17 = ATgetArgument(t, 0);
            ATerm n_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_53, b_53);
        t = w_5(a_53, b_53, t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = (ATerm) ATempty;
      }
  }
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_53, b_53, (ATerm) ATinsert(CheckATermList(c_41), z_52));
  t = lookup_table_0_1(a_53, t);
  f_41 = t;
  t = (ATerm) ATinsert(CheckATermList(c_41), z_52);
  d_41 = t;
  t = f_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(b_53, d_41, e_41, t);
  t = b_41;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
      t = term_e_16;
      t = n_0(t);
      s_41 = t;
      t = term_g_17;
      t_41 = t;
      t = term_h_17;
      u_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_17, term_h_17, s_41);
      t = x_5(t_41, u_41, s_41, t);
      _fail(t);
    }
  else
    {
      ATerm y_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_41 = ATgetFirst((ATermList) t);
          p_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_41 = ATgetFirst((ATermList) t);
          r_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_41;
      t = k_0(t);
      t = q_41;
      t = l_0(t);
      y_41 = t;
      t = (ATerm) ATinsert(CheckATermList(r_41), y_41);
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm a_42 = NULL;
  a_42 = t;
  if(match_string(t, "-i"))
    {
      t = a_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_42;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL;
  b_42 = t;
  t = term_b_16;
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, b_42);
  t = z_5(c_42, b_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_42);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, y_5, c_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_16;
  t = whoami_0_0(t);
  d_42 = t;
  t = term_f_16;
  f_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_17), d_42);
  g_42 = t;
  t = SSL_printnl(f_42, g_42);
  t = term_i_16;
  e_42 = t;
  t = SSL_exit(e_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  t = term_v_14;
  h_42 = t;
  t = term_w_17;
  i_42 = t;
  t = term_x_17;
  t = w_5(h_42, i_42, t);
  return(t);
}
static ATerm r_5 (ATerm i_41, ATerm j_41, ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_41, j_41);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      t = SSL_addr(i_41, j_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
  k_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_42;
      t = b_99(t);
    }
  else
    {
      ATerm q_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_42 = ATgetFirst((ATermList) t);
          m_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_42;
      t = foldr_2_0(b_99, c_99, t);
      q_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_42, q_42);
      t = c_99(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_q_16;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL;
  if(match_cons(t, sym__2))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(s_16, t_16, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_42 = NULL,o_16 = NULL,p_16 = NULL;
  t = times_0_0(t);
  p_16 = t;
  t = SSL_explode_term(p_16);
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_16;
  t = foldr_2_0(e_6, h_6, t);
  t_42 = t;
  t = SSL_TicksToSeconds(t_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  if(match_cons(t, sym__2))
    {
      f_43 = ATgetArgument(t, 0);
      g_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_43;
        if((f_43 != t))
          {
            _fail(t);
          }
        t = e_43;
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        t = (ATerm) ATmakeAppl(sym__2, f_43, g_43);
        {
          ATerm e_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_43, g_43);
              LocalPopChoice(f_18);
            }
          else
            {
              t = e_18;
              t = SSL_gtr(f_43, g_43);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_43, g_43);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm k_43 = NULL;
  k_43 = t;
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
        t = term_v_14;
        n_43 = t;
        t = term_n_16;
        o_43 = t;
        t = term_j_18;
        t = w_5(n_43, o_43, t);
        m_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_43, term_i_16);
        t = geq_0_0(t);
        t = k_43;
        t = s_107(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = k_43;
      }
  }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,t_43 = NULL,u_43 = NULL;
  t = run_time_0_0(t);
  q_43 = t;
  t = term_e_16;
  t = whoami_0_0(t);
  r_43 = t;
  t = term_f_16;
  t_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_18), q_43), term_k_18), r_43);
  u_43 = t;
  t = SSL_printnl(t_43, u_43);
  t = (ATerm) ATmakeAppl(sym__2, term_f_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_18), q_43), term_k_18), r_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_16;
  v_43 = t;
  t = SSL_exit(v_43);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL;
  g_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_44 = ATgetArgument(t, 0);
          {
            ATerm f_17 = NULL,r_10 = NULL;
            t = SSLgetAnnotations(g_44);
            f_17 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_44);
            r_10 = t;
            t = SSLsetAnnotations(r_10, f_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_110 (ATerm), ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_43 = NULL,z_43 = NULL;
      t = term_v_14;
      y_43 = t;
      t = term_q_18;
      z_43 = t;
      t = term_r_18;
      t = w_5(y_43, z_43, t);
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      t = fetch_1_0(k_6, t);
    }
  t = i_110(t);
  return(t);
}
static ATerm a_6 (ATerm s_56, ATerm t_56, ATerm u_56, ATerm t)
{
  ATerm i_44 = NULL;
  t = SSL_hashtable_put(u_56, s_56, t_56);
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_44);
  return(t);
}
ATerm lookup_table_0_1 (ATerm m_54, ATerm t)
{
  ATerm r_44 = NULL;
  t = table_hashtable_0_0(t);
  r_44 = t;
  {
    ATerm s_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_17 = NULL;
        t = r_44;
        if(match_cons(t, sym_Hashtable_1))
          {
            p_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_6(m_54, p_17, t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = s_18;
        {
          ATerm a_18 = NULL;
          t = m_54;
          t = table_create_0_0(t);
          t = r_44;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_6(m_54, a_18, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm a_57, ATerm b_57, ATerm t)
{
  ATerm u_44 = NULL;
  t = SSL_hashtable_create(a_57, b_57);
  u_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_44);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,z_44 = NULL,a_45 = NULL;
  v_44 = t;
  t = term_z_18;
  z_44 = t;
  t = term_a_19;
  a_45 = t;
  t = v_44;
  t = new_hashtable_0_2(z_44, a_45, t);
  w_44 = t;
  t = v_44;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(v_44, w_44, x_44, t);
  t = v_44;
  return(t);
}
static ATerm t_5 (ATerm x_56, ATerm y_56, ATerm t)
{
  ATerm b_45 = NULL;
  t = SSL_hashtable_remove(y_56, x_56);
  b_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_45);
  return(t);
}
static ATerm u_5 (ATerm c_57, ATerm t)
{
  ATerm c_45 = NULL;
  t = SSL_hashtable_destroy(c_57);
  c_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_45);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_45 = NULL;
  t = SSL_table_hashtable();
  d_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_45);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL;
  e_45 = t;
  t = table_hashtable_0_0(t);
  f_45 = t;
  t = lookup_table_0_1(e_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_5(h_45, t);
  t = f_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(e_45, g_45, t);
  t = e_45;
  return(t);
}
ATerm map_1_0 (ATerm c_92 (ATerm), ATerm t)
{
  static ATerm w_45 (ATerm t)
  {
    ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
    t_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_45;
      }
    else
      {
        ATerm p_18 = NULL,t_18 = NULL,u_18 = NULL,t_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_45 = ATgetFirst((ATermList) t);
            v_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_45);
        p_18 = t;
        t = u_45;
        t = c_92(t);
        t_18 = t;
        t = v_45;
        t = w_45(t);
        u_18 = t;
        t = (ATerm) ATinsert(CheckATermList(u_18), t_18);
        t_10 = t;
        t = SSLsetAnnotations(t_10, p_18);
      }
    return(t);
  }
  t = w_45(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_45 = ATgetFirst((ATermList) t);
      a_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_46 = NULL,f_46 = NULL;
        static ATerm l_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_46)), not_null(f_46));
          return(t);
        }
        t = a_46;
        t = i_0(t);
        if(((e_46 != NULL) && (e_46 != t)))
          _fail(t);
        else
          e_46 = t;
        t = z_45;
        t = g_0(t);
        if(((f_46 != NULL) && (f_46 != t)))
          _fail(t);
        else
          f_46 = t;
        t = a_46;
        t = reverse_acc_2_0(g_0, l_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_16;
      t = i_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,v_10 = NULL;
  n_46 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_46);
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_46);
  v_10 = t;
  t = SSLsetAnnotations(v_10, l_46);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm p_46 = NULL;
  p_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_46), term_c_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_46 = NULL,k_46 = NULL;
      t = term_v_14;
      j_46 = t;
      t = term_w_17;
      k_46 = t;
      t = term_x_17;
      t = w_5(j_46, k_46, t);
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      t = fetch_1_0(m_6, t);
    }
  t = term_f_19;
  t = echo_0_0(t);
  t = term_g_17;
  h_46 = t;
  t = term_h_17;
  i_46 = t;
  t = term_g_19;
  t = w_5(h_46, i_46, t);
  t = reverse_acc_2_0(_id, s_6, t);
  t = map_1_0(t_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm m_92 (ATerm), ATerm t)
{
  static ATerm m_47 (ATerm t)
  {
    ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
    j_47 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_47 = ATgetFirst((ATermList) t);
        l_47 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_19 = t;
      int i_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_19 = NULL,r_19 = NULL,x_10 = NULL;
          t = SSLgetAnnotations(j_47);
          j_19 = t;
          t = k_47;
          t = m_92(t);
          r_19 = t;
          t = (ATerm) ATinsert(CheckATermList(l_47), r_19);
          x_10 = t;
          t = SSLsetAnnotations(x_10, j_19);
          LocalPopChoice(i_19);
        }
      else
        {
          t = h_19;
          {
            ATerm g_20 = NULL,m_20 = NULL,y_10 = NULL;
            t = SSLgetAnnotations(j_47);
            g_20 = t;
            t = l_47;
            t = m_47(t);
            m_20 = t;
            t = (ATerm) ATinsert(CheckATermList(m_20), k_47);
            y_10 = t;
            t = SSLsetAnnotations(y_10, g_20);
          }
        }
    }
    return(t);
  }
  t = m_47(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
  q_47 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_47;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_19 = ATgetFirst((ATermList) t);
                ATerm n_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_47;
          }
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = (ATerm) ATinsert(ATempty, q_47);
      }
  }
  r_47 = t;
  t = term_y_14;
  s_47 = t;
  t = SSL_printnl(s_47, r_47);
  t = q_47;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL;
  t = term_v_14;
  w_47 = t;
  t = term_w_17;
  x_47 = t;
  t = term_x_17;
  t = w_5(w_47, x_47, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm v_56, ATerm w_56, ATerm t)
{
  t = SSL_hashtable_get(w_56, v_56);
  return(t);
}
static ATerm w_5 (ATerm t_54, ATerm u_54, ATerm t)
{
  ATerm y_47 = NULL;
  t = lookup_table_0_1(t_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(u_54, y_47, t);
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
  ATerm a_48 = NULL,b_48 = NULL;
  t = term_p_19;
  a_48 = t;
  t = term_e_16;
  b_48 = t;
  t = term_q_19;
  t = z_5(a_48, b_48, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_s_19;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,h_48 = NULL;
  t = term_p_19;
  e_48 = t;
  t = term_e_16;
  h_48 = t;
  t = term_q_19;
  t = z_5(e_48, h_48, t);
  t = term_t_19;
  c_48 = t;
  t = term_e_16;
  d_48 = t;
  t = term_u_19;
  t = z_5(c_48, d_48, t);
  t = term_v_19;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_6, v_6, w_6, t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = x_19;
      t = Option_3_0(x_6, y_6, z_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,c_11 = NULL;
  n_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_48 = ATgetFirst((ATermList) t);
      k_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_48);
  i_48 = t;
  t = j_48;
  t = n_71(t);
  l_48 = t;
  t = k_48;
  t = o_71(t);
  m_48 = t;
  t = (ATerm) ATinsert(CheckATermList(m_48), l_48);
  c_11 = t;
  t = SSLsetAnnotations(c_11, i_48);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_112 (ATerm), ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,x_48 = NULL,y_48 = NULL,i_11 = NULL;
  s_48 = t;
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_20;
        t = l_112(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
      }
  }
  t = s_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_48 = ATgetFirst((ATermList) t);
      v_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_48);
  t_48 = t;
  t = term_w_17;
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_17, u_48);
  t = z_5(y_48, u_48, t);
  t = v_48;
  {
    static ATerm i_49 (ATerm t)
    {
      ATerm h_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_20 = t;
          int l_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_49 = NULL;
              b_49 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_49;
              LocalPopChoice(l_20);
            }
          else
            {
              t = k_20;
              t = l_112(t);
              t = Cons_2_0(_id, i_49, t);
            }
          LocalPopChoice(j_20);
        }
      else
        {
          t = h_20;
          {
            ATerm e_49 = NULL,f_49 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_49 = ATgetFirst((ATermList) t);
                f_49 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_49), (ATerm) ATmakeAppl(sym_Undefined_1, e_49));
          }
        }
      return(t);
    }
    t = i_49(t);
  }
  x_48 = t;
  t = (ATerm) ATinsert(CheckATermList(x_48), (ATerm) ATmakeAppl(sym_Program_1, u_48));
  i_11 = t;
  t = SSLsetAnnotations(i_11, t_48);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm v_49 = NULL;
  v_49 = t;
  if(match_string(t, "--help"))
    {
      t = v_49;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_49;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_49;
        }
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  t = term_q_18;
  w_49 = t;
  t = term_e_16;
  x_49 = t;
  t = term_n_20;
  t = z_5(w_49, x_49, t);
  t = term_o_20;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_p_20;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  p_49 = t;
  t = term_g_17;
  q_49 = t;
  t = term_q_20;
  t = lookup_table_0_1(q_49, t);
  u_49 = t;
  t = term_h_17;
  r_49 = t;
  t = (ATerm) ATempty;
  s_49 = t;
  t = u_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(r_49, s_49, t_49, t);
  t = p_49;
  {
    static ATerm b_7 (ATerm t)
    {
      ATerm r_20 = t;
      int s_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_112(t);
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
                t = Option_3_0(d_7, e_7, f_7, t);
                LocalPopChoice(u_20);
              }
            else
              {
                t = t_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_7, t);
  }
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_50 = NULL;
        i_50 = t;
        {
          ATerm b_21 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_20 = NULL;
              t = i_50;
              {
                ATerm d_21 = t;
                int h_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_20 = NULL,a_21 = NULL;
                    t = term_v_14;
                    z_20 = t;
                    t = term_q_18;
                    a_21 = t;
                    t = term_r_18;
                    t = w_5(z_20, a_21, t);
                    LocalPopChoice(h_21);
                  }
                else
                  {
                    t = d_21;
                    t = fetch_1_0(g_7, t);
                  }
              }
              t = i_50;
              t = default_system_usage_0_0(t);
              t = term_q_16;
              y_20 = t;
              t = SSL_exit(y_20);
              LocalPopChoice(c_21);
            }
          else
            {
              t = b_21;
              {
                ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
                t = term_v_14;
                f_21 = t;
                t = term_p_19;
                g_21 = t;
                t = term_i_21;
                t = w_5(f_21, g_21, t);
                t = i_50;
                t = default_system_about_0_0(t);
                t = term_q_16;
                e_21 = t;
                t = SSL_exit(e_21);
              }
            }
        }
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        {
          ATerm j_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
              static ATerm h_7 (ATerm t)
              {
                ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,k_11 = NULL;
                o_50 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_50 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_50);
                m_50 = t;
                t = n_50;
                if(((n_49 != NULL) && (n_49 != t)))
                  _fail(t);
                else
                  n_49 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_50);
                k_11 = t;
                t = SSLsetAnnotations(k_11, m_50);
                return(t);
              }
              t = fetch_1_0(h_7, t);
              t = term_f_16;
              k_50 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_49)), term_l_21);
              l_50 = t;
              t = SSL_printnl(k_50, l_50);
              t = (ATerm) ATmakeAppl(sym__2, term_f_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_49)), term_l_21));
              t = default_system_usage_0_0(t);
              t = term_i_16;
              j_50 = t;
              t = SSL_exit(j_50);
              LocalPopChoice(k_21);
            }
          else
            {
              t = j_21;
            }
        }
      }
  }
  o_49 = t;
  t = term_g_17;
  t = table_destroy_0_0(t);
  t = o_49;
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
  t = parse_options_1_0(k_110, t);
  t_50 = t;
  t = term_m_21;
  t = table_create_0_0(t);
  t = term_m_21;
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_21, term_n_21, t_50);
  t = lookup_table_0_1(u_50, t);
  x_50 = t;
  t = term_n_21;
  v_50 = t;
  t = x_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(v_50, t_50, w_50, t);
  t = t_50;
  t = m_110(t);
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_110, t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_110(t);
              t = report_success_0_0(t);
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            {
              ATerm w_21 = t;
              int x_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(m_7, n_7, o_7, t);
                  LocalPopChoice(x_21);
                }
              else
                {
                  t = w_21;
                  {
                    ATerm y_21 = t;
                    int z_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(z_21);
                      }
                    else
                      {
                        t = y_21;
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
  t = input_1_0(p_7, t);
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
  ATerm z_50 = NULL,a_51 = NULL;
  t = term_b_15;
  z_50 = t;
  t = term_e_16;
  a_51 = t;
  t = term_a_22;
  t = z_5(z_50, a_51, t);
  t = term_b_22;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_c_22;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_7, default_usage_0_0, _id, l_7, t);
  return(t);
}
