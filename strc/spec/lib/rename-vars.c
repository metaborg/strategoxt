#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_DynamicRules_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_ExtendOverrideDynamicRules_1;
static Symbol sym_ExtendDynamicRules_1;
static Symbol sym_OverrideDynamicRules_1;
static Symbol sym_GenDynRules_1;
static Symbol sym_LRule_1;
static Symbol sym_Path_2;
static Symbol sym_Rec_2;
static Symbol sym_Scope_2;
static Symbol sym_Let_2;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_Rule_3;
static Symbol sym_RDefT_4;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Undefined_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
static ATerm term_m_36;
static ATerm term_j_36;
static ATerm term_i_36;
static ATerm term_x_35;
static ATerm term_w_35;
static ATerm term_v_35;
static ATerm term_s_35;
static ATerm term_r_35;
static ATerm term_e_35;
static ATerm term_d_35;
static ATerm term_c_35;
static ATerm term_a_35;
static ATerm term_u_34;
static ATerm term_m_34;
static ATerm term_g_34;
static ATerm term_f_34;
static ATerm term_e_34;
static ATerm term_d_34;
static ATerm term_c_34;
static ATerm term_b_34;
static ATerm term_a_34;
static ATerm term_x_33;
static ATerm term_w_33;
static ATerm term_t_33;
static ATerm term_s_33;
static ATerm term_r_33;
static ATerm term_f_33;
static ATerm term_e_33;
static ATerm term_d_33;
static ATerm term_b_33;
static ATerm term_u_32;
static ATerm term_p_32;
static ATerm term_g_32;
static ATerm term_e_32;
static ATerm term_d_32;
static ATerm term_b_32;
static ATerm term_a_32;
static ATerm term_z_31;
static ATerm term_y_31;
static ATerm term_x_31;
static ATerm term_w_31;
static ATerm term_u_31;
static ATerm term_t_31;
static ATerm term_l_31;
static ATerm term_k_31;
static ATerm term_j_31;
static ATerm term_i_31;
static ATerm term_h_31;
static ATerm term_b_31;
static ATerm term_a_31;
static ATerm term_v_30;
static ATerm term_s_30;
static ATerm term_r_30;
static ATerm term_m_30;
static ATerm term_i_30;
static ATerm term_a_30;
static ATerm term_z_29;
static ATerm term_x_28;
static ATerm term_w_28;
static ATerm term_q_28;
static ATerm term_p_28;
static ATerm term_o_28;
static ATerm term_n_28;
static ATerm term_k_28;
static ATerm term_g_28;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_o_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_w_28);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_i_30);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_s_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_i_31, term_j_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym__2, term_w_31, term_x_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_d_32, term_a_31);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_w_31);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_a_34, term_a_31);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym__2, term_d_34, term_a_31);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_a_31);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, (ATerm) ATempty);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_u_34);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_a_34);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_a_31);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm spaste_1_0 (ATerm s_112 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm t_112 (ATerm), ATerm u_112 (ATerm), ATerm v_112 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm x_112 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_5 (ATerm w_23, ATerm v_23, ATerm t);
ATerm SVar_1_0 (ATerm t_92 (ATerm), ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm tpaste_1_0 (ATerm o_112 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm y_112 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm n_5 (ATerm d_134 (ATerm), ATerm c_66, ATerm b_66, ATerm t);
ATerm foldr_3_0 (ATerm i_137 (ATerm), ATerm j_137 (ATerm), ATerm k_137 (ATerm), ATerm t);
static ATerm o_5 (ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm g_66, ATerm f_66, ATerm t);
static ATerm p_5 (ATerm y_133 (ATerm), ATerm a_66, ATerm z_65, ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm r_5 (ATerm q_843, ATerm v_843, ATerm c_83, ATerm t);
ATerm while_not_2_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm p_73 (ATerm j_72, ATerm k_72, ATerm l_72, ATerm t);
static ATerm f_7 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm free_vars_3_0 (ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm e_141 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm p_92 (ATerm), ATerm t);
static ATerm t_5 (ATerm k_139 (ATerm), ATerm l_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_69, ATerm j_69, ATerm i_69, ATerm t);
ATerm at_end_1_0 (ATerm a_132 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_77 (ATerm z_76, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm x_5 (ATerm e_139 (ATerm), ATerm f_139 (ATerm (ATerm), ATerm), ATerm c_69, ATerm f_69, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm s_139 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm z_138 (ATerm (ATerm), ATerm), ATerm a_139 (ATerm), ATerm b_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_139 (ATerm (ATerm), ATerm), ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm c_6 (ATerm i_32, ATerm j_32, ATerm t);
static ATerm d_6 (ATerm o_30, ATerm p_30, ATerm t);
static ATerm f_6 (ATerm o_121 (ATerm), ATerm a_234, ATerm u_30, ATerm t);
static ATerm e_6 (ATerm k_30, ATerm l_30, ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm output_1_0 (ATerm n_144 (ATerm), ATerm t);
static ATerm d_82 (ATerm x_81, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_6 (ATerm q_30, ATerm t);
static ATerm h_6 (ATerm m_75, ATerm n_75, ATerm t);
static ATerm i_6 (ATerm k_32, ATerm l_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_83 (ATerm n_82, ATerm t);
static ATerm u_83 (ATerm r_82, ATerm s_82, ATerm t_82, ATerm t);
static ATerm v_83 (ATerm g_83, ATerm h_83, ATerm i_83, ATerm t);
static ATerm j_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm o_144 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_131 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm p_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm default_system_usage_2_0 (ATerm m_146 (ATerm), ATerm n_146 (ATerm), ATerm t);
static ATerm v_9 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_6 (ATerm k_36, ATerm l_36, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm m_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_6 (ATerm b_42, ATerm c_42, ATerm a_42, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_6 (ATerm j_39, ATerm k_39, ATerm t);
ATerm foldr_2_0 (ATerm g_137 (ATerm), ATerm h_137 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_123 (ATerm), ATerm t);
static ATerm a_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_6 (ATerm q_46, ATerm r_46, ATerm s_46, ATerm t);
ATerm lookup_table_0_1 (ATerm n_43, ATerm t);
ATerm new_hashtable_0_2 (ATerm y_46, ATerm z_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_6 (ATerm v_46, ATerm w_46, ATerm t);
static ATerm n_6 (ATerm a_47, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_131 (ATerm), ATerm t);
static ATerm u_6 (ATerm t_46, ATerm u_46, ATerm t);
static ATerm p_6 (ATerm u_43, ATerm v_43, ATerm t);
static ATerm d_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_146 (ATerm), ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm parse_options_3_0 (ATerm e_146 (ATerm), ATerm f_146 (ATerm), ATerm g_146 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm h_144 (ATerm), ATerm i_144 (ATerm), ATerm j_144 (ATerm), ATerm k_144 (ATerm), ATerm l_144 (ATerm), ATerm t);
static ATerm x_11 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
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
      ATerm l_12 = ATgetArgument(t, 0);
      if(((ATgetType(l_12) != AT_LIST) || !(ATisEmpty(l_12))))
        _fail(t);
      {
        ATerm n_12 = ATgetArgument(t, 1);
        if(((ATgetType(n_12) != AT_LIST) || !(ATisEmpty(n_12))))
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
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_12 = ATgetArgument(t, 0);
      if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
        {
          s_0 = ATgetFirst((ATermList) q_12);
          t_0 = (ATerm) ATgetNext((ATermList) q_12);
        }
      else
        _fail(t);
      {
        ATerm r_12 = ATgetArgument(t, 1);
        if(((ATgetType(r_12) == AT_LIST) && !(ATisEmpty(r_12))))
          {
            u_0 = ATgetFirst((ATermList) r_12);
            v_0 = (ATerm) ATgetNext((ATermList) r_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_0, u_0), (ATerm) ATmakeAppl(sym__2, t_0, v_0));
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL;
  if(match_cons(t, sym__2))
    {
      w_0 = ATgetArgument(t, 0);
      x_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_0), w_0);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm z_0 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      z_0 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_0;
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm v_12 = ATgetArgument(t, 0);
            b_1 = ATgetArgument(t, 1);
            c_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(t_12);
        t = (ATerm) ATmakeAppl(sym_SDef_3, e_1, b_1, c_1);
      }
    else
      {
        t = s_12;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm w_12 = ATgetArgument(t, 0);
            b_1 = ATgetArgument(t, 1);
            c_1 = ATgetArgument(t, 2);
            d_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, e_1, b_1, c_1, d_1);
      }
  }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_13 = ATgetArgument(t, 0);
      if(((ATgetType(b_13) != AT_LIST) || !(ATisEmpty(b_13))))
        _fail(t);
      {
        ATerm d_13 = ATgetArgument(t, 1);
        if(((ATgetType(d_13) != AT_LIST) || !(ATisEmpty(d_13))))
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
  ATerm r_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_13 = ATgetArgument(t, 0);
      if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
        {
          r_2 = ATgetFirst((ATermList) g_13);
          u_2 = (ATerm) ATgetNext((ATermList) g_13);
        }
      else
        _fail(t);
      {
        ATerm i_13 = ATgetArgument(t, 1);
        if(((ATgetType(i_13) == AT_LIST) && !(ATisEmpty(i_13))))
          {
            v_2 = ATgetFirst((ATermList) i_13);
            w_2 = (ATerm) ATgetNext((ATermList) i_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_2, v_2), (ATerm) ATmakeAppl(sym__2, u_2, w_2));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm x_2 = NULL,z_2 = NULL;
  if(match_cons(t, sym__2))
    {
      x_2 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_2), x_2);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm b_3 = NULL,g_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_3;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_13);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_3);
      }
    else
      {
        t = j_13;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_13 = ATgetArgument(t, 0);
            g_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_3, g_3);
      }
  }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_13 = ATgetArgument(t, 0);
      if(((ATgetType(n_13) != AT_LIST) || !(ATisEmpty(n_13))))
        _fail(t);
      {
        ATerm o_13 = ATgetArgument(t, 1);
        if(((ATgetType(o_13) != AT_LIST) || !(ATisEmpty(o_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm c_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_13 = ATgetArgument(t, 0);
      if(((ATgetType(p_13) == AT_LIST) && !(ATisEmpty(p_13))))
        {
          c_5 = ATgetFirst((ATermList) p_13);
          e_5 = (ATerm) ATgetNext((ATermList) p_13);
        }
      else
        _fail(t);
      {
        ATerm q_13 = ATgetArgument(t, 1);
        if(((ATgetType(q_13) == AT_LIST) && !(ATisEmpty(q_13))))
          {
            f_5 = ATgetFirst((ATermList) q_13);
            g_5 = (ATerm) ATgetNext((ATermList) q_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_5, f_5), (ATerm) ATmakeAppl(sym__2, e_5, g_5));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL;
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_5), h_5);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm m_5 = NULL,w_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      m_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5;
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_13);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_5);
      }
    else
      {
        t = r_13;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_13 = ATgetArgument(t, 0);
            w_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_5, w_5);
      }
  }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      if(((ATgetType(w_13) != AT_LIST) || !(ATisEmpty(w_13))))
        _fail(t);
      {
        ATerm x_13 = ATgetArgument(t, 1);
        if(((ATgetType(x_13) != AT_LIST) || !(ATisEmpty(x_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm h_8 = NULL,q_8 = NULL,w_8 = NULL,x_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_14 = ATgetArgument(t, 0);
      if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
        {
          h_8 = ATgetFirst((ATermList) a_14);
          q_8 = (ATerm) ATgetNext((ATermList) a_14);
        }
      else
        _fail(t);
      {
        ATerm b_14 = ATgetArgument(t, 1);
        if(((ATgetType(b_14) == AT_LIST) && !(ATisEmpty(b_14))))
          {
            w_8 = ATgetFirst((ATermList) b_14);
            x_8 = (ATerm) ATgetNext((ATermList) b_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_8, w_8), (ATerm) ATmakeAppl(sym__2, q_8, x_8));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_8), y_8);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm j_9 = NULL,r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      j_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9;
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_14);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_9);
      }
    else
      {
        t = c_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_14 = ATgetArgument(t, 0);
            r_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_9, r_9);
      }
  }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      if(((ATgetType(g_14) != AT_LIST) || !(ATisEmpty(g_14))))
        _fail(t);
      {
        ATerm h_14 = ATgetArgument(t, 1);
        if(((ATgetType(h_14) != AT_LIST) || !(ATisEmpty(h_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm e_11 = NULL,g_11 = NULL,j_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_14 = ATgetArgument(t, 0);
      if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
        {
          e_11 = ATgetFirst((ATermList) i_14);
          g_11 = (ATerm) ATgetNext((ATermList) i_14);
        }
      else
        _fail(t);
      {
        ATerm j_14 = ATgetArgument(t, 1);
        if(((ATgetType(j_14) == AT_LIST) && !(ATisEmpty(j_14))))
          {
            j_11 = ATgetFirst((ATermList) j_14);
            k_11 = (ATerm) ATgetNext((ATermList) j_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_11, j_11), (ATerm) ATmakeAppl(sym__2, g_11, k_11));
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_11), l_11);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm o_11 = NULL,y_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym__2))
    {
      o_11 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11;
  {
    ATerm k_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_14);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_11);
      }
    else
      {
        t = k_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_14 = ATgetArgument(t, 0);
            y_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_11, y_11);
      }
  }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      if(((ATgetType(r_14) != AT_LIST) || !(ATisEmpty(r_14))))
        _fail(t);
      {
        ATerm s_14 = ATgetArgument(t, 1);
        if(((ATgetType(s_14) != AT_LIST) || !(ATisEmpty(s_14))))
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
  ATerm o_12 = NULL,p_12 = NULL,x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_14 = ATgetArgument(t, 0);
      if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
        {
          o_12 = ATgetFirst((ATermList) t_14);
          p_12 = (ATerm) ATgetNext((ATermList) t_14);
        }
      else
        _fail(t);
      {
        ATerm u_14 = ATgetArgument(t, 1);
        if(((ATgetType(u_14) == AT_LIST) && !(ATisEmpty(u_14))))
          {
            x_12 = ATgetFirst((ATermList) u_14);
            y_12 = (ATerm) ATgetNext((ATermList) u_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_12, x_12), (ATerm) ATmakeAppl(sym__2, p_12, y_12));
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_13), z_12);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm c_13 = NULL,e_13 = NULL,h_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_13;
  {
    ATerm v_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_14);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_13);
      }
    else
      {
        t = v_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_14 = ATgetArgument(t, 0);
            e_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_13, e_13);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm s_112 (ATerm), ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
      b_12 = t;
      if(match_cons(t, sym_Let_2))
        {
          c_12 = ATgetArgument(t, 0);
          d_12 = ATgetArgument(t, 1);
          {
            ATerm e_0 = NULL,k_0 = NULL,m_0 = NULL,n_0 = NULL;
            t = SSLgetAnnotations(b_12);
            e_0 = t;
            t = c_12;
            t = s_112(t);
            m_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_12, m_0);
            t = genzip_4_0(a_0, b_0, c_0, h_0, t);
            k_0 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, k_0, d_12);
            n_0 = t;
            t = SSLsetAnnotations(n_0, e_0);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              c_12 = ATgetArgument(t, 0);
              d_12 = ATgetArgument(t, 1);
              e_12 = ATgetArgument(t, 2);
              {
                ATerm j_2 = NULL,n_2 = NULL,o_2 = NULL,m_1 = NULL;
                t = SSLgetAnnotations(b_12);
                j_2 = t;
                t = d_12;
                t = s_112(t);
                o_2 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_12, o_2);
                t = genzip_4_0(i_0, q_0, y_0, a_1, t);
                n_2 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, c_12, n_2, e_12);
                m_1 = t;
                t = SSLsetAnnotations(m_1, j_2);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  c_12 = ATgetArgument(t, 0);
                  d_12 = ATgetArgument(t, 1);
                  e_12 = ATgetArgument(t, 2);
                  a_12 = ATgetArgument(t, 3);
                  {
                    ATerm p_4 = NULL,z_4 = NULL,a_5 = NULL,n_1 = NULL;
                    t = SSLgetAnnotations(b_12);
                    p_4 = t;
                    t = d_12;
                    t = s_112(t);
                    a_5 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_12, a_5);
                    t = genzip_4_0(f_1, g_1, h_1, i_1, t);
                    z_4 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, c_12, z_4, e_12, a_12);
                    n_1 = t;
                    t = SSLsetAnnotations(n_1, p_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_12 = ATgetArgument(t, 0);
                      d_12 = ATgetArgument(t, 1);
                      e_12 = ATgetArgument(t, 2);
                      a_12 = ATgetArgument(t, 3);
                      {
                        ATerm r_7 = NULL,w_7 = NULL,x_7 = NULL,o_1 = NULL;
                        t = SSLgetAnnotations(b_12);
                        r_7 = t;
                        t = d_12;
                        t = s_112(t);
                        x_7 = t;
                        t = (ATerm) ATmakeAppl(sym__2, d_12, x_7);
                        t = genzip_4_0(j_1, k_1, l_1, r_1, t);
                        w_7 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, c_12, w_7, e_12, a_12);
                        o_1 = t;
                        t = SSLsetAnnotations(o_1, r_7);
                      }
                    }
                  else
                    {
                      ATerm r_10 = NULL,b_11 = NULL,c_11 = NULL,p_1 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          c_12 = ATgetArgument(t, 0);
                          d_12 = ATgetArgument(t, 1);
                          e_12 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(b_12);
                      r_10 = t;
                      t = d_12;
                      t = s_112(t);
                      c_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_12, c_11);
                      t = genzip_4_0(s_1, t_1, u_1, v_1, t);
                      b_11 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, c_12, b_11, e_12);
                      p_1 = t;
                      t = SSLsetAnnotations(p_1, r_10);
                    }
                }
            }
        }
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        ATerm c_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_1 (ATerm t);
            static ATerm w_1 (ATerm t)
            {
              ATerm k_12 = NULL,m_12 = NULL;
              m_12 = t;
              t = s_112(t);
              k_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_12, k_12);
              t = genzip_4_0(x_1, y_1, z_1, a_2, t);
              return(t);
            }
            t = dynrule_cong_6_0(_id, w_1, _id, _id, _id, _id, t);
            LocalPopChoice(g_15);
          }
        else
          {
            t = c_15;
            {
              ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,u_12 = NULL,f_13 = NULL,q_1 = NULL;
              l_14 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  m_14 = ATgetArgument(t, 0);
                  n_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_14);
              u_12 = t;
              t = m_14;
              t = s_112(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_13 = ATgetFirst((ATermList) t);
                  {
                    ATerm h_15 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, f_13, n_14);
              q_1 = t;
              t = SSLsetAnnotations(q_1, u_12);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm t_112 (ATerm), ATerm u_112 (ATerm), ATerm v_112 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  d_25 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
      {
        ATerm v_13 = NULL,y_13 = NULL,z_13 = NULL,c_2 = NULL;
        t = SSLgetAnnotations(d_25);
        v_13 = t;
        t = e_25;
        t = t_112(t);
        y_13 = t;
        t = f_25;
        t = t_112(t);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, y_13, z_13);
        c_2 = t;
        t = SSLsetAnnotations(c_2, v_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_25 = ATgetArgument(t, 0);
          f_25 = ATgetArgument(t, 1);
          b_25 = ATgetArgument(t, 2);
          {
            ATerm w_14 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(d_25);
            w_14 = t;
            t = e_25;
            t = v_112(t);
            d_15 = t;
            t = f_25;
            t = v_112(t);
            e_15 = t;
            t = b_25;
            t = t_112(t);
            f_15 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, d_15, e_15, f_15);
            d_2 = t;
            t = SSLsetAnnotations(d_2, w_14);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              e_25 = ATgetArgument(t, 0);
              f_25 = ATgetArgument(t, 1);
              b_25 = ATgetArgument(t, 2);
              a_25 = ATgetArgument(t, 3);
              {
                ATerm q_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,e_2 = NULL;
                t = SSLgetAnnotations(d_25);
                q_15 = t;
                t = e_25;
                t = v_112(t);
                v_15 = t;
                t = f_25;
                t = v_112(t);
                w_15 = t;
                t = b_25;
                t = v_112(t);
                x_15 = t;
                t = a_25;
                t = t_112(t);
                y_15 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, v_15, w_15, x_15, y_15);
                e_2 = t;
                t = SSLsetAnnotations(e_2, q_15);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  e_25 = ATgetArgument(t, 0);
                  f_25 = ATgetArgument(t, 1);
                  b_25 = ATgetArgument(t, 2);
                  a_25 = ATgetArgument(t, 3);
                  {
                    ATerm k_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,f_2 = NULL;
                    t = SSLgetAnnotations(d_25);
                    k_16 = t;
                    t = e_25;
                    t = v_112(t);
                    p_16 = t;
                    t = f_25;
                    t = v_112(t);
                    q_16 = t;
                    t = b_25;
                    t = v_112(t);
                    r_16 = t;
                    t = a_25;
                    t = t_112(t);
                    s_16 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, p_16, q_16, r_16, s_16);
                    f_2 = t;
                    t = SSLsetAnnotations(f_2, k_16);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      e_25 = ATgetArgument(t, 0);
                      f_25 = ATgetArgument(t, 1);
                      b_25 = ATgetArgument(t, 2);
                      {
                        ATerm d_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,g_2 = NULL;
                        t = SSLgetAnnotations(d_25);
                        d_17 = t;
                        t = e_25;
                        t = v_112(t);
                        m_17 = t;
                        t = f_25;
                        t = v_112(t);
                        n_17 = t;
                        t = b_25;
                        t = v_112(t);
                        o_17 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, m_17, n_17, o_17);
                        g_2 = t;
                        t = SSLsetAnnotations(g_2, d_17);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          e_25 = ATgetArgument(t, 0);
                          f_25 = ATgetArgument(t, 1);
                          {
                            ATerm r_18 = NULL,y_18 = NULL,g_19 = NULL,p_2 = NULL;
                            t = SSLgetAnnotations(d_25);
                            r_18 = t;
                            t = e_25;
                            t = v_112(t);
                            y_18 = t;
                            t = f_25;
                            t = t_112(t);
                            g_19 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, y_18, g_19);
                            p_2 = t;
                            t = SSLsetAnnotations(p_2, r_18);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              e_25 = ATgetArgument(t, 0);
                              f_25 = ATgetArgument(t, 1);
                              {
                                ATerm r_19 = NULL,v_19 = NULL,w_19 = NULL,s_2 = NULL;
                                t = SSLgetAnnotations(d_25);
                                r_19 = t;
                                t = e_25;
                                t = v_112(t);
                                v_19 = t;
                                t = f_25;
                                t = t_112(t);
                                w_19 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, v_19, w_19);
                                s_2 = t;
                                t = SSLsetAnnotations(s_2, r_19);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  e_25 = ATgetArgument(t, 0);
                                  f_25 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_20 = NULL,n_20 = NULL,w_20 = NULL,t_2 = NULL;
                                    t = SSLgetAnnotations(d_25);
                                    k_20 = t;
                                    t = e_25;
                                    t = v_112(t);
                                    n_20 = t;
                                    t = f_25;
                                    t = t_112(t);
                                    w_20 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, n_20, w_20);
                                    t_2 = t;
                                    t = SSLsetAnnotations(t_2, k_20);
                                  }
                                }
                              else
                                {
                                  ATerm m_21 = NULL,r_21 = NULL,s_21 = NULL,y_2 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      e_25 = ATgetArgument(t, 0);
                                      f_25 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(d_25);
                                  m_21 = t;
                                  t = e_25;
                                  t = v_112(t);
                                  r_21 = t;
                                  t = f_25;
                                  t = t_112(t);
                                  s_21 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, r_21, s_21);
                                  y_2 = t;
                                  t = SSLsetAnnotations(y_2, m_21);
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
ATerm dynrule_sargs_1_0 (ATerm x_112 (ATerm), ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,p_26 = NULL;
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          l_26 = ATgetArgument(t, 0);
          {
            ATerm k_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_15);
      t = l_26;
      if(match_cons(t, sym_DynRuleId_1))
        {
          m_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_26;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm l_15 = ATgetArgument(t, 0);
          p_26 = ATgetArgument(t, 1);
          {
            ATerm m_15 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = p_26;
    }
  else
    {
      t = i_15;
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                l_26 = ATgetArgument(t, 0);
                {
                  ATerm p_15 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_15);
            t = l_26;
            if(match_cons(t, sym_DynRuleId_1))
              {
                m_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_26;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm r_15 = ATgetArgument(t, 0);
                p_26 = ATgetArgument(t, 1);
                {
                  ATerm s_15 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = p_26;
          }
        else
          {
            t = n_15;
            if(match_cons(t, sym_AddDynRule_2))
              {
                l_26 = ATgetArgument(t, 0);
                {
                  ATerm t_15 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = l_26;
            if(match_cons(t, sym_DynRuleId_1))
              {
                m_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_26;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm u_15 = ATgetArgument(t, 0);
                p_26 = ATgetArgument(t, 1);
                {
                  ATerm z_15 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = p_26;
          }
      }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm x_27 = NULL;
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_27 = ATgetArgument(t, 0);
          {
            ATerm c_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_16);
      t = x_27;
    }
  else
    {
      t = a_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_27;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm d_28 = NULL;
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_28 = ATgetArgument(t, 0);
          {
            ATerm f_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_16);
      t = d_28;
    }
  else
    {
      t = d_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_28;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm q_27 = NULL;
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm i_16 = ATgetArgument(t, 0);
          q_27 = ATgetArgument(t, 1);
          {
            ATerm j_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_16);
      t = q_27;
      t = map_1_0(b_2, t);
    }
  else
    {
      t = g_16;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm l_16 = ATgetArgument(t, 0);
          q_27 = ATgetArgument(t, 1);
          {
            ATerm m_16 = ATgetArgument(t, 2);
          }
          {
            ATerm n_16 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = q_27;
      t = map_1_0(h_2, t);
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm i_28 = NULL;
  ATerm o_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_28 = ATgetArgument(t, 0);
          {
            ATerm u_16 = ATgetArgument(t, 1);
          }
          {
            ATerm v_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_16);
      t = i_28;
    }
  else
    {
      t = o_16;
      if(match_cons(t, sym_SDefT_4))
        {
          i_28 = ATgetArgument(t, 0);
          {
            ATerm w_16 = ATgetArgument(t, 1);
          }
          {
            ATerm x_16 = ATgetArgument(t, 2);
          }
          {
            ATerm y_16 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = i_28;
    }
  return(t);
}
static ATerm k_5 (ATerm w_23, ATerm v_23, ATerm t)
{
  t = w_23;
  t = map_1_0(i_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,y_28 = NULL,a_29 = NULL,p_3 = NULL;
  a_29 = t;
  if(match_cons(t, sym_SVar_1))
    {
      t_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_29);
  s_28 = t;
  t = t_28;
  t = t_92(t);
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, y_28);
  p_3 = t;
  t = SSLsetAnnotations(p_3, s_28);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_29 = NULL,k_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
      j_29 = t;
      if(match_cons(t, sym_Let_2))
        {
          k_29 = ATgetArgument(t, 0);
          p_29 = ATgetArgument(t, 1);
          t = j_29;
          t = k_5(k_29, p_29, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              k_29 = ATgetArgument(t, 0);
              p_29 = ATgetArgument(t, 1);
              q_29 = ATgetArgument(t, 2);
              t = p_29;
              t = map_1_0(l_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  k_29 = ATgetArgument(t, 0);
                  p_29 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, k_29);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_29 = ATgetArgument(t, 0);
                      p_29 = ATgetArgument(t, 1);
                      q_29 = ATgetArgument(t, 2);
                      r_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_29;
                  t = map_1_0(m_2, t);
                }
            }
        }
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            t = dynrule_sargs_1_0(q_2, t);
          }
      }
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm e_30 = NULL;
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_30 = ATgetArgument(t, 0);
          {
            ATerm g_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_17);
      t = e_30;
    }
  else
    {
      t = e_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_30;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm d_31 = NULL;
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_31 = ATgetArgument(t, 0);
          {
            ATerm j_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_17);
      t = d_31;
    }
  else
    {
      t = h_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_31;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = map_1_0(a_3, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm p_31 = NULL;
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_31 = ATgetArgument(t, 0);
          {
            ATerm p_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_17);
      t = p_31;
    }
  else
    {
      t = k_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_31;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, k_2, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,d_38 = NULL,f_38 = NULL;
  v_37 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      d_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
      {
        ATerm o_22 = NULL,s_22 = NULL,u_22 = NULL,x_22 = NULL,y_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,u_3 = NULL,t_3 = NULL,s_3 = NULL;
        t = SSLgetAnnotations(v_37);
        o_22 = t;
        t = d_38;
        if(match_cons(t, sym_DynRuleId_1))
          {
            x_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_38);
        u_22 = t;
        t = x_22;
        if(match_cons(t, sym_RDecT_3))
          {
            b_23 = ATgetArgument(t, 0);
            c_23 = ATgetArgument(t, 1);
            d_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_22);
        a_23 = t;
        t = b_23;
        t = z_112(t);
        f_23 = t;
        t = c_23;
        t = a_113(t);
        g_23 = t;
        t = d_23;
        t = b_113(t);
        h_23 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, f_23, g_23, h_23);
        s_3 = t;
        t = SSLsetAnnotations(s_3, a_23);
        i_23 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, i_23);
        t_3 = t;
        t = SSLsetAnnotations(t_3, u_22);
        y_22 = t;
        t = f_38;
        t = c_113(t);
        s_22 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, y_22, s_22);
        u_3 = t;
        t = SSLsetAnnotations(u_3, o_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          d_38 = ATgetArgument(t, 0);
          f_38 = ATgetArgument(t, 1);
          {
            ATerm u_23 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,s_24 = NULL,v_24 = NULL,z_24 = NULL,c_25 = NULL,m_25 = NULL,n_25 = NULL,z_3 = NULL,x_3 = NULL,w_3 = NULL,v_3 = NULL;
            t = SSLgetAnnotations(v_37);
            u_23 = t;
            t = d_38;
            if(match_cons(t, sym_DynRuleId_1))
              {
                l_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_38);
            k_24 = t;
            t = l_24;
            if(match_cons(t, sym_RDecT_3))
              {
                o_24 = ATgetArgument(t, 0);
                s_24 = ATgetArgument(t, 1);
                v_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_24);
            n_24 = t;
            t = o_24;
            t = z_112(t);
            z_24 = t;
            t = s_24;
            t = a_113(t);
            c_25 = t;
            t = v_24;
            t = b_113(t);
            m_25 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, z_24, c_25, m_25);
            v_3 = t;
            t = SSLsetAnnotations(v_3, n_24);
            n_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, n_25);
            w_3 = t;
            t = SSLsetAnnotations(w_3, k_24);
            m_24 = t;
            t = f_38;
            if(match_cons(t, sym_Rule_3))
              {
                c_24 = ATgetArgument(t, 0);
                d_24 = ATgetArgument(t, 1);
                e_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_38);
            b_24 = t;
            t = c_24;
            t = c_113(t);
            f_24 = t;
            t = d_24;
            t = d_113(t);
            g_24 = t;
            t = e_24;
            t = e_113(t);
            i_24 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, f_24, g_24, i_24);
            x_3 = t;
            t = SSLsetAnnotations(x_3, b_24);
            j_24 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, m_24, j_24);
            z_3 = t;
            t = SSLsetAnnotations(z_3, u_23);
          }
        }
      else
        {
          ATerm y_25 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,o_26 = NULL,t_26 = NULL,u_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,k_4 = NULL,j_4 = NULL,g_4 = NULL,b_4 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              d_38 = ATgetArgument(t, 0);
              f_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_37);
          y_25 = t;
          t = d_38;
          if(match_cons(t, sym_DynRuleId_1))
            {
              o_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_38);
          j_26 = t;
          t = o_26;
          if(match_cons(t, sym_RDecT_3))
            {
              x_26 = ATgetArgument(t, 0);
              y_26 = ATgetArgument(t, 1);
              z_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_26);
          u_26 = t;
          t = x_26;
          t = z_112(t);
          a_27 = t;
          t = y_26;
          t = a_113(t);
          c_27 = t;
          t = z_26;
          t = b_113(t);
          d_27 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, a_27, c_27, d_27);
          b_4 = t;
          t = SSLsetAnnotations(b_4, u_26);
          e_27 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, e_27);
          g_4 = t;
          t = SSLsetAnnotations(g_4, j_26);
          t_26 = t;
          t = f_38;
          if(match_cons(t, sym_Rule_3))
            {
              c_26 = ATgetArgument(t, 0);
              d_26 = ATgetArgument(t, 1);
              e_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_38);
          b_26 = t;
          t = c_26;
          t = c_113(t);
          f_26 = t;
          t = d_26;
          t = d_113(t);
          g_26 = t;
          t = e_26;
          t = e_113(t);
          h_26 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, f_26, g_26, h_26);
          j_4 = t;
          t = SSLsetAnnotations(j_4, b_26);
          i_26 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, t_26, i_26);
          k_4 = t;
          t = SSLsetAnnotations(k_4, y_25);
        }
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_17 = ATgetArgument(t, 0);
      if(((ATgetType(q_17) != AT_LIST) || !(ATisEmpty(q_17))))
        _fail(t);
      {
        ATerm r_17 = ATgetArgument(t, 1);
        if(((ATgetType(r_17) != AT_LIST) || !(ATisEmpty(r_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,b_30 = NULL,c_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
        {
          v_29 = ATgetFirst((ATermList) s_17);
          w_29 = (ATerm) ATgetNext((ATermList) s_17);
        }
      else
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
          {
            b_30 = ATgetFirst((ATermList) t_17);
            c_30 = (ATerm) ATgetNext((ATermList) t_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_29, b_30), (ATerm) ATmakeAppl(sym__2, w_29, c_30));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm d_30 = NULL,g_30 = NULL;
  if(match_cons(t, sym__2))
    {
      d_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_30), d_30);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm j_30 = NULL,n_30 = NULL,t_30 = NULL;
  if(match_cons(t, sym__2))
    {
      j_30 = ATgetArgument(t, 0);
      t_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_30;
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_17);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_30);
      }
    else
      {
        t = u_17;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_17 = ATgetArgument(t, 0);
            n_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, t_30, n_30);
      }
  }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      if(((ATgetType(y_17) != AT_LIST) || !(ATisEmpty(y_17))))
        _fail(t);
      {
        ATerm z_17 = ATgetArgument(t, 1);
        if(((ATgetType(z_17) != AT_LIST) || !(ATisEmpty(z_17))))
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
  ATerm h_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_18 = ATgetArgument(t, 0);
      if(((ATgetType(a_18) == AT_LIST) && !(ATisEmpty(a_18))))
        {
          h_32 = ATgetFirst((ATermList) a_18);
          m_32 = (ATerm) ATgetNext((ATermList) a_18);
        }
      else
        _fail(t);
      {
        ATerm b_18 = ATgetArgument(t, 1);
        if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
          {
            n_32 = ATgetFirst((ATermList) b_18);
            o_32 = (ATerm) ATgetNext((ATermList) b_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_32, n_32), (ATerm) ATmakeAppl(sym__2, m_32, o_32));
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL;
  if(match_cons(t, sym__2))
    {
      v_32 = ATgetArgument(t, 0);
      w_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_32), v_32);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm c_33 = NULL,g_33 = NULL,h_33 = NULL;
  if(match_cons(t, sym__2))
    {
      c_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_33;
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_33);
      }
    else
      {
        t = c_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_18 = ATgetArgument(t, 0);
            g_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_33, g_33);
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_18 = ATgetArgument(t, 0);
      if(((ATgetType(g_18) != AT_LIST) || !(ATisEmpty(g_18))))
        _fail(t);
      {
        ATerm h_18 = ATgetArgument(t, 1);
        if(((ATgetType(h_18) != AT_LIST) || !(ATisEmpty(h_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm t_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_18 = ATgetArgument(t, 0);
      if(((ATgetType(i_18) == AT_LIST) && !(ATisEmpty(i_18))))
        {
          t_34 = ATgetFirst((ATermList) i_18);
          v_34 = (ATerm) ATgetNext((ATermList) i_18);
        }
      else
        _fail(t);
      {
        ATerm j_18 = ATgetArgument(t, 1);
        if(((ATgetType(j_18) == AT_LIST) && !(ATisEmpty(j_18))))
          {
            w_34 = ATgetFirst((ATermList) j_18);
            x_34 = (ATerm) ATgetNext((ATermList) j_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_34, w_34), (ATerm) ATmakeAppl(sym__2, v_34, x_34));
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL;
  if(match_cons(t, sym__2))
    {
      y_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_34), y_34);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm b_35 = NULL,l_35 = NULL,q_35 = NULL;
  if(match_cons(t, sym__2))
    {
      b_35 = ATgetArgument(t, 0);
      q_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_35;
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm m_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_35);
      }
    else
      {
        t = k_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm n_18 = ATgetArgument(t, 0);
            l_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_35, l_35);
      }
  }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_18 = ATgetArgument(t, 0);
      if(((ATgetType(o_18) != AT_LIST) || !(ATisEmpty(o_18))))
        _fail(t);
      {
        ATerm p_18 = ATgetArgument(t, 1);
        if(((ATgetType(p_18) != AT_LIST) || !(ATisEmpty(p_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm v_48 = NULL,y_48 = NULL,z_48 = NULL,c_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      if(((ATgetType(q_18) == AT_LIST) && !(ATisEmpty(q_18))))
        {
          v_48 = ATgetFirst((ATermList) q_18);
          y_48 = (ATerm) ATgetNext((ATermList) q_18);
        }
      else
        _fail(t);
      {
        ATerm s_18 = ATgetArgument(t, 1);
        if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
          {
            z_48 = ATgetFirst((ATermList) s_18);
            c_49 = (ATerm) ATgetNext((ATermList) s_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_48, z_48), (ATerm) ATmakeAppl(sym__2, y_48, c_49));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm d_49 = NULL,i_49 = NULL;
  if(match_cons(t, sym__2))
    {
      d_49 = ATgetArgument(t, 0);
      i_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_49), d_49);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm l_49 = NULL,s_49 = NULL,t_49 = NULL;
  if(match_cons(t, sym__2))
    {
      l_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_49;
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_49);
      }
    else
      {
        t = t_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            s_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, t_49, s_49);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm o_112 (ATerm), ATerm t)
{
  ATerm x_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_48 = NULL,l_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
      h_48 = t;
      if(match_cons(t, sym_Scope_2))
        {
          l_48 = ATgetArgument(t, 0);
          o_48 = ATgetArgument(t, 1);
          {
            ATerm n_27 = NULL,s_27 = NULL,v_5 = NULL;
            t = SSLgetAnnotations(h_48);
            n_27 = t;
            t = l_48;
            t = o_112(t);
            s_27 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, s_27, o_48);
            v_5 = t;
            t = SSLsetAnnotations(v_5, n_27);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              l_48 = ATgetArgument(t, 0);
              {
                ATerm v_28 = NULL,b_6 = NULL;
                t = SSLgetAnnotations(h_48);
                v_28 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, l_48);
                b_6 = t;
                t = SSLsetAnnotations(b_6, v_28);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  l_48 = ATgetArgument(t, 0);
                  o_48 = ATgetArgument(t, 1);
                  p_48 = ATgetArgument(t, 2);
                  {
                    ATerm g_29 = NULL,m_29 = NULL,n_29 = NULL,o_6 = NULL;
                    t = SSLgetAnnotations(h_48);
                    g_29 = t;
                    t = p_48;
                    t = o_112(t);
                    n_29 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_48, n_29);
                    t = genzip_4_0(c_3, d_3, e_3, f_3, t);
                    m_29 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, l_48, o_48, m_29);
                    o_6 = t;
                    t = SSLsetAnnotations(o_6, g_29);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_48 = ATgetArgument(t, 0);
                      o_48 = ATgetArgument(t, 1);
                      p_48 = ATgetArgument(t, 2);
                      q_48 = ATgetArgument(t, 3);
                      {
                        ATerm v_31 = NULL,c_32 = NULL,f_32 = NULL,v_6 = NULL;
                        t = SSLgetAnnotations(h_48);
                        v_31 = t;
                        t = p_48;
                        t = o_112(t);
                        f_32 = t;
                        t = (ATerm) ATmakeAppl(sym__2, p_48, f_32);
                        t = genzip_4_0(h_3, i_3, j_3, l_3, t);
                        c_32 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, l_48, o_48, c_32, q_48);
                        v_6 = t;
                        t = SSLsetAnnotations(v_6, v_31);
                      }
                    }
                  else
                    {
                      ATerm i_34 = NULL,n_34 = NULL,o_34 = NULL,z_6 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          l_48 = ATgetArgument(t, 0);
                          o_48 = ATgetArgument(t, 1);
                          p_48 = ATgetArgument(t, 2);
                          q_48 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(h_48);
                      i_34 = t;
                      t = p_48;
                      t = o_112(t);
                      o_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_48, o_34);
                      t = genzip_4_0(m_3, n_3, o_3, q_3, t);
                      n_34 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, l_48, o_48, n_34, q_48);
                      z_6 = t;
                      t = SSLsetAnnotations(z_6, i_34);
                    }
                }
            }
        }
      LocalPopChoice(z_18);
    }
  else
    {
      t = x_18;
      {
        static ATerm r_3 (ATerm t);
        static ATerm r_3 (ATerm t)
        {
          ATerm t_48 = NULL,u_48 = NULL;
          u_48 = t;
          t = o_112(t);
          t_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_48, t_48);
          t = genzip_4_0(y_3, a_4, c_4, d_4, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, r_3, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL;
  p_61 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_61 = ATgetArgument(t, 0);
      o_61 = ATgetArgument(t, 1);
      {
        ATerm t_36 = NULL,x_36 = NULL,a_37 = NULL,g_7 = NULL;
        t = SSLgetAnnotations(p_61);
        t_36 = t;
        t = q_61;
        t = r_112(t);
        x_36 = t;
        t = o_61;
        t = p_112(t);
        a_37 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, x_36, a_37);
        g_7 = t;
        t = SSLsetAnnotations(g_7, t_36);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          q_61 = ATgetArgument(t, 0);
          {
            ATerm p_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,j_7 = NULL,i_7 = NULL;
            t = SSLgetAnnotations(p_61);
            p_37 = t;
            t = q_61;
            if(match_cons(t, sym_Rule_3))
              {
                s_37 = ATgetArgument(t, 0);
                t_37 = ATgetArgument(t, 1);
                u_37 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_61);
            r_37 = t;
            t = s_37;
            t = p_112(t);
            w_37 = t;
            t = t_37;
            t = p_112(t);
            x_37 = t;
            t = u_37;
            t = p_112(t);
            y_37 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, w_37, x_37, y_37);
            i_7 = t;
            t = SSLsetAnnotations(i_7, r_37);
            z_37 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, z_37);
            j_7 = t;
            t = SSLsetAnnotations(j_7, p_37);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              q_61 = ATgetArgument(t, 0);
              o_61 = ATgetArgument(t, 1);
              m_61 = ATgetArgument(t, 2);
              {
                ATerm k_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,k_7 = NULL;
                t = SSLgetAnnotations(p_61);
                k_38 = t;
                t = q_61;
                t = r_112(t);
                q_38 = t;
                t = o_61;
                t = r_112(t);
                r_38 = t;
                t = m_61;
                t = r_112(t);
                s_38 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, q_38, r_38, s_38);
                k_7 = t;
                t = SSLsetAnnotations(k_7, k_38);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  q_61 = ATgetArgument(t, 0);
                  o_61 = ATgetArgument(t, 1);
                  m_61 = ATgetArgument(t, 2);
                  n_61 = ATgetArgument(t, 3);
                  {
                    ATerm d_39 = NULL,i_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,l_7 = NULL;
                    t = SSLgetAnnotations(p_61);
                    d_39 = t;
                    t = q_61;
                    t = r_112(t);
                    i_39 = t;
                    t = o_61;
                    t = r_112(t);
                    l_39 = t;
                    t = m_61;
                    t = r_112(t);
                    m_39 = t;
                    t = n_61;
                    t = p_112(t);
                    n_39 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, i_39, l_39, m_39, n_39);
                    l_7 = t;
                    t = SSLsetAnnotations(l_7, d_39);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_61 = ATgetArgument(t, 0);
                      o_61 = ATgetArgument(t, 1);
                      m_61 = ATgetArgument(t, 2);
                      n_61 = ATgetArgument(t, 3);
                      {
                        ATerm z_39 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,m_7 = NULL;
                        t = SSLgetAnnotations(p_61);
                        z_39 = t;
                        t = q_61;
                        t = r_112(t);
                        e_40 = t;
                        t = o_61;
                        t = r_112(t);
                        f_40 = t;
                        t = m_61;
                        t = r_112(t);
                        g_40 = t;
                        t = n_61;
                        t = p_112(t);
                        h_40 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, e_40, f_40, g_40, h_40);
                        m_7 = t;
                        t = SSLsetAnnotations(m_7, z_39);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          q_61 = ATgetArgument(t, 0);
                          o_61 = ATgetArgument(t, 1);
                          {
                            ATerm r_40 = NULL,u_40 = NULL,v_40 = NULL,y_7 = NULL;
                            t = SSLgetAnnotations(p_61);
                            r_40 = t;
                            t = q_61;
                            t = r_112(t);
                            u_40 = t;
                            t = o_61;
                            t = p_112(t);
                            v_40 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, u_40, v_40);
                            y_7 = t;
                            t = SSLsetAnnotations(y_7, r_40);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              q_61 = ATgetArgument(t, 0);
                              o_61 = ATgetArgument(t, 1);
                              {
                                ATerm j_41 = NULL,n_41 = NULL,o_41 = NULL,z_7 = NULL;
                                t = SSLgetAnnotations(p_61);
                                j_41 = t;
                                t = q_61;
                                t = r_112(t);
                                n_41 = t;
                                t = o_61;
                                t = p_112(t);
                                o_41 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, n_41, o_41);
                                z_7 = t;
                                t = SSLsetAnnotations(z_7, j_41);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  q_61 = ATgetArgument(t, 0);
                                  o_61 = ATgetArgument(t, 1);
                                  {
                                    ATerm f_42 = NULL,j_42 = NULL,k_42 = NULL,a_8 = NULL;
                                    t = SSLgetAnnotations(p_61);
                                    f_42 = t;
                                    t = q_61;
                                    t = r_112(t);
                                    j_42 = t;
                                    t = o_61;
                                    t = p_112(t);
                                    k_42 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, j_42, k_42);
                                    a_8 = t;
                                    t = SSLsetAnnotations(a_8, f_42);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      q_61 = ATgetArgument(t, 0);
                                      {
                                        ATerm s_42 = NULL,v_42 = NULL,b_8 = NULL;
                                        t = SSLgetAnnotations(p_61);
                                        s_42 = t;
                                        t = q_61;
                                        t = p_112(t);
                                        v_42 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, v_42);
                                        b_8 = t;
                                        t = SSLsetAnnotations(b_8, s_42);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          q_61 = ATgetArgument(t, 0);
                                          {
                                            ATerm c_43 = NULL,f_43 = NULL,c_8 = NULL;
                                            t = SSLgetAnnotations(p_61);
                                            c_43 = t;
                                            t = q_61;
                                            t = p_112(t);
                                            f_43 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, f_43);
                                            c_8 = t;
                                            t = SSLsetAnnotations(c_8, c_43);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              q_61 = ATgetArgument(t, 0);
                                              {
                                                ATerm q_43 = NULL,t_43 = NULL,d_8 = NULL;
                                                t = SSLgetAnnotations(p_61);
                                                q_43 = t;
                                                t = q_61;
                                                t = p_112(t);
                                                t_43 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, t_43);
                                                d_8 = t;
                                                t = SSLsetAnnotations(d_8, q_43);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  q_61 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm j_44 = NULL,s_44 = NULL,e_8 = NULL;
                                                    t = SSLgetAnnotations(p_61);
                                                    j_44 = t;
                                                    t = q_61;
                                                    t = p_112(t);
                                                    s_44 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, s_44);
                                                    e_8 = t;
                                                    t = SSLsetAnnotations(e_8, j_44);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm w_45 = NULL,y_45 = NULL,f_8 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      q_61 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(p_61);
                                                  w_45 = t;
                                                  t = q_61;
                                                  t = p_112(t);
                                                  y_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, y_45);
                                                  f_8 = t;
                                                  t = SSLsetAnnotations(f_8, w_45);
                                                }
                                            }
                                        }
                                    }
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
ATerm dynrule_targs_1_0 (ATerm y_112 (ATerm), ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,t_62 = NULL;
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          p_62 = ATgetArgument(t, 0);
          {
            ATerm c_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_19);
      t = p_62;
      if(match_cons(t, sym_DynRuleId_1))
        {
          q_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_62;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm d_19 = ATgetArgument(t, 0);
          ATerm e_19 = ATgetArgument(t, 1);
          t_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_62;
    }
  else
    {
      t = a_19;
      {
        ATerm f_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                p_62 = ATgetArgument(t, 0);
                {
                  ATerm i_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_19);
            t = p_62;
            if(match_cons(t, sym_DynRuleId_1))
              {
                q_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_62;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_19 = ATgetArgument(t, 0);
                ATerm k_19 = ATgetArgument(t, 1);
                t_62 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = t_62;
          }
        else
          {
            t = f_19;
            if(match_cons(t, sym_AddDynRule_2))
              {
                p_62 = ATgetArgument(t, 0);
                {
                  ATerm l_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = p_62;
            if(match_cons(t, sym_DynRuleId_1))
              {
                q_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_62;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_19 = ATgetArgument(t, 0);
                ATerm n_19 = ATgetArgument(t, 1);
                t_62 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = t_62;
          }
      }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm j_63 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_63 = ATgetArgument(t, 0);
          {
            ATerm q_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_19);
      t = j_63;
    }
  else
    {
      t = o_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_63;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm u_63 = NULL;
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_63 = ATgetArgument(t, 0);
          {
            ATerm u_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_19);
      t = u_63;
    }
  else
    {
      t = s_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_63;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm e_63 = NULL;
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm z_19 = ATgetArgument(t, 0);
          ATerm a_20 = ATgetArgument(t, 1);
          e_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(y_19);
      t = e_63;
      t = map_1_0(e_4, t);
    }
  else
    {
      t = x_19;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm b_20 = ATgetArgument(t, 0);
          ATerm c_20 = ATgetArgument(t, 1);
          e_63 = ATgetArgument(t, 2);
          {
            ATerm d_20 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = e_63;
      t = map_1_0(f_4, t);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm s_64 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_64);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            {
              ATerm i_20 = t;
              int j_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_64 = ATgetArgument(t, 0);
                      v_64 = ATgetArgument(t, 1);
                      w_64 = ATgetArgument(t, 2);
                      x_64 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_64;
                  t = map_1_0(l_4, t);
                  LocalPopChoice(j_20);
                }
              else
                {
                  t = i_20;
                  {
                    ATerm l_20 = t;
                    int m_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_20);
                      }
                    else
                      {
                        t = l_20;
                        t = dynrule_targs_1_0(m_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm e_65 = NULL;
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_65 = ATgetArgument(t, 0);
          {
            ATerm q_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_20);
      t = e_65;
    }
  else
    {
      t = o_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_65;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = map_1_0(n_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm j_65 = NULL;
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_65 = ATgetArgument(t, 0);
          {
            ATerm t_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_20);
      t = j_65;
    }
  else
    {
      t = r_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_65;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm n_65 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_65);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_65 = ATgetArgument(t, 0);
                      q_65 = ATgetArgument(t, 1);
                      r_65 = ATgetArgument(t, 2);
                      s_65 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_65;
                  t = map_1_0(r_4, t);
                  LocalPopChoice(a_21);
                }
              else
                {
                  t = z_20;
                  {
                    ATerm b_21 = t;
                    int c_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(c_21);
                      }
                    else
                      {
                        t = b_21;
                        t = dynrule_targs_1_0(s_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm d_66 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_66 = ATgetArgument(t, 0);
          {
            ATerm f_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_21);
      t = d_66;
    }
  else
    {
      t = d_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_66;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = map_1_0(t_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm n_66 = NULL;
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_66 = ATgetArgument(t, 0);
          {
            ATerm i_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_21);
      t = n_66;
    }
  else
    {
      t = g_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_66;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm r_66 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_66);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm l_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_21);
          }
        else
          {
            t = l_21;
            {
              ATerm o_21 = t;
              int p_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_66 = ATgetArgument(t, 0);
                      u_66 = ATgetArgument(t, 1);
                      v_66 = ATgetArgument(t, 2);
                      w_66 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_66;
                  t = map_1_0(w_4, t);
                  LocalPopChoice(p_21);
                }
              else
                {
                  t = o_21;
                  {
                    ATerm q_21 = t;
                    int t_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_21);
                      }
                    else
                      {
                        t = q_21;
                        t = dynrule_targs_1_0(x_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm d_67 = NULL;
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_67 = ATgetArgument(t, 0);
          {
            ATerm w_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_21);
      t = d_67;
    }
  else
    {
      t = u_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_67;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = map_1_0(y_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm i_67 = NULL;
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_67 = ATgetArgument(t, 0);
          {
            ATerm z_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_21);
      t = i_67;
    }
  else
    {
      t = x_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_67;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm m_67 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_67);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm c_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_22);
          }
        else
          {
            t = c_22;
            {
              ATerm e_22 = t;
              int f_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_67 = ATgetArgument(t, 0);
                      t_67 = ATgetArgument(t, 1);
                      u_67 = ATgetArgument(t, 2);
                      v_67 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_67;
                  t = map_1_0(j_5, t);
                  LocalPopChoice(f_22);
                }
              else
                {
                  t = e_22;
                  {
                    ATerm g_22 = t;
                    int h_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_22);
                      }
                    else
                      {
                        t = g_22;
                        t = dynrule_targs_1_0(l_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm c_68 = NULL;
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_68 = ATgetArgument(t, 0);
          {
            ATerm k_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_22);
      t = c_68;
    }
  else
    {
      t = i_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_68;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = map_1_0(q_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm h_68 = NULL;
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_68 = ATgetArgument(t, 0);
          {
            ATerm n_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_22);
      t = h_68;
    }
  else
    {
      t = l_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_68;
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_68);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm r_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_22);
          }
        else
          {
            t = r_22;
            {
              ATerm v_22 = t;
              int w_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_68 = ATgetArgument(t, 0);
                      o_68 = ATgetArgument(t, 1);
                      p_68 = ATgetArgument(t, 2);
                      q_68 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_68;
                  t = map_1_0(z_5, t);
                  LocalPopChoice(w_22);
                }
              else
                {
                  t = v_22;
                  {
                    ATerm z_22 = t;
                    int e_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_23);
                      }
                    else
                      {
                        t = z_22;
                        t = dynrule_targs_1_0(a_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm x_68 = NULL;
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_68 = ATgetArgument(t, 0);
          {
            ATerm l_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_23);
      t = x_68;
    }
  else
    {
      t = j_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_68;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = map_1_0(l_6, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm n_69 = NULL;
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_69 = ATgetArgument(t, 0);
          {
            ATerm o_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_23);
      t = n_69;
    }
  else
    {
      t = m_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_69;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm q_64 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      q_64 = ATgetArgument(t, 0);
      t = q_64;
      t = free_vars_3_0(h_4, i_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          q_64 = ATgetArgument(t, 0);
          t = q_64;
          t = free_vars_3_0(o_4, q_4, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              q_64 = ATgetArgument(t, 0);
              t = q_64;
              t = free_vars_3_0(u_4, v_4, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_64 = ATgetArgument(t, 0);
                  t = q_64;
                  t = free_vars_3_0(b_5, d_5, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      q_64 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_64;
                  t = free_vars_3_0(s_5, u_5, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm n_5 (ATerm d_134 (ATerm), ATerm c_66, ATerm b_66, ATerm t)
{
  static ATerm f_70 (ATerm t);
  static ATerm f_70 (ATerm t)
  {
    ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL;
    a_70 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_66;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_70 = ATgetFirst((ATermList) t);
            c_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_70;
              {
                static ATerm r_6 (ATerm t);
                static ATerm r_6 (ATerm t)
                {
                  t = b_66;
                  return(t);
                }
                t = o_5(d_134, r_6, b_70, c_70, t);
              }
              t = f_70(t);
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              {
                ATerm d_47 = NULL,p_47 = NULL,b_9 = NULL;
                t = SSLgetAnnotations(a_70);
                d_47 = t;
                t = c_70;
                t = f_70(t);
                p_47 = t;
                t = (ATerm) ATinsert(CheckATermList(p_47), b_70);
                b_9 = t;
                t = SSLsetAnnotations(b_9, d_47);
              }
            }
        }
      }
    return(t);
  }
  t = c_66;
  t = f_70(t);
  return(t);
}
ATerm foldr_3_0 (ATerm i_137 (ATerm), ATerm j_137 (ATerm), ATerm k_137 (ATerm), ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL;
  i_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_70;
      t = i_137(t);
    }
  else
    {
      ATerm n_70 = NULL,o_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_70 = ATgetFirst((ATermList) t);
          k_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_70;
      t = k_137(t);
      n_70 = t;
      t = k_70;
      t = foldr_3_0(i_137, j_137, k_137, t);
      o_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_70, o_70);
      t = j_137(t);
    }
  return(t);
}
static ATerm o_5 (ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm g_66, ATerm f_66, ATerm t)
{
  t = h_134(t);
  {
    static ATerm w_6 (ATerm t);
    static ATerm w_6 (ATerm t)
    {
      ATerm s_70 = NULL;
      s_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_66, s_70);
      t = g_134(t);
      return(t);
    }
    t = fetch_1_0(w_6, t);
  }
  t = f_66;
  return(t);
}
static ATerm p_5 (ATerm y_133 (ATerm), ATerm a_66, ATerm z_65, ATerm t)
{
  static ATerm i_71 (ATerm t);
  static ATerm i_71 (ATerm t)
  {
    ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL;
    d_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_71;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_71 = ATgetFirst((ATermList) t);
            f_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_23 = t;
          int s_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_71;
              {
                static ATerm x_6 (ATerm t);
                static ATerm x_6 (ATerm t)
                {
                  t = z_65;
                  return(t);
                }
                t = o_5(y_133, x_6, e_71, f_71, t);
              }
              t = i_71(t);
              LocalPopChoice(s_23);
            }
          else
            {
              t = r_23;
              {
                ATerm b_48 = NULL,i_48 = NULL,d_9 = NULL;
                t = SSLgetAnnotations(d_71);
                b_48 = t;
                t = f_71;
                t = i_71(t);
                i_48 = t;
                t = (ATerm) ATinsert(CheckATermList(i_48), e_71);
                d_9 = t;
                t = SSLsetAnnotations(d_9, b_48);
              }
            }
        }
      }
    return(t);
  }
  t = a_66;
  t = i_71(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_23 = ATgetArgument(t, 0);
      if(((ATgetType(t_23) != AT_LIST) || !(ATisEmpty(t_23))))
        _fail(t);
      {
        ATerm x_23 = ATgetArgument(t, 1);
        if(((ATgetType(x_23) != AT_LIST) || !(ATisEmpty(x_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_23 = ATgetArgument(t, 0);
      if(((ATgetType(y_23) == AT_LIST) && !(ATisEmpty(y_23))))
        {
          q_71 = ATgetFirst((ATermList) y_23);
          r_71 = (ATerm) ATgetNext((ATermList) y_23);
        }
      else
        _fail(t);
      {
        ATerm z_23 = ATgetArgument(t, 1);
        if(((ATgetType(z_23) == AT_LIST) && !(ATisEmpty(z_23))))
          {
            s_71 = ATgetFirst((ATermList) z_23);
            t_71 = (ATerm) ATgetNext((ATermList) z_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_71, s_71), (ATerm) ATmakeAppl(sym__2, r_71, t_71));
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  if(match_cons(t, sym__2))
    {
      u_71 = ATgetArgument(t, 0);
      v_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_71), u_71);
  return(t);
}
static ATerm r_5 (ATerm q_843, ATerm v_843, ATerm c_83, ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL;
  t = SSL_explode_term(v_843);
  if(match_cons(t, sym__2))
    {
      l_71 = ATgetArgument(t, 0);
      n_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_843);
  if(match_cons(t, sym__2))
    {
      if((l_71 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_71, n_71);
  t = genzip_4_0(y_6, a_7, b_7, _id, t);
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_71, c_83);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_120 (ATerm), ATerm r_120 (ATerm), ATerm t)
{
  static ATerm x_71 (ATerm t);
  static ATerm x_71 (ATerm t)
  {
    ATerm a_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_120(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = a_24;
        t = r_120(t);
        t = x_71(t);
      }
    return(t);
  }
  t = x_71(t);
  return(t);
}
ATerm for_3_0 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm t)
{
  t = t_120(t);
  t = while_not_2_0(u_120, v_120, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm e_72 = NULL;
  e_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_72);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,f_9 = NULL;
  i_72 = t;
  if(match_cons(t, sym__2))
    {
      g_72 = ATgetArgument(t, 0);
      h_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_72);
  f_72 = t;
  t = h_72;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_72, h_72);
  f_9 = t;
  t = SSLsetAnnotations(f_9, f_72);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL;
  b_73 = t;
  if(match_cons(t, sym__2))
    {
      c_73 = ATgetArgument(t, 0);
      d_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_73 = ATgetFirst((ATermList) t);
      f_73 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_73(c_73, d_73, b_73, t);
            LocalPopChoice(q_24);
          }
        else
          {
            t = p_24;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_73), e_73), f_73);
          }
      }
    }
  else
    {
      t = p_73(c_73, d_73, b_73, t);
    }
  return(t);
}
static ATerm p_73 (ATerm j_72, ATerm k_72, ATerm l_72, ATerm t)
{
  ATerm m_72 = NULL,p_72 = NULL,g_9 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL;
  t = SSLgetAnnotations(l_72);
  m_72 = t;
  t = k_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_72 = ATgetFirst((ATermList) t);
      v_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_72;
  if(match_cons(t, sym__2))
    {
      t_72 = ATgetArgument(t, 0);
      u_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_72;
        if((t_72 != t))
          {
            _fail(t);
          }
        t = v_72;
        LocalPopChoice(t_24);
      }
    else
      {
        t = r_24;
        t = k_72;
        t = r_5(t_72, u_72, v_72, t);
      }
  }
  p_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_72, p_72);
  g_9 = t;
  t = SSLsetAnnotations(g_9, m_72);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm o_73 = NULL;
  if(match_cons(t, sym__2))
    {
      o_73 = ATgetArgument(t, 0);
      if((o_73 != ATgetArgument(t, 1)))
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
  ATerm u_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_7, d_7, e_7, t);
      LocalPopChoice(w_24);
    }
  else
    {
      t = u_24;
      {
        ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL;
        j_73 = t;
        if(match_cons(t, sym__2))
          {
            k_73 = ATgetArgument(t, 0);
            l_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_73;
        t = p_5(f_7, k_73, l_73, t);
      }
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL;
  if(match_cons(t, sym__2))
    {
      f_49 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(q_7, f_49, g_49, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm h_49 = NULL;
  if(match_cons(t, sym__2))
    {
      h_49 = ATgetArgument(t, 0);
      if((h_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL;
  if(match_cons(t, sym__2))
    {
      u_49 = ATgetArgument(t, 0);
      v_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(u_7, u_49, v_49, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm y_49 = NULL;
  if(match_cons(t, sym__2))
    {
      y_49 = ATgetArgument(t, 0);
      if((y_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm e_141 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm d_74 (ATerm t);
  static ATerm d_74 (ATerm t)
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_141(t);
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_73 = NULL,s_73 = NULL,w_48 = NULL,x_48 = NULL;
              r_73 = t;
              t = d_141(t);
              s_73 = t;
              t = r_73;
              {
                static ATerm h_7 (ATerm t);
                static ATerm h_7 (ATerm t)
                {
                  ATerm u_73 = NULL;
                  t = d_74(t);
                  u_73 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_73, s_73);
                  t = diff_0_0(t);
                  return(t);
                }
                t = e_141(h_7, d_74, n_7, t);
              }
              x_48 = t;
              t = SSL_explode_term(x_48);
              if(match_cons(t, sym__2))
                {
                  ATerm i_25 = ATgetArgument(t, 0);
                  w_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_48;
              t = foldr_3_0(o_7, p_7, _id, t);
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              {
                ATerm m_49 = NULL,n_49 = NULL;
                n_49 = t;
                t = SSL_explode_term(n_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_25 = ATgetArgument(t, 0);
                    m_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_49;
                t = foldr_3_0(s_7, t_7, d_74, t);
              }
            }
        }
      }
    return(t);
  }
  t = d_74(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm q_74 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_74);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            {
              ATerm q_25 = t;
              int r_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_74 = ATgetArgument(t, 0);
                      t_74 = ATgetArgument(t, 1);
                      u_74 = ATgetArgument(t, 2);
                      v_74 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_74;
                  t = map_1_0(i_8, t);
                  LocalPopChoice(r_25);
                }
              else
                {
                  t = q_25;
                  {
                    ATerm s_25 = t;
                    int t_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_25);
                      }
                    else
                      {
                        t = s_25;
                        t = dynrule_targs_1_0(j_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm c_75 = NULL;
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_75 = ATgetArgument(t, 0);
          {
            ATerm w_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_25);
      t = c_75;
    }
  else
    {
      t = u_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_75;
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = map_1_0(k_8, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm h_75 = NULL;
  ATerm x_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_75 = ATgetArgument(t, 0);
          {
            ATerm a_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_25);
      t = h_75;
    }
  else
    {
      t = x_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_75;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm j_74 = NULL,n_74 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      n_74 = ATgetArgument(t, 0);
      t = n_74;
      if(match_cons(t, sym_Rule_3))
        {
          j_74 = ATgetArgument(t, 0);
          {
            ATerm k_26 = ATgetArgument(t, 1);
          }
          {
            ATerm n_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = j_74;
      t = free_vars_3_0(v_7, g_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          n_74 = ATgetArgument(t, 0);
          {
            ATerm q_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_74;
    }
  return(t);
}
ATerm Var_1_0 (ATerm p_92 (ATerm), ATerm t)
{
  ATerm l_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,l_9 = NULL;
  q_75 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_75);
  l_75 = t;
  t = o_75;
  t = p_92(t);
  p_75 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_75);
  l_9 = t;
  t = SSLsetAnnotations(l_9, l_75);
  return(t);
}
static ATerm t_5 (ATerm k_139 (ATerm), ATerm l_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_69, ATerm j_69, ATerm i_69, ATerm t)
{
  static ATerm l_8 (ATerm t);
  static ATerm m_8 (ATerm t);
  static ATerm l_8 (ATerm t)
  {
    ATerm s_75 = NULL;
    s_75 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_75, i_69);
    t = k_139(t);
    return(t);
  }
  static ATerm m_8 (ATerm t)
  {
    ATerm t_75 = NULL;
    t_75 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_75, j_69);
    t = k_139(t);
    return(t);
  }
  t = k_69;
  t = l_139(l_8, m_8, _id, t);
  return(t);
}
ATerm at_end_1_0 (ATerm a_132 (ATerm), ATerm t)
{
  static ATerm v_76 (ATerm t);
  static ATerm v_76 (ATerm t)
  {
    ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
    u_76 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_76 = ATgetFirst((ATermList) t);
        t_76 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_50 = NULL,h_50 = NULL,n_9 = NULL;
          t = SSLgetAnnotations(u_76);
          d_50 = t;
          t = t_76;
          t = v_76(t);
          h_50 = t;
          t = (ATerm) ATinsert(CheckATermList(h_50), s_76);
          n_9 = t;
          t = SSLsetAnnotations(n_9, d_50);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_76;
        t = a_132(t);
      }
    return(t);
  }
  t = v_76(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL;
  w_75 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_75;
    }
  else
    {
      static ATerm n_8 (ATerm t);
      static ATerm n_8 (ATerm t)
      {
        t = not_null(y_75);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_75 = ATgetFirst((ATermList) t);
          if(((y_75 != NULL) && (y_75 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_75;
      t = at_end_1_0(n_8, t);
    }
  return(t);
}
static ATerm h_77 (ATerm z_76, ATerm t)
{
  ATerm a_77 = NULL;
  t = SSL_explode_term(z_76);
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_77;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  e_77 = t;
  if(match_cons(t, sym__2))
    {
      c_77 = ATgetArgument(t, 0);
      d_77 = ATgetArgument(t, 1);
      {
        ATerm s_26 = t;
        int v_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_8 (ATerm t);
            static ATerm o_8 (ATerm t)
            {
              t = d_77;
              return(t);
            }
            t = c_77;
            t = at_end_1_0(o_8, t);
            LocalPopChoice(v_26);
          }
        else
          {
            t = s_26;
            t = h_77(e_77, t);
          }
      }
    }
  else
    {
      t = h_77(e_77, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t)
{
  static ATerm o_77 (ATerm t);
  static ATerm o_77 (ATerm t)
  {
    ATerm w_26 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_118(t);
        LocalPopChoice(b_27);
      }
    else
      {
        t = w_26;
        {
          ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,q_9 = NULL;
          t = r_118(t);
          n_77 = t;
          if(match_cons(t, sym__2))
            {
              j_77 = ATgetArgument(t, 0);
              k_77 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_77);
          i_77 = t;
          t = j_77;
          t = t_118(t);
          l_77 = t;
          t = k_77;
          t = o_77(t);
          m_77 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_77, m_77);
          q_9 = t;
          t = SSLsetAnnotations(q_9, i_77);
          t = s_118(t);
        }
      }
    return(t);
  }
  t = o_77(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm p_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if(((ATgetType(f_27) != AT_LIST) || !(ATisEmpty(f_27))))
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(((ATgetType(g_27) != AT_LIST) || !(ATisEmpty(g_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
        {
          w_77 = ATgetFirst((ATermList) h_27);
          x_77 = (ATerm) ATgetNext((ATermList) h_27);
        }
      else
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
          {
            y_77 = ATgetFirst((ATermList) i_27);
            z_77 = (ATerm) ATgetNext((ATermList) i_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_77, y_77), (ATerm) ATmakeAppl(sym__2, x_77, z_77));
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm a_78 = NULL,b_78 = NULL;
  if(match_cons(t, sym__2))
    {
      a_78 = ATgetArgument(t, 0);
      b_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_78), a_78);
  return(t);
}
static ATerm x_5 (ATerm e_139 (ATerm), ATerm f_139 (ATerm (ATerm), ATerm), ATerm c_69, ATerm f_69, ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,v_77 = NULL;
  t = c_69;
  t = e_139(t);
  q_77 = t;
  t = map_1_0(new_0_0, t);
  r_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_77, r_77);
  t = genzip_4_0(p_8, r_8, s_8, _id, t);
  v_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_77, f_69);
  t = conc_0_0(t);
  s_77 = t;
  t = c_69;
  {
    static ATerm t_8 (ATerm t);
    static ATerm t_8 (ATerm t)
    {
      t = r_77;
      return(t);
    }
    t = f_139(t_8, t);
  }
  t_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_77, f_69, s_77);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL;
  i_78 = t;
  if(match_cons(t, sym__2))
    {
      j_78 = ATgetArgument(t, 0);
      k_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_78;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_78 = ATgetFirst((ATermList) t);
      m_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_78;
  if(match_cons(t, sym__2))
    {
      g_78 = ATgetArgument(t, 0);
      h_78 = ATgetArgument(t, 1);
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_78;
            if((j_78 != t))
              {
                _fail(t);
              }
            t = h_78;
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            t = (ATerm) ATmakeAppl(sym__2, j_78, m_78);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, j_78, m_78);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm s_139 (ATerm), ATerm t)
{
  static ATerm i_79 (ATerm t);
  static ATerm i_79 (ATerm t)
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_139(t);
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        {
          ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL;
          static ATerm u_8 (ATerm t);
          static ATerm u_8 (ATerm t)
          {
            ATerm y_50 = NULL;
            y_50 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_50, not_null(h_79));
            t = i_79(t);
            return(t);
          }
          f_79 = t;
          if(match_cons(t, sym__2))
            {
              g_79 = ATgetArgument(t, 0);
              if(((h_79 != NULL) && (h_79 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                h_79 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_79;
          t = SRTS_all(u_8, t);
        }
      }
    return(t);
  }
  t = i_79(t);
  return(t);
}
ATerm rename_4_0 (ATerm z_138 (ATerm (ATerm), ATerm), ATerm a_139 (ATerm), ATerm b_139 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_139 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_79 = NULL;
  static ATerm b_80 (ATerm t);
  static ATerm b_80 (ATerm t)
  {
    static ATerm v_8 (ATerm t);
    static ATerm v_8 (ATerm t)
    {
      ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL;
      v_79 = t;
      if(match_cons(t, sym__2))
        {
          w_79 = ATgetArgument(t, 0);
          x_79 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_9 (ATerm t);
            static ATerm a_9 (ATerm t)
            {
              ATerm a_80 = NULL;
              a_80 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_80, x_79);
              t = lookup_0_0(t);
              return(t);
            }
            t = w_79;
            t = z_138(a_9, t);
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            {
              ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
              t = v_79;
              t = x_5(a_139, c_139, w_79, x_79, t);
              if(match_cons(t, sym__3))
                {
                  f_51 = ATgetArgument(t, 0);
                  g_51 = ATgetArgument(t, 1);
                  h_51 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = t_5(b_80, b_139, f_51, g_51, h_51, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(v_8, t);
    return(t);
  }
  m_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_79, (ATerm) ATempty);
  t = b_80(t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm r_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_27);
    }
  else
    {
      t = r_27;
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                h_80 = ATgetArgument(t, 0);
                i_80 = ATgetArgument(t, 1);
                j_80 = ATgetArgument(t, 2);
                k_80 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = j_80;
            t = map_1_0(e_9, t);
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            {
              ATerm w_27 = t;
              int y_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Bind8_0_0(t);
                  LocalPopChoice(y_27);
                }
              else
                {
                  t = w_27;
                  t = dynrule_targs_1_0(h_9, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm r_80 = NULL;
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_80 = ATgetArgument(t, 0);
          {
            ATerm b_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_28);
      t = r_80;
    }
  else
    {
      t = z_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_80;
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = map_1_0(i_9, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm w_80 = NULL;
  ATerm c_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_80 = ATgetArgument(t, 0);
          {
            ATerm f_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_28);
      t = w_80;
    }
  else
    {
      t = c_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_80;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, c_9, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm c_6 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm z_80 = NULL;
  t = SSL_fputc(i_32, j_32);
  z_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_80);
  return(t);
}
static ATerm d_6 (ATerm o_30, ATerm p_30, ATerm t)
{
  ATerm a_81 = NULL;
  t = SSL_write_term_to_stream_text(o_30, p_30);
  a_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_81);
  return(t);
}
static ATerm f_6 (ATerm o_121 (ATerm), ATerm a_234, ATerm u_30, ATerm t)
{
  ATerm b_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_234, term_g_28);
  t = j_6(t);
  b_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_81, u_30);
  t = o_121(t);
  t = fclose_0_0(t);
  t = u_30;
  return(t);
}
static ATerm e_6 (ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm c_81 = NULL;
  t = SSL_write_term_to_stream_baf(k_30, l_30);
  c_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_81);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      if(match_cons(h_28, sym_Stream_1))
        {
          j_81 = ATgetArgument(h_28, 0);
        }
      else
        _fail(t);
      k_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(j_81, k_81, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if(match_cons(j_28, sym_Stream_1))
        {
          o_81 = ATgetArgument(j_28, 0);
        }
      else
        _fail(t);
      p_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(o_81, p_81, t);
  l_81 = t;
  t = term_k_28;
  m_81 = t;
  t = l_81;
  if(match_cons(t, sym_Stream_1))
    {
      n_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_28, l_81);
  t = c_6(m_81, n_81, t);
  return(t);
}
ATerm output_1_0 (ATerm n_144 (ATerm), ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL;
  t = n_144(t);
  e_81 = t;
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_81 = NULL,g_81 = NULL;
        t = term_n_28;
        f_81 = t;
        t = term_o_28;
        g_81 = t;
        t = term_p_28;
        t = p_6(f_81, g_81, t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = term_q_28;
      }
  }
  d_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_81, e_81);
  {
    ATerm r_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_81 = NULL,i_81 = NULL;
        t = term_n_28;
        h_81 = t;
        t = term_w_28;
        i_81 = t;
        t = term_x_28;
        t = p_6(h_81, i_81, t);
        t = (ATerm) ATmakeAppl(sym__2, d_81, e_81);
        LocalPopChoice(u_28);
        if(match_cons(t, sym__2))
          {
            ATerm z_28 = ATgetArgument(t, 0);
            ATerm b_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_6(k_9, d_81, e_81, t);
      }
    else
      {
        t = r_28;
        if(match_cons(t, sym__2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            ATerm d_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_6(m_9, d_81, e_81, t);
      }
  }
  return(t);
}
static ATerm d_82 (ATerm x_81, ATerm t)
{
  t = SSL_fclose(x_81);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL;
  b_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_82 = ATgetArgument(t, 0);
      {
        ATerm e_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_82);
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
            t = d_82(b_82, t);
          }
      }
    }
  else
    {
      t = d_82(b_82, t);
    }
  return(t);
}
static ATerm g_6 (ATerm q_30, ATerm t)
{
  t = SSL_read_term_from_stream(q_30);
  return(t);
}
static ATerm h_6 (ATerm m_75, ATerm n_75, ATerm t)
{
  t = SSL_strcat(m_75, n_75);
  return(t);
}
static ATerm i_6 (ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm e_82 = NULL;
  t = SSL_fopen(k_32, l_32);
  e_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_82 = NULL;
  t = SSL_stdin_stream();
  f_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_82 = NULL;
  t = SSL_stdout_stream();
  g_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_82 = NULL;
  t = SSL_stderr_stream();
  h_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_82);
  return(t);
}
static ATerm t_83 (ATerm n_82, ATerm t)
{
  ATerm o_82 = NULL;
  t = SSL_explode_term(n_82);
  if(match_cons(t, sym__2))
    {
      ATerm h_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_29 = ATgetArgument(t, 1);
        if(((ATgetType(i_29) == AT_LIST) && !(ATisEmpty(i_29))))
          {
            o_82 = ATgetFirst((ATermList) i_29);
            {
              ATerm l_29 = (ATerm) ATgetNext((ATermList) i_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_83 (ATerm r_82, ATerm s_82, ATerm t_82, ATerm t)
{
  ATerm u_82 = NULL,v_82 = NULL,x_82 = NULL,e_83 = NULL,z_9 = NULL;
  t = SSLgetAnnotations(t_82);
  x_82 = t;
  t = r_82;
  if(match_cons(t, sym_Path_1))
    {
      e_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_83, s_82);
  z_9 = t;
  t = SSLsetAnnotations(z_9, x_82);
  if(match_cons(t, sym__2))
    {
      u_82 = ATgetArgument(t, 0);
      v_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(u_82, v_82, t);
  return(t);
}
static ATerm v_83 (ATerm g_83, ATerm h_83, ATerm i_83, ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL,o_83 = NULL,a_10 = NULL;
  t = SSLgetAnnotations(i_83);
  l_83 = t;
  t = SSL_is_string(g_83);
  o_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_83, h_83);
  a_10 = t;
  t = SSLsetAnnotations(a_10, l_83);
  if(match_cons(t, sym__2))
    {
      j_83 = ATgetArgument(t, 0);
      k_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(j_83, k_83, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL;
  q_83 = t;
  if(match_cons(t, sym__2))
    {
      r_83 = ATgetArgument(t, 0);
      s_83 = ATgetArgument(t, 1);
      {
        ATerm o_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_83(q_83, t);
            LocalPopChoice(s_29);
          }
        else
          {
            t = o_29;
            {
              ATerm t_29 = t;
              int u_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_83(r_83, s_83, q_83, t);
                  LocalPopChoice(u_29);
                }
              else
                {
                  t = t_29;
                  t = v_83(r_83, s_83, q_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_83(q_83, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL,e_84 = NULL;
  e_84 = t;
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_84, term_z_29);
        t = j_6(t);
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        {
          ATerm v_51 = NULL,w_51 = NULL;
          t = term_a_30;
          w_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_30, e_84);
          t = h_6(w_51, e_84, t);
          v_51 = t;
          t = SSL_perror(v_51);
          _fail(t);
        }
      }
  }
  y_83 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(z_83, t);
  x_83 = t;
  t = y_83;
  t = fclose_0_0(t);
  t = x_83;
  return(t);
}
ATerm input_1_0 (ATerm o_144 (ATerm), ATerm t)
{
  ATerm f_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_84 = NULL,i_84 = NULL;
      t = term_n_28;
      h_84 = t;
      t = term_i_30;
      i_84 = t;
      t = term_m_30;
      t = p_6(h_84, i_84, t);
      LocalPopChoice(h_30);
    }
  else
    {
      t = f_30;
      t = term_r_30;
    }
  t = ReadFromFile_0_0(t);
  t = o_144(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL;
  t = term_n_28;
  j_84 = t;
  t = term_s_30;
  k_84 = t;
  t = term_v_30;
  t = p_6(j_84, k_84, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL;
  m_84 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_84;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_30 = ATgetFirst((ATermList) t);
                ATerm z_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_84;
          }
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATinsert(ATempty, m_84);
      }
  }
  n_84 = t;
  t = term_q_28;
  o_84 = t;
  t = SSL_printnl(o_84, n_84);
  t = m_84;
  return(t);
}
ATerm map_1_0 (ATerm l_131 (ATerm), ATerm t)
{
  static ATerm g_85 (ATerm t);
  static ATerm g_85 (ATerm t)
  {
    ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
    d_85 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_85;
      }
    else
      {
        ATerm b_52 = NULL,h_52 = NULL,i_52 = NULL,j_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_85 = ATgetFirst((ATermList) t);
            f_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_85);
        b_52 = t;
        t = e_85;
        t = l_131(t);
        h_52 = t;
        t = f_85;
        t = g_85(t);
        i_52 = t;
        t = (ATerm) ATinsert(CheckATermList(i_52), h_52);
        j_10 = t;
        t = SSLsetAnnotations(j_10, b_52);
      }
    return(t);
  }
  t = g_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_85 = ATgetFirst((ATermList) t);
      k_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_85 = NULL,p_85 = NULL;
        static ATerm o_9 (ATerm t);
        static ATerm o_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_85)), not_null(p_85));
          return(t);
        }
        t = k_85;
        t = r_0(t);
        if(((o_85 != NULL) && (o_85 != t)))
          _fail(t);
        else
          o_85 = t;
        t = j_85;
        t = p_0(t);
        if(((p_85 != NULL) && (p_85 != t)))
          _fail(t);
        else
          p_85 = t;
        t = k_85;
        t = reverse_acc_2_0(p_0, o_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_31;
      t = r_0(t);
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL,l_10 = NULL;
  a_86 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_86);
  y_85 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_85);
  l_10 = t;
  t = SSLsetAnnotations(l_10, y_85);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm e_86 = NULL;
  e_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_86), term_b_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm m_146 (ATerm), ATerm n_146 (ATerm), ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL;
  ATerm c_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_85 = NULL,x_85 = NULL;
      t = term_n_28;
      w_85 = t;
      t = term_s_30;
      x_85 = t;
      t = term_v_30;
      t = p_6(w_85, x_85, t);
      LocalPopChoice(e_31);
    }
  else
    {
      t = c_31;
      t = fetch_1_0(p_9, t);
    }
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_146(t);
        t = echo_0_0(t);
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
      }
  }
  t = term_h_31;
  t = echo_0_0(t);
  t = term_i_31;
  u_85 = t;
  t = term_j_31;
  v_85 = t;
  t = term_k_31;
  t = p_6(u_85, v_85, t);
  t = reverse_acc_2_0(_id, t_9, t);
  t = map_1_0(u_9, t);
  t = term_l_31;
  t = echo_0_0(t);
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_146(t);
        {
          ATerm o_31 = t;
          int q_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_86 = NULL;
              f_86 = t;
              t = SSL_is_string(f_86);
              t = f_86;
              LocalPopChoice(q_31);
              {
                ATerm g_86 = NULL;
                g_86 = t;
                t = (ATerm) ATinsert(ATempty, g_86);
              }
            }
          else
            {
              t = o_31;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
      }
  }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL,n_10 = NULL;
  p_86 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_86);
  n_86 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_86);
  n_10 = t;
  t = SSLsetAnnotations(n_10, n_86);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_86 = NULL;
  k_86 = t;
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_86 = NULL,m_86 = NULL;
        t = term_n_28;
        l_86 = t;
        t = term_s_30;
        m_86 = t;
        t = term_v_30;
        t = p_6(l_86, m_86, t);
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        t = fetch_1_0(v_9, t);
      }
  }
  t = k_86;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm r_86 = NULL;
  r_86 = t;
  if(match_string(t, "-k"))
    {
      t = r_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_86;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL;
  s_86 = t;
  t = SSL_string_to_int(s_86);
  t_86 = t;
  t = term_t_31;
  u_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_31, t_86);
  t = s_6(u_86, t_86, t);
  t = s_86;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_u_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_9, x_9, y_9, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm w_86 = NULL;
  w_86 = t;
  if(match_string(t, "-S"))
    {
      t = w_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_86;
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL;
  t = term_w_31;
  x_86 = t;
  t = term_x_31;
  y_86 = t;
  t = term_y_31;
  t = s_6(x_86, y_86, t);
  t = term_z_31;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_a_32;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL;
  z_86 = t;
  t = SSL_string_to_int(z_86);
  a_87 = t;
  t = term_w_31;
  b_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_31, a_87);
  t = s_6(b_87, a_87, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_86);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_b_32;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm c_87 = NULL,d_87 = NULL;
  t = term_d_32;
  c_87 = t;
  t = term_a_31;
  d_87 = t;
  t = term_e_32;
  t = s_6(c_87, d_87, t);
  t = term_g_32;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_10, c_10, d_10, t);
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
        ATerm s_32 = t;
        int t_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_10, f_10, g_10, t);
            LocalPopChoice(t_32);
          }
        else
          {
            t = s_32;
            t = Option_3_0(h_10, i_10, k_10, t);
          }
      }
    }
  return(t);
}
static ATerm s_6 (ATerm k_36, ATerm l_36, ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL;
  t = term_n_28;
  e_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, k_36, l_36);
  t = lookup_table_0_1(e_87, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(k_36, l_36, f_87, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, k_36, l_36);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_87 = NULL,k_87 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL;
      t = term_a_31;
      t = g_0(t);
      l_87 = t;
      t = term_i_31;
      m_87 = t;
      t = term_j_31;
      n_87 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, l_87);
      t = q_6(m_87, n_87, l_87, t);
      _fail(t);
    }
  else
    {
      ATerm q_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_87 = ATgetFirst((ATermList) t);
          k_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_87;
      t = d_0(t);
      t = term_a_31;
      t = f_0(t);
      q_87 = t;
      t = (ATerm) ATinsert(CheckATermList(k_87), q_87);
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm s_87 = NULL;
  s_87 = t;
  if(match_string(t, "-o"))
    {
      t = s_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_87;
    }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL;
  t_87 = t;
  t = term_o_28;
  u_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_28, t_87);
  t = s_6(u_87, t_87, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_87);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_10, o_10, q_10, t);
  return(t);
}
static ATerm q_6 (ATerm b_42, ATerm c_42, ATerm a_42, ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL;
  w_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_42, c_42);
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_32 = ATgetArgument(t, 0);
            ATerm a_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_42, c_42);
        t = p_6(b_42, c_42, t);
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = (ATerm) ATempty;
      }
  }
  x_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_42, c_42, (ATerm) ATinsert(CheckATermList(x_87), a_42));
  t = lookup_table_0_1(b_42, t);
  a_88 = t;
  t = (ATerm) ATinsert(CheckATermList(x_87), a_42);
  y_87 = t;
  t = a_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(c_42, y_87, z_87, t);
  t = w_87;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL;
      t = term_a_31;
      t = o_0(t);
      l_88 = t;
      t = term_i_31;
      m_88 = t;
      t = term_j_31;
      n_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, l_88);
      t = q_6(m_88, n_88, l_88, t);
      _fail(t);
    }
  else
    {
      ATerm r_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_88 = ATgetFirst((ATermList) t);
          i_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_88;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_88 = ATgetFirst((ATermList) t);
          k_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_88;
      t = j_0(t);
      t = j_88;
      t = l_0(t);
      r_88 = t;
      t = (ATerm) ATinsert(CheckATermList(k_88), r_88);
    }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm t_88 = NULL;
  t_88 = t;
  if(match_string(t, "-i"))
    {
      t = t_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_88;
    }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL;
  u_88 = t;
  t = term_i_30;
  v_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_30, u_88);
  t = s_6(v_88, u_88, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_88);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_10, u_10, w_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_31;
  t = whoami_0_0(t);
  w_88 = t;
  t = term_d_33;
  y_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_33), w_88);
  z_88 = t;
  t = SSL_printnl(y_88, z_88);
  t = term_f_33;
  x_88 = t;
  t = SSL_exit(x_88);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_89 = NULL,b_89 = NULL;
  t = term_n_28;
  a_89 = t;
  t = term_s_30;
  b_89 = t;
  t = term_v_30;
  t = p_6(a_89, b_89, t);
  return(t);
}
static ATerm k_6 (ATerm j_39, ATerm k_39, ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_39, k_39);
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      t = SSL_addr(j_39, k_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_137 (ATerm), ATerm h_137 (ATerm), ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
  d_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_89;
      t = g_137(t);
    }
  else
    {
      ATerm k_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_89 = ATgetFirst((ATermList) t);
          f_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_89;
      t = foldr_2_0(g_137, h_137, t);
      k_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_89, k_89);
      t = h_137(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_x_31;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm b_53 = NULL,f_53 = NULL;
  if(match_cons(t, sym__2))
    {
      b_53 = ATgetArgument(t, 0);
      f_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(b_53, f_53, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_89 = NULL,s_52 = NULL,w_52 = NULL;
  t = times_0_0(t);
  w_52 = t;
  t = SSL_explode_term(w_52);
  if(match_cons(t, sym__2))
    {
      ATerm k_33 = ATgetArgument(t, 0);
      s_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_52;
  t = foldr_2_0(x_10, z_10, t);
  n_89 = t;
  t = SSL_TicksToSeconds(n_89);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL,a_90 = NULL;
  y_89 = t;
  if(match_cons(t, sym__2))
    {
      z_89 = ATgetArgument(t, 0);
      a_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_90;
        if((z_89 != t))
          {
            _fail(t);
          }
        t = y_89;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = (ATerm) ATmakeAppl(sym__2, z_89, a_90);
        {
          ATerm n_33 = t;
          int o_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_89, a_90);
              LocalPopChoice(o_33);
            }
          else
            {
              t = n_33;
              t = SSL_gtr(z_89, a_90);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_89, a_90);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_123 (ATerm), ATerm t)
{
  ATerm e_90 = NULL;
  e_90 = t;
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL;
        t = term_n_28;
        h_90 = t;
        t = term_w_31;
        i_90 = t;
        t = term_r_33;
        t = p_6(h_90, i_90, t);
        g_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_90, term_f_33);
        t = geq_0_0(t);
        t = e_90;
        t = g_123(t);
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        t = e_90;
      }
  }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm k_90 = NULL,l_90 = NULL,n_90 = NULL,o_90 = NULL;
  t = run_time_0_0(t);
  k_90 = t;
  t = term_a_31;
  t = whoami_0_0(t);
  l_90 = t;
  t = term_d_33;
  n_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_33), k_90), term_s_33), l_90);
  o_90 = t;
  t = SSL_printnl(n_90, o_90);
  t = (ATerm) ATmakeAppl(sym__2, term_d_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_33), k_90), term_s_33), l_90));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_90 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_31;
  p_90 = t;
  t = SSL_exit(p_90);
  return(t);
}
static ATerm t_6 (ATerm q_46, ATerm r_46, ATerm s_46, ATerm t)
{
  ATerm q_90 = NULL;
  t = SSL_hashtable_put(s_46, q_46, r_46);
  q_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_90);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_43, ATerm t)
{
  ATerm z_90 = NULL;
  t = table_hashtable_0_0(t);
  z_90 = t;
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_53 = NULL;
        t = z_90;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_6(n_43, z_53, t);
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        {
          ATerm f_54 = NULL;
          t = n_43;
          t = table_create_0_0(t);
          t = z_90;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_6(n_43, f_54, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm y_46, ATerm z_46, ATerm t)
{
  ATerm c_91 = NULL;
  t = SSL_hashtable_create(y_46, z_46);
  c_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_91);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_91 = NULL,e_91 = NULL,f_91 = NULL,h_91 = NULL,i_91 = NULL;
  d_91 = t;
  t = term_w_33;
  h_91 = t;
  t = term_x_33;
  i_91 = t;
  t = d_91;
  t = new_hashtable_0_2(h_91, i_91, t);
  e_91 = t;
  t = d_91;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(d_91, e_91, f_91, t);
  t = d_91;
  return(t);
}
static ATerm m_6 (ATerm v_46, ATerm w_46, ATerm t)
{
  ATerm j_91 = NULL;
  t = SSL_hashtable_remove(w_46, v_46);
  j_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_91);
  return(t);
}
static ATerm n_6 (ATerm a_47, ATerm t)
{
  ATerm k_91 = NULL;
  t = SSL_hashtable_destroy(a_47);
  k_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_91);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm l_91 = NULL;
  t = SSL_table_hashtable();
  l_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_91);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL;
  m_91 = t;
  t = table_hashtable_0_0(t);
  n_91 = t;
  t = lookup_table_0_1(m_91, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(p_91, t);
  t = n_91;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(m_91, o_91, t);
  t = m_91;
  return(t);
}
ATerm fetch_1_0 (ATerm t_131 (ATerm), ATerm t)
{
  static ATerm m_92 (ATerm t);
  static ATerm m_92 (ATerm t)
  {
    ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL;
    j_92 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_92 = ATgetFirst((ATermList) t);
        l_92 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_33 = t;
      int z_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_54 = NULL,v_54 = NULL,p_10 = NULL;
          t = SSLgetAnnotations(j_92);
          l_54 = t;
          t = k_92;
          t = t_131(t);
          v_54 = t;
          t = (ATerm) ATinsert(CheckATermList(l_92), v_54);
          p_10 = t;
          t = SSLsetAnnotations(p_10, l_54);
          LocalPopChoice(z_33);
        }
      else
        {
          t = y_33;
          {
            ATerm k_55 = NULL,t_55 = NULL,s_10 = NULL;
            t = SSLgetAnnotations(j_92);
            k_55 = t;
            t = l_92;
            t = m_92(t);
            t_55 = t;
            t = (ATerm) ATinsert(CheckATermList(t_55), k_92);
            s_10 = t;
            t = SSLsetAnnotations(s_10, k_55);
          }
        }
    }
    return(t);
  }
  t = m_92(t);
  return(t);
}
static ATerm u_6 (ATerm t_46, ATerm u_46, ATerm t)
{
  t = SSL_hashtable_get(u_46, t_46);
  return(t);
}
static ATerm p_6 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm q_92 = NULL;
  t = lookup_table_0_1(u_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(v_43, q_92, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm s_92 = NULL,u_92 = NULL;
  t = term_a_34;
  s_92 = t;
  t = term_a_31;
  u_92 = t;
  t = term_b_34;
  t = s_6(s_92, u_92, t);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_c_34;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL;
  t = term_a_34;
  x_92 = t;
  t = term_a_31;
  y_92 = t;
  t = term_b_34;
  t = s_6(x_92, y_92, t);
  t = term_d_34;
  v_92 = t;
  t = term_a_31;
  w_92 = t;
  t = term_e_34;
  t = s_6(v_92, w_92, t);
  t = term_f_34;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_11, f_11, i_11, t);
      LocalPopChoice(j_34);
    }
  else
    {
      t = h_34;
      t = Option_3_0(n_11, p_11, q_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,v_10 = NULL;
  e_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_93 = ATgetFirst((ATermList) t);
      b_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_93);
  z_92 = t;
  t = a_93;
  t = h_89(t);
  c_93 = t;
  t = b_93;
  t = i_89(t);
  d_93 = t;
  t = (ATerm) ATinsert(CheckATermList(d_93), c_93);
  v_10 = t;
  t = SSLsetAnnotations(v_10, z_92);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_146 (ATerm), ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL,l_93 = NULL,m_93 = NULL,o_93 = NULL,p_93 = NULL,y_10 = NULL;
  j_93 = t;
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_34;
        t = h_146(t);
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
      }
  }
  t = j_93;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_93 = ATgetFirst((ATermList) t);
      m_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_93);
  k_93 = t;
  t = term_s_30;
  p_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_30, l_93);
  t = s_6(p_93, l_93, t);
  t = m_93;
  {
    static ATerm z_93 (ATerm t);
    static ATerm z_93 (ATerm t)
    {
      ATerm p_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_34 = t;
          int s_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_93 = NULL;
              s_93 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_93;
              LocalPopChoice(s_34);
            }
          else
            {
              t = r_34;
              t = h_146(t);
              t = Cons_2_0(_id, z_93, t);
            }
          LocalPopChoice(q_34);
        }
      else
        {
          t = p_34;
          {
            ATerm v_93 = NULL,w_93 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_93 = ATgetFirst((ATermList) t);
                w_93 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_93), (ATerm) ATmakeAppl(sym_Undefined_1, v_93));
          }
        }
      return(t);
    }
    t = z_93(t);
  }
  o_93 = t;
  t = (ATerm) ATinsert(CheckATermList(o_93), (ATerm) ATmakeAppl(sym_Program_1, l_93));
  y_10 = t;
  t = SSLsetAnnotations(y_10, k_93);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm m_94 = NULL;
  m_94 = t;
  if(match_string(t, "--help"))
    {
      t = m_94;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_94;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_94;
        }
    }
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm n_94 = NULL,o_94 = NULL;
  t = term_u_34;
  n_94 = t;
  t = term_a_31;
  o_94 = t;
  t = term_a_35;
  t = s_6(n_94, o_94, t);
  t = term_c_35;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_d_35;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm e_146 (ATerm), ATerm f_146 (ATerm), ATerm g_146 (ATerm), ATerm t)
{
  ATerm e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL;
  g_94 = t;
  t = term_i_31;
  h_94 = t;
  t = term_e_35;
  t = lookup_table_0_1(h_94, t);
  l_94 = t;
  t = term_j_31;
  i_94 = t;
  t = (ATerm) ATempty;
  j_94 = t;
  t = l_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(i_94, j_94, k_94, t);
  t = g_94;
  {
    static ATerm r_11 (ATerm t);
    static ATerm r_11 (ATerm t)
    {
      ATerm f_35 = t;
      int g_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_146(t);
          LocalPopChoice(g_35);
        }
      else
        {
          t = f_35;
          {
            ATerm h_35 = t;
            int i_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_11, t_11, u_11, t);
                LocalPopChoice(i_35);
              }
            else
              {
                t = h_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_11, t);
  }
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_94 = NULL;
        z_94 = t;
        {
          ATerm m_35 = t;
          int n_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_56 = NULL;
              t = z_94;
              {
                ATerm o_35 = t;
                int p_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_56 = NULL,n_56 = NULL;
                    t = term_n_28;
                    i_56 = t;
                    t = term_u_34;
                    n_56 = t;
                    t = term_r_35;
                    t = p_6(i_56, n_56, t);
                    LocalPopChoice(p_35);
                  }
                else
                  {
                    t = o_35;
                    t = fetch_1_0(v_11, t);
                  }
              }
              t = z_94;
              t = f_146(t);
              t = term_x_31;
              h_56 = t;
              t = SSL_exit(h_56);
              LocalPopChoice(n_35);
            }
          else
            {
              t = m_35;
              {
                ATerm x_56 = NULL,y_56 = NULL,a_57 = NULL;
                t = term_n_28;
                y_56 = t;
                t = term_a_34;
                a_57 = t;
                t = term_s_35;
                t = p_6(y_56, a_57, t);
                t = z_94;
                t = g_146(t);
                t = term_x_31;
                x_56 = t;
                t = SSL_exit(x_56);
              }
            }
        }
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        {
          ATerm t_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL;
              static ATerm w_11 (ATerm t);
              static ATerm w_11 (ATerm t)
              {
                ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL,h_11 = NULL;
                f_95 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_95 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_95);
                d_95 = t;
                t = e_95;
                if(((e_94 != NULL) && (e_94 != t)))
                  _fail(t);
                else
                  e_94 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_95);
                h_11 = t;
                t = SSLsetAnnotations(h_11, d_95);
                return(t);
              }
              t = fetch_1_0(w_11, t);
              t = term_d_33;
              b_95 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_94)), term_v_35);
              c_95 = t;
              t = SSL_printnl(b_95, c_95);
              t = (ATerm) ATmakeAppl(sym__2, term_d_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_94)), term_v_35));
              t = f_146(t);
              t = term_f_33;
              a_95 = t;
              t = SSL_exit(a_95);
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
            }
        }
      }
  }
  f_94 = t;
  t = term_i_31;
  t = table_destroy_0_0(t);
  t = f_94;
  return(t);
}
ATerm option_wrap_5_0 (ATerm h_144 (ATerm), ATerm i_144 (ATerm), ATerm j_144 (ATerm), ATerm k_144 (ATerm), ATerm l_144 (ATerm), ATerm t)
{
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL;
  t = parse_options_3_0(h_144, i_144, j_144, t);
  k_95 = t;
  t = term_w_35;
  t = table_create_0_0(t);
  t = term_w_35;
  l_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_35, term_x_35, k_95);
  t = lookup_table_0_1(l_95, t);
  o_95 = t;
  t = term_x_35;
  m_95 = t;
  t = o_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(m_95, k_95, n_95, t);
  t = k_95;
  t = k_144(t);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_144(t);
        t = report_success_0_0(t);
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(b_36);
    }
  else
    {
      t = a_36;
      {
        ATerm c_36 = t;
        int d_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(d_36);
          }
        else
          {
            t = c_36;
            {
              ATerm e_36 = t;
              int f_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(g_12, h_12, i_12, t);
                  LocalPopChoice(f_36);
                }
              else
                {
                  t = e_36;
                  {
                    ATerm g_36 = t;
                    int h_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(h_36);
                      }
                    else
                      {
                        t = g_36;
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
static ATerm f_12 (ATerm t)
{
  t = input_1_0(j_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL;
  t = term_w_28;
  q_95 = t;
  t = term_a_31;
  r_95 = t;
  t = term_i_36;
  t = s_6(q_95, r_95, t);
  t = term_j_36;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_m_36;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = output_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(x_11, default_system_usage_0_0, default_system_about_0_0, _id, f_12, t);
  return(t);
}
