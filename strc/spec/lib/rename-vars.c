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
static ATerm term_k_36;
static ATerm term_j_36;
static ATerm term_i_36;
static ATerm term_v_35;
static ATerm term_u_35;
static ATerm term_t_35;
static ATerm term_o_35;
static ATerm term_n_35;
static ATerm term_b_35;
static ATerm term_a_35;
static ATerm term_u_34;
static ATerm term_s_34;
static ATerm term_r_34;
static ATerm term_k_34;
static ATerm term_e_34;
static ATerm term_d_34;
static ATerm term_c_34;
static ATerm term_b_34;
static ATerm term_a_34;
static ATerm term_z_33;
static ATerm term_y_33;
static ATerm term_v_33;
static ATerm term_u_33;
static ATerm term_r_33;
static ATerm term_q_33;
static ATerm term_p_33;
static ATerm term_d_33;
static ATerm term_b_33;
static ATerm term_z_32;
static ATerm term_y_32;
static ATerm term_r_32;
static ATerm term_d_32;
static ATerm term_c_32;
static ATerm term_b_32;
static ATerm term_a_32;
static ATerm term_z_31;
static ATerm term_y_31;
static ATerm term_x_31;
static ATerm term_w_31;
static ATerm term_u_31;
static ATerm term_t_31;
static ATerm term_s_31;
static ATerm term_r_31;
static ATerm term_n_31;
static ATerm term_k_31;
static ATerm term_j_31;
static ATerm term_i_31;
static ATerm term_h_31;
static ATerm term_b_31;
static ATerm term_a_31;
static ATerm term_s_30;
static ATerm term_r_30;
static ATerm term_n_30;
static ATerm term_m_30;
static ATerm term_j_30;
static ATerm term_z_29;
static ATerm term_y_29;
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
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_j_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_r_30);
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
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_u_31);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_31);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__2, term_a_32, term_a_31);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_t_31);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_y_33, term_a_31);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_b_34, term_a_31);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_r_34, term_a_31);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, (ATerm) ATempty);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_r_34);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_y_33);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_a_31);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm spaste_1_0 (ATerm c_112 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm h_112 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_5 (ATerm w_23, ATerm v_23, ATerm t);
ATerm SVar_1_0 (ATerm d_92 (ATerm), ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm tpaste_1_0 (ATerm y_111 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm i_112 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
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
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm m_5 (ATerm m_133 (ATerm), ATerm w_65, ATerm v_65, ATerm t);
ATerm foldr_3_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t_136 (ATerm), ATerm t);
static ATerm n_5 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm a_66, ATerm z_65, ATerm t);
static ATerm o_5 (ATerm h_133 (ATerm), ATerm u_65, ATerm t_65, ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm q_5 (ATerm m_819, ATerm r_819, ATerm m_82, ATerm t);
ATerm while_not_2_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm t);
ATerm for_3_0 (ATerm d_120 (ATerm), ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm o_73 (ATerm i_72, ATerm j_72, ATerm k_72, ATerm t);
static ATerm f_7 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm free_vars_3_0 (ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm z_91 (ATerm), ATerm t);
static ATerm s_5 (ATerm t_138 (ATerm), ATerm u_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_69, ATerm e_69, ATerm d_69, ATerm t);
ATerm at_end_1_0 (ATerm j_131 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_77 (ATerm y_76, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm w_5 (ATerm n_138 (ATerm), ATerm o_138 (ATerm (ATerm), ATerm), ATerm x_68, ATerm a_69, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm b_139 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm i_138 (ATerm (ATerm), ATerm), ATerm j_138 (ATerm), ATerm k_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_138 (ATerm (ATerm), ATerm), ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm b_6 (ATerm i_32, ATerm j_32, ATerm t);
static ATerm c_6 (ATerm o_30, ATerm p_30, ATerm t);
static ATerm e_6 (ATerm y_120 (ATerm), ATerm f_233, ATerm u_30, ATerm t);
static ATerm d_6 (ATerm k_30, ATerm l_30, ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm output_1_0 (ATerm w_143 (ATerm), ATerm t);
static ATerm c_82 (ATerm w_81, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_6 (ATerm q_30, ATerm t);
static ATerm g_6 (ATerm h_75, ATerm i_75, ATerm t);
static ATerm h_6 (ATerm k_32, ATerm l_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_83 (ATerm r_82, ATerm t);
static ATerm t_83 (ATerm v_82, ATerm w_82, ATerm x_82, ATerm t);
static ATerm u_83 (ATerm f_83, ATerm g_83, ATerm h_83, ATerm t);
static ATerm i_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm x_143 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm u_130 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm p_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm default_system_usage_2_0 (ATerm v_145 (ATerm), ATerm w_145 (ATerm), ATerm t);
static ATerm v_9 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm a_10 (ATerm t);
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
static ATerm r_6 (ATerm e_36, ATerm f_36, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm m_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_6 (ATerm v_41, ATerm w_41, ATerm u_41, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_6 (ATerm d_39, ATerm e_39, ATerm t);
ATerm foldr_2_0 (ATerm p_136 (ATerm), ATerm q_136 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_122 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_6 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t);
ATerm lookup_table_0_1 (ATerm h_43, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_46, ATerm t_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_6 (ATerm p_46, ATerm q_46, ATerm t);
static ATerm m_6 (ATerm u_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_131 (ATerm), ATerm t);
static ATerm t_6 (ATerm n_46, ATerm o_46, ATerm t);
static ATerm o_6 (ATerm o_43, ATerm p_43, ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_145 (ATerm), ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm parse_options_3_0 (ATerm n_145 (ATerm), ATerm o_145 (ATerm), ATerm p_145 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm q_143 (ATerm), ATerm r_143 (ATerm), ATerm s_143 (ATerm), ATerm t_143 (ATerm), ATerm u_143 (ATerm), ATerm t);
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
      ATerm m_12 = ATgetArgument(t, 0);
      if(((ATgetType(m_12) != AT_LIST) || !(ATisEmpty(m_12))))
        _fail(t);
      {
        ATerm p_12 = ATgetArgument(t, 1);
        if(((ATgetType(p_12) != AT_LIST) || !(ATisEmpty(p_12))))
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
            ATerm a_13 = ATgetArgument(t, 0);
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
      ATerm c_13 = ATgetArgument(t, 0);
      if(((ATgetType(c_13) != AT_LIST) || !(ATisEmpty(c_13))))
        _fail(t);
      {
        ATerm e_13 = ATgetArgument(t, 1);
        if(((ATgetType(e_13) != AT_LIST) || !(ATisEmpty(e_13))))
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
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_13 = ATgetArgument(t, 0);
      if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
        {
          t_2 = ATgetFirst((ATermList) h_13);
          u_2 = (ATerm) ATgetNext((ATermList) h_13);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_2, v_2), (ATerm) ATmakeAppl(sym__2, u_2, w_2));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL;
  if(match_cons(t, sym__2))
    {
      x_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_2), x_2);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm a_3 = NULL,f_3 = NULL,j_3 = NULL;
  if(match_cons(t, sym__2))
    {
      a_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_3;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_3);
      }
    else
      {
        t = j_13;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_13 = ATgetArgument(t, 0);
            f_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_3, f_3);
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
  ATerm p_5 = NULL,x_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym__2))
    {
      p_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5;
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
            x_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_5, x_5);
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
  ATerm g_8 = NULL,p_8 = NULL,v_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_14 = ATgetArgument(t, 0);
      if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
        {
          g_8 = ATgetFirst((ATermList) a_14);
          p_8 = (ATerm) ATgetNext((ATermList) a_14);
        }
      else
        _fail(t);
      {
        ATerm b_14 = ATgetArgument(t, 1);
        if(((ATgetType(b_14) == AT_LIST) && !(ATisEmpty(b_14))))
          {
            v_8 = ATgetFirst((ATermList) b_14);
            w_8 = (ATerm) ATgetNext((ATermList) b_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_8, v_8), (ATerm) ATmakeAppl(sym__2, p_8, w_8));
  return(t);
}
static ATerm l_1 (ATerm t)
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
static ATerm r_1 (ATerm t)
{
  ATerm i_9 = NULL,q_9 = NULL,r_9 = NULL;
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
            q_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_9, q_9);
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
  ATerm f_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_14 = ATgetArgument(t, 0);
      if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
        {
          f_11 = ATgetFirst((ATermList) i_14);
          i_11 = (ATerm) ATgetNext((ATermList) i_14);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_11, j_11), (ATerm) ATmakeAppl(sym__2, i_11, k_11));
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
  ATerm o_11 = NULL,y_11 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      o_11 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_12);
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
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_12, y_11);
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
  ATerm n_12 = NULL,o_12 = NULL,w_12 = NULL,x_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_14 = ATgetArgument(t, 0);
      if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
        {
          n_12 = ATgetFirst((ATermList) t_14);
          o_12 = (ATerm) ATgetNext((ATermList) t_14);
        }
      else
        _fail(t);
      {
        ATerm u_14 = ATgetArgument(t, 1);
        if(((ATgetType(u_14) == AT_LIST) && !(ATisEmpty(u_14))))
          {
            w_12 = ATgetFirst((ATermList) u_14);
            x_12 = (ATerm) ATgetNext((ATermList) u_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_12, w_12), (ATerm) ATmakeAppl(sym__2, o_12, x_12));
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
  ATerm b_13 = NULL,d_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym__2))
    {
      b_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13;
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_14);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_13);
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
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_13, d_13);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
      a_12 = t;
      if(match_cons(t, sym_Let_2))
        {
          b_12 = ATgetArgument(t, 0);
          c_12 = ATgetArgument(t, 1);
          {
            ATerm e_0 = NULL,k_0 = NULL,m_0 = NULL,n_0 = NULL;
            t = SSLgetAnnotations(a_12);
            e_0 = t;
            t = b_12;
            t = c_112(t);
            m_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_12, m_0);
            t = genzip_4_0(a_0, b_0, c_0, h_0, t);
            k_0 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, k_0, c_12);
            n_0 = t;
            t = SSLsetAnnotations(n_0, e_0);
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
                ATerm j_2 = NULL,n_2 = NULL,p_2 = NULL,m_1 = NULL;
                t = SSLgetAnnotations(a_12);
                j_2 = t;
                t = c_12;
                t = c_112(t);
                p_2 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_12, p_2);
                t = genzip_4_0(i_0, q_0, y_0, a_1, t);
                n_2 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, b_12, n_2, d_12);
                m_1 = t;
                t = SSLsetAnnotations(m_1, j_2);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  b_12 = ATgetArgument(t, 0);
                  c_12 = ATgetArgument(t, 1);
                  d_12 = ATgetArgument(t, 2);
                  z_11 = ATgetArgument(t, 3);
                  {
                    ATerm p_4 = NULL,y_4 = NULL,z_4 = NULL,n_1 = NULL;
                    t = SSLgetAnnotations(a_12);
                    p_4 = t;
                    t = c_12;
                    t = c_112(t);
                    z_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_12, z_4);
                    t = genzip_4_0(f_1, g_1, h_1, i_1, t);
                    y_4 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, b_12, y_4, d_12, z_11);
                    n_1 = t;
                    t = SSLsetAnnotations(n_1, p_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_12 = ATgetArgument(t, 0);
                      c_12 = ATgetArgument(t, 1);
                      d_12 = ATgetArgument(t, 2);
                      z_11 = ATgetArgument(t, 3);
                      {
                        ATerm q_7 = NULL,v_7 = NULL,w_7 = NULL,o_1 = NULL;
                        t = SSLgetAnnotations(a_12);
                        q_7 = t;
                        t = c_12;
                        t = c_112(t);
                        w_7 = t;
                        t = (ATerm) ATmakeAppl(sym__2, c_12, w_7);
                        t = genzip_4_0(j_1, k_1, l_1, r_1, t);
                        v_7 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_12, v_7, d_12, z_11);
                        o_1 = t;
                        t = SSLsetAnnotations(o_1, q_7);
                      }
                    }
                  else
                    {
                      ATerm q_10 = NULL,b_11 = NULL,c_11 = NULL,p_1 = NULL;
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
                      t = c_112(t);
                      c_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_12, c_11);
                      t = genzip_4_0(s_1, t_1, u_1, v_1, t);
                      b_11 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, b_12, b_11, d_12);
                      p_1 = t;
                      t = SSLsetAnnotations(p_1, q_10);
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
              ATerm k_12 = NULL,l_12 = NULL;
              l_12 = t;
              t = c_112(t);
              k_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_12, k_12);
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
              ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,u_12 = NULL,f_13 = NULL,q_1 = NULL;
              k_14 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  l_14 = ATgetArgument(t, 0);
                  m_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_14);
              u_12 = t;
              t = l_14;
              t = c_112(t);
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
              q_1 = t;
              t = SSLsetAnnotations(q_1, u_12);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm t)
{
  ATerm y_24 = NULL,a_25 = NULL,b_25 = NULL,e_25 = NULL,f_25 = NULL;
  b_25 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
      {
        ATerm v_13 = NULL,y_13 = NULL,z_13 = NULL,c_2 = NULL;
        t = SSLgetAnnotations(b_25);
        v_13 = t;
        t = e_25;
        t = d_112(t);
        y_13 = t;
        t = f_25;
        t = d_112(t);
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
          a_25 = ATgetArgument(t, 2);
          {
            ATerm y_14 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(b_25);
            y_14 = t;
            t = e_25;
            t = f_112(t);
            d_15 = t;
            t = f_25;
            t = f_112(t);
            e_15 = t;
            t = a_25;
            t = d_112(t);
            f_15 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, d_15, e_15, f_15);
            d_2 = t;
            t = SSLsetAnnotations(d_2, y_14);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              e_25 = ATgetArgument(t, 0);
              f_25 = ATgetArgument(t, 1);
              a_25 = ATgetArgument(t, 2);
              y_24 = ATgetArgument(t, 3);
              {
                ATerm q_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,e_2 = NULL;
                t = SSLgetAnnotations(b_25);
                q_15 = t;
                t = e_25;
                t = f_112(t);
                v_15 = t;
                t = f_25;
                t = f_112(t);
                w_15 = t;
                t = a_25;
                t = f_112(t);
                x_15 = t;
                t = y_24;
                t = d_112(t);
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
                  a_25 = ATgetArgument(t, 2);
                  y_24 = ATgetArgument(t, 3);
                  {
                    ATerm k_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,f_2 = NULL;
                    t = SSLgetAnnotations(b_25);
                    k_16 = t;
                    t = e_25;
                    t = f_112(t);
                    p_16 = t;
                    t = f_25;
                    t = f_112(t);
                    q_16 = t;
                    t = a_25;
                    t = f_112(t);
                    r_16 = t;
                    t = y_24;
                    t = d_112(t);
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
                      a_25 = ATgetArgument(t, 2);
                      {
                        ATerm d_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,g_2 = NULL;
                        t = SSLgetAnnotations(b_25);
                        d_17 = t;
                        t = e_25;
                        t = f_112(t);
                        l_17 = t;
                        t = f_25;
                        t = f_112(t);
                        m_17 = t;
                        t = a_25;
                        t = f_112(t);
                        n_17 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, l_17, m_17, n_17);
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
                            ATerm q_18 = NULL,x_18 = NULL,g_19 = NULL,o_2 = NULL;
                            t = SSLgetAnnotations(b_25);
                            q_18 = t;
                            t = e_25;
                            t = f_112(t);
                            x_18 = t;
                            t = f_25;
                            t = d_112(t);
                            g_19 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, x_18, g_19);
                            o_2 = t;
                            t = SSLsetAnnotations(o_2, q_18);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              e_25 = ATgetArgument(t, 0);
                              f_25 = ATgetArgument(t, 1);
                              {
                                ATerm r_19 = NULL,v_19 = NULL,w_19 = NULL,r_2 = NULL;
                                t = SSLgetAnnotations(b_25);
                                r_19 = t;
                                t = e_25;
                                t = f_112(t);
                                v_19 = t;
                                t = f_25;
                                t = d_112(t);
                                w_19 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, v_19, w_19);
                                r_2 = t;
                                t = SSLsetAnnotations(r_2, r_19);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  e_25 = ATgetArgument(t, 0);
                                  f_25 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_20 = NULL,v_20 = NULL,w_20 = NULL,s_2 = NULL;
                                    t = SSLgetAnnotations(b_25);
                                    k_20 = t;
                                    t = e_25;
                                    t = f_112(t);
                                    v_20 = t;
                                    t = f_25;
                                    t = d_112(t);
                                    w_20 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, v_20, w_20);
                                    s_2 = t;
                                    t = SSLsetAnnotations(s_2, k_20);
                                  }
                                }
                              else
                                {
                                  ATerm o_21 = NULL,r_21 = NULL,s_21 = NULL,b_3 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      e_25 = ATgetArgument(t, 0);
                                      f_25 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(b_25);
                                  o_21 = t;
                                  t = e_25;
                                  t = f_112(t);
                                  r_21 = t;
                                  t = f_25;
                                  t = d_112(t);
                                  s_21 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, r_21, s_21);
                                  b_3 = t;
                                  t = SSLsetAnnotations(b_3, o_21);
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
ATerm dynrule_sargs_1_0 (ATerm h_112 (ATerm), ATerm t)
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
                ATerm u_15 = ATgetArgument(t, 0);
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
static ATerm j_5 (ATerm w_23, ATerm v_23, ATerm t)
{
  t = w_23;
  t = map_1_0(i_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,y_28 = NULL,a_29 = NULL,o_3 = NULL;
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
  t = d_92(t);
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, y_28);
  o_3 = t;
  t = SSLsetAnnotations(o_3, s_28);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_29 = NULL,j_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
      i_29 = t;
      if(match_cons(t, sym_Let_2))
        {
          j_29 = ATgetArgument(t, 0);
          o_29 = ATgetArgument(t, 1);
          t = i_29;
          t = j_5(j_29, o_29, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              j_29 = ATgetArgument(t, 0);
              o_29 = ATgetArgument(t, 1);
              p_29 = ATgetArgument(t, 2);
              t = o_29;
              t = map_1_0(l_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  j_29 = ATgetArgument(t, 0);
                  o_29 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, j_29);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_29 = ATgetArgument(t, 0);
                      o_29 = ATgetArgument(t, 1);
                      p_29 = ATgetArgument(t, 2);
                      q_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_29;
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
  ATerm d_30 = NULL;
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_30 = ATgetArgument(t, 0);
          {
            ATerm g_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_17);
      t = d_30;
    }
  else
    {
      t = e_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_30;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
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
static ATerm q_2 (ATerm t)
{
  t = map_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm o_31 = NULL;
  ATerm k_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_31 = ATgetArgument(t, 0);
          {
            ATerm p_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_17);
      t = o_31;
    }
  else
    {
      t = k_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_31;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, k_2, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,e_38 = NULL,f_38 = NULL;
  v_37 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      e_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
      {
        ATerm o_22 = NULL,t_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,t_3 = NULL,s_3 = NULL,r_3 = NULL;
        t = SSLgetAnnotations(v_37);
        o_22 = t;
        t = e_38;
        if(match_cons(t, sym_DynRuleId_1))
          {
            x_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_38);
        w_22 = t;
        t = x_22;
        if(match_cons(t, sym_RDecT_3))
          {
            a_23 = ATgetArgument(t, 0);
            b_23 = ATgetArgument(t, 1);
            c_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_22);
        z_22 = t;
        t = a_23;
        t = j_112(t);
        g_23 = t;
        t = b_23;
        t = k_112(t);
        h_23 = t;
        t = c_23;
        t = l_112(t);
        i_23 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, g_23, h_23, i_23);
        r_3 = t;
        t = SSLsetAnnotations(r_3, z_22);
        j_23 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, j_23);
        s_3 = t;
        t = SSLsetAnnotations(s_3, w_22);
        y_22 = t;
        t = f_38;
        t = m_112(t);
        t_22 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, y_22, t_22);
        t_3 = t;
        t = SSLsetAnnotations(t_3, o_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          e_38 = ATgetArgument(t, 0);
          f_38 = ATgetArgument(t, 1);
          {
            ATerm x_23 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,s_24 = NULL,v_24 = NULL,z_24 = NULL,c_25 = NULL,d_25 = NULL,l_25 = NULL,m_25 = NULL,a_4 = NULL,x_3 = NULL,v_3 = NULL,u_3 = NULL;
            t = SSLgetAnnotations(v_37);
            x_23 = t;
            t = e_38;
            if(match_cons(t, sym_DynRuleId_1))
              {
                m_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_38);
            l_24 = t;
            t = m_24;
            if(match_cons(t, sym_RDecT_3))
              {
                s_24 = ATgetArgument(t, 0);
                v_24 = ATgetArgument(t, 1);
                z_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_24);
            o_24 = t;
            t = s_24;
            t = j_112(t);
            c_25 = t;
            t = v_24;
            t = k_112(t);
            d_25 = t;
            t = z_24;
            t = l_112(t);
            l_25 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, c_25, d_25, l_25);
            u_3 = t;
            t = SSLsetAnnotations(u_3, o_24);
            m_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, m_25);
            v_3 = t;
            t = SSLsetAnnotations(v_3, l_24);
            n_24 = t;
            t = f_38;
            if(match_cons(t, sym_Rule_3))
              {
                d_24 = ATgetArgument(t, 0);
                e_24 = ATgetArgument(t, 1);
                f_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_38);
            c_24 = t;
            t = d_24;
            t = m_112(t);
            g_24 = t;
            t = e_24;
            t = n_112(t);
            h_24 = t;
            t = f_24;
            t = o_112(t);
            j_24 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, g_24, h_24, j_24);
            x_3 = t;
            t = SSLsetAnnotations(x_3, c_24);
            k_24 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, n_24, k_24);
            a_4 = t;
            t = SSLsetAnnotations(a_4, x_23);
          }
        }
      else
        {
          ATerm y_25 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,s_26 = NULL,t_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,j_4 = NULL,i_4 = NULL,f_4 = NULL,b_4 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              e_38 = ATgetArgument(t, 0);
              f_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_37);
          y_25 = t;
          t = e_38;
          if(match_cons(t, sym_DynRuleId_1))
            {
              s_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_38);
          j_26 = t;
          t = s_26;
          if(match_cons(t, sym_RDecT_3))
            {
              x_26 = ATgetArgument(t, 0);
              y_26 = ATgetArgument(t, 1);
              z_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_26);
          w_26 = t;
          t = x_26;
          t = j_112(t);
          b_27 = t;
          t = y_26;
          t = k_112(t);
          c_27 = t;
          t = z_26;
          t = l_112(t);
          d_27 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, b_27, c_27, d_27);
          b_4 = t;
          t = SSLsetAnnotations(b_4, w_26);
          e_27 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, e_27);
          f_4 = t;
          t = SSLsetAnnotations(f_4, j_26);
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
          t = m_112(t);
          f_26 = t;
          t = d_26;
          t = n_112(t);
          g_26 = t;
          t = e_26;
          t = o_112(t);
          h_26 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, f_26, g_26, h_26);
          i_4 = t;
          t = SSLsetAnnotations(i_4, b_26);
          i_26 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, t_26, i_26);
          j_4 = t;
          t = SSLsetAnnotations(j_4, y_25);
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
  ATerm v_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
        {
          v_29 = ATgetFirst((ATermList) s_17);
          a_30 = (ATerm) ATgetNext((ATermList) s_17);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_29, b_30), (ATerm) ATmakeAppl(sym__2, a_30, c_30));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL;
  if(match_cons(t, sym__2))
    {
      f_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_30), f_30);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm i_30 = NULL,t_30 = NULL,y_30 = NULL;
  if(match_cons(t, sym__2))
    {
      i_30 = ATgetArgument(t, 0);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_30;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_30);
      }
    else
      {
        t = u_17;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_17 = ATgetArgument(t, 0);
            t_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_30, t_30);
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
  ATerm h_32 = NULL,m_32 = NULL,n_32 = NULL,u_32 = NULL;
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
            u_32 = (ATerm) ATgetNext((ATermList) b_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_32, n_32), (ATerm) ATmakeAppl(sym__2, m_32, u_32));
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm v_32 = NULL,a_33 = NULL;
  if(match_cons(t, sym__2))
    {
      v_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_33), v_32);
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
static ATerm p_3 (ATerm t)
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
  ATerm j_35 = NULL,p_35 = NULL,q_35 = NULL;
  if(match_cons(t, sym__2))
    {
      j_35 = ATgetArgument(t, 0);
      q_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_35;
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
            p_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_35, p_35);
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
static ATerm z_3 (ATerm t)
{
  ATerm w_48 = NULL,z_48 = NULL,a_49 = NULL,d_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
        {
          w_48 = ATgetFirst((ATermList) r_18);
          z_48 = (ATerm) ATgetNext((ATermList) r_18);
        }
      else
        _fail(t);
      {
        ATerm s_18 = ATgetArgument(t, 1);
        if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
          {
            a_49 = ATgetFirst((ATermList) s_18);
            d_49 = (ATerm) ATgetNext((ATermList) s_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_48, a_49), (ATerm) ATmakeAppl(sym__2, z_48, d_49));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL;
  if(match_cons(t, sym__2))
    {
      f_49 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_49), f_49);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm p_49 = NULL,t_49 = NULL,u_49 = NULL;
  if(match_cons(t, sym__2))
    {
      p_49 = ATgetArgument(t, 0);
      u_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_49;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_49);
      }
    else
      {
        t = t_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            t_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_49, t_49);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm y_111 (ATerm), ATerm t)
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL;
      j_48 = t;
      if(match_cons(t, sym_Scope_2))
        {
          m_48 = ATgetArgument(t, 0);
          n_48 = ATgetArgument(t, 1);
          {
            ATerm n_27 = NULL,s_27 = NULL,v_5 = NULL;
            t = SSLgetAnnotations(j_48);
            n_27 = t;
            t = m_48;
            t = y_111(t);
            s_27 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, s_27, n_48);
            v_5 = t;
            t = SSLsetAnnotations(v_5, n_27);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              m_48 = ATgetArgument(t, 0);
              {
                ATerm v_28 = NULL,k_6 = NULL;
                t = SSLgetAnnotations(j_48);
                v_28 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, m_48);
                k_6 = t;
                t = SSLsetAnnotations(k_6, v_28);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  m_48 = ATgetArgument(t, 0);
                  n_48 = ATgetArgument(t, 1);
                  o_48 = ATgetArgument(t, 2);
                  {
                    ATerm g_29 = NULL,m_29 = NULL,n_29 = NULL,q_6 = NULL;
                    t = SSLgetAnnotations(j_48);
                    g_29 = t;
                    t = o_48;
                    t = y_111(t);
                    n_29 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_48, n_29);
                    t = genzip_4_0(c_3, d_3, e_3, g_3, t);
                    m_29 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, m_48, n_48, m_29);
                    q_6 = t;
                    t = SSLsetAnnotations(q_6, g_29);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_48 = ATgetArgument(t, 0);
                      n_48 = ATgetArgument(t, 1);
                      o_48 = ATgetArgument(t, 2);
                      p_48 = ATgetArgument(t, 3);
                      {
                        ATerm v_31 = NULL,e_32 = NULL,f_32 = NULL,v_6 = NULL;
                        t = SSLgetAnnotations(j_48);
                        v_31 = t;
                        t = o_48;
                        t = y_111(t);
                        f_32 = t;
                        t = (ATerm) ATmakeAppl(sym__2, o_48, f_32);
                        t = genzip_4_0(h_3, i_3, k_3, l_3, t);
                        e_32 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_48, n_48, e_32, p_48);
                        v_6 = t;
                        t = SSLsetAnnotations(v_6, v_31);
                      }
                    }
                  else
                    {
                      ATerm i_34 = NULL,n_34 = NULL,o_34 = NULL,z_6 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          m_48 = ATgetArgument(t, 0);
                          n_48 = ATgetArgument(t, 1);
                          o_48 = ATgetArgument(t, 2);
                          p_48 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(j_48);
                      i_34 = t;
                      t = o_48;
                      t = y_111(t);
                      o_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_48, o_34);
                      t = genzip_4_0(m_3, n_3, p_3, q_3, t);
                      n_34 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, m_48, n_48, n_34, p_48);
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
      t = y_18;
      {
        static ATerm w_3 (ATerm t);
        static ATerm w_3 (ATerm t)
        {
          ATerm s_48 = NULL,v_48 = NULL;
          v_48 = t;
          t = y_111(t);
          s_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_48, s_48);
          t = genzip_4_0(y_3, z_3, c_4, d_4, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, w_3, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm z_111 (ATerm), ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  o_61 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_61 = ATgetArgument(t, 0);
      n_61 = ATgetArgument(t, 1);
      {
        ATerm s_36 = NULL,w_36 = NULL,z_36 = NULL,h_7 = NULL;
        t = SSLgetAnnotations(o_61);
        s_36 = t;
        t = p_61;
        t = b_112(t);
        w_36 = t;
        t = n_61;
        t = z_111(t);
        z_36 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_36, z_36);
        h_7 = t;
        t = SSLsetAnnotations(h_7, s_36);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          p_61 = ATgetArgument(t, 0);
          {
            ATerm p_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,j_7 = NULL,i_7 = NULL;
            t = SSLgetAnnotations(o_61);
            p_37 = t;
            t = p_61;
            if(match_cons(t, sym_Rule_3))
              {
                s_37 = ATgetArgument(t, 0);
                t_37 = ATgetArgument(t, 1);
                u_37 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_61);
            r_37 = t;
            t = s_37;
            t = z_111(t);
            w_37 = t;
            t = t_37;
            t = z_111(t);
            x_37 = t;
            t = u_37;
            t = z_111(t);
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
              p_61 = ATgetArgument(t, 0);
              n_61 = ATgetArgument(t, 1);
              l_61 = ATgetArgument(t, 2);
              {
                ATerm j_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,k_7 = NULL;
                t = SSLgetAnnotations(o_61);
                j_38 = t;
                t = p_61;
                t = b_112(t);
                q_38 = t;
                t = n_61;
                t = b_112(t);
                r_38 = t;
                t = l_61;
                t = b_112(t);
                s_38 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, q_38, r_38, s_38);
                k_7 = t;
                t = SSLsetAnnotations(k_7, j_38);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  p_61 = ATgetArgument(t, 0);
                  n_61 = ATgetArgument(t, 1);
                  l_61 = ATgetArgument(t, 2);
                  m_61 = ATgetArgument(t, 3);
                  {
                    ATerm f_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,l_7 = NULL;
                    t = SSLgetAnnotations(o_61);
                    f_39 = t;
                    t = p_61;
                    t = b_112(t);
                    k_39 = t;
                    t = n_61;
                    t = b_112(t);
                    l_39 = t;
                    t = l_61;
                    t = b_112(t);
                    m_39 = t;
                    t = m_61;
                    t = z_111(t);
                    n_39 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, k_39, l_39, m_39, n_39);
                    l_7 = t;
                    t = SSLsetAnnotations(l_7, f_39);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_61 = ATgetArgument(t, 0);
                      n_61 = ATgetArgument(t, 1);
                      l_61 = ATgetArgument(t, 2);
                      m_61 = ATgetArgument(t, 3);
                      {
                        ATerm z_39 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,x_7 = NULL;
                        t = SSLgetAnnotations(o_61);
                        z_39 = t;
                        t = p_61;
                        t = b_112(t);
                        e_40 = t;
                        t = n_61;
                        t = b_112(t);
                        f_40 = t;
                        t = l_61;
                        t = b_112(t);
                        g_40 = t;
                        t = m_61;
                        t = z_111(t);
                        h_40 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, e_40, f_40, g_40, h_40);
                        x_7 = t;
                        t = SSLsetAnnotations(x_7, z_39);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          p_61 = ATgetArgument(t, 0);
                          n_61 = ATgetArgument(t, 1);
                          {
                            ATerm r_40 = NULL,u_40 = NULL,v_40 = NULL,y_7 = NULL;
                            t = SSLgetAnnotations(o_61);
                            r_40 = t;
                            t = p_61;
                            t = b_112(t);
                            u_40 = t;
                            t = n_61;
                            t = z_111(t);
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
                              p_61 = ATgetArgument(t, 0);
                              n_61 = ATgetArgument(t, 1);
                              {
                                ATerm j_41 = NULL,n_41 = NULL,o_41 = NULL,z_7 = NULL;
                                t = SSLgetAnnotations(o_61);
                                j_41 = t;
                                t = p_61;
                                t = b_112(t);
                                n_41 = t;
                                t = n_61;
                                t = z_111(t);
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
                                  p_61 = ATgetArgument(t, 0);
                                  n_61 = ATgetArgument(t, 1);
                                  {
                                    ATerm f_42 = NULL,j_42 = NULL,k_42 = NULL,a_8 = NULL;
                                    t = SSLgetAnnotations(o_61);
                                    f_42 = t;
                                    t = p_61;
                                    t = b_112(t);
                                    j_42 = t;
                                    t = n_61;
                                    t = z_111(t);
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
                                      p_61 = ATgetArgument(t, 0);
                                      {
                                        ATerm s_42 = NULL,v_42 = NULL,b_8 = NULL;
                                        t = SSLgetAnnotations(o_61);
                                        s_42 = t;
                                        t = p_61;
                                        t = z_111(t);
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
                                          p_61 = ATgetArgument(t, 0);
                                          {
                                            ATerm c_43 = NULL,f_43 = NULL,c_8 = NULL;
                                            t = SSLgetAnnotations(o_61);
                                            c_43 = t;
                                            t = p_61;
                                            t = z_111(t);
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
                                              p_61 = ATgetArgument(t, 0);
                                              {
                                                ATerm m_43 = NULL,v_43 = NULL,d_8 = NULL;
                                                t = SSLgetAnnotations(o_61);
                                                m_43 = t;
                                                t = p_61;
                                                t = z_111(t);
                                                v_43 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, v_43);
                                                d_8 = t;
                                                t = SSLsetAnnotations(d_8, m_43);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  p_61 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm o_44 = NULL,r_44 = NULL,e_8 = NULL;
                                                    t = SSLgetAnnotations(o_61);
                                                    o_44 = t;
                                                    t = p_61;
                                                    t = z_111(t);
                                                    r_44 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, r_44);
                                                    e_8 = t;
                                                    t = SSLsetAnnotations(e_8, o_44);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm v_45 = NULL,x_45 = NULL,h_8 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      p_61 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(o_61);
                                                  v_45 = t;
                                                  t = p_61;
                                                  t = z_111(t);
                                                  x_45 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, x_45);
                                                  h_8 = t;
                                                  t = SSLsetAnnotations(h_8, v_45);
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
ATerm dynrule_targs_1_0 (ATerm i_112 (ATerm), ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL,s_62 = NULL;
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          o_62 = ATgetArgument(t, 0);
          {
            ATerm c_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_19);
      t = o_62;
      if(match_cons(t, sym_DynRuleId_1))
        {
          p_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_62;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm d_19 = ATgetArgument(t, 0);
          ATerm e_19 = ATgetArgument(t, 1);
          s_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_62;
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
                o_62 = ATgetArgument(t, 0);
                {
                  ATerm i_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_19);
            t = o_62;
            if(match_cons(t, sym_DynRuleId_1))
              {
                p_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_62;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_19 = ATgetArgument(t, 0);
                ATerm k_19 = ATgetArgument(t, 1);
                s_62 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = s_62;
          }
        else
          {
            t = f_19;
            if(match_cons(t, sym_AddDynRule_2))
              {
                o_62 = ATgetArgument(t, 0);
                {
                  ATerm l_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = o_62;
            if(match_cons(t, sym_DynRuleId_1))
              {
                p_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_62;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_19 = ATgetArgument(t, 0);
                ATerm n_19 = ATgetArgument(t, 1);
                s_62 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = s_62;
          }
      }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm i_63 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_63 = ATgetArgument(t, 0);
          {
            ATerm q_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_19);
      t = i_63;
    }
  else
    {
      t = o_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_63;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm t_63 = NULL;
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_63 = ATgetArgument(t, 0);
          {
            ATerm u_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_19);
      t = t_63;
    }
  else
    {
      t = s_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_63;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm d_63 = NULL;
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm z_19 = ATgetArgument(t, 0);
          ATerm a_20 = ATgetArgument(t, 1);
          d_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(y_19);
      t = d_63;
      t = map_1_0(e_4, t);
    }
  else
    {
      t = x_19;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm b_20 = ATgetArgument(t, 0);
          ATerm c_20 = ATgetArgument(t, 1);
          d_63 = ATgetArgument(t, 2);
          {
            ATerm d_20 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_63;
      t = map_1_0(g_4, t);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm r_64 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_64);
  return(t);
}
static ATerm k_4 (ATerm t)
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
                  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_64 = ATgetArgument(t, 0);
                      u_64 = ATgetArgument(t, 1);
                      v_64 = ATgetArgument(t, 2);
                      w_64 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_64;
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
  ATerm d_65 = NULL;
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_65 = ATgetArgument(t, 0);
          {
            ATerm p_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_20);
      t = d_65;
    }
  else
    {
      t = n_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_65;
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
  ATerm i_65 = NULL;
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_65 = ATgetArgument(t, 0);
          {
            ATerm s_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_20);
      t = i_65;
    }
  else
    {
      t = q_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_65;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm m_65 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_65);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
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
                  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_65 = ATgetArgument(t, 0);
                      p_65 = ATgetArgument(t, 1);
                      q_65 = ATgetArgument(t, 2);
                      r_65 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_65;
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
  ATerm h_66 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_66 = ATgetArgument(t, 0);
          {
            ATerm f_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_21);
      t = h_66;
    }
  else
    {
      t = d_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_66;
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
  ATerm m_66 = NULL;
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_66 = ATgetArgument(t, 0);
          {
            ATerm i_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_21);
      t = m_66;
    }
  else
    {
      t = g_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_66;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm q_66 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_66);
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
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            {
              ATerm n_21 = t;
              int p_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_66 = ATgetArgument(t, 0);
                      t_66 = ATgetArgument(t, 1);
                      u_66 = ATgetArgument(t, 2);
                      v_66 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_66;
                  t = map_1_0(w_4, t);
                  LocalPopChoice(p_21);
                }
              else
                {
                  t = n_21;
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
  ATerm c_67 = NULL;
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_67 = ATgetArgument(t, 0);
          {
            ATerm w_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_21);
      t = c_67;
    }
  else
    {
      t = u_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_67;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = map_1_0(a_5, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm l_67 = NULL;
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_67 = ATgetArgument(t, 0);
          {
            ATerm z_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_21);
      t = l_67;
    }
  else
    {
      t = x_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_67;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm p_67 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_67);
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
                  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_67 = ATgetArgument(t, 0);
                      s_67 = ATgetArgument(t, 1);
                      t_67 = ATgetArgument(t, 2);
                      u_67 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_67;
                  t = map_1_0(k_5, t);
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
static ATerm k_5 (ATerm t)
{
  ATerm b_68 = NULL;
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_68 = ATgetArgument(t, 0);
          {
            ATerm k_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_22);
      t = b_68;
    }
  else
    {
      t = i_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_68;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = map_1_0(r_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm g_68 = NULL;
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_68 = ATgetArgument(t, 0);
          {
            ATerm n_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_22);
      t = g_68;
    }
  else
    {
      t = l_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_68;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm k_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_68);
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
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            {
              ATerm u_22 = t;
              int v_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_68 = ATgetArgument(t, 0);
                      n_68 = ATgetArgument(t, 1);
                      o_68 = ATgetArgument(t, 2);
                      p_68 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_68;
                  t = map_1_0(z_5, t);
                  LocalPopChoice(v_22);
                }
              else
                {
                  t = u_22;
                  {
                    ATerm d_23 = t;
                    int e_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_23);
                      }
                    else
                      {
                        t = d_23;
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
  ATerm c_69 = NULL;
  ATerm f_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_69 = ATgetArgument(t, 0);
          {
            ATerm l_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_23);
      t = c_69;
    }
  else
    {
      t = f_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_69;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = map_1_0(n_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm m_69 = NULL;
  ATerm m_23 = t;
  int n_23 = stack_ptr;
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
      LocalPopChoice(n_23);
      t = m_69;
    }
  else
    {
      t = m_23;
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
ATerm Bind4_0_0 (ATerm t)
{
  ATerm p_64 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      p_64 = ATgetArgument(t, 0);
      t = p_64;
      t = free_vars_3_0(h_4, k_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          p_64 = ATgetArgument(t, 0);
          t = p_64;
          t = free_vars_3_0(o_4, q_4, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              p_64 = ATgetArgument(t, 0);
              t = p_64;
              t = free_vars_3_0(u_4, v_4, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  p_64 = ATgetArgument(t, 0);
                  t = p_64;
                  t = free_vars_3_0(b_5, d_5, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      p_64 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = p_64;
                  t = free_vars_3_0(t_5, u_5, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm m_5 (ATerm m_133 (ATerm), ATerm w_65, ATerm v_65, ATerm t)
{
  static ATerm e_70 (ATerm t);
  static ATerm e_70 (ATerm t)
  {
    ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
    z_69 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_65;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_70 = ATgetFirst((ATermList) t);
            b_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_69;
              {
                static ATerm u_6 (ATerm t);
                static ATerm u_6 (ATerm t)
                {
                  t = v_65;
                  return(t);
                }
                t = n_5(m_133, u_6, a_70, b_70, t);
              }
              t = e_70(t);
              LocalPopChoice(q_23);
            }
          else
            {
              t = p_23;
              {
                ATerm c_47 = NULL,p_47 = NULL,b_9 = NULL;
                t = SSLgetAnnotations(z_69);
                c_47 = t;
                t = b_70;
                t = e_70(t);
                p_47 = t;
                t = (ATerm) ATinsert(CheckATermList(p_47), a_70);
                b_9 = t;
                t = SSLsetAnnotations(b_9, c_47);
              }
            }
        }
      }
    return(t);
  }
  t = w_65;
  t = e_70(t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t_136 (ATerm), ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL;
  h_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_70;
      t = r_136(t);
    }
  else
    {
      ATerm n_70 = NULL,o_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_70 = ATgetFirst((ATermList) t);
          j_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_70;
      t = t_136(t);
      n_70 = t;
      t = j_70;
      t = foldr_3_0(r_136, s_136, t_136, t);
      o_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_70, o_70);
      t = s_136(t);
    }
  return(t);
}
static ATerm n_5 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm a_66, ATerm z_65, ATerm t)
{
  t = q_133(t);
  {
    static ATerm w_6 (ATerm t);
    static ATerm w_6 (ATerm t)
    {
      ATerm r_70 = NULL;
      r_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_66, r_70);
      t = p_133(t);
      return(t);
    }
    t = fetch_1_0(w_6, t);
  }
  t = z_65;
  return(t);
}
static ATerm o_5 (ATerm h_133 (ATerm), ATerm u_65, ATerm t_65, ATerm t)
{
  static ATerm h_71 (ATerm t);
  static ATerm h_71 (ATerm t)
  {
    ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL;
    c_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_71;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_71 = ATgetFirst((ATermList) t);
            e_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_23 = t;
          int s_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_71;
              {
                static ATerm x_6 (ATerm t);
                static ATerm x_6 (ATerm t)
                {
                  t = t_65;
                  return(t);
                }
                t = n_5(h_133, x_6, d_71, e_71, t);
              }
              t = h_71(t);
              LocalPopChoice(s_23);
            }
          else
            {
              t = r_23;
              {
                ATerm b_48 = NULL,h_48 = NULL,d_9 = NULL;
                t = SSLgetAnnotations(c_71);
                b_48 = t;
                t = e_71;
                t = h_71(t);
                h_48 = t;
                t = (ATerm) ATinsert(CheckATermList(h_48), d_71);
                d_9 = t;
                t = SSLsetAnnotations(d_9, b_48);
              }
            }
        }
      }
    return(t);
  }
  t = u_65;
  t = h_71(t);
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
        ATerm u_23 = ATgetArgument(t, 1);
        if(((ATgetType(u_23) != AT_LIST) || !(ATisEmpty(u_23))))
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
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_23 = ATgetArgument(t, 0);
      if(((ATgetType(y_23) == AT_LIST) && !(ATisEmpty(y_23))))
        {
          p_71 = ATgetFirst((ATermList) y_23);
          q_71 = (ATerm) ATgetNext((ATermList) y_23);
        }
      else
        _fail(t);
      {
        ATerm z_23 = ATgetArgument(t, 1);
        if(((ATgetType(z_23) == AT_LIST) && !(ATisEmpty(z_23))))
          {
            r_71 = ATgetFirst((ATermList) z_23);
            s_71 = (ATerm) ATgetNext((ATermList) z_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_71, r_71), (ATerm) ATmakeAppl(sym__2, q_71, s_71));
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL;
  if(match_cons(t, sym__2))
    {
      t_71 = ATgetArgument(t, 0);
      u_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_71), t_71);
  return(t);
}
static ATerm q_5 (ATerm m_819, ATerm r_819, ATerm m_82, ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL;
  t = SSL_explode_term(r_819);
  if(match_cons(t, sym__2))
    {
      k_71 = ATgetArgument(t, 0);
      m_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_819);
  if(match_cons(t, sym__2))
    {
      if((k_71 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_71, m_71);
  t = genzip_4_0(y_6, a_7, b_7, _id, t);
  n_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_71, m_82);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_120 (ATerm), ATerm b_120 (ATerm), ATerm t)
{
  static ATerm w_71 (ATerm t);
  static ATerm w_71 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_120(t);
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = b_120(t);
        t = w_71(t);
      }
    return(t);
  }
  t = w_71(t);
  return(t);
}
ATerm for_3_0 (ATerm d_120 (ATerm), ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm t)
{
  t = d_120(t);
  t = while_not_2_0(e_120, f_120, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm d_72 = NULL;
  d_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_72);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,f_9 = NULL;
  h_72 = t;
  if(match_cons(t, sym__2))
    {
      f_72 = ATgetArgument(t, 0);
      g_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_72);
  e_72 = t;
  t = g_72;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_72, g_72);
  f_9 = t;
  t = SSLsetAnnotations(f_9, e_72);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL;
  a_73 = t;
  if(match_cons(t, sym__2))
    {
      b_73 = ATgetArgument(t, 0);
      c_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_73 = ATgetFirst((ATermList) t);
      e_73 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_73(b_73, c_73, a_73, t);
            LocalPopChoice(p_24);
          }
        else
          {
            t = i_24;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_73), d_73), e_73);
          }
      }
    }
  else
    {
      t = o_73(b_73, c_73, a_73, t);
    }
  return(t);
}
static ATerm o_73 (ATerm i_72, ATerm j_72, ATerm k_72, ATerm t)
{
  ATerm l_72 = NULL,o_72 = NULL,g_9 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL;
  t = SSLgetAnnotations(k_72);
  l_72 = t;
  t = j_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_72 = ATgetFirst((ATermList) t);
      u_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_72;
  if(match_cons(t, sym__2))
    {
      s_72 = ATgetArgument(t, 0);
      t_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_72;
        if((s_72 != t))
          {
            _fail(t);
          }
        t = u_72;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = j_72;
        t = q_5(s_72, t_72, u_72, t);
      }
  }
  o_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_72, o_72);
  g_9 = t;
  t = SSLsetAnnotations(g_9, l_72);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm n_73 = NULL;
  if(match_cons(t, sym__2))
    {
      n_73 = ATgetArgument(t, 0);
      if((n_73 != ATgetArgument(t, 1)))
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
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_7, d_7, e_7, t);
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
        i_73 = t;
        if(match_cons(t, sym__2))
          {
            j_73 = ATgetArgument(t, 0);
            k_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_73;
        t = o_5(f_7, j_73, k_73, t);
      }
    }
  return(t);
}
static ATerm m_7 (ATerm t)
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
  ATerm e_49 = NULL,h_49 = NULL;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      h_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(p_7, e_49, h_49, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm j_49 = NULL;
  if(match_cons(t, sym__2))
    {
      j_49 = ATgetArgument(t, 0);
      if((j_49 != ATgetArgument(t, 1)))
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
  ATerm s_49 = NULL,w_49 = NULL;
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      w_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(t_7, s_49, w_49, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm x_49 = NULL;
  if(match_cons(t, sym__2))
    {
      x_49 = ATgetArgument(t, 0);
      if((x_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm c_74 (ATerm t);
  static ATerm c_74 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_140(t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_73 = NULL,r_73 = NULL,u_48 = NULL,x_48 = NULL;
              q_73 = t;
              t = m_140(t);
              r_73 = t;
              t = q_73;
              {
                static ATerm g_7 (ATerm t);
                static ATerm g_7 (ATerm t)
                {
                  ATerm t_73 = NULL;
                  t = c_74(t);
                  t_73 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_73, r_73);
                  t = diff_0_0(t);
                  return(t);
                }
                t = n_140(g_7, c_74, m_7, t);
              }
              x_48 = t;
              t = SSL_explode_term(x_48);
              if(match_cons(t, sym__2))
                {
                  ATerm i_25 = ATgetArgument(t, 0);
                  u_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_48;
              t = foldr_3_0(n_7, o_7, _id, t);
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              {
                ATerm l_49 = NULL,m_49 = NULL;
                m_49 = t;
                t = SSL_explode_term(m_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_25 = ATgetArgument(t, 0);
                    l_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_49;
                t = foldr_3_0(r_7, s_7, c_74, t);
              }
            }
        }
      }
    return(t);
  }
  t = c_74(t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm p_74 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_74);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_25);
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
                  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_74 = ATgetArgument(t, 0);
                      s_74 = ATgetArgument(t, 1);
                      t_74 = ATgetArgument(t, 2);
                      u_74 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_74;
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
  ATerm b_75 = NULL;
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_75 = ATgetArgument(t, 0);
          {
            ATerm w_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_25);
      t = b_75;
    }
  else
    {
      t = u_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_75;
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
  ATerm g_75 = NULL;
  ATerm x_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_75 = ATgetArgument(t, 0);
          {
            ATerm a_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_25);
      t = g_75;
    }
  else
    {
      t = x_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_75;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm i_74 = NULL,m_74 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      m_74 = ATgetArgument(t, 0);
      t = m_74;
      if(match_cons(t, sym_Rule_3))
        {
          i_74 = ATgetArgument(t, 0);
          {
            ATerm k_26 = ATgetArgument(t, 1);
          }
          {
            ATerm n_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = i_74;
      t = free_vars_3_0(u_7, f_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          m_74 = ATgetArgument(t, 0);
          {
            ATerm p_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_74;
    }
  return(t);
}
ATerm Var_1_0 (ATerm z_91 (ATerm), ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,l_9 = NULL;
  p_75 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_75);
  m_75 = t;
  t = n_75;
  t = z_91(t);
  o_75 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_75);
  l_9 = t;
  t = SSLsetAnnotations(l_9, m_75);
  return(t);
}
static ATerm s_5 (ATerm t_138 (ATerm), ATerm u_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_69, ATerm e_69, ATerm d_69, ATerm t)
{
  static ATerm l_8 (ATerm t);
  static ATerm m_8 (ATerm t);
  static ATerm l_8 (ATerm t)
  {
    ATerm r_75 = NULL;
    r_75 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_75, d_69);
    t = t_138(t);
    return(t);
  }
  static ATerm m_8 (ATerm t)
  {
    ATerm s_75 = NULL;
    s_75 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_75, e_69);
    t = t_138(t);
    return(t);
  }
  t = f_69;
  t = u_138(l_8, m_8, _id, t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_131 (ATerm), ATerm t)
{
  static ATerm u_76 (ATerm t);
  static ATerm u_76 (ATerm t)
  {
    ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL;
    t_76 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_76 = ATgetFirst((ATermList) t);
        s_76 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_50 = NULL,h_50 = NULL,n_9 = NULL;
          t = SSLgetAnnotations(t_76);
          d_50 = t;
          t = s_76;
          t = u_76(t);
          h_50 = t;
          t = (ATerm) ATinsert(CheckATermList(h_50), r_76);
          n_9 = t;
          t = SSLsetAnnotations(n_9, d_50);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_76;
        t = j_131(t);
      }
    return(t);
  }
  t = u_76(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_75 = NULL,b_76 = NULL,c_76 = NULL;
  v_75 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_75;
    }
  else
    {
      static ATerm n_8 (ATerm t);
      static ATerm n_8 (ATerm t)
      {
        t = not_null(c_76);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_76 = ATgetFirst((ATermList) t);
          if(((c_76 != NULL) && (c_76 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_76;
      t = at_end_1_0(n_8, t);
    }
  return(t);
}
static ATerm g_77 (ATerm y_76, ATerm t)
{
  ATerm z_76 = NULL;
  t = SSL_explode_term(y_76);
  if(match_cons(t, sym__2))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_76;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  d_77 = t;
  if(match_cons(t, sym__2))
    {
      b_77 = ATgetArgument(t, 0);
      c_77 = ATgetArgument(t, 1);
      {
        ATerm r_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_8 (ATerm t);
            static ATerm o_8 (ATerm t)
            {
              t = c_77;
              return(t);
            }
            t = b_77;
            t = at_end_1_0(o_8, t);
            LocalPopChoice(u_26);
          }
        else
          {
            t = r_26;
            t = g_77(d_77, t);
          }
      }
    }
  else
    {
      t = g_77(d_77, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm t)
{
  static ATerm n_77 (ATerm t);
  static ATerm n_77 (ATerm t)
  {
    ATerm v_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_118(t);
        LocalPopChoice(a_27);
      }
    else
      {
        t = v_26;
        {
          ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,s_9 = NULL;
          t = b_118(t);
          m_77 = t;
          if(match_cons(t, sym__2))
            {
              i_77 = ATgetArgument(t, 0);
              j_77 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_77);
          h_77 = t;
          t = i_77;
          t = d_118(t);
          k_77 = t;
          t = j_77;
          t = n_77(t);
          l_77 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_77, l_77);
          s_9 = t;
          t = SSLsetAnnotations(s_9, h_77);
          t = c_118(t);
        }
      }
    return(t);
  }
  t = n_77(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm q_8 (ATerm t)
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
  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
        {
          v_77 = ATgetFirst((ATermList) h_27);
          w_77 = (ATerm) ATgetNext((ATermList) h_27);
        }
      else
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
          {
            x_77 = ATgetFirst((ATermList) i_27);
            y_77 = (ATerm) ATgetNext((ATermList) i_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_77, x_77), (ATerm) ATmakeAppl(sym__2, w_77, y_77));
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm z_77 = NULL,a_78 = NULL;
  if(match_cons(t, sym__2))
    {
      z_77 = ATgetArgument(t, 0);
      a_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_78), z_77);
  return(t);
}
static ATerm w_5 (ATerm n_138 (ATerm), ATerm o_138 (ATerm (ATerm), ATerm), ATerm x_68, ATerm a_69, ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,u_77 = NULL;
  t = x_68;
  t = n_138(t);
  p_77 = t;
  t = map_1_0(new_0_0, t);
  q_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_77, q_77);
  t = genzip_4_0(q_8, r_8, s_8, _id, t);
  u_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_77, a_69);
  t = conc_0_0(t);
  r_77 = t;
  t = x_68;
  {
    static ATerm t_8 (ATerm t);
    static ATerm t_8 (ATerm t)
    {
      t = q_77;
      return(t);
    }
    t = o_138(t_8, t);
  }
  s_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_77, a_69, r_77);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL;
  h_78 = t;
  if(match_cons(t, sym__2))
    {
      i_78 = ATgetArgument(t, 0);
      j_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_78;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_78 = ATgetFirst((ATermList) t);
      l_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_78;
  if(match_cons(t, sym__2))
    {
      f_78 = ATgetArgument(t, 0);
      g_78 = ATgetArgument(t, 1);
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_78;
            if((i_78 != t))
              {
                _fail(t);
              }
            t = g_78;
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            t = (ATerm) ATmakeAppl(sym__2, i_78, l_78);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, i_78, l_78);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm b_139 (ATerm), ATerm t)
{
  static ATerm h_79 (ATerm t);
  static ATerm h_79 (ATerm t)
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_139(t);
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        {
          ATerm e_79 = NULL,f_79 = NULL,g_79 = NULL;
          static ATerm u_8 (ATerm t);
          static ATerm u_8 (ATerm t)
          {
            ATerm x_50 = NULL;
            x_50 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_50, not_null(g_79));
            t = h_79(t);
            return(t);
          }
          e_79 = t;
          if(match_cons(t, sym__2))
            {
              f_79 = ATgetArgument(t, 0);
              if(((g_79 != NULL) && (g_79 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                g_79 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_79;
          t = SRTS_all(u_8, t);
        }
      }
    return(t);
  }
  t = h_79(t);
  return(t);
}
ATerm rename_4_0 (ATerm i_138 (ATerm (ATerm), ATerm), ATerm j_138 (ATerm), ATerm k_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_138 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm l_79 = NULL;
  static ATerm a_80 (ATerm t);
  static ATerm a_80 (ATerm t)
  {
    static ATerm z_8 (ATerm t);
    static ATerm z_8 (ATerm t)
    {
      ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL;
      u_79 = t;
      if(match_cons(t, sym__2))
        {
          v_79 = ATgetArgument(t, 0);
          w_79 = ATgetArgument(t, 1);
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
              ATerm z_79 = NULL;
              z_79 = t;
              t = (ATerm) ATmakeAppl(sym__2, z_79, w_79);
              t = lookup_0_0(t);
              return(t);
            }
            t = v_79;
            t = i_138(a_9, t);
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            {
              ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL;
              t = u_79;
              t = w_5(j_138, l_138, v_79, w_79, t);
              if(match_cons(t, sym__3))
                {
                  f_51 = ATgetArgument(t, 0);
                  g_51 = ATgetArgument(t, 1);
                  h_51 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = s_5(a_80, k_138, f_51, g_51, h_51, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(z_8, t);
    return(t);
  }
  l_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_79, (ATerm) ATempty);
  t = a_80(t);
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
            ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                g_80 = ATgetArgument(t, 0);
                h_80 = ATgetArgument(t, 1);
                i_80 = ATgetArgument(t, 2);
                j_80 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = i_80;
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
  ATerm q_80 = NULL;
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_80 = ATgetArgument(t, 0);
          {
            ATerm b_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_28);
      t = q_80;
    }
  else
    {
      t = z_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_80;
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = map_1_0(j_9, t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm v_80 = NULL;
  ATerm c_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_80 = ATgetArgument(t, 0);
          {
            ATerm f_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_28);
      t = v_80;
    }
  else
    {
      t = c_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_80;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, c_9, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm y_80 = NULL;
  t = SSL_fputc(i_32, j_32);
  y_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_80);
  return(t);
}
static ATerm c_6 (ATerm o_30, ATerm p_30, ATerm t)
{
  ATerm z_80 = NULL;
  t = SSL_write_term_to_stream_text(o_30, p_30);
  z_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_80);
  return(t);
}
static ATerm e_6 (ATerm y_120 (ATerm), ATerm f_233, ATerm u_30, ATerm t)
{
  ATerm a_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_233, term_g_28);
  t = i_6(t);
  a_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_81, u_30);
  t = y_120(t);
  t = fclose_0_0(t);
  t = u_30;
  return(t);
}
static ATerm d_6 (ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm b_81 = NULL;
  t = SSL_write_term_to_stream_baf(k_30, l_30);
  b_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_81);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      if(match_cons(h_28, sym_Stream_1))
        {
          i_81 = ATgetArgument(h_28, 0);
        }
      else
        _fail(t);
      j_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(i_81, j_81, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if(match_cons(j_28, sym_Stream_1))
        {
          n_81 = ATgetArgument(j_28, 0);
        }
      else
        _fail(t);
      o_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(n_81, o_81, t);
  k_81 = t;
  t = term_k_28;
  l_81 = t;
  t = k_81;
  if(match_cons(t, sym_Stream_1))
    {
      m_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_28, k_81);
  t = b_6(l_81, m_81, t);
  return(t);
}
ATerm output_1_0 (ATerm w_143 (ATerm), ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL;
  t = w_143(t);
  d_81 = t;
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_81 = NULL,f_81 = NULL;
        t = term_n_28;
        e_81 = t;
        t = term_o_28;
        f_81 = t;
        t = term_p_28;
        t = o_6(e_81, f_81, t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = term_q_28;
      }
  }
  c_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_81, d_81);
  {
    ATerm r_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_81 = NULL,h_81 = NULL;
        t = term_n_28;
        g_81 = t;
        t = term_w_28;
        h_81 = t;
        t = term_x_28;
        t = o_6(g_81, h_81, t);
        t = (ATerm) ATmakeAppl(sym__2, c_81, d_81);
        LocalPopChoice(u_28);
        if(match_cons(t, sym__2))
          {
            ATerm z_28 = ATgetArgument(t, 0);
            ATerm b_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(k_9, c_81, d_81, t);
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
        t = e_6(m_9, c_81, d_81, t);
      }
  }
  return(t);
}
static ATerm c_82 (ATerm w_81, ATerm t)
{
  t = SSL_fclose(w_81);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_81 = NULL,a_82 = NULL;
  a_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_81 = ATgetArgument(t, 0);
      {
        ATerm e_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_81);
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
            t = c_82(a_82, t);
          }
      }
    }
  else
    {
      t = c_82(a_82, t);
    }
  return(t);
}
static ATerm f_6 (ATerm q_30, ATerm t)
{
  t = SSL_read_term_from_stream(q_30);
  return(t);
}
static ATerm g_6 (ATerm h_75, ATerm i_75, ATerm t)
{
  t = SSL_strcat(h_75, i_75);
  return(t);
}
static ATerm h_6 (ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm d_82 = NULL;
  t = SSL_fopen(k_32, l_32);
  d_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_82 = NULL;
  t = SSL_stdin_stream();
  e_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_82 = NULL;
  t = SSL_stdout_stream();
  f_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_82);
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
static ATerm s_83 (ATerm r_82, ATerm t)
{
  ATerm s_82 = NULL;
  t = SSL_explode_term(r_82);
  if(match_cons(t, sym__2))
    {
      ATerm h_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_29 = ATgetArgument(t, 1);
        if(((ATgetType(k_29) == AT_LIST) && !(ATisEmpty(k_29))))
          {
            s_82 = ATgetFirst((ATermList) k_29);
            {
              ATerm l_29 = (ATerm) ATgetNext((ATermList) k_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_83 (ATerm v_82, ATerm w_82, ATerm x_82, ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL,d_83 = NULL,y_9 = NULL;
  t = SSLgetAnnotations(x_82);
  a_83 = t;
  t = v_82;
  if(match_cons(t, sym_Path_1))
    {
      d_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_83, w_82);
  y_9 = t;
  t = SSLsetAnnotations(y_9, a_83);
  if(match_cons(t, sym__2))
    {
      y_82 = ATgetArgument(t, 0);
      z_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(y_82, z_82, t);
  return(t);
}
static ATerm u_83 (ATerm f_83, ATerm g_83, ATerm h_83, ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL,n_83 = NULL,z_9 = NULL;
  t = SSLgetAnnotations(h_83);
  k_83 = t;
  t = SSL_is_string(f_83);
  n_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_83, g_83);
  z_9 = t;
  t = SSLsetAnnotations(z_9, k_83);
  if(match_cons(t, sym__2))
    {
      i_83 = ATgetArgument(t, 0);
      j_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(i_83, j_83, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL;
  p_83 = t;
  if(match_cons(t, sym__2))
    {
      q_83 = ATgetArgument(t, 0);
      r_83 = ATgetArgument(t, 1);
      {
        ATerm r_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_83(p_83, t);
            LocalPopChoice(s_29);
          }
        else
          {
            t = r_29;
            {
              ATerm t_29 = t;
              int u_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_83(q_83, r_83, p_83, t);
                  LocalPopChoice(u_29);
                }
              else
                {
                  t = t_29;
                  t = u_83(q_83, r_83, p_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_83(p_83, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL,d_84 = NULL;
  d_84 = t;
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_84, term_y_29);
        t = i_6(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        {
          ATerm v_51 = NULL,w_51 = NULL;
          t = term_z_29;
          w_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_29, d_84);
          t = g_6(w_51, d_84, t);
          v_51 = t;
          t = SSL_perror(v_51);
          _fail(t);
        }
      }
  }
  x_83 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(y_83, t);
  w_83 = t;
  t = x_83;
  t = fclose_0_0(t);
  t = w_83;
  return(t);
}
ATerm input_1_0 (ATerm x_143 (ATerm), ATerm t)
{
  ATerm e_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_84 = NULL,h_84 = NULL;
      t = term_n_28;
      g_84 = t;
      t = term_j_30;
      h_84 = t;
      t = term_m_30;
      t = o_6(g_84, h_84, t);
      LocalPopChoice(h_30);
    }
  else
    {
      t = e_30;
      t = term_n_30;
    }
  t = ReadFromFile_0_0(t);
  t = x_143(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm i_84 = NULL,j_84 = NULL;
  t = term_n_28;
  i_84 = t;
  t = term_r_30;
  j_84 = t;
  t = term_s_30;
  t = o_6(i_84, j_84, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL;
  l_84 = t;
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_84;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_30 = ATgetFirst((ATermList) t);
                ATerm z_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_84;
          }
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        t = (ATerm) ATinsert(ATempty, l_84);
      }
  }
  m_84 = t;
  t = term_q_28;
  n_84 = t;
  t = SSL_printnl(n_84, m_84);
  t = l_84;
  return(t);
}
ATerm map_1_0 (ATerm u_130 (ATerm), ATerm t)
{
  static ATerm f_85 (ATerm t);
  static ATerm f_85 (ATerm t)
  {
    ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL;
    c_85 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_85;
      }
    else
      {
        ATerm b_52 = NULL,g_52 = NULL,h_52 = NULL,j_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_85 = ATgetFirst((ATermList) t);
            e_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_85);
        b_52 = t;
        t = d_85;
        t = u_130(t);
        g_52 = t;
        t = e_85;
        t = f_85(t);
        h_52 = t;
        t = (ATerm) ATinsert(CheckATermList(h_52), g_52);
        j_10 = t;
        t = SSLsetAnnotations(j_10, b_52);
      }
    return(t);
  }
  t = f_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_85 = ATgetFirst((ATermList) t);
      j_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_85 = NULL,o_85 = NULL;
        static ATerm o_9 (ATerm t);
        static ATerm o_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_85)), not_null(o_85));
          return(t);
        }
        t = j_85;
        t = r_0(t);
        if(((n_85 != NULL) && (n_85 != t)))
          _fail(t);
        else
          n_85 = t;
        t = i_85;
        t = p_0(t);
        if(((o_85 != NULL) && (o_85 != t)))
          _fail(t);
        else
          o_85 = t;
        t = j_85;
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
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL,l_10 = NULL;
  y_85 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_85);
  w_85 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_85);
  l_10 = t;
  t = SSLsetAnnotations(l_10, w_85);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm c_86 = NULL;
  c_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_86), term_b_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm v_145 (ATerm), ATerm w_145 (ATerm), ATerm t)
{
  ATerm s_85 = NULL,t_85 = NULL;
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_85 = NULL,v_85 = NULL;
      t = term_n_28;
      u_85 = t;
      t = term_r_30;
      v_85 = t;
      t = term_s_30;
      t = o_6(u_85, v_85, t);
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      t = fetch_1_0(p_9, t);
    }
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_145(t);
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
  s_85 = t;
  t = term_j_31;
  t_85 = t;
  t = term_k_31;
  t = o_6(s_85, t_85, t);
  t = reverse_acc_2_0(_id, t_9, t);
  t = map_1_0(u_9, t);
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_86 = NULL;
        t = w_145(t);
        d_86 = t;
        t = (ATerm) ATinsert(CheckATermList(d_86), term_n_31);
        t = echo_0_0(t);
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
      }
  }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL,n_10 = NULL;
  l_86 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_86);
  j_86 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_86);
  n_10 = t;
  t = SSLsetAnnotations(n_10, j_86);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_86 = NULL;
  g_86 = t;
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_86 = NULL,i_86 = NULL;
        t = term_n_28;
        h_86 = t;
        t = term_r_30;
        i_86 = t;
        t = term_s_30;
        t = o_6(h_86, i_86, t);
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = fetch_1_0(v_9, t);
      }
  }
  t = g_86;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm n_86 = NULL;
  n_86 = t;
  if(match_string(t, "-k"))
    {
      t = n_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_86;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL;
  o_86 = t;
  t = SSL_string_to_int(o_86);
  p_86 = t;
  t = term_r_31;
  q_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_31, p_86);
  t = r_6(q_86, p_86, t);
  t = o_86;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_9, x_9, a_10, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm s_86 = NULL;
  s_86 = t;
  if(match_string(t, "-S"))
    {
      t = s_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_86;
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL;
  t = term_t_31;
  t_86 = t;
  t = term_u_31;
  u_86 = t;
  t = term_w_31;
  t = r_6(t_86, u_86, t);
  t = term_x_31;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_y_31;
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
  ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL;
  v_86 = t;
  t = SSL_string_to_int(v_86);
  w_86 = t;
  t = term_t_31;
  x_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_31, w_86);
  t = r_6(x_86, w_86, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_86);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_z_31;
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
  ATerm y_86 = NULL,z_86 = NULL;
  t = term_a_32;
  y_86 = t;
  t = term_a_31;
  z_86 = t;
  t = term_b_32;
  t = r_6(y_86, z_86, t);
  t = term_c_32;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_10, c_10, d_10, t);
      LocalPopChoice(o_32);
    }
  else
    {
      t = g_32;
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_10, f_10, g_10, t);
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            t = Option_3_0(h_10, i_10, k_10, t);
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm e_36, ATerm f_36, ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL;
  t = term_n_28;
  a_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, e_36, f_36);
  t = lookup_table_0_1(a_87, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(e_36, f_36, b_87, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, e_36, f_36);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL;
      t = term_a_31;
      t = g_0(t);
      h_87 = t;
      t = term_i_31;
      i_87 = t;
      t = term_j_31;
      j_87 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, h_87);
      t = p_6(i_87, j_87, h_87, t);
      _fail(t);
    }
  else
    {
      ATerm m_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_87 = ATgetFirst((ATermList) t);
          g_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_87;
      t = d_0(t);
      t = term_a_31;
      t = f_0(t);
      m_87 = t;
      t = (ATerm) ATinsert(CheckATermList(g_87), m_87);
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm o_87 = NULL;
  o_87 = t;
  if(match_string(t, "-o"))
    {
      t = o_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_87;
    }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm p_87 = NULL,q_87 = NULL;
  p_87 = t;
  t = term_o_28;
  q_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_28, p_87);
  t = r_6(q_87, p_87, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_87);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_10, o_10, p_10, t);
  return(t);
}
static ATerm p_6 (ATerm v_41, ATerm w_41, ATerm u_41, ATerm t)
{
  ATerm s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL;
  s_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_41, w_41);
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_32 = ATgetArgument(t, 0);
            ATerm x_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_41, w_41);
        t = o_6(v_41, w_41, t);
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        t = (ATerm) ATempty;
      }
  }
  t_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_41, w_41, (ATerm) ATinsert(CheckATermList(t_87), u_41));
  t = lookup_table_0_1(v_41, t);
  w_87 = t;
  t = (ATerm) ATinsert(CheckATermList(t_87), u_41);
  u_87 = t;
  t = w_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(w_41, u_87, v_87, t);
  t = s_87;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL;
      t = term_a_31;
      t = o_0(t);
      h_88 = t;
      t = term_i_31;
      i_88 = t;
      t = term_j_31;
      j_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, h_88);
      t = p_6(i_88, j_88, h_88, t);
      _fail(t);
    }
  else
    {
      ATerm n_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_88 = ATgetFirst((ATermList) t);
          e_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_88;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_88 = ATgetFirst((ATermList) t);
          g_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_88;
      t = j_0(t);
      t = f_88;
      t = l_0(t);
      n_88 = t;
      t = (ATerm) ATinsert(CheckATermList(g_88), n_88);
    }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm p_88 = NULL;
  p_88 = t;
  if(match_string(t, "-i"))
    {
      t = p_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_88;
    }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm q_88 = NULL,t_88 = NULL;
  q_88 = t;
  t = term_j_30;
  t_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_30, q_88);
  t = r_6(t_88, q_88, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_88);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_10, u_10, w_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_31;
  t = whoami_0_0(t);
  u_88 = t;
  t = term_z_32;
  w_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_33), u_88);
  x_88 = t;
  t = SSL_printnl(w_88, x_88);
  t = term_d_33;
  v_88 = t;
  t = SSL_exit(v_88);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL;
  t = term_n_28;
  y_88 = t;
  t = term_r_30;
  z_88 = t;
  t = term_s_30;
  t = o_6(y_88, z_88, t);
  return(t);
}
static ATerm j_6 (ATerm d_39, ATerm e_39, ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_39, e_39);
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      t = SSL_addr(d_39, e_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_136 (ATerm), ATerm q_136 (ATerm), ATerm t)
{
  ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL;
  b_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_89;
      t = p_136(t);
    }
  else
    {
      ATerm g_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_89 = ATgetFirst((ATermList) t);
          d_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_89;
      t = foldr_2_0(p_136, q_136, t);
      g_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_89, g_89);
      t = q_136(t);
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
  t = term_u_31;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL;
  if(match_cons(t, sym__2))
    {
      d_53 = ATgetArgument(t, 0);
      e_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(d_53, e_53, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_89 = NULL,u_52 = NULL,x_52 = NULL;
  t = times_0_0(t);
  x_52 = t;
  t = SSL_explode_term(x_52);
  if(match_cons(t, sym__2))
    {
      ATerm i_33 = ATgetArgument(t, 0);
      u_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_52;
  t = foldr_2_0(x_10, y_10, t);
  j_89 = t;
  t = SSL_TicksToSeconds(j_89);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL;
  u_89 = t;
  if(match_cons(t, sym__2))
    {
      v_89 = ATgetArgument(t, 0);
      w_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_89;
        if((v_89 != t))
          {
            _fail(t);
          }
        t = u_89;
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = (ATerm) ATmakeAppl(sym__2, v_89, w_89);
        {
          ATerm l_33 = t;
          int m_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_89, w_89);
              LocalPopChoice(m_33);
            }
          else
            {
              t = l_33;
              t = SSL_gtr(v_89, w_89);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_89, w_89);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_122 (ATerm), ATerm t)
{
  ATerm a_90 = NULL;
  a_90 = t;
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL;
        t = term_n_28;
        d_90 = t;
        t = term_t_31;
        e_90 = t;
        t = term_p_33;
        t = o_6(d_90, e_90, t);
        c_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_90, term_d_33);
        t = geq_0_0(t);
        t = a_90;
        t = p_122(t);
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        t = a_90;
      }
  }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm g_90 = NULL,h_90 = NULL,j_90 = NULL,k_90 = NULL;
  t = run_time_0_0(t);
  g_90 = t;
  t = term_a_31;
  t = whoami_0_0(t);
  h_90 = t;
  t = term_z_32;
  j_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_33), g_90), term_q_33), h_90);
  k_90 = t;
  t = SSL_printnl(j_90, k_90);
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_33), g_90), term_q_33), h_90));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_90 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_31;
  l_90 = t;
  t = SSL_exit(l_90);
  return(t);
}
static ATerm s_6 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm m_90 = NULL;
  t = SSL_hashtable_put(m_46, k_46, l_46);
  m_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_90);
  return(t);
}
ATerm lookup_table_0_1 (ATerm h_43, ATerm t)
{
  ATerm v_90 = NULL;
  t = table_hashtable_0_0(t);
  v_90 = t;
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_53 = NULL;
        t = v_90;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_6(h_43, y_53, t);
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        {
          ATerm d_54 = NULL;
          t = h_43;
          t = table_create_0_0(t);
          t = v_90;
          if(match_cons(t, sym_Hashtable_1))
            {
              d_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_6(h_43, d_54, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_46, ATerm t_46, ATerm t)
{
  ATerm y_90 = NULL;
  t = SSL_hashtable_create(s_46, t_46);
  y_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_90);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL,d_91 = NULL,e_91 = NULL;
  z_90 = t;
  t = term_u_33;
  d_91 = t;
  t = term_v_33;
  e_91 = t;
  t = z_90;
  t = new_hashtable_0_2(d_91, e_91, t);
  a_91 = t;
  t = z_90;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(z_90, a_91, b_91, t);
  t = z_90;
  return(t);
}
static ATerm l_6 (ATerm p_46, ATerm q_46, ATerm t)
{
  ATerm f_91 = NULL;
  t = SSL_hashtable_remove(q_46, p_46);
  f_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_91);
  return(t);
}
static ATerm m_6 (ATerm u_46, ATerm t)
{
  ATerm g_91 = NULL;
  t = SSL_hashtable_destroy(u_46);
  g_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_91);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_91 = NULL;
  t = SSL_table_hashtable();
  h_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_91);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL,l_91 = NULL;
  i_91 = t;
  t = table_hashtable_0_0(t);
  j_91 = t;
  t = lookup_table_0_1(i_91, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(l_91, t);
  t = j_91;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(i_91, k_91, t);
  t = i_91;
  return(t);
}
ATerm fetch_1_0 (ATerm c_131 (ATerm), ATerm t)
{
  static ATerm k_92 (ATerm t);
  static ATerm k_92 (ATerm t)
  {
    ATerm h_92 = NULL,i_92 = NULL,j_92 = NULL;
    h_92 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_92 = ATgetFirst((ATermList) t);
        j_92 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_33 = t;
      int x_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_54 = NULL,t_54 = NULL,r_10 = NULL;
          t = SSLgetAnnotations(h_92);
          j_54 = t;
          t = i_92;
          t = c_131(t);
          t_54 = t;
          t = (ATerm) ATinsert(CheckATermList(j_92), t_54);
          r_10 = t;
          t = SSLsetAnnotations(r_10, j_54);
          LocalPopChoice(x_33);
        }
      else
        {
          t = w_33;
          {
            ATerm k_55 = NULL,t_55 = NULL,s_10 = NULL;
            t = SSLgetAnnotations(h_92);
            k_55 = t;
            t = j_92;
            t = k_92(t);
            t_55 = t;
            t = (ATerm) ATinsert(CheckATermList(t_55), i_92);
            s_10 = t;
            t = SSLsetAnnotations(s_10, k_55);
          }
        }
    }
    return(t);
  }
  t = k_92(t);
  return(t);
}
static ATerm t_6 (ATerm n_46, ATerm o_46, ATerm t)
{
  t = SSL_hashtable_get(o_46, n_46);
  return(t);
}
static ATerm o_6 (ATerm o_43, ATerm p_43, ATerm t)
{
  ATerm n_92 = NULL;
  t = lookup_table_0_1(o_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(p_43, n_92, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm p_92 = NULL,q_92 = NULL;
  t = term_y_33;
  p_92 = t;
  t = term_a_31;
  q_92 = t;
  t = term_z_33;
  t = r_6(p_92, q_92, t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_a_34;
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
  ATerm r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL;
  t = term_y_33;
  t_92 = t;
  t = term_a_31;
  u_92 = t;
  t = term_z_33;
  t = r_6(t_92, u_92, t);
  t = term_b_34;
  r_92 = t;
  t = term_a_31;
  s_92 = t;
  t = term_c_34;
  t = r_6(r_92, s_92, t);
  t = term_d_34;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_e_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_11, e_11, h_11, t);
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      t = Option_3_0(n_11, p_11, q_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL,v_10 = NULL;
  a_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_92 = ATgetFirst((ATermList) t);
      x_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_93);
  v_92 = t;
  t = w_92;
  t = r_88(t);
  y_92 = t;
  t = x_92;
  t = s_88(t);
  z_92 = t;
  t = (ATerm) ATinsert(CheckATermList(z_92), y_92);
  v_10 = t;
  t = SSLsetAnnotations(v_10, v_92);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_145 (ATerm), ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,k_93 = NULL,l_93 = NULL,a_11 = NULL;
  f_93 = t;
  {
    ATerm h_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_34;
        t = q_145(t);
        LocalPopChoice(j_34);
      }
    else
      {
        t = h_34;
      }
  }
  t = f_93;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_93 = ATgetFirst((ATermList) t);
      i_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_93);
  g_93 = t;
  t = term_r_30;
  l_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, h_93);
  t = r_6(l_93, h_93, t);
  t = i_93;
  {
    static ATerm v_93 (ATerm t);
    static ATerm v_93 (ATerm t)
    {
      ATerm l_34 = t;
      int m_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_34 = t;
          int q_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_93 = NULL;
              o_93 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_93;
              LocalPopChoice(q_34);
            }
          else
            {
              t = p_34;
              t = q_145(t);
              t = Cons_2_0(_id, v_93, t);
            }
          LocalPopChoice(m_34);
        }
      else
        {
          t = l_34;
          {
            ATerm r_93 = NULL,s_93 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_93 = ATgetFirst((ATermList) t);
                s_93 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_93), (ATerm) ATmakeAppl(sym_Undefined_1, r_93));
          }
        }
      return(t);
    }
    t = v_93(t);
  }
  k_93 = t;
  t = (ATerm) ATinsert(CheckATermList(k_93), (ATerm) ATmakeAppl(sym_Program_1, h_93));
  a_11 = t;
  t = SSLsetAnnotations(a_11, g_93);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm i_94 = NULL;
  i_94 = t;
  if(match_string(t, "--help"))
    {
      t = i_94;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_94;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_94;
        }
    }
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL;
  t = term_r_34;
  j_94 = t;
  t = term_a_31;
  k_94 = t;
  t = term_s_34;
  t = r_6(j_94, k_94, t);
  t = term_u_34;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_a_35;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm n_145 (ATerm), ATerm o_145 (ATerm), ATerm p_145 (ATerm), ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL;
  c_94 = t;
  t = term_i_31;
  d_94 = t;
  t = term_b_35;
  t = lookup_table_0_1(d_94, t);
  h_94 = t;
  t = term_j_31;
  e_94 = t;
  t = (ATerm) ATempty;
  f_94 = t;
  t = h_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(e_94, f_94, g_94, t);
  t = c_94;
  {
    static ATerm r_11 (ATerm t);
    static ATerm r_11 (ATerm t)
    {
      ATerm c_35 = t;
      int d_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_145(t);
          LocalPopChoice(d_35);
        }
      else
        {
          t = c_35;
          {
            ATerm e_35 = t;
            int f_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_11, t_11, u_11, t);
                LocalPopChoice(f_35);
              }
            else
              {
                t = e_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_11, t);
  }
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_94 = NULL;
        v_94 = t;
        {
          ATerm i_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_56 = NULL;
              t = v_94;
              {
                ATerm l_35 = t;
                int m_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_56 = NULL,q_56 = NULL;
                    t = term_n_28;
                    l_56 = t;
                    t = term_r_34;
                    q_56 = t;
                    t = term_n_35;
                    t = o_6(l_56, q_56, t);
                    LocalPopChoice(m_35);
                  }
                else
                  {
                    t = l_35;
                    t = fetch_1_0(v_11, t);
                  }
              }
              t = v_94;
              t = o_145(t);
              t = term_u_31;
              k_56 = t;
              t = SSL_exit(k_56);
              LocalPopChoice(k_35);
            }
          else
            {
              t = i_35;
              {
                ATerm x_56 = NULL,z_56 = NULL,b_57 = NULL;
                t = term_n_28;
                z_56 = t;
                t = term_y_33;
                b_57 = t;
                t = term_o_35;
                t = o_6(z_56, b_57, t);
                t = v_94;
                t = p_145(t);
                t = term_u_31;
                x_56 = t;
                t = SSL_exit(x_56);
              }
            }
        }
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        {
          ATerm r_35 = t;
          int s_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_94 = NULL,x_94 = NULL,y_94 = NULL;
              static ATerm w_11 (ATerm t);
              static ATerm w_11 (ATerm t)
              {
                ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL,g_11 = NULL;
                b_95 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_95 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_95);
                z_94 = t;
                t = a_95;
                if(((a_94 != NULL) && (a_94 != t)))
                  _fail(t);
                else
                  a_94 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_95);
                g_11 = t;
                t = SSLsetAnnotations(g_11, z_94);
                return(t);
              }
              t = fetch_1_0(w_11, t);
              t = term_z_32;
              x_94 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_94)), term_t_35);
              y_94 = t;
              t = SSL_printnl(x_94, y_94);
              t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_94)), term_t_35));
              t = o_145(t);
              t = term_d_33;
              w_94 = t;
              t = SSL_exit(w_94);
              LocalPopChoice(s_35);
            }
          else
            {
              t = r_35;
            }
        }
      }
  }
  b_94 = t;
  t = term_i_31;
  t = table_destroy_0_0(t);
  t = b_94;
  return(t);
}
ATerm option_wrap_5_0 (ATerm q_143 (ATerm), ATerm r_143 (ATerm), ATerm s_143 (ATerm), ATerm t_143 (ATerm), ATerm u_143 (ATerm), ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL;
  t = parse_options_3_0(q_143, r_143, s_143, t);
  g_95 = t;
  t = term_u_35;
  t = table_create_0_0(t);
  t = term_u_35;
  h_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_35, term_v_35, g_95);
  t = lookup_table_0_1(h_95, t);
  k_95 = t;
  t = term_v_35;
  i_95 = t;
  t = k_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(i_95, g_95, j_95, t);
  t = g_95;
  t = t_143(t);
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
      {
        ATerm a_36 = t;
        int b_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(g_12, h_12, i_12, t);
                  LocalPopChoice(d_36);
                }
              else
                {
                  t = c_36;
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
  ATerm m_95 = NULL,n_95 = NULL;
  t = term_w_28;
  m_95 = t;
  t = term_a_31;
  n_95 = t;
  t = term_i_36;
  t = r_6(m_95, n_95, t);
  t = term_j_36;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_k_36;
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
