#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_DynamicRules_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_RDecT_3;
Symbol sym_GenDynRules_1;
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
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
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_n_27;
ATerm term_h_27;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_i_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_c_25;
ATerm term_w_24;
ATerm term_n_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_u_19;
ATerm term_r_19;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_z_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_g_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_e_21);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_t_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_21);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_l_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_i_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_s_21);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_d_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_m_22);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_l_21);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_a_26, term_l_21);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_d_24, term_l_21);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym__3, term_l_22, term_m_22, (ATerm) ATempty);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_x_25);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_l_21);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm spaste_1_0 (ATerm z_83 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm k_5 (ATerm w_21, ATerm v_21, ATerm t);
ATerm SVar_1_0 (ATerm l_67 (ATerm), ATerm t);
static ATerm t_5 (ATerm c_105 (ATerm), ATerm d_105 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_49, ATerm d_49, ATerm c_49, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm x_5 (ATerm w_104 (ATerm), ATerm x_104 (ATerm (ATerm), ATerm), ATerm w_48, ATerm z_48, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm k_105 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm r_104 (ATerm (ATerm), ATerm), ATerm s_104 (ATerm), ATerm t_104 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_104 (ATerm (ATerm), ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm tpaste_1_0 (ATerm v_83 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm n_5 (ATerm y_99 (ATerm), ATerm x_45, ATerm w_45, ATerm t);
ATerm foldr_3_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t);
static ATerm o_5 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm b_46, ATerm a_46, ATerm t);
static ATerm p_5 (ATerm t_99 (ATerm), ATerm v_45, ATerm u_45, ATerm t);
ATerm at_end_1_0 (ATerm v_97 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm p_56 (ATerm z_55, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm r_5 (ATerm y_607, ATerm d_608, ATerm e_59, ATerm t);
ATerm while_not_2_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm t);
ATerm for_3_0 (ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm z_59 (ATerm m_58, ATerm n_58, ATerm o_58, ATerm t);
static ATerm h_5 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm free_vars_3_0 (ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm i_63 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm c_6 (ATerm w_29, ATerm x_29, ATerm t);
static ATerm d_6 (ATerm o_28, ATerm p_28, ATerm t);
static ATerm f_6 (ATerm f_92 (ATerm), ATerm i_196, ATerm u_28, ATerm t);
static ATerm e_6 (ATerm k_28, ATerm l_28, ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm output_1_0 (ATerm u_109 (ATerm), ATerm t);
static ATerm r_64 (ATerm l_64, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_6 (ATerm q_28, ATerm t);
static ATerm h_6 (ATerm a_55, ATerm b_55, ATerm t);
static ATerm i_6 (ATerm y_29, ATerm z_29, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_66 (ATerm b_65, ATerm t);
static ATerm d_66 (ATerm f_65, ATerm g_65, ATerm h_65, ATerm t);
static ATerm e_66 (ATerm p_65, ATerm q_65, ATerm r_65, ATerm t);
static ATerm j_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm v_109 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_6 (ATerm r_33, ATerm s_33, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_6 (ATerm b_39, ATerm c_39, ATerm a_39, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_6 (ATerm j_36, ATerm k_36, ATerm t);
ATerm foldr_2_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_93 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm need_help_1_0 (ATerm l_109 (ATerm), ATerm t);
static ATerm t_6 (ATerm t_42, ATerm u_42, ATerm v_42, ATerm t);
ATerm lookup_table_0_1 (ATerm n_40, ATerm t);
ATerm new_hashtable_0_2 (ATerm b_43, ATerm c_43, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_6 (ATerm y_42, ATerm z_42, ATerm t);
static ATerm n_6 (ATerm d_43, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm e_97 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_97 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_6 (ATerm w_42, ATerm x_42, ATerm t);
static ATerm p_6 (ATerm u_40, ATerm v_40, ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_70 (ATerm), ATerm v_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_111 (ATerm), ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
ATerm parse_options_1_0 (ATerm i_111 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm t_9 (ATerm t);
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
      ATerm w_9 = ATgetArgument(t, 0);
      if(((ATgetType(w_9) != AT_LIST) || !(ATisEmpty(w_9))))
        _fail(t);
      {
        ATerm x_9 = ATgetArgument(t, 1);
        if(((ATgetType(x_9) != AT_LIST) || !(ATisEmpty(x_9))))
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
      ATerm z_9 = ATgetArgument(t, 0);
      if(((ATgetType(z_9) == AT_LIST) && !(ATisEmpty(z_9))))
        {
          r_0 = ATgetFirst((ATermList) z_9);
          s_0 = (ATerm) ATgetNext((ATermList) z_9);
        }
      else
        _fail(t);
      {
        ATerm a_10 = ATgetArgument(t, 1);
        if(((ATgetType(a_10) == AT_LIST) && !(ATisEmpty(a_10))))
          {
            t_0 = ATgetFirst((ATermList) a_10);
            u_0 = (ATerm) ATgetNext((ATermList) a_10);
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
  ATerm y_0 = NULL,a_1 = NULL,b_1 = NULL,e_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym__2))
    {
      y_0 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_0;
  {
    ATerm b_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm f_10 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(e_10);
        t = (ATerm) ATmakeAppl(sym_SDef_3, i_1, a_1, b_1);
      }
    else
      {
        t = b_10;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm g_10 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
            e_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, a_1, b_1, e_1);
      }
  }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if(((ATgetType(h_10) != AT_LIST) || !(ATisEmpty(h_10))))
        _fail(t);
      {
        ATerm i_10 = ATgetArgument(t, 1);
        if(((ATgetType(i_10) != AT_LIST) || !(ATisEmpty(i_10))))
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
  ATerm a_3 = NULL,e_3 = NULL,h_3 = NULL,o_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if(((ATgetType(j_10) == AT_LIST) && !(ATisEmpty(j_10))))
        {
          a_3 = ATgetFirst((ATermList) j_10);
          e_3 = (ATerm) ATgetNext((ATermList) j_10);
        }
      else
        _fail(t);
      {
        ATerm k_10 = ATgetArgument(t, 1);
        if(((ATgetType(k_10) == AT_LIST) && !(ATisEmpty(k_10))))
          {
            h_3 = ATgetFirst((ATermList) k_10);
            o_3 = (ATerm) ATgetNext((ATermList) k_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_3, h_3), (ATerm) ATmakeAppl(sym__2, e_3, o_3));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm q_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__2))
    {
      q_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_3), q_3);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm u_3 = NULL,c_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      u_3 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3;
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_4);
      }
    else
      {
        t = l_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_10 = ATgetArgument(t, 0);
            c_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_4, c_4);
      }
  }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      if(((ATgetType(p_10) != AT_LIST) || !(ATisEmpty(p_10))))
        _fail(t);
      {
        ATerm q_10 = ATgetArgument(t, 1);
        if(((ATgetType(q_10) != AT_LIST) || !(ATisEmpty(q_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm q_5 = NULL,v_5 = NULL,y_5 = NULL,z_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_10 = ATgetArgument(t, 0);
      if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
        {
          q_5 = ATgetFirst((ATermList) r_10);
          v_5 = (ATerm) ATgetNext((ATermList) r_10);
        }
      else
        _fail(t);
      {
        ATerm s_10 = ATgetArgument(t, 1);
        if(((ATgetType(s_10) == AT_LIST) && !(ATisEmpty(s_10))))
          {
            y_5 = ATgetFirst((ATermList) s_10);
            z_5 = (ATerm) ATgetNext((ATermList) s_10);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_5, y_5), (ATerm) ATmakeAppl(sym__2, v_5, z_5));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL;
  if(match_cons(t, sym__2))
    {
      a_6 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_6), a_6);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm v_6 = NULL,y_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym__2))
    {
      v_6 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6;
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_10);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_6);
      }
    else
      {
        t = t_10;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_10 = ATgetArgument(t, 0);
            y_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_6, y_6);
      }
  }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_10 = ATgetArgument(t, 0);
      if(((ATgetType(x_10) != AT_LIST) || !(ATisEmpty(x_10))))
        _fail(t);
      {
        ATerm y_10 = ATgetArgument(t, 1);
        if(((ATgetType(y_10) != AT_LIST) || !(ATisEmpty(y_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm j_9 = NULL,p_9 = NULL,r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_10 = ATgetArgument(t, 0);
      if(((ATgetType(z_10) == AT_LIST) && !(ATisEmpty(z_10))))
        {
          j_9 = ATgetFirst((ATermList) z_10);
          p_9 = (ATerm) ATgetNext((ATermList) z_10);
        }
      else
        _fail(t);
      {
        ATerm a_11 = ATgetArgument(t, 1);
        if(((ATgetType(a_11) == AT_LIST) && !(ATisEmpty(a_11))))
          {
            r_9 = ATgetFirst((ATermList) a_11);
            s_9 = (ATerm) ATgetNext((ATermList) a_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_9, r_9), (ATerm) ATmakeAppl(sym__2, p_9, s_9));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  if(match_cons(t, sym__2))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_9), u_9);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm y_9 = NULL,c_10 = NULL,d_10 = NULL;
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9;
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_10);
      }
    else
      {
        t = b_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_11 = ATgetArgument(t, 0);
            c_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_10, c_10);
      }
  }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if(((ATgetType(f_11) != AT_LIST) || !(ATisEmpty(f_11))))
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
static ATerm y_1 (ATerm t)
{
  ATerm p_11 = NULL,y_11 = NULL,z_11 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
        {
          p_11 = ATgetFirst((ATermList) i_11);
          y_11 = (ATerm) ATgetNext((ATermList) i_11);
        }
      else
        _fail(t);
      {
        ATerm j_11 = ATgetArgument(t, 1);
        if(((ATgetType(j_11) == AT_LIST) && !(ATisEmpty(j_11))))
          {
            z_11 = ATgetFirst((ATermList) j_11);
            f_12 = (ATerm) ATgetNext((ATermList) j_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_11, z_11), (ATerm) ATmakeAppl(sym__2, y_11, f_12));
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_12), h_12);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm k_12 = NULL,q_12 = NULL,r_12 = NULL;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12;
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm o_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_11);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_12);
      }
    else
      {
        t = k_11;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_11 = ATgetArgument(t, 0);
            q_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_12, q_12);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm x_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
      {
        ATerm h_0 = NULL,o_0 = NULL,p_0 = NULL,c_1 = NULL;
        t = SSLgetAnnotations(b_12);
        h_0 = t;
        t = c_12;
        t = z_83(t);
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_12, p_0);
        t = genzip_4_0(a_0, b_0, f_0, j_0, t);
        o_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, o_0, d_12);
        c_1 = t;
        t = SSLsetAnnotations(c_1, h_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_12 = ATgetArgument(t, 0);
          d_12 = ATgetArgument(t, 1);
          a_12 = ATgetArgument(t, 2);
          {
            ATerm m_2 = NULL,r_2 = NULL,u_2 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(b_12);
            m_2 = t;
            t = d_12;
            t = z_83(t);
            u_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_12, u_2);
            t = genzip_4_0(m_0, q_0, x_0, z_0, t);
            r_2 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, c_12, r_2, a_12);
            d_1 = t;
            t = SSLsetAnnotations(d_1, m_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              c_12 = ATgetArgument(t, 0);
              d_12 = ATgetArgument(t, 1);
              a_12 = ATgetArgument(t, 2);
              x_11 = ATgetArgument(t, 3);
              {
                ATerm c_5 = NULL,i_5 = NULL,j_5 = NULL,f_1 = NULL;
                t = SSLgetAnnotations(b_12);
                c_5 = t;
                t = d_12;
                t = z_83(t);
                j_5 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_12, j_5);
                t = genzip_4_0(k_1, l_1, m_1, n_1, t);
                i_5 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_12, i_5, a_12, x_11);
                f_1 = t;
                t = SSLsetAnnotations(f_1, c_5);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  c_12 = ATgetArgument(t, 0);
                  d_12 = ATgetArgument(t, 1);
                  a_12 = ATgetArgument(t, 2);
                  x_11 = ATgetArgument(t, 3);
                  {
                    ATerm g_8 = NULL,y_8 = NULL,z_8 = NULL,g_1 = NULL;
                    t = SSLgetAnnotations(b_12);
                    g_8 = t;
                    t = d_12;
                    t = z_83(t);
                    z_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_12, z_8);
                    t = genzip_4_0(o_1, p_1, s_1, u_1, t);
                    y_8 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, c_12, y_8, a_12, x_11);
                    g_1 = t;
                    t = SSLsetAnnotations(g_1, g_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      c_12 = ATgetArgument(t, 0);
                      d_12 = ATgetArgument(t, 1);
                      a_12 = ATgetArgument(t, 2);
                      {
                        ATerm g_11 = NULL,m_11 = NULL,n_11 = NULL,h_1 = NULL;
                        t = SSLgetAnnotations(b_12);
                        g_11 = t;
                        t = d_12;
                        t = z_83(t);
                        n_11 = t;
                        t = (ATerm) ATmakeAppl(sym__2, d_12, n_11);
                        t = genzip_4_0(w_1, y_1, z_1, a_2, t);
                        m_11 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, c_12, m_11, a_12);
                        h_1 = t;
                        t = SSLsetAnnotations(h_1, g_11);
                      }
                    }
                  else
                    {
                      ATerm c_13 = NULL,g_13 = NULL,j_1 = NULL;
                      if(match_cons(t, sym_Rec_2))
                        {
                          c_12 = ATgetArgument(t, 0);
                          d_12 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(b_12);
                      c_13 = t;
                      t = c_12;
                      t = z_83(t);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          g_13 = ATgetFirst((ATermList) t);
                          {
                            ATerm r_11 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Rec_2, g_13, d_12);
                      j_1 = t;
                      t = SSLsetAnnotations(j_1, c_13);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  m_19 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
      {
        ATerm w_13 = NULL,z_13 = NULL,b_14 = NULL,q_1 = NULL;
        t = SSLgetAnnotations(m_19);
        w_13 = t;
        t = n_19;
        t = a_84(t);
        z_13 = t;
        t = o_19;
        t = a_84(t);
        b_14 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, z_13, b_14);
        q_1 = t;
        t = SSLsetAnnotations(q_1, w_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_19 = ATgetArgument(t, 0);
          o_19 = ATgetArgument(t, 1);
          l_19 = ATgetArgument(t, 2);
          {
            ATerm k_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,r_1 = NULL;
            t = SSLgetAnnotations(m_19);
            k_14 = t;
            t = n_19;
            t = c_84(t);
            p_14 = t;
            t = o_19;
            t = c_84(t);
            q_14 = t;
            t = l_19;
            t = a_84(t);
            r_14 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, p_14, q_14, r_14);
            r_1 = t;
            t = SSLsetAnnotations(r_1, k_14);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              n_19 = ATgetArgument(t, 0);
              o_19 = ATgetArgument(t, 1);
              l_19 = ATgetArgument(t, 2);
              k_19 = ATgetArgument(t, 3);
              {
                ATerm d_15 = NULL,v_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,t_1 = NULL;
                t = SSLgetAnnotations(m_19);
                d_15 = t;
                t = n_19;
                t = c_84(t);
                v_15 = t;
                t = o_19;
                t = c_84(t);
                z_15 = t;
                t = l_19;
                t = c_84(t);
                a_16 = t;
                t = k_19;
                t = a_84(t);
                b_16 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, v_15, z_15, a_16, b_16);
                t_1 = t;
                t = SSLsetAnnotations(t_1, d_15);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  n_19 = ATgetArgument(t, 0);
                  o_19 = ATgetArgument(t, 1);
                  l_19 = ATgetArgument(t, 2);
                  k_19 = ATgetArgument(t, 3);
                  {
                    ATerm s_16 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,v_1 = NULL;
                    t = SSLgetAnnotations(m_19);
                    s_16 = t;
                    t = n_19;
                    t = c_84(t);
                    b_17 = t;
                    t = o_19;
                    t = c_84(t);
                    c_17 = t;
                    t = l_19;
                    t = c_84(t);
                    d_17 = t;
                    t = k_19;
                    t = a_84(t);
                    e_17 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, b_17, c_17, d_17, e_17);
                    v_1 = t;
                    t = SSLsetAnnotations(v_1, s_16);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      n_19 = ATgetArgument(t, 0);
                      o_19 = ATgetArgument(t, 1);
                      l_19 = ATgetArgument(t, 2);
                      {
                        ATerm q_18 = NULL,x_18 = NULL,a_19 = NULL,b_19 = NULL,x_1 = NULL;
                        t = SSLgetAnnotations(m_19);
                        q_18 = t;
                        t = n_19;
                        t = c_84(t);
                        x_18 = t;
                        t = o_19;
                        t = c_84(t);
                        a_19 = t;
                        t = l_19;
                        t = c_84(t);
                        b_19 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, x_18, a_19, b_19);
                        x_1 = t;
                        t = SSLsetAnnotations(x_1, q_18);
                      }
                    }
                  else
                    {
                      ATerm y_19 = NULL,b_20 = NULL,c_20 = NULL,d_2 = NULL;
                      if(match_cons(t, sym_Rec_2))
                        {
                          n_19 = ATgetArgument(t, 0);
                          o_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(m_19);
                      y_19 = t;
                      t = n_19;
                      t = c_84(t);
                      b_20 = t;
                      t = o_19;
                      t = a_84(t);
                      c_20 = t;
                      t = (ATerm) ATmakeAppl(sym_Rec_2, b_20, c_20);
                      d_2 = t;
                      t = SSLsetAnnotations(d_2, y_19);
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm w_20 = NULL;
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_20 = ATgetArgument(t, 0);
          {
            ATerm u_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_11);
      t = w_20;
    }
  else
    {
      t = s_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_20;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm h_21 = NULL;
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_21 = ATgetArgument(t, 0);
          {
            ATerm e_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_11);
      t = h_21;
    }
  else
    {
      t = v_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_21;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm q_20 = NULL;
  ATerm g_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm l_12 = ATgetArgument(t, 0);
          q_20 = ATgetArgument(t, 1);
          {
            ATerm m_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_12);
      t = q_20;
      t = map_1_0(b_2, t);
    }
  else
    {
      t = g_12;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm n_12 = ATgetArgument(t, 0);
          q_20 = ATgetArgument(t, 1);
          {
            ATerm o_12 = ATgetArgument(t, 2);
          }
          {
            ATerm p_12 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = q_20;
      t = map_1_0(c_2, t);
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm p_22 = NULL;
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          p_22 = ATgetArgument(t, 0);
          {
            ATerm u_12 = ATgetArgument(t, 1);
          }
          {
            ATerm v_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_12);
      t = p_22;
    }
  else
    {
      t = s_12;
      if(match_cons(t, sym_SDefT_4))
        {
          p_22 = ATgetArgument(t, 0);
          {
            ATerm w_12 = ATgetArgument(t, 1);
          }
          {
            ATerm x_12 = ATgetArgument(t, 2);
          }
          {
            ATerm y_12 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = p_22;
    }
  return(t);
}
static ATerm k_5 (ATerm w_21, ATerm v_21, ATerm t)
{
  t = w_21;
  t = map_1_0(e_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm l_67 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,a_23 = NULL,b_23 = NULL,w_2 = NULL;
  b_23 = t;
  if(match_cons(t, sym_SVar_1))
    {
      y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_23);
  x_22 = t;
  t = y_22;
  t = l_67(t);
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, a_23);
  w_2 = t;
  t = SSLsetAnnotations(w_2, x_22);
  return(t);
}
static ATerm t_5 (ATerm c_105 (ATerm), ATerm d_105 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_49, ATerm d_49, ATerm c_49, ATerm t)
{
  static ATerm f_2 (ATerm t)
  {
    ATerm f_23 = NULL;
    f_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_23, c_49);
    t = c_105(t);
    return(t);
  }
  static ATerm g_2 (ATerm t)
  {
    ATerm m_23 = NULL;
    m_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_23, d_49);
    t = c_105(t);
    return(t);
  }
  t = e_49;
  t = d_105(f_2, g_2, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_12 = ATgetArgument(t, 0);
      if(((ATgetType(z_12) != AT_LIST) || !(ATisEmpty(z_12))))
        _fail(t);
      {
        ATerm a_13 = ATgetArgument(t, 1);
        if(((ATgetType(a_13) != AT_LIST) || !(ATisEmpty(a_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_13 = ATgetArgument(t, 0);
      if(((ATgetType(b_13) == AT_LIST) && !(ATisEmpty(b_13))))
        {
          p_24 = ATgetFirst((ATermList) b_13);
          q_24 = (ATerm) ATgetNext((ATermList) b_13);
        }
      else
        _fail(t);
      {
        ATerm d_13 = ATgetArgument(t, 1);
        if(((ATgetType(d_13) == AT_LIST) && !(ATisEmpty(d_13))))
          {
            r_24 = ATgetFirst((ATermList) d_13);
            s_24 = (ATerm) ATgetNext((ATermList) d_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_24, r_24), (ATerm) ATmakeAppl(sym__2, q_24, s_24));
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym__2))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_24), t_24);
  return(t);
}
static ATerm x_5 (ATerm w_104 (ATerm), ATerm x_104 (ATerm (ATerm), ATerm), ATerm w_48, ATerm z_48, ATerm t)
{
  ATerm f_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,o_24 = NULL;
  t = w_48;
  t = w_104(t);
  f_24 = t;
  t = map_1_0(new_0_0, t);
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_24, k_24);
  t = genzip_4_0(h_2, i_2, j_2, _id, t);
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_24, z_48);
  t = conc_0_0(t);
  l_24 = t;
  t = w_48;
  {
    static ATerm k_2 (ATerm t)
    {
      t = k_24;
      return(t);
    }
    t = x_104(k_2, t);
  }
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_24, z_48, l_24);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  g_25 = t;
  if(match_cons(t, sym__2))
    {
      h_25 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_25 = ATgetFirst((ATermList) t);
      m_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_25;
  if(match_cons(t, sym__2))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_25;
            if((h_25 != t))
              {
                _fail(t);
              }
            t = f_25;
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            t = (ATerm) ATmakeAppl(sym__2, h_25, m_25);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, h_25, m_25);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  static ATerm u_26 (ATerm t)
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_105(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        {
          ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
          static ATerm l_2 (ATerm t)
          {
            ATerm n_20 = NULL;
            n_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_20, not_null(t_26));
            t = u_26(t);
            return(t);
          }
          r_26 = t;
          if(match_cons(t, sym__2))
            {
              s_26 = ATgetArgument(t, 0);
              if(((t_26 != NULL) && (t_26 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                t_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_26;
          t = SRTS_all(l_2, t);
        }
      }
    return(t);
  }
  t = u_26(t);
  return(t);
}
ATerm rename_4_0 (ATerm r_104 (ATerm (ATerm), ATerm), ATerm s_104 (ATerm), ATerm t_104 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_104 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm a_27 = NULL;
  static ATerm w_27 (ATerm t)
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
      o_27 = t;
      if(match_cons(t, sym__2))
        {
          p_27 = ATgetArgument(t, 0);
          q_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_2 (ATerm t)
            {
              ATerm v_27 = NULL;
              v_27 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_27, q_27);
              t = lookup_0_0(t);
              return(t);
            }
            t = p_27;
            t = r_104(o_2, t);
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            {
              ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
              t = o_27;
              t = x_5(s_104, u_104, p_27, q_27, t);
              if(match_cons(t, sym__3))
                {
                  i_21 = ATgetArgument(t, 0);
                  j_21 = ATgetArgument(t, 1);
                  k_21 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = t_5(w_27, t_104, i_21, j_21, k_21, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(n_2, t);
    return(t);
  }
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_27, (ATerm) ATempty);
  t = w_27(t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_13 = ATgetArgument(t, 0);
      if(((ATgetType(l_13) != AT_LIST) || !(ATisEmpty(l_13))))
        _fail(t);
      {
        ATerm m_13 = ATgetArgument(t, 1);
        if(((ATgetType(m_13) != AT_LIST) || !(ATisEmpty(m_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm z_22 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_13 = ATgetArgument(t, 0);
      if(((ATgetType(n_13) == AT_LIST) && !(ATisEmpty(n_13))))
        {
          z_22 = ATgetFirst((ATermList) n_13);
          c_23 = (ATerm) ATgetNext((ATermList) n_13);
        }
      else
        _fail(t);
      {
        ATerm o_13 = ATgetArgument(t, 1);
        if(((ATgetType(o_13) == AT_LIST) && !(ATisEmpty(o_13))))
          {
            d_23 = ATgetFirst((ATermList) o_13);
            e_23 = (ATerm) ATgetNext((ATermList) o_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_22, d_23), (ATerm) ATmakeAppl(sym__2, c_23, e_23));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL;
  if(match_cons(t, sym__2))
    {
      g_23 = ATgetArgument(t, 0);
      h_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_23), g_23);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm j_23 = NULL,l_23 = NULL,n_23 = NULL;
  if(match_cons(t, sym__2))
    {
      j_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_23;
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_13);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_23);
      }
    else
      {
        t = p_13;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_13 = ATgetArgument(t, 0);
            l_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_23, l_23);
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_13 = ATgetArgument(t, 0);
      if(((ATgetType(t_13) != AT_LIST) || !(ATisEmpty(t_13))))
        _fail(t);
      {
        ATerm u_13 = ATgetArgument(t, 1);
        if(((ATgetType(u_13) != AT_LIST) || !(ATisEmpty(u_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm v_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_13 = ATgetArgument(t, 0);
      if(((ATgetType(v_13) == AT_LIST) && !(ATisEmpty(v_13))))
        {
          v_24 = ATgetFirst((ATermList) v_13);
          x_24 = (ATerm) ATgetNext((ATermList) v_13);
        }
      else
        _fail(t);
      {
        ATerm x_13 = ATgetArgument(t, 1);
        if(((ATgetType(x_13) == AT_LIST) && !(ATisEmpty(x_13))))
          {
            y_24 = ATgetFirst((ATermList) x_13);
            z_24 = (ATerm) ATgetNext((ATermList) x_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_24, y_24), (ATerm) ATmakeAppl(sym__2, x_24, z_24));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL;
  if(match_cons(t, sym__2))
    {
      a_25 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_25), a_25);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm d_25 = NULL,j_25 = NULL,o_25 = NULL;
  if(match_cons(t, sym__2))
    {
      d_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_25;
  {
    ATerm y_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_14);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_25);
      }
    else
      {
        t = y_13;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_14 = ATgetArgument(t, 0);
            j_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_25, j_25);
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_14 = ATgetArgument(t, 0);
      if(((ATgetType(e_14) != AT_LIST) || !(ATisEmpty(e_14))))
        _fail(t);
      {
        ATerm f_14 = ATgetArgument(t, 1);
        if(((ATgetType(f_14) != AT_LIST) || !(ATisEmpty(f_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm m_27 = NULL,t_27 = NULL,u_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      if(((ATgetType(g_14) == AT_LIST) && !(ATisEmpty(g_14))))
        {
          m_27 = ATgetFirst((ATermList) g_14);
          t_27 = (ATerm) ATgetNext((ATermList) g_14);
        }
      else
        _fail(t);
      {
        ATerm h_14 = ATgetArgument(t, 1);
        if(((ATgetType(h_14) == AT_LIST) && !(ATisEmpty(h_14))))
          {
            u_27 = ATgetFirst((ATermList) h_14);
            y_27 = (ATerm) ATgetNext((ATermList) h_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_27, u_27), (ATerm) ATmakeAppl(sym__2, t_27, y_27));
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL;
  if(match_cons(t, sym__2))
    {
      z_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_28), z_27);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm c_28 = NULL,e_28 = NULL,f_28 = NULL;
  if(match_cons(t, sym__2))
    {
      c_28 = ATgetArgument(t, 0);
      f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_28;
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_14);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_28);
      }
    else
      {
        t = i_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_14 = ATgetArgument(t, 0);
            e_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_28, e_28);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,b_36 = NULL;
  v_35 = t;
  if(match_cons(t, sym_Scope_2))
    {
      w_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
      {
        ATerm x_21 = NULL,b_22 = NULL,z_2 = NULL;
        t = SSLgetAnnotations(v_35);
        x_21 = t;
        t = w_35;
        t = v_83(t);
        b_22 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_22, x_35);
        z_2 = t;
        t = SSLsetAnnotations(z_2, x_21);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          w_35 = ATgetArgument(t, 0);
          x_35 = ATgetArgument(t, 1);
          y_35 = ATgetArgument(t, 2);
          {
            ATerm k_22 = NULL,o_22 = NULL,s_22 = NULL,b_3 = NULL;
            t = SSLgetAnnotations(v_35);
            k_22 = t;
            t = y_35;
            t = v_83(t);
            s_22 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_35, s_22);
            t = genzip_4_0(p_2, q_2, s_2, t_2, t);
            o_22 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, w_35, x_35, o_22);
            b_3 = t;
            t = SSLsetAnnotations(b_3, k_22);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              w_35 = ATgetArgument(t, 0);
              x_35 = ATgetArgument(t, 1);
              y_35 = ATgetArgument(t, 2);
              b_36 = ATgetArgument(t, 3);
              {
                ATerm b_24 = NULL,h_24 = NULL,i_24 = NULL,c_3 = NULL;
                t = SSLgetAnnotations(v_35);
                b_24 = t;
                t = y_35;
                t = v_83(t);
                i_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_35, i_24);
                t = genzip_4_0(v_2, x_2, y_2, f_3, t);
                h_24 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, w_35, x_35, h_24, b_36);
                c_3 = t;
                t = SSLsetAnnotations(c_3, b_24);
              }
            }
          else
            {
              ATerm w_26 = NULL,j_27 = NULL,k_27 = NULL,d_3 = NULL;
              if(match_cons(t, sym_RDefT_4))
                {
                  w_35 = ATgetArgument(t, 0);
                  x_35 = ATgetArgument(t, 1);
                  y_35 = ATgetArgument(t, 2);
                  b_36 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_35);
              w_26 = t;
              t = y_35;
              t = v_83(t);
              k_27 = t;
              t = (ATerm) ATmakeAppl(sym__2, y_35, k_27);
              t = genzip_4_0(g_3, i_3, j_3, t_3, t);
              j_27 = t;
              t = (ATerm) ATmakeAppl(sym_RDefT_4, w_35, x_35, j_27, b_36);
              d_3 = t;
              t = SSLsetAnnotations(d_3, w_26);
            }
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  r_43 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_43 = ATgetArgument(t, 0);
      j_43 = ATgetArgument(t, 1);
      {
        ATerm b_29 = NULL,e_29 = NULL,f_29 = NULL,k_3 = NULL;
        t = SSLgetAnnotations(r_43);
        b_29 = t;
        t = s_43;
        t = y_83(t);
        e_29 = t;
        t = j_43;
        t = w_83(t);
        f_29 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, e_29, f_29);
        k_3 = t;
        t = SSLsetAnnotations(k_3, b_29);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          s_43 = ATgetArgument(t, 0);
          j_43 = ATgetArgument(t, 1);
          k_43 = ATgetArgument(t, 2);
          {
            ATerm t_29 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(r_43);
            t_29 = t;
            t = s_43;
            t = y_83(t);
            e_30 = t;
            t = j_43;
            t = y_83(t);
            f_30 = t;
            t = k_43;
            t = y_83(t);
            g_30 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, e_30, f_30, g_30);
            l_3 = t;
            t = SSLsetAnnotations(l_3, t_29);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              s_43 = ATgetArgument(t, 0);
              j_43 = ATgetArgument(t, 1);
              k_43 = ATgetArgument(t, 2);
              q_43 = ATgetArgument(t, 3);
              {
                ATerm h_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,z_31 = NULL,m_3 = NULL;
                t = SSLgetAnnotations(r_43);
                h_31 = t;
                t = s_43;
                t = y_83(t);
                q_31 = t;
                t = j_43;
                t = y_83(t);
                r_31 = t;
                t = k_43;
                t = y_83(t);
                s_31 = t;
                t = q_43;
                t = w_83(t);
                z_31 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_31, r_31, s_31, z_31);
                m_3 = t;
                t = SSLsetAnnotations(m_3, h_31);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  s_43 = ATgetArgument(t, 0);
                  j_43 = ATgetArgument(t, 1);
                  k_43 = ATgetArgument(t, 2);
                  q_43 = ATgetArgument(t, 3);
                  {
                    ATerm n_32 = NULL,a_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,n_3 = NULL;
                    t = SSLgetAnnotations(r_43);
                    n_32 = t;
                    t = s_43;
                    t = y_83(t);
                    a_33 = t;
                    t = j_43;
                    t = y_83(t);
                    c_33 = t;
                    t = k_43;
                    t = y_83(t);
                    d_33 = t;
                    t = q_43;
                    t = w_83(t);
                    e_33 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, a_33, c_33, d_33, e_33);
                    n_3 = t;
                    t = SSLsetAnnotations(n_3, n_32);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      s_43 = ATgetArgument(t, 0);
                      {
                        ATerm z_33 = NULL,j_34 = NULL,p_3 = NULL;
                        t = SSLgetAnnotations(r_43);
                        z_33 = t;
                        t = s_43;
                        t = w_83(t);
                        j_34 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, j_34);
                        p_3 = t;
                        t = SSLsetAnnotations(p_3, z_33);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          s_43 = ATgetArgument(t, 0);
                          {
                            ATerm u_34 = NULL,x_34 = NULL,r_3 = NULL;
                            t = SSLgetAnnotations(r_43);
                            u_34 = t;
                            t = s_43;
                            t = w_83(t);
                            x_34 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, x_34);
                            r_3 = t;
                            t = SSLsetAnnotations(r_3, u_34);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              s_43 = ATgetArgument(t, 0);
                              {
                                ATerm n_35 = NULL,p_35 = NULL,w_3 = NULL;
                                t = SSLgetAnnotations(r_43);
                                n_35 = t;
                                t = s_43;
                                t = w_83(t);
                                p_35 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, p_35);
                                w_3 = t;
                                t = SSLsetAnnotations(w_3, n_35);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  s_43 = ATgetArgument(t, 0);
                                  {
                                    ATerm i_36 = NULL,m_36 = NULL,x_3 = NULL;
                                    t = SSLgetAnnotations(r_43);
                                    i_36 = t;
                                    t = s_43;
                                    t = w_83(t);
                                    m_36 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, m_36);
                                    x_3 = t;
                                    t = SSLsetAnnotations(x_3, i_36);
                                  }
                                }
                              else
                                {
                                  ATerm s_36 = NULL,u_36 = NULL,y_3 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      s_43 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(r_43);
                                  s_36 = t;
                                  t = s_43;
                                  t = w_83(t);
                                  u_36 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, u_36);
                                  y_3 = t;
                                  t = SSLsetAnnotations(y_3, s_36);
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
static ATerm v_3 (ATerm t)
{
  ATerm v_44 = NULL;
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_44 = ATgetArgument(t, 0);
          {
            ATerm s_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_14);
      t = v_44;
    }
  else
    {
      t = n_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_44;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm g_45 = NULL;
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_45 = ATgetArgument(t, 0);
          {
            ATerm v_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_14);
      t = g_45;
    }
  else
    {
      t = t_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_45;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm m_44 = NULL;
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm y_14 = ATgetArgument(t, 0);
          ATerm z_14 = ATgetArgument(t, 1);
          m_44 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(x_14);
      t = m_44;
      t = map_1_0(v_3, t);
    }
  else
    {
      t = w_14;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm a_15 = ATgetArgument(t, 0);
          ATerm b_15 = ATgetArgument(t, 1);
          m_44 = ATgetArgument(t, 2);
          {
            ATerm c_15 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = m_44;
      t = map_1_0(z_3, t);
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm z_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_46);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            {
              ATerm i_15 = t;
              int j_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,f_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_47 = ATgetArgument(t, 0);
                      c_47 = ATgetArgument(t, 1);
                      d_47 = ATgetArgument(t, 2);
                      f_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_47;
                  t = map_1_0(d_4, t);
                  LocalPopChoice(j_15);
                }
              else
                {
                  t = i_15;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm t_47 = NULL;
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_47 = ATgetArgument(t, 0);
          {
            ATerm m_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_15);
      t = t_47;
    }
  else
    {
      t = k_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_47;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm z_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_47);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            {
              ATerm r_15 = t;
              int s_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_48 = ATgetArgument(t, 0);
                      f_48 = ATgetArgument(t, 1);
                      g_48 = ATgetArgument(t, 2);
                      h_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_48;
                  t = map_1_0(h_4, t);
                  LocalPopChoice(s_15);
                }
              else
                {
                  t = r_15;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm u_48 = NULL;
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_48 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_15);
      t = u_48;
    }
  else
    {
      t = t_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_48;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm l_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_49);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            {
              ATerm e_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,s_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_49 = ATgetArgument(t, 0);
                      o_49 = ATgetArgument(t, 1);
                      p_49 = ATgetArgument(t, 2);
                      s_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_49;
                  t = map_1_0(k_4, t);
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = e_16;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm b_50 = NULL;
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_50 = ATgetArgument(t, 0);
          {
            ATerm i_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_16);
      t = b_50;
    }
  else
    {
      t = g_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_50;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm i_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_50);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            {
              ATerm n_16 = t;
              int o_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_50 = ATgetArgument(t, 0);
                      o_50 = ATgetArgument(t, 1);
                      p_50 = ATgetArgument(t, 2);
                      q_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_50;
                  t = map_1_0(n_4, t);
                  LocalPopChoice(o_16);
                }
              else
                {
                  t = n_16;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm x_50 = NULL;
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_50 = ATgetArgument(t, 0);
          {
            ATerm r_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_16);
      t = x_50;
    }
  else
    {
      t = p_16;
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
static ATerm p_4 (ATerm t)
{
  ATerm d_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_51);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            {
              ATerm x_16 = t;
              int y_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_51 = ATgetArgument(t, 0);
                      i_51 = ATgetArgument(t, 1);
                      j_51 = ATgetArgument(t, 2);
                      k_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_51;
                  t = map_1_0(r_4, t);
                  LocalPopChoice(y_16);
                }
              else
                {
                  t = x_16;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm t_51 = NULL;
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_51 = ATgetArgument(t, 0);
          {
            ATerm f_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_17);
      t = t_51;
    }
  else
    {
      t = z_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_51;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm x_46 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      x_46 = ATgetArgument(t, 0);
      t = x_46;
      t = free_vars_3_0(a_4, b_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          x_46 = ATgetArgument(t, 0);
          t = x_46;
          t = free_vars_3_0(f_4, g_4, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              x_46 = ATgetArgument(t, 0);
              t = x_46;
              t = free_vars_3_0(i_4, j_4, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  x_46 = ATgetArgument(t, 0);
                  t = x_46;
                  t = free_vars_3_0(l_4, m_4, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      x_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_46;
                  t = free_vars_3_0(p_4, q_4, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm n_5 (ATerm y_99 (ATerm), ATerm x_45, ATerm w_45, ATerm t)
{
  static ATerm u_52 (ATerm t)
  {
    ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
    h_52 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_45;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_52 = ATgetFirst((ATermList) t);
            j_52 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_52;
              {
                static ATerm s_4 (ATerm t)
                {
                  t = w_45;
                  return(t);
                }
                t = o_5(y_99, s_4, i_52, j_52, t);
              }
              t = u_52(t);
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
              {
                ATerm b_37 = NULL,e_37 = NULL,o_4 = NULL;
                t = SSLgetAnnotations(h_52);
                b_37 = t;
                t = j_52;
                t = u_52(t);
                e_37 = t;
                t = (ATerm) ATinsert(CheckATermList(e_37), i_52);
                o_4 = t;
                t = SSLsetAnnotations(o_4, b_37);
              }
            }
        }
      }
    return(t);
  }
  t = x_45;
  t = u_52(t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
  z_52 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_52;
      t = d_103(t);
    }
  else
    {
      ATerm h_53 = NULL,i_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_53 = ATgetFirst((ATermList) t);
          b_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_53;
      t = f_103(t);
      h_53 = t;
      t = b_53;
      t = foldr_3_0(d_103, e_103, f_103, t);
      i_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_53, i_53);
      t = e_103(t);
    }
  return(t);
}
static ATerm o_5 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm b_46, ATerm a_46, ATerm t)
{
  t = c_100(t);
  {
    static ATerm t_4 (ATerm t)
    {
      ATerm m_53 = NULL;
      m_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_46, m_53);
      t = b_100(t);
      return(t);
    }
    t = fetch_1_0(t_4, t);
  }
  t = a_46;
  return(t);
}
static ATerm p_5 (ATerm t_99 (ATerm), ATerm v_45, ATerm u_45, ATerm t)
{
  static ATerm h_54 (ATerm t)
  {
    ATerm a_54 = NULL,b_54 = NULL,c_54 = NULL;
    a_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_54;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_54 = ATgetFirst((ATermList) t);
            c_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_54;
              {
                static ATerm u_4 (ATerm t)
                {
                  t = u_45;
                  return(t);
                }
                t = o_5(t_99, u_4, b_54, c_54, t);
              }
              t = h_54(t);
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
              {
                ATerm u_37 = NULL,z_37 = NULL,w_4 = NULL;
                t = SSLgetAnnotations(a_54);
                u_37 = t;
                t = c_54;
                t = h_54(t);
                z_37 = t;
                t = (ATerm) ATinsert(CheckATermList(z_37), b_54);
                w_4 = t;
                t = SSLsetAnnotations(w_4, u_37);
              }
            }
        }
      }
    return(t);
  }
  t = v_45;
  t = h_54(t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  static ATerm v_55 (ATerm t)
  {
    ATerm l_55 = NULL,n_55 = NULL,u_55 = NULL;
    u_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_55 = ATgetFirst((ATermList) t);
        n_55 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_38 = NULL,f_39 = NULL,y_4 = NULL;
          t = SSLgetAnnotations(u_55);
          v_38 = t;
          t = n_55;
          t = v_55(t);
          f_39 = t;
          t = (ATerm) ATinsert(CheckATermList(f_39), l_55);
          y_4 = t;
          t = SSLsetAnnotations(y_4, v_38);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_55;
        t = v_97(t);
      }
    return(t);
  }
  t = v_55(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
  k_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_54;
    }
  else
    {
      static ATerm v_4 (ATerm t)
      {
        t = not_null(m_54);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_54 = ATgetFirst((ATermList) t);
          if(((m_54 != NULL) && (m_54 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_54;
      t = at_end_1_0(v_4, t);
    }
  return(t);
}
static ATerm p_56 (ATerm z_55, ATerm t)
{
  ATerm b_56 = NULL;
  t = SSL_explode_term(z_55);
  if(match_cons(t, sym__2))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_56;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  g_56 = t;
  if(match_cons(t, sym__2))
    {
      e_56 = ATgetArgument(t, 0);
      f_56 = ATgetArgument(t, 1);
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_4 (ATerm t)
            {
              t = f_56;
              return(t);
            }
            t = e_56;
            t = at_end_1_0(x_4, t);
            LocalPopChoice(m_17);
          }
        else
          {
            t = l_17;
            t = p_56(g_56, t);
          }
      }
    }
  else
    {
      t = p_56(g_56, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t)
{
  static ATerm e_57 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_89(t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        {
          ATerm s_56 = NULL,t_56 = NULL,w_56 = NULL,y_56 = NULL,z_56 = NULL,d_57 = NULL,e_5 = NULL;
          t = i_89(t);
          d_57 = t;
          if(match_cons(t, sym__2))
            {
              t_56 = ATgetArgument(t, 0);
              w_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_57);
          s_56 = t;
          t = t_56;
          t = k_89(t);
          y_56 = t;
          t = w_56;
          t = e_57(t);
          z_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_56, z_56);
          e_5 = t;
          t = SSLsetAnnotations(e_5, s_56);
          t = j_89(t);
        }
      }
    return(t);
  }
  t = e_57(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_17 = ATgetArgument(t, 0);
      if(((ATgetType(p_17) != AT_LIST) || !(ATisEmpty(p_17))))
        _fail(t);
      {
        ATerm q_17 = ATgetArgument(t, 1);
        if(((ATgetType(q_17) != AT_LIST) || !(ATisEmpty(q_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,u_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
        {
          q_57 = ATgetFirst((ATermList) r_17);
          r_57 = (ATerm) ATgetNext((ATermList) r_17);
        }
      else
        _fail(t);
      {
        ATerm s_17 = ATgetArgument(t, 1);
        if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
          {
            s_57 = ATgetFirst((ATermList) s_17);
            u_57 = (ATerm) ATgetNext((ATermList) s_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_57, s_57), (ATerm) ATmakeAppl(sym__2, r_57, u_57));
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL;
  if(match_cons(t, sym__2))
    {
      x_57 = ATgetArgument(t, 0);
      y_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_57), x_57);
  return(t);
}
static ATerm r_5 (ATerm y_607, ATerm d_608, ATerm e_59, ATerm t)
{
  ATerm g_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
  t = SSL_explode_term(d_608);
  if(match_cons(t, sym__2))
    {
      g_57 = ATgetArgument(t, 0);
      k_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_607);
  if(match_cons(t, sym__2))
    {
      if((g_57 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_57, k_57);
  t = genzip_4_0(z_4, a_5, b_5, _id, t);
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_57, e_59);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm t)
{
  static ATerm a_58 (ATerm t)
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_91(t);
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        t = i_91(t);
        t = a_58(t);
      }
    return(t);
  }
  t = a_58(t);
  return(t);
}
ATerm for_3_0 (ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm t)
{
  t = k_91(t);
  t = while_not_2_0(l_91, m_91, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm h_58 = NULL;
  h_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_58);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,s_5 = NULL;
  l_58 = t;
  if(match_cons(t, sym__2))
    {
      j_58 = ATgetArgument(t, 0);
      k_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_58);
  i_58 = t;
  t = k_58;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_58, k_58);
  s_5 = t;
  t = SSLsetAnnotations(s_5, i_58);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
  j_59 = t;
  if(match_cons(t, sym__2))
    {
      k_59 = ATgetArgument(t, 0);
      n_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_59 = ATgetFirst((ATermList) t);
      p_59 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_59(k_59, n_59, j_59, t);
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_59), o_59), p_59);
          }
      }
    }
  else
    {
      t = z_59(k_59, n_59, j_59, t);
    }
  return(t);
}
static ATerm z_59 (ATerm m_58, ATerm n_58, ATerm o_58, ATerm t)
{
  ATerm p_58 = NULL,s_58 = NULL,u_5 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,z_58 = NULL;
  t = SSLgetAnnotations(o_58);
  p_58 = t;
  t = n_58;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_58 = ATgetFirst((ATermList) t);
      z_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_58;
  if(match_cons(t, sym__2))
    {
      w_58 = ATgetArgument(t, 0);
      x_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_58;
        if((w_58 != t))
          {
            _fail(t);
          }
        t = z_58;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = n_58;
        t = r_5(w_58, x_58, z_58, t);
      }
  }
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_58, s_58);
  u_5 = t;
  t = SSLsetAnnotations(u_5, p_58);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm y_59 = NULL;
  if(match_cons(t, sym__2))
    {
      y_59 = ATgetArgument(t, 0);
      if((y_59 != ATgetArgument(t, 1)))
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
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(d_5, f_5, g_5, t);
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      {
        ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
        t_59 = t;
        if(match_cons(t, sym__2))
          {
            u_59 = ATgetArgument(t, 0);
            v_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_59;
        t = p_5(h_5, u_59, v_59, t);
      }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL;
  if(match_cons(t, sym__2))
    {
      x_39 = ATgetArgument(t, 0);
      y_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(o_6, x_39, y_39, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm z_39 = NULL;
  if(match_cons(t, sym__2))
    {
      z_39 = ATgetArgument(t, 0);
      if((z_39 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL;
  if(match_cons(t, sym__2))
    {
      p_40 = ATgetArgument(t, 0);
      q_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(c_7, p_40, q_40, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm y_40 = NULL;
  if(match_cons(t, sym__2))
    {
      y_40 = ATgetArgument(t, 0);
      if((y_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm n_60 (ATerm t)
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_106(t);
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_60 = NULL,c_60 = NULL,p_39 = NULL,q_39 = NULL;
              b_60 = t;
              t = v_106(t);
              c_60 = t;
              t = b_60;
              {
                static ATerm l_5 (ATerm t)
                {
                  ATerm e_60 = NULL;
                  t = n_60(t);
                  e_60 = t;
                  t = (ATerm) ATmakeAppl(sym__2, e_60, c_60);
                  t = diff_0_0(t);
                  return(t);
                }
                t = w_106(l_5, n_60, m_5, t);
              }
              q_39 = t;
              t = SSL_explode_term(q_39);
              if(match_cons(t, sym__2))
                {
                  ATerm f_18 = ATgetArgument(t, 0);
                  p_39 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_39;
              t = foldr_3_0(w_5, l_6, _id, t);
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              {
                ATerm b_40 = NULL,j_40 = NULL;
                j_40 = t;
                t = SSL_explode_term(j_40);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_18 = ATgetArgument(t, 0);
                    b_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_40;
                t = foldr_3_0(w_6, x_6, n_60, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_60(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm z_60 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_60);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            {
              ATerm l_18 = t;
              int m_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_61 = ATgetArgument(t, 0);
                      c_61 = ATgetArgument(t, 1);
                      d_61 = ATgetArgument(t, 2);
                      e_61 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_61;
                  t = map_1_0(g_7, t);
                  LocalPopChoice(m_18);
                }
              else
                {
                  t = l_18;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm l_61 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_61 = ATgetArgument(t, 0);
          {
            ATerm p_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_18);
      t = l_61;
    }
  else
    {
      t = n_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_61;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm s_60 = NULL,w_60 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      w_60 = ATgetArgument(t, 0);
      t = w_60;
      if(match_cons(t, sym_Rule_3))
        {
          s_60 = ATgetArgument(t, 0);
          {
            ATerm r_18 = ATgetArgument(t, 1);
          }
          {
            ATerm s_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_60;
      t = free_vars_3_0(d_7, e_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          w_60 = ATgetArgument(t, 0);
          {
            ATerm t_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_60;
    }
  return(t);
}
ATerm Var_1_0 (ATerm i_63 (ATerm), ATerm t)
{
  ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,r_6 = NULL;
  s_61 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_61);
  p_61 = t;
  t = q_61;
  t = i_63(t);
  r_61 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_61);
  r_6 = t;
  t = SSLsetAnnotations(r_6, p_61);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm w_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                z_61 = ATgetArgument(t, 0);
                a_62 = ATgetArgument(t, 1);
                b_62 = ATgetArgument(t, 2);
                c_62 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = b_62;
            t = map_1_0(j_7, t);
            LocalPopChoice(y_18);
          }
        else
          {
            t = w_18;
            t = Bind8_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm j_62 = NULL;
  ATerm z_18 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_62 = ATgetArgument(t, 0);
          {
            ATerm d_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_19);
      t = j_62;
    }
  else
    {
      t = z_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_62;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
      m_62 = t;
      if(match_cons(t, sym_Let_2))
        {
          n_62 = ATgetArgument(t, 0);
          o_62 = ATgetArgument(t, 1);
          t = m_62;
          t = k_5(n_62, o_62, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              n_62 = ATgetArgument(t, 0);
              o_62 = ATgetArgument(t, 1);
              p_62 = ATgetArgument(t, 2);
              t = o_62;
              t = map_1_0(n_7, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  n_62 = ATgetArgument(t, 0);
                  o_62 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, n_62);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_62 = ATgetArgument(t, 0);
                      o_62 = ATgetArgument(t, 1);
                      p_62 = ATgetArgument(t, 2);
                      q_62 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_62;
                  t = map_1_0(o_7, t);
                }
            }
        }
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = Bind7_0_0(t);
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm y_62 = NULL;
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_62 = ATgetArgument(t, 0);
          {
            ATerm i_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_19);
      t = y_62;
    }
  else
    {
      t = g_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_62;
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm k_63 = NULL;
  ATerm j_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_63 = ATgetArgument(t, 0);
          {
            ATerm q_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_19);
      t = k_63;
    }
  else
    {
      t = j_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_63;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, h_7, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, l_7, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm c_6 (ATerm w_29, ATerm x_29, ATerm t)
{
  ATerm n_63 = NULL;
  t = SSL_fputc(w_29, x_29);
  n_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_63);
  return(t);
}
static ATerm d_6 (ATerm o_28, ATerm p_28, ATerm t)
{
  ATerm o_63 = NULL;
  t = SSL_write_term_to_stream_text(o_28, p_28);
  o_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_63);
  return(t);
}
static ATerm f_6 (ATerm f_92 (ATerm), ATerm i_196, ATerm u_28, ATerm t)
{
  ATerm p_63 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_196, term_r_19);
  t = j_6(t);
  p_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_63, u_28);
  t = f_92(t);
  t = fclose_0_0(t);
  t = u_28;
  return(t);
}
static ATerm e_6 (ATerm k_28, ATerm l_28, ATerm t)
{
  ATerm q_63 = NULL;
  t = SSL_write_term_to_stream_baf(k_28, l_28);
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_63);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_19 = ATgetArgument(t, 0);
      if(match_cons(s_19, sym_Stream_1))
        {
          x_63 = ATgetArgument(s_19, 0);
        }
      else
        _fail(t);
      y_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(x_63, y_63, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_19 = ATgetArgument(t, 0);
      if(match_cons(t_19, sym_Stream_1))
        {
          c_64 = ATgetArgument(t_19, 0);
        }
      else
        _fail(t);
      d_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(c_64, d_64, t);
  z_63 = t;
  t = term_u_19;
  a_64 = t;
  t = z_63;
  if(match_cons(t, sym_Stream_1))
    {
      b_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_19, z_63);
  t = c_6(a_64, b_64, t);
  return(t);
}
ATerm output_1_0 (ATerm u_109 (ATerm), ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL;
  t = u_109(t);
  s_63 = t;
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_63 = NULL,u_63 = NULL;
        t = term_x_19;
        t_63 = t;
        t = term_z_19;
        u_63 = t;
        t = term_a_20;
        t = p_6(t_63, u_63, t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = term_d_20;
      }
  }
  r_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_63, s_63);
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_63 = NULL,w_63 = NULL;
        t = term_x_19;
        v_63 = t;
        t = term_g_20;
        w_63 = t;
        t = term_h_20;
        t = p_6(v_63, w_63, t);
        t = (ATerm) ATmakeAppl(sym__2, r_63, s_63);
        LocalPopChoice(f_20);
        if(match_cons(t, sym__2))
          {
            ATerm i_20 = ATgetArgument(t, 0);
            ATerm j_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_6(p_7, r_63, s_63, t);
      }
    else
      {
        t = e_20;
        if(match_cons(t, sym__2))
          {
            ATerm k_20 = ATgetArgument(t, 0);
            ATerm l_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_6(q_7, r_63, s_63, t);
      }
  }
  return(t);
}
static ATerm r_64 (ATerm l_64, ATerm t)
{
  t = SSL_fclose(l_64);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL;
  p_64 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_64 = ATgetArgument(t, 0);
      {
        ATerm m_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_64);
            LocalPopChoice(o_20);
          }
        else
          {
            t = m_20;
            t = r_64(p_64, t);
          }
      }
    }
  else
    {
      t = r_64(p_64, t);
    }
  return(t);
}
static ATerm g_6 (ATerm q_28, ATerm t)
{
  t = SSL_read_term_from_stream(q_28);
  return(t);
}
static ATerm h_6 (ATerm a_55, ATerm b_55, ATerm t)
{
  t = SSL_strcat(a_55, b_55);
  return(t);
}
static ATerm i_6 (ATerm y_29, ATerm z_29, ATerm t)
{
  ATerm s_64 = NULL;
  t = SSL_fopen(y_29, z_29);
  s_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_64);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_64 = NULL;
  t = SSL_stdin_stream();
  t_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_64);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_64 = NULL;
  t = SSL_stdout_stream();
  u_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_64);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_64 = NULL;
  t = SSL_stderr_stream();
  v_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_64);
  return(t);
}
static ATerm c_66 (ATerm b_65, ATerm t)
{
  ATerm c_65 = NULL;
  t = SSL_explode_term(b_65);
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_20 = ATgetArgument(t, 1);
        if(((ATgetType(r_20) == AT_LIST) && !(ATisEmpty(r_20))))
          {
            c_65 = ATgetFirst((ATermList) r_20);
            {
              ATerm s_20 = (ATerm) ATgetNext((ATermList) r_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_65;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_65;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_65;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_65;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_66 (ATerm f_65, ATerm g_65, ATerm h_65, ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL,k_65 = NULL,n_65 = NULL,a_7 = NULL;
  t = SSLgetAnnotations(h_65);
  k_65 = t;
  t = f_65;
  if(match_cons(t, sym_Path_1))
    {
      n_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_65, g_65);
  a_7 = t;
  t = SSLsetAnnotations(a_7, k_65);
  if(match_cons(t, sym__2))
    {
      i_65 = ATgetArgument(t, 0);
      j_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(i_65, j_65, t);
  return(t);
}
static ATerm e_66 (ATerm p_65, ATerm q_65, ATerm r_65, ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,x_65 = NULL,b_7 = NULL;
  t = SSLgetAnnotations(r_65);
  u_65 = t;
  t = SSL_is_string(p_65);
  x_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_65, q_65);
  b_7 = t;
  t = SSLsetAnnotations(b_7, u_65);
  if(match_cons(t, sym__2))
    {
      s_65 = ATgetArgument(t, 0);
      t_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(s_65, t_65, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
  z_65 = t;
  if(match_cons(t, sym__2))
    {
      a_66 = ATgetArgument(t, 0);
      b_66 = ATgetArgument(t, 1);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_66(z_65, t);
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm v_20 = t;
              int x_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_66(a_66, b_66, z_65, t);
                  LocalPopChoice(x_20);
                }
              else
                {
                  t = v_20;
                  t = e_66(a_66, b_66, z_65, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_66(z_65, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,n_66 = NULL;
  n_66 = t;
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_66, term_a_21);
        t = j_6(t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        {
          ATerm s_41 = NULL,t_41 = NULL;
          t = term_b_21;
          t_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_21, n_66);
          t = h_6(t_41, n_66, t);
          s_41 = t;
          t = SSL_perror(s_41);
          _fail(t);
        }
      }
  }
  h_66 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(i_66, t);
  g_66 = t;
  t = h_66;
  t = fclose_0_0(t);
  t = g_66;
  return(t);
}
ATerm input_1_0 (ATerm v_109 (ATerm), ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_66 = NULL,r_66 = NULL;
      t = term_x_19;
      q_66 = t;
      t = term_e_21;
      r_66 = t;
      t = term_f_21;
      t = p_6(q_66, r_66, t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      t = term_g_21;
    }
  t = ReadFromFile_0_0(t);
  t = v_109(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
  s_66 = t;
  t = term_l_21;
  t = whoami_0_0(t);
  t_66 = t;
  t = term_m_21;
  v_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_21), t_66), term_n_21);
  w_66 = t;
  t = SSL_printnl(v_66, w_66);
  t = term_p_21;
  u_66 = t;
  t = SSL_exit(u_66);
  t = s_66;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm y_66 = NULL;
  y_66 = t;
  if(match_string(t, "-k"))
    {
      t = y_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_66;
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL;
  z_66 = t;
  t = SSL_string_to_int(z_66);
  a_67 = t;
  t = term_q_21;
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_21, a_67);
  t = s_6(b_67, a_67, t);
  t = z_66;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_r_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_7, s_7, t_7, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm d_67 = NULL;
  d_67 = t;
  if(match_string(t, "-S"))
    {
      t = d_67;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_67;
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL;
  t = term_s_21;
  e_67 = t;
  t = term_t_21;
  f_67 = t;
  t = term_u_21;
  t = s_6(e_67, f_67, t);
  t = term_y_21;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_z_21;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
  g_67 = t;
  t = SSL_string_to_int(g_67);
  h_67 = t;
  t = term_s_21;
  i_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_21, h_67);
  t = s_6(i_67, h_67, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_67);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL;
  t = term_c_22;
  j_67 = t;
  t = term_l_21;
  k_67 = t;
  t = term_d_22;
  t = s_6(j_67, k_67, t);
  t = term_e_22;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_7, v_7, w_7, t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_7, z_7, a_8, t);
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = Option_3_0(c_8, e_8, h_8, t);
          }
      }
    }
  return(t);
}
static ATerm s_6 (ATerm r_33, ATerm s_33, ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL;
  t = term_x_19;
  m_67 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_19, r_33, s_33);
  t = lookup_table_0_1(m_67, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(r_33, s_33, n_67, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_19, r_33, s_33);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL;
      t = term_l_21;
      t = e_0(t);
      t_67 = t;
      t = term_l_22;
      u_67 = t;
      t = term_m_22;
      v_67 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_22, term_m_22, t_67);
      t = q_6(u_67, v_67, t_67, t);
      _fail(t);
    }
  else
    {
      ATerm y_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_67 = ATgetFirst((ATermList) t);
          s_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_67;
      t = c_0(t);
      t = term_l_21;
      t = d_0(t);
      y_67 = t;
      t = (ATerm) ATinsert(CheckATermList(s_67), y_67);
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm a_68 = NULL;
  a_68 = t;
  if(match_string(t, "-o"))
    {
      t = a_68;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_68;
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL;
  b_68 = t;
  t = term_z_19;
  c_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_19, b_68);
  t = s_6(c_68, b_68, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_68);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_8, j_8, k_8, t);
  return(t);
}
static ATerm q_6 (ATerm b_39, ATerm c_39, ATerm a_39, ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
  e_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_39, c_39);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_22 = ATgetArgument(t, 0);
            ATerm u_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_39, c_39);
        t = p_6(b_39, c_39, t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        t = (ATerm) ATempty;
      }
  }
  f_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_39, c_39, (ATerm) ATinsert(CheckATermList(f_68), a_39));
  t = lookup_table_0_1(b_39, t);
  i_68 = t;
  t = (ATerm) ATinsert(CheckATermList(f_68), a_39);
  g_68 = t;
  t = i_68;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(c_39, g_68, h_68, t);
  t = e_68;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
      t = term_l_21;
      t = n_0(t);
      t_68 = t;
      t = term_l_22;
      u_68 = t;
      t = term_m_22;
      v_68 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_22, term_m_22, t_68);
      t = q_6(u_68, v_68, t_68, t);
      _fail(t);
    }
  else
    {
      ATerm z_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_68 = ATgetFirst((ATermList) t);
          q_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_68;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_68 = ATgetFirst((ATermList) t);
          s_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_68;
      t = k_0(t);
      t = r_68;
      t = l_0(t);
      z_68 = t;
      t = (ATerm) ATinsert(CheckATermList(s_68), z_68);
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm b_69 = NULL;
  b_69 = t;
  if(match_string(t, "-i"))
    {
      t = b_69;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_69;
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL;
  c_69 = t;
  t = term_e_21;
  d_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, c_69);
  t = s_6(d_69, c_69, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_69);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_8, m_8, n_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_21;
  t = whoami_0_0(t);
  e_69 = t;
  t = term_m_21;
  g_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_22), e_69);
  h_69 = t;
  t = SSL_printnl(g_69, h_69);
  t = term_p_21;
  f_69 = t;
  t = SSL_exit(f_69);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL;
  t = term_x_19;
  i_69 = t;
  t = term_i_23;
  j_69 = t;
  t = term_k_23;
  t = p_6(i_69, j_69, t);
  return(t);
}
static ATerm k_6 (ATerm j_36, ATerm k_36, ATerm t)
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_36, k_36);
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
      t = SSL_addr(j_36, k_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
  l_69 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_69;
      t = b_103(t);
    }
  else
    {
      ATerm q_69 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_69 = ATgetFirst((ATermList) t);
          n_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_69;
      t = foldr_2_0(b_103, c_103, t);
      q_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_69, q_69);
      t = c_103(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_t_21;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL;
  if(match_cons(t, sym__2))
    {
      l_42 = ATgetArgument(t, 0);
      m_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(l_42, m_42, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_69 = NULL,a_42 = NULL,e_42 = NULL;
  t = times_0_0(t);
  e_42 = t;
  t = SSL_explode_term(e_42);
  if(match_cons(t, sym__2))
    {
      ATerm q_23 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_42;
  t = foldr_2_0(o_8, p_8, t);
  t_69 = t;
  t = SSL_TicksToSeconds(t_69);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL;
  e_70 = t;
  if(match_cons(t, sym__2))
    {
      f_70 = ATgetArgument(t, 0);
      g_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_70;
        if((f_70 != t))
          {
            _fail(t);
          }
        t = e_70;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = (ATerm) ATmakeAppl(sym__2, f_70, g_70);
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_70, g_70);
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              t = SSL_gtr(f_70, g_70);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_70, g_70);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm k_70 = NULL;
  k_70 = t;
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
        t = term_x_19;
        n_70 = t;
        t = term_s_21;
        o_70 = t;
        t = term_x_23;
        t = p_6(n_70, o_70, t);
        m_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_70, term_p_21);
        t = geq_0_0(t);
        t = k_70;
        t = v_93(t);
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = k_70;
      }
  }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,t_70 = NULL,w_70 = NULL;
  t = run_time_0_0(t);
  q_70 = t;
  t = term_l_21;
  t = whoami_0_0(t);
  r_70 = t;
  t = term_m_21;
  t_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_23), q_70), term_y_23), r_70);
  w_70 = t;
  t = SSL_printnl(t_70, w_70);
  t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_23), q_70), term_y_23), r_70));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_70 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_21;
  x_70 = t;
  t = SSL_exit(x_70);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL;
  i_71 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_71;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_71 = ATgetArgument(t, 0);
          {
            ATerm f_44 = NULL,f_7 = NULL;
            t = SSLgetAnnotations(i_71);
            f_44 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_71);
            f_7 = t;
            t = SSLsetAnnotations(f_7, f_44);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_71;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_109 (ATerm), ATerm t)
{
  ATerm a_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_71 = NULL,b_71 = NULL;
      t = term_x_19;
      a_71 = t;
      t = term_d_24;
      b_71 = t;
      t = term_e_24;
      t = p_6(a_71, b_71, t);
      LocalPopChoice(c_24);
    }
  else
    {
      t = a_24;
      t = fetch_1_0(r_8, t);
    }
  t = l_109(t);
  return(t);
}
static ATerm t_6 (ATerm t_42, ATerm u_42, ATerm v_42, ATerm t)
{
  ATerm k_71 = NULL;
  t = SSL_hashtable_put(v_42, t_42, u_42);
  k_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_71);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_40, ATerm t)
{
  ATerm t_71 = NULL;
  t = table_hashtable_0_0(t);
  t_71 = t;
  {
    ATerm g_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_44 = NULL;
        t = t_71;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_6(n_40, r_44, t);
        LocalPopChoice(j_24);
      }
    else
      {
        t = g_24;
        {
          ATerm c_45 = NULL;
          t = n_40;
          t = table_create_0_0(t);
          t = t_71;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_6(n_40, c_45, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm b_43, ATerm c_43, ATerm t)
{
  ATerm w_71 = NULL;
  t = SSL_hashtable_create(b_43, c_43);
  w_71 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_71);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,b_72 = NULL,c_72 = NULL;
  x_71 = t;
  t = term_n_24;
  b_72 = t;
  t = term_w_24;
  c_72 = t;
  t = x_71;
  t = new_hashtable_0_2(b_72, c_72, t);
  y_71 = t;
  t = x_71;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(x_71, y_71, z_71, t);
  t = x_71;
  return(t);
}
static ATerm m_6 (ATerm y_42, ATerm z_42, ATerm t)
{
  ATerm d_72 = NULL;
  t = SSL_hashtable_remove(z_42, y_42);
  d_72 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_72);
  return(t);
}
static ATerm n_6 (ATerm d_43, ATerm t)
{
  ATerm e_72 = NULL;
  t = SSL_hashtable_destroy(d_43);
  e_72 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_72);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_72 = NULL;
  t = SSL_table_hashtable();
  f_72 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_72);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL;
  g_72 = t;
  t = table_hashtable_0_0(t);
  h_72 = t;
  t = lookup_table_0_1(g_72, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(j_72, t);
  t = h_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(g_72, i_72, t);
  t = g_72;
  return(t);
}
ATerm map_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  static ATerm y_72 (ATerm t)
  {
    ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL;
    v_72 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_72;
      }
    else
      {
        ATerm m_45 = NULL,p_45 = NULL,q_45 = NULL,i_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_72 = ATgetFirst((ATermList) t);
            x_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_72);
        m_45 = t;
        t = w_72;
        t = e_97(t);
        p_45 = t;
        t = x_72;
        t = y_72(t);
        q_45 = t;
        t = (ATerm) ATinsert(CheckATermList(q_45), p_45);
        i_7 = t;
        t = SSLsetAnnotations(i_7, m_45);
      }
    return(t);
  }
  t = y_72(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_73 = ATgetFirst((ATermList) t);
      c_73 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_73 = NULL,h_73 = NULL;
        static ATerm s_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_73)), not_null(h_73));
          return(t);
        }
        t = c_73;
        t = i_0(t);
        if(((g_73 != NULL) && (g_73 != t)))
          _fail(t);
        else
          g_73 = t;
        t = b_73;
        t = g_0(t);
        if(((h_73 != NULL) && (h_73 != t)))
          _fail(t);
        else
          h_73 = t;
        t = c_73;
        t = reverse_acc_2_0(g_0, s_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_21;
      t = i_0(t);
    }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL,k_7 = NULL;
  p_73 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_73);
  n_73 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_73);
  k_7 = t;
  t = SSLsetAnnotations(k_7, n_73);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm r_73 = NULL;
  r_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_73), term_c_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL;
  ATerm i_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_73 = NULL,m_73 = NULL;
      t = term_x_19;
      l_73 = t;
      t = term_i_23;
      m_73 = t;
      t = term_k_23;
      t = p_6(l_73, m_73, t);
      LocalPopChoice(n_25);
    }
  else
    {
      t = i_25;
      t = fetch_1_0(t_8, t);
    }
  t = term_p_25;
  t = echo_0_0(t);
  t = term_l_22;
  j_73 = t;
  t = term_m_22;
  k_73 = t;
  t = term_q_25;
  t = p_6(j_73, k_73, t);
  t = reverse_acc_2_0(_id, u_8, t);
  t = map_1_0(v_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm o_97 (ATerm), ATerm t)
{
  static ATerm o_74 (ATerm t)
  {
    ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL;
    l_74 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_74 = ATgetFirst((ATermList) t);
        n_74 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_25 = t;
      int s_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_46 = NULL,h_46 = NULL,m_7 = NULL;
          t = SSLgetAnnotations(l_74);
          e_46 = t;
          t = m_74;
          t = o_97(t);
          h_46 = t;
          t = (ATerm) ATinsert(CheckATermList(n_74), h_46);
          m_7 = t;
          t = SSLsetAnnotations(m_7, e_46);
          LocalPopChoice(s_25);
        }
      else
        {
          t = r_25;
          {
            ATerm p_46 = NULL,s_46 = NULL,y_7 = NULL;
            t = SSLgetAnnotations(l_74);
            p_46 = t;
            t = n_74;
            t = o_74(t);
            s_46 = t;
            t = (ATerm) ATinsert(CheckATermList(s_46), m_74);
            y_7 = t;
            t = SSLsetAnnotations(y_7, p_46);
          }
        }
    }
    return(t);
  }
  t = o_74(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL;
  s_74 = t;
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_74;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_25 = ATgetFirst((ATermList) t);
                ATerm w_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_74;
          }
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = (ATerm) ATinsert(ATempty, s_74);
      }
  }
  t_74 = t;
  t = term_d_20;
  u_74 = t;
  t = SSL_printnl(u_74, t_74);
  t = s_74;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL;
  t = term_x_19;
  y_74 = t;
  t = term_i_23;
  z_74 = t;
  t = term_k_23;
  t = p_6(y_74, z_74, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm w_42, ATerm x_42, ATerm t)
{
  t = SSL_hashtable_get(x_42, w_42);
  return(t);
}
static ATerm p_6 (ATerm u_40, ATerm v_40, ATerm t)
{
  ATerm a_75 = NULL;
  t = lookup_table_0_1(u_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(v_40, a_75, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL;
  t = term_x_25;
  c_75 = t;
  t = term_l_21;
  d_75 = t;
  t = term_y_25;
  t = s_6(c_75, d_75, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_z_25;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL;
  t = term_x_25;
  g_75 = t;
  t = term_l_21;
  h_75 = t;
  t = term_y_25;
  t = s_6(g_75, h_75, t);
  t = term_a_26;
  e_75 = t;
  t = term_l_21;
  f_75 = t;
  t = term_b_26;
  t = s_6(e_75, f_75, t);
  t = term_c_26;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_8, x_8, a_9, t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      t = Option_3_0(b_9, c_9, d_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_70 (ATerm), ATerm v_70 (ATerm), ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,b_8 = NULL;
  n_75 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_75 = ATgetFirst((ATermList) t);
      k_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_75);
  i_75 = t;
  t = j_75;
  t = u_70(t);
  l_75 = t;
  t = k_75;
  t = v_70(t);
  m_75 = t;
  t = (ATerm) ATinsert(CheckATermList(m_75), l_75);
  b_8 = t;
  t = SSLsetAnnotations(b_8, i_75);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_111 (ATerm), ATerm t)
{
  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,x_75 = NULL,y_75 = NULL,d_8 = NULL;
  s_75 = t;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_26;
        t = j_111(t);
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
      }
  }
  t = s_75;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_75 = ATgetFirst((ATermList) t);
      v_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_75);
  t_75 = t;
  t = term_i_23;
  y_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_23, u_75);
  t = s_6(y_75, u_75, t);
  t = v_75;
  {
    static ATerm i_76 (ATerm t)
    {
      ATerm j_26 = t;
      int k_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_76 = NULL;
              b_76 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_76;
              LocalPopChoice(m_26);
            }
          else
            {
              t = l_26;
              t = j_111(t);
              t = Cons_2_0(_id, i_76, t);
            }
          LocalPopChoice(k_26);
        }
      else
        {
          t = j_26;
          {
            ATerm e_76 = NULL,f_76 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_76 = ATgetFirst((ATermList) t);
                f_76 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_76), (ATerm) ATmakeAppl(sym_Undefined_1, e_76));
          }
        }
      return(t);
    }
    t = i_76(t);
  }
  x_75 = t;
  t = (ATerm) ATinsert(CheckATermList(x_75), (ATerm) ATmakeAppl(sym_Program_1, u_75));
  d_8 = t;
  t = SSLsetAnnotations(d_8, t_75);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm v_76 = NULL;
  v_76 = t;
  if(match_string(t, "--help"))
    {
      t = v_76;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_76;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_76;
        }
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm w_76 = NULL,x_76 = NULL;
  t = term_d_24;
  w_76 = t;
  t = term_l_21;
  x_76 = t;
  t = term_n_26;
  t = s_6(w_76, x_76, t);
  t = term_o_26;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_p_26;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL;
  p_76 = t;
  t = term_l_22;
  q_76 = t;
  t = term_q_26;
  t = lookup_table_0_1(q_76, t);
  u_76 = t;
  t = term_m_22;
  r_76 = t;
  t = (ATerm) ATempty;
  s_76 = t;
  t = u_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(r_76, s_76, t_76, t);
  t = p_76;
  {
    static ATerm e_9 (ATerm t)
    {
      ATerm v_26 = t;
      int x_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_111(t);
          LocalPopChoice(x_26);
        }
      else
        {
          t = v_26;
          {
            ATerm y_26 = t;
            int z_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_9, g_9, h_9, t);
                LocalPopChoice(z_26);
              }
            else
              {
                t = y_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_9, t);
  }
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_77 = NULL;
        i_77 = t;
        {
          ATerm d_27 = t;
          int e_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_47 = NULL;
              t = i_77;
              {
                ATerm f_27 = t;
                int g_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_47 = NULL,l_47 = NULL;
                    t = term_x_19;
                    j_47 = t;
                    t = term_d_24;
                    l_47 = t;
                    t = term_e_24;
                    t = p_6(j_47, l_47, t);
                    LocalPopChoice(g_27);
                  }
                else
                  {
                    t = f_27;
                    t = fetch_1_0(i_9, t);
                  }
              }
              t = i_77;
              t = default_system_usage_0_0(t);
              t = term_t_21;
              i_47 = t;
              t = SSL_exit(i_47);
              LocalPopChoice(e_27);
            }
          else
            {
              t = d_27;
              {
                ATerm w_47 = NULL,a_48 = NULL,d_48 = NULL;
                t = term_x_19;
                a_48 = t;
                t = term_x_25;
                d_48 = t;
                t = term_h_27;
                t = p_6(a_48, d_48, t);
                t = i_77;
                t = default_system_about_0_0(t);
                t = term_t_21;
                w_47 = t;
                t = SSL_exit(w_47);
              }
            }
        }
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        {
          ATerm i_27 = t;
          int l_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL;
              static ATerm k_9 (ATerm t)
              {
                ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,f_8 = NULL;
                o_77 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_77);
                m_77 = t;
                t = n_77;
                if(((n_76 != NULL) && (n_76 != t)))
                  _fail(t);
                else
                  n_76 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_77);
                f_8 = t;
                t = SSLsetAnnotations(f_8, m_77);
                return(t);
              }
              t = fetch_1_0(k_9, t);
              t = term_m_21;
              k_77 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_76)), term_n_27);
              l_77 = t;
              t = SSL_printnl(k_77, l_77);
              t = (ATerm) ATmakeAppl(sym__2, term_m_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_76)), term_n_27));
              t = default_system_usage_0_0(t);
              t = term_p_21;
              j_77 = t;
              t = SSL_exit(j_77);
              LocalPopChoice(l_27);
            }
          else
            {
              t = i_27;
            }
        }
      }
  }
  o_76 = t;
  t = term_l_22;
  t = table_destroy_0_0(t);
  t = o_76;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL;
  t = parse_options_1_0(n_109, t);
  t_77 = t;
  t = term_r_27;
  t = table_create_0_0(t);
  t = term_r_27;
  u_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_27, term_s_27, t_77);
  t = lookup_table_0_1(u_77, t);
  x_77 = t;
  t = term_s_27;
  v_77 = t;
  t = x_77;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(v_77, t_77, w_77, t);
  t = t_77;
  t = p_109(t);
  {
    ATerm x_27 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_109, t);
        LocalPopChoice(b_28);
      }
    else
      {
        t = x_27;
        {
          ATerm d_28 = t;
          int g_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_109(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_28);
            }
          else
            {
              t = d_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm j_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(m_28);
          }
        else
          {
            t = j_28;
            {
              ATerm n_28 = t;
              int r_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_9, o_9, q_9, t);
                  LocalPopChoice(r_28);
                }
              else
                {
                  t = n_28;
                  {
                    ATerm s_28 = t;
                    int t_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(t_28);
                      }
                    else
                      {
                        t = s_28;
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
static ATerm m_9 (ATerm t)
{
  t = input_1_0(t_9, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL;
  t = term_g_20;
  z_77 = t;
  t = term_l_21;
  a_78 = t;
  t = term_v_28;
  t = s_6(z_77, a_78, t);
  t = term_w_28;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_x_28;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = output_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_9, default_usage_0_0, _id, m_9, t);
  return(t);
}
