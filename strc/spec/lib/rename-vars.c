#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_DynamicRules_1;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
ATerm term_l_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_y_34;
ATerm term_u_34;
ATerm term_k_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_t_32;
ATerm term_o_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_n_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_k_30;
ATerm term_i_30;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_r_28;
ATerm term_p_28;
ATerm term_o_28;
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
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_o_28);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_v_28);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_r_30);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_u_30);
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
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_z_31);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_31);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_a_31);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeInt(1);
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
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_a_31);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, (ATerm) ATempty);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_u_34);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_y_33);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_a_31);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm e_0 (ATerm t);
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
static ATerm m_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm spaste_1_0 (ATerm k_105 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm p_105 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm j_5 (ATerm j_23, ATerm i_23, ATerm t);
ATerm SVar_1_0 (ATerm s_85 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm tpaste_1_0 (ATerm g_105 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm q_105 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm m_5 (ATerm d_126 (ATerm), ATerm b_61, ATerm a_61, ATerm t);
ATerm foldr_3_0 (ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm k_129 (ATerm), ATerm t);
static ATerm n_5 (ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm f_61, ATerm e_61, ATerm t);
static ATerm o_5 (ATerm y_125 (ATerm), ATerm z_60, ATerm y_60, ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm q_5 (ATerm j_780, ATerm o_780, ATerm h_76, ATerm t);
ATerm while_not_2_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t);
ATerm for_3_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm x_73 (ATerm r_72, ATerm s_72, ATerm t_72, ATerm t);
static ATerm f_7 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm free_vars_3_0 (ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm o_85 (ATerm), ATerm t);
static ATerm s_5 (ATerm i_131 (ATerm), ATerm j_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_64, ATerm j_64, ATerm i_64, ATerm t);
ATerm at_end_1_0 (ATerm a_124 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_77 (ATerm e_77, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_5 (ATerm c_131 (ATerm), ATerm d_131 (ATerm (ATerm), ATerm), ATerm c_64, ATerm f_64, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm q_131 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm x_130 (ATerm (ATerm), ATerm), ATerm y_130 (ATerm), ATerm z_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_131 (ATerm (ATerm), ATerm), ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm b_6 (ATerm v_31, ATerm w_31, ATerm t);
static ATerm c_6 (ATerm b_30, ATerm c_30, ATerm t);
static ATerm e_6 (ATerm g_114 (ATerm), ATerm p_225, ATerm h_30, ATerm t);
static ATerm d_6 (ATerm x_29, ATerm y_29, ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm output_1_0 (ATerm h_136 (ATerm), ATerm t);
static ATerm i_82 (ATerm c_82, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_6 (ATerm d_30, ATerm t);
static ATerm g_6 (ATerm i_70, ATerm j_70, ATerm t);
static ATerm h_6 (ATerm x_31, ATerm y_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_83 (ATerm s_82, ATerm t);
static ATerm u_83 (ATerm w_82, ATerm x_82, ATerm y_82, ATerm t);
static ATerm v_83 (ATerm g_83, ATerm h_83, ATerm i_83, ATerm t);
static ATerm i_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm i_136 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm j_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm default_system_usage_2_0 (ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm t);
static ATerm u_9 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_6 (ATerm r_35, ATerm s_35, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm m_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_6 (ATerm i_41, ATerm j_41, ATerm h_41, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm q_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_6 (ATerm q_38, ATerm r_38, ATerm t);
ATerm foldr_2_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_115 (ATerm), ATerm t);
static ATerm b_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_6 (ATerm t_45, ATerm u_45, ATerm v_45, ATerm t);
ATerm lookup_table_0_1 (ATerm u_42, ATerm t);
ATerm new_hashtable_0_2 (ATerm b_46, ATerm c_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_6 (ATerm y_45, ATerm z_45, ATerm t);
static ATerm m_6 (ATerm d_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_123 (ATerm), ATerm t);
static ATerm t_6 (ATerm w_45, ATerm x_45, ATerm t);
static ATerm o_6 (ATerm b_43, ATerm c_43, ATerm t);
static ATerm e_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_138 (ATerm), ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
ATerm parse_options_3_0 (ATerm y_137 (ATerm), ATerm z_137 (ATerm), ATerm a_138 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm d_136 (ATerm), ATerm e_136 (ATerm), ATerm f_136 (ATerm), ATerm t);
static ATerm z_11 (ATerm t);
static ATerm e_12 (ATerm t);
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
      ATerm k_12 = ATgetArgument(t, 0);
      if(((ATgetType(k_12) != AT_LIST) || !(ATisEmpty(k_12))))
        _fail(t);
      {
        ATerm m_12 = ATgetArgument(t, 1);
        if(((ATgetType(m_12) != AT_LIST) || !(ATisEmpty(m_12))))
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
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_12 = ATgetArgument(t, 0);
      if(((ATgetType(p_12) == AT_LIST) && !(ATisEmpty(p_12))))
        {
          r_0 = ATgetFirst((ATermList) p_12);
          s_0 = (ATerm) ATgetNext((ATermList) p_12);
        }
      else
        _fail(t);
      {
        ATerm q_12 = ATgetArgument(t, 1);
        if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
          {
            t_0 = ATgetFirst((ATermList) q_12);
            u_0 = (ATerm) ATgetNext((ATermList) q_12);
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
static ATerm e_0 (ATerm t)
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
    ATerm r_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm u_12 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(t_12);
        t = (ATerm) ATmakeAppl(sym_SDef_3, d_1, a_1, b_1);
      }
    else
      {
        t = r_12;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm b_13 = ATgetArgument(t, 0);
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
      ATerm d_13 = ATgetArgument(t, 0);
      if(((ATgetType(d_13) != AT_LIST) || !(ATisEmpty(d_13))))
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
  ATerm p_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      if(((ATgetType(f_13) == AT_LIST) && !(ATisEmpty(f_13))))
        {
          p_2 = ATgetFirst((ATermList) f_13);
          q_2 = (ATerm) ATgetNext((ATermList) f_13);
        }
      else
        _fail(t);
      {
        ATerm i_13 = ATgetArgument(t, 1);
        if(((ATgetType(i_13) == AT_LIST) && !(ATisEmpty(i_13))))
          {
            t_2 = ATgetFirst((ATermList) i_13);
            u_2 = (ATerm) ATgetNext((ATermList) i_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_2, t_2), (ATerm) ATmakeAppl(sym__2, q_2, u_2));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym__2))
    {
      v_2 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_2), v_2);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm y_2 = NULL,a_3 = NULL,c_3 = NULL;
  if(match_cons(t, sym__2))
    {
      y_2 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_3);
      }
    else
      {
        t = j_13;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_13 = ATgetArgument(t, 0);
            a_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_3, a_3);
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
  ATerm z_4 = NULL,b_5 = NULL,c_5 = NULL,e_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_13 = ATgetArgument(t, 0);
      if(((ATgetType(p_13) == AT_LIST) && !(ATisEmpty(p_13))))
        {
          z_4 = ATgetFirst((ATermList) p_13);
          b_5 = (ATerm) ATgetNext((ATermList) p_13);
        }
      else
        _fail(t);
      {
        ATerm q_13 = ATgetArgument(t, 1);
        if(((ATgetType(q_13) == AT_LIST) && !(ATisEmpty(q_13))))
          {
            c_5 = ATgetFirst((ATermList) q_13);
            e_5 = (ATerm) ATgetNext((ATermList) q_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_4, c_5), (ATerm) ATmakeAppl(sym__2, b_5, e_5));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_5), f_5);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm i_5 = NULL,p_5 = NULL,u_5 = NULL;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5;
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm u_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_13);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_5);
      }
    else
      {
        t = r_13;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_13 = ATgetArgument(t, 0);
            p_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_5, p_5);
      }
  }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_13 = ATgetArgument(t, 0);
      if(((ATgetType(y_13) != AT_LIST) || !(ATisEmpty(y_13))))
        _fail(t);
      {
        ATerm z_13 = ATgetArgument(t, 1);
        if(((ATgetType(z_13) != AT_LIST) || !(ATisEmpty(z_13))))
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
  ATerm w_7 = NULL,f_8 = NULL,g_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_14 = ATgetArgument(t, 0);
      if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
        {
          w_7 = ATgetFirst((ATermList) a_14);
          f_8 = (ATerm) ATgetNext((ATermList) a_14);
        }
      else
        _fail(t);
      {
        ATerm b_14 = ATgetArgument(t, 1);
        if(((ATgetType(b_14) == AT_LIST) && !(ATisEmpty(b_14))))
          {
            g_8 = ATgetFirst((ATermList) b_14);
            p_8 = (ATerm) ATgetNext((ATermList) b_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_7, g_8), (ATerm) ATmakeAppl(sym__2, f_8, p_8));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  if(match_cons(t, sym__2))
    {
      v_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_8), v_8);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm y_8 = NULL,i_9 = NULL,o_9 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_8;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_9);
      }
    else
      {
        t = c_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_14 = ATgetArgument(t, 0);
            i_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_9, i_9);
      }
  }
  return(t);
}
static ATerm m_1 (ATerm t)
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
static ATerm s_1 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,f_11 = NULL,i_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_14 = ATgetArgument(t, 0);
      if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
        {
          c_11 = ATgetFirst((ATermList) i_14);
          d_11 = (ATerm) ATgetNext((ATermList) i_14);
        }
      else
        _fail(t);
      {
        ATerm j_14 = ATgetArgument(t, 1);
        if(((ATgetType(j_14) == AT_LIST) && !(ATisEmpty(j_14))))
          {
            f_11 = ATgetFirst((ATermList) j_14);
            i_11 = (ATerm) ATgetNext((ATermList) j_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_11, f_11), (ATerm) ATmakeAppl(sym__2, d_11, i_11));
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      j_11 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_11), j_11);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm m_11 = NULL,o_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      m_11 = ATgetArgument(t, 0);
      x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_11);
      }
    else
      {
        t = k_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_14 = ATgetArgument(t, 0);
            o_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_11, o_11);
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
  ATerm o_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_14 = ATgetArgument(t, 0);
      if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
        {
          o_12 = ATgetFirst((ATermList) t_14);
          w_12 = (ATerm) ATgetNext((ATermList) t_14);
        }
      else
        _fail(t);
      {
        ATerm v_14 = ATgetArgument(t, 1);
        if(((ATgetType(v_14) == AT_LIST) && !(ATisEmpty(v_14))))
          {
            x_12 = ATgetFirst((ATermList) v_14);
            y_12 = (ATerm) ATgetNext((ATermList) v_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_12, x_12), (ATerm) ATmakeAppl(sym__2, w_12, y_12));
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
  ATerm c_13 = NULL,g_13 = NULL,h_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_13;
  {
    ATerm w_14 = t;
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
        t = w_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_14 = ATgetArgument(t, 0);
            g_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_13, g_13);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm a_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,f_12 = NULL;
      b_12 = t;
      if(match_cons(t, sym_Let_2))
        {
          c_12 = ATgetArgument(t, 0);
          d_12 = ATgetArgument(t, 1);
          {
            ATerm f_0 = NULL,n_0 = NULL,p_0 = NULL,n_1 = NULL;
            t = SSLgetAnnotations(b_12);
            f_0 = t;
            t = c_12;
            t = k_105(t);
            p_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_12, p_0);
            t = genzip_4_0(a_0, c_0, e_0, i_0, t);
            n_0 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, n_0, d_12);
            n_1 = t;
            t = SSLsetAnnotations(n_1, f_0);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              c_12 = ATgetArgument(t, 0);
              d_12 = ATgetArgument(t, 1);
              f_12 = ATgetArgument(t, 2);
              {
                ATerm h_2 = NULL,l_2 = NULL,m_2 = NULL,o_1 = NULL;
                t = SSLgetAnnotations(b_12);
                h_2 = t;
                t = d_12;
                t = k_105(t);
                m_2 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_12, m_2);
                t = genzip_4_0(k_0, q_0, x_0, z_0, t);
                l_2 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, c_12, l_2, f_12);
                o_1 = t;
                t = SSLsetAnnotations(o_1, h_2);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  c_12 = ATgetArgument(t, 0);
                  d_12 = ATgetArgument(t, 1);
                  f_12 = ATgetArgument(t, 2);
                  a_12 = ATgetArgument(t, 3);
                  {
                    ATerm l_4 = NULL,t_4 = NULL,u_4 = NULL,p_1 = NULL;
                    t = SSLgetAnnotations(b_12);
                    l_4 = t;
                    t = d_12;
                    t = k_105(t);
                    u_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_12, u_4);
                    t = genzip_4_0(e_1, f_1, g_1, h_1, t);
                    t_4 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, c_12, t_4, f_12, a_12);
                    p_1 = t;
                    t = SSLsetAnnotations(p_1, l_4);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_12 = ATgetArgument(t, 0);
                      d_12 = ATgetArgument(t, 1);
                      f_12 = ATgetArgument(t, 2);
                      a_12 = ATgetArgument(t, 3);
                      {
                        ATerm o_7 = NULL,t_7 = NULL,u_7 = NULL,q_1 = NULL;
                        t = SSLgetAnnotations(b_12);
                        o_7 = t;
                        t = d_12;
                        t = k_105(t);
                        u_7 = t;
                        t = (ATerm) ATmakeAppl(sym__2, d_12, u_7);
                        t = genzip_4_0(i_1, j_1, k_1, l_1, t);
                        t_7 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, c_12, t_7, f_12, a_12);
                        q_1 = t;
                        t = SSLsetAnnotations(q_1, o_7);
                      }
                    }
                  else
                    {
                      ATerm g_10 = NULL,y_10 = NULL,z_10 = NULL,r_1 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          c_12 = ATgetArgument(t, 0);
                          d_12 = ATgetArgument(t, 1);
                          f_12 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(b_12);
                      g_10 = t;
                      t = d_12;
                      t = k_105(t);
                      z_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_12, z_10);
                      t = genzip_4_0(m_1, s_1, u_1, v_1, t);
                      y_10 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, c_12, y_10, f_12);
                      r_1 = t;
                      t = SSLsetAnnotations(r_1, g_10);
                    }
                }
            }
        }
      LocalPopChoice(e_15);
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
              ATerm l_12 = NULL,n_12 = NULL;
              n_12 = t;
              t = k_105(t);
              l_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_12, l_12);
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
              ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,s_12 = NULL,v_12 = NULL,t_1 = NULL;
              l_14 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  m_14 = ATgetArgument(t, 0);
                  n_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_14);
              s_12 = t;
              t = m_14;
              t = k_105(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_12 = ATgetFirst((ATermList) t);
                  {
                    ATerm h_15 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, v_12, n_14);
              t_1 = t;
              t = SSLsetAnnotations(t_1, s_12);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t)
{
  ATerm v_24 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
      {
        ATerm t_13 = NULL,w_13 = NULL,x_13 = NULL,e_2 = NULL;
        t = SSLgetAnnotations(e_25);
        t_13 = t;
        t = f_25;
        t = l_105(t);
        w_13 = t;
        t = g_25;
        t = l_105(t);
        x_13 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, w_13, x_13);
        e_2 = t;
        t = SSLsetAnnotations(e_2, t_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_25 = ATgetArgument(t, 0);
          g_25 = ATgetArgument(t, 1);
          d_25 = ATgetArgument(t, 2);
          {
            ATerm u_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,f_2 = NULL;
            t = SSLgetAnnotations(e_25);
            u_14 = t;
            t = f_25;
            t = n_105(t);
            b_15 = t;
            t = g_25;
            t = n_105(t);
            c_15 = t;
            t = d_25;
            t = l_105(t);
            d_15 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, b_15, c_15, d_15);
            f_2 = t;
            t = SSLsetAnnotations(f_2, u_14);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_25 = ATgetArgument(t, 0);
              g_25 = ATgetArgument(t, 1);
              d_25 = ATgetArgument(t, 2);
              v_24 = ATgetArgument(t, 3);
              {
                ATerm p_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,g_2 = NULL;
                t = SSLgetAnnotations(e_25);
                p_15 = t;
                t = f_25;
                t = n_105(t);
                u_15 = t;
                t = g_25;
                t = n_105(t);
                v_15 = t;
                t = d_25;
                t = n_105(t);
                w_15 = t;
                t = v_24;
                t = l_105(t);
                x_15 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_15, v_15, w_15, x_15);
                g_2 = t;
                t = SSLsetAnnotations(g_2, p_15);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  f_25 = ATgetArgument(t, 0);
                  g_25 = ATgetArgument(t, 1);
                  d_25 = ATgetArgument(t, 2);
                  v_24 = ATgetArgument(t, 3);
                  {
                    ATerm j_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,o_2 = NULL;
                    t = SSLgetAnnotations(e_25);
                    j_16 = t;
                    t = f_25;
                    t = n_105(t);
                    o_16 = t;
                    t = g_25;
                    t = n_105(t);
                    p_16 = t;
                    t = d_25;
                    t = n_105(t);
                    q_16 = t;
                    t = v_24;
                    t = l_105(t);
                    r_16 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, o_16, p_16, q_16, r_16);
                    o_2 = t;
                    t = SSLsetAnnotations(o_2, j_16);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      f_25 = ATgetArgument(t, 0);
                      g_25 = ATgetArgument(t, 1);
                      d_25 = ATgetArgument(t, 2);
                      {
                        ATerm c_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,r_2 = NULL;
                        t = SSLgetAnnotations(e_25);
                        c_17 = t;
                        t = f_25;
                        t = n_105(t);
                        j_17 = t;
                        t = g_25;
                        t = n_105(t);
                        k_17 = t;
                        t = d_25;
                        t = n_105(t);
                        l_17 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, j_17, k_17, l_17);
                        r_2 = t;
                        t = SSLsetAnnotations(r_2, c_17);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          f_25 = ATgetArgument(t, 0);
                          g_25 = ATgetArgument(t, 1);
                          {
                            ATerm h_18 = NULL,r_18 = NULL,w_18 = NULL,s_2 = NULL;
                            t = SSLgetAnnotations(e_25);
                            h_18 = t;
                            t = f_25;
                            t = n_105(t);
                            r_18 = t;
                            t = g_25;
                            t = l_105(t);
                            w_18 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, r_18, w_18);
                            s_2 = t;
                            t = SSLsetAnnotations(s_2, h_18);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              f_25 = ATgetArgument(t, 0);
                              g_25 = ATgetArgument(t, 1);
                              {
                                ATerm p_19 = NULL,s_19 = NULL,t_19 = NULL,b_3 = NULL;
                                t = SSLgetAnnotations(e_25);
                                p_19 = t;
                                t = f_25;
                                t = n_105(t);
                                s_19 = t;
                                t = g_25;
                                t = l_105(t);
                                t_19 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, s_19, t_19);
                                b_3 = t;
                                t = SSLsetAnnotations(b_3, p_19);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  f_25 = ATgetArgument(t, 0);
                                  g_25 = ATgetArgument(t, 1);
                                  {
                                    ATerm h_20 = NULL,l_20 = NULL,m_20 = NULL,d_3 = NULL;
                                    t = SSLgetAnnotations(e_25);
                                    h_20 = t;
                                    t = f_25;
                                    t = n_105(t);
                                    l_20 = t;
                                    t = g_25;
                                    t = l_105(t);
                                    m_20 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, l_20, m_20);
                                    d_3 = t;
                                    t = SSLsetAnnotations(d_3, h_20);
                                  }
                                }
                              else
                                {
                                  ATerm j_21 = NULL,p_21 = NULL,q_21 = NULL,e_3 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      f_25 = ATgetArgument(t, 0);
                                      g_25 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(e_25);
                                  j_21 = t;
                                  t = f_25;
                                  t = n_105(t);
                                  p_21 = t;
                                  t = g_25;
                                  t = l_105(t);
                                  q_21 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, p_21, q_21);
                                  e_3 = t;
                                  t = SSLsetAnnotations(e_3, j_21);
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
ATerm dynrule_sargs_1_0 (ATerm p_105 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,p_26 = NULL;
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          m_26 = ATgetArgument(t, 0);
          {
            ATerm k_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_15);
      t = m_26;
      if(match_cons(t, sym_DynRuleId_1))
        {
          n_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_26;
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
                m_26 = ATgetArgument(t, 0);
                {
                  ATerm q_15 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_15);
            t = m_26;
            if(match_cons(t, sym_DynRuleId_1))
              {
                n_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = n_26;
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
                m_26 = ATgetArgument(t, 0);
                {
                  ATerm t_15 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = m_26;
            if(match_cons(t, sym_DynRuleId_1))
              {
                n_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = n_26;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm y_15 = ATgetArgument(t, 0);
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
  ATerm y_27 = NULL;
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_27 = ATgetArgument(t, 0);
          {
            ATerm c_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_16);
      t = y_27;
    }
  else
    {
      t = a_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_27;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm e_28 = NULL;
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_28 = ATgetArgument(t, 0);
          {
            ATerm f_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_16);
      t = e_28;
    }
  else
    {
      t = d_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_28;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm r_27 = NULL;
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm i_16 = ATgetArgument(t, 0);
          r_27 = ATgetArgument(t, 1);
          {
            ATerm k_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_16);
      t = r_27;
      t = map_1_0(b_2, t);
    }
  else
    {
      t = g_16;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm l_16 = ATgetArgument(t, 0);
          r_27 = ATgetArgument(t, 1);
          {
            ATerm m_16 = ATgetArgument(t, 2);
          }
          {
            ATerm n_16 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = r_27;
      t = map_1_0(c_2, t);
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm j_28 = NULL;
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_28 = ATgetArgument(t, 0);
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
      t = j_28;
    }
  else
    {
      t = s_16;
      if(match_cons(t, sym_SDefT_4))
        {
          j_28 = ATgetArgument(t, 0);
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
      t = j_28;
    }
  return(t);
}
static ATerm j_5 (ATerm j_23, ATerm i_23, ATerm t)
{
  t = j_23;
  t = map_1_0(d_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,y_28 = NULL,a_29 = NULL,b_29 = NULL,r_3 = NULL;
  b_29 = t;
  if(match_cons(t, sym_SVar_1))
    {
      y_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_29);
  t_28 = t;
  t = y_28;
  t = s_85(t);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, a_29);
  r_3 = t;
  t = SSLsetAnnotations(r_3, t_28);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
      j_29 = t;
      if(match_cons(t, sym_Let_2))
        {
          o_29 = ATgetArgument(t, 0);
          p_29 = ATgetArgument(t, 1);
          t = j_29;
          t = j_5(o_29, p_29, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              o_29 = ATgetArgument(t, 0);
              p_29 = ATgetArgument(t, 1);
              q_29 = ATgetArgument(t, 2);
              t = p_29;
              t = map_1_0(j_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  o_29 = ATgetArgument(t, 0);
                  p_29 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, o_29);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_29 = ATgetArgument(t, 0);
                      p_29 = ATgetArgument(t, 1);
                      q_29 = ATgetArgument(t, 2);
                      r_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_29;
                  t = map_1_0(k_2, t);
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
            t = dynrule_sargs_1_0(n_2, t);
          }
      }
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm m_30 = NULL;
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_30 = ATgetArgument(t, 0);
          {
            ATerm g_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_17);
      t = m_30;
    }
  else
    {
      t = e_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_30;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
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
            ATerm m_17 = ATgetArgument(t, 1);
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
static ATerm n_2 (ATerm t)
{
  t = map_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm p_31 = NULL;
  ATerm n_17 = t;
  int o_17 = stack_ptr;
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
      LocalPopChoice(o_17);
      t = p_31;
    }
  else
    {
      t = n_17;
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
  t = rename_4_0(SVar_1_0, i_2, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,k_38 = NULL;
  e_38 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      f_38 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
      {
        ATerm m_22 = NULL,p_22 = NULL,q_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,e_23 = NULL,v_3 = NULL,u_3 = NULL,t_3 = NULL;
        t = SSLgetAnnotations(e_38);
        m_22 = t;
        t = f_38;
        if(match_cons(t, sym_DynRuleId_1))
          {
            s_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_38);
        q_22 = t;
        t = s_22;
        if(match_cons(t, sym_RDecT_3))
          {
            x_22 = ATgetArgument(t, 0);
            y_22 = ATgetArgument(t, 1);
            z_22 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_22);
        u_22 = t;
        t = x_22;
        t = r_105(t);
        a_23 = t;
        t = y_22;
        t = s_105(t);
        b_23 = t;
        t = z_22;
        t = t_105(t);
        c_23 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, a_23, b_23, c_23);
        t_3 = t;
        t = SSLsetAnnotations(t_3, u_22);
        e_23 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, e_23);
        u_3 = t;
        t = SSLsetAnnotations(u_3, q_22);
        t_22 = t;
        t = k_38;
        t = u_105(t);
        p_22 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, t_22, p_22);
        v_3 = t;
        t = SSLsetAnnotations(v_3, m_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          f_38 = ATgetArgument(t, 0);
          k_38 = ATgetArgument(t, 1);
          {
            ATerm r_23 = NULL,u_23 = NULL,v_23 = NULL,y_23 = NULL,a_24 = NULL,b_24 = NULL,f_24 = NULL,i_24 = NULL,m_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,t_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,f_4 = NULL,b_4 = NULL,a_4 = NULL,x_3 = NULL;
            t = SSLgetAnnotations(e_38);
            r_23 = t;
            t = f_38;
            if(match_cons(t, sym_DynRuleId_1))
              {
                q_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_38);
            p_24 = t;
            t = q_24;
            if(match_cons(t, sym_RDecT_3))
              {
                w_24 = ATgetArgument(t, 0);
                x_24 = ATgetArgument(t, 1);
                y_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_24);
            t_24 = t;
            t = w_24;
            t = r_105(t);
            z_24 = t;
            t = x_24;
            t = s_105(t);
            a_25 = t;
            t = y_24;
            t = t_105(t);
            b_25 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, z_24, a_25, b_25);
            x_3 = t;
            t = SSLsetAnnotations(x_3, t_24);
            c_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, c_25);
            a_4 = t;
            t = SSLsetAnnotations(a_4, p_24);
            r_24 = t;
            t = k_38;
            if(match_cons(t, sym_Rule_3))
              {
                v_23 = ATgetArgument(t, 0);
                y_23 = ATgetArgument(t, 1);
                a_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_38);
            u_23 = t;
            t = v_23;
            t = u_105(t);
            b_24 = t;
            t = y_23;
            t = v_105(t);
            f_24 = t;
            t = a_24;
            t = w_105(t);
            i_24 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, b_24, f_24, i_24);
            b_4 = t;
            t = SSLsetAnnotations(b_4, u_23);
            m_24 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, r_24, m_24);
            f_4 = t;
            t = SSLsetAnnotations(f_4, r_23);
          }
        }
      else
        {
          ATerm x_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,s_26 = NULL,t_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,n_4 = NULL,m_4 = NULL,j_4 = NULL,i_4 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              f_38 = ATgetArgument(t, 0);
              k_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_38);
          x_25 = t;
          t = f_38;
          if(match_cons(t, sym_DynRuleId_1))
            {
              j_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_38);
          i_26 = t;
          t = j_26;
          if(match_cons(t, sym_RDecT_3))
            {
              t_26 = ATgetArgument(t, 0);
              x_26 = ATgetArgument(t, 1);
              y_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_26);
          s_26 = t;
          t = t_26;
          t = r_105(t);
          z_26 = t;
          t = x_26;
          t = s_105(t);
          a_27 = t;
          t = y_26;
          t = t_105(t);
          b_27 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, z_26, a_27, b_27);
          i_4 = t;
          t = SSLsetAnnotations(i_4, s_26);
          c_27 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, c_27);
          j_4 = t;
          t = SSLsetAnnotations(j_4, i_26);
          k_26 = t;
          t = k_38;
          if(match_cons(t, sym_Rule_3))
            {
              b_26 = ATgetArgument(t, 0);
              c_26 = ATgetArgument(t, 1);
              d_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_38);
          a_26 = t;
          t = b_26;
          t = u_105(t);
          e_26 = t;
          t = c_26;
          t = v_105(t);
          f_26 = t;
          t = d_26;
          t = w_105(t);
          g_26 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, e_26, f_26, g_26);
          m_4 = t;
          t = SSLsetAnnotations(m_4, a_26);
          h_26 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, k_26, h_26);
          n_4 = t;
          t = SSLsetAnnotations(n_4, x_25);
        }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
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
static ATerm f_3 (ATerm t)
{
  ATerm n_29 = NULL,u_29 = NULL,v_29 = NULL,z_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
        {
          n_29 = ATgetFirst((ATermList) s_17);
          u_29 = (ATerm) ATgetNext((ATermList) s_17);
        }
      else
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
          {
            v_29 = ATgetFirst((ATermList) t_17);
            z_29 = (ATerm) ATgetNext((ATermList) t_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_29, v_29), (ATerm) ATmakeAppl(sym__2, u_29, z_29));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm g_30 = NULL,j_30 = NULL;
  if(match_cons(t, sym__2))
    {
      g_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_30), g_30);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm l_30 = NULL,p_30 = NULL,q_30 = NULL;
  if(match_cons(t, sym__2))
    {
      l_30 = ATgetArgument(t, 0);
      q_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_30;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_30);
      }
    else
      {
        t = u_17;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_17 = ATgetArgument(t, 0);
            p_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_30, p_30);
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
  ATerm h_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_18 = ATgetArgument(t, 0);
      if(((ATgetType(a_18) == AT_LIST) && !(ATisEmpty(a_18))))
        {
          h_32 = ATgetFirst((ATermList) a_18);
          k_32 = (ATerm) ATgetNext((ATermList) a_18);
        }
      else
        _fail(t);
      {
        ATerm b_18 = ATgetArgument(t, 1);
        if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
          {
            l_32 = ATgetFirst((ATermList) b_18);
            m_32 = (ATerm) ATgetNext((ATermList) b_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_32, l_32), (ATerm) ATmakeAppl(sym__2, k_32, m_32));
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm n_32 = NULL,u_32 = NULL;
  if(match_cons(t, sym__2))
    {
      n_32 = ATgetArgument(t, 0);
      u_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_32), n_32);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm w_32 = NULL,c_33 = NULL,d_33 = NULL;
  if(match_cons(t, sym__2))
    {
      w_32 = ATgetArgument(t, 0);
      d_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_32;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_33);
      }
    else
      {
        t = c_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_18 = ATgetArgument(t, 0);
            c_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_33, c_33);
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
        ATerm i_18 = ATgetArgument(t, 1);
        if(((ATgetType(i_18) != AT_LIST) || !(ATisEmpty(i_18))))
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
  ATerm o_34 = NULL,r_34 = NULL,t_34 = NULL,v_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_18 = ATgetArgument(t, 0);
      if(((ATgetType(j_18) == AT_LIST) && !(ATisEmpty(j_18))))
        {
          o_34 = ATgetFirst((ATermList) j_18);
          r_34 = (ATerm) ATgetNext((ATermList) j_18);
        }
      else
        _fail(t);
      {
        ATerm k_18 = ATgetArgument(t, 1);
        if(((ATgetType(k_18) == AT_LIST) && !(ATisEmpty(k_18))))
          {
            t_34 = ATgetFirst((ATermList) k_18);
            v_34 = (ATerm) ATgetNext((ATermList) k_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_34, t_34), (ATerm) ATmakeAppl(sym__2, r_34, v_34));
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL;
  if(match_cons(t, sym__2))
    {
      w_34 = ATgetArgument(t, 0);
      x_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_34), w_34);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm z_34 = NULL,j_35 = NULL,k_35 = NULL;
  if(match_cons(t, sym__2))
    {
      z_34 = ATgetArgument(t, 0);
      k_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_34;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_35);
      }
    else
      {
        t = l_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_18 = ATgetArgument(t, 0);
            j_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_35, j_35);
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
static ATerm w_3 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,d_49 = NULL,f_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
        {
          z_48 = ATgetFirst((ATermList) s_18);
          a_49 = (ATerm) ATgetNext((ATermList) s_18);
        }
      else
        _fail(t);
      {
        ATerm t_18 = ATgetArgument(t, 1);
        if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
          {
            d_49 = ATgetFirst((ATermList) t_18);
            f_49 = (ATerm) ATgetNext((ATermList) t_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_48, d_49), (ATerm) ATmakeAppl(sym__2, a_49, f_49));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm g_49 = NULL,i_49 = NULL;
  if(match_cons(t, sym__2))
    {
      g_49 = ATgetArgument(t, 0);
      i_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_49), g_49);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm q_49 = NULL,u_49 = NULL,v_49 = NULL;
  if(match_cons(t, sym__2))
    {
      q_49 = ATgetArgument(t, 0);
      v_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_49;
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_49);
      }
    else
      {
        t = u_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_18 = ATgetArgument(t, 0);
            u_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_49, u_49);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
      m_48 = t;
      if(match_cons(t, sym_Scope_2))
        {
          n_48 = ATgetArgument(t, 0);
          o_48 = ATgetArgument(t, 1);
          {
            ATerm k_27 = NULL,o_27 = NULL,q_6 = NULL;
            t = SSLgetAnnotations(m_48);
            k_27 = t;
            t = n_48;
            t = g_105(t);
            o_27 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, o_27, o_48);
            q_6 = t;
            t = SSLsetAnnotations(q_6, k_27);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              n_48 = ATgetArgument(t, 0);
              {
                ATerm q_28 = NULL,v_6 = NULL;
                t = SSLgetAnnotations(m_48);
                q_28 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, n_48);
                v_6 = t;
                t = SSLsetAnnotations(v_6, q_28);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  n_48 = ATgetArgument(t, 0);
                  o_48 = ATgetArgument(t, 1);
                  p_48 = ATgetArgument(t, 2);
                  {
                    ATerm f_29 = NULL,k_29 = NULL,l_29 = NULL,z_6 = NULL;
                    t = SSLgetAnnotations(m_48);
                    f_29 = t;
                    t = p_48;
                    t = g_105(t);
                    l_29 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_48, l_29);
                    t = genzip_4_0(z_2, f_3, g_3, h_3, t);
                    k_29 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, n_48, o_48, k_29);
                    z_6 = t;
                    t = SSLsetAnnotations(z_6, f_29);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_48 = ATgetArgument(t, 0);
                      o_48 = ATgetArgument(t, 1);
                      p_48 = ATgetArgument(t, 2);
                      q_48 = ATgetArgument(t, 3);
                      {
                        ATerm u_31 = NULL,d_32 = NULL,f_32 = NULL,a_7 = NULL;
                        t = SSLgetAnnotations(m_48);
                        u_31 = t;
                        t = p_48;
                        t = g_105(t);
                        f_32 = t;
                        t = (ATerm) ATmakeAppl(sym__2, p_48, f_32);
                        t = genzip_4_0(i_3, j_3, k_3, l_3, t);
                        d_32 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, n_48, o_48, d_32, q_48);
                        a_7 = t;
                        t = SSLsetAnnotations(a_7, u_31);
                      }
                    }
                  else
                    {
                      ATerm f_34 = NULL,l_34 = NULL,m_34 = NULL,c_7 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          n_48 = ATgetArgument(t, 0);
                          o_48 = ATgetArgument(t, 1);
                          p_48 = ATgetArgument(t, 2);
                          q_48 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(m_48);
                      f_34 = t;
                      t = p_48;
                      t = g_105(t);
                      m_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_48, m_34);
                      t = genzip_4_0(m_3, n_3, o_3, p_3, t);
                      l_34 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, n_48, o_48, l_34, q_48);
                      c_7 = t;
                      t = SSLsetAnnotations(c_7, f_34);
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
        static ATerm q_3 (ATerm t);
        static ATerm q_3 (ATerm t)
        {
          ATerm v_48 = NULL,w_48 = NULL;
          w_48 = t;
          t = g_105(t);
          v_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_48, v_48);
          t = genzip_4_0(s_3, w_3, y_3, z_3, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, q_3, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL;
  f_62 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_62 = ATgetArgument(t, 0);
      e_62 = ATgetArgument(t, 1);
      {
        ATerm k_36 = NULL,t_36 = NULL,v_36 = NULL,j_7 = NULL;
        t = SSLgetAnnotations(f_62);
        k_36 = t;
        t = g_62;
        t = j_105(t);
        t_36 = t;
        t = e_62;
        t = h_105(t);
        v_36 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, t_36, v_36);
        j_7 = t;
        t = SSLsetAnnotations(j_7, k_36);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          g_62 = ATgetArgument(t, 0);
          {
            ATerm g_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,w_37 = NULL,x_37 = NULL,l_7 = NULL,k_7 = NULL;
            t = SSLgetAnnotations(f_62);
            g_37 = t;
            t = g_62;
            if(match_cons(t, sym_Rule_3))
              {
                q_37 = ATgetArgument(t, 0);
                r_37 = ATgetArgument(t, 1);
                s_37 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_62);
            p_37 = t;
            t = q_37;
            t = h_105(t);
            t_37 = t;
            t = r_37;
            t = h_105(t);
            u_37 = t;
            t = s_37;
            t = h_105(t);
            w_37 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, t_37, u_37, w_37);
            k_7 = t;
            t = SSLsetAnnotations(k_7, p_37);
            x_37 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, x_37);
            l_7 = t;
            t = SSLsetAnnotations(l_7, g_37);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              g_62 = ATgetArgument(t, 0);
              e_62 = ATgetArgument(t, 1);
              c_62 = ATgetArgument(t, 2);
              {
                ATerm h_38 = NULL,p_38 = NULL,s_38 = NULL,t_38 = NULL,x_7 = NULL;
                t = SSLgetAnnotations(f_62);
                h_38 = t;
                t = g_62;
                t = j_105(t);
                p_38 = t;
                t = e_62;
                t = j_105(t);
                s_38 = t;
                t = c_62;
                t = j_105(t);
                t_38 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, p_38, s_38, t_38);
                x_7 = t;
                t = SSLsetAnnotations(x_7, h_38);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  g_62 = ATgetArgument(t, 0);
                  e_62 = ATgetArgument(t, 1);
                  c_62 = ATgetArgument(t, 2);
                  d_62 = ATgetArgument(t, 3);
                  {
                    ATerm e_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,y_7 = NULL;
                    t = SSLgetAnnotations(f_62);
                    e_39 = t;
                    t = g_62;
                    t = j_105(t);
                    j_39 = t;
                    t = e_62;
                    t = j_105(t);
                    k_39 = t;
                    t = c_62;
                    t = j_105(t);
                    l_39 = t;
                    t = d_62;
                    t = h_105(t);
                    m_39 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, j_39, k_39, l_39, m_39);
                    y_7 = t;
                    t = SSLsetAnnotations(y_7, e_39);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_62 = ATgetArgument(t, 0);
                      e_62 = ATgetArgument(t, 1);
                      c_62 = ATgetArgument(t, 2);
                      d_62 = ATgetArgument(t, 3);
                      {
                        ATerm y_39 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,z_7 = NULL;
                        t = SSLgetAnnotations(f_62);
                        y_39 = t;
                        t = g_62;
                        t = j_105(t);
                        d_40 = t;
                        t = e_62;
                        t = j_105(t);
                        e_40 = t;
                        t = c_62;
                        t = j_105(t);
                        f_40 = t;
                        t = d_62;
                        t = h_105(t);
                        g_40 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_40, e_40, f_40, g_40);
                        z_7 = t;
                        t = SSLsetAnnotations(z_7, y_39);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          g_62 = ATgetArgument(t, 0);
                          e_62 = ATgetArgument(t, 1);
                          {
                            ATerm q_40 = NULL,t_40 = NULL,u_40 = NULL,a_8 = NULL;
                            t = SSLgetAnnotations(f_62);
                            q_40 = t;
                            t = g_62;
                            t = j_105(t);
                            t_40 = t;
                            t = e_62;
                            t = h_105(t);
                            u_40 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, t_40, u_40);
                            a_8 = t;
                            t = SSLsetAnnotations(a_8, q_40);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              g_62 = ATgetArgument(t, 0);
                              e_62 = ATgetArgument(t, 1);
                              {
                                ATerm k_41 = NULL,n_41 = NULL,p_41 = NULL,b_8 = NULL;
                                t = SSLgetAnnotations(f_62);
                                k_41 = t;
                                t = g_62;
                                t = j_105(t);
                                n_41 = t;
                                t = e_62;
                                t = h_105(t);
                                p_41 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, n_41, p_41);
                                b_8 = t;
                                t = SSLsetAnnotations(b_8, k_41);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  g_62 = ATgetArgument(t, 0);
                                  e_62 = ATgetArgument(t, 1);
                                  {
                                    ATerm d_42 = NULL,g_42 = NULL,i_42 = NULL,c_8 = NULL;
                                    t = SSLgetAnnotations(f_62);
                                    d_42 = t;
                                    t = g_62;
                                    t = j_105(t);
                                    g_42 = t;
                                    t = e_62;
                                    t = h_105(t);
                                    i_42 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, g_42, i_42);
                                    c_8 = t;
                                    t = SSLsetAnnotations(c_8, d_42);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      g_62 = ATgetArgument(t, 0);
                                      {
                                        ATerm q_42 = NULL,s_42 = NULL,d_8 = NULL;
                                        t = SSLgetAnnotations(f_62);
                                        q_42 = t;
                                        t = g_62;
                                        t = h_105(t);
                                        s_42 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, s_42);
                                        d_8 = t;
                                        t = SSLsetAnnotations(d_8, q_42);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          g_62 = ATgetArgument(t, 0);
                                          {
                                            ATerm a_43 = NULL,f_43 = NULL,e_8 = NULL;
                                            t = SSLgetAnnotations(f_62);
                                            a_43 = t;
                                            t = g_62;
                                            t = h_105(t);
                                            f_43 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, f_43);
                                            e_8 = t;
                                            t = SSLsetAnnotations(e_8, a_43);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              g_62 = ATgetArgument(t, 0);
                                              {
                                                ATerm m_43 = NULL,o_43 = NULL,h_8 = NULL;
                                                t = SSLgetAnnotations(f_62);
                                                m_43 = t;
                                                t = g_62;
                                                t = h_105(t);
                                                o_43 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, o_43);
                                                h_8 = t;
                                                t = SSLsetAnnotations(h_8, m_43);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  g_62 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm d_44 = NULL,o_44 = NULL,i_8 = NULL;
                                                    t = SSLgetAnnotations(f_62);
                                                    d_44 = t;
                                                    t = g_62;
                                                    t = h_105(t);
                                                    o_44 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, o_44);
                                                    i_8 = t;
                                                    t = SSLsetAnnotations(i_8, d_44);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm x_44 = NULL,f_46 = NULL,j_8 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      g_62 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(f_62);
                                                  x_44 = t;
                                                  t = g_62;
                                                  t = h_105(t);
                                                  f_46 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, f_46);
                                                  j_8 = t;
                                                  t = SSLsetAnnotations(j_8, x_44);
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
ATerm dynrule_targs_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,n_63 = NULL;
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          j_63 = ATgetArgument(t, 0);
          {
            ATerm d_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_19);
      t = j_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          k_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_63;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm e_19 = ATgetArgument(t, 0);
          ATerm f_19 = ATgetArgument(t, 1);
          n_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_63;
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
                j_63 = ATgetArgument(t, 0);
                {
                  ATerm i_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_19);
            t = j_63;
            if(match_cons(t, sym_DynRuleId_1))
              {
                k_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = k_63;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_19 = ATgetArgument(t, 0);
                ATerm k_19 = ATgetArgument(t, 1);
                n_63 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = n_63;
          }
        else
          {
            t = g_19;
            if(match_cons(t, sym_AddDynRule_2))
              {
                j_63 = ATgetArgument(t, 0);
                {
                  ATerm l_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = j_63;
            if(match_cons(t, sym_DynRuleId_1))
              {
                k_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = k_63;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_19 = ATgetArgument(t, 0);
                ATerm n_19 = ATgetArgument(t, 1);
                n_63 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = n_63;
          }
      }
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm o_64 = NULL;
  ATerm o_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_64 = ATgetArgument(t, 0);
          {
            ATerm r_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_19);
      t = o_64;
    }
  else
    {
      t = o_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_64;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm u_64 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_64 = ATgetArgument(t, 0);
          {
            ATerm w_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_19);
      t = u_64;
    }
  else
    {
      t = u_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_64;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm y_63 = NULL;
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm z_19 = ATgetArgument(t, 0);
          ATerm a_20 = ATgetArgument(t, 1);
          y_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(y_19);
      t = y_63;
      t = map_1_0(c_4, t);
    }
  else
    {
      t = x_19;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm b_20 = ATgetArgument(t, 0);
          ATerm c_20 = ATgetArgument(t, 1);
          y_63 = ATgetArgument(t, 2);
          {
            ATerm d_20 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_63;
      t = map_1_0(d_4, t);
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm r_65 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_65);
  return(t);
}
static ATerm g_4 (ATerm t)
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
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_20);
          }
        else
          {
            t = g_20;
            {
              ATerm j_20 = t;
              int k_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_65 = ATgetArgument(t, 0);
                      u_65 = ATgetArgument(t, 1);
                      v_65 = ATgetArgument(t, 2);
                      w_65 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_65;
                  t = map_1_0(h_4, t);
                  LocalPopChoice(k_20);
                }
              else
                {
                  t = j_20;
                  {
                    ATerm n_20 = t;
                    int o_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_20);
                      }
                    else
                      {
                        t = n_20;
                        t = dynrule_targs_1_0(k_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm d_66 = NULL;
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_66 = ATgetArgument(t, 0);
          {
            ATerm r_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_20);
      t = d_66;
    }
  else
    {
      t = p_20;
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
static ATerm k_4 (ATerm t)
{
  t = map_1_0(o_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm i_66 = NULL;
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_66 = ATgetArgument(t, 0);
          {
            ATerm u_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_20);
      t = i_66;
    }
  else
    {
      t = s_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_66;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm m_66 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_66);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
                  ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_66 = ATgetArgument(t, 0);
                      p_66 = ATgetArgument(t, 1);
                      q_66 = ATgetArgument(t, 2);
                      r_66 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_66;
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
  ATerm y_66 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_66 = ATgetArgument(t, 0);
          {
            ATerm f_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_21);
      t = y_66;
    }
  else
    {
      t = d_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_66;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = map_1_0(v_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm d_67 = NULL;
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_67 = ATgetArgument(t, 0);
          {
            ATerm i_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_21);
      t = d_67;
    }
  else
    {
      t = g_21;
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
static ATerm w_4 (ATerm t)
{
  ATerm h_67 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_67);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            {
              ATerm o_21 = t;
              int r_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_67 = ATgetArgument(t, 0);
                      k_67 = ATgetArgument(t, 1);
                      l_67 = ATgetArgument(t, 2);
                      m_67 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_67;
                  t = map_1_0(y_4, t);
                  LocalPopChoice(r_21);
                }
              else
                {
                  t = o_21;
                  {
                    ATerm s_21 = t;
                    int t_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_21);
                      }
                    else
                      {
                        t = s_21;
                        t = dynrule_targs_1_0(a_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm t_67 = NULL;
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_67 = ATgetArgument(t, 0);
          {
            ATerm w_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_21);
      t = t_67;
    }
  else
    {
      t = u_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_67;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = map_1_0(d_5, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm y_67 = NULL;
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_67 = ATgetArgument(t, 0);
          {
            ATerm z_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_21);
      t = y_67;
    }
  else
    {
      t = x_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_67;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm c_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_68);
  return(t);
}
static ATerm k_5 (ATerm t)
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
                  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_68 = ATgetArgument(t, 0);
                      f_68 = ATgetArgument(t, 1);
                      g_68 = ATgetArgument(t, 2);
                      h_68 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_68;
                  t = map_1_0(l_5, t);
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
                        t = dynrule_targs_1_0(r_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm o_68 = NULL;
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_68 = ATgetArgument(t, 0);
          {
            ATerm k_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_22);
      t = o_68;
    }
  else
    {
      t = i_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_68;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = map_1_0(t_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm t_68 = NULL;
  ATerm l_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_68 = ATgetArgument(t, 0);
          {
            ATerm o_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_22);
      t = t_68;
    }
  else
    {
      t = l_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_68;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm x_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_68);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm r_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_22);
    }
  else
    {
      t = r_22;
      {
        ATerm w_22 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_23);
          }
        else
          {
            t = w_22;
            {
              ATerm f_23 = t;
              int g_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_68 = ATgetArgument(t, 0);
                      a_69 = ATgetArgument(t, 1);
                      b_69 = ATgetArgument(t, 2);
                      c_69 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_69;
                  t = map_1_0(y_5, t);
                  LocalPopChoice(g_23);
                }
              else
                {
                  t = f_23;
                  {
                    ATerm h_23 = t;
                    int k_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_23);
                      }
                    else
                      {
                        t = h_23;
                        t = dynrule_targs_1_0(z_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm j_69 = NULL;
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_69 = ATgetArgument(t, 0);
          {
            ATerm n_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_23);
      t = j_69;
    }
  else
    {
      t = l_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_69;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = map_1_0(a_6, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm o_69 = NULL;
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_69 = ATgetArgument(t, 0);
          {
            ATerm q_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_23);
      t = o_69;
    }
  else
    {
      t = o_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_69;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm o_65 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      o_65 = ATgetArgument(t, 0);
      t = o_65;
      t = free_vars_3_0(e_4, g_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          o_65 = ATgetArgument(t, 0);
          t = o_65;
          t = free_vars_3_0(p_4, q_4, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              o_65 = ATgetArgument(t, 0);
              t = o_65;
              t = free_vars_3_0(w_4, x_4, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  o_65 = ATgetArgument(t, 0);
                  t = o_65;
                  t = free_vars_3_0(h_5, k_5, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      o_65 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_65;
                  t = free_vars_3_0(v_5, x_5, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm m_5 (ATerm d_126 (ATerm), ATerm b_61, ATerm a_61, ATerm t)
{
  static ATerm g_70 (ATerm t);
  static ATerm g_70 (ATerm t)
  {
    ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL;
    b_70 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_61;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_70 = ATgetFirst((ATermList) t);
            d_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_70;
              {
                static ATerm k_6 (ATerm t);
                static ATerm k_6 (ATerm t)
                {
                  t = a_61;
                  return(t);
                }
                t = n_5(d_126, k_6, c_70, d_70, t);
              }
              t = g_70(t);
              LocalPopChoice(t_23);
            }
          else
            {
              t = s_23;
              {
                ATerm y_46 = NULL,l_47 = NULL,d_9 = NULL;
                t = SSLgetAnnotations(b_70);
                y_46 = t;
                t = d_70;
                t = g_70(t);
                l_47 = t;
                t = (ATerm) ATinsert(CheckATermList(l_47), c_70);
                d_9 = t;
                t = SSLsetAnnotations(d_9, y_46);
              }
            }
        }
      }
    return(t);
  }
  t = b_61;
  t = g_70(t);
  return(t);
}
ATerm foldr_3_0 (ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm k_129 (ATerm), ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
  l_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_70;
      t = i_129(t);
    }
  else
    {
      ATerm q_70 = NULL,r_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_70 = ATgetFirst((ATermList) t);
          n_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_70;
      t = k_129(t);
      q_70 = t;
      t = n_70;
      t = foldr_3_0(i_129, j_129, k_129, t);
      r_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_70, r_70);
      t = j_129(t);
    }
  return(t);
}
static ATerm n_5 (ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm f_61, ATerm e_61, ATerm t)
{
  t = h_126(t);
  {
    static ATerm n_6 (ATerm t);
    static ATerm n_6 (ATerm t)
    {
      ATerm u_70 = NULL;
      u_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_61, u_70);
      t = g_126(t);
      return(t);
    }
    t = fetch_1_0(n_6, t);
  }
  t = e_61;
  return(t);
}
static ATerm o_5 (ATerm y_125 (ATerm), ATerm z_60, ATerm y_60, ATerm t)
{
  static ATerm q_71 (ATerm t);
  static ATerm q_71 (ATerm t)
  {
    ATerm k_71 = NULL,l_71 = NULL,n_71 = NULL;
    k_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_71;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_71 = ATgetFirst((ATermList) t);
            n_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_23 = t;
          int x_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_71;
              {
                static ATerm u_6 (ATerm t);
                static ATerm u_6 (ATerm t)
                {
                  t = y_60;
                  return(t);
                }
                t = n_5(y_125, u_6, l_71, n_71, t);
              }
              t = q_71(t);
              LocalPopChoice(x_23);
            }
          else
            {
              t = w_23;
              {
                ATerm y_47 = NULL,c_48 = NULL,f_9 = NULL;
                t = SSLgetAnnotations(k_71);
                y_47 = t;
                t = n_71;
                t = q_71(t);
                c_48 = t;
                t = (ATerm) ATinsert(CheckATermList(c_48), l_71);
                f_9 = t;
                t = SSLsetAnnotations(f_9, y_47);
              }
            }
        }
      }
    return(t);
  }
  t = z_60;
  t = q_71(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_23 = ATgetArgument(t, 0);
      if(((ATgetType(z_23) != AT_LIST) || !(ATisEmpty(z_23))))
        _fail(t);
      {
        ATerm c_24 = ATgetArgument(t, 1);
        if(((ATgetType(c_24) != AT_LIST) || !(ATisEmpty(c_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_24 = ATgetArgument(t, 0);
      if(((ATgetType(d_24) == AT_LIST) && !(ATisEmpty(d_24))))
        {
          y_71 = ATgetFirst((ATermList) d_24);
          z_71 = (ATerm) ATgetNext((ATermList) d_24);
        }
      else
        _fail(t);
      {
        ATerm e_24 = ATgetArgument(t, 1);
        if(((ATgetType(e_24) == AT_LIST) && !(ATisEmpty(e_24))))
          {
            a_72 = ATgetFirst((ATermList) e_24);
            b_72 = (ATerm) ATgetNext((ATermList) e_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_71, a_72), (ATerm) ATmakeAppl(sym__2, z_71, b_72));
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL;
  if(match_cons(t, sym__2))
    {
      c_72 = ATgetArgument(t, 0);
      d_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_72), c_72);
  return(t);
}
static ATerm q_5 (ATerm j_780, ATerm o_780, ATerm h_76, ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL;
  t = SSL_explode_term(o_780);
  if(match_cons(t, sym__2))
    {
      t_71 = ATgetArgument(t, 0);
      v_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_780);
  if(match_cons(t, sym__2))
    {
      if((t_71 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_71, v_71);
  t = genzip_4_0(w_6, x_6, y_6, _id, t);
  w_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_71, h_76);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t)
{
  static ATerm f_72 (ATerm t);
  static ATerm f_72 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_113(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = j_113(t);
        t = f_72(t);
      }
    return(t);
  }
  t = f_72(t);
  return(t);
}
ATerm for_3_0 (ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm t)
{
  t = l_113(t);
  t = while_not_2_0(m_113, n_113, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm m_72 = NULL;
  m_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_72);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,j_9 = NULL;
  q_72 = t;
  if(match_cons(t, sym__2))
    {
      o_72 = ATgetArgument(t, 0);
      p_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_72);
  n_72 = t;
  t = p_72;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_72, p_72);
  j_9 = t;
  t = SSLsetAnnotations(j_9, n_72);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL;
  j_73 = t;
  if(match_cons(t, sym__2))
    {
      k_73 = ATgetArgument(t, 0);
      l_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_73 = ATgetFirst((ATermList) t);
      n_73 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_73(k_73, l_73, j_73, t);
            LocalPopChoice(k_24);
          }
        else
          {
            t = j_24;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_73), m_73), n_73);
          }
      }
    }
  else
    {
      t = x_73(k_73, l_73, j_73, t);
    }
  return(t);
}
static ATerm x_73 (ATerm r_72, ATerm s_72, ATerm t_72, ATerm t)
{
  ATerm u_72 = NULL,x_72 = NULL,k_9 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL;
  t = SSLgetAnnotations(t_72);
  u_72 = t;
  t = s_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_73 = ATgetFirst((ATermList) t);
      d_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_73;
  if(match_cons(t, sym__2))
    {
      b_73 = ATgetArgument(t, 0);
      c_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_73;
        if((b_73 != t))
          {
            _fail(t);
          }
        t = d_73;
        LocalPopChoice(n_24);
      }
    else
      {
        t = l_24;
        t = s_72;
        t = q_5(b_73, c_73, d_73, t);
      }
  }
  x_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_72, x_72);
  k_9 = t;
  t = SSLsetAnnotations(k_9, u_72);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm w_73 = NULL;
  if(match_cons(t, sym__2))
    {
      w_73 = ATgetArgument(t, 0);
      if((w_73 != ATgetArgument(t, 1)))
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
  ATerm o_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(b_7, d_7, e_7, t);
      LocalPopChoice(s_24);
    }
  else
    {
      t = o_24;
      {
        ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
        r_73 = t;
        if(match_cons(t, sym__2))
          {
            s_73 = ATgetArgument(t, 0);
            t_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_73;
        t = o_5(f_7, s_73, t_73, t);
      }
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL;
  if(match_cons(t, sym__2))
    {
      b_49 = ATgetArgument(t, 0);
      c_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(n_7, b_49, c_49, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm e_49 = NULL;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      if((e_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm o_49 = NULL,r_49 = NULL;
  if(match_cons(t, sym__2))
    {
      o_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(r_7, o_49, r_49, t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm s_49 = NULL;
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      if((s_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm l_74 (ATerm t);
  static ATerm l_74 (ATerm t)
  {
    ATerm u_24 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_133(t);
        LocalPopChoice(h_25);
      }
    else
      {
        t = u_24;
        {
          ATerm i_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_73 = NULL,a_74 = NULL,l_48 = NULL,t_48 = NULL;
              z_73 = t;
              t = b_133(t);
              a_74 = t;
              t = z_73;
              {
                static ATerm g_7 (ATerm t);
                static ATerm g_7 (ATerm t)
                {
                  ATerm c_74 = NULL;
                  t = l_74(t);
                  c_74 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_74, a_74);
                  t = diff_0_0(t);
                  return(t);
                }
                t = c_133(g_7, l_74, h_7, t);
              }
              t_48 = t;
              t = SSL_explode_term(t_48);
              if(match_cons(t, sym__2))
                {
                  ATerm k_25 = ATgetArgument(t, 0);
                  l_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_48;
              t = foldr_3_0(i_7, m_7, _id, t);
              LocalPopChoice(j_25);
            }
          else
            {
              t = i_25;
              {
                ATerm j_49 = NULL,k_49 = NULL;
                k_49 = t;
                t = SSL_explode_term(k_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_25 = ATgetArgument(t, 0);
                    j_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_49;
                t = foldr_3_0(p_7, q_7, l_74, t);
              }
            }
        }
      }
    return(t);
  }
  t = l_74(t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm y_74 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_74);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
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
                  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_75 = ATgetArgument(t, 0);
                      b_75 = ATgetArgument(t, 1);
                      c_75 = ATgetArgument(t, 2);
                      d_75 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_75;
                  t = map_1_0(k_8, t);
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
                        t = dynrule_targs_1_0(l_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm k_75 = NULL;
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_75 = ATgetArgument(t, 0);
          {
            ATerm w_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_25);
      t = k_75;
    }
  else
    {
      t = u_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_75;
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = map_1_0(m_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm p_75 = NULL;
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_75 = ATgetArgument(t, 0);
          {
            ATerm l_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_25);
      t = p_75;
    }
  else
    {
      t = y_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_75;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm r_74 = NULL,v_74 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      v_74 = ATgetArgument(t, 0);
      t = v_74;
      if(match_cons(t, sym_Rule_3))
        {
          r_74 = ATgetArgument(t, 0);
          {
            ATerm o_26 = ATgetArgument(t, 1);
          }
          {
            ATerm q_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_74;
      t = free_vars_3_0(s_7, v_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          v_74 = ATgetArgument(t, 0);
          {
            ATerm r_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_74;
    }
  return(t);
}
ATerm Var_1_0 (ATerm o_85 (ATerm), ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,n_9 = NULL;
  w_75 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_75);
  t_75 = t;
  t = u_75;
  t = o_85(t);
  v_75 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_75);
  n_9 = t;
  t = SSLsetAnnotations(n_9, t_75);
  return(t);
}
static ATerm s_5 (ATerm i_131 (ATerm), ATerm j_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_64, ATerm j_64, ATerm i_64, ATerm t)
{
  static ATerm n_8 (ATerm t);
  static ATerm o_8 (ATerm t);
  static ATerm n_8 (ATerm t)
  {
    ATerm y_75 = NULL;
    y_75 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_75, i_64);
    t = i_131(t);
    return(t);
  }
  static ATerm o_8 (ATerm t)
  {
    ATerm z_75 = NULL;
    z_75 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_75, j_64);
    t = i_131(t);
    return(t);
  }
  t = k_64;
  t = j_131(n_8, o_8, _id, t);
  return(t);
}
ATerm at_end_1_0 (ATerm a_124 (ATerm), ATerm t)
{
  static ATerm a_77 (ATerm t);
  static ATerm a_77 (ATerm t)
  {
    ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL;
    z_76 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_76 = ATgetFirst((ATermList) t);
        y_76 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_49 = NULL,e_50 = NULL,s_9 = NULL;
          t = SSLgetAnnotations(z_76);
          z_49 = t;
          t = y_76;
          t = a_77(t);
          e_50 = t;
          t = (ATerm) ATinsert(CheckATermList(e_50), x_76);
          s_9 = t;
          t = SSLsetAnnotations(s_9, z_49);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_76;
        t = a_124(t);
      }
    return(t);
  }
  t = a_77(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_76 = NULL,i_76 = NULL,j_76 = NULL;
  d_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_76;
    }
  else
    {
      static ATerm q_8 (ATerm t);
      static ATerm q_8 (ATerm t)
      {
        t = not_null(j_76);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_76 = ATgetFirst((ATermList) t);
          if(((j_76 != NULL) && (j_76 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_76;
      t = at_end_1_0(q_8, t);
    }
  return(t);
}
static ATerm m_77 (ATerm e_77, ATerm t)
{
  ATerm f_77 = NULL;
  t = SSL_explode_term(e_77);
  if(match_cons(t, sym__2))
    {
      ATerm u_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_77;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
  j_77 = t;
  if(match_cons(t, sym__2))
    {
      h_77 = ATgetArgument(t, 0);
      i_77 = ATgetArgument(t, 1);
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_8 (ATerm t);
            static ATerm r_8 (ATerm t)
            {
              t = i_77;
              return(t);
            }
            t = h_77;
            t = at_end_1_0(r_8, t);
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            t = m_77(j_77, t);
          }
      }
    }
  else
    {
      t = m_77(j_77, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm i_111 (ATerm), ATerm j_111 (ATerm), ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm t)
{
  static ATerm t_77 (ATerm t);
  static ATerm t_77 (ATerm t)
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_111(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        {
          ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,y_9 = NULL;
          t = j_111(t);
          s_77 = t;
          if(match_cons(t, sym__2))
            {
              o_77 = ATgetArgument(t, 0);
              p_77 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_77);
          n_77 = t;
          t = o_77;
          t = l_111(t);
          q_77 = t;
          t = p_77;
          t = t_77(t);
          r_77 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_77, r_77);
          y_9 = t;
          t = SSLsetAnnotations(y_9, n_77);
          t = k_111(t);
        }
      }
    return(t);
  }
  t = t_77(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm s_8 (ATerm t)
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
static ATerm t_8 (ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
        {
          b_78 = ATgetFirst((ATermList) h_27);
          c_78 = (ATerm) ATgetNext((ATermList) h_27);
        }
      else
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
          {
            d_78 = ATgetFirst((ATermList) i_27);
            e_78 = (ATerm) ATgetNext((ATermList) i_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_78, d_78), (ATerm) ATmakeAppl(sym__2, c_78, e_78));
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL;
  if(match_cons(t, sym__2))
    {
      f_78 = ATgetArgument(t, 0);
      g_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_78), f_78);
  return(t);
}
static ATerm w_5 (ATerm c_131 (ATerm), ATerm d_131 (ATerm (ATerm), ATerm), ATerm c_64, ATerm f_64, ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,a_78 = NULL;
  t = c_64;
  t = c_131(t);
  v_77 = t;
  t = map_1_0(new_0_0, t);
  w_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_77, w_77);
  t = genzip_4_0(s_8, t_8, u_8, _id, t);
  a_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_78, f_64);
  t = conc_0_0(t);
  x_77 = t;
  t = c_64;
  {
    static ATerm x_8 (ATerm t);
    static ATerm x_8 (ATerm t)
    {
      t = w_77;
      return(t);
    }
    t = d_131(x_8, t);
  }
  y_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_77, f_64, x_77);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL;
  n_78 = t;
  if(match_cons(t, sym__2))
    {
      o_78 = ATgetArgument(t, 0);
      p_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_78;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_78 = ATgetFirst((ATermList) t);
      r_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_78;
  if(match_cons(t, sym__2))
    {
      l_78 = ATgetArgument(t, 0);
      m_78 = ATgetArgument(t, 1);
      {
        ATerm j_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_78;
            if((o_78 != t))
              {
                _fail(t);
              }
            t = m_78;
            LocalPopChoice(l_27);
          }
        else
          {
            t = j_27;
            t = (ATerm) ATmakeAppl(sym__2, o_78, r_78);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, o_78, r_78);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm q_131 (ATerm), ATerm t)
{
  static ATerm n_79 (ATerm t);
  static ATerm n_79 (ATerm t)
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_131(t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        {
          ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
          static ATerm z_8 (ATerm t);
          static ATerm z_8 (ATerm t)
          {
            ATerm v_50 = NULL;
            v_50 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_50, not_null(m_79));
            t = n_79(t);
            return(t);
          }
          k_79 = t;
          if(match_cons(t, sym__2))
            {
              l_79 = ATgetArgument(t, 0);
              if(((m_79 != NULL) && (m_79 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                m_79 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_79;
          t = SRTS_all(z_8, t);
        }
      }
    return(t);
  }
  t = n_79(t);
  return(t);
}
ATerm rename_4_0 (ATerm x_130 (ATerm (ATerm), ATerm), ATerm y_130 (ATerm), ATerm z_130 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_131 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm r_79 = NULL;
  static ATerm g_80 (ATerm t);
  static ATerm g_80 (ATerm t)
  {
    static ATerm a_9 (ATerm t);
    static ATerm a_9 (ATerm t)
    {
      ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
      a_80 = t;
      if(match_cons(t, sym__2))
        {
          b_80 = ATgetArgument(t, 0);
          c_80 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_9 (ATerm t);
            static ATerm b_9 (ATerm t)
            {
              ATerm f_80 = NULL;
              f_80 = t;
              t = (ATerm) ATmakeAppl(sym__2, f_80, c_80);
              t = lookup_0_0(t);
              return(t);
            }
            t = b_80;
            t = x_130(b_9, t);
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            {
              ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
              t = a_80;
              t = w_5(y_130, a_131, b_80, c_80, t);
              if(match_cons(t, sym__3))
                {
                  e_51 = ATgetArgument(t, 0);
                  f_51 = ATgetArgument(t, 1);
                  g_51 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = s_5(g_80, z_130, e_51, f_51, g_51, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(a_9, t);
    return(t);
  }
  r_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_79, (ATerm) ATempty);
  t = g_80(t);
  return(t);
}
static ATerm c_9 (ATerm t)
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
            ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                m_80 = ATgetArgument(t, 0);
                n_80 = ATgetArgument(t, 1);
                o_80 = ATgetArgument(t, 2);
                p_80 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = o_80;
            t = map_1_0(e_9, t);
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            {
              ATerm w_27 = t;
              int x_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Bind8_0_0(t);
                  LocalPopChoice(x_27);
                }
              else
                {
                  t = w_27;
                  t = dynrule_targs_1_0(g_9, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm w_80 = NULL;
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_80 = ATgetArgument(t, 0);
          {
            ATerm b_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_28);
      t = w_80;
    }
  else
    {
      t = z_27;
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
static ATerm g_9 (ATerm t)
{
  t = map_1_0(h_9, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm b_81 = NULL;
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_81 = ATgetArgument(t, 0);
          {
            ATerm f_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_28);
      t = b_81;
    }
  else
    {
      t = c_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_81;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, c_9, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm v_31, ATerm w_31, ATerm t)
{
  ATerm e_81 = NULL;
  t = SSL_fputc(v_31, w_31);
  e_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_81);
  return(t);
}
static ATerm c_6 (ATerm b_30, ATerm c_30, ATerm t)
{
  ATerm f_81 = NULL;
  t = SSL_write_term_to_stream_text(b_30, c_30);
  f_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_81);
  return(t);
}
static ATerm e_6 (ATerm g_114 (ATerm), ATerm p_225, ATerm h_30, ATerm t)
{
  ATerm g_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_225, term_g_28);
  t = i_6(t);
  g_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_81, h_30);
  t = g_114(t);
  t = fclose_0_0(t);
  t = h_30;
  return(t);
}
static ATerm d_6 (ATerm x_29, ATerm y_29, ATerm t)
{
  ATerm h_81 = NULL;
  t = SSL_write_term_to_stream_baf(x_29, y_29);
  h_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_81);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      if(match_cons(h_28, sym_Stream_1))
        {
          o_81 = ATgetArgument(h_28, 0);
        }
      else
        _fail(t);
      p_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(o_81, p_81, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_28 = ATgetArgument(t, 0);
      if(match_cons(i_28, sym_Stream_1))
        {
          t_81 = ATgetArgument(i_28, 0);
        }
      else
        _fail(t);
      u_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(t_81, u_81, t);
  q_81 = t;
  t = term_k_28;
  r_81 = t;
  t = q_81;
  if(match_cons(t, sym_Stream_1))
    {
      s_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_28, q_81);
  t = b_6(r_81, s_81, t);
  return(t);
}
ATerm output_1_0 (ATerm h_136 (ATerm), ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL;
  t = h_136(t);
  j_81 = t;
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_81 = NULL,l_81 = NULL;
        t = term_n_28;
        k_81 = t;
        t = term_o_28;
        l_81 = t;
        t = term_p_28;
        t = o_6(k_81, l_81, t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = term_r_28;
      }
  }
  i_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_81, j_81);
  {
    ATerm s_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_81 = NULL,n_81 = NULL;
        t = term_n_28;
        m_81 = t;
        t = term_v_28;
        n_81 = t;
        t = term_w_28;
        t = o_6(m_81, n_81, t);
        t = (ATerm) ATmakeAppl(sym__2, i_81, j_81);
        LocalPopChoice(u_28);
        if(match_cons(t, sym__2))
          {
            ATerm x_28 = ATgetArgument(t, 0);
            ATerm z_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(l_9, i_81, j_81, t);
      }
    else
      {
        t = s_28;
        if(match_cons(t, sym__2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            ATerm d_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(m_9, i_81, j_81, t);
      }
  }
  return(t);
}
static ATerm i_82 (ATerm c_82, ATerm t)
{
  t = SSL_fclose(c_82);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_82 = NULL,g_82 = NULL;
  g_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_82 = ATgetArgument(t, 0);
      {
        ATerm e_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_82);
            LocalPopChoice(g_29);
          }
        else
          {
            t = e_29;
            t = i_82(g_82, t);
          }
      }
    }
  else
    {
      t = i_82(g_82, t);
    }
  return(t);
}
static ATerm f_6 (ATerm d_30, ATerm t)
{
  t = SSL_read_term_from_stream(d_30);
  return(t);
}
static ATerm g_6 (ATerm i_70, ATerm j_70, ATerm t)
{
  t = SSL_strcat(i_70, j_70);
  return(t);
}
static ATerm h_6 (ATerm x_31, ATerm y_31, ATerm t)
{
  ATerm j_82 = NULL;
  t = SSL_fopen(x_31, y_31);
  j_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_82 = NULL;
  t = SSL_stdin_stream();
  k_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_82 = NULL;
  t = SSL_stdout_stream();
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_82 = NULL;
  t = SSL_stderr_stream();
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_82);
  return(t);
}
static ATerm t_83 (ATerm s_82, ATerm t)
{
  ATerm t_82 = NULL;
  t = SSL_explode_term(s_82);
  if(match_cons(t, sym__2))
    {
      ATerm h_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_29 = ATgetArgument(t, 1);
        if(((ATgetType(i_29) == AT_LIST) && !(ATisEmpty(i_29))))
          {
            t_82 = ATgetFirst((ATermList) i_29);
            {
              ATerm m_29 = (ATerm) ATgetNext((ATermList) i_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_83 (ATerm w_82, ATerm x_82, ATerm y_82, ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL,e_83 = NULL,h_10 = NULL;
  t = SSLgetAnnotations(y_82);
  b_83 = t;
  t = w_82;
  if(match_cons(t, sym_Path_1))
    {
      e_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_83, x_82);
  h_10 = t;
  t = SSLsetAnnotations(h_10, b_83);
  if(match_cons(t, sym__2))
    {
      z_82 = ATgetArgument(t, 0);
      a_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(z_82, a_83, t);
  return(t);
}
static ATerm v_83 (ATerm g_83, ATerm h_83, ATerm i_83, ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL,o_83 = NULL,i_10 = NULL;
  t = SSLgetAnnotations(i_83);
  l_83 = t;
  t = SSL_is_string(g_83);
  o_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_83, h_83);
  i_10 = t;
  t = SSLsetAnnotations(i_10, l_83);
  if(match_cons(t, sym__2))
    {
      j_83 = ATgetArgument(t, 0);
      k_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(j_83, k_83, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL;
  q_83 = t;
  if(match_cons(t, sym__2))
    {
      r_83 = ATgetArgument(t, 0);
      s_83 = ATgetArgument(t, 1);
      {
        ATerm s_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_83(q_83, t);
            LocalPopChoice(t_29);
          }
        else
          {
            t = s_29;
            {
              ATerm w_29 = t;
              int a_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_83(r_83, s_83, q_83, t);
                  LocalPopChoice(a_30);
                }
              else
                {
                  t = w_29;
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
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_84, term_i_30);
        t = i_6(t);
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        {
          ATerm u_51 = NULL,v_51 = NULL;
          t = term_k_30;
          v_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_30, e_84);
          t = g_6(v_51, e_84, t);
          u_51 = t;
          t = SSL_perror(u_51);
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
  t = f_6(z_83, t);
  x_83 = t;
  t = y_83;
  t = fclose_0_0(t);
  t = x_83;
  return(t);
}
ATerm input_1_0 (ATerm i_136 (ATerm), ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_84 = NULL,i_84 = NULL;
      t = term_n_28;
      h_84 = t;
      t = term_r_30;
      i_84 = t;
      t = term_s_30;
      t = o_6(h_84, i_84, t);
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      t = term_t_30;
    }
  t = ReadFromFile_0_0(t);
  t = i_136(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL;
  t = term_n_28;
  j_84 = t;
  t = term_u_30;
  k_84 = t;
  t = term_v_30;
  t = o_6(j_84, k_84, t);
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
  t = term_r_28;
  o_84 = t;
  t = SSL_printnl(o_84, n_84);
  t = m_84;
  return(t);
}
ATerm map_1_0 (ATerm j_123 (ATerm), ATerm t)
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
        ATerm a_52 = NULL,d_52 = NULL,f_52 = NULL,l_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_85 = ATgetFirst((ATermList) t);
            f_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_85);
        a_52 = t;
        t = e_85;
        t = j_123(t);
        d_52 = t;
        t = f_85;
        t = g_85(t);
        f_52 = t;
        t = (ATerm) ATinsert(CheckATermList(f_52), d_52);
        l_10 = t;
        t = SSLsetAnnotations(l_10, a_52);
      }
    return(t);
  }
  t = g_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_85 = ATgetFirst((ATermList) t);
      k_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_85 = NULL,q_85 = NULL;
        static ATerm p_9 (ATerm t);
        static ATerm p_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_85)), not_null(q_85));
          return(t);
        }
        t = k_85;
        t = o_0(t);
        if(((p_85 != NULL) && (p_85 != t)))
          _fail(t);
        else
          p_85 = t;
        t = j_85;
        t = m_0(t);
        if(((q_85 != NULL) && (q_85 != t)))
          _fail(t);
        else
          q_85 = t;
        t = k_85;
        t = reverse_acc_2_0(m_0, p_9, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_31;
      t = o_0(t);
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL,n_10 = NULL;
  b_86 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_86);
  z_85 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_86);
  n_10 = t;
  t = SSLsetAnnotations(n_10, z_85);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm f_86 = NULL;
  f_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_86), term_b_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm t)
{
  ATerm v_85 = NULL,w_85 = NULL;
  ATerm c_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_85 = NULL,y_85 = NULL;
      t = term_n_28;
      x_85 = t;
      t = term_u_30;
      y_85 = t;
      t = term_v_30;
      t = o_6(x_85, y_85, t);
      LocalPopChoice(e_31);
    }
  else
    {
      t = c_31;
      t = fetch_1_0(q_9, t);
    }
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_138(t);
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
  v_85 = t;
  t = term_j_31;
  w_85 = t;
  t = term_k_31;
  t = o_6(v_85, w_85, t);
  t = reverse_acc_2_0(_id, r_9, t);
  t = map_1_0(t_9, t);
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_86 = NULL;
        t = h_138(t);
        g_86 = t;
        t = (ATerm) ATinsert(CheckATermList(g_86), term_n_31);
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
static ATerm u_9 (ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL,r_10 = NULL;
  o_86 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_86);
  m_86 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_86);
  r_10 = t;
  t = SSLsetAnnotations(r_10, m_86);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_86 = NULL;
  j_86 = t;
  {
    ATerm o_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_86 = NULL,l_86 = NULL;
        t = term_n_28;
        k_86 = t;
        t = term_u_30;
        l_86 = t;
        t = term_v_30;
        t = o_6(k_86, l_86, t);
        LocalPopChoice(q_31);
      }
    else
      {
        t = o_31;
        t = fetch_1_0(u_9, t);
      }
  }
  t = j_86;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm q_86 = NULL;
  q_86 = t;
  if(match_string(t, "-k"))
    {
      t = q_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_86;
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm r_86 = NULL,s_86 = NULL,t_86 = NULL;
  r_86 = t;
  t = SSL_string_to_int(r_86);
  s_86 = t;
  t = term_r_31;
  t_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_31, s_86);
  t = r_6(t_86, s_86, t);
  t = r_86;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_9, w_9, x_9, t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm v_86 = NULL;
  v_86 = t;
  if(match_string(t, "-S"))
    {
      t = v_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_86;
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm w_86 = NULL,x_86 = NULL;
  t = term_t_31;
  w_86 = t;
  t = term_z_31;
  x_86 = t;
  t = term_a_32;
  t = r_6(w_86, x_86, t);
  t = term_b_32;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_c_32;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL;
  y_86 = t;
  t = SSL_string_to_int(y_86);
  z_86 = t;
  t = term_t_31;
  a_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_31, z_86);
  t = r_6(a_87, z_86, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_86);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_e_32;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL;
  t = term_g_32;
  b_87 = t;
  t = term_a_31;
  c_87 = t;
  t = term_i_32;
  t = r_6(b_87, c_87, t);
  t = term_j_32;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_o_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_9, a_10, b_10, t);
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_10, d_10, e_10, t);
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            t = Option_3_0(f_10, j_10, k_10, t);
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm r_35, ATerm s_35, ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL;
  t = term_n_28;
  d_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, r_35, s_35);
  t = lookup_table_0_1(d_87, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(r_35, s_35, e_87, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, r_35, s_35);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_87 = NULL,l_87 = NULL,m_87 = NULL;
      t = term_a_31;
      t = g_0(t);
      k_87 = t;
      t = term_i_31;
      l_87 = t;
      t = term_j_31;
      m_87 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, k_87);
      t = p_6(l_87, m_87, k_87, t);
      _fail(t);
    }
  else
    {
      ATerm p_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_87 = ATgetFirst((ATermList) t);
          j_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_87;
      t = b_0(t);
      t = term_a_31;
      t = d_0(t);
      p_87 = t;
      t = (ATerm) ATinsert(CheckATermList(j_87), p_87);
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm r_87 = NULL;
  r_87 = t;
  if(match_string(t, "-o"))
    {
      t = r_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_87;
    }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm s_87 = NULL,t_87 = NULL;
  s_87 = t;
  t = term_o_28;
  t_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_28, s_87);
  t = r_6(t_87, s_87, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_87);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_10, o_10, p_10, t);
  return(t);
}
static ATerm p_6 (ATerm i_41, ATerm j_41, ATerm h_41, ATerm t)
{
  ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL;
  v_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_41, j_41);
  {
    ATerm v_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_32 = ATgetArgument(t, 0);
            ATerm z_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_41, j_41);
        t = o_6(i_41, j_41, t);
        LocalPopChoice(x_32);
      }
    else
      {
        t = v_32;
        t = (ATerm) ATempty;
      }
  }
  w_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_41, j_41, (ATerm) ATinsert(CheckATermList(w_87), h_41));
  t = lookup_table_0_1(i_41, t);
  z_87 = t;
  t = (ATerm) ATinsert(CheckATermList(w_87), h_41);
  x_87 = t;
  t = z_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(j_41, x_87, y_87, t);
  t = v_87;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
      t = term_a_31;
      t = l_0(t);
      k_88 = t;
      t = term_i_31;
      l_88 = t;
      t = term_j_31;
      m_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, k_88);
      t = p_6(l_88, m_88, k_88, t);
      _fail(t);
    }
  else
    {
      ATerm q_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_88 = ATgetFirst((ATermList) t);
          h_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_88;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_88 = ATgetFirst((ATermList) t);
          j_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_88;
      t = h_0(t);
      t = i_88;
      t = j_0(t);
      q_88 = t;
      t = (ATerm) ATinsert(CheckATermList(j_88), q_88);
    }
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm s_88 = NULL;
  s_88 = t;
  if(match_string(t, "-i"))
    {
      t = s_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_88;
    }
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL;
  t_88 = t;
  t = term_r_30;
  u_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, t_88);
  t = r_6(u_88, t_88, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_88);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_a_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_10, s_10, v_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL,y_88 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_31;
  t = whoami_0_0(t);
  v_88 = t;
  t = term_b_33;
  x_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_33), v_88);
  y_88 = t;
  t = SSL_printnl(x_88, y_88);
  t = term_f_33;
  w_88 = t;
  t = SSL_exit(w_88);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_88 = NULL,a_89 = NULL;
  t = term_n_28;
  z_88 = t;
  t = term_u_30;
  a_89 = t;
  t = term_v_30;
  t = o_6(z_88, a_89, t);
  return(t);
}
static ATerm j_6 (ATerm q_38, ATerm r_38, ATerm t)
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_38, r_38);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      t = SSL_addr(q_38, r_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm t)
{
  ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL;
  c_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_89;
      t = g_129(t);
    }
  else
    {
      ATerm h_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_89 = ATgetFirst((ATermList) t);
          e_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_89;
      t = foldr_2_0(g_129, h_129, t);
      h_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_89, h_89);
      t = h_129(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_z_31;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm y_52 = NULL,c_53 = NULL;
  if(match_cons(t, sym__2))
    {
      y_52 = ATgetArgument(t, 0);
      c_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(y_52, c_53, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_89 = NULL,p_52 = NULL,t_52 = NULL;
  t = times_0_0(t);
  t_52 = t;
  t = SSL_explode_term(t_52);
  if(match_cons(t, sym__2))
    {
      ATerm i_33 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_52;
  t = foldr_2_0(w_10, x_10, t);
  k_89 = t;
  t = SSL_TicksToSeconds(k_89);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_89 = NULL,w_89 = NULL,x_89 = NULL;
  v_89 = t;
  if(match_cons(t, sym__2))
    {
      w_89 = ATgetArgument(t, 0);
      x_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_89;
        if((w_89 != t))
          {
            _fail(t);
          }
        t = v_89;
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = (ATerm) ATmakeAppl(sym__2, w_89, x_89);
        {
          ATerm l_33 = t;
          int m_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_89, x_89);
              LocalPopChoice(m_33);
            }
          else
            {
              t = l_33;
              t = SSL_gtr(w_89, x_89);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_89, x_89);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  ATerm b_90 = NULL;
  b_90 = t;
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL;
        t = term_n_28;
        e_90 = t;
        t = term_t_31;
        f_90 = t;
        t = term_p_33;
        t = o_6(e_90, f_90, t);
        d_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_90, term_f_33);
        t = geq_0_0(t);
        t = b_90;
        t = x_115(t);
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        t = b_90;
      }
  }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,k_90 = NULL,l_90 = NULL;
  t = run_time_0_0(t);
  h_90 = t;
  t = term_a_31;
  t = whoami_0_0(t);
  i_90 = t;
  t = term_b_33;
  k_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_33), h_90), term_q_33), i_90);
  l_90 = t;
  t = SSL_printnl(k_90, l_90);
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_33), h_90), term_q_33), i_90));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_90 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_31;
  m_90 = t;
  t = SSL_exit(m_90);
  return(t);
}
static ATerm s_6 (ATerm t_45, ATerm u_45, ATerm v_45, ATerm t)
{
  ATerm n_90 = NULL;
  t = SSL_hashtable_put(v_45, t_45, u_45);
  n_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_90);
  return(t);
}
ATerm lookup_table_0_1 (ATerm u_42, ATerm t)
{
  ATerm w_90 = NULL;
  t = table_hashtable_0_0(t);
  w_90 = t;
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_53 = NULL;
        t = w_90;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_6(u_42, w_53, t);
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        {
          ATerm b_54 = NULL;
          t = u_42;
          t = table_create_0_0(t);
          t = w_90;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_6(u_42, b_54, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm b_46, ATerm c_46, ATerm t)
{
  ATerm z_90 = NULL;
  t = SSL_hashtable_create(b_46, c_46);
  z_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_90);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL,e_91 = NULL,f_91 = NULL;
  a_91 = t;
  t = term_u_33;
  e_91 = t;
  t = term_v_33;
  f_91 = t;
  t = a_91;
  t = new_hashtable_0_2(e_91, f_91, t);
  b_91 = t;
  t = a_91;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(a_91, b_91, c_91, t);
  t = a_91;
  return(t);
}
static ATerm l_6 (ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm g_91 = NULL;
  t = SSL_hashtable_remove(z_45, y_45);
  g_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_91);
  return(t);
}
static ATerm m_6 (ATerm d_46, ATerm t)
{
  ATerm h_91 = NULL;
  t = SSL_hashtable_destroy(d_46);
  h_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_91);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_91 = NULL;
  t = SSL_table_hashtable();
  i_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_91);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL,m_91 = NULL;
  j_91 = t;
  t = table_hashtable_0_0(t);
  k_91 = t;
  t = lookup_table_0_1(j_91, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(m_91, t);
  t = k_91;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(j_91, l_91, t);
  t = j_91;
  return(t);
}
ATerm fetch_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  static ATerm l_92 (ATerm t);
  static ATerm l_92 (ATerm t)
  {
    ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL;
    i_92 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_92 = ATgetFirst((ATermList) t);
        k_92 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_33 = t;
      int x_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_54 = NULL,r_54 = NULL,t_10 = NULL;
          t = SSLgetAnnotations(i_92);
          g_54 = t;
          t = j_92;
          t = t_123(t);
          r_54 = t;
          t = (ATerm) ATinsert(CheckATermList(k_92), r_54);
          t_10 = t;
          t = SSLsetAnnotations(t_10, g_54);
          LocalPopChoice(x_33);
        }
      else
        {
          t = w_33;
          {
            ATerm f_55 = NULL,q_55 = NULL,u_10 = NULL;
            t = SSLgetAnnotations(i_92);
            f_55 = t;
            t = k_92;
            t = l_92(t);
            q_55 = t;
            t = (ATerm) ATinsert(CheckATermList(q_55), j_92);
            u_10 = t;
            t = SSLsetAnnotations(u_10, f_55);
          }
        }
    }
    return(t);
  }
  t = l_92(t);
  return(t);
}
static ATerm t_6 (ATerm w_45, ATerm x_45, ATerm t)
{
  t = SSL_hashtable_get(x_45, w_45);
  return(t);
}
static ATerm o_6 (ATerm b_43, ATerm c_43, ATerm t)
{
  ATerm o_92 = NULL;
  t = lookup_table_0_1(b_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(c_43, o_92, t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL;
  t = term_y_33;
  q_92 = t;
  t = term_a_31;
  r_92 = t;
  t = term_z_33;
  t = r_6(q_92, r_92, t);
  return(t);
}
static ATerm l_11 (ATerm t)
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
static ATerm q_11 (ATerm t)
{
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL;
  t = term_y_33;
  u_92 = t;
  t = term_a_31;
  v_92 = t;
  t = term_z_33;
  t = r_6(u_92, v_92, t);
  t = term_b_34;
  s_92 = t;
  t = term_a_31;
  t_92 = t;
  t = term_c_34;
  t = r_6(s_92, t_92, t);
  t = term_d_34;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_e_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_11, h_11, l_11, t);
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      t = Option_3_0(n_11, q_11, r_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_92 (ATerm), ATerm b_92 (ATerm), ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL,a_11 = NULL;
  b_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_92 = ATgetFirst((ATermList) t);
      y_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_93);
  w_92 = t;
  t = x_92;
  t = a_92(t);
  z_92 = t;
  t = y_92;
  t = b_92(t);
  a_93 = t;
  t = (ATerm) ATinsert(CheckATermList(a_93), z_92);
  a_11 = t;
  t = SSLsetAnnotations(a_11, w_92);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_138 (ATerm), ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,l_93 = NULL,m_93 = NULL,g_11 = NULL;
  g_93 = t;
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_34;
        t = b_138(t);
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
      }
  }
  t = g_93;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_93 = ATgetFirst((ATermList) t);
      j_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_93);
  h_93 = t;
  t = term_u_30;
  m_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, i_93);
  t = r_6(m_93, i_93, t);
  t = j_93;
  {
    static ATerm w_93 (ATerm t);
    static ATerm w_93 (ATerm t)
    {
      ATerm n_34 = t;
      int p_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_34 = t;
          int s_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_93 = NULL;
              p_93 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_93;
              LocalPopChoice(s_34);
            }
          else
            {
              t = q_34;
              t = b_138(t);
              t = Cons_2_0(_id, w_93, t);
            }
          LocalPopChoice(p_34);
        }
      else
        {
          t = n_34;
          {
            ATerm s_93 = NULL,t_93 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_93 = ATgetFirst((ATermList) t);
                t_93 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_93), (ATerm) ATmakeAppl(sym_Undefined_1, s_93));
          }
        }
      return(t);
    }
    t = w_93(t);
  }
  l_93 = t;
  t = (ATerm) ATinsert(CheckATermList(l_93), (ATerm) ATmakeAppl(sym_Program_1, i_93));
  g_11 = t;
  t = SSLsetAnnotations(g_11, h_93);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm j_94 = NULL;
  j_94 = t;
  if(match_string(t, "--help"))
    {
      t = j_94;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_94;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_94;
        }
    }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm k_94 = NULL,l_94 = NULL;
  t = term_u_34;
  k_94 = t;
  t = term_a_31;
  l_94 = t;
  t = term_y_34;
  t = r_6(k_94, l_94, t);
  t = term_a_35;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_b_35;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm y_137 (ATerm), ATerm z_137 (ATerm), ATerm a_138 (ATerm), ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL;
  d_94 = t;
  t = term_i_31;
  e_94 = t;
  t = term_c_35;
  t = lookup_table_0_1(e_94, t);
  i_94 = t;
  t = term_j_31;
  f_94 = t;
  t = (ATerm) ATempty;
  g_94 = t;
  t = i_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(f_94, g_94, h_94, t);
  t = d_94;
  {
    static ATerm s_11 (ATerm t);
    static ATerm s_11 (ATerm t)
    {
      ATerm d_35 = t;
      int e_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_137(t);
          LocalPopChoice(e_35);
        }
      else
        {
          t = d_35;
          {
            ATerm f_35 = t;
            int g_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_11, u_11, v_11, t);
                LocalPopChoice(g_35);
              }
            else
              {
                t = f_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_11, t);
  }
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_94 = NULL;
        w_94 = t;
        {
          ATerm l_35 = t;
          int m_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_56 = NULL;
              t = w_94;
              {
                ATerm n_35 = t;
                int o_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_56 = NULL,k_56 = NULL;
                    t = term_n_28;
                    f_56 = t;
                    t = term_u_34;
                    k_56 = t;
                    t = term_p_35;
                    t = o_6(f_56, k_56, t);
                    LocalPopChoice(o_35);
                  }
                else
                  {
                    t = n_35;
                    t = fetch_1_0(w_11, t);
                  }
              }
              t = w_94;
              t = z_137(t);
              t = term_z_31;
              e_56 = t;
              t = SSL_exit(e_56);
              LocalPopChoice(m_35);
            }
          else
            {
              t = l_35;
              {
                ATerm u_56 = NULL,v_56 = NULL,x_56 = NULL;
                t = term_n_28;
                v_56 = t;
                t = term_y_33;
                x_56 = t;
                t = term_q_35;
                t = o_6(v_56, x_56, t);
                t = w_94;
                t = a_138(t);
                t = term_z_31;
                u_56 = t;
                t = SSL_exit(u_56);
              }
            }
        }
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        {
          ATerm t_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL;
              static ATerm y_11 (ATerm t);
              static ATerm y_11 (ATerm t)
              {
                ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL,p_11 = NULL;
                c_95 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_95 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_95);
                a_95 = t;
                t = b_95;
                if(((b_94 != NULL) && (b_94 != t)))
                  _fail(t);
                else
                  b_94 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_95);
                p_11 = t;
                t = SSLsetAnnotations(p_11, a_95);
                return(t);
              }
              t = fetch_1_0(y_11, t);
              t = term_b_33;
              y_94 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_94)), term_v_35);
              z_94 = t;
              t = SSL_printnl(y_94, z_94);
              t = (ATerm) ATmakeAppl(sym__2, term_b_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_94)), term_v_35));
              t = z_137(t);
              t = term_f_33;
              x_94 = t;
              t = SSL_exit(x_94);
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
            }
        }
      }
  }
  c_94 = t;
  t = term_i_31;
  t = table_destroy_0_0(t);
  t = c_94;
  return(t);
}
ATerm option_wrap_5_0 (ATerm b_136 (ATerm), ATerm c_136 (ATerm), ATerm d_136 (ATerm), ATerm e_136 (ATerm), ATerm f_136 (ATerm), ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL;
  t = parse_options_3_0(b_136, c_136, d_136, t);
  h_95 = t;
  t = term_w_35;
  t = table_create_0_0(t);
  t = term_w_35;
  i_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_35, term_x_35, h_95);
  t = lookup_table_0_1(i_95, t);
  l_95 = t;
  t = term_x_35;
  j_95 = t;
  t = l_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(j_95, h_95, k_95, t);
  t = h_95;
  t = e_136(t);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_136(t);
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
static ATerm z_11 (ATerm t)
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
static ATerm e_12 (ATerm t)
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
  ATerm n_95 = NULL,o_95 = NULL;
  t = term_v_28;
  n_95 = t;
  t = term_a_31;
  o_95 = t;
  t = term_i_36;
  t = r_6(n_95, o_95, t);
  t = term_j_36;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_l_36;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = output_1_0(strename_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(z_11, default_system_usage_0_0, default_system_about_0_0, _id, e_12, t);
  return(t);
}
