#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_DynamicRules_1;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_LRule_1;
Symbol sym_Path_2;
Symbol sym_Rec_2;
Symbol sym_Scope_2;
Symbol sym_Let_2;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
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
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_p_35;
ATerm term_v_34;
ATerm term_t_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_j_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_i_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_o_30;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_n_28;
ATerm term_k_28;
ATerm term_g_28;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_q_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_x_28);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_o_30);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_b_31, term_d_31);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_31);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__2, term_i_31, term_u_30);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_f_32);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_b_31);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_f_33);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_w_31);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__2, term_x_33, term_u_30);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_a_34, term_u_30);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym__2, term_f_33, term_u_30);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__3, term_v_31, term_w_31, (ATerm) ATempty);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_x_33);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__2, term_x_28, term_u_30);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm spaste_1_0 (ATerm t_100 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm y_100 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm k_5 (ATerm y_22, ATerm x_22, ATerm t);
ATerm SVar_1_0 (ATerm a_81 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm tpaste_1_0 (ATerm p_100 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm z_100 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
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
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm n_5 (ATerm a_120 (ATerm), ATerm u_59, ATerm t_59, ATerm t);
ATerm foldr_3_0 (ATerm f_123 (ATerm), ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm t);
static ATerm o_5 (ATerm d_120 (ATerm), ATerm e_120 (ATerm), ATerm y_59, ATerm x_59, ATerm t);
static ATerm p_5 (ATerm v_119 (ATerm), ATerm s_59, ATerm r_59, ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm r_5 (ATerm o_757, ATerm t_757, ATerm x_74, ATerm t);
ATerm while_not_2_0 (ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm t);
ATerm for_3_0 (ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm y_73 (ATerm s_72, ATerm t_72, ATerm u_72, ATerm t);
static ATerm f_7 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm free_vars_3_0 (ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm z_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm w_80 (ATerm), ATerm t);
static ATerm t_5 (ATerm f_125 (ATerm), ATerm g_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm b_63, ATerm a_63, ATerm z_62, ATerm t);
ATerm at_end_1_0 (ATerm x_117 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_77 (ATerm f_77, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm x_5 (ATerm z_124 (ATerm), ATerm a_125 (ATerm (ATerm), ATerm), ATerm t_62, ATerm w_62, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm n_125 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm u_124 (ATerm (ATerm), ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_124 (ATerm (ATerm), ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm j_9 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm c_6 (ATerm k_31, ATerm l_31, ATerm t);
static ATerm d_6 (ATerm q_29, ATerm r_29, ATerm t);
static ATerm f_6 (ATerm p_109 (ATerm), ATerm d_218, ATerm w_29, ATerm t);
static ATerm e_6 (ATerm m_29, ATerm n_29, ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
ATerm output_1_0 (ATerm y_129 (ATerm), ATerm t);
static ATerm l_82 (ATerm f_82, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_6 (ATerm s_29, ATerm t);
static ATerm h_6 (ATerm x_68, ATerm y_68, ATerm t);
static ATerm i_6 (ATerm m_31, ATerm n_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_83 (ATerm v_82, ATerm t);
static ATerm x_83 (ATerm z_82, ATerm a_83, ATerm b_83, ATerm t);
static ATerm y_83 (ATerm j_83, ATerm k_83, ATerm l_83, ATerm t);
static ATerm j_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm z_129 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_6 (ATerm g_35, ATerm h_35, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_6 (ATerm u_40, ATerm v_40, ATerm t_40, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_6 (ATerm c_38, ATerm d_38, ATerm t);
ATerm foldr_2_0 (ATerm d_123 (ATerm), ATerm e_123 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_111 (ATerm), ATerm t);
static ATerm r_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_10 (ATerm t);
ATerm need_help_1_0 (ATerm p_129 (ATerm), ATerm t);
static ATerm t_6 (ATerm m_45, ATerm n_45, ATerm o_45, ATerm t);
ATerm lookup_table_0_1 (ATerm g_42, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_45, ATerm v_45, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_6 (ATerm r_45, ATerm s_45, ATerm t);
static ATerm n_6 (ATerm w_45, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_117 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_117 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_6 (ATerm p_45, ATerm q_45, ATerm t);
static ATerm p_6 (ATerm n_42, ATerm o_42, ATerm t);
static ATerm d_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_131 (ATerm), ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm parse_options_1_0 (ATerm m_131 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
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
      ATerm n_12 = ATgetArgument(t, 0);
      if(((ATgetType(n_12) != AT_LIST) || !(ATisEmpty(n_12))))
        _fail(t);
      {
        ATerm q_12 = ATgetArgument(t, 1);
        if(((ATgetType(q_12) != AT_LIST) || !(ATisEmpty(q_12))))
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
      ATerm r_12 = ATgetArgument(t, 0);
      if(((ATgetType(r_12) == AT_LIST) && !(ATisEmpty(r_12))))
        {
          r_0 = ATgetFirst((ATermList) r_12);
          s_0 = (ATerm) ATgetNext((ATermList) r_12);
        }
      else
        _fail(t);
      {
        ATerm s_12 = ATgetArgument(t, 1);
        if(((ATgetType(s_12) == AT_LIST) && !(ATisEmpty(s_12))))
          {
            t_0 = ATgetFirst((ATermList) s_12);
            u_0 = (ATerm) ATgetNext((ATermList) s_12);
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
static ATerm c_0 (ATerm t)
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
static ATerm i_0 (ATerm t)
{
  ATerm y_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      y_0 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_0;
  {
    ATerm t_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm w_12 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(v_12);
        t = (ATerm) ATmakeAppl(sym_SDef_3, d_1, a_1, b_1);
      }
    else
      {
        t = t_12;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm a_13 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
            c_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_1, a_1, b_1, c_1);
      }
  }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_13 = ATgetArgument(t, 0);
      if(((ATgetType(c_13) != AT_LIST) || !(ATisEmpty(c_13))))
        _fail(t);
      {
        ATerm g_13 = ATgetArgument(t, 1);
        if(((ATgetType(g_13) != AT_LIST) || !(ATisEmpty(g_13))))
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
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_13 = ATgetArgument(t, 0);
      if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
        {
          l_2 = ATgetFirst((ATermList) h_13);
          m_2 = (ATerm) ATgetNext((ATermList) h_13);
        }
      else
        _fail(t);
      {
        ATerm i_13 = ATgetArgument(t, 1);
        if(((ATgetType(i_13) == AT_LIST) && !(ATisEmpty(i_13))))
          {
            n_2 = ATgetFirst((ATermList) i_13);
            o_2 = (ATerm) ATgetNext((ATermList) i_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_2, n_2), (ATerm) ATmakeAppl(sym__2, m_2, o_2));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm p_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_2), p_2);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm y_2 = NULL,e_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      y_2 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_2;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_3);
      }
    else
      {
        t = j_13;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_13 = ATgetArgument(t, 0);
            e_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_3, e_3);
      }
  }
  return(t);
}
static ATerm e_1 (ATerm t)
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
static ATerm f_1 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_13 = ATgetArgument(t, 0);
      if(((ATgetType(p_13) == AT_LIST) && !(ATisEmpty(p_13))))
        {
          c_5 = ATgetFirst((ATermList) p_13);
          d_5 = (ATerm) ATgetNext((ATermList) p_13);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_5, f_5), (ATerm) ATmakeAppl(sym__2, d_5, g_5));
  return(t);
}
static ATerm g_1 (ATerm t)
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
static ATerm h_1 (ATerm t)
{
  ATerm l_5 = NULL,v_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5;
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
            v_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_5, v_5);
      }
  }
  return(t);
}
static ATerm i_1 (ATerm t)
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
static ATerm j_1 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,q_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_14 = ATgetArgument(t, 0);
      if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
        {
          g_8 = ATgetFirst((ATermList) a_14);
          h_8 = (ATerm) ATgetNext((ATermList) a_14);
        }
      else
        _fail(t);
      {
        ATerm b_14 = ATgetArgument(t, 1);
        if(((ATgetType(b_14) == AT_LIST) && !(ATisEmpty(b_14))))
          {
            q_8 = ATgetFirst((ATermList) b_14);
            w_8 = (ATerm) ATgetNext((ATermList) b_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_8, q_8), (ATerm) ATmakeAppl(sym__2, h_8, w_8));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_8), x_8);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm i_9 = NULL,p_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      i_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_9;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_9);
      }
    else
      {
        t = c_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_14 = ATgetArgument(t, 0);
            p_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_9, p_9);
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
      ATerm j_14 = ATgetArgument(t, 0);
      if(((ATgetType(j_14) == AT_LIST) && !(ATisEmpty(j_14))))
        {
          e_11 = ATgetFirst((ATermList) j_14);
          g_11 = (ATerm) ATgetNext((ATermList) j_14);
        }
      else
        _fail(t);
      {
        ATerm k_14 = ATgetArgument(t, 1);
        if(((ATgetType(k_14) == AT_LIST) && !(ATisEmpty(k_14))))
          {
            j_11 = ATgetFirst((ATermList) k_14);
            k_11 = (ATerm) ATgetNext((ATermList) k_14);
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
    ATerm n_14 = t;
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
        t = n_14;
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
  ATerm m_12 = NULL,o_12 = NULL,p_12 = NULL,x_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_14 = ATgetArgument(t, 0);
      if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
        {
          m_12 = ATgetFirst((ATermList) t_14);
          o_12 = (ATerm) ATgetNext((ATermList) t_14);
        }
      else
        _fail(t);
      {
        ATerm u_14 = ATgetArgument(t, 1);
        if(((ATgetType(u_14) == AT_LIST) && !(ATisEmpty(u_14))))
          {
            p_12 = ATgetFirst((ATermList) u_14);
            x_12 = (ATerm) ATgetNext((ATermList) u_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_12, p_12), (ATerm) ATmakeAppl(sym__2, o_12, x_12));
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_12), y_12);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm b_13 = NULL,d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      b_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_13);
      }
    else
      {
        t = v_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_14 = ATgetArgument(t, 0);
            d_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_13, d_13);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
      a_12 = t;
      if(match_cons(t, sym_Let_2))
        {
          b_12 = ATgetArgument(t, 0);
          c_12 = ATgetArgument(t, 1);
          {
            ATerm e_0 = NULL,n_0 = NULL,p_0 = NULL,m_1 = NULL;
            t = SSLgetAnnotations(a_12);
            e_0 = t;
            t = b_12;
            t = t_100(t);
            p_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_12, p_0);
            t = genzip_4_0(a_0, b_0, c_0, i_0, t);
            n_0 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, n_0, c_12);
            m_1 = t;
            t = SSLsetAnnotations(m_1, e_0);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              b_12 = ATgetArgument(t, 0);
              c_12 = ATgetArgument(t, 1);
              d_12 = ATgetArgument(t, 2);
              {
                ATerm b_2 = NULL,i_2 = NULL,j_2 = NULL,n_1 = NULL;
                t = SSLgetAnnotations(a_12);
                b_2 = t;
                t = c_12;
                t = t_100(t);
                j_2 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_12, j_2);
                t = genzip_4_0(k_0, q_0, x_0, z_0, t);
                i_2 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, b_12, i_2, d_12);
                n_1 = t;
                t = SSLsetAnnotations(n_1, b_2);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  b_12 = ATgetArgument(t, 0);
                  c_12 = ATgetArgument(t, 1);
                  d_12 = ATgetArgument(t, 2);
                  x_11 = ATgetArgument(t, 3);
                  {
                    ATerm p_4 = NULL,v_4 = NULL,z_4 = NULL,o_1 = NULL;
                    t = SSLgetAnnotations(a_12);
                    p_4 = t;
                    t = c_12;
                    t = t_100(t);
                    z_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_12, z_4);
                    t = genzip_4_0(e_1, f_1, g_1, h_1, t);
                    v_4 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, b_12, v_4, d_12, x_11);
                    o_1 = t;
                    t = SSLsetAnnotations(o_1, p_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_12 = ATgetArgument(t, 0);
                      c_12 = ATgetArgument(t, 1);
                      d_12 = ATgetArgument(t, 2);
                      x_11 = ATgetArgument(t, 3);
                      {
                        ATerm q_7 = NULL,v_7 = NULL,w_7 = NULL,p_1 = NULL;
                        t = SSLgetAnnotations(a_12);
                        q_7 = t;
                        t = c_12;
                        t = t_100(t);
                        w_7 = t;
                        t = (ATerm) ATmakeAppl(sym__2, c_12, w_7);
                        t = genzip_4_0(i_1, j_1, k_1, l_1, t);
                        v_7 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_12, v_7, d_12, x_11);
                        p_1 = t;
                        t = SSLsetAnnotations(p_1, q_7);
                      }
                    }
                  else
                    {
                      ATerm q_10 = NULL,a_11 = NULL,c_11 = NULL,q_1 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          b_12 = ATgetArgument(t, 0);
                          c_12 = ATgetArgument(t, 1);
                          d_12 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(a_12);
                      q_10 = t;
                      t = c_12;
                      t = t_100(t);
                      c_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_12, c_11);
                      t = genzip_4_0(s_1, t_1, u_1, v_1, t);
                      a_11 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, b_12, a_11, d_12);
                      q_1 = t;
                      t = SSLsetAnnotations(q_1, q_10);
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
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_1 (ATerm t);
            static ATerm w_1 (ATerm t)
            {
              ATerm g_12 = NULL,l_12 = NULL;
              l_12 = t;
              t = t_100(t);
              g_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_12, g_12);
              t = genzip_4_0(x_1, y_1, z_1, a_2, t);
              return(t);
            }
            t = dynrule_cong_6_0(_id, w_1, _id, _id, _id, _id, t);
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            {
              ATerm i_14 = NULL,l_14 = NULL,m_14 = NULL,u_12 = NULL,f_13 = NULL,r_1 = NULL;
              i_14 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  l_14 = ATgetArgument(t, 0);
                  m_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_14);
              u_12 = t;
              t = l_14;
              t = t_100(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_13 = ATgetFirst((ATermList) t);
                  {
                    ATerm h_15 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, f_13, m_14);
              r_1 = t;
              t = SSLsetAnnotations(r_1, u_12);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm u_100 (ATerm), ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,v_24 = NULL,w_24 = NULL,a_25 = NULL,f_25 = NULL;
  w_24 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
      {
        ATerm v_13 = NULL,y_13 = NULL,z_13 = NULL,q_2 = NULL;
        t = SSLgetAnnotations(w_24);
        v_13 = t;
        t = a_25;
        t = u_100(t);
        y_13 = t;
        t = f_25;
        t = u_100(t);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, y_13, z_13);
        q_2 = t;
        t = SSLsetAnnotations(q_2, v_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          a_25 = ATgetArgument(t, 0);
          f_25 = ATgetArgument(t, 1);
          v_24 = ATgetArgument(t, 2);
          {
            ATerm w_14 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(w_24);
            w_14 = t;
            t = a_25;
            t = w_100(t);
            c_15 = t;
            t = f_25;
            t = w_100(t);
            d_15 = t;
            t = v_24;
            t = u_100(t);
            e_15 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, c_15, d_15, e_15);
            s_2 = t;
            t = SSLsetAnnotations(s_2, w_14);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              a_25 = ATgetArgument(t, 0);
              f_25 = ATgetArgument(t, 1);
              v_24 = ATgetArgument(t, 2);
              t_24 = ATgetArgument(t, 3);
              {
                ATerm p_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,t_2 = NULL;
                t = SSLgetAnnotations(w_24);
                p_15 = t;
                t = a_25;
                t = w_100(t);
                u_15 = t;
                t = f_25;
                t = w_100(t);
                v_15 = t;
                t = v_24;
                t = w_100(t);
                w_15 = t;
                t = t_24;
                t = u_100(t);
                x_15 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_15, v_15, w_15, x_15);
                t_2 = t;
                t = SSLsetAnnotations(t_2, p_15);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  a_25 = ATgetArgument(t, 0);
                  f_25 = ATgetArgument(t, 1);
                  v_24 = ATgetArgument(t, 2);
                  t_24 = ATgetArgument(t, 3);
                  {
                    ATerm j_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,v_2 = NULL;
                    t = SSLgetAnnotations(w_24);
                    j_16 = t;
                    t = a_25;
                    t = w_100(t);
                    o_16 = t;
                    t = f_25;
                    t = w_100(t);
                    p_16 = t;
                    t = v_24;
                    t = w_100(t);
                    q_16 = t;
                    t = t_24;
                    t = u_100(t);
                    r_16 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, o_16, p_16, q_16, r_16);
                    v_2 = t;
                    t = SSLsetAnnotations(v_2, j_16);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      a_25 = ATgetArgument(t, 0);
                      f_25 = ATgetArgument(t, 1);
                      v_24 = ATgetArgument(t, 2);
                      {
                        ATerm c_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,w_2 = NULL;
                        t = SSLgetAnnotations(w_24);
                        c_17 = t;
                        t = a_25;
                        t = w_100(t);
                        l_17 = t;
                        t = f_25;
                        t = w_100(t);
                        m_17 = t;
                        t = v_24;
                        t = w_100(t);
                        n_17 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, l_17, m_17, n_17);
                        w_2 = t;
                        t = SSLsetAnnotations(w_2, c_17);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          a_25 = ATgetArgument(t, 0);
                          f_25 = ATgetArgument(t, 1);
                          {
                            ATerm j_18 = NULL,x_18 = NULL,y_18 = NULL,x_2 = NULL;
                            t = SSLgetAnnotations(w_24);
                            j_18 = t;
                            t = a_25;
                            t = w_100(t);
                            x_18 = t;
                            t = f_25;
                            t = u_100(t);
                            y_18 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, x_18, y_18);
                            x_2 = t;
                            t = SSLsetAnnotations(x_2, j_18);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              a_25 = ATgetArgument(t, 0);
                              f_25 = ATgetArgument(t, 1);
                              {
                                ATerm r_19 = NULL,u_19 = NULL,w_19 = NULL,z_2 = NULL;
                                t = SSLgetAnnotations(w_24);
                                r_19 = t;
                                t = a_25;
                                t = w_100(t);
                                u_19 = t;
                                t = f_25;
                                t = u_100(t);
                                w_19 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, u_19, w_19);
                                z_2 = t;
                                t = SSLsetAnnotations(z_2, r_19);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  a_25 = ATgetArgument(t, 0);
                                  f_25 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_20 = NULL,n_20 = NULL,w_20 = NULL,b_3 = NULL;
                                    t = SSLgetAnnotations(w_24);
                                    k_20 = t;
                                    t = a_25;
                                    t = w_100(t);
                                    n_20 = t;
                                    t = f_25;
                                    t = u_100(t);
                                    w_20 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, n_20, w_20);
                                    b_3 = t;
                                    t = SSLsetAnnotations(b_3, k_20);
                                  }
                                }
                              else
                                {
                                  ATerm m_21 = NULL,r_21 = NULL,s_21 = NULL,c_3 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      a_25 = ATgetArgument(t, 0);
                                      f_25 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(w_24);
                                  m_21 = t;
                                  t = a_25;
                                  t = w_100(t);
                                  r_21 = t;
                                  t = f_25;
                                  t = u_100(t);
                                  s_21 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, r_21, s_21);
                                  c_3 = t;
                                  t = SSLsetAnnotations(c_3, m_21);
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
ATerm dynrule_sargs_1_0 (ATerm y_100 (ATerm), ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,o_26 = NULL;
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
          o_26 = ATgetArgument(t, 1);
          {
            ATerm m_15 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_26;
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
                  ATerm q_15 = ATgetArgument(t, 1);
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
                o_26 = ATgetArgument(t, 1);
                {
                  ATerm s_15 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = o_26;
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
                ATerm y_15 = ATgetArgument(t, 0);
                o_26 = ATgetArgument(t, 1);
                {
                  ATerm z_15 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = o_26;
          }
      }
    }
  return(t);
}
static ATerm c_2 (ATerm t)
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
static ATerm d_2 (ATerm t)
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
  ATerm m_27 = NULL;
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm i_16 = ATgetArgument(t, 0);
          m_27 = ATgetArgument(t, 1);
          {
            ATerm k_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_16);
      t = m_27;
      t = map_1_0(c_2, t);
    }
  else
    {
      t = g_16;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm l_16 = ATgetArgument(t, 0);
          m_27 = ATgetArgument(t, 1);
          {
            ATerm m_16 = ATgetArgument(t, 2);
          }
          {
            ATerm n_16 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = m_27;
      t = map_1_0(d_2, t);
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm i_28 = NULL;
  ATerm s_16 = t;
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
      t = s_16;
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
static ATerm k_5 (ATerm y_22, ATerm x_22, ATerm t)
{
  t = y_22;
  t = map_1_0(e_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,u_28 = NULL,z_28 = NULL,p_3 = NULL;
  z_28 = t;
  if(match_cons(t, sym_SVar_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_28);
  o_28 = t;
  t = p_28;
  t = a_81(t);
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, u_28);
  p_3 = t;
  t = SSLsetAnnotations(p_3, o_28);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_29 = NULL,j_29 = NULL,l_29 = NULL,o_29 = NULL,y_29 = NULL;
      h_29 = t;
      if(match_cons(t, sym_Let_2))
        {
          j_29 = ATgetArgument(t, 0);
          l_29 = ATgetArgument(t, 1);
          t = h_29;
          t = k_5(j_29, l_29, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              j_29 = ATgetArgument(t, 0);
              l_29 = ATgetArgument(t, 1);
              o_29 = ATgetArgument(t, 2);
              t = l_29;
              t = map_1_0(g_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  j_29 = ATgetArgument(t, 0);
                  l_29 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, j_29);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_29 = ATgetArgument(t, 0);
                      l_29 = ATgetArgument(t, 1);
                      o_29 = ATgetArgument(t, 2);
                      y_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_29;
                  t = map_1_0(h_2, t);
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
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(d_17);
          }
        else
          {
            t = b_17;
            t = dynrule_sargs_1_0(k_2, t);
          }
      }
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm i_30 = NULL;
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_30 = ATgetArgument(t, 0);
          {
            ATerm g_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_17);
      t = i_30;
    }
  else
    {
      t = e_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_30;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm c_31 = NULL;
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_31 = ATgetArgument(t, 0);
          {
            ATerm j_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_17);
      t = c_31;
    }
  else
    {
      t = h_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_31;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = map_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm u_31 = NULL;
  ATerm k_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_31 = ATgetArgument(t, 0);
          {
            ATerm p_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_17);
      t = u_31;
    }
  else
    {
      t = k_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_31;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, f_2, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm t)
{
  ATerm p_37 = NULL,w_37 = NULL,g_38 = NULL;
  p_37 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      w_37 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
      {
        ATerm i_22 = NULL,m_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,t_22 = NULL,w_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,y_3 = NULL,x_3 = NULL,w_3 = NULL;
        t = SSLgetAnnotations(p_37);
        i_22 = t;
        t = w_37;
        if(match_cons(t, sym_DynRuleId_1))
          {
            q_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_37);
        p_22 = t;
        t = q_22;
        if(match_cons(t, sym_RDecT_3))
          {
            w_22 = ATgetArgument(t, 0);
            z_22 = ATgetArgument(t, 1);
            a_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_22);
        t_22 = t;
        t = w_22;
        t = a_101(t);
        b_23 = t;
        t = z_22;
        t = b_101(t);
        c_23 = t;
        t = a_23;
        t = c_101(t);
        d_23 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, b_23, c_23, d_23);
        w_3 = t;
        t = SSLsetAnnotations(w_3, t_22);
        e_23 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, e_23);
        x_3 = t;
        t = SSLsetAnnotations(x_3, p_22);
        r_22 = t;
        t = g_38;
        t = d_101(t);
        m_22 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, r_22, m_22);
        y_3 = t;
        t = SSLsetAnnotations(y_3, i_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          w_37 = ATgetArgument(t, 0);
          g_38 = ATgetArgument(t, 1);
          {
            ATerm n_23 = NULL,x_23 = NULL,b_24 = NULL,e_24 = NULL,l_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,u_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,n_25 = NULL,d_4 = NULL,b_4 = NULL,a_4 = NULL,z_3 = NULL;
            t = SSLgetAnnotations(p_37);
            n_23 = t;
            t = w_37;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_37);
            r_24 = t;
            t = s_24;
            if(match_cons(t, sym_RDecT_3))
              {
                y_24 = ATgetArgument(t, 0);
                z_24 = ATgetArgument(t, 1);
                b_25 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_24);
            x_24 = t;
            t = y_24;
            t = a_101(t);
            c_25 = t;
            t = z_24;
            t = b_101(t);
            d_25 = t;
            t = b_25;
            t = c_101(t);
            e_25 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, c_25, d_25, e_25);
            z_3 = t;
            t = SSLsetAnnotations(z_3, x_24);
            n_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, n_25);
            a_4 = t;
            t = SSLsetAnnotations(a_4, r_24);
            u_24 = t;
            t = g_38;
            if(match_cons(t, sym_Rule_3))
              {
                b_24 = ATgetArgument(t, 0);
                e_24 = ATgetArgument(t, 1);
                l_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_38);
            x_23 = t;
            t = b_24;
            t = d_101(t);
            n_24 = t;
            t = e_24;
            t = e_101(t);
            o_24 = t;
            t = l_24;
            t = f_101(t);
            p_24 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, n_24, o_24, p_24);
            b_4 = t;
            t = SSLsetAnnotations(b_4, x_23);
            q_24 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, u_24, q_24);
            d_4 = t;
            t = SSLsetAnnotations(d_4, n_23);
          }
        }
      else
        {
          ATerm x_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,t_26 = NULL,u_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,a_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,k_4 = NULL,j_4 = NULL,g_4 = NULL,f_4 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              w_37 = ATgetArgument(t, 0);
              g_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_37);
          x_25 = t;
          t = w_37;
          if(match_cons(t, sym_DynRuleId_1))
            {
              k_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_37);
          j_26 = t;
          t = k_26;
          if(match_cons(t, sym_RDecT_3))
            {
              w_26 = ATgetArgument(t, 0);
              x_26 = ATgetArgument(t, 1);
              y_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_26);
          u_26 = t;
          t = w_26;
          t = a_101(t);
          a_27 = t;
          t = x_26;
          t = b_101(t);
          c_27 = t;
          t = y_26;
          t = c_101(t);
          d_27 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, a_27, c_27, d_27);
          f_4 = t;
          t = SSLsetAnnotations(f_4, u_26);
          e_27 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, e_27);
          g_4 = t;
          t = SSLsetAnnotations(g_4, j_26);
          t_26 = t;
          t = g_38;
          if(match_cons(t, sym_Rule_3))
            {
              b_26 = ATgetArgument(t, 0);
              c_26 = ATgetArgument(t, 1);
              d_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_38);
          a_26 = t;
          t = b_26;
          t = d_101(t);
          e_26 = t;
          t = c_26;
          t = e_101(t);
          f_26 = t;
          t = d_26;
          t = f_101(t);
          h_26 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, e_26, f_26, h_26);
          j_4 = t;
          t = SSLsetAnnotations(j_4, a_26);
          i_26 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, t_26, i_26);
          k_4 = t;
          t = SSLsetAnnotations(k_4, x_25);
        }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
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
  ATerm v_29 = NULL,x_29 = NULL,e_30 = NULL,f_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
        {
          v_29 = ATgetFirst((ATermList) s_17);
          x_29 = (ATerm) ATgetNext((ATermList) s_17);
        }
      else
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
          {
            e_30 = ATgetFirst((ATermList) t_17);
            f_30 = (ATerm) ATgetNext((ATermList) t_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_29, e_30), (ATerm) ATmakeAppl(sym__2, x_29, f_30));
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL;
  if(match_cons(t, sym__2))
    {
      k_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_30), k_30);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm p_30 = NULL,r_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym__2))
    {
      p_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_30;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_30);
      }
    else
      {
        t = u_17;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_17 = ATgetArgument(t, 0);
            r_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_30, r_30);
      }
  }
  return(t);
}
static ATerm i_3 (ATerm t)
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
static ATerm j_3 (ATerm t)
{
  ATerm j_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_18 = ATgetArgument(t, 0);
      if(((ATgetType(a_18) == AT_LIST) && !(ATisEmpty(a_18))))
        {
          j_32 = ATgetFirst((ATermList) a_18);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_32, n_32), (ATerm) ATmakeAppl(sym__2, m_32, o_32));
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm p_32 = NULL,w_32 = NULL;
  if(match_cons(t, sym__2))
    {
      p_32 = ATgetArgument(t, 0);
      w_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_32), p_32);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm c_33 = NULL,e_33 = NULL,h_33 = NULL;
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
            e_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_33, e_33);
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
  ATerm s_34 = NULL,u_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_18 = ATgetArgument(t, 0);
      if(((ATgetType(i_18) == AT_LIST) && !(ATisEmpty(i_18))))
        {
          s_34 = ATgetFirst((ATermList) i_18);
          u_34 = (ATerm) ATgetNext((ATermList) i_18);
        }
      else
        _fail(t);
      {
        ATerm k_18 = ATgetArgument(t, 1);
        if(((ATgetType(k_18) == AT_LIST) && !(ATisEmpty(k_18))))
          {
            w_34 = ATgetFirst((ATermList) k_18);
            x_34 = (ATerm) ATgetNext((ATermList) k_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_34, w_34), (ATerm) ATmakeAppl(sym__2, u_34, x_34));
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
  ATerm b_35 = NULL,n_35 = NULL,o_35 = NULL;
  if(match_cons(t, sym__2))
    {
      b_35 = ATgetArgument(t, 0);
      o_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_35;
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_35);
      }
    else
      {
        t = l_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_18 = ATgetArgument(t, 0);
            n_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_35, n_35);
      }
  }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_18 = ATgetArgument(t, 0);
      if(((ATgetType(p_18) != AT_LIST) || !(ATisEmpty(p_18))))
        _fail(t);
      {
        ATerm q_18 = ATgetArgument(t, 1);
        if(((ATgetType(q_18) != AT_LIST) || !(ATisEmpty(q_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm h_49 = NULL,j_49 = NULL,m_49 = NULL,o_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
        {
          h_49 = ATgetFirst((ATermList) r_18);
          j_49 = (ATerm) ATgetNext((ATermList) r_18);
        }
      else
        _fail(t);
      {
        ATerm s_18 = ATgetArgument(t, 1);
        if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
          {
            m_49 = ATgetFirst((ATermList) s_18);
            o_49 = (ATerm) ATgetNext((ATermList) s_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_49, m_49), (ATerm) ATmakeAppl(sym__2, j_49, o_49));
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL;
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_49), s_49);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm w_49 = NULL,c_50 = NULL,f_50 = NULL;
  if(match_cons(t, sym__2))
    {
      w_49 = ATgetArgument(t, 0);
      f_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_49;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_50);
      }
    else
      {
        t = t_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            c_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_50, c_50);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,u_48 = NULL,v_48 = NULL;
      o_48 = t;
      if(match_cons(t, sym_Scope_2))
        {
          p_48 = ATgetArgument(t, 0);
          q_48 = ATgetArgument(t, 1);
          {
            ATerm n_27 = NULL,q_27 = NULL,w_5 = NULL;
            t = SSLgetAnnotations(o_48);
            n_27 = t;
            t = p_48;
            t = p_100(t);
            q_27 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, q_27, q_48);
            w_5 = t;
            t = SSLsetAnnotations(w_5, n_27);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              p_48 = ATgetArgument(t, 0);
              {
                ATerm v_28 = NULL,l_6 = NULL;
                t = SSLgetAnnotations(o_48);
                v_28 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, p_48);
                l_6 = t;
                t = SSLsetAnnotations(l_6, v_28);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  p_48 = ATgetArgument(t, 0);
                  q_48 = ATgetArgument(t, 1);
                  u_48 = ATgetArgument(t, 2);
                  {
                    ATerm f_29 = NULL,p_29 = NULL,t_29 = NULL,r_6 = NULL;
                    t = SSLgetAnnotations(o_48);
                    f_29 = t;
                    t = u_48;
                    t = p_100(t);
                    t_29 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_48, t_29);
                    t = genzip_4_0(a_3, d_3, f_3, g_3, t);
                    p_29 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, p_48, q_48, p_29);
                    r_6 = t;
                    t = SSLsetAnnotations(r_6, f_29);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_48 = ATgetArgument(t, 0);
                      q_48 = ATgetArgument(t, 1);
                      u_48 = ATgetArgument(t, 2);
                      v_48 = ATgetArgument(t, 3);
                      {
                        ATerm y_31 = NULL,g_32 = NULL,h_32 = NULL,w_6 = NULL;
                        t = SSLgetAnnotations(o_48);
                        y_31 = t;
                        t = u_48;
                        t = p_100(t);
                        h_32 = t;
                        t = (ATerm) ATmakeAppl(sym__2, u_48, h_32);
                        t = genzip_4_0(i_3, j_3, k_3, l_3, t);
                        g_32 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, p_48, q_48, g_32, v_48);
                        w_6 = t;
                        t = SSLsetAnnotations(w_6, y_31);
                      }
                    }
                  else
                    {
                      ATerm h_34 = NULL,n_34 = NULL,o_34 = NULL,a_7 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          p_48 = ATgetArgument(t, 0);
                          q_48 = ATgetArgument(t, 1);
                          u_48 = ATgetArgument(t, 2);
                          v_48 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(o_48);
                      h_34 = t;
                      t = u_48;
                      t = p_100(t);
                      o_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_48, o_34);
                      t = genzip_4_0(m_3, n_3, o_3, q_3, t);
                      n_34 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, p_48, q_48, n_34, v_48);
                      a_7 = t;
                      t = SSLsetAnnotations(a_7, h_34);
                    }
                }
            }
        }
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
        static ATerm r_3 (ATerm t);
        static ATerm r_3 (ATerm t)
        {
          ATerm d_49 = NULL,e_49 = NULL;
          e_49 = t;
          t = p_100(t);
          d_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_49, d_49);
          t = genzip_4_0(s_3, t_3, u_3, v_3, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, r_3, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,f_62 = NULL,g_62 = NULL;
  f_62 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_62 = ATgetArgument(t, 0);
      y_61 = ATgetArgument(t, 1);
      {
        ATerm m_36 = NULL,w_36 = NULL,x_36 = NULL,i_7 = NULL;
        t = SSLgetAnnotations(f_62);
        m_36 = t;
        t = g_62;
        t = s_100(t);
        w_36 = t;
        t = y_61;
        t = q_100(t);
        x_36 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_36, x_36);
        i_7 = t;
        t = SSLsetAnnotations(i_7, m_36);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          g_62 = ATgetArgument(t, 0);
          {
            ATerm i_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,k_7 = NULL,j_7 = NULL;
            t = SSLgetAnnotations(f_62);
            i_37 = t;
            t = g_62;
            if(match_cons(t, sym_Rule_3))
              {
                s_37 = ATgetArgument(t, 0);
                t_37 = ATgetArgument(t, 1);
                u_37 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_62);
            r_37 = t;
            t = s_37;
            t = q_100(t);
            v_37 = t;
            t = t_37;
            t = q_100(t);
            x_37 = t;
            t = u_37;
            t = q_100(t);
            y_37 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, v_37, x_37, y_37);
            j_7 = t;
            t = SSLsetAnnotations(j_7, r_37);
            z_37 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, z_37);
            k_7 = t;
            t = SSLsetAnnotations(k_7, i_37);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              g_62 = ATgetArgument(t, 0);
              y_61 = ATgetArgument(t, 1);
              w_61 = ATgetArgument(t, 2);
              {
                ATerm m_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,l_7 = NULL;
                t = SSLgetAnnotations(f_62);
                m_38 = t;
                t = g_62;
                t = s_100(t);
                r_38 = t;
                t = y_61;
                t = s_100(t);
                s_38 = t;
                t = w_61;
                t = s_100(t);
                t_38 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, r_38, s_38, t_38);
                l_7 = t;
                t = SSLsetAnnotations(l_7, m_38);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  g_62 = ATgetArgument(t, 0);
                  y_61 = ATgetArgument(t, 1);
                  w_61 = ATgetArgument(t, 2);
                  x_61 = ATgetArgument(t, 3);
                  {
                    ATerm e_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,m_7 = NULL;
                    t = SSLgetAnnotations(f_62);
                    e_39 = t;
                    t = g_62;
                    t = s_100(t);
                    j_39 = t;
                    t = y_61;
                    t = s_100(t);
                    k_39 = t;
                    t = w_61;
                    t = s_100(t);
                    l_39 = t;
                    t = x_61;
                    t = q_100(t);
                    m_39 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, j_39, k_39, l_39, m_39);
                    m_7 = t;
                    t = SSLsetAnnotations(m_7, e_39);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_62 = ATgetArgument(t, 0);
                      y_61 = ATgetArgument(t, 1);
                      w_61 = ATgetArgument(t, 2);
                      x_61 = ATgetArgument(t, 3);
                      {
                        ATerm y_39 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,y_7 = NULL;
                        t = SSLgetAnnotations(f_62);
                        y_39 = t;
                        t = g_62;
                        t = s_100(t);
                        d_40 = t;
                        t = y_61;
                        t = s_100(t);
                        e_40 = t;
                        t = w_61;
                        t = s_100(t);
                        f_40 = t;
                        t = x_61;
                        t = q_100(t);
                        g_40 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_40, e_40, f_40, g_40);
                        y_7 = t;
                        t = SSLsetAnnotations(y_7, y_39);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          g_62 = ATgetArgument(t, 0);
                          y_61 = ATgetArgument(t, 1);
                          {
                            ATerm q_40 = NULL,w_40 = NULL,x_40 = NULL,z_7 = NULL;
                            t = SSLgetAnnotations(f_62);
                            q_40 = t;
                            t = g_62;
                            t = s_100(t);
                            w_40 = t;
                            t = y_61;
                            t = q_100(t);
                            x_40 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, w_40, x_40);
                            z_7 = t;
                            t = SSLsetAnnotations(z_7, q_40);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              g_62 = ATgetArgument(t, 0);
                              y_61 = ATgetArgument(t, 1);
                              {
                                ATerm m_41 = NULL,q_41 = NULL,r_41 = NULL,a_8 = NULL;
                                t = SSLgetAnnotations(f_62);
                                m_41 = t;
                                t = g_62;
                                t = s_100(t);
                                q_41 = t;
                                t = y_61;
                                t = q_100(t);
                                r_41 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, q_41, r_41);
                                a_8 = t;
                                t = SSLsetAnnotations(a_8, m_41);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  g_62 = ATgetArgument(t, 0);
                                  y_61 = ATgetArgument(t, 1);
                                  {
                                    ATerm f_42 = NULL,j_42 = NULL,k_42 = NULL,b_8 = NULL;
                                    t = SSLgetAnnotations(f_62);
                                    f_42 = t;
                                    t = g_62;
                                    t = s_100(t);
                                    j_42 = t;
                                    t = y_61;
                                    t = q_100(t);
                                    k_42 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, j_42, k_42);
                                    b_8 = t;
                                    t = SSLsetAnnotations(b_8, f_42);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      g_62 = ATgetArgument(t, 0);
                                      {
                                        ATerm u_42 = NULL,x_42 = NULL,c_8 = NULL;
                                        t = SSLgetAnnotations(f_62);
                                        u_42 = t;
                                        t = g_62;
                                        t = q_100(t);
                                        x_42 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, x_42);
                                        c_8 = t;
                                        t = SSLsetAnnotations(c_8, u_42);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          g_62 = ATgetArgument(t, 0);
                                          {
                                            ATerm e_43 = NULL,h_43 = NULL,d_8 = NULL;
                                            t = SSLgetAnnotations(f_62);
                                            e_43 = t;
                                            t = g_62;
                                            t = q_100(t);
                                            h_43 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_43);
                                            d_8 = t;
                                            t = SSLsetAnnotations(d_8, e_43);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              g_62 = ATgetArgument(t, 0);
                                              {
                                                ATerm o_43 = NULL,q_43 = NULL,e_8 = NULL;
                                                t = SSLgetAnnotations(f_62);
                                                o_43 = t;
                                                t = g_62;
                                                t = q_100(t);
                                                q_43 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, q_43);
                                                e_8 = t;
                                                t = SSLsetAnnotations(e_8, o_43);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  g_62 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm j_44 = NULL,q_44 = NULL,f_8 = NULL;
                                                    t = SSLgetAnnotations(f_62);
                                                    j_44 = t;
                                                    t = g_62;
                                                    t = q_100(t);
                                                    q_44 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, q_44);
                                                    f_8 = t;
                                                    t = SSLsetAnnotations(f_8, j_44);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm f_46 = NULL,h_46 = NULL,i_8 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      g_62 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(f_62);
                                                  f_46 = t;
                                                  t = g_62;
                                                  t = q_100(t);
                                                  h_46 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, h_46);
                                                  i_8 = t;
                                                  t = SSLsetAnnotations(i_8, f_46);
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
ATerm dynrule_targs_1_0 (ATerm z_100 (ATerm), ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,z_63 = NULL;
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          v_63 = ATgetArgument(t, 0);
          {
            ATerm d_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_19);
      t = v_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          w_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_63;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm e_19 = ATgetArgument(t, 0);
          ATerm f_19 = ATgetArgument(t, 1);
          z_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_63;
    }
  else
    {
      t = b_19;
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                v_63 = ATgetArgument(t, 0);
                {
                  ATerm i_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_19);
            t = v_63;
            if(match_cons(t, sym_DynRuleId_1))
              {
                w_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_63;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_19 = ATgetArgument(t, 0);
                ATerm k_19 = ATgetArgument(t, 1);
                z_63 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = z_63;
          }
        else
          {
            t = g_19;
            if(match_cons(t, sym_AddDynRule_2))
              {
                v_63 = ATgetArgument(t, 0);
                {
                  ATerm l_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = v_63;
            if(match_cons(t, sym_DynRuleId_1))
              {
                w_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_63;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_19 = ATgetArgument(t, 0);
                ATerm n_19 = ATgetArgument(t, 1);
                z_63 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = z_63;
          }
      }
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm q_64 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_64 = ATgetArgument(t, 0);
          {
            ATerm q_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_19);
      t = q_64;
    }
  else
    {
      t = o_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_64;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm w_64 = NULL;
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_64 = ATgetArgument(t, 0);
          {
            ATerm v_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_19);
      t = w_64;
    }
  else
    {
      t = s_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_64;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm l_64 = NULL;
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm z_19 = ATgetArgument(t, 0);
          ATerm a_20 = ATgetArgument(t, 1);
          l_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(y_19);
      t = l_64;
      t = map_1_0(c_4, t);
    }
  else
    {
      t = x_19;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm b_20 = ATgetArgument(t, 0);
          ATerm c_20 = ATgetArgument(t, 1);
          l_64 = ATgetArgument(t, 2);
          {
            ATerm d_20 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = l_64;
      t = map_1_0(e_4, t);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm s_65 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_65);
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
                  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_65 = ATgetArgument(t, 0);
                      v_65 = ATgetArgument(t, 1);
                      w_65 = ATgetArgument(t, 2);
                      x_65 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_65;
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
  ATerm e_66 = NULL;
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_66 = ATgetArgument(t, 0);
          {
            ATerm q_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_20);
      t = e_66;
    }
  else
    {
      t = o_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_66;
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
  ATerm j_66 = NULL;
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_66 = ATgetArgument(t, 0);
          {
            ATerm t_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_20);
      t = j_66;
    }
  else
    {
      t = r_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_66;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm n_66 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_66);
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
                  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_66 = ATgetArgument(t, 0);
                      q_66 = ATgetArgument(t, 1);
                      r_66 = ATgetArgument(t, 2);
                      s_66 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_66;
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
  ATerm z_66 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_66 = ATgetArgument(t, 0);
          {
            ATerm f_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_21);
      t = z_66;
    }
  else
    {
      t = d_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_66;
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
  ATerm e_67 = NULL;
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_67 = ATgetArgument(t, 0);
          {
            ATerm i_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_21);
      t = e_67;
    }
  else
    {
      t = g_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_67;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm i_67 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_67);
  return(t);
}
static ATerm w_4 (ATerm t)
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
                  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_67 = ATgetArgument(t, 0);
                      l_67 = ATgetArgument(t, 1);
                      m_67 = ATgetArgument(t, 2);
                      n_67 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_67;
                  t = map_1_0(x_4, t);
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
                        t = dynrule_targs_1_0(y_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm u_67 = NULL;
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_67 = ATgetArgument(t, 0);
          {
            ATerm w_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_21);
      t = u_67;
    }
  else
    {
      t = u_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_67;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = map_1_0(a_5, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm z_67 = NULL;
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_67 = ATgetArgument(t, 0);
          {
            ATerm z_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_21);
      t = z_67;
    }
  else
    {
      t = x_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_67;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm d_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_68);
  return(t);
}
static ATerm e_5 (ATerm t)
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
                  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_68 = ATgetArgument(t, 0);
                      g_68 = ATgetArgument(t, 1);
                      h_68 = ATgetArgument(t, 2);
                      i_68 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_68;
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
                        t = dynrule_targs_1_0(m_5, t);
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
  ATerm p_68 = NULL;
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_68 = ATgetArgument(t, 0);
          {
            ATerm l_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_22);
      t = p_68;
    }
  else
    {
      t = j_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_68;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = map_1_0(q_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm u_68 = NULL;
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_68 = ATgetArgument(t, 0);
          {
            ATerm s_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_22);
      t = u_68;
    }
  else
    {
      t = n_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_68;
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm a_69 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_69);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            {
              ATerm h_23 = t;
              int i_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_69 = ATgetArgument(t, 0);
                      d_69 = ATgetArgument(t, 1);
                      e_69 = ATgetArgument(t, 2);
                      f_69 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_69;
                  t = map_1_0(z_5, t);
                  LocalPopChoice(i_23);
                }
              else
                {
                  t = h_23;
                  {
                    ATerm j_23 = t;
                    int k_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_23);
                      }
                    else
                      {
                        t = j_23;
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
  ATerm m_69 = NULL;
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_69 = ATgetArgument(t, 0);
          {
            ATerm o_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_23);
      t = m_69;
    }
  else
    {
      t = l_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_69;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = map_1_0(b_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm w_69 = NULL;
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_69 = ATgetArgument(t, 0);
          {
            ATerm r_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_23);
      t = w_69;
    }
  else
    {
      t = p_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_69;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm q_65 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      q_65 = ATgetArgument(t, 0);
      t = q_65;
      t = free_vars_3_0(h_4, i_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          q_65 = ATgetArgument(t, 0);
          t = q_65;
          t = free_vars_3_0(o_4, q_4, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              q_65 = ATgetArgument(t, 0);
              t = q_65;
              t = free_vars_3_0(u_4, w_4, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_65 = ATgetArgument(t, 0);
                  t = q_65;
                  t = free_vars_3_0(b_5, e_5, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      q_65 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_65;
                  t = free_vars_3_0(s_5, u_5, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm n_5 (ATerm a_120 (ATerm), ATerm u_59, ATerm t_59, ATerm t)
{
  static ATerm p_70 (ATerm t);
  static ATerm p_70 (ATerm t)
  {
    ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL;
    k_70 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_59;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_70 = ATgetFirst((ATermList) t);
            m_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_70;
              {
                static ATerm o_6 (ATerm t);
                static ATerm o_6 (ATerm t)
                {
                  t = t_59;
                  return(t);
                }
                t = o_5(a_120, o_6, l_70, m_70, t);
              }
              t = p_70(t);
              LocalPopChoice(t_23);
            }
          else
            {
              t = s_23;
              {
                ATerm c_47 = NULL,g_47 = NULL,c_9 = NULL;
                t = SSLgetAnnotations(k_70);
                c_47 = t;
                t = m_70;
                t = p_70(t);
                g_47 = t;
                t = (ATerm) ATinsert(CheckATermList(g_47), l_70);
                c_9 = t;
                t = SSLsetAnnotations(c_9, c_47);
              }
            }
        }
      }
    return(t);
  }
  t = u_59;
  t = p_70(t);
  return(t);
}
ATerm foldr_3_0 (ATerm f_123 (ATerm), ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL;
  s_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_70;
      t = f_123(t);
    }
  else
    {
      ATerm x_70 = NULL,y_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_70 = ATgetFirst((ATermList) t);
          u_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_70;
      t = h_123(t);
      x_70 = t;
      t = u_70;
      t = foldr_3_0(f_123, g_123, h_123, t);
      y_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_70, y_70);
      t = g_123(t);
    }
  return(t);
}
static ATerm o_5 (ATerm d_120 (ATerm), ATerm e_120 (ATerm), ATerm y_59, ATerm x_59, ATerm t)
{
  t = e_120(t);
  {
    static ATerm v_6 (ATerm t);
    static ATerm v_6 (ATerm t)
    {
      ATerm b_71 = NULL;
      b_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_59, b_71);
      t = d_120(t);
      return(t);
    }
    t = fetch_1_0(v_6, t);
  }
  t = x_59;
  return(t);
}
static ATerm p_5 (ATerm v_119 (ATerm), ATerm s_59, ATerm r_59, ATerm t)
{
  static ATerm r_71 (ATerm t);
  static ATerm r_71 (ATerm t)
  {
    ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
    m_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_71;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_71 = ATgetFirst((ATermList) t);
            o_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_71;
              {
                static ATerm x_6 (ATerm t);
                static ATerm x_6 (ATerm t)
                {
                  t = r_59;
                  return(t);
                }
                t = o_5(v_119, x_6, n_71, o_71, t);
              }
              t = r_71(t);
              LocalPopChoice(v_23);
            }
          else
            {
              t = u_23;
              {
                ATerm x_47 = NULL,e_48 = NULL,e_9 = NULL;
                t = SSLgetAnnotations(m_71);
                x_47 = t;
                t = o_71;
                t = r_71(t);
                e_48 = t;
                t = (ATerm) ATinsert(CheckATermList(e_48), n_71);
                e_9 = t;
                t = SSLsetAnnotations(e_9, x_47);
              }
            }
        }
      }
    return(t);
  }
  t = s_59;
  t = r_71(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_23 = ATgetArgument(t, 0);
      if(((ATgetType(w_23) != AT_LIST) || !(ATisEmpty(w_23))))
        _fail(t);
      {
        ATerm y_23 = ATgetArgument(t, 1);
        if(((ATgetType(y_23) != AT_LIST) || !(ATisEmpty(y_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_23 = ATgetArgument(t, 0);
      if(((ATgetType(z_23) == AT_LIST) && !(ATisEmpty(z_23))))
        {
          z_71 = ATgetFirst((ATermList) z_23);
          a_72 = (ATerm) ATgetNext((ATermList) z_23);
        }
      else
        _fail(t);
      {
        ATerm a_24 = ATgetArgument(t, 1);
        if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
          {
            b_72 = ATgetFirst((ATermList) a_24);
            c_72 = (ATerm) ATgetNext((ATermList) a_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_71, b_72), (ATerm) ATmakeAppl(sym__2, a_72, c_72));
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL;
  if(match_cons(t, sym__2))
    {
      d_72 = ATgetArgument(t, 0);
      e_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_72), d_72);
  return(t);
}
static ATerm r_5 (ATerm o_757, ATerm t_757, ATerm x_74, ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL;
  t = SSL_explode_term(t_757);
  if(match_cons(t, sym__2))
    {
      u_71 = ATgetArgument(t, 0);
      w_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_757);
  if(match_cons(t, sym__2))
    {
      if((u_71 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_71, w_71);
  t = genzip_4_0(y_6, z_6, b_7, _id, t);
  x_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_71, x_74);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm t)
{
  static ATerm g_72 (ATerm t);
  static ATerm g_72 (ATerm t)
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_108(t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = s_108(t);
        t = g_72(t);
      }
    return(t);
  }
  t = g_72(t);
  return(t);
}
ATerm for_3_0 (ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm t)
{
  t = u_108(t);
  t = while_not_2_0(v_108, w_108, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm n_72 = NULL;
  n_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_72);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,g_9 = NULL;
  r_72 = t;
  if(match_cons(t, sym__2))
    {
      p_72 = ATgetArgument(t, 0);
      q_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_72);
  o_72 = t;
  t = q_72;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_72, q_72);
  g_9 = t;
  t = SSLsetAnnotations(g_9, o_72);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL;
  k_73 = t;
  if(match_cons(t, sym__2))
    {
      l_73 = ATgetArgument(t, 0);
      m_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_73 = ATgetFirst((ATermList) t);
      o_73 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_73(l_73, m_73, k_73, t);
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_73), n_73), o_73);
          }
      }
    }
  else
    {
      t = y_73(l_73, m_73, k_73, t);
    }
  return(t);
}
static ATerm y_73 (ATerm s_72, ATerm t_72, ATerm u_72, ATerm t)
{
  ATerm v_72 = NULL,y_72 = NULL,h_9 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL;
  t = SSLgetAnnotations(u_72);
  v_72 = t;
  t = t_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_73 = ATgetFirst((ATermList) t);
      e_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_73;
  if(match_cons(t, sym__2))
    {
      c_73 = ATgetArgument(t, 0);
      d_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_73;
        if((c_73 != t))
          {
            _fail(t);
          }
        t = e_73;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = t_72;
        t = r_5(c_73, d_73, e_73, t);
      }
  }
  y_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_72, y_72);
  h_9 = t;
  t = SSLsetAnnotations(h_9, v_72);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm x_73 = NULL;
  if(match_cons(t, sym__2))
    {
      x_73 = ATgetArgument(t, 0);
      if((x_73 != ATgetArgument(t, 1)))
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
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_7, d_7, e_7, t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm s_73 = NULL,t_73 = NULL,u_73 = NULL;
        s_73 = t;
        if(match_cons(t, sym__2))
          {
            t_73 = ATgetArgument(t, 0);
            u_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_73;
        t = p_5(f_7, t_73, u_73, t);
      }
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm t_48 = NULL,x_48 = NULL;
  if(match_cons(t, sym__2))
    {
      t_48 = ATgetArgument(t, 0);
      x_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(p_7, t_48, x_48, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm y_48 = NULL;
  if(match_cons(t, sym__2))
    {
      y_48 = ATgetArgument(t, 0);
      if((y_48 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL;
  if(match_cons(t, sym__2))
    {
      k_49 = ATgetArgument(t, 0);
      l_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(t_7, k_49, l_49, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm n_49 = NULL;
  if(match_cons(t, sym__2))
    {
      n_49 = ATgetArgument(t, 0);
      if((n_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm z_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm m_74 (ATerm t);
  static ATerm m_74 (ATerm t)
  {
    ATerm m_24 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_126(t);
        LocalPopChoice(g_25);
      }
    else
      {
        t = m_24;
        {
          ATerm h_25 = t;
          int i_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_74 = NULL,b_74 = NULL,j_48 = NULL,l_48 = NULL;
              a_74 = t;
              t = y_126(t);
              b_74 = t;
              t = a_74;
              {
                static ATerm g_7 (ATerm t);
                static ATerm g_7 (ATerm t)
                {
                  ATerm d_74 = NULL;
                  t = m_74(t);
                  d_74 = t;
                  t = (ATerm) ATmakeAppl(sym__2, d_74, b_74);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_126(g_7, m_74, h_7, t);
              }
              l_48 = t;
              t = SSL_explode_term(l_48);
              if(match_cons(t, sym__2))
                {
                  ATerm j_25 = ATgetArgument(t, 0);
                  j_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_48;
              t = foldr_3_0(n_7, o_7, _id, t);
              LocalPopChoice(i_25);
            }
          else
            {
              t = h_25;
              {
                ATerm b_49 = NULL,c_49 = NULL;
                c_49 = t;
                t = SSL_explode_term(c_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_25 = ATgetArgument(t, 0);
                    b_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_49;
                t = foldr_3_0(r_7, s_7, m_74, t);
              }
            }
        }
      }
    return(t);
  }
  t = m_74(t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm e_75 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_75);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
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
                  ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_75 = ATgetArgument(t, 0);
                      h_75 = ATgetArgument(t, 1);
                      i_75 = ATgetArgument(t, 2);
                      j_75 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_75;
                  t = map_1_0(j_8, t);
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
                        t = dynrule_targs_1_0(k_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm q_75 = NULL;
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_75 = ATgetArgument(t, 0);
          {
            ATerm w_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_25);
      t = q_75;
    }
  else
    {
      t = u_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_75;
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = map_1_0(l_8, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm v_75 = NULL;
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_75 = ATgetArgument(t, 0);
          {
            ATerm g_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_25);
      t = v_75;
    }
  else
    {
      t = y_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_75;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm t_74 = NULL,b_75 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      b_75 = ATgetArgument(t, 0);
      t = b_75;
      if(match_cons(t, sym_Rule_3))
        {
          t_74 = ATgetArgument(t, 0);
          {
            ATerm n_26 = ATgetArgument(t, 1);
          }
          {
            ATerm p_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_74;
      t = free_vars_3_0(u_7, x_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          b_75 = ATgetArgument(t, 0);
          {
            ATerm q_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_75;
    }
  return(t);
}
ATerm Var_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,m_9 = NULL;
  c_76 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_76);
  z_75 = t;
  t = a_76;
  t = w_80(t);
  b_76 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_76);
  m_9 = t;
  t = SSLsetAnnotations(m_9, z_75);
  return(t);
}
static ATerm t_5 (ATerm f_125 (ATerm), ATerm g_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm b_63, ATerm a_63, ATerm z_62, ATerm t)
{
  static ATerm m_8 (ATerm t);
  static ATerm n_8 (ATerm t);
  static ATerm m_8 (ATerm t)
  {
    ATerm e_76 = NULL;
    e_76 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_76, z_62);
    t = f_125(t);
    return(t);
  }
  static ATerm n_8 (ATerm t)
  {
    ATerm f_76 = NULL;
    f_76 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_76, a_63);
    t = f_125(t);
    return(t);
  }
  t = b_63;
  t = g_125(m_8, n_8, _id, t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_117 (ATerm), ATerm t)
{
  static ATerm b_77 (ATerm t);
  static ATerm b_77 (ATerm t)
  {
    ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL;
    a_77 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_76 = ATgetFirst((ATermList) t);
        z_76 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_49 = NULL,z_49 = NULL,o_9 = NULL;
          t = SSLgetAnnotations(a_77);
          v_49 = t;
          t = z_76;
          t = b_77(t);
          z_49 = t;
          t = (ATerm) ATinsert(CheckATermList(z_49), y_76);
          o_9 = t;
          t = SSLsetAnnotations(o_9, v_49);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_77;
        t = x_117(t);
      }
    return(t);
  }
  t = b_77(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL;
  i_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_76;
    }
  else
    {
      static ATerm o_8 (ATerm t);
      static ATerm o_8 (ATerm t)
      {
        t = not_null(k_76);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_76 = ATgetFirst((ATermList) t);
          if(((k_76 != NULL) && (k_76 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_76;
      t = at_end_1_0(o_8, t);
    }
  return(t);
}
static ATerm n_77 (ATerm f_77, ATerm t)
{
  ATerm g_77 = NULL;
  t = SSL_explode_term(f_77);
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_77;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL;
  k_77 = t;
  if(match_cons(t, sym__2))
    {
      i_77 = ATgetArgument(t, 0);
      j_77 = ATgetArgument(t, 1);
      {
        ATerm s_26 = t;
        int v_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_8 (ATerm t);
            static ATerm p_8 (ATerm t)
            {
              t = j_77;
              return(t);
            }
            t = i_77;
            t = at_end_1_0(p_8, t);
            LocalPopChoice(v_26);
          }
        else
          {
            t = s_26;
            t = n_77(k_77, t);
          }
      }
    }
  else
    {
      t = n_77(k_77, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm t)
{
  static ATerm u_77 (ATerm t);
  static ATerm u_77 (ATerm t)
  {
    ATerm z_26 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_106(t);
        LocalPopChoice(b_27);
      }
    else
      {
        t = z_26;
        {
          ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,t_9 = NULL;
          t = s_106(t);
          t_77 = t;
          if(match_cons(t, sym__2))
            {
              p_77 = ATgetArgument(t, 0);
              q_77 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_77);
          o_77 = t;
          t = p_77;
          t = u_106(t);
          r_77 = t;
          t = q_77;
          t = u_77(t);
          s_77 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_77, s_77);
          t_9 = t;
          t = SSLsetAnnotations(t_9, o_77);
          t = t_106(t);
        }
      }
    return(t);
  }
  t = u_77(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm r_8 (ATerm t)
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
static ATerm s_8 (ATerm t)
{
  ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL,f_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
        {
          c_78 = ATgetFirst((ATermList) h_27);
          d_78 = (ATerm) ATgetNext((ATermList) h_27);
        }
      else
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
          {
            e_78 = ATgetFirst((ATermList) i_27);
            f_78 = (ATerm) ATgetNext((ATermList) i_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_78, e_78), (ATerm) ATmakeAppl(sym__2, d_78, f_78));
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL;
  if(match_cons(t, sym__2))
    {
      g_78 = ATgetArgument(t, 0);
      h_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_78), g_78);
  return(t);
}
static ATerm x_5 (ATerm z_124 (ATerm), ATerm a_125 (ATerm (ATerm), ATerm), ATerm t_62, ATerm w_62, ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,b_78 = NULL;
  t = t_62;
  t = z_124(t);
  w_77 = t;
  t = map_1_0(new_0_0, t);
  x_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_77, x_77);
  t = genzip_4_0(r_8, s_8, t_8, _id, t);
  b_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_78, w_62);
  t = conc_0_0(t);
  y_77 = t;
  t = t_62;
  {
    static ATerm u_8 (ATerm t);
    static ATerm u_8 (ATerm t)
    {
      t = x_77;
      return(t);
    }
    t = a_125(u_8, t);
  }
  z_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_77, w_62, y_77);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL;
  o_78 = t;
  if(match_cons(t, sym__2))
    {
      p_78 = ATgetArgument(t, 0);
      q_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_78;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_78 = ATgetFirst((ATermList) t);
      s_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_78;
  if(match_cons(t, sym__2))
    {
      m_78 = ATgetArgument(t, 0);
      n_78 = ATgetArgument(t, 1);
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_78;
            if((p_78 != t))
              {
                _fail(t);
              }
            t = n_78;
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            t = (ATerm) ATmakeAppl(sym__2, p_78, s_78);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, p_78, s_78);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm n_125 (ATerm), ATerm t)
{
  static ATerm o_79 (ATerm t);
  static ATerm o_79 (ATerm t)
  {
    ATerm l_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_125(t);
        LocalPopChoice(o_27);
      }
    else
      {
        t = l_27;
        {
          ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL;
          static ATerm v_8 (ATerm t);
          static ATerm v_8 (ATerm t)
          {
            ATerm x_50 = NULL;
            x_50 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_50, not_null(n_79));
            t = o_79(t);
            return(t);
          }
          l_79 = t;
          if(match_cons(t, sym__2))
            {
              m_79 = ATgetArgument(t, 0);
              if(((n_79 != NULL) && (n_79 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                n_79 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_79;
          t = SRTS_all(v_8, t);
        }
      }
    return(t);
  }
  t = o_79(t);
  return(t);
}
ATerm rename_4_0 (ATerm u_124 (ATerm (ATerm), ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_124 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_79 = NULL;
  static ATerm h_80 (ATerm t);
  static ATerm h_80 (ATerm t)
  {
    static ATerm z_8 (ATerm t);
    static ATerm z_8 (ATerm t)
    {
      ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
      b_80 = t;
      if(match_cons(t, sym__2))
        {
          c_80 = ATgetArgument(t, 0);
          d_80 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_9 (ATerm t);
            static ATerm a_9 (ATerm t)
            {
              ATerm g_80 = NULL;
              g_80 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_80, d_80);
              t = lookup_0_0(t);
              return(t);
            }
            t = c_80;
            t = u_124(a_9, t);
            LocalPopChoice(r_27);
          }
        else
          {
            t = p_27;
            {
              ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
              t = b_80;
              t = x_5(v_124, x_124, c_80, d_80, t);
              if(match_cons(t, sym__3))
                {
                  e_51 = ATgetArgument(t, 0);
                  f_51 = ATgetArgument(t, 1);
                  g_51 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = t_5(h_80, w_124, e_51, f_51, g_51, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(z_8, t);
    return(t);
  }
  s_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_79, (ATerm) ATempty);
  t = h_80(t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                n_80 = ATgetArgument(t, 0);
                o_80 = ATgetArgument(t, 1);
                p_80 = ATgetArgument(t, 2);
                q_80 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = p_80;
            t = map_1_0(d_9, t);
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
                  t = dynrule_targs_1_0(f_9, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm y_80 = NULL;
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_80 = ATgetArgument(t, 0);
          {
            ATerm b_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_28);
      t = y_80;
    }
  else
    {
      t = z_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_80;
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = map_1_0(j_9, t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm e_81 = NULL;
  ATerm c_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_81 = ATgetArgument(t, 0);
          {
            ATerm f_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_28);
      t = e_81;
    }
  else
    {
      t = c_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_81;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, b_9, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm c_6 (ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm h_81 = NULL;
  t = SSL_fputc(k_31, l_31);
  h_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_81);
  return(t);
}
static ATerm d_6 (ATerm q_29, ATerm r_29, ATerm t)
{
  ATerm i_81 = NULL;
  t = SSL_write_term_to_stream_text(q_29, r_29);
  i_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_81);
  return(t);
}
static ATerm f_6 (ATerm p_109 (ATerm), ATerm d_218, ATerm w_29, ATerm t)
{
  ATerm j_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_218, term_g_28);
  t = j_6(t);
  j_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_81, w_29);
  t = p_109(t);
  t = fclose_0_0(t);
  t = w_29;
  return(t);
}
static ATerm e_6 (ATerm m_29, ATerm n_29, ATerm t)
{
  ATerm k_81 = NULL;
  t = SSL_write_term_to_stream_baf(m_29, n_29);
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_81);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      if(match_cons(h_28, sym_Stream_1))
        {
          r_81 = ATgetArgument(h_28, 0);
        }
      else
        _fail(t);
      s_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(r_81, s_81, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if(match_cons(j_28, sym_Stream_1))
        {
          w_81 = ATgetArgument(j_28, 0);
        }
      else
        _fail(t);
      x_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(w_81, x_81, t);
  t_81 = t;
  t = term_k_28;
  u_81 = t;
  t = t_81;
  if(match_cons(t, sym_Stream_1))
    {
      v_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_28, t_81);
  t = c_6(u_81, v_81, t);
  return(t);
}
ATerm output_1_0 (ATerm y_129 (ATerm), ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL;
  t = y_129(t);
  m_81 = t;
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_81 = NULL,o_81 = NULL;
        t = term_n_28;
        n_81 = t;
        t = term_q_28;
        o_81 = t;
        t = term_r_28;
        t = p_6(n_81, o_81, t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = term_s_28;
      }
  }
  l_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_81, m_81);
  {
    ATerm t_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_81 = NULL,q_81 = NULL;
        t = term_n_28;
        p_81 = t;
        t = term_x_28;
        q_81 = t;
        t = term_y_28;
        t = p_6(p_81, q_81, t);
        t = (ATerm) ATmakeAppl(sym__2, l_81, m_81);
        LocalPopChoice(w_28);
        if(match_cons(t, sym__2))
          {
            ATerm a_29 = ATgetArgument(t, 0);
            ATerm b_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_6(k_9, l_81, m_81, t);
      }
    else
      {
        t = t_28;
        if(match_cons(t, sym__2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            ATerm d_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_6(l_9, l_81, m_81, t);
      }
  }
  return(t);
}
static ATerm l_82 (ATerm f_82, ATerm t)
{
  t = SSL_fclose(f_82);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_82 = NULL,j_82 = NULL;
  j_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_82 = ATgetArgument(t, 0);
      {
        ATerm e_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_82);
            LocalPopChoice(g_29);
          }
        else
          {
            t = e_29;
            t = l_82(j_82, t);
          }
      }
    }
  else
    {
      t = l_82(j_82, t);
    }
  return(t);
}
static ATerm g_6 (ATerm s_29, ATerm t)
{
  t = SSL_read_term_from_stream(s_29);
  return(t);
}
static ATerm h_6 (ATerm x_68, ATerm y_68, ATerm t)
{
  t = SSL_strcat(x_68, y_68);
  return(t);
}
static ATerm i_6 (ATerm m_31, ATerm n_31, ATerm t)
{
  ATerm m_82 = NULL;
  t = SSL_fopen(m_31, n_31);
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_82 = NULL;
  t = SSL_stdin_stream();
  n_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_82 = NULL;
  t = SSL_stdout_stream();
  o_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_82 = NULL;
  t = SSL_stderr_stream();
  p_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_82);
  return(t);
}
static ATerm w_83 (ATerm v_82, ATerm t)
{
  ATerm w_82 = NULL;
  t = SSL_explode_term(v_82);
  if(match_cons(t, sym__2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_29 = ATgetArgument(t, 1);
        if(((ATgetType(k_29) == AT_LIST) && !(ATisEmpty(k_29))))
          {
            w_82 = ATgetFirst((ATermList) k_29);
            {
              ATerm u_29 = (ATerm) ATgetNext((ATermList) k_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_83 (ATerm z_82, ATerm a_83, ATerm b_83, ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL,h_83 = NULL,z_9 = NULL;
  t = SSLgetAnnotations(b_83);
  e_83 = t;
  t = z_82;
  if(match_cons(t, sym_Path_1))
    {
      h_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_83, a_83);
  z_9 = t;
  t = SSLsetAnnotations(z_9, e_83);
  if(match_cons(t, sym__2))
    {
      c_83 = ATgetArgument(t, 0);
      d_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(c_83, d_83, t);
  return(t);
}
static ATerm y_83 (ATerm j_83, ATerm k_83, ATerm l_83, ATerm t)
{
  ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL,r_83 = NULL,a_10 = NULL;
  t = SSLgetAnnotations(l_83);
  o_83 = t;
  t = SSL_is_string(j_83);
  r_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_83, k_83);
  a_10 = t;
  t = SSLsetAnnotations(a_10, o_83);
  if(match_cons(t, sym__2))
    {
      m_83 = ATgetArgument(t, 0);
      n_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(m_83, n_83, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL;
  t_83 = t;
  if(match_cons(t, sym__2))
    {
      u_83 = ATgetArgument(t, 0);
      v_83 = ATgetArgument(t, 1);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_83(t_83, t);
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            {
              ATerm b_30 = t;
              int c_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_83(u_83, v_83, t_83, t);
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                  t = y_83(u_83, v_83, t_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_83(t_83, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,h_84 = NULL;
  h_84 = t;
  {
    ATerm d_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_84, term_h_30);
        t = j_6(t);
        LocalPopChoice(g_30);
      }
    else
      {
        t = d_30;
        {
          ATerm u_51 = NULL,v_51 = NULL;
          t = term_j_30;
          v_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_30, h_84);
          t = h_6(v_51, h_84, t);
          u_51 = t;
          t = SSL_perror(u_51);
          _fail(t);
        }
      }
  }
  b_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(c_84, t);
  a_84 = t;
  t = b_84;
  t = fclose_0_0(t);
  t = a_84;
  return(t);
}
ATerm input_1_0 (ATerm z_129 (ATerm), ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_84 = NULL,l_84 = NULL;
      t = term_n_28;
      k_84 = t;
      t = term_o_30;
      l_84 = t;
      t = term_q_30;
      t = p_6(k_84, l_84, t);
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      t = term_t_30;
    }
  t = ReadFromFile_0_0(t);
  t = z_129(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL;
  m_84 = t;
  t = term_u_30;
  t = whoami_0_0(t);
  n_84 = t;
  t = term_v_30;
  p_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_30), n_84), term_w_30);
  q_84 = t;
  t = SSL_printnl(p_84, q_84);
  t = term_y_30;
  o_84 = t;
  t = SSL_exit(o_84);
  t = m_84;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm s_84 = NULL;
  s_84 = t;
  if(match_string(t, "-k"))
    {
      t = s_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_84;
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
  t_84 = t;
  t = SSL_string_to_int(t_84);
  u_84 = t;
  t = term_z_30;
  v_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_30, u_84);
  t = s_6(v_84, u_84, t);
  t = t_84;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_a_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_9, q_9, s_9, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm x_84 = NULL;
  x_84 = t;
  if(match_string(t, "-S"))
    {
      t = x_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_84;
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm y_84 = NULL,z_84 = NULL;
  t = term_b_31;
  y_84 = t;
  t = term_d_31;
  z_84 = t;
  t = term_e_31;
  t = s_6(y_84, z_84, t);
  t = term_f_31;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_g_31;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL;
  a_85 = t;
  t = SSL_string_to_int(a_85);
  b_85 = t;
  t = term_b_31;
  c_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_31, b_85);
  t = s_6(c_85, b_85, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_85);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_h_31;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL;
  t = term_i_31;
  d_85 = t;
  t = term_u_30;
  e_85 = t;
  t = term_j_31;
  t = s_6(d_85, e_85, t);
  t = term_o_31;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_p_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_9, v_9, w_9, t);
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      {
        ATerm s_31 = t;
        int t_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_9, y_9, b_10, t);
            LocalPopChoice(t_31);
          }
        else
          {
            t = s_31;
            t = Option_3_0(c_10, d_10, e_10, t);
          }
      }
    }
  return(t);
}
static ATerm s_6 (ATerm g_35, ATerm h_35, ATerm t)
{
  ATerm f_85 = NULL,g_85 = NULL;
  t = term_n_28;
  f_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, g_35, h_35);
  t = lookup_table_0_1(f_85, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(g_35, h_35, g_85, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, g_35, h_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_85 = NULL,l_85 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL;
      t = term_u_30;
      t = g_0(t);
      m_85 = t;
      t = term_v_31;
      n_85 = t;
      t = term_w_31;
      o_85 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_31, term_w_31, m_85);
      t = q_6(n_85, o_85, m_85, t);
      _fail(t);
    }
  else
    {
      ATerm r_85 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_85 = ATgetFirst((ATermList) t);
          l_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_85;
      t = d_0(t);
      t = term_u_30;
      t = f_0(t);
      r_85 = t;
      t = (ATerm) ATinsert(CheckATermList(l_85), r_85);
    }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm t_85 = NULL;
  t_85 = t;
  if(match_string(t, "-o"))
    {
      t = t_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_85;
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL;
  u_85 = t;
  t = term_q_28;
  v_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, u_85);
  t = s_6(v_85, u_85, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_85);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_10, g_10, h_10, t);
  return(t);
}
static ATerm q_6 (ATerm u_40, ATerm v_40, ATerm t_40, ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL;
  x_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_40, v_40);
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_32 = ATgetArgument(t, 0);
            ATerm c_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_40, v_40);
        t = p_6(u_40, v_40, t);
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        t = (ATerm) ATempty;
      }
  }
  y_85 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_40, v_40, (ATerm) ATinsert(CheckATermList(y_85), t_40));
  t = lookup_table_0_1(u_40, t);
  b_86 = t;
  t = (ATerm) ATinsert(CheckATermList(y_85), t_40);
  z_85 = t;
  t = b_86;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(v_40, z_85, a_86, t);
  t = x_85;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL;
      t = term_u_30;
      t = o_0(t);
      m_86 = t;
      t = term_v_31;
      n_86 = t;
      t = term_w_31;
      o_86 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_31, term_w_31, m_86);
      t = q_6(n_86, o_86, m_86, t);
      _fail(t);
    }
  else
    {
      ATerm s_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_86 = ATgetFirst((ATermList) t);
          j_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_86;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_86 = ATgetFirst((ATermList) t);
          l_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_86;
      t = l_0(t);
      t = k_86;
      t = m_0(t);
      s_86 = t;
      t = (ATerm) ATinsert(CheckATermList(l_86), s_86);
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm u_86 = NULL;
  u_86 = t;
  if(match_string(t, "-i"))
    {
      t = u_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_86;
    }
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL;
  v_86 = t;
  t = term_o_30;
  w_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_30, v_86);
  t = s_6(w_86, v_86, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_86);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_10, j_10, l_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_30;
  t = whoami_0_0(t);
  x_86 = t;
  t = term_v_30;
  z_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_32), x_86);
  a_87 = t;
  t = SSL_printnl(z_86, a_87);
  t = term_y_30;
  y_86 = t;
  t = SSL_exit(y_86);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL;
  t = term_n_28;
  b_87 = t;
  t = term_f_32;
  c_87 = t;
  t = term_i_32;
  t = p_6(b_87, c_87, t);
  return(t);
}
static ATerm k_6 (ATerm c_38, ATerm d_38, ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_38, d_38);
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      t = SSL_addr(c_38, d_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_123 (ATerm), ATerm e_123 (ATerm), ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL;
  e_87 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_87;
      t = d_123(t);
    }
  else
    {
      ATerm l_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_87 = ATgetFirst((ATermList) t);
          g_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_87;
      t = foldr_2_0(d_123, e_123, t);
      l_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_87, l_87);
      t = e_123(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_d_31;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm b_52 = NULL,e_52 = NULL;
  if(match_cons(t, sym__2))
    {
      b_52 = ATgetArgument(t, 0);
      e_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(b_52, e_52, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_87 = NULL,x_51 = NULL,y_51 = NULL;
  t = times_0_0(t);
  y_51 = t;
  t = SSL_explode_term(y_51);
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      x_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_51;
  t = foldr_2_0(n_10, p_10, t);
  o_87 = t;
  t = SSL_TicksToSeconds(o_87);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL;
  z_87 = t;
  if(match_cons(t, sym__2))
    {
      a_88 = ATgetArgument(t, 0);
      b_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_88;
        if((a_88 != t))
          {
            _fail(t);
          }
        t = z_87;
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        t = (ATerm) ATmakeAppl(sym__2, a_88, b_88);
        {
          ATerm t_32 = t;
          int u_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_88, b_88);
              LocalPopChoice(u_32);
            }
          else
            {
              t = t_32;
              t = SSL_gtr(a_88, b_88);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_88, b_88);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_111 (ATerm), ATerm t)
{
  ATerm f_88 = NULL;
  f_88 = t;
  {
    ATerm v_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL;
        t = term_n_28;
        i_88 = t;
        t = term_b_31;
        j_88 = t;
        t = term_y_32;
        t = p_6(i_88, j_88, t);
        h_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_88, term_y_30);
        t = geq_0_0(t);
        t = f_88;
        t = g_111(t);
        LocalPopChoice(x_32);
      }
    else
      {
        t = v_32;
        t = f_88;
      }
  }
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL,o_88 = NULL,p_88 = NULL;
  t = run_time_0_0(t);
  l_88 = t;
  t = term_u_30;
  t = whoami_0_0(t);
  m_88 = t;
  t = term_v_30;
  o_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_33), l_88), term_z_32), m_88);
  p_88 = t;
  t = SSL_printnl(o_88, p_88);
  t = (ATerm) ATmakeAppl(sym__2, term_v_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_33), l_88), term_z_32), m_88));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_88 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_31;
  q_88 = t;
  t = SSL_exit(q_88);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm a_89 = NULL,b_89 = NULL;
  b_89 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_89;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_89 = ATgetArgument(t, 0);
          {
            ATerm d_53 = NULL,k_10 = NULL;
            t = SSLgetAnnotations(b_89);
            d_53 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_89);
            k_10 = t;
            t = SSLsetAnnotations(k_10, d_53);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_89;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_129 (ATerm), ATerm t)
{
  ATerm b_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_88 = NULL,u_88 = NULL;
      t = term_n_28;
      t_88 = t;
      t = term_f_33;
      u_88 = t;
      t = term_g_33;
      t = p_6(t_88, u_88, t);
      LocalPopChoice(d_33);
    }
  else
    {
      t = b_33;
      t = fetch_1_0(u_10, t);
    }
  t = p_129(t);
  return(t);
}
static ATerm t_6 (ATerm m_45, ATerm n_45, ATerm o_45, ATerm t)
{
  ATerm d_89 = NULL;
  t = SSL_hashtable_put(o_45, m_45, n_45);
  d_89 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_89);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_42, ATerm t)
{
  ATerm m_89 = NULL;
  t = table_hashtable_0_0(t);
  m_89 = t;
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_53 = NULL;
        t = m_89;
        if(match_cons(t, sym_Hashtable_1))
          {
            o_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_6(g_42, o_53, t);
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        {
          ATerm w_53 = NULL;
          t = g_42;
          t = table_create_0_0(t);
          t = m_89;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_6(g_42, w_53, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_45, ATerm v_45, ATerm t)
{
  ATerm p_89 = NULL;
  t = SSL_hashtable_create(u_45, v_45);
  p_89 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_89);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm q_89 = NULL,r_89 = NULL,s_89 = NULL,u_89 = NULL,v_89 = NULL;
  q_89 = t;
  t = term_k_33;
  u_89 = t;
  t = term_l_33;
  v_89 = t;
  t = q_89;
  t = new_hashtable_0_2(u_89, v_89, t);
  r_89 = t;
  t = q_89;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(q_89, r_89, s_89, t);
  t = q_89;
  return(t);
}
static ATerm m_6 (ATerm r_45, ATerm s_45, ATerm t)
{
  ATerm w_89 = NULL;
  t = SSL_hashtable_remove(s_45, r_45);
  w_89 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_89);
  return(t);
}
static ATerm n_6 (ATerm w_45, ATerm t)
{
  ATerm x_89 = NULL;
  t = SSL_hashtable_destroy(w_45);
  x_89 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_89);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm y_89 = NULL;
  t = SSL_table_hashtable();
  y_89 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_89);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,c_90 = NULL;
  z_89 = t;
  t = table_hashtable_0_0(t);
  a_90 = t;
  t = lookup_table_0_1(z_89, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(c_90, t);
  t = a_90;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(z_89, b_90, t);
  t = z_89;
  return(t);
}
ATerm map_1_0 (ATerm g_117 (ATerm), ATerm t)
{
  static ATerm r_90 (ATerm t);
  static ATerm r_90 (ATerm t)
  {
    ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL;
    o_90 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_90;
      }
    else
      {
        ATerm j_54 = NULL,m_54 = NULL,n_54 = NULL,m_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_90 = ATgetFirst((ATermList) t);
            q_90 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_90);
        j_54 = t;
        t = p_90;
        t = g_117(t);
        m_54 = t;
        t = q_90;
        t = r_90(t);
        n_54 = t;
        t = (ATerm) ATinsert(CheckATermList(n_54), m_54);
        m_10 = t;
        t = SSLsetAnnotations(m_10, j_54);
      }
    return(t);
  }
  t = r_90(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_90 = NULL,v_90 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_90 = ATgetFirst((ATermList) t);
      v_90 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_90 = NULL,a_91 = NULL;
        static ATerm v_10 (ATerm t);
        static ATerm v_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_90)), not_null(a_91));
          return(t);
        }
        t = v_90;
        t = j_0(t);
        if(((z_90 != NULL) && (z_90 != t)))
          _fail(t);
        else
          z_90 = t;
        t = u_90;
        t = h_0(t);
        if(((a_91 != NULL) && (a_91 != t)))
          _fail(t);
        else
          a_91 = t;
        t = v_90;
        t = reverse_acc_2_0(h_0, v_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_30;
      t = j_0(t);
    }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm g_91 = NULL,h_91 = NULL,i_91 = NULL,o_10 = NULL;
  i_91 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_91);
  g_91 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_91);
  o_10 = t;
  t = SSLsetAnnotations(o_10, g_91);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm k_91 = NULL;
  k_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_91), term_m_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_91 = NULL,d_91 = NULL;
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_91 = NULL,f_91 = NULL;
      t = term_n_28;
      e_91 = t;
      t = term_f_32;
      f_91 = t;
      t = term_i_32;
      t = p_6(e_91, f_91, t);
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      t = fetch_1_0(x_10, t);
    }
  t = term_p_33;
  t = echo_0_0(t);
  t = term_v_31;
  c_91 = t;
  t = term_w_31;
  d_91 = t;
  t = term_q_33;
  t = p_6(c_91, d_91, t);
  t = reverse_acc_2_0(_id, y_10, t);
  t = map_1_0(z_10, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_117 (ATerm), ATerm t)
{
  static ATerm h_92 (ATerm t);
  static ATerm h_92 (ATerm t)
  {
    ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL;
    e_92 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_92 = ATgetFirst((ATermList) t);
        g_92 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_33 = t;
      int s_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_55 = NULL,l_55 = NULL,s_10 = NULL;
          t = SSLgetAnnotations(e_92);
          h_55 = t;
          t = f_92;
          t = q_117(t);
          l_55 = t;
          t = (ATerm) ATinsert(CheckATermList(g_92), l_55);
          s_10 = t;
          t = SSLsetAnnotations(s_10, h_55);
          LocalPopChoice(s_33);
        }
      else
        {
          t = r_33;
          {
            ATerm d_56 = NULL,l_56 = NULL,t_10 = NULL;
            t = SSLgetAnnotations(e_92);
            d_56 = t;
            t = g_92;
            t = h_92(t);
            l_56 = t;
            t = (ATerm) ATinsert(CheckATermList(l_56), f_92);
            t_10 = t;
            t = SSLsetAnnotations(t_10, d_56);
          }
        }
    }
    return(t);
  }
  t = h_92(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL,n_92 = NULL;
  l_92 = t;
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_92;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_33 = ATgetFirst((ATermList) t);
                ATerm w_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_92;
          }
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = (ATerm) ATinsert(ATempty, l_92);
      }
  }
  m_92 = t;
  t = term_s_28;
  n_92 = t;
  t = SSL_printnl(n_92, m_92);
  t = l_92;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL;
  t = term_n_28;
  r_92 = t;
  t = term_f_32;
  s_92 = t;
  t = term_i_32;
  t = p_6(r_92, s_92, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm p_45, ATerm q_45, ATerm t)
{
  t = SSL_hashtable_get(q_45, p_45);
  return(t);
}
static ATerm p_6 (ATerm n_42, ATerm o_42, ATerm t)
{
  ATerm t_92 = NULL;
  t = lookup_table_0_1(n_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(o_42, t_92, t);
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
  ATerm v_92 = NULL,w_92 = NULL;
  t = term_x_33;
  v_92 = t;
  t = term_u_30;
  w_92 = t;
  t = term_y_33;
  t = s_6(v_92, w_92, t);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_z_33;
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
  ATerm x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL;
  t = term_x_33;
  z_92 = t;
  t = term_u_30;
  a_93 = t;
  t = term_y_33;
  t = s_6(z_92, a_93, t);
  t = term_a_34;
  x_92 = t;
  t = term_u_30;
  y_92 = t;
  t = term_b_34;
  t = s_6(x_92, y_92, t);
  t = term_c_34;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_11, f_11, i_11, t);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      t = Option_3_0(n_11, p_11, q_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL,w_10 = NULL;
  g_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_93 = ATgetFirst((ATermList) t);
      d_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_93);
  b_93 = t;
  t = c_93;
  t = h_87(t);
  e_93 = t;
  t = d_93;
  t = i_87(t);
  f_93 = t;
  t = (ATerm) ATinsert(CheckATermList(f_93), e_93);
  w_10 = t;
  t = SSLsetAnnotations(w_10, b_93);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_131 (ATerm), ATerm t)
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,q_93 = NULL,r_93 = NULL,b_11 = NULL;
  l_93 = t;
  {
    ATerm g_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_34;
        t = n_131(t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = g_34;
      }
  }
  t = l_93;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_93 = ATgetFirst((ATermList) t);
      o_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_93);
  m_93 = t;
  t = term_f_32;
  r_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_32, n_93);
  t = s_6(r_93, n_93, t);
  t = o_93;
  {
    static ATerm b_94 (ATerm t);
    static ATerm b_94 (ATerm t)
    {
      ATerm k_34 = t;
      int l_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_93 = NULL;
              u_93 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_93;
              LocalPopChoice(p_34);
            }
          else
            {
              t = m_34;
              t = n_131(t);
              t = Cons_2_0(_id, b_94, t);
            }
          LocalPopChoice(l_34);
        }
      else
        {
          t = k_34;
          {
            ATerm x_93 = NULL,y_93 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_93 = ATgetFirst((ATermList) t);
                y_93 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_93), (ATerm) ATmakeAppl(sym_Undefined_1, x_93));
          }
        }
      return(t);
    }
    t = b_94(t);
  }
  q_93 = t;
  t = (ATerm) ATinsert(CheckATermList(q_93), (ATerm) ATmakeAppl(sym_Program_1, n_93));
  b_11 = t;
  t = SSLsetAnnotations(b_11, m_93);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm o_94 = NULL;
  o_94 = t;
  if(match_string(t, "--help"))
    {
      t = o_94;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_94;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_94;
        }
    }
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL;
  t = term_f_33;
  p_94 = t;
  t = term_u_30;
  q_94 = t;
  t = term_q_34;
  t = s_6(p_94, q_94, t);
  t = term_r_34;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_t_34;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_131 (ATerm), ATerm t)
{
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL;
  i_94 = t;
  t = term_v_31;
  j_94 = t;
  t = term_v_34;
  t = lookup_table_0_1(j_94, t);
  n_94 = t;
  t = term_w_31;
  k_94 = t;
  t = (ATerm) ATempty;
  l_94 = t;
  t = n_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(k_94, l_94, m_94, t);
  t = i_94;
  {
    static ATerm r_11 (ATerm t);
    static ATerm r_11 (ATerm t)
    {
      ATerm a_35 = t;
      int c_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_131(t);
          LocalPopChoice(c_35);
        }
      else
        {
          t = a_35;
          {
            ATerm d_35 = t;
            int e_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_11, t_11, u_11, t);
                LocalPopChoice(e_35);
              }
            else
              {
                t = d_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_11, t);
  }
  {
    ATerm f_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_95 = NULL;
        b_95 = t;
        {
          ATerm j_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_57 = NULL;
              t = b_95;
              {
                ATerm l_35 = t;
                int m_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_57 = NULL,g_57 = NULL;
                    t = term_n_28;
                    e_57 = t;
                    t = term_f_33;
                    g_57 = t;
                    t = term_g_33;
                    t = p_6(e_57, g_57, t);
                    LocalPopChoice(m_35);
                  }
                else
                  {
                    t = l_35;
                    t = fetch_1_0(v_11, t);
                  }
              }
              t = b_95;
              t = default_system_usage_0_0(t);
              t = term_d_31;
              d_57 = t;
              t = SSL_exit(d_57);
              LocalPopChoice(k_35);
            }
          else
            {
              t = j_35;
              {
                ATerm k_57 = NULL,l_57 = NULL,n_57 = NULL;
                t = term_n_28;
                l_57 = t;
                t = term_x_33;
                n_57 = t;
                t = term_p_35;
                t = p_6(l_57, n_57, t);
                t = b_95;
                t = default_system_about_0_0(t);
                t = term_d_31;
                k_57 = t;
                t = SSL_exit(k_57);
              }
            }
        }
        LocalPopChoice(i_35);
      }
    else
      {
        t = f_35;
        {
          ATerm q_35 = t;
          int r_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_95 = NULL,d_95 = NULL,e_95 = NULL;
              static ATerm w_11 (ATerm t);
              static ATerm w_11 (ATerm t)
              {
                ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL,h_11 = NULL;
                h_95 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_95 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_95);
                f_95 = t;
                t = g_95;
                if(((g_94 != NULL) && (g_94 != t)))
                  _fail(t);
                else
                  g_94 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_95);
                h_11 = t;
                t = SSLsetAnnotations(h_11, f_95);
                return(t);
              }
              t = fetch_1_0(w_11, t);
              t = term_v_30;
              d_95 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_94)), term_s_35);
              e_95 = t;
              t = SSL_printnl(d_95, e_95);
              t = (ATerm) ATmakeAppl(sym__2, term_v_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_94)), term_s_35));
              t = default_system_usage_0_0(t);
              t = term_y_30;
              c_95 = t;
              t = SSL_exit(c_95);
              LocalPopChoice(r_35);
            }
          else
            {
              t = q_35;
            }
        }
      }
  }
  h_94 = t;
  t = term_v_31;
  t = table_destroy_0_0(t);
  t = h_94;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_129 (ATerm), ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm t)
{
  ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL;
  t = parse_options_1_0(r_129, t);
  m_95 = t;
  t = term_t_35;
  t = table_create_0_0(t);
  t = term_t_35;
  n_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_35, term_u_35, m_95);
  t = lookup_table_0_1(n_95, t);
  q_95 = t;
  t = term_u_35;
  o_95 = t;
  t = q_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(o_95, m_95, p_95, t);
  t = m_95;
  t = t_129(t);
  {
    ATerm v_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_129, t);
        LocalPopChoice(w_35);
      }
    else
      {
        t = v_35;
        {
          ATerm x_35 = t;
          int y_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_129(t);
              t = report_success_0_0(t);
              LocalPopChoice(y_35);
            }
          else
            {
              t = x_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
      {
        ATerm b_36 = t;
        int c_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(c_36);
          }
        else
          {
            t = b_36;
            {
              ATerm d_36 = t;
              int e_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_12, i_12, j_12, t);
                  LocalPopChoice(e_36);
                }
              else
                {
                  t = d_36;
                  {
                    ATerm f_36 = t;
                    int g_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(g_36);
                      }
                    else
                      {
                        t = f_36;
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
  t = input_1_0(k_12, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm s_95 = NULL,t_95 = NULL;
  t = term_x_28;
  s_95 = t;
  t = term_u_30;
  t_95 = t;
  t = term_h_36;
  t = s_6(s_95, t_95, t);
  t = term_i_36;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_j_36;
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = output_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(e_12, default_usage_0_0, _id, f_12, t);
  return(t);
}
