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
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_z_34;
ATerm term_u_34;
ATerm term_s_34;
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
ATerm term_e_33;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_t_32;
ATerm term_k_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_p_30;
ATerm term_l_30;
ATerm term_h_30;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
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
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_p_28);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_w_28);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_p_30);
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
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_i_31, term_j_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym__2, term_x_31, term_z_31);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_31);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_a_31);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_x_31);
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
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym__2, term_s_34, term_a_31);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, (ATerm) ATempty);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_s_34);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_y_33);
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
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm spaste_1_0 (ATerm u_100 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm z_100 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_5 (ATerm y_22, ATerm x_22, ATerm t);
ATerm SVar_1_0 (ATerm b_81 (ATerm), ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm e_3 (ATerm t);
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
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm tpaste_1_0 (ATerm q_100 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm a_101 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm m_5 (ATerm b_120 (ATerm), ATerm u_59, ATerm t_59, ATerm t);
ATerm foldr_3_0 (ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm i_123 (ATerm), ATerm t);
static ATerm n_5 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm y_59, ATerm x_59, ATerm t);
static ATerm o_5 (ATerm w_119 (ATerm), ATerm s_59, ATerm r_59, ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm q_5 (ATerm r_758, ATerm w_758, ATerm y_74, ATerm t);
ATerm while_not_2_0 (ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm t);
ATerm for_3_0 (ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm w_73 (ATerm q_72, ATerm r_72, ATerm s_72, ATerm t);
static ATerm f_7 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm free_vars_3_0 (ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm a_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm x_80 (ATerm), ATerm t);
static ATerm s_5 (ATerm g_125 (ATerm), ATerm h_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm b_63, ATerm a_63, ATerm z_62, ATerm t);
ATerm at_end_1_0 (ATerm y_117 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_77 (ATerm d_77, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm w_5 (ATerm a_125 (ATerm), ATerm b_125 (ATerm (ATerm), ATerm), ATerm t_62, ATerm w_62, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm o_125 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm v_124 (ATerm (ATerm), ATerm), ATerm w_124 (ATerm), ATerm x_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_124 (ATerm (ATerm), ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm i_9 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm b_6 (ATerm k_31, ATerm l_31, ATerm t);
static ATerm c_6 (ATerm q_29, ATerm r_29, ATerm t);
static ATerm e_6 (ATerm q_109 (ATerm), ATerm s_218, ATerm w_29, ATerm t);
static ATerm d_6 (ATerm m_29, ATerm n_29, ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
ATerm output_1_0 (ATerm e_130 (ATerm), ATerm t);
static ATerm j_82 (ATerm d_82, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_6 (ATerm s_29, ATerm t);
static ATerm g_6 (ATerm x_68, ATerm y_68, ATerm t);
static ATerm h_6 (ATerm m_31, ATerm n_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_83 (ATerm t_82, ATerm t);
static ATerm v_83 (ATerm x_82, ATerm y_82, ATerm z_82, ATerm t);
static ATerm w_83 (ATerm h_83, ATerm i_83, ATerm j_83, ATerm t);
static ATerm i_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm f_130 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm h_117 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm default_system_usage_2_0 (ATerm d_132 (ATerm), ATerm e_132 (ATerm), ATerm t);
static ATerm u_9 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_6 (ATerm g_35, ATerm h_35, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm l_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_6 (ATerm u_40, ATerm v_40, ATerm t_40, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm r_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_6 (ATerm c_38, ATerm d_38, ATerm t);
ATerm foldr_2_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm h_111 (ATerm), ATerm t);
static ATerm a_11 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_6 (ATerm m_45, ATerm n_45, ATerm o_45, ATerm t);
ATerm lookup_table_0_1 (ATerm g_42, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_45, ATerm v_45, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_6 (ATerm r_45, ATerm s_45, ATerm t);
static ATerm m_6 (ATerm w_45, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_117 (ATerm), ATerm t);
static ATerm t_6 (ATerm p_45, ATerm q_45, ATerm t);
static ATerm o_6 (ATerm n_42, ATerm o_42, ATerm t);
static ATerm c_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_131 (ATerm), ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm parse_options_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm t);
static ATerm e_12 (ATerm t);
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
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_12 = ATgetArgument(t, 0);
      if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
        {
          r_0 = ATgetFirst((ATermList) q_12);
          s_0 = (ATerm) ATgetNext((ATermList) q_12);
        }
      else
        _fail(t);
      {
        ATerm r_12 = ATgetArgument(t, 1);
        if(((ATgetType(r_12) == AT_LIST) && !(ATisEmpty(r_12))))
          {
            t_0 = ATgetFirst((ATermList) r_12);
            u_0 = (ATerm) ATgetNext((ATermList) r_12);
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
    ATerm s_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm v_12 = ATgetArgument(t, 0);
            a_1 = ATgetArgument(t, 1);
            b_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(u_12);
        t = (ATerm) ATmakeAppl(sym_SDef_3, d_1, a_1, b_1);
      }
    else
      {
        t = s_12;
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
        ATerm f_13 = ATgetArgument(t, 1);
        if(((ATgetType(f_13) != AT_LIST) || !(ATisEmpty(f_13))))
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
  ATerm q_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_13 = ATgetArgument(t, 0);
      if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
        {
          q_2 = ATgetFirst((ATermList) h_13);
          t_2 = (ATerm) ATgetNext((ATermList) h_13);
        }
      else
        _fail(t);
      {
        ATerm i_13 = ATgetArgument(t, 1);
        if(((ATgetType(i_13) == AT_LIST) && !(ATisEmpty(i_13))))
          {
            u_2 = ATgetFirst((ATermList) i_13);
            v_2 = (ATerm) ATgetNext((ATermList) i_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_2, u_2), (ATerm) ATmakeAppl(sym__2, t_2, v_2));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      w_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_2), w_2);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm z_2 = NULL,c_3 = NULL,f_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      f_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_2;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_3);
      }
    else
      {
        t = j_13;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_13 = ATgetArgument(t, 0);
            c_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_3, c_3);
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
  ATerm b_5 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_13 = ATgetArgument(t, 0);
      if(((ATgetType(p_13) == AT_LIST) && !(ATisEmpty(p_13))))
        {
          b_5 = ATgetFirst((ATermList) p_13);
          c_5 = (ATerm) ATgetNext((ATermList) p_13);
        }
      else
        _fail(t);
      {
        ATerm q_13 = ATgetArgument(t, 1);
        if(((ATgetType(q_13) == AT_LIST) && !(ATisEmpty(q_13))))
          {
            e_5 = ATgetFirst((ATermList) q_13);
            f_5 = (ATerm) ATgetNext((ATermList) q_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_5, e_5), (ATerm) ATmakeAppl(sym__2, c_5, f_5));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL;
  if(match_cons(t, sym__2))
    {
      g_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_5), g_5);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm k_5 = NULL,u_5 = NULL,x_5 = NULL;
  if(match_cons(t, sym__2))
    {
      k_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_5);
      }
    else
      {
        t = r_13;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_13 = ATgetArgument(t, 0);
            u_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_5, u_5);
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
  ATerm f_8 = NULL,g_8 = NULL,p_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_14 = ATgetArgument(t, 0);
      if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
        {
          f_8 = ATgetFirst((ATermList) a_14);
          g_8 = (ATerm) ATgetNext((ATermList) a_14);
        }
      else
        _fail(t);
      {
        ATerm b_14 = ATgetArgument(t, 1);
        if(((ATgetType(b_14) == AT_LIST) && !(ATisEmpty(b_14))))
          {
            p_8 = ATgetFirst((ATermList) b_14);
            v_8 = (ATerm) ATgetNext((ATermList) b_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_8, p_8), (ATerm) ATmakeAppl(sym__2, g_8, v_8));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL;
  if(match_cons(t, sym__2))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_8), w_8);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm h_9 = NULL,o_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__2))
    {
      h_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_9;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_9);
      }
    else
      {
        t = c_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_14 = ATgetArgument(t, 0);
            o_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_9, o_9);
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
  ATerm d_11 = NULL,f_11 = NULL,i_11 = NULL,j_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_14 = ATgetArgument(t, 0);
      if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
        {
          d_11 = ATgetFirst((ATermList) i_14);
          f_11 = (ATerm) ATgetNext((ATermList) i_14);
        }
      else
        _fail(t);
      {
        ATerm j_14 = ATgetArgument(t, 1);
        if(((ATgetType(j_14) == AT_LIST) && !(ATisEmpty(j_14))))
          {
            i_11 = ATgetFirst((ATermList) j_14);
            j_11 = (ATerm) ATgetNext((ATermList) j_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_11, i_11), (ATerm) ATmakeAppl(sym__2, f_11, j_11));
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  if(match_cons(t, sym__2))
    {
      k_11 = ATgetArgument(t, 0);
      l_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_11), k_11);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm n_11 = NULL,x_11 = NULL,y_11 = NULL;
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      y_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_11);
      }
    else
      {
        t = n_14;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_14 = ATgetArgument(t, 0);
            x_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_11, x_11);
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_13);
      }
    else
      {
        t = w_14;
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
ATerm spaste_1_0 (ATerm u_100 (ATerm), ATerm t)
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
            ATerm e_0 = NULL,n_0 = NULL,p_0 = NULL,m_1 = NULL;
            t = SSLgetAnnotations(a_12);
            e_0 = t;
            t = b_12;
            t = u_100(t);
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
                ATerm i_2 = NULL,m_2 = NULL,n_2 = NULL,n_1 = NULL;
                t = SSLgetAnnotations(a_12);
                i_2 = t;
                t = c_12;
                t = u_100(t);
                n_2 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_12, n_2);
                t = genzip_4_0(k_0, q_0, x_0, z_0, t);
                m_2 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, b_12, m_2, d_12);
                n_1 = t;
                t = SSLsetAnnotations(n_1, i_2);
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
                    ATerm o_4 = NULL,u_4 = NULL,y_4 = NULL,o_1 = NULL;
                    t = SSLgetAnnotations(a_12);
                    o_4 = t;
                    t = c_12;
                    t = u_100(t);
                    y_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_12, y_4);
                    t = genzip_4_0(e_1, f_1, g_1, h_1, t);
                    u_4 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, b_12, u_4, d_12, z_11);
                    o_1 = t;
                    t = SSLsetAnnotations(o_1, o_4);
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
                        ATerm p_7 = NULL,u_7 = NULL,v_7 = NULL,p_1 = NULL;
                        t = SSLgetAnnotations(a_12);
                        p_7 = t;
                        t = c_12;
                        t = u_100(t);
                        v_7 = t;
                        t = (ATerm) ATmakeAppl(sym__2, c_12, v_7);
                        t = genzip_4_0(i_1, j_1, k_1, l_1, t);
                        u_7 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_12, u_7, d_12, z_11);
                        p_1 = t;
                        t = SSLsetAnnotations(p_1, p_7);
                      }
                    }
                  else
                    {
                      ATerm p_10 = NULL,z_10 = NULL,b_11 = NULL,q_1 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          b_12 = ATgetArgument(t, 0);
                          c_12 = ATgetArgument(t, 1);
                          d_12 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(a_12);
                      p_10 = t;
                      t = c_12;
                      t = u_100(t);
                      b_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_12, b_11);
                      t = genzip_4_0(s_1, t_1, u_1, v_1, t);
                      z_10 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, b_12, z_10, d_12);
                      q_1 = t;
                      t = SSLsetAnnotations(q_1, p_10);
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
              ATerm k_12 = NULL,l_12 = NULL;
              l_12 = t;
              t = u_100(t);
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
            t = f_15;
            {
              ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,t_12 = NULL,e_13 = NULL,r_1 = NULL;
              k_14 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  l_14 = ATgetArgument(t, 0);
                  m_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_14);
              t_12 = t;
              t = l_14;
              t = u_100(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_13 = ATgetFirst((ATermList) t);
                  {
                    ATerm h_15 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, e_13, m_14);
              r_1 = t;
              t = SSLsetAnnotations(r_1, t_12);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,a_25 = NULL,e_25 = NULL,f_25 = NULL;
  a_25 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
      {
        ATerm u_13 = NULL,x_13 = NULL,y_13 = NULL,d_2 = NULL;
        t = SSLgetAnnotations(a_25);
        u_13 = t;
        t = e_25;
        t = v_100(t);
        x_13 = t;
        t = f_25;
        t = v_100(t);
        y_13 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_13, y_13);
        d_2 = t;
        t = SSLsetAnnotations(d_2, u_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_25 = ATgetArgument(t, 0);
          f_25 = ATgetArgument(t, 1);
          v_24 = ATgetArgument(t, 2);
          {
            ATerm v_14 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,e_2 = NULL;
            t = SSLgetAnnotations(a_25);
            v_14 = t;
            t = e_25;
            t = x_100(t);
            c_15 = t;
            t = f_25;
            t = x_100(t);
            d_15 = t;
            t = v_24;
            t = v_100(t);
            e_15 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, c_15, d_15, e_15);
            e_2 = t;
            t = SSLsetAnnotations(e_2, v_14);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              e_25 = ATgetArgument(t, 0);
              f_25 = ATgetArgument(t, 1);
              v_24 = ATgetArgument(t, 2);
              u_24 = ATgetArgument(t, 3);
              {
                ATerm p_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,f_2 = NULL;
                t = SSLgetAnnotations(a_25);
                p_15 = t;
                t = e_25;
                t = x_100(t);
                u_15 = t;
                t = f_25;
                t = x_100(t);
                v_15 = t;
                t = v_24;
                t = x_100(t);
                w_15 = t;
                t = u_24;
                t = v_100(t);
                x_15 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_15, v_15, w_15, x_15);
                f_2 = t;
                t = SSLsetAnnotations(f_2, p_15);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  e_25 = ATgetArgument(t, 0);
                  f_25 = ATgetArgument(t, 1);
                  v_24 = ATgetArgument(t, 2);
                  u_24 = ATgetArgument(t, 3);
                  {
                    ATerm j_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,g_2 = NULL;
                    t = SSLgetAnnotations(a_25);
                    j_16 = t;
                    t = e_25;
                    t = x_100(t);
                    o_16 = t;
                    t = f_25;
                    t = x_100(t);
                    p_16 = t;
                    t = v_24;
                    t = x_100(t);
                    q_16 = t;
                    t = u_24;
                    t = v_100(t);
                    r_16 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, o_16, p_16, q_16, r_16);
                    g_2 = t;
                    t = SSLsetAnnotations(g_2, j_16);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      e_25 = ATgetArgument(t, 0);
                      f_25 = ATgetArgument(t, 1);
                      v_24 = ATgetArgument(t, 2);
                      {
                        ATerm c_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,o_2 = NULL;
                        t = SSLgetAnnotations(a_25);
                        c_17 = t;
                        t = e_25;
                        t = x_100(t);
                        k_17 = t;
                        t = f_25;
                        t = x_100(t);
                        l_17 = t;
                        t = v_24;
                        t = x_100(t);
                        m_17 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, k_17, l_17, m_17);
                        o_2 = t;
                        t = SSLsetAnnotations(o_2, c_17);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          e_25 = ATgetArgument(t, 0);
                          f_25 = ATgetArgument(t, 1);
                          {
                            ATerm i_18 = NULL,w_18 = NULL,x_18 = NULL,r_2 = NULL;
                            t = SSLgetAnnotations(a_25);
                            i_18 = t;
                            t = e_25;
                            t = x_100(t);
                            w_18 = t;
                            t = f_25;
                            t = v_100(t);
                            x_18 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, w_18, x_18);
                            r_2 = t;
                            t = SSLsetAnnotations(r_2, i_18);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              e_25 = ATgetArgument(t, 0);
                              f_25 = ATgetArgument(t, 1);
                              {
                                ATerm q_19 = NULL,t_19 = NULL,v_19 = NULL,s_2 = NULL;
                                t = SSLgetAnnotations(a_25);
                                q_19 = t;
                                t = e_25;
                                t = x_100(t);
                                t_19 = t;
                                t = f_25;
                                t = v_100(t);
                                v_19 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, t_19, v_19);
                                s_2 = t;
                                t = SSLsetAnnotations(s_2, q_19);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  e_25 = ATgetArgument(t, 0);
                                  f_25 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_20 = NULL,m_20 = NULL,v_20 = NULL,b_3 = NULL;
                                    t = SSLgetAnnotations(a_25);
                                    j_20 = t;
                                    t = e_25;
                                    t = x_100(t);
                                    m_20 = t;
                                    t = f_25;
                                    t = v_100(t);
                                    v_20 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, m_20, v_20);
                                    b_3 = t;
                                    t = SSLsetAnnotations(b_3, j_20);
                                  }
                                }
                              else
                                {
                                  ATerm l_21 = NULL,q_21 = NULL,r_21 = NULL,d_3 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      e_25 = ATgetArgument(t, 0);
                                      f_25 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(a_25);
                                  l_21 = t;
                                  t = e_25;
                                  t = x_100(t);
                                  q_21 = t;
                                  t = f_25;
                                  t = v_100(t);
                                  r_21 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, q_21, r_21);
                                  d_3 = t;
                                  t = SSLsetAnnotations(d_3, l_21);
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
ATerm dynrule_sargs_1_0 (ATerm z_100 (ATerm), ATerm t)
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
static ATerm c_2 (ATerm t)
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
            ATerm k_16 = ATgetArgument(t, 2);
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
      t = map_1_0(c_2, t);
    }
  return(t);
}
static ATerm h_2 (ATerm t)
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
static ATerm j_5 (ATerm y_22, ATerm x_22, ATerm t)
{
  t = y_22;
  t = map_1_0(h_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,t_28 = NULL,y_28 = NULL,a_29 = NULL,q_3 = NULL;
  a_29 = t;
  if(match_cons(t, sym_SVar_1))
    {
      t_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_29);
  o_28 = t;
  t = t_28;
  t = b_81(t);
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, y_28);
  q_3 = t;
  t = SSLsetAnnotations(q_3, o_28);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_29 = NULL,j_29 = NULL,l_29 = NULL,x_29 = NULL,y_29 = NULL;
      i_29 = t;
      if(match_cons(t, sym_Let_2))
        {
          j_29 = ATgetArgument(t, 0);
          l_29 = ATgetArgument(t, 1);
          t = i_29;
          t = j_5(j_29, l_29, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              j_29 = ATgetArgument(t, 0);
              l_29 = ATgetArgument(t, 1);
              x_29 = ATgetArgument(t, 2);
              t = l_29;
              t = map_1_0(k_2, t);
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
                      x_29 = ATgetArgument(t, 2);
                      y_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_29;
                  t = map_1_0(l_2, t);
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
            t = dynrule_sargs_1_0(p_2, t);
          }
      }
    }
  return(t);
}
static ATerm k_2 (ATerm t)
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
static ATerm l_2 (ATerm t)
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
static ATerm p_2 (ATerm t)
{
  t = map_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm u_31 = NULL;
  ATerm n_17 = t;
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
      t = n_17;
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
  t = rename_4_0(SVar_1_0, j_2, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,f_38 = NULL,h_38 = NULL;
  v_37 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      f_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
      {
        ATerm i_22 = NULL,m_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,t_22 = NULL,w_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,u_3 = NULL,t_3 = NULL,s_3 = NULL;
        t = SSLgetAnnotations(v_37);
        i_22 = t;
        t = f_38;
        if(match_cons(t, sym_DynRuleId_1))
          {
            q_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_38);
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
        t = b_101(t);
        b_23 = t;
        t = z_22;
        t = c_101(t);
        c_23 = t;
        t = a_23;
        t = d_101(t);
        d_23 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, b_23, c_23, d_23);
        s_3 = t;
        t = SSLsetAnnotations(s_3, t_22);
        e_23 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, e_23);
        t_3 = t;
        t = SSLsetAnnotations(t_3, p_22);
        r_22 = t;
        t = h_38;
        t = e_101(t);
        m_22 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, r_22, m_22);
        u_3 = t;
        t = SSLsetAnnotations(u_3, i_22);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          f_38 = ATgetArgument(t, 0);
          h_38 = ATgetArgument(t, 1);
          {
            ATerm n_23 = NULL,x_23 = NULL,b_24 = NULL,e_24 = NULL,k_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,t_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,m_25 = NULL,b_4 = NULL,a_4 = NULL,x_3 = NULL,v_3 = NULL;
            t = SSLgetAnnotations(v_37);
            n_23 = t;
            t = f_38;
            if(match_cons(t, sym_DynRuleId_1))
              {
                r_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_38);
            q_24 = t;
            t = r_24;
            if(match_cons(t, sym_RDecT_3))
              {
                x_24 = ATgetArgument(t, 0);
                y_24 = ATgetArgument(t, 1);
                z_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_24);
            w_24 = t;
            t = x_24;
            t = b_101(t);
            b_25 = t;
            t = y_24;
            t = c_101(t);
            c_25 = t;
            t = z_24;
            t = d_101(t);
            d_25 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, b_25, c_25, d_25);
            v_3 = t;
            t = SSLsetAnnotations(v_3, w_24);
            m_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, m_25);
            x_3 = t;
            t = SSLsetAnnotations(x_3, q_24);
            t_24 = t;
            t = h_38;
            if(match_cons(t, sym_Rule_3))
              {
                b_24 = ATgetArgument(t, 0);
                e_24 = ATgetArgument(t, 1);
                k_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_38);
            x_23 = t;
            t = b_24;
            t = e_101(t);
            m_24 = t;
            t = e_24;
            t = f_101(t);
            n_24 = t;
            t = k_24;
            t = g_101(t);
            o_24 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, m_24, n_24, o_24);
            a_4 = t;
            t = SSLsetAnnotations(a_4, x_23);
            p_24 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, t_24, p_24);
            b_4 = t;
            t = SSLsetAnnotations(b_4, n_23);
          }
        }
      else
        {
          ATerm x_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,s_26 = NULL,t_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,m_4 = NULL,j_4 = NULL,i_4 = NULL,f_4 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              f_38 = ATgetArgument(t, 0);
              h_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_37);
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
              w_26 = ATgetArgument(t, 0);
              x_26 = ATgetArgument(t, 1);
              y_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_26);
          t_26 = t;
          t = w_26;
          t = b_101(t);
          z_26 = t;
          t = x_26;
          t = c_101(t);
          b_27 = t;
          t = y_26;
          t = d_101(t);
          c_27 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, z_26, b_27, c_27);
          f_4 = t;
          t = SSLsetAnnotations(f_4, t_26);
          d_27 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, d_27);
          i_4 = t;
          t = SSLsetAnnotations(i_4, i_26);
          s_26 = t;
          t = h_38;
          if(match_cons(t, sym_Rule_3))
            {
              b_26 = ATgetArgument(t, 0);
              c_26 = ATgetArgument(t, 1);
              d_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_38);
          a_26 = t;
          t = b_26;
          t = e_101(t);
          e_26 = t;
          t = c_26;
          t = f_101(t);
          f_26 = t;
          t = d_26;
          t = g_101(t);
          g_26 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, e_26, f_26, g_26);
          j_4 = t;
          t = SSLsetAnnotations(j_4, a_26);
          h_26 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, s_26, h_26);
          m_4 = t;
          t = SSLsetAnnotations(m_4, x_25);
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
static ATerm e_3 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,d_30 = NULL,e_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
        {
          u_29 = ATgetFirst((ATermList) s_17);
          v_29 = (ATerm) ATgetNext((ATermList) s_17);
        }
      else
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
          {
            d_30 = ATgetFirst((ATermList) t_17);
            e_30 = (ATerm) ATgetNext((ATermList) t_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_29, d_30), (ATerm) ATmakeAppl(sym__2, v_29, e_30));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  if(match_cons(t, sym__2))
    {
      j_30 = ATgetArgument(t, 0);
      k_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_30), j_30);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm o_30 = NULL,q_30 = NULL,r_30 = NULL;
  if(match_cons(t, sym__2))
    {
      o_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_30;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_30);
      }
    else
      {
        t = u_17;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_17 = ATgetArgument(t, 0);
            q_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_30, q_30);
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
  ATerm j_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_18 = ATgetArgument(t, 0);
      if(((ATgetType(a_18) == AT_LIST) && !(ATisEmpty(a_18))))
        {
          j_32 = ATgetFirst((ATermList) a_18);
          l_32 = (ATerm) ATgetNext((ATermList) a_18);
        }
      else
        _fail(t);
      {
        ATerm b_18 = ATgetArgument(t, 1);
        if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
          {
            m_32 = ATgetFirst((ATermList) b_18);
            n_32 = (ATerm) ATgetNext((ATermList) b_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_32, m_32), (ATerm) ATmakeAppl(sym__2, l_32, n_32));
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm o_32 = NULL,v_32 = NULL;
  if(match_cons(t, sym__2))
    {
      o_32 = ATgetArgument(t, 0);
      v_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_32), o_32);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm b_33 = NULL,d_33 = NULL,g_33 = NULL;
  if(match_cons(t, sym__2))
    {
      b_33 = ATgetArgument(t, 0);
      g_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_33;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_33);
      }
    else
      {
        t = c_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_18 = ATgetArgument(t, 0);
            d_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_33, d_33);
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
  ATerm r_34 = NULL,t_34 = NULL,v_34 = NULL,w_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_18 = ATgetArgument(t, 0);
      if(((ATgetType(j_18) == AT_LIST) && !(ATisEmpty(j_18))))
        {
          r_34 = ATgetFirst((ATermList) j_18);
          t_34 = (ATerm) ATgetNext((ATermList) j_18);
        }
      else
        _fail(t);
      {
        ATerm k_18 = ATgetArgument(t, 1);
        if(((ATgetType(k_18) == AT_LIST) && !(ATisEmpty(k_18))))
          {
            v_34 = ATgetFirst((ATermList) k_18);
            w_34 = (ATerm) ATgetNext((ATermList) k_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_34, v_34), (ATerm) ATmakeAppl(sym__2, t_34, w_34));
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  if(match_cons(t, sym__2))
    {
      x_34 = ATgetArgument(t, 0);
      y_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_34), x_34);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm a_35 = NULL,m_35 = NULL,n_35 = NULL;
  if(match_cons(t, sym__2))
    {
      a_35 = ATgetArgument(t, 0);
      n_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_35;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_35);
      }
    else
      {
        t = l_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_18 = ATgetArgument(t, 0);
            m_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_35, m_35);
      }
  }
  return(t);
}
static ATerm w_3 (ATerm t)
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
static ATerm y_3 (ATerm t)
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
static ATerm z_3 (ATerm t)
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
static ATerm c_4 (ATerm t)
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
            ATerm y_18 = ATgetArgument(t, 0);
            t_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_49, t_49);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL;
      j_48 = t;
      if(match_cons(t, sym_Scope_2))
        {
          m_48 = ATgetArgument(t, 0);
          n_48 = ATgetArgument(t, 1);
          {
            ATerm m_27 = NULL,p_27 = NULL,k_6 = NULL;
            t = SSLgetAnnotations(j_48);
            m_27 = t;
            t = m_48;
            t = q_100(t);
            p_27 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, p_27, n_48);
            k_6 = t;
            t = SSLsetAnnotations(k_6, m_27);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              m_48 = ATgetArgument(t, 0);
              {
                ATerm u_28 = NULL,q_6 = NULL;
                t = SSLgetAnnotations(j_48);
                u_28 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, m_48);
                q_6 = t;
                t = SSLsetAnnotations(q_6, u_28);
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
                    ATerm f_29 = NULL,o_29 = NULL,p_29 = NULL,v_6 = NULL;
                    t = SSLgetAnnotations(j_48);
                    f_29 = t;
                    t = o_48;
                    t = q_100(t);
                    p_29 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_48, p_29);
                    t = genzip_4_0(a_3, e_3, g_3, h_3, t);
                    o_29 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, m_48, n_48, o_29);
                    v_6 = t;
                    t = SSLsetAnnotations(v_6, f_29);
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
                        ATerm y_31 = NULL,f_32 = NULL,g_32 = NULL,z_6 = NULL;
                        t = SSLgetAnnotations(j_48);
                        y_31 = t;
                        t = o_48;
                        t = q_100(t);
                        g_32 = t;
                        t = (ATerm) ATmakeAppl(sym__2, o_48, g_32);
                        t = genzip_4_0(i_3, j_3, k_3, l_3, t);
                        f_32 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, m_48, n_48, f_32, p_48);
                        z_6 = t;
                        t = SSLsetAnnotations(z_6, y_31);
                      }
                    }
                  else
                    {
                      ATerm g_34 = NULL,m_34 = NULL,n_34 = NULL,a_7 = NULL;
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
                      g_34 = t;
                      t = o_48;
                      t = q_100(t);
                      n_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_48, n_34);
                      t = genzip_4_0(m_3, n_3, o_3, p_3, t);
                      m_34 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, m_48, n_48, m_34, p_48);
                      a_7 = t;
                      t = SSLsetAnnotations(a_7, g_34);
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
          ATerm s_48 = NULL,v_48 = NULL;
          v_48 = t;
          t = q_100(t);
          s_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_48, s_48);
          t = genzip_4_0(w_3, y_3, z_3, c_4, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, r_3, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL;
  i_62 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_62 = ATgetArgument(t, 0);
      h_62 = ATgetArgument(t, 1);
      {
        ATerm l_36 = NULL,v_36 = NULL,w_36 = NULL,i_7 = NULL;
        t = SSLgetAnnotations(i_62);
        l_36 = t;
        t = j_62;
        t = t_100(t);
        v_36 = t;
        t = h_62;
        t = r_100(t);
        w_36 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, v_36, w_36);
        i_7 = t;
        t = SSLsetAnnotations(i_7, l_36);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          j_62 = ATgetArgument(t, 0);
          {
            ATerm h_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,k_7 = NULL,j_7 = NULL;
            t = SSLgetAnnotations(i_62);
            h_37 = t;
            t = j_62;
            if(match_cons(t, sym_Rule_3))
              {
                r_37 = ATgetArgument(t, 0);
                s_37 = ATgetArgument(t, 1);
                t_37 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_62);
            q_37 = t;
            t = r_37;
            t = r_100(t);
            u_37 = t;
            t = s_37;
            t = r_100(t);
            w_37 = t;
            t = t_37;
            t = r_100(t);
            x_37 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, u_37, w_37, x_37);
            j_7 = t;
            t = SSLsetAnnotations(j_7, q_37);
            y_37 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, y_37);
            k_7 = t;
            t = SSLsetAnnotations(k_7, h_37);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              j_62 = ATgetArgument(t, 0);
              h_62 = ATgetArgument(t, 1);
              f_62 = ATgetArgument(t, 2);
              {
                ATerm l_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,l_7 = NULL;
                t = SSLgetAnnotations(i_62);
                l_38 = t;
                t = j_62;
                t = t_100(t);
                r_38 = t;
                t = h_62;
                t = t_100(t);
                s_38 = t;
                t = f_62;
                t = t_100(t);
                t_38 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, r_38, s_38, t_38);
                l_7 = t;
                t = SSLsetAnnotations(l_7, l_38);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  j_62 = ATgetArgument(t, 0);
                  h_62 = ATgetArgument(t, 1);
                  f_62 = ATgetArgument(t, 2);
                  g_62 = ATgetArgument(t, 3);
                  {
                    ATerm e_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,x_7 = NULL;
                    t = SSLgetAnnotations(i_62);
                    e_39 = t;
                    t = j_62;
                    t = t_100(t);
                    j_39 = t;
                    t = h_62;
                    t = t_100(t);
                    k_39 = t;
                    t = f_62;
                    t = t_100(t);
                    l_39 = t;
                    t = g_62;
                    t = r_100(t);
                    m_39 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, j_39, k_39, l_39, m_39);
                    x_7 = t;
                    t = SSLsetAnnotations(x_7, e_39);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_62 = ATgetArgument(t, 0);
                      h_62 = ATgetArgument(t, 1);
                      f_62 = ATgetArgument(t, 2);
                      g_62 = ATgetArgument(t, 3);
                      {
                        ATerm y_39 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,y_7 = NULL;
                        t = SSLgetAnnotations(i_62);
                        y_39 = t;
                        t = j_62;
                        t = t_100(t);
                        d_40 = t;
                        t = h_62;
                        t = t_100(t);
                        e_40 = t;
                        t = f_62;
                        t = t_100(t);
                        f_40 = t;
                        t = g_62;
                        t = r_100(t);
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
                          j_62 = ATgetArgument(t, 0);
                          h_62 = ATgetArgument(t, 1);
                          {
                            ATerm q_40 = NULL,w_40 = NULL,x_40 = NULL,z_7 = NULL;
                            t = SSLgetAnnotations(i_62);
                            q_40 = t;
                            t = j_62;
                            t = t_100(t);
                            w_40 = t;
                            t = h_62;
                            t = r_100(t);
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
                              j_62 = ATgetArgument(t, 0);
                              h_62 = ATgetArgument(t, 1);
                              {
                                ATerm l_41 = NULL,p_41 = NULL,q_41 = NULL,a_8 = NULL;
                                t = SSLgetAnnotations(i_62);
                                l_41 = t;
                                t = j_62;
                                t = t_100(t);
                                p_41 = t;
                                t = h_62;
                                t = r_100(t);
                                q_41 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, p_41, q_41);
                                a_8 = t;
                                t = SSLsetAnnotations(a_8, l_41);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  j_62 = ATgetArgument(t, 0);
                                  h_62 = ATgetArgument(t, 1);
                                  {
                                    ATerm e_42 = NULL,i_42 = NULL,j_42 = NULL,b_8 = NULL;
                                    t = SSLgetAnnotations(i_62);
                                    e_42 = t;
                                    t = j_62;
                                    t = t_100(t);
                                    i_42 = t;
                                    t = h_62;
                                    t = r_100(t);
                                    j_42 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, i_42, j_42);
                                    b_8 = t;
                                    t = SSLsetAnnotations(b_8, e_42);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      j_62 = ATgetArgument(t, 0);
                                      {
                                        ATerm t_42 = NULL,w_42 = NULL,c_8 = NULL;
                                        t = SSLgetAnnotations(i_62);
                                        t_42 = t;
                                        t = j_62;
                                        t = r_100(t);
                                        w_42 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, w_42);
                                        c_8 = t;
                                        t = SSLsetAnnotations(c_8, t_42);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          j_62 = ATgetArgument(t, 0);
                                          {
                                            ATerm d_43 = NULL,g_43 = NULL,d_8 = NULL;
                                            t = SSLgetAnnotations(i_62);
                                            d_43 = t;
                                            t = j_62;
                                            t = r_100(t);
                                            g_43 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, g_43);
                                            d_8 = t;
                                            t = SSLsetAnnotations(d_8, d_43);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              j_62 = ATgetArgument(t, 0);
                                              {
                                                ATerm n_43 = NULL,p_43 = NULL,e_8 = NULL;
                                                t = SSLgetAnnotations(i_62);
                                                n_43 = t;
                                                t = j_62;
                                                t = r_100(t);
                                                p_43 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, p_43);
                                                e_8 = t;
                                                t = SSLsetAnnotations(e_8, n_43);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  j_62 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm i_44 = NULL,p_44 = NULL,h_8 = NULL;
                                                    t = SSLgetAnnotations(i_62);
                                                    i_44 = t;
                                                    t = j_62;
                                                    t = r_100(t);
                                                    p_44 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, p_44);
                                                    h_8 = t;
                                                    t = SSLsetAnnotations(h_8, i_44);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm e_46 = NULL,g_46 = NULL,i_8 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      j_62 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(i_62);
                                                  e_46 = t;
                                                  t = j_62;
                                                  t = r_100(t);
                                                  g_46 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, g_46);
                                                  i_8 = t;
                                                  t = SSLsetAnnotations(i_8, e_46);
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
ATerm dynrule_targs_1_0 (ATerm a_101 (ATerm), ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL,x_63 = NULL;
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          t_63 = ATgetArgument(t, 0);
          {
            ATerm d_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_19);
      t = t_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          u_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_63;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm e_19 = ATgetArgument(t, 0);
          ATerm f_19 = ATgetArgument(t, 1);
          x_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_63;
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
                t_63 = ATgetArgument(t, 0);
                {
                  ATerm i_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_19);
            t = t_63;
            if(match_cons(t, sym_DynRuleId_1))
              {
                u_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_63;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_19 = ATgetArgument(t, 0);
                ATerm k_19 = ATgetArgument(t, 1);
                x_63 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = x_63;
          }
        else
          {
            t = g_19;
            if(match_cons(t, sym_AddDynRule_2))
              {
                t_63 = ATgetArgument(t, 0);
                {
                  ATerm l_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = t_63;
            if(match_cons(t, sym_DynRuleId_1))
              {
                u_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_63;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_19 = ATgetArgument(t, 0);
                ATerm n_19 = ATgetArgument(t, 1);
                x_63 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = x_63;
          }
      }
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm o_64 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
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
      LocalPopChoice(p_19);
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
static ATerm e_4 (ATerm t)
{
  ATerm u_64 = NULL;
  ATerm s_19 = t;
  int u_19 = stack_ptr;
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
      LocalPopChoice(u_19);
      t = u_64;
    }
  else
    {
      t = s_19;
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
  ATerm j_64 = NULL;
  ATerm x_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm z_19 = ATgetArgument(t, 0);
          ATerm a_20 = ATgetArgument(t, 1);
          j_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(y_19);
      t = j_64;
      t = map_1_0(d_4, t);
    }
  else
    {
      t = x_19;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm b_20 = ATgetArgument(t, 0);
          ATerm c_20 = ATgetArgument(t, 1);
          j_64 = ATgetArgument(t, 2);
          {
            ATerm d_20 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = j_64;
      t = map_1_0(e_4, t);
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm q_65 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_65);
  return(t);
}
static ATerm h_4 (ATerm t)
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
              int k_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_65 = ATgetArgument(t, 0);
                      t_65 = ATgetArgument(t, 1);
                      u_65 = ATgetArgument(t, 2);
                      v_65 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_65;
                  t = map_1_0(k_4, t);
                  LocalPopChoice(k_20);
                }
              else
                {
                  t = i_20;
                  {
                    ATerm l_20 = t;
                    int n_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_20);
                      }
                    else
                      {
                        t = l_20;
                        t = dynrule_targs_1_0(l_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm c_66 = NULL;
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_66 = ATgetArgument(t, 0);
          {
            ATerm q_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_20);
      t = c_66;
    }
  else
    {
      t = o_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_66;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = map_1_0(n_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm h_66 = NULL;
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_66 = ATgetArgument(t, 0);
          {
            ATerm t_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_20);
      t = h_66;
    }
  else
    {
      t = r_20;
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
static ATerm p_4 (ATerm t)
{
  ATerm l_66 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_66);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm u_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_20);
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
                  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_66 = ATgetArgument(t, 0);
                      o_66 = ATgetArgument(t, 1);
                      p_66 = ATgetArgument(t, 2);
                      q_66 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_66;
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
  ATerm x_66 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_66 = ATgetArgument(t, 0);
          {
            ATerm f_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_21);
      t = x_66;
    }
  else
    {
      t = d_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_66;
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
  ATerm c_67 = NULL;
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_67 = ATgetArgument(t, 0);
          {
            ATerm i_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_21);
      t = c_67;
    }
  else
    {
      t = g_21;
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
static ATerm v_4 (ATerm t)
{
  ATerm g_67 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_67);
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
              int p_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_67 = ATgetArgument(t, 0);
                      j_67 = ATgetArgument(t, 1);
                      k_67 = ATgetArgument(t, 2);
                      l_67 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_67;
                  t = map_1_0(x_4, t);
                  LocalPopChoice(p_21);
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
                        t = dynrule_targs_1_0(z_4, t);
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
  ATerm s_67 = NULL;
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_67 = ATgetArgument(t, 0);
          {
            ATerm w_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_21);
      t = s_67;
    }
  else
    {
      t = u_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_67;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = map_1_0(a_5, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm x_67 = NULL;
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_67 = ATgetArgument(t, 0);
          {
            ATerm z_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_21);
      t = x_67;
    }
  else
    {
      t = x_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_67;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm b_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_68);
  return(t);
}
static ATerm i_5 (ATerm t)
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
                  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_68 = ATgetArgument(t, 0);
                      e_68 = ATgetArgument(t, 1);
                      f_68 = ATgetArgument(t, 2);
                      g_68 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_68;
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
                        t = dynrule_targs_1_0(p_5, t);
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
  ATerm n_68 = NULL;
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_68 = ATgetArgument(t, 0);
          {
            ATerm l_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_22);
      t = n_68;
    }
  else
    {
      t = j_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_68;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = map_1_0(r_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm s_68 = NULL;
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_68 = ATgetArgument(t, 0);
          {
            ATerm s_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_22);
      t = s_68;
    }
  else
    {
      t = n_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_68;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm w_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_68);
  return(t);
}
static ATerm v_5 (ATerm t)
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
                  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_69 = ATgetArgument(t, 0);
                      b_69 = ATgetArgument(t, 1);
                      c_69 = ATgetArgument(t, 2);
                      d_69 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_69;
                  t = map_1_0(y_5, t);
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
  ATerm k_69 = NULL;
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_69 = ATgetArgument(t, 0);
          {
            ATerm o_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_23);
      t = k_69;
    }
  else
    {
      t = l_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_69;
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
  ATerm u_69 = NULL;
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_69 = ATgetArgument(t, 0);
          {
            ATerm r_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_23);
      t = u_69;
    }
  else
    {
      t = p_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_69;
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
      t = free_vars_3_0(g_4, h_4, tboundin_3_0, t);
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
              t = free_vars_3_0(v_4, w_4, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  o_65 = ATgetArgument(t, 0);
                  t = o_65;
                  t = free_vars_3_0(d_5, i_5, tboundin_3_0, t);
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
                  t = free_vars_3_0(t_5, v_5, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm m_5 (ATerm b_120 (ATerm), ATerm u_59, ATerm t_59, ATerm t)
{
  static ATerm n_70 (ATerm t);
  static ATerm n_70 (ATerm t)
  {
    ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL;
    i_70 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_59;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_70 = ATgetFirst((ATermList) t);
            k_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_70;
              {
                static ATerm n_6 (ATerm t);
                static ATerm n_6 (ATerm t)
                {
                  t = t_59;
                  return(t);
                }
                t = n_5(b_120, n_6, j_70, k_70, t);
              }
              t = n_70(t);
              LocalPopChoice(t_23);
            }
          else
            {
              t = s_23;
              {
                ATerm z_46 = NULL,m_47 = NULL,c_9 = NULL;
                t = SSLgetAnnotations(i_70);
                z_46 = t;
                t = k_70;
                t = n_70(t);
                m_47 = t;
                t = (ATerm) ATinsert(CheckATermList(m_47), j_70);
                c_9 = t;
                t = SSLsetAnnotations(c_9, z_46);
              }
            }
        }
      }
    return(t);
  }
  t = u_59;
  t = n_70(t);
  return(t);
}
ATerm foldr_3_0 (ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm i_123 (ATerm), ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL;
  q_70 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_70;
      t = g_123(t);
    }
  else
    {
      ATerm v_70 = NULL,w_70 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_70 = ATgetFirst((ATermList) t);
          s_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_70;
      t = i_123(t);
      v_70 = t;
      t = s_70;
      t = foldr_3_0(g_123, h_123, i_123, t);
      w_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_70, w_70);
      t = h_123(t);
    }
  return(t);
}
static ATerm n_5 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm y_59, ATerm x_59, ATerm t)
{
  t = f_120(t);
  {
    static ATerm u_6 (ATerm t);
    static ATerm u_6 (ATerm t)
    {
      ATerm z_70 = NULL;
      z_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_59, z_70);
      t = e_120(t);
      return(t);
    }
    t = fetch_1_0(u_6, t);
  }
  t = x_59;
  return(t);
}
static ATerm o_5 (ATerm w_119 (ATerm), ATerm s_59, ATerm r_59, ATerm t)
{
  static ATerm p_71 (ATerm t);
  static ATerm p_71 (ATerm t)
  {
    ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL;
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
            m_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_71;
              {
                static ATerm w_6 (ATerm t);
                static ATerm w_6 (ATerm t)
                {
                  t = r_59;
                  return(t);
                }
                t = n_5(w_119, w_6, l_71, m_71, t);
              }
              t = p_71(t);
              LocalPopChoice(v_23);
            }
          else
            {
              t = u_23;
              {
                ATerm z_47 = NULL,g_48 = NULL,e_9 = NULL;
                t = SSLgetAnnotations(k_71);
                z_47 = t;
                t = m_71;
                t = p_71(t);
                g_48 = t;
                t = (ATerm) ATinsert(CheckATermList(g_48), l_71);
                e_9 = t;
                t = SSLsetAnnotations(e_9, z_47);
              }
            }
        }
      }
    return(t);
  }
  t = s_59;
  t = p_71(t);
  return(t);
}
static ATerm x_6 (ATerm t)
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
static ATerm y_6 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_23 = ATgetArgument(t, 0);
      if(((ATgetType(z_23) == AT_LIST) && !(ATisEmpty(z_23))))
        {
          x_71 = ATgetFirst((ATermList) z_23);
          y_71 = (ATerm) ATgetNext((ATermList) z_23);
        }
      else
        _fail(t);
      {
        ATerm a_24 = ATgetArgument(t, 1);
        if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
          {
            z_71 = ATgetFirst((ATermList) a_24);
            a_72 = (ATerm) ATgetNext((ATermList) a_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_71, z_71), (ATerm) ATmakeAppl(sym__2, y_71, a_72));
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL;
  if(match_cons(t, sym__2))
    {
      b_72 = ATgetArgument(t, 0);
      c_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_72), b_72);
  return(t);
}
static ATerm q_5 (ATerm r_758, ATerm w_758, ATerm y_74, ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
  t = SSL_explode_term(w_758);
  if(match_cons(t, sym__2))
    {
      s_71 = ATgetArgument(t, 0);
      u_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_758);
  if(match_cons(t, sym__2))
    {
      if((s_71 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_71, u_71);
  t = genzip_4_0(x_6, y_6, b_7, _id, t);
  v_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_71, y_74);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm t)
{
  static ATerm e_72 (ATerm t);
  static ATerm e_72 (ATerm t)
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_108(t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = t_108(t);
        t = e_72(t);
      }
    return(t);
  }
  t = e_72(t);
  return(t);
}
ATerm for_3_0 (ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm t)
{
  t = v_108(t);
  t = while_not_2_0(w_108, x_108, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm l_72 = NULL;
  l_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, l_72);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,g_9 = NULL;
  p_72 = t;
  if(match_cons(t, sym__2))
    {
      n_72 = ATgetArgument(t, 0);
      o_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_72);
  m_72 = t;
  t = o_72;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_72, o_72);
  g_9 = t;
  t = SSLsetAnnotations(g_9, m_72);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL;
  i_73 = t;
  if(match_cons(t, sym__2))
    {
      j_73 = ATgetArgument(t, 0);
      k_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_73 = ATgetFirst((ATermList) t);
      m_73 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_73(j_73, k_73, i_73, t);
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_73), l_73), m_73);
          }
      }
    }
  else
    {
      t = w_73(j_73, k_73, i_73, t);
    }
  return(t);
}
static ATerm w_73 (ATerm q_72, ATerm r_72, ATerm s_72, ATerm t)
{
  ATerm t_72 = NULL,w_72 = NULL,j_9 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL;
  t = SSLgetAnnotations(s_72);
  t_72 = t;
  t = r_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_72 = ATgetFirst((ATermList) t);
      c_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_72;
  if(match_cons(t, sym__2))
    {
      a_73 = ATgetArgument(t, 0);
      b_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_73;
        if((a_73 != t))
          {
            _fail(t);
          }
        t = c_73;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = r_72;
        t = q_5(a_73, b_73, c_73, t);
      }
  }
  w_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_72, w_72);
  j_9 = t;
  t = SSLsetAnnotations(j_9, t_72);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm v_73 = NULL;
  if(match_cons(t, sym__2))
    {
      v_73 = ATgetArgument(t, 0);
      if((v_73 != ATgetArgument(t, 1)))
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
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_7, d_7, e_7, t);
      LocalPopChoice(l_24);
    }
  else
    {
      t = j_24;
      {
        ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL;
        q_73 = t;
        if(match_cons(t, sym__2))
          {
            r_73 = ATgetArgument(t, 0);
            s_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_73;
        t = o_5(f_7, r_73, s_73, t);
      }
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm c_49 = NULL,e_49 = NULL;
  if(match_cons(t, sym__2))
    {
      c_49 = ATgetArgument(t, 0);
      e_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(o_7, c_49, e_49, t);
  return(t);
}
static ATerm o_7 (ATerm t)
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
static ATerm q_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL;
  if(match_cons(t, sym__2))
    {
      r_49 = ATgetArgument(t, 0);
      s_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(s_7, r_49, s_49, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm w_49 = NULL;
  if(match_cons(t, sym__2))
    {
      w_49 = ATgetArgument(t, 0);
      if((w_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm a_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm k_74 (ATerm t);
  static ATerm k_74 (ATerm t)
  {
    ATerm s_24 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_126(t);
        LocalPopChoice(g_25);
      }
    else
      {
        t = s_24;
        {
          ATerm h_25 = t;
          int i_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_73 = NULL,z_73 = NULL,t_48 = NULL,u_48 = NULL;
              y_73 = t;
              t = z_126(t);
              z_73 = t;
              t = y_73;
              {
                static ATerm g_7 (ATerm t);
                static ATerm g_7 (ATerm t)
                {
                  ATerm b_74 = NULL;
                  t = k_74(t);
                  b_74 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_74, z_73);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_127(g_7, k_74, h_7, t);
              }
              u_48 = t;
              t = SSL_explode_term(u_48);
              if(match_cons(t, sym__2))
                {
                  ATerm j_25 = ATgetArgument(t, 0);
                  t_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_48;
              t = foldr_3_0(m_7, n_7, _id, t);
              LocalPopChoice(i_25);
            }
          else
            {
              t = h_25;
              {
                ATerm k_49 = NULL,l_49 = NULL;
                l_49 = t;
                t = SSL_explode_term(l_49);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_25 = ATgetArgument(t, 0);
                    k_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_49;
                t = foldr_3_0(q_7, r_7, k_74, t);
              }
            }
        }
      }
    return(t);
  }
  t = k_74(t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm c_75 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_75);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm l_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_25);
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
                  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_75 = ATgetArgument(t, 0);
                      f_75 = ATgetArgument(t, 1);
                      g_75 = ATgetArgument(t, 2);
                      h_75 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_75;
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
  ATerm o_75 = NULL;
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_75 = ATgetArgument(t, 0);
          {
            ATerm w_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_25);
      t = o_75;
    }
  else
    {
      t = u_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_75;
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
  ATerm t_75 = NULL;
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_75 = ATgetArgument(t, 0);
          {
            ATerm k_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_25);
      t = t_75;
    }
  else
    {
      t = y_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_75;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm q_74 = NULL,z_74 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      z_74 = ATgetArgument(t, 0);
      t = z_74;
      if(match_cons(t, sym_Rule_3))
        {
          q_74 = ATgetArgument(t, 0);
          {
            ATerm n_26 = ATgetArgument(t, 1);
          }
          {
            ATerm p_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = q_74;
      t = free_vars_3_0(t_7, w_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          z_74 = ATgetArgument(t, 0);
          {
            ATerm q_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_74;
    }
  return(t);
}
ATerm Var_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,m_9 = NULL;
  a_76 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_76);
  x_75 = t;
  t = y_75;
  t = x_80(t);
  z_75 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_75);
  m_9 = t;
  t = SSLsetAnnotations(m_9, x_75);
  return(t);
}
static ATerm s_5 (ATerm g_125 (ATerm), ATerm h_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm b_63, ATerm a_63, ATerm z_62, ATerm t)
{
  static ATerm m_8 (ATerm t);
  static ATerm n_8 (ATerm t);
  static ATerm m_8 (ATerm t)
  {
    ATerm c_76 = NULL;
    c_76 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_76, z_62);
    t = g_125(t);
    return(t);
  }
  static ATerm n_8 (ATerm t)
  {
    ATerm d_76 = NULL;
    d_76 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_76, a_63);
    t = g_125(t);
    return(t);
  }
  t = b_63;
  t = h_125(m_8, n_8, _id, t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_117 (ATerm), ATerm t)
{
  static ATerm z_76 (ATerm t);
  static ATerm z_76 (ATerm t)
  {
    ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL;
    y_76 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_76 = ATgetFirst((ATermList) t);
        x_76 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_50 = NULL,f_50 = NULL,p_9 = NULL;
          t = SSLgetAnnotations(y_76);
          b_50 = t;
          t = x_76;
          t = z_76(t);
          f_50 = t;
          t = (ATerm) ATinsert(CheckATermList(f_50), w_76);
          p_9 = t;
          t = SSLsetAnnotations(p_9, b_50);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_76;
        t = y_117(t);
      }
    return(t);
  }
  t = z_76(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
  g_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_76;
    }
  else
    {
      static ATerm o_8 (ATerm t);
      static ATerm o_8 (ATerm t)
      {
        t = not_null(i_76);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_76 = ATgetFirst((ATermList) t);
          if(((i_76 != NULL) && (i_76 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_76;
      t = at_end_1_0(o_8, t);
    }
  return(t);
}
static ATerm l_77 (ATerm d_77, ATerm t)
{
  ATerm e_77 = NULL;
  t = SSL_explode_term(d_77);
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_77;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL;
  i_77 = t;
  if(match_cons(t, sym__2))
    {
      g_77 = ATgetArgument(t, 0);
      h_77 = ATgetArgument(t, 1);
      {
        ATerm u_26 = t;
        int v_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm q_8 (ATerm t);
            static ATerm q_8 (ATerm t)
            {
              t = h_77;
              return(t);
            }
            t = g_77;
            t = at_end_1_0(q_8, t);
            LocalPopChoice(v_26);
          }
        else
          {
            t = u_26;
            t = l_77(i_77, t);
          }
      }
    }
  else
    {
      t = l_77(i_77, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t)
{
  static ATerm s_77 (ATerm t);
  static ATerm s_77 (ATerm t)
  {
    ATerm a_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_106(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = a_27;
        {
          ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,w_9 = NULL;
          t = t_106(t);
          r_77 = t;
          if(match_cons(t, sym__2))
            {
              n_77 = ATgetArgument(t, 0);
              o_77 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_77);
          m_77 = t;
          t = n_77;
          t = v_106(t);
          p_77 = t;
          t = o_77;
          t = s_77(t);
          q_77 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_77, q_77);
          w_9 = t;
          t = SSLsetAnnotations(w_9, m_77);
          t = u_106(t);
        }
      }
    return(t);
  }
  t = s_77(t);
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
  ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
        {
          a_78 = ATgetFirst((ATermList) h_27);
          b_78 = (ATerm) ATgetNext((ATermList) h_27);
        }
      else
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
          {
            c_78 = ATgetFirst((ATermList) i_27);
            d_78 = (ATerm) ATgetNext((ATermList) i_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_78, c_78), (ATerm) ATmakeAppl(sym__2, b_78, d_78));
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL;
  if(match_cons(t, sym__2))
    {
      e_78 = ATgetArgument(t, 0);
      f_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_78), e_78);
  return(t);
}
static ATerm w_5 (ATerm a_125 (ATerm), ATerm b_125 (ATerm (ATerm), ATerm), ATerm t_62, ATerm w_62, ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,z_77 = NULL;
  t = t_62;
  t = a_125(t);
  u_77 = t;
  t = map_1_0(new_0_0, t);
  v_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_77, v_77);
  t = genzip_4_0(r_8, s_8, t_8, _id, t);
  z_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_77, w_62);
  t = conc_0_0(t);
  w_77 = t;
  t = t_62;
  {
    static ATerm u_8 (ATerm t);
    static ATerm u_8 (ATerm t)
    {
      t = v_77;
      return(t);
    }
    t = b_125(u_8, t);
  }
  x_77 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_77, w_62, w_77);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL;
  m_78 = t;
  if(match_cons(t, sym__2))
    {
      n_78 = ATgetArgument(t, 0);
      o_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_78;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_78 = ATgetFirst((ATermList) t);
      q_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_78;
  if(match_cons(t, sym__2))
    {
      k_78 = ATgetArgument(t, 0);
      l_78 = ATgetArgument(t, 1);
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_78;
            if((n_78 != t))
              {
                _fail(t);
              }
            t = l_78;
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            t = (ATerm) ATmakeAppl(sym__2, n_78, q_78);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, n_78, q_78);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm o_125 (ATerm), ATerm t)
{
  static ATerm m_79 (ATerm t);
  static ATerm m_79 (ATerm t)
  {
    ATerm l_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_125(t);
        LocalPopChoice(n_27);
      }
    else
      {
        t = l_27;
        {
          ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
          static ATerm y_8 (ATerm t);
          static ATerm y_8 (ATerm t)
          {
            ATerm w_50 = NULL;
            w_50 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_50, not_null(l_79));
            t = m_79(t);
            return(t);
          }
          j_79 = t;
          if(match_cons(t, sym__2))
            {
              k_79 = ATgetArgument(t, 0);
              if(((l_79 != NULL) && (l_79 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                l_79 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_79;
          t = SRTS_all(y_8, t);
        }
      }
    return(t);
  }
  t = m_79(t);
  return(t);
}
ATerm rename_4_0 (ATerm v_124 (ATerm (ATerm), ATerm), ATerm w_124 (ATerm), ATerm x_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_124 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_79 = NULL;
  static ATerm f_80 (ATerm t);
  static ATerm f_80 (ATerm t)
  {
    static ATerm z_8 (ATerm t);
    static ATerm z_8 (ATerm t)
    {
      ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL;
      z_79 = t;
      if(match_cons(t, sym__2))
        {
          a_80 = ATgetArgument(t, 0);
          b_80 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_9 (ATerm t);
            static ATerm a_9 (ATerm t)
            {
              ATerm e_80 = NULL;
              e_80 = t;
              t = (ATerm) ATmakeAppl(sym__2, e_80, b_80);
              t = lookup_0_0(t);
              return(t);
            }
            t = a_80;
            t = v_124(a_9, t);
            LocalPopChoice(r_27);
          }
        else
          {
            t = o_27;
            {
              ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL;
              t = z_79;
              t = w_5(w_124, y_124, a_80, b_80, t);
              if(match_cons(t, sym__3))
                {
                  e_51 = ATgetArgument(t, 0);
                  f_51 = ATgetArgument(t, 1);
                  g_51 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = s_5(f_80, x_124, e_51, f_51, g_51, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(z_8, t);
    return(t);
  }
  q_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_79, (ATerm) ATempty);
  t = f_80(t);
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
            ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                l_80 = ATgetArgument(t, 0);
                m_80 = ATgetArgument(t, 1);
                n_80 = ATgetArgument(t, 2);
                o_80 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = n_80;
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
  ATerm v_80 = NULL;
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_80 = ATgetArgument(t, 0);
          {
            ATerm b_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_28);
      t = v_80;
    }
  else
    {
      t = z_27;
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
static ATerm f_9 (ATerm t)
{
  t = map_1_0(i_9, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm c_81 = NULL;
  ATerm c_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_81 = ATgetArgument(t, 0);
          {
            ATerm f_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_28);
      t = c_81;
    }
  else
    {
      t = c_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_81;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, b_9, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm f_81 = NULL;
  t = SSL_fputc(k_31, l_31);
  f_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_81);
  return(t);
}
static ATerm c_6 (ATerm q_29, ATerm r_29, ATerm t)
{
  ATerm g_81 = NULL;
  t = SSL_write_term_to_stream_text(q_29, r_29);
  g_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_81);
  return(t);
}
static ATerm e_6 (ATerm q_109 (ATerm), ATerm s_218, ATerm w_29, ATerm t)
{
  ATerm h_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_218, term_g_28);
  t = i_6(t);
  h_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_81, w_29);
  t = q_109(t);
  t = fclose_0_0(t);
  t = w_29;
  return(t);
}
static ATerm d_6 (ATerm m_29, ATerm n_29, ATerm t)
{
  ATerm i_81 = NULL;
  t = SSL_write_term_to_stream_baf(m_29, n_29);
  i_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_81);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      if(match_cons(h_28, sym_Stream_1))
        {
          p_81 = ATgetArgument(h_28, 0);
        }
      else
        _fail(t);
      q_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(p_81, q_81, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if(match_cons(j_28, sym_Stream_1))
        {
          u_81 = ATgetArgument(j_28, 0);
        }
      else
        _fail(t);
      v_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(u_81, v_81, t);
  r_81 = t;
  t = term_k_28;
  s_81 = t;
  t = r_81;
  if(match_cons(t, sym_Stream_1))
    {
      t_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_28, r_81);
  t = b_6(s_81, t_81, t);
  return(t);
}
ATerm output_1_0 (ATerm e_130 (ATerm), ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL;
  t = e_130(t);
  k_81 = t;
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_81 = NULL,m_81 = NULL;
        t = term_n_28;
        l_81 = t;
        t = term_p_28;
        m_81 = t;
        t = term_q_28;
        t = o_6(l_81, m_81, t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = term_r_28;
      }
  }
  j_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_81, k_81);
  {
    ATerm s_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_81 = NULL,o_81 = NULL;
        t = term_n_28;
        n_81 = t;
        t = term_w_28;
        o_81 = t;
        t = term_x_28;
        t = o_6(n_81, o_81, t);
        t = (ATerm) ATmakeAppl(sym__2, j_81, k_81);
        LocalPopChoice(v_28);
        if(match_cons(t, sym__2))
          {
            ATerm z_28 = ATgetArgument(t, 0);
            ATerm b_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(k_9, j_81, k_81, t);
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
        t = e_6(l_9, j_81, k_81, t);
      }
  }
  return(t);
}
static ATerm j_82 (ATerm d_82, ATerm t)
{
  t = SSL_fclose(d_82);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_82 = NULL,h_82 = NULL;
  h_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_82 = ATgetArgument(t, 0);
      {
        ATerm e_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_82);
            LocalPopChoice(g_29);
          }
        else
          {
            t = e_29;
            t = j_82(h_82, t);
          }
      }
    }
  else
    {
      t = j_82(h_82, t);
    }
  return(t);
}
static ATerm f_6 (ATerm s_29, ATerm t)
{
  t = SSL_read_term_from_stream(s_29);
  return(t);
}
static ATerm g_6 (ATerm x_68, ATerm y_68, ATerm t)
{
  t = SSL_strcat(x_68, y_68);
  return(t);
}
static ATerm h_6 (ATerm m_31, ATerm n_31, ATerm t)
{
  ATerm k_82 = NULL;
  t = SSL_fopen(m_31, n_31);
  k_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_82 = NULL;
  t = SSL_stdin_stream();
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_82 = NULL;
  t = SSL_stdout_stream();
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_82 = NULL;
  t = SSL_stderr_stream();
  n_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_82);
  return(t);
}
static ATerm u_83 (ATerm t_82, ATerm t)
{
  ATerm u_82 = NULL;
  t = SSL_explode_term(t_82);
  if(match_cons(t, sym__2))
    {
      ATerm h_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_29 = ATgetArgument(t, 1);
        if(((ATgetType(k_29) == AT_LIST) && !(ATisEmpty(k_29))))
          {
            u_82 = ATgetFirst((ATermList) k_29);
            {
              ATerm t_29 = (ATerm) ATgetNext((ATermList) k_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_82;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_82;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_82;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_82;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_83 (ATerm x_82, ATerm y_82, ATerm z_82, ATerm t)
{
  ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL,f_83 = NULL,z_9 = NULL;
  t = SSLgetAnnotations(z_82);
  c_83 = t;
  t = x_82;
  if(match_cons(t, sym_Path_1))
    {
      f_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_83, y_82);
  z_9 = t;
  t = SSLsetAnnotations(z_9, c_83);
  if(match_cons(t, sym__2))
    {
      a_83 = ATgetArgument(t, 0);
      b_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(a_83, b_83, t);
  return(t);
}
static ATerm w_83 (ATerm h_83, ATerm i_83, ATerm j_83, ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL,p_83 = NULL,h_10 = NULL;
  t = SSLgetAnnotations(j_83);
  m_83 = t;
  t = SSL_is_string(h_83);
  p_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_83, i_83);
  h_10 = t;
  t = SSLsetAnnotations(h_10, m_83);
  if(match_cons(t, sym__2))
    {
      k_83 = ATgetArgument(t, 0);
      l_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(k_83, l_83, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL;
  r_83 = t;
  if(match_cons(t, sym__2))
    {
      s_83 = ATgetArgument(t, 0);
      t_83 = ATgetArgument(t, 1);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_83(r_83, t);
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
                  t = v_83(s_83, t_83, r_83, t);
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                  t = w_83(s_83, t_83, r_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_83(r_83, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL,f_84 = NULL;
  f_84 = t;
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_84, term_h_30);
        t = i_6(t);
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        {
          ATerm u_51 = NULL,v_51 = NULL;
          t = term_l_30;
          v_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_30, f_84);
          t = g_6(v_51, f_84, t);
          u_51 = t;
          t = SSL_perror(u_51);
          _fail(t);
        }
      }
  }
  z_83 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(a_84, t);
  y_83 = t;
  t = z_83;
  t = fclose_0_0(t);
  t = y_83;
  return(t);
}
ATerm input_1_0 (ATerm f_130 (ATerm), ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_84 = NULL,j_84 = NULL;
      t = term_n_28;
      i_84 = t;
      t = term_p_30;
      j_84 = t;
      t = term_s_30;
      t = o_6(i_84, j_84, t);
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      t = term_t_30;
    }
  t = ReadFromFile_0_0(t);
  t = f_130(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL;
  t = term_n_28;
  k_84 = t;
  t = term_u_30;
  l_84 = t;
  t = term_v_30;
  t = o_6(k_84, l_84, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL;
  n_84 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_84;
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
            t = n_84;
          }
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATinsert(ATempty, n_84);
      }
  }
  o_84 = t;
  t = term_r_28;
  p_84 = t;
  t = SSL_printnl(p_84, o_84);
  t = n_84;
  return(t);
}
ATerm map_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  static ATerm h_85 (ATerm t);
  static ATerm h_85 (ATerm t)
  {
    ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL;
    e_85 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_85;
      }
    else
      {
        ATerm a_52 = NULL,f_52 = NULL,g_52 = NULL,k_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_85 = ATgetFirst((ATermList) t);
            g_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_85);
        a_52 = t;
        t = f_85;
        t = h_117(t);
        f_52 = t;
        t = g_85;
        t = h_85(t);
        g_52 = t;
        t = (ATerm) ATinsert(CheckATermList(g_52), f_52);
        k_10 = t;
        t = SSLsetAnnotations(k_10, a_52);
      }
    return(t);
  }
  t = h_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm k_85 = NULL,l_85 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_85 = ATgetFirst((ATermList) t);
      l_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_85 = NULL,q_85 = NULL;
        static ATerm n_9 (ATerm t);
        static ATerm n_9 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_85)), not_null(q_85));
          return(t);
        }
        t = l_85;
        t = o_0(t);
        if(((p_85 != NULL) && (p_85 != t)))
          _fail(t);
        else
          p_85 = t;
        t = k_85;
        t = m_0(t);
        if(((q_85 != NULL) && (q_85 != t)))
          _fail(t);
        else
          q_85 = t;
        t = l_85;
        t = reverse_acc_2_0(m_0, n_9, t);
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
static ATerm r_9 (ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL,m_10 = NULL;
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
  m_10 = t;
  t = SSLsetAnnotations(m_10, y_85);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm e_86 = NULL;
  e_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_86), term_b_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm d_132 (ATerm), ATerm e_132 (ATerm), ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL;
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_85 = NULL,x_85 = NULL;
      t = term_n_28;
      w_85 = t;
      t = term_u_30;
      x_85 = t;
      t = term_v_30;
      t = o_6(w_85, x_85, t);
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      t = fetch_1_0(r_9, t);
    }
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_132(t);
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
  t = term_o_31;
  t = o_6(u_85, v_85, t);
  t = reverse_acc_2_0(_id, s_9, t);
  t = map_1_0(t_9, t);
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_86 = NULL;
        t = e_132(t);
        f_86 = t;
        t = (ATerm) ATinsert(CheckATermList(f_86), term_r_31);
        t = echo_0_0(t);
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
      }
  }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL,o_10 = NULL;
  n_86 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_86);
  l_86 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_86);
  o_10 = t;
  t = SSLsetAnnotations(o_10, l_86);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_86 = NULL;
  i_86 = t;
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_86 = NULL,k_86 = NULL;
        t = term_n_28;
        j_86 = t;
        t = term_u_30;
        k_86 = t;
        t = term_v_30;
        t = o_6(j_86, k_86, t);
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = fetch_1_0(u_9, t);
      }
  }
  t = i_86;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm p_86 = NULL;
  p_86 = t;
  if(match_string(t, "-k"))
    {
      t = p_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_86;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL;
  q_86 = t;
  t = SSL_string_to_int(q_86);
  r_86 = t;
  t = term_v_31;
  s_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_31, r_86);
  t = r_6(s_86, r_86, t);
  t = q_86;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_9, x_9, y_9, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm u_86 = NULL;
  u_86 = t;
  if(match_string(t, "-S"))
    {
      t = u_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_86;
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL;
  t = term_x_31;
  v_86 = t;
  t = term_z_31;
  w_86 = t;
  t = term_a_32;
  t = r_6(v_86, w_86, t);
  t = term_b_32;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_c_32;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL;
  x_86 = t;
  t = SSL_string_to_int(x_86);
  y_86 = t;
  t = term_x_31;
  z_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_31, y_86);
  t = r_6(z_86, y_86, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_86);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_d_32;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL;
  t = term_e_32;
  a_87 = t;
  t = term_a_31;
  b_87 = t;
  t = term_h_32;
  t = r_6(a_87, b_87, t);
  t = term_i_32;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_10, b_10, c_10, t);
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
            t = ArgOption_3_0(d_10, e_10, f_10, t);
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            t = Option_3_0(g_10, i_10, j_10, t);
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm g_35, ATerm h_35, ATerm t)
{
  ATerm c_87 = NULL,d_87 = NULL;
  t = term_n_28;
  c_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, g_35, h_35);
  t = lookup_table_0_1(c_87, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(g_35, h_35, d_87, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_28, g_35, h_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm h_87 = NULL,k_87 = NULL;
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
      t = p_6(m_87, n_87, l_87, t);
      _fail(t);
    }
  else
    {
      ATerm q_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_87 = ATgetFirst((ATermList) t);
          k_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_87;
      t = d_0(t);
      t = term_a_31;
      t = f_0(t);
      q_87 = t;
      t = (ATerm) ATinsert(CheckATermList(k_87), q_87);
    }
  return(t);
}
static ATerm l_10 (ATerm t)
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
static ATerm n_10 (ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL;
  t_87 = t;
  t = term_p_28;
  u_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_28, t_87);
  t = r_6(u_87, t_87, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_87);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_10, n_10, q_10, t);
  return(t);
}
static ATerm p_6 (ATerm u_40, ATerm v_40, ATerm t_40, ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL;
  w_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_40, v_40);
  {
    ATerm u_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_32 = ATgetArgument(t, 0);
            ATerm y_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_40, v_40);
        t = o_6(u_40, v_40, t);
        LocalPopChoice(w_32);
      }
    else
      {
        t = u_32;
        t = (ATerm) ATempty;
      }
  }
  x_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_40, v_40, (ATerm) ATinsert(CheckATermList(x_87), t_40));
  t = lookup_table_0_1(u_40, t);
  a_88 = t;
  t = (ATerm) ATinsert(CheckATermList(x_87), t_40);
  y_87 = t;
  t = a_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(v_40, y_87, z_87, t);
  t = w_87;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL;
      t = term_a_31;
      t = l_0(t);
      l_88 = t;
      t = term_i_31;
      m_88 = t;
      t = term_j_31;
      n_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_31, term_j_31, l_88);
      t = p_6(m_88, n_88, l_88, t);
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
      t = h_0(t);
      t = j_88;
      t = j_0(t);
      r_88 = t;
      t = (ATerm) ATinsert(CheckATermList(k_88), r_88);
    }
  return(t);
}
static ATerm r_10 (ATerm t)
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
  t = term_p_30;
  v_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, u_88);
  t = r_6(v_88, u_88, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_88);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_10, u_10, v_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_31;
  t = whoami_0_0(t);
  w_88 = t;
  t = term_a_33;
  y_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_33), w_88);
  z_88 = t;
  t = SSL_printnl(y_88, z_88);
  t = term_e_33;
  x_88 = t;
  t = SSL_exit(x_88);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_89 = NULL,b_89 = NULL;
  t = term_n_28;
  a_89 = t;
  t = term_u_30;
  b_89 = t;
  t = term_v_30;
  t = o_6(a_89, b_89, t);
  return(t);
}
static ATerm j_6 (ATerm c_38, ATerm d_38, ATerm t)
{
  ATerm f_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_38, d_38);
      LocalPopChoice(h_33);
    }
  else
    {
      t = f_33;
      t = SSL_addr(c_38, d_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
  d_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_89;
      t = e_123(t);
    }
  else
    {
      ATerm i_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_89 = ATgetFirst((ATermList) t);
          f_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_89;
      t = foldr_2_0(e_123, f_123, t);
      i_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_89, i_89);
      t = f_123(t);
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
static ATerm y_10 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL;
  if(match_cons(t, sym__2))
    {
      c_53 = ATgetArgument(t, 0);
      d_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(c_53, d_53, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_89 = NULL,t_52 = NULL,u_52 = NULL;
  t = times_0_0(t);
  u_52 = t;
  t = SSL_explode_term(u_52);
  if(match_cons(t, sym__2))
    {
      ATerm i_33 = ATgetArgument(t, 0);
      t_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_52;
  t = foldr_2_0(w_10, y_10, t);
  l_89 = t;
  t = SSL_TicksToSeconds(l_89);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,y_89 = NULL;
  w_89 = t;
  if(match_cons(t, sym__2))
    {
      x_89 = ATgetArgument(t, 0);
      y_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_89;
        if((x_89 != t))
          {
            _fail(t);
          }
        t = w_89;
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = (ATerm) ATmakeAppl(sym__2, x_89, y_89);
        {
          ATerm l_33 = t;
          int m_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_89, y_89);
              LocalPopChoice(m_33);
            }
          else
            {
              t = l_33;
              t = SSL_gtr(x_89, y_89);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_89, y_89);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_111 (ATerm), ATerm t)
{
  ATerm c_90 = NULL;
  c_90 = t;
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL;
        t = term_n_28;
        f_90 = t;
        t = term_x_31;
        g_90 = t;
        t = term_p_33;
        t = o_6(f_90, g_90, t);
        e_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_90, term_e_33);
        t = geq_0_0(t);
        t = c_90;
        t = h_111(t);
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        t = c_90;
      }
  }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm i_90 = NULL,j_90 = NULL,l_90 = NULL,m_90 = NULL;
  t = run_time_0_0(t);
  i_90 = t;
  t = term_a_31;
  t = whoami_0_0(t);
  j_90 = t;
  t = term_a_33;
  l_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_33), i_90), term_q_33), j_90);
  m_90 = t;
  t = SSL_printnl(l_90, m_90);
  t = (ATerm) ATmakeAppl(sym__2, term_a_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_33), i_90), term_q_33), j_90));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_11, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_90 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_31;
  n_90 = t;
  t = SSL_exit(n_90);
  return(t);
}
static ATerm s_6 (ATerm m_45, ATerm n_45, ATerm o_45, ATerm t)
{
  ATerm o_90 = NULL;
  t = SSL_hashtable_put(o_45, m_45, n_45);
  o_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_90);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_42, ATerm t)
{
  ATerm x_90 = NULL;
  t = table_hashtable_0_0(t);
  x_90 = t;
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_53 = NULL;
        t = x_90;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_6(g_42, x_53, t);
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        {
          ATerm c_54 = NULL;
          t = g_42;
          t = table_create_0_0(t);
          t = x_90;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_6(g_42, c_54, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_45, ATerm v_45, ATerm t)
{
  ATerm a_91 = NULL;
  t = SSL_hashtable_create(u_45, v_45);
  a_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_91);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,f_91 = NULL,g_91 = NULL;
  b_91 = t;
  t = term_u_33;
  f_91 = t;
  t = term_v_33;
  g_91 = t;
  t = b_91;
  t = new_hashtable_0_2(f_91, g_91, t);
  c_91 = t;
  t = b_91;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(b_91, c_91, d_91, t);
  t = b_91;
  return(t);
}
static ATerm l_6 (ATerm r_45, ATerm s_45, ATerm t)
{
  ATerm h_91 = NULL;
  t = SSL_hashtable_remove(s_45, r_45);
  h_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_91);
  return(t);
}
static ATerm m_6 (ATerm w_45, ATerm t)
{
  ATerm i_91 = NULL;
  t = SSL_hashtable_destroy(w_45);
  i_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_91);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm j_91 = NULL;
  t = SSL_table_hashtable();
  j_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_91);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL,m_91 = NULL,n_91 = NULL;
  k_91 = t;
  t = table_hashtable_0_0(t);
  l_91 = t;
  t = lookup_table_0_1(k_91, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(n_91, t);
  t = l_91;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(k_91, m_91, t);
  t = k_91;
  return(t);
}
ATerm fetch_1_0 (ATerm r_117 (ATerm), ATerm t)
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
          ATerm i_54 = NULL,s_54 = NULL,s_10 = NULL;
          t = SSLgetAnnotations(h_92);
          i_54 = t;
          t = i_92;
          t = r_117(t);
          s_54 = t;
          t = (ATerm) ATinsert(CheckATermList(j_92), s_54);
          s_10 = t;
          t = SSLsetAnnotations(s_10, i_54);
          LocalPopChoice(x_33);
        }
      else
        {
          t = w_33;
          {
            ATerm i_55 = NULL,r_55 = NULL,t_10 = NULL;
            t = SSLgetAnnotations(h_92);
            i_55 = t;
            t = j_92;
            t = k_92(t);
            r_55 = t;
            t = (ATerm) ATinsert(CheckATermList(r_55), i_92);
            t_10 = t;
            t = SSLsetAnnotations(t_10, i_55);
          }
        }
    }
    return(t);
  }
  t = k_92(t);
  return(t);
}
static ATerm t_6 (ATerm p_45, ATerm q_45, ATerm t)
{
  t = SSL_hashtable_get(q_45, p_45);
  return(t);
}
static ATerm o_6 (ATerm n_42, ATerm o_42, ATerm t)
{
  ATerm n_92 = NULL;
  t = lookup_table_0_1(n_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(o_42, n_92, t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_11 (ATerm t)
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
static ATerm m_11 (ATerm t)
{
  t = term_a_34;
  return(t);
}
static ATerm o_11 (ATerm t)
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
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_11, g_11, m_11, t);
      LocalPopChoice(h_34);
    }
  else
    {
      t = f_34;
      t = Option_3_0(o_11, p_11, q_11, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL,x_10 = NULL;
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
  t = i_87(t);
  y_92 = t;
  t = x_92;
  t = j_87(t);
  z_92 = t;
  t = (ATerm) ATinsert(CheckATermList(z_92), y_92);
  x_10 = t;
  t = SSLsetAnnotations(x_10, v_92);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_131 (ATerm), ATerm t)
{
  ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL,i_93 = NULL,k_93 = NULL,l_93 = NULL,e_11 = NULL;
  f_93 = t;
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_34;
        t = y_131(t);
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
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
  t = term_u_30;
  l_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, h_93);
  t = r_6(l_93, h_93, t);
  t = i_93;
  {
    static ATerm v_93 (ATerm t);
    static ATerm v_93 (ATerm t)
    {
      ATerm l_34 = t;
      int o_34 = stack_ptr;
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
              t = y_131(t);
              t = Cons_2_0(_id, v_93, t);
            }
          LocalPopChoice(o_34);
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
  e_11 = t;
  t = SSLsetAnnotations(e_11, g_93);
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
  t = term_s_34;
  j_94 = t;
  t = term_a_31;
  k_94 = t;
  t = term_u_34;
  t = r_6(j_94, k_94, t);
  t = term_z_34;
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_b_35;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL;
  c_94 = t;
  t = term_i_31;
  d_94 = t;
  t = term_c_35;
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
      ATerm d_35 = t;
      int e_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_131(t);
          LocalPopChoice(e_35);
        }
      else
        {
          t = d_35;
          {
            ATerm f_35 = t;
            int i_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_11, t_11, u_11, t);
                LocalPopChoice(i_35);
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
    t = parse_options_p__1_0(r_11, t);
  }
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_94 = NULL;
        v_94 = t;
        {
          ATerm l_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_56 = NULL;
              t = v_94;
              {
                ATerm p_35 = t;
                int q_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_56 = NULL,l_56 = NULL;
                    t = term_n_28;
                    k_56 = t;
                    t = term_s_34;
                    l_56 = t;
                    t = term_r_35;
                    t = o_6(k_56, l_56, t);
                    LocalPopChoice(q_35);
                  }
                else
                  {
                    t = p_35;
                    t = fetch_1_0(v_11, t);
                  }
              }
              t = v_94;
              t = w_131(t);
              t = term_z_31;
              f_56 = t;
              t = SSL_exit(f_56);
              LocalPopChoice(o_35);
            }
          else
            {
              t = l_35;
              {
                ATerm v_56 = NULL,x_56 = NULL,z_56 = NULL;
                t = term_n_28;
                x_56 = t;
                t = term_y_33;
                z_56 = t;
                t = term_s_35;
                t = o_6(x_56, z_56, t);
                t = v_94;
                t = x_131(t);
                t = term_z_31;
                v_56 = t;
                t = SSL_exit(v_56);
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
              ATerm w_94 = NULL,x_94 = NULL,y_94 = NULL;
              static ATerm w_11 (ATerm t);
              static ATerm w_11 (ATerm t)
              {
                ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL,h_11 = NULL;
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
                h_11 = t;
                t = SSLsetAnnotations(h_11, z_94);
                return(t);
              }
              t = fetch_1_0(w_11, t);
              t = term_a_33;
              x_94 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_94)), term_v_35);
              y_94 = t;
              t = SSL_printnl(x_94, y_94);
              t = (ATerm) ATmakeAppl(sym__2, term_a_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_94)), term_v_35));
              t = w_131(t);
              t = term_e_33;
              w_94 = t;
              t = SSL_exit(w_94);
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
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
ATerm option_wrap_5_0 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL;
  t = parse_options_3_0(y_129, z_129, a_130, t);
  g_95 = t;
  t = term_w_35;
  t = table_create_0_0(t);
  t = term_w_35;
  h_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_35, term_x_35, g_95);
  t = lookup_table_0_1(h_95, t);
  k_95 = t;
  t = term_x_35;
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
  t = b_130(t);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_130(t);
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
static ATerm e_12 (ATerm t)
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
  t = option_wrap_5_0(e_12, default_system_usage_0_0, default_system_about_0_0, _id, f_12, t);
  return(t);
}
