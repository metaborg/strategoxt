#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Scope_2;
Symbol sym_Rec_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Undefined_0;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
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
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_g_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_o_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_a_21;
ATerm term_p_20;
ATerm term_k_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_i_17;
ATerm term_c_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_y_17);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_n_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_y_19, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_q_19);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_n_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_y_19);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_l_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_e_21);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_z_22, term_q_19);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_d_23, term_q_19);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_q_19);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_z_22);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_q_19);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm spaste_1_0 (ATerm m_80 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_4 (ATerm d_21, ATerm c_21, ATerm t);
ATerm SVar_1_0 (ATerm d_64 (ATerm), ATerm t);
static ATerm g_5 (ATerm g_101 (ATerm), ATerm h_101 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_46, ATerm j_46, ATerm i_46, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm k_5 (ATerm a_101 (ATerm), ATerm b_101 (ATerm (ATerm), ATerm), ATerm c_46, ATerm f_46, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm o_101 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm v_100 (ATerm (ATerm), ATerm), ATerm w_100 (ATerm), ATerm x_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_100 (ATerm (ATerm), ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm tpaste_1_0 (ATerm i_80 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm a_5 (ATerm k_96 (ATerm), ATerm d_43, ATerm c_43, ATerm t);
ATerm foldr_3_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t);
static ATerm b_5 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm h_43, ATerm g_43, ATerm t);
static ATerm c_5 (ATerm f_96 (ATerm), ATerm b_43, ATerm a_43, ATerm t);
ATerm at_end_1_0 (ATerm h_94 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_43 (ATerm q_42, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm e_5 (ATerm w_581, ATerm b_582, ATerm k_56, ATerm t);
ATerm while_not_2_0 (ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm t);
ATerm for_3_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm o_47 (ATerm p_45, ATerm u_45, ATerm v_45, ATerm t);
static ATerm s_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm free_vars_3_0 (ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm s_60 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm p_5 (ATerm w_28, ATerm x_28, ATerm t);
static ATerm q_5 (ATerm o_27, ATerm p_27, ATerm t);
static ATerm s_5 (ATerm s_88 (ATerm), ATerm u_190, ATerm u_27, ATerm t);
static ATerm r_5 (ATerm k_27, ATerm l_27, ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm output_1_0 (ATerm y_105 (ATerm), ATerm t);
static ATerm y_56 (ATerm l_56, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_5 (ATerm q_27, ATerm t);
static ATerm u_5 (ATerm g_52, ATerm h_52, ATerm t);
static ATerm v_5 (ATerm y_28, ATerm z_28, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_59 (ATerm s_57, ATerm t);
static ATerm c_59 (ATerm y_57, ATerm c_58, ATerm g_58, ATerm t);
static ATerm d_59 (ATerm o_58, ATerm p_58, ATerm q_58, ATerm t);
static ATerm w_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm z_105 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_6 (ATerm r_32, ATerm s_32, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_6 (ATerm b_38, ATerm c_38, ATerm a_38, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_5 (ATerm j_35, ATerm k_35, ATerm t);
ATerm foldr_2_0 (ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_90 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm need_help_1_0 (ATerm p_105 (ATerm), ATerm t);
ATerm map_1_0 (ATerm q_93 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_94 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_6 (ATerm s_39, ATerm t_39, ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_107 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm parse_options_1_0 (ATerm m_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_8 = ATgetArgument(t, 0);
      if(((ATgetType(w_8) != AT_LIST) || !(ATisEmpty(w_8))))
        _fail(t);
      {
        ATerm x_8 = ATgetArgument(t, 1);
        if(((ATgetType(x_8) != AT_LIST) || !(ATisEmpty(x_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_8 = ATgetArgument(t, 0);
      if(((ATgetType(z_8) == AT_LIST) && !(ATisEmpty(z_8))))
        {
          r_0 = ATgetFirst((ATermList) z_8);
          s_0 = (ATerm) ATgetNext((ATermList) z_8);
        }
      else
        _fail(t);
      {
        ATerm b_9 = ATgetArgument(t, 1);
        if(((ATgetType(b_9) == AT_LIST) && !(ATisEmpty(b_9))))
          {
            t_0 = ATgetFirst((ATermList) b_9);
            u_0 = (ATerm) ATgetNext((ATermList) b_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_0, t_0), (ATerm) ATmakeAppl(sym__2, s_0, u_0));
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL;
  if(match_cons(t, sym__2))
    {
      v_0 = ATgetArgument(t, 0);
      w_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_0), v_0);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm y_0 = NULL,a_1 = NULL,b_1 = NULL,f_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      y_0 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_0;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm i_9 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(g_9);
        t = (ATerm) ATmakeAppl(sym_SDef_3, p_1, a_1, b_1);
      }
    else
      {
        t = f_9;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm j_9 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
            f_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, p_1, a_1, b_1, f_1);
      }
  }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_9 = ATgetArgument(t, 0);
      if(((ATgetType(m_9) != AT_LIST) || !(ATisEmpty(m_9))))
        _fail(t);
      {
        ATerm o_9 = ATgetArgument(t, 1);
        if(((ATgetType(o_9) != AT_LIST) || !(ATisEmpty(o_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm b_3 = NULL,e_3 = NULL,l_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
        {
          b_3 = ATgetFirst((ATermList) r_9);
          e_3 = (ATerm) ATgetNext((ATermList) r_9);
        }
      else
        _fail(t);
      {
        ATerm s_9 = ATgetArgument(t, 1);
        if(((ATgetType(s_9) == AT_LIST) && !(ATisEmpty(s_9))))
          {
            l_3 = ATgetFirst((ATermList) s_9);
            n_3 = (ATerm) ATgetNext((ATermList) s_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_3, l_3), (ATerm) ATmakeAppl(sym__2, e_3, n_3));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm p_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      p_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_3), p_3);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm x_3 = NULL,b_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_9);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_4);
      }
    else
      {
        t = t_9;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_9 = ATgetArgument(t, 0);
            b_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_4, b_4);
      }
  }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(((ATgetType(x_9) != AT_LIST) || !(ATisEmpty(x_9))))
        _fail(t);
      {
        ATerm y_9 = ATgetArgument(t, 1);
        if(((ATgetType(y_9) != AT_LIST) || !(ATisEmpty(y_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm q_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
        {
          q_6 = ATgetFirst((ATermList) z_9);
          t_6 = (ATerm) ATgetNext((ATermList) z_9);
        }
      else
        _fail(t);
      {
        ATerm a_10 = ATgetArgument(t, 1);
        if(((ATgetType(a_10) == AT_LIST) && !(ATisEmpty(a_10))))
          {
            u_6 = ATgetFirst((ATermList) a_10);
            v_6 = (ATerm) ATgetNext((ATermList) a_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_6, u_6), (ATerm) ATmakeAppl(sym__2, t_6, v_6));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  if(match_cons(t, sym__2))
    {
      w_6 = ATgetArgument(t, 0);
      x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_6), w_6);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm z_6 = NULL,b_7 = NULL,c_7 = NULL;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6;
  {
    ATerm b_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_7);
      }
    else
      {
        t = b_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_10 = ATgetArgument(t, 0);
            b_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_7, b_7);
      }
  }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if(((ATgetType(k_10) != AT_LIST) || !(ATisEmpty(k_10))))
        _fail(t);
      {
        ATerm l_10 = ATgetArgument(t, 1);
        if(((ATgetType(l_10) != AT_LIST) || !(ATisEmpty(l_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if(((ATgetType(m_10) == AT_LIST) && !(ATisEmpty(m_10))))
        {
          c_9 = ATgetFirst((ATermList) m_10);
          d_9 = (ATerm) ATgetNext((ATermList) m_10);
        }
      else
        _fail(t);
      {
        ATerm n_10 = ATgetArgument(t, 1);
        if(((ATgetType(n_10) == AT_LIST) && !(ATisEmpty(n_10))))
          {
            e_9 = ATgetFirst((ATermList) n_10);
            h_9 = (ATerm) ATgetNext((ATermList) n_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_9, e_9), (ATerm) ATmakeAppl(sym__2, d_9, h_9));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      l_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_9), k_9);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm n_9 = NULL,p_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__2))
    {
      n_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9;
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_9);
      }
    else
      {
        t = o_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_10 = ATgetArgument(t, 0);
            p_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_9, p_9);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,h_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      {
        ATerm h_0 = NULL,o_0 = NULL,p_0 = NULL,c_1 = NULL;
        t = SSLgetAnnotations(e_10);
        h_0 = t;
        t = f_10;
        t = m_80(t);
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_10, p_0);
        t = genzip_4_0(a_0, b_0, f_0, j_0, t);
        o_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, o_0, h_10);
        c_1 = t;
        t = SSLsetAnnotations(c_1, h_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_10 = ATgetArgument(t, 0);
          h_10 = ATgetArgument(t, 1);
          c_10 = ATgetArgument(t, 2);
          {
            ATerm k_2 = NULL,r_2 = NULL,v_2 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(e_10);
            k_2 = t;
            t = h_10;
            t = m_80(t);
            v_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_10, v_2);
            t = genzip_4_0(m_0, q_0, x_0, z_0, t);
            r_2 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, f_10, r_2, c_10);
            d_1 = t;
            t = SSLsetAnnotations(d_1, k_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_10 = ATgetArgument(t, 0);
              h_10 = ATgetArgument(t, 1);
              c_10 = ATgetArgument(t, 2);
              d_10 = ATgetArgument(t, 3);
              {
                ATerm f_5 = NULL,m_6 = NULL,n_6 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(e_10);
                f_5 = t;
                t = h_10;
                t = m_80(t);
                n_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_10, n_6);
                t = genzip_4_0(i_1, j_1, k_1, l_1, t);
                m_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_10, m_6, c_10, d_10);
                e_1 = t;
                t = SSLsetAnnotations(e_1, f_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  f_10 = ATgetArgument(t, 0);
                  h_10 = ATgetArgument(t, 1);
                  c_10 = ATgetArgument(t, 2);
                  d_10 = ATgetArgument(t, 3);
                  {
                    ATerm g_8 = NULL,y_8 = NULL,a_9 = NULL,g_1 = NULL;
                    t = SSLgetAnnotations(e_10);
                    g_8 = t;
                    t = h_10;
                    t = m_80(t);
                    a_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_10, a_9);
                    t = genzip_4_0(m_1, r_1, t_1, u_1, t);
                    y_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, f_10, y_8, c_10, d_10);
                    g_1 = t;
                    t = SSLsetAnnotations(g_1, g_8);
                  }
                }
              else
                {
                  ATerm t_10 = NULL,w_10 = NULL,h_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      f_10 = ATgetArgument(t, 0);
                      h_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_10);
                  t_10 = t;
                  t = f_10;
                  t = m_80(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_10 = ATgetFirst((ATermList) t);
                      {
                        ATerm s_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, w_10, h_10);
                  h_1 = t;
                  t = SSLsetAnnotations(h_1, t_10);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  a_16 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
      {
        ATerm h_11 = NULL,q_11 = NULL,r_11 = NULL,n_1 = NULL;
        t = SSLgetAnnotations(a_16);
        h_11 = t;
        t = b_16;
        t = n_80(t);
        q_11 = t;
        t = c_16;
        t = n_80(t);
        r_11 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, q_11, r_11);
        n_1 = t;
        t = SSLsetAnnotations(n_1, h_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_16 = ATgetArgument(t, 0);
          c_16 = ATgetArgument(t, 1);
          y_15 = ATgetArgument(t, 2);
          {
            ATerm m_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(a_16);
            m_12 = t;
            t = b_16;
            t = p_80(t);
            t_12 = t;
            t = c_16;
            t = p_80(t);
            u_12 = t;
            t = y_15;
            t = n_80(t);
            v_12 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, t_12, u_12, v_12);
            o_1 = t;
            t = SSLsetAnnotations(o_1, m_12);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              b_16 = ATgetArgument(t, 0);
              c_16 = ATgetArgument(t, 1);
              y_15 = ATgetArgument(t, 2);
              z_15 = ATgetArgument(t, 3);
              {
                ATerm m_13 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,q_1 = NULL;
                t = SSLgetAnnotations(a_16);
                m_13 = t;
                t = b_16;
                t = p_80(t);
                b_14 = t;
                t = c_16;
                t = p_80(t);
                c_14 = t;
                t = y_15;
                t = p_80(t);
                d_14 = t;
                t = z_15;
                t = n_80(t);
                e_14 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, b_14, c_14, d_14, e_14);
                q_1 = t;
                t = SSLsetAnnotations(q_1, m_13);
              }
            }
          else
            {
              ATerm p_14 = NULL,t_14 = NULL,u_14 = NULL,s_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  b_16 = ATgetArgument(t, 0);
                  c_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_16);
              p_14 = t;
              t = b_16;
              t = p_80(t);
              t_14 = t;
              t = c_16;
              t = n_80(t);
              u_14 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, t_14, u_14);
              s_1 = t;
              t = SSLsetAnnotations(s_1, p_14);
            }
        }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm k_16 = NULL;
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_16 = ATgetArgument(t, 0);
          {
            ATerm x_10 = ATgetArgument(t, 1);
          }
          {
            ATerm y_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_10);
      t = k_16;
    }
  else
    {
      t = u_10;
      if(match_cons(t, sym_SDefT_4))
        {
          k_16 = ATgetArgument(t, 0);
          {
            ATerm z_10 = ATgetArgument(t, 1);
          }
          {
            ATerm a_11 = ATgetArgument(t, 2);
          }
          {
            ATerm b_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_16;
    }
  return(t);
}
static ATerm w_4 (ATerm d_21, ATerm c_21, ATerm t)
{
  t = d_21;
  t = map_1_0(v_1, t);
  return(t);
}
ATerm SVar_1_0 (ATerm d_64 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,n_2 = NULL;
  x_16 = t;
  if(match_cons(t, sym_SVar_1))
    {
      v_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_16);
  u_16 = t;
  t = v_16;
  t = d_64(t);
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, w_16);
  n_2 = t;
  t = SSLsetAnnotations(n_2, u_16);
  return(t);
}
static ATerm g_5 (ATerm g_101 (ATerm), ATerm h_101 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_46, ATerm j_46, ATerm i_46, ATerm t)
{
  static ATerm w_1 (ATerm t)
  {
    ATerm z_16 = NULL;
    z_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_16, i_46);
    t = g_101(t);
    return(t);
  }
  static ATerm x_1 (ATerm t)
  {
    ATerm a_17 = NULL;
    a_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_17, j_46);
    t = g_101(t);
    return(t);
  }
  t = k_46;
  t = h_101(w_1, x_1, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm y_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      if(((ATgetType(c_11) != AT_LIST) || !(ATisEmpty(c_11))))
        _fail(t);
      {
        ATerm d_11 = ATgetArgument(t, 1);
        if(((ATgetType(d_11) != AT_LIST) || !(ATisEmpty(d_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,x_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_11 = ATgetArgument(t, 0);
      if(((ATgetType(e_11) == AT_LIST) && !(ATisEmpty(e_11))))
        {
          s_17 = ATgetFirst((ATermList) e_11);
          t_17 = (ATerm) ATgetNext((ATermList) e_11);
        }
      else
        _fail(t);
      {
        ATerm f_11 = ATgetArgument(t, 1);
        if(((ATgetType(f_11) == AT_LIST) && !(ATisEmpty(f_11))))
          {
            u_17 = ATgetFirst((ATermList) f_11);
            x_17 = (ATerm) ATgetNext((ATermList) f_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_17, u_17), (ATerm) ATmakeAppl(sym__2, t_17, x_17));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  if(match_cons(t, sym__2))
    {
      c_18 = ATgetArgument(t, 0);
      d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_18), c_18);
  return(t);
}
static ATerm k_5 (ATerm a_101 (ATerm), ATerm b_101 (ATerm (ATerm), ATerm), ATerm c_46, ATerm f_46, ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,j_17 = NULL,q_17 = NULL;
  t = c_46;
  t = a_101(t);
  f_17 = t;
  t = map_1_0(new_0_0, t);
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_17, g_17);
  t = genzip_4_0(y_1, z_1, a_2, _id, t);
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_17, f_46);
  t = conc_0_0(t);
  h_17 = t;
  t = c_46;
  {
    static ATerm b_2 (ATerm t)
    {
      t = g_17;
      return(t);
    }
    t = b_101(b_2, t);
  }
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_17, f_46, h_17);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  k_18 = t;
  if(match_cons(t, sym__2))
    {
      n_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_18 = ATgetFirst((ATermList) t);
      q_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_18;
  if(match_cons(t, sym__2))
    {
      i_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
      {
        ATerm g_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_18;
            if((n_18 != t))
              {
                _fail(t);
              }
            t = j_18;
            LocalPopChoice(i_11);
          }
        else
          {
            t = g_11;
            t = (ATerm) ATmakeAppl(sym__2, n_18, q_18);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, n_18, q_18);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  static ATerm o_20 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_101(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          ATerm f_20 = NULL,h_20 = NULL,l_20 = NULL;
          static ATerm c_2 (ATerm t)
          {
            ATerm f_15 = NULL;
            f_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_15, not_null(l_20));
            t = o_20(t);
            return(t);
          }
          f_20 = t;
          if(match_cons(t, sym__2))
            {
              h_20 = ATgetArgument(t, 0);
              if(((l_20 != NULL) && (l_20 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                l_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_20;
          t = SRTS_all(c_2, t);
        }
      }
    return(t);
  }
  t = o_20(t);
  return(t);
}
ATerm rename_4_0 (ATerm v_100 (ATerm (ATerm), ATerm), ATerm w_100 (ATerm), ATerm x_100 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_100 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_20 = NULL;
  static ATerm c_22 (ATerm t)
  {
    static ATerm d_2 (ATerm t)
    {
      ATerm r_21 = NULL,w_21 = NULL,y_21 = NULL;
      r_21 = t;
      if(match_cons(t, sym__2))
        {
          w_21 = ATgetArgument(t, 0);
          y_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_2 (ATerm t)
            {
              ATerm b_22 = NULL;
              b_22 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_22, y_21);
              t = lookup_0_0(t);
              return(t);
            }
            t = w_21;
            t = v_100(e_2, t);
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            {
              ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
              t = r_21;
              t = k_5(w_100, y_100, w_21, y_21, t);
              if(match_cons(t, sym__3))
                {
                  o_15 = ATgetArgument(t, 0);
                  p_15 = ATgetArgument(t, 1);
                  q_15 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = g_5(c_22, x_100, o_15, p_15, q_15, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(d_2, t);
    return(t);
  }
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_20, (ATerm) ATempty);
  t = c_22(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(((ATgetType(n_11) != AT_LIST) || !(ATisEmpty(n_11))))
        _fail(t);
      {
        ATerm o_11 = ATgetArgument(t, 1);
        if(((ATgetType(o_11) != AT_LIST) || !(ATisEmpty(o_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,l_18 = NULL,m_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_11 = ATgetArgument(t, 0);
      if(((ATgetType(p_11) == AT_LIST) && !(ATisEmpty(p_11))))
        {
          g_18 = ATgetFirst((ATermList) p_11);
          h_18 = (ATerm) ATgetNext((ATermList) p_11);
        }
      else
        _fail(t);
      {
        ATerm s_11 = ATgetArgument(t, 1);
        if(((ATgetType(s_11) == AT_LIST) && !(ATisEmpty(s_11))))
          {
            l_18 = ATgetFirst((ATermList) s_11);
            m_18 = (ATerm) ATgetNext((ATermList) s_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_18, l_18), (ATerm) ATmakeAppl(sym__2, h_18, m_18));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm s_18 = NULL,u_18 = NULL;
  if(match_cons(t, sym__2))
    {
      s_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_18), s_18);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm x_18 = NULL,z_18 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_18;
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_19);
      }
    else
      {
        t = t_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_11 = ATgetArgument(t, 0);
            z_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_19, z_18);
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_11 = ATgetArgument(t, 0);
      if(((ATgetType(x_11) != AT_LIST) || !(ATisEmpty(x_11))))
        _fail(t);
      {
        ATerm y_11 = ATgetArgument(t, 1);
        if(((ATgetType(y_11) != AT_LIST) || !(ATisEmpty(y_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,q_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_11 = ATgetArgument(t, 0);
      if(((ATgetType(z_11) == AT_LIST) && !(ATisEmpty(z_11))))
        {
          m_20 = ATgetFirst((ATermList) z_11);
          n_20 = (ATerm) ATgetNext((ATermList) z_11);
        }
      else
        _fail(t);
      {
        ATerm a_12 = ATgetArgument(t, 1);
        if(((ATgetType(a_12) == AT_LIST) && !(ATisEmpty(a_12))))
          {
            q_20 = ATgetFirst((ATermList) a_12);
            r_20 = (ATerm) ATgetNext((ATermList) a_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_20, q_20), (ATerm) ATmakeAppl(sym__2, n_20, r_20));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      t_20 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_20), t_20);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm w_20 = NULL,b_21 = NULL,h_21 = NULL;
  if(match_cons(t, sym__2))
    {
      w_20 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_20;
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_12);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_21);
      }
    else
      {
        t = b_12;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_12 = ATgetArgument(t, 0);
            b_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_21, b_21);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,q_26 = NULL,r_26 = NULL,w_26 = NULL;
  n_26 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
      {
        ATerm q_16 = NULL,y_16 = NULL,q_2 = NULL;
        t = SSLgetAnnotations(n_26);
        q_16 = t;
        t = o_26;
        t = i_80(t);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, y_16, q_26);
        q_2 = t;
        t = SSLsetAnnotations(q_2, q_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          o_26 = ATgetArgument(t, 0);
          q_26 = ATgetArgument(t, 1);
          r_26 = ATgetArgument(t, 2);
          w_26 = ATgetArgument(t, 3);
          {
            ATerm r_17 = NULL,a_18 = NULL,b_18 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(n_26);
            r_17 = t;
            t = r_26;
            t = i_80(t);
            b_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_26, b_18);
            t = genzip_4_0(f_2, g_2, h_2, i_2, t);
            a_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, o_26, q_26, a_18, w_26);
            s_2 = t;
            t = SSLsetAnnotations(s_2, r_17);
          }
        }
      else
        {
          ATerm v_19 = NULL,i_20 = NULL,j_20 = NULL,t_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              o_26 = ATgetArgument(t, 0);
              q_26 = ATgetArgument(t, 1);
              r_26 = ATgetArgument(t, 2);
              w_26 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_26);
          v_19 = t;
          t = r_26;
          t = i_80(t);
          j_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_26, j_20);
          t = genzip_4_0(j_2, l_2, m_2, o_2, t);
          i_20 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, o_26, q_26, i_20, w_26);
          t_2 = t;
          t = SSLsetAnnotations(t_2, v_19);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  c_33 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_33 = ATgetArgument(t, 0);
      z_32 = ATgetArgument(t, 1);
      {
        ATerm x_21 = NULL,g_22 = NULL,h_22 = NULL,z_2 = NULL;
        t = SSLgetAnnotations(c_33);
        x_21 = t;
        t = d_33;
        t = l_80(t);
        g_22 = t;
        t = z_32;
        t = j_80(t);
        h_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_22, h_22);
        z_2 = t;
        t = SSLsetAnnotations(z_2, x_21);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          d_33 = ATgetArgument(t, 0);
          z_32 = ATgetArgument(t, 1);
          a_33 = ATgetArgument(t, 2);
          b_33 = ATgetArgument(t, 3);
          {
            ATerm s_22 = NULL,c_23 = NULL,j_23 = NULL,k_23 = NULL,n_23 = NULL,a_3 = NULL;
            t = SSLgetAnnotations(c_33);
            s_22 = t;
            t = d_33;
            t = l_80(t);
            c_23 = t;
            t = z_32;
            t = l_80(t);
            j_23 = t;
            t = a_33;
            t = l_80(t);
            k_23 = t;
            t = b_33;
            t = j_80(t);
            n_23 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, c_23, j_23, k_23, n_23);
            a_3 = t;
            t = SSLsetAnnotations(a_3, s_22);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              d_33 = ATgetArgument(t, 0);
              z_32 = ATgetArgument(t, 1);
              a_33 = ATgetArgument(t, 2);
              b_33 = ATgetArgument(t, 3);
              {
                ATerm n_24 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,n_25 = NULL,c_3 = NULL;
                t = SSLgetAnnotations(c_33);
                n_24 = t;
                t = d_33;
                t = l_80(t);
                e_25 = t;
                t = z_32;
                t = l_80(t);
                f_25 = t;
                t = a_33;
                t = l_80(t);
                g_25 = t;
                t = b_33;
                t = j_80(t);
                n_25 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, e_25, f_25, g_25, n_25);
                c_3 = t;
                t = SSLsetAnnotations(c_3, n_24);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  d_33 = ATgetArgument(t, 0);
                  {
                    ATerm k_26 = NULL,s_26 = NULL,d_3 = NULL;
                    t = SSLgetAnnotations(c_33);
                    k_26 = t;
                    t = d_33;
                    t = j_80(t);
                    s_26 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_26);
                    d_3 = t;
                    t = SSLsetAnnotations(d_3, k_26);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      d_33 = ATgetArgument(t, 0);
                      {
                        ATerm c_27 = NULL,e_27 = NULL,f_3 = NULL;
                        t = SSLgetAnnotations(c_33);
                        c_27 = t;
                        t = d_33;
                        t = j_80(t);
                        e_27 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, e_27);
                        f_3 = t;
                        t = SSLsetAnnotations(f_3, c_27);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          d_33 = ATgetArgument(t, 0);
                          {
                            ATerm m_27 = NULL,r_27 = NULL,g_3 = NULL;
                            t = SSLgetAnnotations(c_33);
                            m_27 = t;
                            t = d_33;
                            t = j_80(t);
                            r_27 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, r_27);
                            g_3 = t;
                            t = SSLsetAnnotations(g_3, m_27);
                          }
                        }
                      else
                        {
                          ATerm c_28 = NULL,i_28 = NULL,h_3 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              d_33 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(c_33);
                          c_28 = t;
                          t = d_33;
                          t = j_80(t);
                          i_28 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, i_28);
                          h_3 = t;
                          t = SSLsetAnnotations(h_3, c_28);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm o_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_34);
  return(t);
}
static ATerm u_2 (ATerm t)
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
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            {
              ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_34 = ATgetArgument(t, 0);
                  r_34 = ATgetArgument(t, 1);
                  s_34 = ATgetArgument(t, 2);
                  t_34 = ATgetArgument(t, 3);
                  t = s_34;
                  t = map_1_0(w_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_34 = ATgetArgument(t, 0);
                      r_34 = ATgetArgument(t, 1);
                      s_34 = ATgetArgument(t, 2);
                      t_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_34;
                  t = map_1_0(x_2, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm a_35 = NULL;
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_35 = ATgetArgument(t, 0);
          {
            ATerm l_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_12);
      t = a_35;
    }
  else
    {
      t = j_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_35;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm l_35 = NULL;
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_35 = ATgetArgument(t, 0);
          {
            ATerm p_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_12);
      t = l_35;
    }
  else
    {
      t = n_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_35;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm p_35 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_35);
  return(t);
}
static ATerm i_3 (ATerm t)
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
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_12);
          }
        else
          {
            t = s_12;
            {
              ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_35 = ATgetArgument(t, 0);
                  s_35 = ATgetArgument(t, 1);
                  t_35 = ATgetArgument(t, 2);
                  u_35 = ATgetArgument(t, 3);
                  t = t_35;
                  t = map_1_0(j_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_35 = ATgetArgument(t, 0);
                      s_35 = ATgetArgument(t, 1);
                      t_35 = ATgetArgument(t, 2);
                      u_35 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_35;
                  t = map_1_0(k_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm b_36 = NULL;
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_36 = ATgetArgument(t, 0);
          {
            ATerm z_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_12);
      t = b_36;
    }
  else
    {
      t = x_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_36;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm o_36 = NULL;
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_36 = ATgetArgument(t, 0);
          {
            ATerm c_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_13);
      t = o_36;
    }
  else
    {
      t = a_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_36;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm v_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_36);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
        ATerm f_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_13);
          }
        else
          {
            t = f_13;
            {
              ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_36 = ATgetArgument(t, 0);
                  y_36 = ATgetArgument(t, 1);
                  z_36 = ATgetArgument(t, 2);
                  a_37 = ATgetArgument(t, 3);
                  t = z_36;
                  t = map_1_0(q_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_36 = ATgetArgument(t, 0);
                      y_36 = ATgetArgument(t, 1);
                      z_36 = ATgetArgument(t, 2);
                      a_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_36;
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
  ATerm k_37 = NULL;
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_37 = ATgetArgument(t, 0);
          {
            ATerm j_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_13);
      t = k_37;
    }
  else
    {
      t = h_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_37;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm w_37 = NULL;
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_37 = ATgetArgument(t, 0);
          {
            ATerm n_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_13);
      t = w_37;
    }
  else
    {
      t = k_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_37;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm d_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_38);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm q_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_13);
          }
        else
          {
            t = q_13;
            {
              ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_38 = ATgetArgument(t, 0);
                  g_38 = ATgetArgument(t, 1);
                  h_38 = ATgetArgument(t, 2);
                  i_38 = ATgetArgument(t, 3);
                  t = h_38;
                  t = map_1_0(y_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_38 = ATgetArgument(t, 0);
                      g_38 = ATgetArgument(t, 1);
                      h_38 = ATgetArgument(t, 2);
                      i_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_38;
                  t = map_1_0(a_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm p_38 = NULL;
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_38 = ATgetArgument(t, 0);
          {
            ATerm u_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_13);
      t = p_38;
    }
  else
    {
      t = s_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_38;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm a_39 = NULL;
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_39 = ATgetArgument(t, 0);
          {
            ATerm x_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_13);
      t = a_39;
    }
  else
    {
      t = v_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_39;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm m_34 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      m_34 = ATgetArgument(t, 0);
      t = m_34;
      t = free_vars_3_0(p_2, u_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          m_34 = ATgetArgument(t, 0);
          t = m_34;
          t = free_vars_3_0(y_2, i_3, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              m_34 = ATgetArgument(t, 0);
              t = m_34;
              t = free_vars_3_0(m_3, o_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  m_34 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_34;
              t = free_vars_3_0(t_3, w_3, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm a_5 (ATerm k_96 (ATerm), ATerm d_43, ATerm c_43, ATerm t)
{
  static ATerm x_39 (ATerm t)
  {
    ATerm q_39 = NULL,r_39 = NULL,u_39 = NULL;
    q_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_43;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_39 = ATgetFirst((ATermList) t);
            u_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_39;
              {
                static ATerm c_4 (ATerm t)
                {
                  t = c_43;
                  return(t);
                }
                t = b_5(k_96, c_4, r_39, u_39, t);
              }
              t = x_39(t);
              LocalPopChoice(z_13);
            }
          else
            {
              t = y_13;
              {
                ATerm v_28 = NULL,d_29 = NULL,s_3 = NULL;
                t = SSLgetAnnotations(q_39);
                v_28 = t;
                t = u_39;
                t = x_39(t);
                d_29 = t;
                t = (ATerm) ATinsert(CheckATermList(d_29), r_39);
                s_3 = t;
                t = SSLsetAnnotations(s_3, v_28);
              }
            }
        }
      }
    return(t);
  }
  t = d_43;
  t = x_39(t);
  return(t);
}
ATerm foldr_3_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_40;
      t = h_99(t);
    }
  else
    {
      ATerm g_40 = NULL,j_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_40 = ATgetFirst((ATermList) t);
          c_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_40;
      t = j_99(t);
      g_40 = t;
      t = c_40;
      t = foldr_3_0(h_99, i_99, j_99, t);
      j_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_40, j_40);
      t = i_99(t);
    }
  return(t);
}
static ATerm b_5 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm h_43, ATerm g_43, ATerm t)
{
  t = o_96(t);
  {
    static ATerm f_4 (ATerm t)
    {
      ATerm p_40 = NULL;
      p_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_43, p_40);
      t = n_96(t);
      return(t);
    }
    t = fetch_1_0(f_4, t);
  }
  t = g_43;
  return(t);
}
static ATerm c_5 (ATerm f_96 (ATerm), ATerm b_43, ATerm a_43, ATerm t)
{
  static ATerm k_41 (ATerm t)
  {
    ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
    f_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_41;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_41 = ATgetFirst((ATermList) t);
            h_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_41;
              {
                static ATerm g_4 (ATerm t)
                {
                  t = a_43;
                  return(t);
                }
                t = b_5(f_96, g_4, g_41, h_41, t);
              }
              t = k_41(t);
              LocalPopChoice(f_14);
            }
          else
            {
              t = a_14;
              {
                ATerm p_29 = NULL,a_30 = NULL,u_3 = NULL;
                t = SSLgetAnnotations(f_41);
                p_29 = t;
                t = h_41;
                t = k_41(t);
                a_30 = t;
                t = (ATerm) ATinsert(CheckATermList(a_30), g_41);
                u_3 = t;
                t = SSLsetAnnotations(u_3, p_29);
              }
            }
        }
      }
    return(t);
  }
  t = b_43;
  t = k_41(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  static ATerm m_42 (ATerm t)
  {
    ATerm f_42 = NULL,g_42 = NULL,l_42 = NULL;
    l_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_42 = ATgetFirst((ATermList) t);
        g_42 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_30 = NULL,w_30 = NULL,z_3 = NULL;
          t = SSLgetAnnotations(l_42);
          t_30 = t;
          t = g_42;
          t = m_42(t);
          w_30 = t;
          t = (ATerm) ATinsert(CheckATermList(w_30), f_42);
          z_3 = t;
          t = SSLsetAnnotations(z_3, t_30);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_42;
        t = h_94(t);
      }
    return(t);
  }
  t = m_42(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_41;
    }
  else
    {
      static ATerm i_4 (ATerm t)
      {
        t = not_null(r_41);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_41 = ATgetFirst((ATermList) t);
          if(((r_41 != NULL) && (r_41 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_41;
      t = at_end_1_0(i_4, t);
    }
  return(t);
}
static ATerm n_43 (ATerm q_42, ATerm t)
{
  ATerm t_42 = NULL;
  t = SSL_explode_term(q_42);
  if(match_cons(t, sym__2))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_42;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,f_43 = NULL;
  f_43 = t;
  if(match_cons(t, sym__2))
    {
      v_42 = ATgetArgument(t, 0);
      w_42 = ATgetArgument(t, 1);
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_4 (ATerm t)
            {
              t = w_42;
              return(t);
            }
            t = v_42;
            t = at_end_1_0(k_4, t);
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            t = n_43(f_43, t);
          }
      }
    }
  else
    {
      t = n_43(f_43, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm t)
{
  static ATerm w_43 (ATerm t)
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_85(t);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm o_43 = NULL,p_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,d_4 = NULL;
          t = v_85(t);
          v_43 = t;
          if(match_cons(t, sym__2))
            {
              p_43 = ATgetArgument(t, 0);
              s_43 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_43);
          o_43 = t;
          t = p_43;
          t = x_85(t);
          t_43 = t;
          t = s_43;
          t = w_43(t);
          u_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_43, u_43);
          d_4 = t;
          t = SSLsetAnnotations(d_4, o_43);
          t = w_85(t);
        }
      }
    return(t);
  }
  t = w_43(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_14 = ATgetArgument(t, 0);
      if(((ATgetType(l_14) != AT_LIST) || !(ATisEmpty(l_14))))
        _fail(t);
      {
        ATerm m_14 = ATgetArgument(t, 1);
        if(((ATgetType(m_14) != AT_LIST) || !(ATisEmpty(m_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,r_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_14 = ATgetArgument(t, 0);
      if(((ATgetType(n_14) == AT_LIST) && !(ATisEmpty(n_14))))
        {
          i_44 = ATgetFirst((ATermList) n_14);
          j_44 = (ATerm) ATgetNext((ATermList) n_14);
        }
      else
        _fail(t);
      {
        ATerm o_14 = ATgetArgument(t, 1);
        if(((ATgetType(o_14) == AT_LIST) && !(ATisEmpty(o_14))))
          {
            k_44 = ATgetFirst((ATermList) o_14);
            r_44 = (ATerm) ATgetNext((ATermList) o_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_44, k_44), (ATerm) ATmakeAppl(sym__2, j_44, r_44));
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL;
  if(match_cons(t, sym__2))
    {
      s_44 = ATgetArgument(t, 0);
      t_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_44), s_44);
  return(t);
}
static ATerm e_5 (ATerm w_581, ATerm b_582, ATerm k_56, ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
  t = SSL_explode_term(b_582);
  if(match_cons(t, sym__2))
    {
      d_44 = ATgetArgument(t, 0);
      f_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_581);
  if(match_cons(t, sym__2))
    {
      if((d_44 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_44, f_44);
  t = genzip_4_0(l_4, m_4, n_4, _id, t);
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_44, k_56);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm u_87 (ATerm), ATerm v_87 (ATerm), ATerm t)
{
  static ATerm x_44 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_87(t);
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = v_87(t);
        t = x_44(t);
      }
    return(t);
  }
  t = x_44(t);
  return(t);
}
ATerm for_3_0 (ATerm x_87 (ATerm), ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm t)
{
  t = x_87(t);
  t = while_not_2_0(y_87, z_87, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm i_45 = NULL;
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_45);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm j_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,h_4 = NULL;
  o_45 = t;
  if(match_cons(t, sym__2))
    {
      m_45 = ATgetArgument(t, 0);
      n_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_45);
  j_45 = t;
  t = n_45;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
  h_4 = t;
  t = SSLsetAnnotations(h_4, j_45);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  y_46 = t;
  if(match_cons(t, sym__2))
    {
      z_46 = ATgetArgument(t, 0);
      a_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_47 = ATgetFirst((ATermList) t);
      c_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_47(z_46, a_47, y_46, t);
            LocalPopChoice(v_14);
          }
        else
          {
            t = s_14;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_46), b_47), c_47);
          }
      }
    }
  else
    {
      t = o_47(z_46, a_47, y_46, t);
    }
  return(t);
}
static ATerm o_47 (ATerm p_45, ATerm u_45, ATerm v_45, ATerm t)
{
  ATerm w_45 = NULL,z_45 = NULL,j_4 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  t = SSLgetAnnotations(v_45);
  w_45 = t;
  t = u_45;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_46 = ATgetFirst((ATermList) t);
      s_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_46;
  if(match_cons(t, sym__2))
    {
      q_46 = ATgetArgument(t, 0);
      r_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_46;
        if((q_46 != t))
          {
            _fail(t);
          }
        t = s_46;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = u_45;
        t = e_5(q_46, r_46, s_46, t);
      }
  }
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_45, z_45);
  j_4 = t;
  t = SSLsetAnnotations(j_4, w_45);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm l_47 = NULL;
  if(match_cons(t, sym__2))
    {
      l_47 = ATgetArgument(t, 0);
      if((l_47 != ATgetArgument(t, 1)))
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
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_4, q_4, r_4, t);
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      {
        ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
        g_47 = t;
        if(match_cons(t, sym__2))
          {
            h_47 = ATgetArgument(t, 0);
            i_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_47;
        t = c_5(s_4, h_47, i_47, t);
      }
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  if(match_cons(t, sym__2))
    {
      r_31 = ATgetArgument(t, 0);
      s_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(y_4, r_31, s_31, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm t_31 = NULL;
  if(match_cons(t, sym__2))
    {
      t_31 = ATgetArgument(t, 0);
      if((t_31 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm b_32 = NULL,f_32 = NULL;
  if(match_cons(t, sym__2))
    {
      b_32 = ATgetArgument(t, 0);
      f_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(j_5, b_32, f_32, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm g_32 = NULL;
  if(match_cons(t, sym__2))
    {
      g_32 = ATgetArgument(t, 0);
      if((g_32 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm o_48 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_102(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        {
          ATerm c_15 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_47 = NULL,u_47 = NULL,i_31 = NULL,j_31 = NULL;
              t_47 = t;
              t = z_102(t);
              u_47 = t;
              t = t_47;
              {
                static ATerm t_4 (ATerm t)
                {
                  ATerm y_47 = NULL;
                  t = o_48(t);
                  y_47 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_47, u_47);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_103(t_4, o_48, u_4, t);
              }
              j_31 = t;
              t = SSL_explode_term(j_31);
              if(match_cons(t, sym__2))
                {
                  ATerm e_15 = ATgetArgument(t, 0);
                  i_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_31;
              t = foldr_3_0(v_4, x_4, _id, t);
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              {
                ATerm w_31 = NULL,x_31 = NULL;
                x_31 = t;
                t = SSL_explode_term(x_31);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_15 = ATgetArgument(t, 0);
                    w_31 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_31;
                t = foldr_3_0(h_5, i_5, o_48, t);
              }
            }
        }
      }
    return(t);
  }
  t = o_48(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm s_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_49);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            {
              ATerm u_49 = NULL,w_49 = NULL,x_49 = NULL,a_50 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_49 = ATgetArgument(t, 0);
                  w_49 = ATgetArgument(t, 1);
                  x_49 = ATgetArgument(t, 2);
                  a_50 = ATgetArgument(t, 3);
                  t = x_49;
                  t = map_1_0(o_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_49 = ATgetArgument(t, 0);
                      w_49 = ATgetArgument(t, 1);
                      x_49 = ATgetArgument(t, 2);
                      a_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_49;
                  t = map_1_0(y_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm k_50 = NULL;
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_50 = ATgetArgument(t, 0);
          {
            ATerm n_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_15);
      t = k_50;
    }
  else
    {
      t = l_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_50;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm x_50 = NULL;
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_50 = ATgetArgument(t, 0);
          {
            ATerm t_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_15);
      t = x_50;
    }
  else
    {
      t = r_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_50;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm a_49 = NULL,j_49 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_49 = ATgetArgument(t, 0);
      t = j_49;
      if(match_cons(t, sym_Rule_3))
        {
          a_49 = ATgetArgument(t, 0);
          {
            ATerm u_15 = ATgetArgument(t, 1);
          }
          {
            ATerm v_15 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = a_49;
      t = free_vars_3_0(l_5, m_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_49 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_49;
    }
  return(t);
}
ATerm Var_1_0 (ATerm s_60 (ATerm), ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,k_51 = NULL,l_51 = NULL,p_4 = NULL;
  l_51 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_51);
  g_51 = t;
  t = h_51;
  t = s_60(t);
  k_51 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_51);
  p_4 = t;
  t = SSLsetAnnotations(p_4, g_51);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm x_15 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_16);
    }
  else
    {
      t = x_15;
      {
        ATerm y_51 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            y_51 = ATgetArgument(t, 0);
            b_52 = ATgetArgument(t, 1);
            c_52 = ATgetArgument(t, 2);
            d_52 = ATgetArgument(t, 3);
            t = c_52;
            t = map_1_0(f_6, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                y_51 = ATgetArgument(t, 0);
                b_52 = ATgetArgument(t, 1);
                c_52 = ATgetArgument(t, 2);
                d_52 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = c_52;
            t = map_1_0(i_6, t);
          }
      }
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm p_52 = NULL;
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_52 = ATgetArgument(t, 0);
          {
            ATerm g_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_16);
      t = p_52;
    }
  else
    {
      t = e_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_52;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm f_53 = NULL;
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_53 = ATgetArgument(t, 0);
          {
            ATerm j_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_16);
      t = f_53;
    }
  else
    {
      t = h_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_53;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm i_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,p_53 = NULL;
  i_53 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_53 = ATgetArgument(t, 0);
      l_53 = ATgetArgument(t, 1);
      t = i_53;
      t = w_4(k_53, l_53, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_53 = ATgetArgument(t, 0);
          l_53 = ATgetArgument(t, 1);
          m_53 = ATgetArgument(t, 2);
          t = l_53;
          t = map_1_0(l_6, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              k_53 = ATgetArgument(t, 0);
              l_53 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, k_53);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  k_53 = ATgetArgument(t, 0);
                  l_53 = ATgetArgument(t, 1);
                  m_53 = ATgetArgument(t, 2);
                  p_53 = ATgetArgument(t, 3);
                  t = l_53;
                  t = map_1_0(o_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_53 = ATgetArgument(t, 0);
                      l_53 = ATgetArgument(t, 1);
                      m_53 = ATgetArgument(t, 2);
                      p_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_53;
                  t = map_1_0(r_6, t);
                }
            }
        }
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm x_53 = NULL;
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_53 = ATgetArgument(t, 0);
          {
            ATerm n_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_16);
      t = x_53;
    }
  else
    {
      t = l_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_53;
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm j_54 = NULL;
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_54 = ATgetArgument(t, 0);
          {
            ATerm r_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_16);
      t = j_54;
    }
  else
    {
      t = o_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_54;
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm b_55 = NULL;
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_55 = ATgetArgument(t, 0);
          {
            ATerm b_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_16);
      t = b_55;
    }
  else
    {
      t = s_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_55;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, c_6, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, j_6, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm p_5 (ATerm w_28, ATerm x_28, ATerm t)
{
  ATerm f_55 = NULL;
  t = SSL_fputc(w_28, x_28);
  f_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_55);
  return(t);
}
static ATerm q_5 (ATerm o_27, ATerm p_27, ATerm t)
{
  ATerm g_55 = NULL;
  t = SSL_write_term_to_stream_text(o_27, p_27);
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_55);
  return(t);
}
static ATerm s_5 (ATerm s_88 (ATerm), ATerm u_190, ATerm u_27, ATerm t)
{
  ATerm j_55 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_190, term_c_17);
  t = w_5(t);
  j_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_55, u_27);
  t = s_88(t);
  t = fclose_0_0(t);
  t = u_27;
  return(t);
}
static ATerm r_5 (ATerm k_27, ATerm l_27, ATerm t)
{
  ATerm k_55 = NULL;
  t = SSL_write_term_to_stream_baf(k_27, l_27);
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_55);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      if(match_cons(d_17, sym_Stream_1))
        {
          s_55 = ATgetArgument(d_17, 0);
        }
      else
        _fail(t);
      t_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(s_55, t_55, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      if(match_cons(e_17, sym_Stream_1))
        {
          x_55 = ATgetArgument(e_17, 0);
        }
      else
        _fail(t);
      y_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(x_55, y_55, t);
  u_55 = t;
  t = term_i_17;
  v_55 = t;
  t = u_55;
  if(match_cons(t, sym_Stream_1))
    {
      w_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_17, u_55);
  t = p_5(v_55, w_55, t);
  return(t);
}
ATerm output_1_0 (ATerm y_105 (ATerm), ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL;
  t = y_105(t);
  m_55 = t;
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_55 = NULL,o_55 = NULL;
        t = term_m_17;
        n_55 = t;
        t = term_n_17;
        o_55 = t;
        t = term_o_17;
        t = a_6(n_55, o_55, t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        t = term_p_17;
      }
  }
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_55, m_55);
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_55 = NULL,r_55 = NULL;
        t = term_m_17;
        p_55 = t;
        t = term_y_17;
        r_55 = t;
        t = term_z_17;
        t = a_6(p_55, r_55, t);
        t = (ATerm) ATmakeAppl(sym__2, l_55, m_55);
        LocalPopChoice(w_17);
        if(match_cons(t, sym__2))
          {
            ATerm e_18 = ATgetArgument(t, 0);
            ATerm f_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_5(y_6, l_55, m_55, t);
      }
    else
      {
        t = v_17;
        if(match_cons(t, sym__2))
          {
            ATerm r_18 = ATgetArgument(t, 0);
            ATerm t_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_5(a_7, l_55, m_55, t);
      }
  }
  return(t);
}
static ATerm y_56 (ATerm l_56, ATerm t)
{
  t = SSL_fclose(l_56);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  t_56 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_56 = ATgetArgument(t, 0);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_56);
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            t = y_56(t_56, t);
          }
      }
    }
  else
    {
      t = y_56(t_56, t);
    }
  return(t);
}
static ATerm t_5 (ATerm q_27, ATerm t)
{
  t = SSL_read_term_from_stream(q_27);
  return(t);
}
static ATerm u_5 (ATerm g_52, ATerm h_52, ATerm t)
{
  t = SSL_strcat(g_52, h_52);
  return(t);
}
static ATerm v_5 (ATerm y_28, ATerm z_28, ATerm t)
{
  ATerm b_57 = NULL;
  t = SSL_fopen(y_28, z_28);
  b_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_57);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_57 = NULL;
  t = SSL_stdin_stream();
  e_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_57);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_57 = NULL;
  t = SSL_stdout_stream();
  f_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_57);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_57 = NULL;
  t = SSL_stderr_stream();
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_57);
  return(t);
}
static ATerm b_59 (ATerm s_57, ATerm t)
{
  ATerm t_57 = NULL;
  t = SSL_explode_term(s_57);
  if(match_cons(t, sym__2))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_19 = ATgetArgument(t, 1);
        if(((ATgetType(a_19) == AT_LIST) && !(ATisEmpty(a_19))))
          {
            t_57 = ATgetFirst((ATermList) a_19);
            {
              ATerm c_19 = (ATerm) ATgetNext((ATermList) a_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_57;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_57;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_57;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_57;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_59 (ATerm y_57, ATerm c_58, ATerm g_58, ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,m_58 = NULL,z_4 = NULL;
  t = SSLgetAnnotations(g_58);
  j_58 = t;
  t = y_57;
  if(match_cons(t, sym_Path_1))
    {
      m_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_58, c_58);
  z_4 = t;
  t = SSLsetAnnotations(z_4, j_58);
  if(match_cons(t, sym__2))
    {
      h_58 = ATgetArgument(t, 0);
      i_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(h_58, i_58, t);
  return(t);
}
static ATerm d_59 (ATerm o_58, ATerm p_58, ATerm q_58, ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,w_58 = NULL,d_5 = NULL;
  t = SSLgetAnnotations(q_58);
  t_58 = t;
  t = SSL_is_string(o_58);
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_58, p_58);
  d_5 = t;
  t = SSLsetAnnotations(d_5, t_58);
  if(match_cons(t, sym__2))
    {
      r_58 = ATgetArgument(t, 0);
      s_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(r_58, s_58, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL;
  y_58 = t;
  if(match_cons(t, sym__2))
    {
      z_58 = ATgetArgument(t, 0);
      a_59 = ATgetArgument(t, 1);
      {
        ATerm d_19 = t;
        int e_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_59(y_58, t);
            LocalPopChoice(e_19);
          }
        else
          {
            t = d_19;
            {
              ATerm f_19 = t;
              int g_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_59(z_58, a_59, y_58, t);
                  LocalPopChoice(g_19);
                }
              else
                {
                  t = f_19;
                  t = d_59(z_58, a_59, y_58, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_59(y_58, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,o_59 = NULL;
  o_59 = t;
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_59, term_j_19);
        t = w_5(t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        {
          ATerm l_33 = NULL,m_33 = NULL;
          t = term_k_19;
          m_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_19, o_59);
          t = u_5(m_33, o_59, t);
          l_33 = t;
          t = SSL_perror(l_33);
          _fail(t);
        }
      }
  }
  g_59 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(h_59, t);
  f_59 = t;
  t = g_59;
  t = fclose_0_0(t);
  t = f_59;
  return(t);
}
ATerm input_1_0 (ATerm z_105 (ATerm), ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_59 = NULL,s_59 = NULL;
      t = term_m_17;
      r_59 = t;
      t = term_n_19;
      s_59 = t;
      t = term_o_19;
      t = a_6(r_59, s_59, t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      t = term_p_19;
    }
  t = ReadFromFile_0_0(t);
  t = z_105(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL;
  t_59 = t;
  t = term_q_19;
  t = whoami_0_0(t);
  u_59 = t;
  t = term_r_19;
  w_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_19), u_59), term_s_19);
  x_59 = t;
  t = SSL_printnl(w_59, x_59);
  t = term_u_19;
  v_59 = t;
  t = SSL_exit(v_59);
  t = t_59;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm z_59 = NULL;
  z_59 = t;
  if(match_string(t, "-k"))
    {
      t = z_59;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_59;
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL;
  a_60 = t;
  t = SSL_string_to_int(a_60);
  b_60 = t;
  t = term_w_19;
  c_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_19, b_60);
  t = d_6(c_60, b_60, t);
  t = a_60;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_7, e_7, f_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm e_60 = NULL;
  e_60 = t;
  if(match_string(t, "-S"))
    {
      t = e_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_60;
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL;
  t = term_y_19;
  f_60 = t;
  t = term_z_19;
  g_60 = t;
  t = term_a_20;
  t = d_6(f_60, g_60, t);
  t = term_b_20;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
  h_60 = t;
  t = SSL_string_to_int(h_60);
  i_60 = t;
  t = term_y_19;
  j_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_19, i_60);
  t = d_6(j_60, i_60, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_60);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL;
  t = term_e_20;
  k_60 = t;
  t = term_q_19;
  l_60 = t;
  t = term_g_20;
  t = d_6(k_60, l_60, t);
  t = term_k_20;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_7, h_7, i_7, t);
      LocalPopChoice(x_20);
    }
  else
    {
      t = v_20;
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_7, k_7, l_7, t);
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            t = Option_3_0(m_7, n_7, o_7, t);
          }
      }
    }
  return(t);
}
static ATerm d_6 (ATerm r_32, ATerm s_32, ATerm t)
{
  ATerm m_60 = NULL;
  t = term_m_17;
  m_60 = t;
  t = SSL_table_put(m_60, r_32, s_32);
  t = (ATerm) ATmakeAppl(sym__3, term_m_17, r_32, s_32);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_60 = NULL,t_60 = NULL,u_60 = NULL;
      t = term_q_19;
      t = e_0(t);
      r_60 = t;
      t = term_a_21;
      t_60 = t;
      t = term_e_21;
      u_60 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_21, term_e_21, r_60);
      t = b_6(t_60, u_60, r_60, t);
      _fail(t);
    }
  else
    {
      ATerm x_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_60 = ATgetFirst((ATermList) t);
          q_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_60;
      t = c_0(t);
      t = term_q_19;
      t = d_0(t);
      x_60 = t;
      t = (ATerm) ATinsert(CheckATermList(q_60), x_60);
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm z_60 = NULL;
  z_60 = t;
  if(match_string(t, "-o"))
    {
      t = z_60;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_60;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL;
  a_61 = t;
  t = term_n_17;
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_17, a_61);
  t = d_6(b_61, a_61, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_61);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_7, q_7, r_7, t);
  return(t);
}
static ATerm b_6 (ATerm b_38, ATerm c_38, ATerm a_38, ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
  d_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_38, c_38);
  {
    ATerm g_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            ATerm k_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_38, c_38);
        t = a_6(b_38, c_38, t);
        LocalPopChoice(i_21);
      }
    else
      {
        t = g_21;
        t = (ATerm) ATempty;
      }
  }
  e_61 = t;
  t = (ATerm) ATinsert(CheckATermList(e_61), a_38);
  f_61 = t;
  t = SSL_table_put(b_38, c_38, f_61);
  t = d_61;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL;
      t = term_q_19;
      t = n_0(t);
      q_61 = t;
      t = term_a_21;
      r_61 = t;
      t = term_e_21;
      s_61 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_21, term_e_21, q_61);
      t = b_6(r_61, s_61, q_61, t);
      _fail(t);
    }
  else
    {
      ATerm w_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_61 = ATgetFirst((ATermList) t);
          n_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_61;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_61 = ATgetFirst((ATermList) t);
          p_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_61;
      t = k_0(t);
      t = o_61;
      t = l_0(t);
      w_61 = t;
      t = (ATerm) ATinsert(CheckATermList(p_61), w_61);
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm y_61 = NULL;
  y_61 = t;
  if(match_string(t, "-i"))
    {
      t = y_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_61;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL;
  z_61 = t;
  t = term_n_19;
  a_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_19, z_61);
  t = d_6(a_62, z_61, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_61);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_7, t_7, u_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_19;
  t = whoami_0_0(t);
  b_62 = t;
  t = term_r_19;
  d_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_21), b_62);
  e_62 = t;
  t = SSL_printnl(d_62, e_62);
  t = term_u_19;
  c_62 = t;
  t = SSL_exit(c_62);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL;
  t = term_m_17;
  f_62 = t;
  t = term_n_21;
  g_62 = t;
  t = term_o_21;
  t = a_6(f_62, g_62, t);
  return(t);
}
static ATerm x_5 (ATerm j_35, ATerm k_35, ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_35, k_35);
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      t = SSL_addr(j_35, k_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL;
  i_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_62;
      t = f_99(t);
    }
  else
    {
      ATerm n_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_62 = ATgetFirst((ATermList) t);
          k_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_62;
      t = foldr_2_0(f_99, g_99, t);
      n_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_62, n_62);
      t = g_99(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  if(match_cons(t, sym__2))
    {
      u_33 = ATgetArgument(t, 0);
      v_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(u_33, v_33, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_62 = NULL,q_33 = NULL,r_33 = NULL;
  t = times_0_0(t);
  r_33 = t;
  t = SSL_explode_term(r_33);
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      q_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_33;
  t = foldr_2_0(v_7, w_7, t);
  q_62 = t;
  t = SSL_TicksToSeconds(q_62);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL;
  b_63 = t;
  if(match_cons(t, sym__2))
    {
      c_63 = ATgetArgument(t, 0);
      d_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_63;
        if((c_63 != t))
          {
            _fail(t);
          }
        t = b_63;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = (ATerm) ATmakeAppl(sym__2, c_63, d_63);
        {
          ATerm v_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_63, d_63);
              LocalPopChoice(z_21);
            }
          else
            {
              t = v_21;
              t = SSL_gtr(c_63, d_63);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_63, d_63);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm h_63 = NULL;
  h_63 = t;
  {
    ATerm a_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL;
        t = term_m_17;
        k_63 = t;
        t = term_y_19;
        l_63 = t;
        t = term_e_22;
        t = a_6(k_63, l_63, t);
        j_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_63, term_u_19);
        t = geq_0_0(t);
        t = h_63;
        t = i_90(t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = a_22;
        t = h_63;
      }
  }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,q_63 = NULL,r_63 = NULL;
  t = run_time_0_0(t);
  n_63 = t;
  t = term_q_19;
  t = whoami_0_0(t);
  o_63 = t;
  t = term_r_19;
  q_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_22), n_63), term_f_22), o_63);
  r_63 = t;
  t = SSL_printnl(q_63, r_63);
  t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_22), n_63), term_f_22), o_63));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_63 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_19;
  s_63 = t;
  t = SSL_exit(s_63);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm c_64 = NULL,e_64 = NULL;
  e_64 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_64;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_64 = ATgetArgument(t, 0);
          {
            ATerm h_34 = NULL,n_5 = NULL;
            t = SSLgetAnnotations(e_64);
            h_34 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_64);
            n_5 = t;
            t = SSLsetAnnotations(n_5, h_34);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_64;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_105 (ATerm), ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_63 = NULL,w_63 = NULL;
      t = term_m_17;
      v_63 = t;
      t = term_l_22;
      w_63 = t;
      t = term_m_22;
      t = a_6(v_63, w_63, t);
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      t = fetch_1_0(y_7, t);
    }
  t = p_105(t);
  return(t);
}
ATerm map_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  static ATerm u_64 (ATerm t)
  {
    ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL;
    r_64 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_64;
      }
    else
      {
        ATerm p_36 = NULL,f_37 = NULL,g_37 = NULL,z_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_64 = ATgetFirst((ATermList) t);
            t_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_64);
        p_36 = t;
        t = s_64;
        t = q_93(t);
        f_37 = t;
        t = t_64;
        t = u_64(t);
        g_37 = t;
        t = (ATerm) ATinsert(CheckATermList(g_37), f_37);
        z_5 = t;
        t = SSLsetAnnotations(z_5, p_36);
      }
    return(t);
  }
  t = u_64(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_64 = ATgetFirst((ATermList) t);
      y_64 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_65 = NULL,d_65 = NULL;
        static ATerm z_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_65)), not_null(d_65));
          return(t);
        }
        t = y_64;
        t = i_0(t);
        if(((c_65 != NULL) && (c_65 != t)))
          _fail(t);
        else
          c_65 = t;
        t = x_64;
        t = g_0(t);
        if(((d_65 != NULL) && (d_65 != t)))
          _fail(t);
        else
          d_65 = t;
        t = y_64;
        t = reverse_acc_2_0(g_0, z_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_19;
      t = i_0(t);
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL,e_6 = NULL;
  l_65 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_65);
  j_65 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_65);
  e_6 = t;
  t = SSLsetAnnotations(e_6, j_65);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm n_65 = NULL;
  n_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_65), term_n_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL;
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_65 = NULL,i_65 = NULL;
      t = term_m_17;
      h_65 = t;
      t = term_n_21;
      i_65 = t;
      t = term_o_21;
      t = a_6(h_65, i_65, t);
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      t = fetch_1_0(a_8, t);
    }
  t = term_q_22;
  t = echo_0_0(t);
  t = term_a_21;
  f_65 = t;
  t = term_e_21;
  g_65 = t;
  t = term_r_22;
  t = a_6(f_65, g_65, t);
  t = reverse_acc_2_0(_id, b_8, t);
  t = map_1_0(c_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  static ATerm k_66 (ATerm t)
  {
    ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL;
    h_66 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_66 = ATgetFirst((ATermList) t);
        j_66 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_22 = t;
      int u_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_39 = NULL,l_39 = NULL,g_6 = NULL;
          t = SSLgetAnnotations(h_66);
          e_39 = t;
          t = i_66;
          t = a_94(t);
          l_39 = t;
          t = (ATerm) ATinsert(CheckATermList(j_66), l_39);
          g_6 = t;
          t = SSLsetAnnotations(g_6, e_39);
          LocalPopChoice(u_22);
        }
      else
        {
          t = t_22;
          {
            ATerm q_40 = NULL,t_40 = NULL,h_6 = NULL;
            t = SSLgetAnnotations(h_66);
            q_40 = t;
            t = j_66;
            t = k_66(t);
            t_40 = t;
            t = (ATerm) ATinsert(CheckATermList(t_40), i_66);
            h_6 = t;
            t = SSLsetAnnotations(h_6, q_40);
          }
        }
    }
    return(t);
  }
  t = k_66(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL;
  o_66 = t;
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_66;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_22 = ATgetFirst((ATermList) t);
                ATerm y_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_66;
          }
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        t = (ATerm) ATinsert(ATempty, o_66);
      }
  }
  p_66 = t;
  t = term_p_17;
  q_66 = t;
  t = SSL_printnl(q_66, p_66);
  t = o_66;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL;
  t = term_m_17;
  u_66 = t;
  t = term_n_21;
  v_66 = t;
  t = term_o_21;
  t = a_6(u_66, v_66, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_6 (ATerm s_39, ATerm t_39, ATerm t)
{
  t = SSL_table_get(s_39, t_39);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL;
  t = term_z_22;
  w_66 = t;
  t = term_q_19;
  x_66 = t;
  t = term_a_23;
  t = d_6(w_66, x_66, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_b_23;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL;
  t = term_z_22;
  a_67 = t;
  t = term_q_19;
  b_67 = t;
  t = term_a_23;
  t = d_6(a_67, b_67, t);
  t = term_d_23;
  y_66 = t;
  t = term_q_19;
  z_66 = t;
  t = term_e_23;
  t = d_6(y_66, z_66, t);
  t = term_f_23;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_8, e_8, f_8, t);
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      t = Option_3_0(h_8, i_8, j_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_67 (ATerm), ATerm i_67 (ATerm), ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,j_67 = NULL,k_6 = NULL;
  j_67 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_67 = ATgetFirst((ATermList) t);
      e_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_67);
  c_67 = t;
  t = d_67;
  t = h_67(t);
  f_67 = t;
  t = e_67;
  t = i_67(t);
  g_67 = t;
  t = (ATerm) ATinsert(CheckATermList(g_67), f_67);
  k_6 = t;
  t = SSLsetAnnotations(k_6, c_67);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,t_67 = NULL,u_67 = NULL,p_6 = NULL;
  o_67 = t;
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_23;
        t = n_107(t);
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
      }
  }
  t = o_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_67 = ATgetFirst((ATermList) t);
      r_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_67);
  p_67 = t;
  t = term_n_21;
  u_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_21, q_67);
  t = d_6(u_67, q_67, t);
  t = r_67;
  {
    static ATerm e_68 (ATerm t)
    {
      ATerm p_23 = t;
      int q_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_23 = t;
          int s_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_67 = NULL;
              x_67 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_67;
              LocalPopChoice(s_23);
            }
          else
            {
              t = r_23;
              t = n_107(t);
              t = Cons_2_0(_id, e_68, t);
            }
          LocalPopChoice(q_23);
        }
      else
        {
          t = p_23;
          {
            ATerm a_68 = NULL,b_68 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_68 = ATgetFirst((ATermList) t);
                b_68 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_68), (ATerm) ATmakeAppl(sym_Undefined_1, a_68));
          }
        }
      return(t);
    }
    t = e_68(t);
  }
  t_67 = t;
  t = (ATerm) ATinsert(CheckATermList(t_67), (ATerm) ATmakeAppl(sym_Program_1, q_67));
  p_6 = t;
  t = SSLsetAnnotations(p_6, p_67);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm q_68 = NULL;
  q_68 = t;
  if(match_string(t, "--help"))
    {
      t = q_68;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_68;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_68;
        }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL;
  t = term_l_22;
  r_68 = t;
  t = term_q_19;
  s_68 = t;
  t = term_t_23;
  t = d_6(r_68, s_68, t);
  t = term_u_23;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_v_23;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL;
  l_68 = t;
  t = term_a_21;
  n_68 = t;
  t = term_e_21;
  o_68 = t;
  t = (ATerm) ATempty;
  p_68 = t;
  t = SSL_table_put(n_68, o_68, p_68);
  t = l_68;
  {
    static ATerm k_8 (ATerm t)
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_107(t);
          LocalPopChoice(x_23);
        }
      else
        {
          t = w_23;
          {
            ATerm y_23 = t;
            int z_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_8, m_8, n_8, t);
                LocalPopChoice(z_23);
              }
            else
              {
                t = y_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_8, t);
  }
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_69 = NULL;
        d_69 = t;
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_41 = NULL;
              t = d_69;
              {
                ATerm e_24 = t;
                int f_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_41 = NULL,h_42 = NULL;
                    t = term_m_17;
                    w_41 = t;
                    t = term_l_22;
                    h_42 = t;
                    t = term_m_22;
                    t = a_6(w_41, h_42, t);
                    LocalPopChoice(f_24);
                  }
                else
                  {
                    t = e_24;
                    t = fetch_1_0(o_8, t);
                  }
              }
              t = d_69;
              t = default_system_usage_0_0(t);
              t = term_z_19;
              v_41 = t;
              t = SSL_exit(v_41);
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              {
                ATerm o_42 = NULL,p_42 = NULL,r_42 = NULL;
                t = term_m_17;
                p_42 = t;
                t = term_z_22;
                r_42 = t;
                t = term_g_24;
                t = a_6(p_42, r_42, t);
                t = d_69;
                t = default_system_about_0_0(t);
                t = term_z_19;
                o_42 = t;
                t = SSL_exit(o_42);
              }
            }
        }
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        {
          ATerm h_24 = t;
          int i_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
              static ATerm p_8 (ATerm t)
              {
                ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,s_6 = NULL;
                j_69 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_69 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_69);
                h_69 = t;
                t = i_69;
                if(((j_68 != NULL) && (j_68 != t)))
                  _fail(t);
                else
                  j_68 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_69);
                s_6 = t;
                t = SSLsetAnnotations(s_6, h_69);
                return(t);
              }
              t = fetch_1_0(p_8, t);
              t = term_r_19;
              f_69 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_68)), term_j_24);
              g_69 = t;
              t = SSL_printnl(f_69, g_69);
              t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_68)), term_j_24));
              t = default_system_usage_0_0(t);
              t = term_u_19;
              e_69 = t;
              t = SSL_exit(e_69);
              LocalPopChoice(i_24);
            }
          else
            {
              t = h_24;
            }
        }
      }
  }
  k_68 = t;
  t = term_a_21;
  m_68 = t;
  t = SSL_table_destroy(m_68);
  t = k_68;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL;
  t = parse_options_1_0(r_105, t);
  o_69 = t;
  t = term_k_24;
  r_69 = t;
  t = SSL_table_create(r_69);
  t = term_k_24;
  p_69 = t;
  t = term_l_24;
  q_69 = t;
  t = SSL_table_put(p_69, q_69, o_69);
  t = o_69;
  t = t_105(t);
  {
    ATerm m_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_105, t);
        LocalPopChoice(o_24);
      }
    else
      {
        t = m_24;
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_105(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            {
              ATerm v_24 = t;
              int w_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(s_8, t_8, u_8, t);
                  LocalPopChoice(w_24);
                }
              else
                {
                  t = v_24;
                  {
                    ATerm x_24 = t;
                    int y_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(y_24);
                      }
                    else
                      {
                        t = x_24;
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
static ATerm r_8 (ATerm t)
{
  t = input_1_0(v_8, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL;
  t = term_y_17;
  t_69 = t;
  t = term_q_19;
  u_69 = t;
  t = term_z_24;
  t = d_6(t_69, u_69, t);
  t = term_a_25;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_b_25;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = output_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(q_8, default_usage_0_0, _id, r_8, t);
  return(t);
}
