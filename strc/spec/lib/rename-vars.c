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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_w_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_e_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_v_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_s_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_g_17;
ATerm term_a_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_n_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_z_17);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__2, term_k_20, term_u_19);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_r_21);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_c_20);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_p_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_j_21);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym__2, term_l_23, term_u_19);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_u_19);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_u_19);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__3, term_i_21, term_j_21, (ATerm) ATempty);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_l_23);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_u_19);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm spaste_1_0 (ATerm v_81 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm i_5 (ATerm d_21, ATerm c_21, ATerm t);
ATerm SVar_1_0 (ATerm m_65 (ATerm), ATerm t);
static ATerm s_5 (ATerm p_102 (ATerm), ATerm q_102 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t_47, ATerm s_47, ATerm r_47, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm w_5 (ATerm j_102 (ATerm), ATerm k_102 (ATerm (ATerm), ATerm), ATerm l_47, ATerm o_47, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm x_102 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm e_102 (ATerm (ATerm), ATerm), ATerm f_102 (ATerm), ATerm g_102 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_102 (ATerm (ATerm), ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm tpaste_1_0 (ATerm r_81 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm t);
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
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm m_5 (ATerm t_97 (ATerm), ATerm m_44, ATerm l_44, ATerm t);
ATerm foldr_3_0 (ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t);
static ATerm n_5 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm q_44, ATerm p_44, ATerm t);
static ATerm o_5 (ATerm o_97 (ATerm), ATerm k_44, ATerm j_44, ATerm t);
ATerm at_end_1_0 (ATerm q_95 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_44 (ATerm p_43, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_5 (ATerm l_598, ATerm q_598, ATerm t_57, ATerm t);
ATerm while_not_2_0 (ATerm d_89 (ATerm), ATerm e_89 (ATerm), ATerm t);
ATerm for_3_0 (ATerm g_89 (ATerm), ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm l_48 (ATerm o_46, ATerm p_46, ATerm q_46, ATerm t);
static ATerm r_4 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm free_vars_3_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm j_104 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm b_62 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm b_6 (ATerm w_28, ATerm x_28, ATerm t);
static ATerm c_6 (ATerm o_27, ATerm p_27, ATerm t);
static ATerm e_6 (ATerm b_90 (ATerm), ATerm d_192, ATerm u_27, ATerm t);
static ATerm d_6 (ATerm k_27, ATerm l_27, ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm output_1_0 (ATerm h_107 (ATerm), ATerm t);
static ATerm w_57 (ATerm l_57, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_6 (ATerm q_27, ATerm t);
static ATerm g_6 (ATerm p_53, ATerm q_53, ATerm t);
static ATerm h_6 (ATerm y_28, ATerm z_28, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_60 (ATerm i_58, ATerm t);
static ATerm h_60 (ATerm q_58, ATerm r_58, ATerm s_58, ATerm t);
static ATerm i_60 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm t);
static ATerm i_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm i_107 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_6 (ATerm r_32, ATerm s_32, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_6 (ATerm b_38, ATerm c_38, ATerm a_38, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_6 (ATerm j_35, ATerm k_35, ATerm t);
ATerm foldr_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_91 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm need_help_1_0 (ATerm y_106 (ATerm), ATerm t);
static ATerm s_6 (ATerm i_41, ATerm j_41, ATerm k_41, ATerm t);
ATerm lookup_table_0_1 (ATerm n_39, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_41, ATerm r_41, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_6 (ATerm n_41, ATerm o_41, ATerm t);
static ATerm m_6 (ATerm s_41, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm z_94 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_95 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_6 (ATerm l_41, ATerm m_41, ATerm t);
static ATerm o_6 (ATerm u_39, ATerm v_39, ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_108 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm parse_options_1_0 (ATerm v_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
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
      ATerm g_9 = ATgetArgument(t, 0);
      if(((ATgetType(g_9) != AT_LIST) || !(ATisEmpty(g_9))))
        _fail(t);
      {
        ATerm j_9 = ATgetArgument(t, 1);
        if(((ATgetType(j_9) != AT_LIST) || !(ATisEmpty(j_9))))
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
      ATerm k_9 = ATgetArgument(t, 0);
      if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
        {
          r_0 = ATgetFirst((ATermList) k_9);
          s_0 = (ATerm) ATgetNext((ATermList) k_9);
        }
      else
        _fail(t);
      {
        ATerm l_9 = ATgetArgument(t, 1);
        if(((ATgetType(l_9) == AT_LIST) && !(ATisEmpty(l_9))))
          {
            t_0 = ATgetFirst((ATermList) l_9);
            u_0 = (ATerm) ATgetNext((ATermList) l_9);
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
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm o_9 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(n_9);
        t = (ATerm) ATmakeAppl(sym_SDef_3, p_1, a_1, b_1);
      }
    else
      {
        t = m_9;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm p_9 = ATgetArgument(t, 0);
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
      ATerm r_9 = ATgetArgument(t, 0);
      if(((ATgetType(r_9) != AT_LIST) || !(ATisEmpty(r_9))))
        _fail(t);
      {
        ATerm t_9 = ATgetArgument(t, 1);
        if(((ATgetType(t_9) != AT_LIST) || !(ATisEmpty(t_9))))
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
      ATerm v_9 = ATgetArgument(t, 0);
      if(((ATgetType(v_9) == AT_LIST) && !(ATisEmpty(v_9))))
        {
          b_3 = ATgetFirst((ATermList) v_9);
          e_3 = (ATerm) ATgetNext((ATermList) v_9);
        }
      else
        _fail(t);
      {
        ATerm w_9 = ATgetArgument(t, 1);
        if(((ATgetType(w_9) == AT_LIST) && !(ATisEmpty(w_9))))
          {
            l_3 = ATgetFirst((ATermList) w_9);
            n_3 = (ATerm) ATgetNext((ATermList) w_9);
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
  ATerm p_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      p_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_3), p_3);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm s_3 = NULL,a_4 = NULL,b_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3;
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_9);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_4);
      }
    else
      {
        t = x_9;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_10 = ATgetArgument(t, 0);
            a_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_4, a_4);
      }
  }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      if(((ATgetType(b_10) != AT_LIST) || !(ATisEmpty(b_10))))
        _fail(t);
      {
        ATerm c_10 = ATgetArgument(t, 1);
        if(((ATgetType(c_10) != AT_LIST) || !(ATisEmpty(c_10))))
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
  ATerm r_5 = NULL,t_5 = NULL,u_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_10 = ATgetArgument(t, 0);
      if(((ATgetType(d_10) == AT_LIST) && !(ATisEmpty(d_10))))
        {
          r_5 = ATgetFirst((ATermList) d_10);
          t_5 = (ATerm) ATgetNext((ATermList) d_10);
        }
      else
        _fail(t);
      {
        ATerm e_10 = ATgetArgument(t, 1);
        if(((ATgetType(e_10) == AT_LIST) && !(ATisEmpty(e_10))))
          {
            u_5 = ATgetFirst((ATermList) e_10);
            y_5 = (ATerm) ATgetNext((ATermList) e_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_5, u_5), (ATerm) ATmakeAppl(sym__2, t_5, y_5));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  if(match_cons(t, sym__2))
    {
      a_7 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_7), a_7);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm d_7 = NULL,g_7 = NULL,j_7 = NULL;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7;
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_7);
      }
    else
      {
        t = f_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_10 = ATgetArgument(t, 0);
            g_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_7, g_7);
      }
  }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if(((ATgetType(j_10) != AT_LIST) || !(ATisEmpty(j_10))))
        _fail(t);
      {
        ATerm k_10 = ATgetArgument(t, 1);
        if(((ATgetType(k_10) != AT_LIST) || !(ATisEmpty(k_10))))
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
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if(((ATgetType(l_10) == AT_LIST) && !(ATisEmpty(l_10))))
        {
          v_8 = ATgetFirst((ATermList) l_10);
          w_8 = (ATerm) ATgetNext((ATermList) l_10);
        }
      else
        _fail(t);
      {
        ATerm m_10 = ATgetArgument(t, 1);
        if(((ATgetType(m_10) == AT_LIST) && !(ATisEmpty(m_10))))
          {
            x_8 = ATgetFirst((ATermList) m_10);
            y_8 = (ATerm) ATgetNext((ATermList) m_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_8, x_8), (ATerm) ATmakeAppl(sym__2, w_8, y_8));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      h_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_9), h_9);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm q_9 = NULL,s_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_9;
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm u_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_9);
      }
    else
      {
        t = p_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_10 = ATgetArgument(t, 0);
            s_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_9, s_9);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
      {
        ATerm h_0 = NULL,o_0 = NULL,p_0 = NULL,c_1 = NULL;
        t = SSLgetAnnotations(r_10);
        h_0 = t;
        t = s_10;
        t = v_81(t);
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_10, p_0);
        t = genzip_4_0(a_0, b_0, f_0, j_0, t);
        o_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, o_0, t_10);
        c_1 = t;
        t = SSLsetAnnotations(c_1, h_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_10 = ATgetArgument(t, 0);
          t_10 = ATgetArgument(t, 1);
          n_10 = ATgetArgument(t, 2);
          {
            ATerm k_2 = NULL,r_2 = NULL,v_2 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(r_10);
            k_2 = t;
            t = t_10;
            t = v_81(t);
            v_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_10, v_2);
            t = genzip_4_0(m_0, q_0, x_0, z_0, t);
            r_2 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, s_10, r_2, n_10);
            d_1 = t;
            t = SSLsetAnnotations(d_1, k_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              s_10 = ATgetArgument(t, 0);
              t_10 = ATgetArgument(t, 1);
              n_10 = ATgetArgument(t, 2);
              o_10 = ATgetArgument(t, 3);
              {
                ATerm a_5 = NULL,f_5 = NULL,h_5 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(r_10);
                a_5 = t;
                t = t_10;
                t = v_81(t);
                h_5 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_10, h_5);
                t = genzip_4_0(i_1, j_1, k_1, l_1, t);
                f_5 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_10, f_5, n_10, o_10);
                e_1 = t;
                t = SSLsetAnnotations(e_1, a_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  s_10 = ATgetArgument(t, 0);
                  t_10 = ATgetArgument(t, 1);
                  n_10 = ATgetArgument(t, 2);
                  o_10 = ATgetArgument(t, 3);
                  {
                    ATerm g_8 = NULL,s_8 = NULL,t_8 = NULL,g_1 = NULL;
                    t = SSLgetAnnotations(r_10);
                    g_8 = t;
                    t = t_10;
                    t = v_81(t);
                    t_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_10, t_8);
                    t = genzip_4_0(m_1, r_1, t_1, u_1, t);
                    s_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, s_10, s_8, n_10, o_10);
                    g_1 = t;
                    t = SSLsetAnnotations(g_1, g_8);
                  }
                }
              else
                {
                  ATerm w_10 = NULL,a_11 = NULL,h_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      s_10 = ATgetArgument(t, 0);
                      t_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_10);
                  w_10 = t;
                  t = s_10;
                  t = v_81(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_11 = ATgetFirst((ATermList) t);
                      {
                        ATerm x_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, a_11, t_10);
                  h_1 = t;
                  t = SSLsetAnnotations(h_1, w_10);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm y_81 (ATerm), ATerm t)
{
  ATerm b_16 = NULL,g_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
      {
        ATerm k_11 = NULL,n_11 = NULL,o_11 = NULL,n_1 = NULL;
        t = SSLgetAnnotations(l_16);
        k_11 = t;
        t = m_16;
        t = w_81(t);
        n_11 = t;
        t = n_16;
        t = w_81(t);
        o_11 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, n_11, o_11);
        n_1 = t;
        t = SSLsetAnnotations(n_1, k_11);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_16 = ATgetArgument(t, 0);
          n_16 = ATgetArgument(t, 1);
          b_16 = ATgetArgument(t, 2);
          {
            ATerm i_12 = NULL,o_12 = NULL,p_12 = NULL,z_12 = NULL,o_1 = NULL;
            t = SSLgetAnnotations(l_16);
            i_12 = t;
            t = m_16;
            t = y_81(t);
            o_12 = t;
            t = n_16;
            t = y_81(t);
            p_12 = t;
            t = b_16;
            t = w_81(t);
            z_12 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, o_12, p_12, z_12);
            o_1 = t;
            t = SSLsetAnnotations(o_1, i_12);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              m_16 = ATgetArgument(t, 0);
              n_16 = ATgetArgument(t, 1);
              b_16 = ATgetArgument(t, 2);
              g_16 = ATgetArgument(t, 3);
              {
                ATerm p_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,q_1 = NULL;
                t = SSLgetAnnotations(l_16);
                p_13 = t;
                t = m_16;
                t = y_81(t);
                y_13 = t;
                t = n_16;
                t = y_81(t);
                z_13 = t;
                t = b_16;
                t = y_81(t);
                a_14 = t;
                t = g_16;
                t = w_81(t);
                b_14 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, y_13, z_13, a_14, b_14);
                q_1 = t;
                t = SSLsetAnnotations(q_1, p_13);
              }
            }
          else
            {
              ATerm w_14 = NULL,z_14 = NULL,a_15 = NULL,s_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  m_16 = ATgetArgument(t, 0);
                  n_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_16);
              w_14 = t;
              t = m_16;
              t = y_81(t);
              z_14 = t;
              t = n_16;
              t = w_81(t);
              a_15 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, z_14, a_15);
              s_1 = t;
              t = SSLsetAnnotations(s_1, w_14);
            }
        }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm u_16 = NULL;
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_16 = ATgetArgument(t, 0);
          {
            ATerm b_11 = ATgetArgument(t, 1);
          }
          {
            ATerm c_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_10);
      t = u_16;
    }
  else
    {
      t = y_10;
      if(match_cons(t, sym_SDefT_4))
        {
          u_16 = ATgetArgument(t, 0);
          {
            ATerm d_11 = ATgetArgument(t, 1);
          }
          {
            ATerm e_11 = ATgetArgument(t, 2);
          }
          {
            ATerm f_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = u_16;
    }
  return(t);
}
static ATerm i_5 (ATerm d_21, ATerm c_21, ATerm t)
{
  t = d_21;
  t = map_1_0(v_1, t);
  return(t);
}
ATerm SVar_1_0 (ATerm m_65 (ATerm), ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,j_17 = NULL,n_2 = NULL;
  j_17 = t;
  if(match_cons(t, sym_SVar_1))
    {
      c_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_17);
  b_17 = t;
  t = c_17;
  t = m_65(t);
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, d_17);
  n_2 = t;
  t = SSLsetAnnotations(n_2, b_17);
  return(t);
}
static ATerm s_5 (ATerm p_102 (ATerm), ATerm q_102 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t_47, ATerm s_47, ATerm r_47, ATerm t)
{
  static ATerm w_1 (ATerm t)
  {
    ATerm l_17 = NULL;
    l_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_17, r_47);
    t = p_102(t);
    return(t);
  }
  static ATerm x_1 (ATerm t)
  {
    ATerm m_17 = NULL;
    m_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_17, s_47);
    t = p_102(t);
    return(t);
  }
  t = t_47;
  t = q_102(w_1, x_1, _id, t);
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
      ATerm g_11 = ATgetArgument(t, 0);
      if(((ATgetType(g_11) != AT_LIST) || !(ATisEmpty(g_11))))
        _fail(t);
      {
        ATerm h_11 = ATgetArgument(t, 1);
        if(((ATgetType(h_11) != AT_LIST) || !(ATisEmpty(h_11))))
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
  ATerm y_17 = NULL,a_18 = NULL,e_18 = NULL,h_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
        {
          y_17 = ATgetFirst((ATermList) i_11);
          a_18 = (ATerm) ATgetNext((ATermList) i_11);
        }
      else
        _fail(t);
      {
        ATerm j_11 = ATgetArgument(t, 1);
        if(((ATgetType(j_11) == AT_LIST) && !(ATisEmpty(j_11))))
          {
            e_18 = ATgetFirst((ATermList) j_11);
            h_18 = (ATerm) ATgetNext((ATermList) j_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_17, e_18), (ATerm) ATmakeAppl(sym__2, a_18, h_18));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm i_18 = NULL,k_18 = NULL;
  if(match_cons(t, sym__2))
    {
      i_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_18), i_18);
  return(t);
}
static ATerm w_5 (ATerm j_102 (ATerm), ATerm k_102 (ATerm (ATerm), ATerm), ATerm l_47, ATerm o_47, ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,t_17 = NULL,u_17 = NULL,w_17 = NULL;
  t = l_47;
  t = j_102(t);
  p_17 = t;
  t = map_1_0(new_0_0, t);
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_17, q_17);
  t = genzip_4_0(y_1, z_1, a_2, _id, t);
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_17, o_47);
  t = conc_0_0(t);
  t_17 = t;
  t = l_47;
  {
    static ATerm b_2 (ATerm t)
    {
      t = q_17;
      return(t);
    }
    t = k_102(b_2, t);
  }
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_17, o_47, t_17);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  w_18 = t;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_18 = ATgetFirst((ATermList) t);
      a_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_18;
  if(match_cons(t, sym__2))
    {
      u_18 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_18;
            if((x_18 != t))
              {
                _fail(t);
              }
            t = v_18;
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            t = (ATerm) ATmakeAppl(sym__2, x_18, a_19);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, x_18, a_19);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  static ATerm t_20 (ATerm t)
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_102(t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        {
          ATerm n_20 = NULL,o_20 = NULL,s_20 = NULL;
          static ATerm c_2 (ATerm t)
          {
            ATerm l_15 = NULL;
            l_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_15, not_null(s_20));
            t = t_20(t);
            return(t);
          }
          n_20 = t;
          if(match_cons(t, sym__2))
            {
              o_20 = ATgetArgument(t, 0);
              if(((s_20 != NULL) && (s_20 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                s_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_20;
          t = SRTS_all(c_2, t);
        }
      }
    return(t);
  }
  t = t_20(t);
  return(t);
}
ATerm rename_4_0 (ATerm e_102 (ATerm (ATerm), ATerm), ATerm f_102 (ATerm), ATerm g_102 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_102 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm a_21 = NULL;
  static ATerm n_22 (ATerm t)
  {
    static ATerm d_2 (ATerm t)
    {
      ATerm y_21 = NULL,c_22 = NULL,d_22 = NULL;
      y_21 = t;
      if(match_cons(t, sym__2))
        {
          c_22 = ATgetArgument(t, 0);
          d_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_2 (ATerm t)
            {
              ATerm m_22 = NULL;
              m_22 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_22, d_22);
              t = lookup_0_0(t);
              return(t);
            }
            t = c_22;
            t = e_102(e_2, t);
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
              t = y_21;
              t = w_5(f_102, h_102, c_22, d_22, t);
              if(match_cons(t, sym__3))
                {
                  t_15 = ATgetArgument(t, 0);
                  u_15 = ATgetArgument(t, 1);
                  v_15 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = s_5(n_22, g_102, t_15, u_15, v_15, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(d_2, t);
    return(t);
  }
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_21, (ATerm) ATempty);
  t = n_22(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_11 = ATgetArgument(t, 0);
      if(((ATgetType(t_11) != AT_LIST) || !(ATisEmpty(t_11))))
        _fail(t);
      {
        ATerm u_11 = ATgetArgument(t, 1);
        if(((ATgetType(u_11) != AT_LIST) || !(ATisEmpty(u_11))))
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
  ATerm g_18 = NULL,j_18 = NULL,m_18 = NULL,n_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      if(((ATgetType(v_11) == AT_LIST) && !(ATisEmpty(v_11))))
        {
          g_18 = ATgetFirst((ATermList) v_11);
          j_18 = (ATerm) ATgetNext((ATermList) v_11);
        }
      else
        _fail(t);
      {
        ATerm w_11 = ATgetArgument(t, 1);
        if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
          {
            m_18 = ATgetFirst((ATermList) w_11);
            n_18 = (ATerm) ATgetNext((ATermList) w_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_18, m_18), (ATerm) ATmakeAppl(sym__2, j_18, n_18));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL;
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_18), o_18);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm r_18 = NULL,t_18 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_18;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_19);
      }
    else
      {
        t = x_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_12 = ATgetArgument(t, 0);
            t_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_19, t_18);
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_12 = ATgetArgument(t, 0);
      if(((ATgetType(b_12) != AT_LIST) || !(ATisEmpty(b_12))))
        _fail(t);
      {
        ATerm c_12 = ATgetArgument(t, 1);
        if(((ATgetType(c_12) != AT_LIST) || !(ATisEmpty(c_12))))
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
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_12 = ATgetArgument(t, 0);
      if(((ATgetType(d_12) == AT_LIST) && !(ATisEmpty(d_12))))
        {
          p_20 = ATgetFirst((ATermList) d_12);
          q_20 = (ATerm) ATgetNext((ATermList) d_12);
        }
      else
        _fail(t);
      {
        ATerm e_12 = ATgetArgument(t, 1);
        if(((ATgetType(e_12) == AT_LIST) && !(ATisEmpty(e_12))))
          {
            r_20 = ATgetFirst((ATermList) e_12);
            u_20 = (ATerm) ATgetNext((ATermList) e_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_20, r_20), (ATerm) ATmakeAppl(sym__2, q_20, u_20));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL;
  if(match_cons(t, sym__2))
    {
      w_20 = ATgetArgument(t, 0);
      x_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_20), w_20);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm z_20 = NULL,e_21 = NULL,f_21 = NULL;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_20;
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_12);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_21);
      }
    else
      {
        t = f_12;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_12 = ATgetArgument(t, 0);
            e_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_21, e_21);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  y_26 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_27 = ATgetArgument(t, 0);
      c_27 = ATgetArgument(t, 1);
      {
        ATerm h_16 = NULL,k_16 = NULL,q_2 = NULL;
        t = SSLgetAnnotations(y_26);
        h_16 = t;
        t = b_27;
        t = r_81(t);
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_16, c_27);
        q_2 = t;
        t = SSLsetAnnotations(q_2, h_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          b_27 = ATgetArgument(t, 0);
          c_27 = ATgetArgument(t, 1);
          d_27 = ATgetArgument(t, 2);
          e_27 = ATgetArgument(t, 3);
          {
            ATerm r_17 = NULL,c_18 = NULL,d_18 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(y_26);
            r_17 = t;
            t = d_27;
            t = r_81(t);
            d_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_27, d_18);
            t = genzip_4_0(f_2, g_2, h_2, i_2, t);
            c_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, b_27, c_27, c_18, e_27);
            s_2 = t;
            t = SSLsetAnnotations(s_2, r_17);
          }
        }
      else
        {
          ATerm z_19 = NULL,g_20 = NULL,h_20 = NULL,t_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              b_27 = ATgetArgument(t, 0);
              c_27 = ATgetArgument(t, 1);
              d_27 = ATgetArgument(t, 2);
              e_27 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_26);
          z_19 = t;
          t = d_27;
          t = r_81(t);
          h_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_27, h_20);
          t = genzip_4_0(j_2, l_2, m_2, o_2, t);
          g_20 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, b_27, c_27, g_20, e_27);
          t_2 = t;
          t = SSLsetAnnotations(t_2, z_19);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
  n_33 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_33 = ATgetArgument(t, 0);
      j_33 = ATgetArgument(t, 1);
      {
        ATerm a_22 = NULL,g_22 = NULL,h_22 = NULL,z_2 = NULL;
        t = SSLgetAnnotations(n_33);
        a_22 = t;
        t = o_33;
        t = u_81(t);
        g_22 = t;
        t = j_33;
        t = s_81(t);
        h_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_22, h_22);
        z_2 = t;
        t = SSLsetAnnotations(z_2, a_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          o_33 = ATgetArgument(t, 0);
          j_33 = ATgetArgument(t, 1);
          l_33 = ATgetArgument(t, 2);
          m_33 = ATgetArgument(t, 3);
          {
            ATerm v_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,a_3 = NULL;
            t = SSLgetAnnotations(n_33);
            v_22 = t;
            t = o_33;
            t = u_81(t);
            a_23 = t;
            t = j_33;
            t = u_81(t);
            b_23 = t;
            t = l_33;
            t = u_81(t);
            c_23 = t;
            t = m_33;
            t = s_81(t);
            d_23 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_23, b_23, c_23, d_23);
            a_3 = t;
            t = SSLsetAnnotations(a_3, v_22);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              o_33 = ATgetArgument(t, 0);
              j_33 = ATgetArgument(t, 1);
              l_33 = ATgetArgument(t, 2);
              m_33 = ATgetArgument(t, 3);
              {
                ATerm l_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,c_3 = NULL;
                t = SSLgetAnnotations(n_33);
                l_24 = t;
                t = o_33;
                t = u_81(t);
                a_25 = t;
                t = j_33;
                t = u_81(t);
                b_25 = t;
                t = l_33;
                t = u_81(t);
                c_25 = t;
                t = m_33;
                t = s_81(t);
                d_25 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, a_25, b_25, c_25, d_25);
                c_3 = t;
                t = SSLsetAnnotations(c_3, l_24);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  o_33 = ATgetArgument(t, 0);
                  {
                    ATerm e_26 = NULL,j_26 = NULL,d_3 = NULL;
                    t = SSLgetAnnotations(n_33);
                    e_26 = t;
                    t = o_33;
                    t = s_81(t);
                    j_26 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, j_26);
                    d_3 = t;
                    t = SSLsetAnnotations(d_3, e_26);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      o_33 = ATgetArgument(t, 0);
                      {
                        ATerm z_26 = NULL,f_27 = NULL,f_3 = NULL;
                        t = SSLgetAnnotations(n_33);
                        z_26 = t;
                        t = o_33;
                        t = s_81(t);
                        f_27 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, f_27);
                        f_3 = t;
                        t = SSLsetAnnotations(f_3, z_26);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          o_33 = ATgetArgument(t, 0);
                          {
                            ATerm s_27 = NULL,w_27 = NULL,g_3 = NULL;
                            t = SSLgetAnnotations(n_33);
                            s_27 = t;
                            t = o_33;
                            t = s_81(t);
                            w_27 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, w_27);
                            g_3 = t;
                            t = SSLsetAnnotations(g_3, s_27);
                          }
                        }
                      else
                        {
                          ATerm c_28 = NULL,e_28 = NULL,h_3 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              o_33 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(n_33);
                          c_28 = t;
                          t = o_33;
                          t = s_81(t);
                          e_28 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, e_28);
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
  ATerm x_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_34);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            {
              ATerm z_34 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  z_34 = ATgetArgument(t, 0);
                  c_35 = ATgetArgument(t, 1);
                  d_35 = ATgetArgument(t, 2);
                  e_35 = ATgetArgument(t, 3);
                  t = d_35;
                  t = map_1_0(w_2, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_34 = ATgetArgument(t, 0);
                      c_35 = ATgetArgument(t, 1);
                      d_35 = ATgetArgument(t, 2);
                      e_35 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_35;
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
  ATerm n_35 = NULL;
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_35 = ATgetArgument(t, 0);
          {
            ATerm s_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_12);
      t = n_35;
    }
  else
    {
      t = q_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_35;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm w_35 = NULL;
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_35 = ATgetArgument(t, 0);
          {
            ATerm v_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_12);
      t = w_35;
    }
  else
    {
      t = t_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_35;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm a_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_36);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
        ATerm y_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_13);
          }
        else
          {
            t = y_12;
            {
              ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_36 = ATgetArgument(t, 0);
                  d_36 = ATgetArgument(t, 1);
                  e_36 = ATgetArgument(t, 2);
                  f_36 = ATgetArgument(t, 3);
                  t = e_36;
                  t = map_1_0(j_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_36 = ATgetArgument(t, 0);
                      d_36 = ATgetArgument(t, 1);
                      e_36 = ATgetArgument(t, 2);
                      f_36 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_36;
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
  ATerm m_36 = NULL;
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_36 = ATgetArgument(t, 0);
          {
            ATerm d_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_13);
      t = m_36;
    }
  else
    {
      t = b_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_36;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm a_37 = NULL;
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_37 = ATgetArgument(t, 0);
          {
            ATerm g_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_13);
      t = a_37;
    }
  else
    {
      t = e_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_37;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm e_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_37);
  return(t);
}
static ATerm o_3 (ATerm t)
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
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            {
              ATerm g_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_37 = ATgetArgument(t, 0);
                  j_37 = ATgetArgument(t, 1);
                  k_37 = ATgetArgument(t, 2);
                  l_37 = ATgetArgument(t, 3);
                  t = k_37;
                  t = map_1_0(r_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_37 = ATgetArgument(t, 0);
                      j_37 = ATgetArgument(t, 1);
                      k_37 = ATgetArgument(t, 2);
                      l_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_37;
                  t = map_1_0(t_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm s_37 = NULL;
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_37 = ATgetArgument(t, 0);
          {
            ATerm n_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_13);
      t = s_37;
    }
  else
    {
      t = l_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_37;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm k_38 = NULL;
  ATerm o_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_38 = ATgetArgument(t, 0);
          {
            ATerm r_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_13);
      t = k_38;
    }
  else
    {
      t = o_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_38;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_38);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_38 = ATgetArgument(t, 0);
                  r_38 = ATgetArgument(t, 1);
                  s_38 = ATgetArgument(t, 2);
                  t_38 = ATgetArgument(t, 3);
                  t = s_38;
                  t = map_1_0(y_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_38 = ATgetArgument(t, 0);
                      r_38 = ATgetArgument(t, 1);
                      s_38 = ATgetArgument(t, 2);
                      t_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_38;
                  t = map_1_0(z_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm a_39 = NULL;
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_39 = ATgetArgument(t, 0);
          {
            ATerm c_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_13);
      t = a_39;
    }
  else
    {
      t = w_13;
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
static ATerm z_3 (ATerm t)
{
  ATerm j_39 = NULL;
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_39 = ATgetArgument(t, 0);
          {
            ATerm f_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_14);
      t = j_39;
    }
  else
    {
      t = d_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_39;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm v_34 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      v_34 = ATgetArgument(t, 0);
      t = v_34;
      t = free_vars_3_0(p_2, u_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          v_34 = ATgetArgument(t, 0);
          t = v_34;
          t = free_vars_3_0(y_2, i_3, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              v_34 = ATgetArgument(t, 0);
              t = v_34;
              t = free_vars_3_0(m_3, o_3, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  v_34 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = v_34;
              t = free_vars_3_0(u_3, w_3, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm m_5 (ATerm t_97 (ATerm), ATerm m_44, ATerm l_44, ATerm t)
{
  static ATerm m_40 (ATerm t)
  {
    ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
    f_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_44;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_40 = ATgetFirst((ATermList) t);
            h_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_40;
              {
                static ATerm d_4 (ATerm t)
                {
                  t = l_44;
                  return(t);
                }
                t = n_5(t_97, d_4, g_40, h_40, t);
              }
              t = m_40(t);
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              {
                ATerm s_28 = NULL,d_29 = NULL,v_3 = NULL;
                t = SSLgetAnnotations(f_40);
                s_28 = t;
                t = h_40;
                t = m_40(t);
                d_29 = t;
                t = (ATerm) ATinsert(CheckATermList(d_29), g_40);
                v_3 = t;
                t = SSLsetAnnotations(v_3, s_28);
              }
            }
        }
      }
    return(t);
  }
  t = m_44;
  t = m_40(t);
  return(t);
}
ATerm foldr_3_0 (ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_40;
      t = q_100(t);
    }
  else
    {
      ATerm u_40 = NULL,v_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_40 = ATgetFirst((ATermList) t);
          r_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_40;
      t = s_100(t);
      u_40 = t;
      t = r_40;
      t = foldr_3_0(q_100, r_100, s_100, t);
      v_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_40, v_40);
      t = r_100(t);
    }
  return(t);
}
static ATerm n_5 (ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm q_44, ATerm p_44, ATerm t)
{
  t = x_97(t);
  {
    static ATerm e_4 (ATerm t)
    {
      ATerm b_41 = NULL;
      b_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_44, b_41);
      t = w_97(t);
      return(t);
    }
    t = fetch_1_0(e_4, t);
  }
  t = p_44;
  return(t);
}
static ATerm o_5 (ATerm o_97 (ATerm), ATerm k_44, ATerm j_44, ATerm t)
{
  static ATerm j_42 (ATerm t)
  {
    ATerm z_41 = NULL,f_42 = NULL,g_42 = NULL;
    z_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_41;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_42 = ATgetFirst((ATermList) t);
            g_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_41;
              {
                static ATerm f_4 (ATerm t)
                {
                  t = j_44;
                  return(t);
                }
                t = n_5(o_97, f_4, f_42, g_42, t);
              }
              t = j_42(t);
              LocalPopChoice(j_14);
            }
          else
            {
              t = i_14;
              {
                ATerm v_29 = NULL,y_29 = NULL,x_3 = NULL;
                t = SSLgetAnnotations(z_41);
                v_29 = t;
                t = g_42;
                t = j_42(t);
                y_29 = t;
                t = (ATerm) ATinsert(CheckATermList(y_29), f_42);
                x_3 = t;
                t = SSLsetAnnotations(x_3, v_29);
              }
            }
        }
      }
    return(t);
  }
  t = k_44;
  t = j_42(t);
  return(t);
}
ATerm at_end_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  static ATerm h_43 (ATerm t)
  {
    ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
    g_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_43 = ATgetFirst((ATermList) t);
        f_43 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_30 = NULL,y_30 = NULL,c_4 = NULL;
          t = SSLgetAnnotations(g_43);
          q_30 = t;
          t = f_43;
          t = h_43(t);
          y_30 = t;
          t = (ATerm) ATinsert(CheckATermList(y_30), e_43);
          c_4 = t;
          t = SSLsetAnnotations(c_4, q_30);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_43;
        t = q_95(t);
      }
    return(t);
  }
  t = h_43(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_42;
    }
  else
    {
      static ATerm h_4 (ATerm t)
      {
        t = not_null(o_42);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_42 = ATgetFirst((ATermList) t);
          if(((o_42 != NULL) && (o_42 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_42;
      t = at_end_1_0(h_4, t);
    }
  return(t);
}
static ATerm d_44 (ATerm p_43, ATerm t)
{
  ATerm q_43 = NULL;
  t = SSL_explode_term(p_43);
  if(match_cons(t, sym__2))
    {
      ATerm k_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_43;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_43 = NULL,v_43 = NULL,w_43 = NULL;
  w_43 = t;
  if(match_cons(t, sym__2))
    {
      s_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
      {
        ATerm l_14 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_4 (ATerm t)
            {
              t = v_43;
              return(t);
            }
            t = s_43;
            t = at_end_1_0(i_4, t);
            LocalPopChoice(m_14);
          }
        else
          {
            t = l_14;
            t = d_44(w_43, t);
          }
      }
    }
  else
    {
      t = d_44(w_43, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t)
{
  static ATerm v_44 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_87(t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
          ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,s_44 = NULL,g_4 = NULL;
          t = e_87(t);
          s_44 = t;
          if(match_cons(t, sym__2))
            {
              f_44 = ATgetArgument(t, 0);
              g_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_44);
          e_44 = t;
          t = f_44;
          t = g_87(t);
          h_44 = t;
          t = g_44;
          t = v_44(t);
          i_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_44, i_44);
          g_4 = t;
          t = SSLsetAnnotations(g_4, e_44);
          t = f_87(t);
        }
      }
    return(t);
  }
  t = v_44(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      if(((ATgetType(p_14) != AT_LIST) || !(ATisEmpty(p_14))))
        _fail(t);
      {
        ATerm q_14 = ATgetArgument(t, 1);
        if(((ATgetType(q_14) != AT_LIST) || !(ATisEmpty(q_14))))
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
  ATerm h_45 = NULL,i_45 = NULL,l_45 = NULL,m_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      if(((ATgetType(r_14) == AT_LIST) && !(ATisEmpty(r_14))))
        {
          h_45 = ATgetFirst((ATermList) r_14);
          i_45 = (ATerm) ATgetNext((ATermList) r_14);
        }
      else
        _fail(t);
      {
        ATerm s_14 = ATgetArgument(t, 1);
        if(((ATgetType(s_14) == AT_LIST) && !(ATisEmpty(s_14))))
          {
            l_45 = ATgetFirst((ATermList) s_14);
            m_45 = (ATerm) ATgetNext((ATermList) s_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_45, l_45), (ATerm) ATmakeAppl(sym__2, i_45, m_45));
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL;
  if(match_cons(t, sym__2))
    {
      n_45 = ATgetArgument(t, 0);
      o_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_45), n_45);
  return(t);
}
static ATerm q_5 (ATerm l_598, ATerm q_598, ATerm t_57, ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,e_45 = NULL,f_45 = NULL;
  t = SSL_explode_term(q_598);
  if(match_cons(t, sym__2))
    {
      x_44 = ATgetArgument(t, 0);
      e_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_598);
  if(match_cons(t, sym__2))
    {
      if((x_44 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      y_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_44, e_45);
  t = genzip_4_0(j_4, m_4, n_4, _id, t);
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_45, t_57);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_89 (ATerm), ATerm e_89 (ATerm), ATerm t)
{
  static ATerm q_45 (ATerm t)
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_89(t);
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = e_89(t);
        t = q_45(t);
      }
    return(t);
  }
  t = q_45(t);
  return(t);
}
ATerm for_3_0 (ATerm g_89 (ATerm), ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm t)
{
  t = g_89(t);
  t = while_not_2_0(h_89, i_89, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm h_46 = NULL;
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_46);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,k_4 = NULL;
  l_46 = t;
  if(match_cons(t, sym__2))
    {
      j_46 = ATgetArgument(t, 0);
      k_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_46);
  i_46 = t;
  t = k_46;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_46, k_46);
  k_4 = t;
  t = SSLsetAnnotations(k_4, i_46);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
  x_47 = t;
  if(match_cons(t, sym__2))
    {
      y_47 = ATgetArgument(t, 0);
      z_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_48 = ATgetFirst((ATermList) t);
      b_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_48(y_47, z_47, x_47, t);
            LocalPopChoice(x_14);
          }
        else
          {
            t = v_14;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_47), a_48), b_48);
          }
      }
    }
  else
    {
      t = l_48(y_47, z_47, x_47, t);
    }
  return(t);
}
static ATerm l_48 (ATerm o_46, ATerm p_46, ATerm q_46, ATerm t)
{
  ATerm r_46 = NULL,y_46 = NULL,l_4 = NULL,b_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  t = SSLgetAnnotations(q_46);
  r_46 = t;
  t = p_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_47 = ATgetFirst((ATermList) t);
      g_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_47;
  if(match_cons(t, sym__2))
    {
      e_47 = ATgetArgument(t, 0);
      f_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_14 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_47;
        if((e_47 != t))
          {
            _fail(t);
          }
        t = g_47;
        LocalPopChoice(b_15);
      }
    else
      {
        t = y_14;
        t = p_46;
        t = q_5(e_47, f_47, g_47, t);
      }
  }
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_46, y_46);
  l_4 = t;
  t = SSLsetAnnotations(l_4, r_46);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm k_48 = NULL;
  if(match_cons(t, sym__2))
    {
      k_48 = ATgetArgument(t, 0);
      if((k_48 != ATgetArgument(t, 1)))
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
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_4, p_4, q_4, t);
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
        ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
        f_48 = t;
        if(match_cons(t, sym__2))
          {
            g_48 = ATgetArgument(t, 0);
            h_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_48;
        t = o_5(r_4, g_48, h_48, t);
      }
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  if(match_cons(t, sym__2))
    {
      v_31 = ATgetArgument(t, 0);
      w_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(z_4, v_31, w_31, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm y_31 = NULL;
  if(match_cons(t, sym__2))
    {
      y_31 = ATgetArgument(t, 0);
      if((y_31 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  if(match_cons(t, sym__2))
    {
      i_32 = ATgetArgument(t, 0);
      j_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(d_5, i_32, j_32, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm k_32 = NULL;
  if(match_cons(t, sym__2))
    {
      k_32 = ATgetArgument(t, 0);
      if((k_32 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm j_104 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm l_49 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_104(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        {
          ATerm g_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_48 = NULL,q_48 = NULL,k_31 = NULL,l_31 = NULL;
              n_48 = t;
              t = i_104(t);
              q_48 = t;
              t = n_48;
              {
                static ATerm t_4 (ATerm t)
                {
                  ATerm u_48 = NULL;
                  t = l_49(t);
                  u_48 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_48, q_48);
                  t = diff_0_0(t);
                  return(t);
                }
                t = j_104(t_4, l_49, u_4, t);
              }
              l_31 = t;
              t = SSL_explode_term(l_31);
              if(match_cons(t, sym__2))
                {
                  ATerm i_15 = ATgetArgument(t, 0);
                  k_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_31;
              t = foldr_3_0(w_4, x_4, _id, t);
              LocalPopChoice(h_15);
            }
          else
            {
              t = g_15;
              {
                ATerm c_32 = NULL,e_32 = NULL;
                e_32 = t;
                t = SSL_explode_term(e_32);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_15 = ATgetArgument(t, 0);
                    c_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_32;
                t = foldr_3_0(b_5, c_5, l_49, t);
              }
            }
        }
      }
    return(t);
  }
  t = l_49(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm l_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_50);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm k_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = k_15;
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            {
              ATerm q_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_50 = ATgetArgument(t, 0);
                  u_50 = ATgetArgument(t, 1);
                  v_50 = ATgetArgument(t, 2);
                  w_50 = ATgetArgument(t, 3);
                  t = v_50;
                  t = map_1_0(j_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_50 = ATgetArgument(t, 0);
                      u_50 = ATgetArgument(t, 1);
                      v_50 = ATgetArgument(t, 2);
                      w_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_50;
                  t = map_1_0(l_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm h_51 = NULL;
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_51 = ATgetArgument(t, 0);
          {
            ATerm r_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_15);
      t = h_51;
    }
  else
    {
      t = p_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_51;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm v_51 = NULL;
  ATerm s_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_51 = ATgetArgument(t, 0);
          {
            ATerm x_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_15);
      t = v_51;
    }
  else
    {
      t = s_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_51;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_49 = NULL,f_50 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      f_50 = ATgetArgument(t, 0);
      t = f_50;
      if(match_cons(t, sym_Rule_3))
        {
          w_49 = ATgetArgument(t, 0);
          {
            ATerm y_15 = ATgetArgument(t, 1);
          }
          {
            ATerm z_15 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_49;
      t = free_vars_3_0(e_5, g_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          f_50 = ATgetArgument(t, 0);
          {
            ATerm a_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_50;
    }
  return(t);
}
ATerm Var_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,s_4 = NULL;
  i_52 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_52);
  f_52 = t;
  t = g_52;
  t = b_62(t);
  h_52 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_52);
  s_4 = t;
  t = SSLsetAnnotations(s_4, f_52);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      {
        ATerm v_52 = NULL,w_52 = NULL,z_52 = NULL,a_53 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            v_52 = ATgetArgument(t, 0);
            w_52 = ATgetArgument(t, 1);
            z_52 = ATgetArgument(t, 2);
            a_53 = ATgetArgument(t, 3);
            t = z_52;
            t = map_1_0(x_5, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                v_52 = ATgetArgument(t, 0);
                w_52 = ATgetArgument(t, 1);
                z_52 = ATgetArgument(t, 2);
                a_53 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = z_52;
            t = map_1_0(a_6, t);
          }
      }
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm m_53 = NULL;
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_53 = ATgetArgument(t, 0);
          {
            ATerm i_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_16);
      t = m_53;
    }
  else
    {
      t = e_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_53;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm x_53 = NULL;
  ATerm j_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_53 = ATgetArgument(t, 0);
          {
            ATerm p_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_16);
      t = x_53;
    }
  else
    {
      t = j_16;
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
static ATerm q_6 (ATerm t)
{
  ATerm b_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
  b_54 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_54 = ATgetArgument(t, 0);
      j_54 = ATgetArgument(t, 1);
      t = b_54;
      t = i_5(i_54, j_54, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_54 = ATgetArgument(t, 0);
          j_54 = ATgetArgument(t, 1);
          k_54 = ATgetArgument(t, 2);
          t = j_54;
          t = map_1_0(u_6, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              i_54 = ATgetArgument(t, 0);
              j_54 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, i_54);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  i_54 = ATgetArgument(t, 0);
                  j_54 = ATgetArgument(t, 1);
                  k_54 = ATgetArgument(t, 2);
                  l_54 = ATgetArgument(t, 3);
                  t = j_54;
                  t = map_1_0(w_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_54 = ATgetArgument(t, 0);
                      j_54 = ATgetArgument(t, 1);
                      k_54 = ATgetArgument(t, 2);
                      l_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_54;
                  t = map_1_0(y_6, t);
                }
            }
        }
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm w_54 = NULL;
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_54 = ATgetArgument(t, 0);
          {
            ATerm s_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_16);
      t = w_54;
    }
  else
    {
      t = q_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_54;
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm j_55 = NULL;
  ATerm t_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_55 = ATgetArgument(t, 0);
          {
            ATerm w_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_16);
      t = j_55;
    }
  else
    {
      t = t_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_55;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm t_55 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_55 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_16);
      t = t_55;
    }
  else
    {
      t = x_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_55;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, p_5, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, q_6, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm b_6 (ATerm w_28, ATerm x_28, ATerm t)
{
  ATerm y_55 = NULL;
  t = SSL_fputc(w_28, x_28);
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_55);
  return(t);
}
static ATerm c_6 (ATerm o_27, ATerm p_27, ATerm t)
{
  ATerm f_56 = NULL;
  t = SSL_write_term_to_stream_text(o_27, p_27);
  f_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_56);
  return(t);
}
static ATerm e_6 (ATerm b_90 (ATerm), ATerm d_192, ATerm u_27, ATerm t)
{
  ATerm i_56 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_192, term_a_17);
  t = i_6(t);
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_56, u_27);
  t = b_90(t);
  t = fclose_0_0(t);
  t = u_27;
  return(t);
}
static ATerm d_6 (ATerm k_27, ATerm l_27, ATerm t)
{
  ATerm j_56 = NULL;
  t = SSL_write_term_to_stream_baf(k_27, l_27);
  j_56 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_56);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      if(match_cons(e_17, sym_Stream_1))
        {
          t_56 = ATgetArgument(e_17, 0);
        }
      else
        _fail(t);
      u_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(t_56, u_56, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm v_56 = NULL,x_56 = NULL,y_56 = NULL,b_57 = NULL,c_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      if(match_cons(f_17, sym_Stream_1))
        {
          b_57 = ATgetArgument(f_17, 0);
        }
      else
        _fail(t);
      c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(b_57, c_57, t);
  v_56 = t;
  t = term_g_17;
  x_56 = t;
  t = v_56;
  if(match_cons(t, sym_Stream_1))
    {
      y_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_17, v_56);
  t = b_6(x_56, y_56, t);
  return(t);
}
ATerm output_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL;
  t = h_107(t);
  l_56 = t;
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_56 = NULL,n_56 = NULL;
        t = term_k_17;
        m_56 = t;
        t = term_n_17;
        n_56 = t;
        t = term_o_17;
        t = o_6(m_56, n_56, t);
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        t = term_s_17;
      }
  }
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_56, l_56);
  {
    ATerm v_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_56 = NULL,s_56 = NULL;
        t = term_k_17;
        o_56 = t;
        t = term_z_17;
        s_56 = t;
        t = term_b_18;
        t = o_6(o_56, s_56, t);
        t = (ATerm) ATmakeAppl(sym__2, k_56, l_56);
        LocalPopChoice(x_17);
        if(match_cons(t, sym__2))
          {
            ATerm f_18 = ATgetArgument(t, 0);
            ATerm l_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(c_7, k_56, l_56, t);
      }
    else
      {
        t = v_17;
        if(match_cons(t, sym__2))
          {
            ATerm q_18 = ATgetArgument(t, 0);
            ATerm s_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(e_7, k_56, l_56, t);
      }
  }
  return(t);
}
static ATerm w_57 (ATerm l_57, ATerm t)
{
  t = SSL_fclose(l_57);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_57 = NULL,u_57 = NULL;
  u_57 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_57 = ATgetArgument(t, 0);
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_57);
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            t = w_57(u_57, t);
          }
      }
    }
  else
    {
      t = w_57(u_57, t);
    }
  return(t);
}
static ATerm f_6 (ATerm q_27, ATerm t)
{
  t = SSL_read_term_from_stream(q_27);
  return(t);
}
static ATerm g_6 (ATerm p_53, ATerm q_53, ATerm t)
{
  t = SSL_strcat(p_53, q_53);
  return(t);
}
static ATerm h_6 (ATerm y_28, ATerm z_28, ATerm t)
{
  ATerm x_57 = NULL;
  t = SSL_fopen(y_28, z_28);
  x_57 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_57);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_58 = NULL;
  t = SSL_stdin_stream();
  a_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_58);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_58 = NULL;
  t = SSL_stdout_stream();
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_58);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_58 = NULL;
  t = SSL_stderr_stream();
  c_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_58);
  return(t);
}
static ATerm f_60 (ATerm i_58, ATerm t)
{
  ATerm l_58 = NULL;
  t = SSL_explode_term(i_58);
  if(match_cons(t, sym__2))
    {
      ATerm e_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_19 = ATgetArgument(t, 1);
        if(((ATgetType(f_19) == AT_LIST) && !(ATisEmpty(f_19))))
          {
            l_58 = ATgetFirst((ATermList) f_19);
            {
              ATerm g_19 = (ATerm) ATgetNext((ATermList) f_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_58;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_58;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_58;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_58;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_60 (ATerm q_58, ATerm r_58, ATerm s_58, ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,c_59 = NULL,v_4 = NULL;
  t = SSLgetAnnotations(s_58);
  x_58 = t;
  t = q_58;
  if(match_cons(t, sym_Path_1))
    {
      c_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_59, r_58);
  v_4 = t;
  t = SSLsetAnnotations(v_4, x_58);
  if(match_cons(t, sym__2))
    {
      v_58 = ATgetArgument(t, 0);
      w_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(v_58, w_58, t);
  return(t);
}
static ATerm i_60 (ATerm h_59, ATerm i_59, ATerm j_59, ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL,q_59 = NULL,y_4 = NULL;
  t = SSLgetAnnotations(j_59);
  m_59 = t;
  t = SSL_is_string(h_59);
  q_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_59, i_59);
  y_4 = t;
  t = SSLsetAnnotations(y_4, m_59);
  if(match_cons(t, sym__2))
    {
      k_59 = ATgetArgument(t, 0);
      l_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(k_59, l_59, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm y_59 = NULL,b_60 = NULL,c_60 = NULL;
  y_59 = t;
  if(match_cons(t, sym__2))
    {
      b_60 = ATgetArgument(t, 0);
      c_60 = ATgetArgument(t, 1);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_60(y_59, t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm j_19 = t;
              int k_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_60(b_60, c_60, y_59, t);
                  LocalPopChoice(k_19);
                }
              else
                {
                  t = j_19;
                  t = i_60(b_60, c_60, y_59, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_60(y_59, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL,z_60 = NULL;
  z_60 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_60, term_n_19);
        t = i_6(t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        {
          ATerm y_32 = NULL,z_32 = NULL;
          t = term_o_19;
          z_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_19, z_60);
          t = g_6(z_32, z_60, t);
          y_32 = t;
          t = SSL_perror(y_32);
          _fail(t);
        }
      }
  }
  o_60 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(p_60, t);
  n_60 = t;
  t = o_60;
  t = fclose_0_0(t);
  t = n_60;
  return(t);
}
ATerm input_1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_61 = NULL,g_61 = NULL;
      t = term_k_17;
      d_61 = t;
      t = term_r_19;
      g_61 = t;
      t = term_s_19;
      t = o_6(d_61, g_61, t);
      LocalPopChoice(q_19);
    }
  else
    {
      t = p_19;
      t = term_t_19;
    }
  t = ReadFromFile_0_0(t);
  t = i_107(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
  h_61 = t;
  t = term_u_19;
  t = whoami_0_0(t);
  i_61 = t;
  t = term_v_19;
  k_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_19), i_61), term_w_19);
  l_61 = t;
  t = SSL_printnl(k_61, l_61);
  t = term_y_19;
  j_61 = t;
  t = SSL_exit(j_61);
  t = h_61;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm n_61 = NULL;
  n_61 = t;
  if(match_string(t, "-k"))
    {
      t = n_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_61;
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL;
  o_61 = t;
  t = SSL_string_to_int(o_61);
  p_61 = t;
  t = term_a_20;
  q_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_20, p_61);
  t = r_6(q_61, p_61, t);
  t = o_61;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_7, h_7, i_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm s_61 = NULL;
  s_61 = t;
  if(match_string(t, "-S"))
    {
      t = s_61;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_61;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL;
  t = term_c_20;
  t_61 = t;
  t = term_d_20;
  u_61 = t;
  t = term_e_20;
  t = r_6(t_61, u_61, t);
  t = term_f_20;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL;
  v_61 = t;
  t = SSL_string_to_int(v_61);
  w_61 = t;
  t = term_c_20;
  x_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_20, w_61);
  t = r_6(x_61, w_61, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_61);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_j_20;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL;
  t = term_k_20;
  y_61 = t;
  t = term_u_19;
  z_61 = t;
  t = term_l_20;
  t = r_6(y_61, z_61, t);
  t = term_m_20;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_v_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_7, l_7, m_7, t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = y_20;
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_7, o_7, p_7, t);
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            t = Option_3_0(q_7, r_7, s_7, t);
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm r_32, ATerm s_32, ATerm t)
{
  ATerm a_62 = NULL,c_62 = NULL;
  t = term_k_17;
  a_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_17, r_32, s_32);
  t = lookup_table_0_1(a_62, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(r_32, s_32, c_62, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_17, r_32, s_32);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_62 = NULL,h_62 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL;
      t = term_u_19;
      t = e_0(t);
      i_62 = t;
      t = term_i_21;
      j_62 = t;
      t = term_j_21;
      k_62 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_21, term_j_21, i_62);
      t = p_6(j_62, k_62, i_62, t);
      _fail(t);
    }
  else
    {
      ATerm p_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_62 = ATgetFirst((ATermList) t);
          h_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_62;
      t = c_0(t);
      t = term_u_19;
      t = d_0(t);
      p_62 = t;
      t = (ATerm) ATinsert(CheckATermList(h_62), p_62);
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm r_62 = NULL;
  r_62 = t;
  if(match_string(t, "-o"))
    {
      t = r_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_62;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL;
  s_62 = t;
  t = term_n_17;
  t_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_17, s_62);
  t = r_6(t_62, s_62, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_62);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_7, u_7, v_7, t);
  return(t);
}
static ATerm p_6 (ATerm b_38, ATerm c_38, ATerm a_38, ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  v_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_38, c_38);
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_21 = ATgetArgument(t, 0);
            ATerm o_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_38, c_38);
        t = o_6(b_38, c_38, t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = (ATerm) ATempty;
      }
  }
  w_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_38, c_38, (ATerm) ATinsert(CheckATermList(w_62), a_38));
  t = lookup_table_0_1(b_38, t);
  z_62 = t;
  t = (ATerm) ATinsert(CheckATermList(w_62), a_38);
  x_62 = t;
  t = z_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(c_38, x_62, y_62, t);
  t = v_62;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL;
      t = term_u_19;
      t = n_0(t);
      k_63 = t;
      t = term_i_21;
      l_63 = t;
      t = term_j_21;
      m_63 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_21, term_j_21, k_63);
      t = p_6(l_63, m_63, k_63, t);
      _fail(t);
    }
  else
    {
      ATerm q_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_63 = ATgetFirst((ATermList) t);
          h_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_63;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_63 = ATgetFirst((ATermList) t);
          j_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_63;
      t = k_0(t);
      t = i_63;
      t = l_0(t);
      q_63 = t;
      t = (ATerm) ATinsert(CheckATermList(j_63), q_63);
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm s_63 = NULL;
  s_63 = t;
  if(match_string(t, "-i"))
    {
      t = s_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_63;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL;
  t_63 = t;
  t = term_r_19;
  u_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_19, t_63);
  t = r_6(u_63, t_63, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_63);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_7, x_7, y_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_19;
  t = whoami_0_0(t);
  v_63 = t;
  t = term_v_19;
  x_63 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_21), v_63);
  y_63 = t;
  t = SSL_printnl(x_63, y_63);
  t = term_y_19;
  w_63 = t;
  t = SSL_exit(w_63);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL;
  t = term_k_17;
  z_63 = t;
  t = term_r_21;
  a_64 = t;
  t = term_s_21;
  t = o_6(z_63, a_64, t);
  return(t);
}
static ATerm j_6 (ATerm j_35, ATerm k_35, ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_35, k_35);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      t = SSL_addr(j_35, k_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
  c_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_64;
      t = o_100(t);
    }
  else
    {
      ATerm h_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_64 = ATgetFirst((ATermList) t);
          e_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_64;
      t = foldr_2_0(o_100, p_100, t);
      h_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_64, h_64);
      t = p_100(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_d_20;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  if(match_cons(t, sym__2))
    {
      y_33 = ATgetArgument(t, 0);
      z_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(y_33, z_33, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_64 = NULL,i_33 = NULL,k_33 = NULL;
  t = times_0_0(t);
  k_33 = t;
  t = SSL_explode_term(k_33);
  if(match_cons(t, sym__2))
    {
      ATerm v_21 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_33;
  t = foldr_2_0(z_7, a_8, t);
  k_64 = t;
  t = SSL_TicksToSeconds(k_64);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
  v_64 = t;
  if(match_cons(t, sym__2))
    {
      w_64 = ATgetArgument(t, 0);
      x_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_64;
        if((w_64 != t))
          {
            _fail(t);
          }
        t = v_64;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = (ATerm) ATmakeAppl(sym__2, w_64, x_64);
        {
          ATerm z_21 = t;
          int b_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_64, x_64);
              LocalPopChoice(b_22);
            }
          else
            {
              t = z_21;
              t = SSL_gtr(w_64, x_64);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_64, x_64);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm b_65 = NULL;
  b_65 = t;
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL;
        t = term_k_17;
        e_65 = t;
        t = term_c_20;
        f_65 = t;
        t = term_i_22;
        t = o_6(e_65, f_65, t);
        d_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_65, term_y_19);
        t = geq_0_0(t);
        t = b_65;
        t = r_91(t);
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        t = b_65;
      }
  }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL,k_65 = NULL,l_65 = NULL;
  t = run_time_0_0(t);
  h_65 = t;
  t = term_u_19;
  t = whoami_0_0(t);
  i_65 = t;
  t = term_v_19;
  k_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_22), h_65), term_j_22), i_65);
  l_65 = t;
  t = SSL_printnl(k_65, l_65);
  t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_22), h_65), term_j_22), i_65));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_20;
  n_65 = t;
  t = SSL_exit(n_65);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL;
  y_65 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_65;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_65 = ATgetArgument(t, 0);
          {
            ATerm l_34 = NULL,k_5 = NULL;
            t = SSLgetAnnotations(y_65);
            l_34 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_65);
            k_5 = t;
            t = SSLsetAnnotations(k_5, l_34);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_65;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm l_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_65 = NULL,r_65 = NULL;
      t = term_k_17;
      q_65 = t;
      t = term_p_22;
      r_65 = t;
      t = term_q_22;
      t = o_6(q_65, r_65, t);
      LocalPopChoice(o_22);
    }
  else
    {
      t = l_22;
      t = fetch_1_0(c_8, t);
    }
  t = y_106(t);
  return(t);
}
static ATerm s_6 (ATerm i_41, ATerm j_41, ATerm k_41, ATerm t)
{
  ATerm a_66 = NULL;
  t = SSL_hashtable_put(k_41, i_41, j_41);
  a_66 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_66);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_39, ATerm t)
{
  ATerm j_66 = NULL;
  t = table_hashtable_0_0(t);
  j_66 = t;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_34 = NULL;
        t = j_66;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_6(n_39, r_34, t);
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        {
          ATerm p_36 = NULL;
          t = n_39;
          t = table_create_0_0(t);
          t = j_66;
          if(match_cons(t, sym_Hashtable_1))
            {
              p_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_6(n_39, p_36, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_41, ATerm r_41, ATerm t)
{
  ATerm m_66 = NULL;
  t = SSL_hashtable_create(q_41, r_41);
  m_66 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_66);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,r_66 = NULL,s_66 = NULL;
  n_66 = t;
  t = term_t_22;
  r_66 = t;
  t = term_u_22;
  s_66 = t;
  t = n_66;
  t = new_hashtable_0_2(r_66, s_66, t);
  o_66 = t;
  t = n_66;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(n_66, o_66, p_66, t);
  t = n_66;
  return(t);
}
static ATerm l_6 (ATerm n_41, ATerm o_41, ATerm t)
{
  ATerm t_66 = NULL;
  t = SSL_hashtable_remove(o_41, n_41);
  t_66 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_66);
  return(t);
}
static ATerm m_6 (ATerm s_41, ATerm t)
{
  ATerm u_66 = NULL;
  t = SSL_hashtable_destroy(s_41);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_66);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_66 = NULL;
  t = SSL_table_hashtable();
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_66);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL;
  w_66 = t;
  t = table_hashtable_0_0(t);
  x_66 = t;
  t = lookup_table_0_1(w_66, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(z_66, t);
  t = x_66;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(w_66, y_66, t);
  t = w_66;
  return(t);
}
ATerm map_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  static ATerm o_67 (ATerm t)
  {
    ATerm l_67 = NULL,m_67 = NULL,n_67 = NULL;
    l_67 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_67;
      }
    else
      {
        ATerm h_37 = NULL,w_37 = NULL,z_37 = NULL,v_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_67 = ATgetFirst((ATermList) t);
            n_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_67);
        h_37 = t;
        t = m_67;
        t = z_94(t);
        w_37 = t;
        t = n_67;
        t = o_67(t);
        z_37 = t;
        t = (ATerm) ATinsert(CheckATermList(z_37), w_37);
        v_5 = t;
        t = SSLsetAnnotations(v_5, h_37);
      }
    return(t);
  }
  t = o_67(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_67 = ATgetFirst((ATermList) t);
      s_67 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_67 = NULL,x_67 = NULL;
        static ATerm d_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_67)), not_null(x_67));
          return(t);
        }
        t = s_67;
        t = i_0(t);
        if(((w_67 != NULL) && (w_67 != t)))
          _fail(t);
        else
          w_67 = t;
        t = r_67;
        t = g_0(t);
        if(((x_67 != NULL) && (x_67 != t)))
          _fail(t);
        else
          x_67 = t;
        t = s_67;
        t = reverse_acc_2_0(g_0, d_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_19;
      t = i_0(t);
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,z_5 = NULL;
  f_68 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_68);
  d_68 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_68);
  z_5 = t;
  t = SSLsetAnnotations(z_5, d_68);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm h_68 = NULL;
  h_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_68), term_w_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL;
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_68 = NULL,c_68 = NULL;
      t = term_k_17;
      b_68 = t;
      t = term_r_21;
      c_68 = t;
      t = term_s_21;
      t = o_6(b_68, c_68, t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      t = fetch_1_0(e_8, t);
    }
  t = term_z_22;
  t = echo_0_0(t);
  t = term_i_21;
  z_67 = t;
  t = term_j_21;
  a_68 = t;
  t = term_e_23;
  t = o_6(z_67, a_68, t);
  t = reverse_acc_2_0(_id, f_8, t);
  t = map_1_0(h_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  static ATerm g_69 (ATerm t)
  {
    ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL;
    d_69 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_69 = ATgetFirst((ATermList) t);
        f_69 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_23 = t;
      int g_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_39 = NULL,d_40 = NULL,k_6 = NULL;
          t = SSLgetAnnotations(d_69);
          r_39 = t;
          t = e_69;
          t = j_95(t);
          d_40 = t;
          t = (ATerm) ATinsert(CheckATermList(f_69), d_40);
          k_6 = t;
          t = SSLsetAnnotations(k_6, r_39);
          LocalPopChoice(g_23);
        }
      else
        {
          t = f_23;
          {
            ATerm d_41 = NULL,g_41 = NULL,n_6 = NULL;
            t = SSLgetAnnotations(d_69);
            d_41 = t;
            t = f_69;
            t = g_69(t);
            g_41 = t;
            t = (ATerm) ATinsert(CheckATermList(g_41), e_69);
            n_6 = t;
            t = SSLsetAnnotations(n_6, d_41);
          }
        }
    }
    return(t);
  }
  t = g_69(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
  k_69 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_69;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_23 = ATgetFirst((ATermList) t);
                ATerm k_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_69;
          }
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        t = (ATerm) ATinsert(ATempty, k_69);
      }
  }
  l_69 = t;
  t = term_s_17;
  m_69 = t;
  t = SSL_printnl(m_69, l_69);
  t = k_69;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL;
  t = term_k_17;
  q_69 = t;
  t = term_r_21;
  r_69 = t;
  t = term_s_21;
  t = o_6(q_69, r_69, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_6 (ATerm l_41, ATerm m_41, ATerm t)
{
  t = SSL_hashtable_get(m_41, l_41);
  return(t);
}
static ATerm o_6 (ATerm u_39, ATerm v_39, ATerm t)
{
  ATerm s_69 = NULL;
  t = lookup_table_0_1(u_39, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(v_39, s_69, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm u_69 = NULL,v_69 = NULL;
  t = term_l_23;
  u_69 = t;
  t = term_u_19;
  v_69 = t;
  t = term_m_23;
  t = r_6(u_69, v_69, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_n_23;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL;
  t = term_l_23;
  y_69 = t;
  t = term_u_19;
  z_69 = t;
  t = term_m_23;
  t = r_6(y_69, z_69, t);
  t = term_o_23;
  w_69 = t;
  t = term_u_19;
  x_69 = t;
  t = term_p_23;
  t = r_6(w_69, x_69, t);
  t = term_q_23;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_r_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_8, j_8, k_8, t);
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      t = Option_3_0(l_8, m_8, n_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,v_6 = NULL;
  f_70 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_70 = ATgetFirst((ATermList) t);
      c_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_70);
  a_70 = t;
  t = b_70;
  t = q_68(t);
  d_70 = t;
  t = c_70;
  t = r_68(t);
  e_70 = t;
  t = (ATerm) ATinsert(CheckATermList(e_70), d_70);
  v_6 = t;
  t = SSLsetAnnotations(v_6, a_70);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_108 (ATerm), ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,p_70 = NULL,q_70 = NULL,x_6 = NULL;
  k_70 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_23;
        t = w_108(t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
      }
  }
  t = k_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_70 = ATgetFirst((ATermList) t);
      n_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_70);
  l_70 = t;
  t = term_r_21;
  q_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_21, m_70);
  t = r_6(q_70, m_70, t);
  t = n_70;
  {
    static ATerm a_71 (ATerm t)
    {
      ATerm x_23 = t;
      int y_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_23 = t;
          int a_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_70 = NULL;
              t_70 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_70;
              LocalPopChoice(a_24);
            }
          else
            {
              t = z_23;
              t = w_108(t);
              t = Cons_2_0(_id, a_71, t);
            }
          LocalPopChoice(y_23);
        }
      else
        {
          t = x_23;
          {
            ATerm w_70 = NULL,x_70 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_70 = ATgetFirst((ATermList) t);
                x_70 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_70), (ATerm) ATmakeAppl(sym_Undefined_1, w_70));
          }
        }
      return(t);
    }
    t = a_71(t);
  }
  p_70 = t;
  t = (ATerm) ATinsert(CheckATermList(p_70), (ATerm) ATmakeAppl(sym_Program_1, m_70));
  x_6 = t;
  t = SSLsetAnnotations(x_6, l_70);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm n_71 = NULL;
  n_71 = t;
  if(match_string(t, "--help"))
    {
      t = n_71;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_71;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_71;
        }
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL;
  t = term_p_22;
  o_71 = t;
  t = term_u_19;
  p_71 = t;
  t = term_b_24;
  t = r_6(o_71, p_71, t);
  t = term_c_24;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_d_24;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_108 (ATerm), ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL;
  h_71 = t;
  t = term_i_21;
  i_71 = t;
  t = term_e_24;
  t = lookup_table_0_1(i_71, t);
  m_71 = t;
  t = term_j_21;
  j_71 = t;
  t = (ATerm) ATempty;
  k_71 = t;
  t = m_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(j_71, k_71, l_71, t);
  t = h_71;
  {
    static ATerm o_8 (ATerm t)
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_108(t);
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          {
            ATerm h_24 = t;
            int i_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_8, q_8, r_8, t);
                LocalPopChoice(i_24);
              }
            else
              {
                t = h_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_8, t);
  }
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_72 = NULL;
        a_72 = t;
        {
          ATerm m_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_42 = NULL;
              t = a_72;
              {
                ATerm o_24 = t;
                int p_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_42 = NULL,v_42 = NULL;
                    t = term_k_17;
                    t_42 = t;
                    t = term_p_22;
                    v_42 = t;
                    t = term_q_22;
                    t = o_6(t_42, v_42, t);
                    LocalPopChoice(p_24);
                  }
                else
                  {
                    t = o_24;
                    t = fetch_1_0(u_8, t);
                  }
              }
              t = a_72;
              t = default_system_usage_0_0(t);
              t = term_d_20;
              s_42 = t;
              t = SSL_exit(s_42);
              LocalPopChoice(n_24);
            }
          else
            {
              t = m_24;
              {
                ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
                t = term_k_17;
                m_43 = t;
                t = term_l_23;
                n_43 = t;
                t = term_q_24;
                t = o_6(m_43, n_43, t);
                t = a_72;
                t = default_system_about_0_0(t);
                t = term_d_20;
                l_43 = t;
                t = SSL_exit(l_43);
              }
            }
        }
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
              static ATerm z_8 (ATerm t)
              {
                ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL,z_6 = NULL;
                g_72 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_72 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_72);
                e_72 = t;
                t = f_72;
                if(((f_71 != NULL) && (f_71 != t)))
                  _fail(t);
                else
                  f_71 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_72);
                z_6 = t;
                t = SSLsetAnnotations(z_6, e_72);
                return(t);
              }
              t = fetch_1_0(z_8, t);
              t = term_v_19;
              c_72 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_71)), term_t_24);
              d_72 = t;
              t = SSL_printnl(c_72, d_72);
              t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_71)), term_t_24));
              t = default_system_usage_0_0(t);
              t = term_y_19;
              b_72 = t;
              t = SSL_exit(b_72);
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
            }
        }
      }
  }
  g_71 = t;
  t = term_i_21;
  t = table_destroy_0_0(t);
  t = g_71;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
  t = parse_options_1_0(a_107, t);
  l_72 = t;
  t = term_u_24;
  t = table_create_0_0(t);
  t = term_u_24;
  m_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_24, term_v_24, l_72);
  t = lookup_table_0_1(m_72, t);
  p_72 = t;
  t = term_v_24;
  n_72 = t;
  t = p_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(n_72, l_72, o_72, t);
  t = l_72;
  t = c_107(t);
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_107, t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        {
          ATerm y_24 = t;
          int z_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_107(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_24);
            }
          else
            {
              t = y_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            {
              ATerm i_25 = t;
              int j_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(c_9, d_9, e_9, t);
                  LocalPopChoice(j_25);
                }
              else
                {
                  t = i_25;
                  {
                    ATerm k_25 = t;
                    int l_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(l_25);
                      }
                    else
                      {
                        t = k_25;
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
static ATerm b_9 (ATerm t)
{
  t = input_1_0(f_9, t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL;
  t = term_z_17;
  r_72 = t;
  t = term_u_19;
  s_72 = t;
  t = term_m_25;
  t = r_6(r_72, s_72, t);
  t = term_n_25;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_o_25;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = output_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(a_9, default_usage_0_0, _id, b_9, t);
  return(t);
}
