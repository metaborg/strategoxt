#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_Op_2;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_ExtendOverrideDynamicRules_1;
static Symbol sym_ExtendDynamicRules_1;
static Symbol sym_OverrideDynamicRules_1;
static Symbol sym_GenDynRules_1;
static Symbol sym_LRule_1;
static Symbol sym_Path_2;
static Symbol sym_Seq_2;
static Symbol sym_Scope_2;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_SDefT_4;
static Symbol sym_ConstType_1;
static Symbol sym_Sort_2;
static Symbol sym_Rule_3;
static Symbol sym_RDefT_4;
static Symbol sym_Undefined_0;
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
static Symbol sym_Hashtable_1;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_DynamicRules_1;
static void init_module_constructors (void)
{
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
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
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
}
static ATerm term_w_24;
static ATerm term_u_24;
static ATerm term_t_24;
static ATerm term_h_24;
static ATerm term_g_24;
static ATerm term_f_24;
static ATerm term_c_24;
static ATerm term_b_24;
static ATerm term_q_23;
static ATerm term_p_23;
static ATerm term_o_23;
static ATerm term_n_23;
static ATerm term_m_23;
static ATerm term_e_23;
static ATerm term_w_22;
static ATerm term_v_22;
static ATerm term_t_22;
static ATerm term_s_22;
static ATerm term_q_22;
static ATerm term_p_22;
static ATerm term_o_22;
static ATerm term_l_22;
static ATerm term_k_22;
static ATerm term_g_22;
static ATerm term_e_22;
static ATerm term_d_22;
static ATerm term_q_21;
static ATerm term_p_21;
static ATerm term_o_21;
static ATerm term_n_21;
static ATerm term_g_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_z_20;
static ATerm term_y_20;
static ATerm term_x_20;
static ATerm term_w_20;
static ATerm term_v_20;
static ATerm term_s_20;
static ATerm term_r_20;
static ATerm term_o_20;
static ATerm term_n_20;
static ATerm term_m_20;
static ATerm term_j_20;
static ATerm term_d_20;
static ATerm term_c_20;
static ATerm term_b_20;
static ATerm term_a_20;
static ATerm term_s_19;
static ATerm term_p_19;
static ATerm term_k_19;
static ATerm term_j_19;
static ATerm term_i_19;
static ATerm term_h_19;
static ATerm term_g_19;
static ATerm term_d_19;
static ATerm term_c_19;
static ATerm term_k_18;
static ATerm term_j_18;
static ATerm term_e_18;
static ATerm term_a_18;
static ATerm term_z_17;
static ATerm term_y_17;
static ATerm term_v_17;
static ATerm term_s_17;
static ATerm term_i_17;
static ATerm term_h_17;
static ATerm term_g_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Sort_2, term_g_17, (ATerm) ATempty);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_z_17);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_j_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_j_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_c_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym__2, term_o_20, term_r_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_p_19);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_o_20);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_o_22, term_p_19);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_p_19);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_p_19);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, (ATerm) ATempty);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_m_23);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_o_22);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_p_19);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
static ATerm x_4 (ATerm t_127 (ATerm), ATerm w_47, ATerm v_47, ATerm t);
ATerm genzip_4_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm c_5 (ATerm f_830, ATerm k_830, ATerm z_82, ATerm t);
ATerm while_not_2_0 (ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm t);
ATerm for_3_0 (ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm p_6 (ATerm f_3, ATerm g_3, ATerm i_3, ATerm t);
static ATerm x_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm v_151 (ATerm), ATerm w_151 (ATerm), ATerm x_151 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm e_152 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm g_5 (ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm c_48, ATerm b_48, ATerm t);
static ATerm h_5 (ATerm y_127 (ATerm), ATerm y_47, ATerm x_47, ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm free_vars_3_0 (ATerm i_148 (ATerm), ATerm j_148 (ATerm), ATerm k_148 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm worker_wrapper_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm e_124 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm u_39 (ATerm m_39, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm o_130 (ATerm), ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm worker_wrapper_spec_0_0 (ATerm t);
static ATerm i_5 (ATerm s_57, ATerm t_57, ATerm t);
static ATerm j_5 (ATerm v_41, ATerm w_41, ATerm t);
static ATerm l_5 (ATerm h_123 (ATerm), ATerm m_285, ATerm b_42, ATerm t);
static ATerm k_5 (ATerm r_41, ATerm s_41, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm output_1_0 (ATerm a_144 (ATerm), ATerm t);
static ATerm e_42 (ATerm t_41, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_5 (ATerm x_41, ATerm t);
static ATerm n_5 (ATerm y_55, ATerm z_55, ATerm t);
static ATerm o_5 (ATerm u_57, ATerm v_57, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_43 (ATerm t_42, ATerm t);
static ATerm x_43 (ATerm x_42, ATerm y_42, ATerm z_42, ATerm t);
static ATerm y_43 (ATerm j_43, ATerm k_43, ATerm l_43, ATerm t);
static ATerm p_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm b_144 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm p_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm default_system_usage_2_0 (ATerm z_145 (ATerm), ATerm a_146 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_5 (ATerm y_77, ATerm z_77, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_5 (ATerm e_63, ATerm f_63, ATerm d_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_5 (ATerm n_61, ATerm o_61, ATerm t);
ATerm foldr_2_0 (ATerm m_130 (ATerm), ATerm n_130 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_140 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_5 (ATerm t_67, ATerm u_67, ATerm v_67, ATerm t);
ATerm lookup_table_0_1 (ATerm q_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm b_68, ATerm c_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm s_5 (ATerm y_67, ATerm z_67, ATerm t);
static ATerm t_5 (ATerm d_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_123 (ATerm), ATerm t);
static ATerm a_6 (ATerm w_67, ATerm x_67, ATerm t);
static ATerm v_5 (ATerm x_64, ATerm y_64, ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_89 (ATerm), ATerm l_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_145 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm parse_options_3_0 (ATerm r_145 (ATerm), ATerm s_145 (ATerm), ATerm t_145 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm u_143 (ATerm), ATerm v_143 (ATerm), ATerm w_143 (ATerm), ATerm x_143 (ATerm), ATerm y_143 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
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
static ATerm x_4 (ATerm t_127 (ATerm), ATerm w_47, ATerm v_47, ATerm t)
{
  static ATerm z_0 (ATerm t);
  static ATerm z_0 (ATerm t)
  {
    ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL;
    u_0 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_0;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_0 = ATgetFirst((ATermList) t);
            w_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_8 = t;
          int a_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_0;
              {
                static ATerm a_0 (ATerm t);
                static ATerm a_0 (ATerm t)
                {
                  t = v_47;
                  return(t);
                }
                t = g_5(t_127, a_0, v_0, w_0, t);
              }
              t = z_0(t);
              LocalPopChoice(a_9);
            }
          else
            {
              t = t_8;
              {
                ATerm m_0 = NULL,d_1 = NULL,e_0 = NULL;
                t = SSLgetAnnotations(u_0);
                m_0 = t;
                t = w_0;
                t = z_0(t);
                d_1 = t;
                t = (ATerm) ATinsert(CheckATermList(d_1), v_0);
                e_0 = t;
                t = SSLsetAnnotations(e_0, m_0);
              }
            }
        }
      }
    return(t);
  }
  t = w_47;
  t = z_0(t);
  return(t);
}
ATerm genzip_4_0 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm u_125 (ATerm), ATerm t)
{
  static ATerm l_1 (ATerm t);
  static ATerm l_1 (ATerm t)
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_125(t);
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        {
          ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,i_0 = NULL;
          t = s_125(t);
          k_1 = t;
          if(match_cons(t, sym__2))
            {
              f_1 = ATgetArgument(t, 0);
              g_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_1);
          e_1 = t;
          t = f_1;
          t = u_125(t);
          i_1 = t;
          t = g_1;
          t = l_1(t);
          j_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_1, j_1);
          i_0 = t;
          t = SSLsetAnnotations(i_0, e_1);
          t = t_125(t);
        }
      }
    return(t);
  }
  t = l_1(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if(((ATgetType(d_9) != AT_LIST) || !(ATisEmpty(d_9))))
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(((ATgetType(e_9) != AT_LIST) || !(ATisEmpty(e_9))))
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
  ATerm s_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_9 = ATgetArgument(t, 0);
      if(((ATgetType(f_9) == AT_LIST) && !(ATisEmpty(f_9))))
        {
          s_1 = ATgetFirst((ATermList) f_9);
          u_1 = (ATerm) ATgetNext((ATermList) f_9);
        }
      else
        _fail(t);
      {
        ATerm n_9 = ATgetArgument(t, 1);
        if(((ATgetType(n_9) == AT_LIST) && !(ATisEmpty(n_9))))
          {
            v_1 = ATgetFirst((ATermList) n_9);
            w_1 = (ATerm) ATgetNext((ATermList) n_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_1, v_1), (ATerm) ATmakeAppl(sym__2, u_1, w_1));
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      y_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_1), x_1);
  return(t);
}
static ATerm c_5 (ATerm f_830, ATerm k_830, ATerm z_82, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL;
  t = SSL_explode_term(k_830);
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_830);
  if(match_cons(t, sym__2))
    {
      if((n_1 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_1, p_1);
  t = genzip_4_0(b_0, c_0, h_0, _id, t);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, z_82);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm t)
{
  static ATerm j_2 (ATerm t);
  static ATerm j_2 (ATerm t)
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_116(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = w_116(t);
        t = j_2(t);
      }
    return(t);
  }
  t = j_2(t);
  return(t);
}
ATerm for_3_0 (ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm a_117 (ATerm), ATerm t)
{
  t = y_116(t);
  t = while_not_2_0(z_116, a_117, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm z_2 = NULL;
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_2);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm a_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,n_0 = NULL;
  e_3 = t;
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  a_3 = t;
  t = d_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_3, d_3);
  n_0 = t;
  t = SSLsetAnnotations(n_0, a_3);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,s_4 = NULL;
  m_4 = t;
  if(match_cons(t, sym__2))
    {
      n_4 = ATgetArgument(t, 0);
      o_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_4 = ATgetFirst((ATermList) t);
      s_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_6(n_4, o_4, m_4, t);
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_4), p_4), s_4);
          }
      }
    }
  else
    {
      t = p_6(n_4, o_4, m_4, t);
    }
  return(t);
}
static ATerm p_6 (ATerm f_3, ATerm g_3, ATerm i_3, ATerm t)
{
  ATerm j_3 = NULL,m_3 = NULL,q_0 = NULL,s_3 = NULL,x_3 = NULL,a_4 = NULL,b_4 = NULL;
  t = SSLgetAnnotations(i_3);
  j_3 = t;
  t = g_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_3 = ATgetFirst((ATermList) t);
      b_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_3;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_4;
        if((x_3 != t))
          {
            _fail(t);
          }
        t = b_4;
        LocalPopChoice(v_9);
      }
    else
      {
        t = t_9;
        t = g_3;
        t = c_5(x_3, a_4, b_4, t);
      }
  }
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_3, m_3);
  q_0 = t;
  t = SSLsetAnnotations(q_0, j_3);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm i_6 = NULL;
  if(match_cons(t, sym__2))
    {
      i_6 = ATgetArgument(t, 0);
      if((i_6 != ATgetArgument(t, 1)))
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
  ATerm w_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(k_0, s_0, t_0, t);
      LocalPopChoice(y_9);
    }
  else
    {
      t = w_9;
      {
        ATerm u_5 = NULL,e_6 = NULL,f_6 = NULL;
        u_5 = t;
        if(match_cons(t, sym__2))
          {
            e_6 = ATgetArgument(t, 0);
            f_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_5;
        t = x_4(x_0, e_6, f_6, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm v_151 (ATerm), ATerm w_151 (ATerm), ATerm x_151 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,f_18 = NULL,g_18 = NULL;
  f_18 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_18 = ATgetArgument(t, 0);
      d_18 = ATgetArgument(t, 1);
      {
        ATerm d_2 = NULL,h_2 = NULL,i_2 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(f_18);
        d_2 = t;
        t = g_18;
        t = x_151(t);
        h_2 = t;
        t = d_18;
        t = v_151(t);
        i_2 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_2, i_2);
        a_1 = t;
        t = SSLsetAnnotations(a_1, d_2);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          g_18 = ATgetArgument(t, 0);
          {
            ATerm q_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,b_3 = NULL,l_8 = NULL,k_8 = NULL;
            t = SSLgetAnnotations(f_18);
            q_2 = t;
            t = g_18;
            if(match_cons(t, sym_Rule_3))
              {
                t_2 = ATgetArgument(t, 0);
                u_2 = ATgetArgument(t, 1);
                v_2 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_18);
            s_2 = t;
            t = t_2;
            t = v_151(t);
            w_2 = t;
            t = u_2;
            t = v_151(t);
            x_2 = t;
            t = v_2;
            t = v_151(t);
            y_2 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, w_2, x_2, y_2);
            k_8 = t;
            t = SSLsetAnnotations(k_8, s_2);
            b_3 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, b_3);
            l_8 = t;
            t = SSLsetAnnotations(l_8, q_2);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              g_18 = ATgetArgument(t, 0);
              d_18 = ATgetArgument(t, 1);
              b_18 = ATgetArgument(t, 2);
              {
                ATerm w_3 = NULL,d_4 = NULL,g_4 = NULL,k_4 = NULL,p_8 = NULL;
                t = SSLgetAnnotations(f_18);
                w_3 = t;
                t = g_18;
                t = x_151(t);
                d_4 = t;
                t = d_18;
                t = x_151(t);
                g_4 = t;
                t = b_18;
                t = x_151(t);
                k_4 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, d_4, g_4, k_4);
                p_8 = t;
                t = SSLsetAnnotations(p_8, w_3);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  g_18 = ATgetArgument(t, 0);
                  d_18 = ATgetArgument(t, 1);
                  b_18 = ATgetArgument(t, 2);
                  c_18 = ATgetArgument(t, 3);
                  {
                    ATerm f_5 = NULL,d_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,w_8 = NULL;
                    t = SSLgetAnnotations(f_18);
                    f_5 = t;
                    t = g_18;
                    t = x_151(t);
                    d_6 = t;
                    t = d_18;
                    t = x_151(t);
                    j_6 = t;
                    t = b_18;
                    t = x_151(t);
                    k_6 = t;
                    t = c_18;
                    t = v_151(t);
                    l_6 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, d_6, j_6, k_6, l_6);
                    w_8 = t;
                    t = SSLsetAnnotations(w_8, f_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_18 = ATgetArgument(t, 0);
                      d_18 = ATgetArgument(t, 1);
                      b_18 = ATgetArgument(t, 2);
                      c_18 = ATgetArgument(t, 3);
                      {
                        ATerm y_6 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,x_8 = NULL;
                        t = SSLgetAnnotations(f_18);
                        y_6 = t;
                        t = g_18;
                        t = x_151(t);
                        d_7 = t;
                        t = d_18;
                        t = x_151(t);
                        e_7 = t;
                        t = b_18;
                        t = x_151(t);
                        f_7 = t;
                        t = c_18;
                        t = v_151(t);
                        g_7 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_7, e_7, f_7, g_7);
                        x_8 = t;
                        t = SSLsetAnnotations(x_8, y_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          g_18 = ATgetArgument(t, 0);
                          d_18 = ATgetArgument(t, 1);
                          {
                            ATerm q_7 = NULL,t_7 = NULL,u_7 = NULL,y_8 = NULL;
                            t = SSLgetAnnotations(f_18);
                            q_7 = t;
                            t = g_18;
                            t = x_151(t);
                            t_7 = t;
                            t = d_18;
                            t = v_151(t);
                            u_7 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, t_7, u_7);
                            y_8 = t;
                            t = SSLsetAnnotations(y_8, q_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              g_18 = ATgetArgument(t, 0);
                              d_18 = ATgetArgument(t, 1);
                              {
                                ATerm c_8 = NULL,f_8 = NULL,g_8 = NULL,z_8 = NULL;
                                t = SSLgetAnnotations(f_18);
                                c_8 = t;
                                t = g_18;
                                t = x_151(t);
                                f_8 = t;
                                t = d_18;
                                t = v_151(t);
                                g_8 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, f_8, g_8);
                                z_8 = t;
                                t = SSLsetAnnotations(z_8, c_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  g_18 = ATgetArgument(t, 0);
                                  d_18 = ATgetArgument(t, 1);
                                  {
                                    ATerm r_8 = NULL,u_8 = NULL,v_8 = NULL,g_9 = NULL;
                                    t = SSLgetAnnotations(f_18);
                                    r_8 = t;
                                    t = g_18;
                                    t = x_151(t);
                                    u_8 = t;
                                    t = d_18;
                                    t = v_151(t);
                                    v_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, u_8, v_8);
                                    g_9 = t;
                                    t = SSLsetAnnotations(g_9, r_8);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      g_18 = ATgetArgument(t, 0);
                                      {
                                        ATerm m_9 = NULL,o_9 = NULL,h_9 = NULL;
                                        t = SSLgetAnnotations(f_18);
                                        m_9 = t;
                                        t = g_18;
                                        t = v_151(t);
                                        o_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, o_9);
                                        h_9 = t;
                                        t = SSLsetAnnotations(h_9, m_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          g_18 = ATgetArgument(t, 0);
                                          {
                                            ATerm u_9 = NULL,x_9 = NULL,i_9 = NULL;
                                            t = SSLgetAnnotations(f_18);
                                            u_9 = t;
                                            t = g_18;
                                            t = v_151(t);
                                            x_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, x_9);
                                            i_9 = t;
                                            t = SSLsetAnnotations(i_9, u_9);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              g_18 = ATgetArgument(t, 0);
                                              {
                                                ATerm e_10 = NULL,g_10 = NULL,j_9 = NULL;
                                                t = SSLgetAnnotations(f_18);
                                                e_10 = t;
                                                t = g_18;
                                                t = v_151(t);
                                                g_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, g_10);
                                                j_9 = t;
                                                t = SSLsetAnnotations(j_9, e_10);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  g_18 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm n_10 = NULL,p_10 = NULL,k_9 = NULL;
                                                    t = SSLgetAnnotations(f_18);
                                                    n_10 = t;
                                                    t = g_18;
                                                    t = v_151(t);
                                                    p_10 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, p_10);
                                                    k_9 = t;
                                                    t = SSLsetAnnotations(k_9, n_10);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm x_10 = NULL,z_10 = NULL,l_9 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      g_18 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(f_18);
                                                  x_10 = t;
                                                  t = g_18;
                                                  t = v_151(t);
                                                  z_10 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, z_10);
                                                  l_9 = t;
                                                  t = SSLsetAnnotations(l_9, x_10);
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
ATerm dynrule_targs_1_0 (ATerm e_152 (ATerm), ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,f_20 = NULL;
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          x_19 = ATgetArgument(t, 0);
          {
            ATerm b_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_10);
      t = x_19;
      if(match_cons(t, sym_DynRuleId_1))
        {
          y_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_19;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm c_10 = ATgetArgument(t, 0);
          ATerm d_10 = ATgetArgument(t, 1);
          f_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_20;
    }
  else
    {
      t = z_9;
      {
        ATerm f_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                x_19 = ATgetArgument(t, 0);
                {
                  ATerm i_10 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_10);
            t = x_19;
            if(match_cons(t, sym_DynRuleId_1))
              {
                y_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_19;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_10 = ATgetArgument(t, 0);
                ATerm k_10 = ATgetArgument(t, 1);
                f_20 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_20;
          }
        else
          {
            t = f_10;
            if(match_cons(t, sym_AddDynRule_2))
              {
                x_19 = ATgetArgument(t, 0);
                {
                  ATerm l_10 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = x_19;
            if(match_cons(t, sym_DynRuleId_1))
              {
                y_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_19;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_10 = ATgetArgument(t, 0);
                ATerm o_10 = ATgetArgument(t, 1);
                f_20 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_20;
          }
      }
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm s_21 = NULL;
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_21 = ATgetArgument(t, 0);
          {
            ATerm s_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_10);
      t = s_21;
    }
  else
    {
      t = q_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_21;
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm a_22 = NULL;
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_22 = ATgetArgument(t, 0);
          {
            ATerm v_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_10);
      t = a_22;
    }
  else
    {
      t = t_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_22;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm i_21 = NULL;
  ATerm w_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm a_11 = ATgetArgument(t, 0);
          ATerm b_11 = ATgetArgument(t, 1);
          i_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(y_10);
      t = i_21;
      t = map_1_0(y_0, t);
    }
  else
    {
      t = w_10;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm c_11 = ATgetArgument(t, 0);
          ATerm d_11 = ATgetArgument(t, 1);
          i_21 = ATgetArgument(t, 2);
          {
            ATerm e_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = i_21;
      t = map_1_0(b_1, t);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm v_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_24);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_11);
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
              ATerm k_11 = t;
              int m_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_24 = NULL,a_25 = NULL,d_25 = NULL,e_25 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_24 = ATgetArgument(t, 0);
                      a_25 = ATgetArgument(t, 1);
                      d_25 = ATgetArgument(t, 2);
                      e_25 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_25;
                  t = map_1_0(m_1, t);
                  LocalPopChoice(m_11);
                }
              else
                {
                  t = k_11;
                  {
                    ATerm n_11 = t;
                    int o_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_11);
                      }
                    else
                      {
                        t = n_11;
                        t = dynrule_targs_1_0(r_1, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm x_25 = NULL;
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_25 = ATgetArgument(t, 0);
          {
            ATerm r_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_11);
      t = x_25;
    }
  else
    {
      t = p_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_25;
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = map_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm e_26 = NULL;
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_26 = ATgetArgument(t, 0);
          {
            ATerm w_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_11);
      t = e_26;
    }
  else
    {
      t = u_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_26;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm m_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_26);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm a_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_12);
          }
        else
          {
            t = a_12;
            {
              ATerm g_12 = t;
              int k_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_26 = ATgetArgument(t, 0);
                      q_26 = ATgetArgument(t, 1);
                      r_26 = ATgetArgument(t, 2);
                      s_26 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_26;
                  t = map_1_0(b_2, t);
                  LocalPopChoice(k_12);
                }
              else
                {
                  t = g_12;
                  {
                    ATerm l_12 = t;
                    int m_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_12);
                      }
                    else
                      {
                        t = l_12;
                        t = dynrule_targs_1_0(c_2, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm h_27 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_27 = ATgetArgument(t, 0);
          {
            ATerm u_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_12);
      t = h_27;
    }
  else
    {
      t = r_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_27;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = map_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm x_27 = NULL;
  ATerm w_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_27 = ATgetArgument(t, 0);
          {
            ATerm b_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_12);
      t = x_27;
    }
  else
    {
      t = w_12;
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
static ATerm f_2 (ATerm t)
{
  ATerm b_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_28);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm f_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_13);
    }
  else
    {
      t = f_13;
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm k_13 = t;
              int l_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_28 = ATgetArgument(t, 0);
                      h_28 = ATgetArgument(t, 1);
                      i_28 = ATgetArgument(t, 2);
                      j_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_28;
                  t = map_1_0(k_2, t);
                  LocalPopChoice(l_13);
                }
              else
                {
                  t = k_13;
                  {
                    ATerm n_13 = t;
                    int p_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(p_13);
                      }
                    else
                      {
                        t = n_13;
                        t = dynrule_targs_1_0(l_2, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm v_28 = NULL;
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_28 = ATgetArgument(t, 0);
          {
            ATerm s_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_13);
      t = v_28;
    }
  else
    {
      t = q_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_28;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = map_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm c_29 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_29 = ATgetArgument(t, 0);
          {
            ATerm v_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_13);
      t = c_29;
    }
  else
    {
      t = t_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_29;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm i_29 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_29);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            {
              ATerm a_14 = t;
              int b_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_29 = ATgetArgument(t, 0);
                      l_29 = ATgetArgument(t, 1);
                      m_29 = ATgetArgument(t, 2);
                      n_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_29;
                  t = map_1_0(p_2, t);
                  LocalPopChoice(b_14);
                }
              else
                {
                  t = a_14;
                  {
                    ATerm c_14 = t;
                    int d_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_14);
                      }
                    else
                      {
                        t = c_14;
                        t = dynrule_targs_1_0(r_2, t);
                      }
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
  ATerm a_30 = NULL;
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_30 = ATgetArgument(t, 0);
          {
            ATerm i_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_14);
      t = a_30;
    }
  else
    {
      t = g_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_30;
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = map_1_0(h_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm j_30 = NULL;
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_30 = ATgetArgument(t, 0);
          {
            ATerm l_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_14);
      t = j_30;
    }
  else
    {
      t = j_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_30;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm t_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_30);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm m_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_14);
    }
  else
    {
      t = m_14;
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            {
              ATerm r_14 = t;
              int t_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_30 = NULL,f_31 = NULL,g_31 = NULL,j_31 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_30 = ATgetArgument(t, 0);
                      f_31 = ATgetArgument(t, 1);
                      g_31 = ATgetArgument(t, 2);
                      j_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_31;
                  t = map_1_0(n_3, t);
                  LocalPopChoice(t_14);
                }
              else
                {
                  t = r_14;
                  {
                    ATerm v_14 = t;
                    int w_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_14);
                      }
                    else
                      {
                        t = v_14;
                        t = dynrule_targs_1_0(o_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm y_31 = NULL;
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_31 = ATgetArgument(t, 0);
          {
            ATerm d_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_15);
      t = y_31;
    }
  else
    {
      t = b_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_31;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = map_1_0(p_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm h_32 = NULL;
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_32 = ATgetArgument(t, 0);
          {
            ATerm g_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_15);
      t = h_32;
    }
  else
    {
      t = e_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_32;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm q_24 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      q_24 = ATgetArgument(t, 0);
      t = q_24;
      t = free_vars_3_0(c_1, h_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          q_24 = ATgetArgument(t, 0);
          t = q_24;
          t = free_vars_3_0(z_1, a_2, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              q_24 = ATgetArgument(t, 0);
              t = q_24;
              t = free_vars_3_0(f_2, g_2, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_24 = ATgetArgument(t, 0);
                  t = q_24;
                  t = free_vars_3_0(n_2, o_2, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      q_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_24;
                  t = free_vars_3_0(k_3, l_3, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm m_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_33);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            {
              ATerm m_15 = t;
              int q_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_33 = NULL,r_33 = NULL,t_33 = NULL,u_33 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_33 = ATgetArgument(t, 0);
                      r_33 = ATgetArgument(t, 1);
                      t_33 = ATgetArgument(t, 2);
                      u_33 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_33;
                  t = map_1_0(t_3, t);
                  LocalPopChoice(q_15);
                }
              else
                {
                  t = m_15;
                  {
                    ATerm r_15 = t;
                    int t_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_15);
                      }
                    else
                      {
                        t = r_15;
                        t = dynrule_targs_1_0(u_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm d_34 = NULL;
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_34 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_15);
      t = d_34;
    }
  else
    {
      t = u_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_34;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = map_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm i_34 = NULL;
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_34 = ATgetArgument(t, 0);
          {
            ATerm z_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_15);
      t = i_34;
    }
  else
    {
      t = x_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_34;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm a_33 = NULL,j_33 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_33 = ATgetArgument(t, 0);
      t = j_33;
      if(match_cons(t, sym_Rule_3))
        {
          a_33 = ATgetArgument(t, 0);
          {
            ATerm a_16 = ATgetArgument(t, 1);
          }
          {
            ATerm b_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = a_33;
      t = free_vars_3_0(q_3, r_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_33 = ATgetArgument(t, 0);
          {
            ATerm c_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_33;
    }
  return(t);
}
static ATerm g_5 (ATerm b_128 (ATerm), ATerm c_128 (ATerm), ATerm c_48, ATerm b_48, ATerm t)
{
  t = c_128(t);
  {
    static ATerm y_3 (ATerm t);
    static ATerm y_3 (ATerm t)
    {
      ATerm m_34 = NULL;
      m_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_48, m_34);
      t = b_128(t);
      return(t);
    }
    t = fetch_1_0(y_3, t);
  }
  t = b_48;
  return(t);
}
static ATerm h_5 (ATerm y_127 (ATerm), ATerm y_47, ATerm x_47, ATerm t)
{
  static ATerm c_35 (ATerm t);
  static ATerm c_35 (ATerm t)
  {
    ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
    x_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_47;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_34 = ATgetFirst((ATermList) t);
            z_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_16 = t;
          int e_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_34;
              {
                static ATerm z_3 (ATerm t);
                static ATerm z_3 (ATerm t)
                {
                  t = x_47;
                  return(t);
                }
                t = g_5(y_127, z_3, y_34, z_34, t);
              }
              t = c_35(t);
              LocalPopChoice(e_16);
            }
          else
            {
              t = d_16;
              {
                ATerm h_11 = NULL,l_11 = NULL,z_11 = NULL;
                t = SSLgetAnnotations(x_34);
                h_11 = t;
                t = z_34;
                t = c_35(t);
                l_11 = t;
                t = (ATerm) ATinsert(CheckATermList(l_11), y_34);
                z_11 = t;
                t = SSLsetAnnotations(z_11, h_11);
              }
            }
        }
      }
    return(t);
  }
  t = y_47;
  t = c_35(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(i_4, h_12, i_12, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      if((j_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(q_4, c_13, d_13, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      if((e_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm i_148 (ATerm), ATerm j_148 (ATerm), ATerm k_148 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm t_35 (ATerm t);
  static ATerm t_35 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_148(t);
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        {
          ATerm h_16 = t;
          int i_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_35 = NULL,i_35 = NULL,s_11 = NULL,t_11 = NULL;
              h_35 = t;
              t = j_148(t);
              i_35 = t;
              t = h_35;
              {
                static ATerm c_4 (ATerm t);
                static ATerm c_4 (ATerm t)
                {
                  ATerm k_35 = NULL;
                  t = t_35(t);
                  k_35 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_35, i_35);
                  t = diff_0_0(t);
                  return(t);
                }
                t = k_148(c_4, t_35, e_4, t);
              }
              t_11 = t;
              t = SSL_explode_term(t_11);
              if(match_cons(t, sym__2))
                {
                  ATerm k_16 = ATgetArgument(t, 0);
                  s_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_11;
              t = foldr_3_0(f_4, h_4, _id, t);
              LocalPopChoice(i_16);
            }
          else
            {
              t = h_16;
              {
                ATerm n_12 = NULL,o_12 = NULL;
                o_12 = t;
                t = SSL_explode_term(o_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_16 = ATgetArgument(t, 0);
                    n_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_12;
                t = foldr_3_0(j_4, l_4, t_35, t);
              }
            }
        }
      }
    return(t);
  }
  t = t_35(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm h_15 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_15);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm o_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_16);
          }
        else
          {
            t = o_16;
            {
              ATerm r_16 = t;
              int s_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,s_15 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_15 = ATgetArgument(t, 0);
                      o_15 = ATgetArgument(t, 1);
                      p_15 = ATgetArgument(t, 2);
                      s_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_15;
                  t = map_1_0(u_4, t);
                  LocalPopChoice(s_16);
                }
              else
                {
                  t = r_16;
                  {
                    ATerm t_16 = t;
                    int u_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_16);
                      }
                    else
                      {
                        t = t_16;
                        t = dynrule_targs_1_0(v_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm j_16 = NULL;
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_16 = ATgetArgument(t, 0);
          {
            ATerm x_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_16);
      t = j_16;
    }
  else
    {
      t = v_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_16;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = map_1_0(w_4, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm p_16 = NULL;
  ATerm y_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_16 = ATgetArgument(t, 0);
          {
            ATerm b_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_17);
      t = p_16;
    }
  else
    {
      t = y_16;
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
static ATerm y_4 (ATerm t)
{
  ATerm z_16 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_16 = ATgetArgument(t, 0);
      {
        ATerm f_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_16;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm c_17 = NULL;
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_17, term_i_17);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm d_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      d_17 = ATgetArgument(t, 0);
      {
        ATerm j_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_17), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm e_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_17 = ATgetArgument(t, 0);
      {
        ATerm k_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, e_17);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  y_37 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_37 = ATgetArgument(t, 0);
      a_38 = ATgetArgument(t, 1);
      b_38 = ATgetArgument(t, 2);
      c_38 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = c_38;
  if(match_cons(t, sym_Seq_2))
    {
      d_38 = ATgetArgument(t, 0);
      e_38 = ATgetArgument(t, 1);
      t = d_38;
      if(match_cons(t, sym_Match_1))
        {
          x_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, z_37, a_38, b_38, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_37), e_38)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm e_14 = NULL,f_14 = NULL,n_14 = NULL,s_14 = NULL,u_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          d_38 = ATgetArgument(t, 0);
          e_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_38;
      if(match_cons(t, sym_Seq_2))
        {
          f_38 = ATgetArgument(t, 0);
          h_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_38;
      if(match_cons(t, sym_Match_1))
        {
          g_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_38;
      if(match_cons(t, sym_Op_2))
        {
          ATerm l_17 = ATgetArgument(t, 0);
          ATerm m_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_38;
      t = free_vars_3_0(r_4, t_4, tboundin_3_0, t);
      z_14 = t;
      t = b_38;
      t = map_1_0(y_4, t);
      a_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_14, a_15);
      t = diff_0_0(t);
      f_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_38, f_14);
      t = diff_0_0(t);
      e_14 = t;
      t = f_14;
      t = map_1_0(z_4, t);
      n_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_38, n_14);
      t = conc_0_0(t);
      x_14 = t;
      t = new_0_0(t);
      s_14 = t;
      t = a_38;
      t = map_1_0(a_5, t);
      u_14 = t;
      t = x_14;
      t = map_1_0(b_5, t);
      y_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, s_14, a_38, x_14, (ATerm) ATmakeAppl(sym_Scope_2, e_14, h_38))), (ATerm) ATmakeAppl(sym_SDefT_4, z_37, a_38, b_38, (ATerm) ATmakeAppl(sym_Scope_2, f_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_38), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_14), u_14, y_14)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_124 (ATerm), ATerm t)
{
  static ATerm i_39 (ATerm t);
  static ATerm i_39 (ATerm t)
  {
    ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
    h_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_39 = ATgetFirst((ATermList) t);
        g_39 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_18 = NULL,a_19 = NULL,b_12 = NULL;
          t = SSLgetAnnotations(h_39);
          x_18 = t;
          t = g_39;
          t = i_39(t);
          a_19 = t;
          t = (ATerm) ATinsert(CheckATermList(a_19), f_39);
          b_12 = t;
          t = SSLsetAnnotations(b_12, x_18);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_39;
        t = e_124(t);
      }
    return(t);
  }
  t = i_39(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
  p_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_38;
    }
  else
    {
      static ATerm d_5 (ATerm t);
      static ATerm d_5 (ATerm t)
      {
        t = not_null(r_38);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_38 = ATgetFirst((ATermList) t);
          if(((r_38 != NULL) && (r_38 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_38;
      t = at_end_1_0(d_5, t);
    }
  return(t);
}
static ATerm u_39 (ATerm m_39, ATerm t)
{
  ATerm n_39 = NULL;
  t = SSL_explode_term(m_39);
  if(match_cons(t, sym__2))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_39;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
  r_39 = t;
  if(match_cons(t, sym__2))
    {
      p_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_5 (ATerm t);
            static ATerm e_5 (ATerm t)
            {
              t = q_39;
              return(t);
            }
            t = p_39;
            t = at_end_1_0(e_5, t);
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            t = u_39(r_39, t);
          }
      }
    }
  else
    {
      t = u_39(r_39, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm o_130 (ATerm), ATerm p_130 (ATerm), ATerm q_130 (ATerm), ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_39;
      t = o_130(t);
    }
  else
    {
      ATerm b_40 = NULL,c_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_39 = ATgetFirst((ATermList) t);
          y_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_39;
      t = q_130(t);
      b_40 = t;
      t = y_39;
      t = foldr_3_0(o_130, p_130, q_130, t);
      c_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_40, c_40);
      t = p_130(t);
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,d_12 = NULL;
  p_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_40);
  m_40 = t;
  t = n_40;
  t = foldr_3_0(_id, conc_0_0, b_6, t);
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_40);
  d_12 = t;
  t = SSLsetAnnotations(d_12, m_40);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm r_40 = NULL;
        r_40 = t;
        t = (ATerm) ATinsert(ATempty, r_40);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,f_12 = NULL,e_12 = NULL;
  l_40 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_40);
  e_40 = t;
  t = f_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_40 = ATgetFirst((ATermList) t);
      i_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_40);
  g_40 = t;
  t = i_40;
  t = Cons_2_0(r_5, x_5, t);
  j_40 = t;
  t = (ATerm) ATinsert(CheckATermList(j_40), h_40);
  e_12 = t;
  t = SSLsetAnnotations(e_12, g_40);
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_40);
  f_12 = t;
  t = SSLsetAnnotations(f_12, e_40);
  return(t);
}
static ATerm i_5 (ATerm s_57, ATerm t_57, ATerm t)
{
  ATerm t_40 = NULL;
  t = SSL_fputc(s_57, t_57);
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_40);
  return(t);
}
static ATerm j_5 (ATerm v_41, ATerm w_41, ATerm t)
{
  ATerm u_40 = NULL;
  t = SSL_write_term_to_stream_text(v_41, w_41);
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_40);
  return(t);
}
static ATerm l_5 (ATerm h_123 (ATerm), ATerm m_285, ATerm b_42, ATerm t)
{
  ATerm v_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_285, term_s_17);
  t = p_5(t);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_40, b_42);
  t = h_123(t);
  t = fclose_0_0(t);
  t = b_42;
  return(t);
}
static ATerm k_5 (ATerm r_41, ATerm s_41, ATerm t)
{
  ATerm w_40 = NULL;
  t = SSL_write_term_to_stream_baf(r_41, s_41);
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_40);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if(match_cons(t_17, sym_Stream_1))
        {
          d_41 = ATgetArgument(t_17, 0);
        }
      else
        _fail(t);
      e_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(d_41, e_41, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      if(match_cons(u_17, sym_Stream_1))
        {
          i_41 = ATgetArgument(u_17, 0);
        }
      else
        _fail(t);
      j_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(i_41, j_41, t);
  f_41 = t;
  t = term_v_17;
  g_41 = t;
  t = f_41;
  if(match_cons(t, sym_Stream_1))
    {
      h_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, f_41);
  t = i_5(g_41, h_41, t);
  return(t);
}
ATerm output_1_0 (ATerm a_144 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL;
  t = a_144(t);
  y_40 = t;
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_40 = NULL,a_41 = NULL;
        t = term_y_17;
        z_40 = t;
        t = term_z_17;
        a_41 = t;
        t = term_a_18;
        t = v_5(z_40, a_41, t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = term_e_18;
      }
  }
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_40, y_40);
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_41 = NULL,c_41 = NULL;
        t = term_y_17;
        b_41 = t;
        t = term_j_18;
        c_41 = t;
        t = term_k_18;
        t = v_5(b_41, c_41, t);
        t = (ATerm) ATmakeAppl(sym__2, x_40, y_40);
        LocalPopChoice(i_18);
        if(match_cons(t, sym__2))
          {
            ATerm l_18 = ATgetArgument(t, 0);
            ATerm m_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_5(c_6, x_40, y_40, t);
      }
    else
      {
        t = h_18;
        if(match_cons(t, sym__2))
          {
            ATerm n_18 = ATgetArgument(t, 0);
            ATerm o_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_5(g_6, x_40, y_40, t);
      }
  }
  return(t);
}
static ATerm e_42 (ATerm t_41, ATerm t)
{
  t = SSL_fclose(t_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_41 = NULL,c_42 = NULL;
  c_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_41 = ATgetArgument(t, 0);
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_41);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = e_42(c_42, t);
          }
      }
    }
  else
    {
      t = e_42(c_42, t);
    }
  return(t);
}
static ATerm m_5 (ATerm x_41, ATerm t)
{
  t = SSL_read_term_from_stream(x_41);
  return(t);
}
static ATerm n_5 (ATerm y_55, ATerm z_55, ATerm t)
{
  t = SSL_strcat(y_55, z_55);
  return(t);
}
static ATerm o_5 (ATerm u_57, ATerm v_57, ATerm t)
{
  ATerm f_42 = NULL;
  t = SSL_fopen(u_57, v_57);
  f_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_42 = NULL;
  t = SSL_stdin_stream();
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_42 = NULL;
  t = SSL_stdout_stream();
  m_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_42 = NULL;
  t = SSL_stderr_stream();
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_42);
  return(t);
}
static ATerm w_43 (ATerm t_42, ATerm t)
{
  ATerm u_42 = NULL;
  t = SSL_explode_term(t_42);
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_18 = ATgetArgument(t, 1);
        if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
          {
            u_42 = ATgetFirst((ATermList) s_18);
            {
              ATerm t_18 = (ATerm) ATgetNext((ATermList) s_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_43 (ATerm x_42, ATerm y_42, ATerm z_42, ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,h_43 = NULL,p_12 = NULL;
  t = SSLgetAnnotations(z_42);
  c_43 = t;
  t = x_42;
  if(match_cons(t, sym_Path_1))
    {
      h_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_43, y_42);
  p_12 = t;
  t = SSLsetAnnotations(p_12, c_43);
  if(match_cons(t, sym__2))
    {
      a_43 = ATgetArgument(t, 0);
      b_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(a_43, b_43, t);
  return(t);
}
static ATerm y_43 (ATerm j_43, ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,r_43 = NULL,q_12 = NULL;
  t = SSLgetAnnotations(l_43);
  o_43 = t;
  t = SSL_is_string(j_43);
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_43, k_43);
  q_12 = t;
  t = SSLsetAnnotations(q_12, o_43);
  if(match_cons(t, sym__2))
    {
      m_43 = ATgetArgument(t, 0);
      n_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(m_43, n_43, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t_43 = t;
  if(match_cons(t, sym__2))
    {
      u_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_43(t_43, t);
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
                  t = x_43(u_43, v_43, t_43, t);
                  LocalPopChoice(y_18);
                }
              else
                {
                  t = w_18;
                  t = y_43(u_43, v_43, t_43, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_43(t_43, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,h_44 = NULL;
  h_44 = t;
  {
    ATerm z_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_44, term_c_19);
        t = p_5(t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = z_18;
        {
          ATerm q_19 = NULL,r_19 = NULL;
          t = term_d_19;
          r_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_19, h_44);
          t = n_5(r_19, h_44, t);
          q_19 = t;
          t = SSL_perror(q_19);
          _fail(t);
        }
      }
  }
  b_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(c_44, t);
  a_44 = t;
  t = b_44;
  t = fclose_0_0(t);
  t = a_44;
  return(t);
}
ATerm input_1_0 (ATerm b_144 (ATerm), ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_44 = NULL,l_44 = NULL;
      t = term_y_17;
      k_44 = t;
      t = term_g_19;
      l_44 = t;
      t = term_h_19;
      t = v_5(k_44, l_44, t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = term_i_19;
    }
  t = ReadFromFile_0_0(t);
  t = b_144(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL;
  t = term_y_17;
  m_44 = t;
  t = term_j_19;
  n_44 = t;
  t = term_k_19;
  t = v_5(m_44, n_44, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
  p_44 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_19 = ATgetFirst((ATermList) t);
                ATerm o_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_44;
          }
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = (ATerm) ATinsert(ATempty, p_44);
      }
  }
  q_44 = t;
  t = term_e_18;
  r_44 = t;
  t = SSL_printnl(r_44, q_44);
  t = p_44;
  return(t);
}
ATerm map_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  static ATerm j_45 (ATerm t);
  static ATerm j_45 (ATerm t)
  {
    ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
    g_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_45;
      }
    else
      {
        ATerm z_19 = NULL,e_20 = NULL,g_20 = NULL,t_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_45 = ATgetFirst((ATermList) t);
            i_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_45);
        z_19 = t;
        t = h_45;
        t = p_123(t);
        e_20 = t;
        t = i_45;
        t = j_45(t);
        g_20 = t;
        t = (ATerm) ATinsert(CheckATermList(g_20), e_20);
        t_12 = t;
        t = SSLsetAnnotations(t_12, z_19);
      }
    return(t);
  }
  t = j_45(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_45 = ATgetFirst((ATermList) t);
      n_45 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_45 = NULL,s_45 = NULL;
        static ATerm h_6 (ATerm t);
        static ATerm h_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_45)), not_null(s_45));
          return(t);
        }
        t = n_45;
        t = r_0(t);
        if(((r_45 != NULL) && (r_45 != t)))
          _fail(t);
        else
          r_45 = t;
        t = m_45;
        t = p_0(t);
        if(((s_45 != NULL) && (s_45 != t)))
          _fail(t);
        else
          s_45 = t;
        t = n_45;
        t = reverse_acc_2_0(p_0, h_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_19;
      t = r_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,v_12 = NULL;
  c_46 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_46);
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_46);
  v_12 = t;
  t = SSLsetAnnotations(v_12, a_46);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm g_46 = NULL;
  g_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_46), term_s_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm z_145 (ATerm), ATerm a_146 (ATerm), ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL;
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_45 = NULL,z_45 = NULL;
      t = term_y_17;
      y_45 = t;
      t = term_j_19;
      z_45 = t;
      t = term_k_19;
      t = v_5(y_45, z_45, t);
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      t = fetch_1_0(m_6, t);
    }
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_145(t);
        t = echo_0_0(t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
      }
  }
  t = term_a_20;
  t = echo_0_0(t);
  t = term_b_20;
  w_45 = t;
  t = term_c_20;
  x_45 = t;
  t = term_d_20;
  t = v_5(w_45, x_45, t);
  t = reverse_acc_2_0(_id, n_6, t);
  t = map_1_0(o_6, t);
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_46 = NULL;
        t = a_146(t);
        h_46 = t;
        t = (ATerm) ATinsert(CheckATermList(h_46), term_j_20);
        t = echo_0_0(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,x_12 = NULL;
  p_46 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_46);
  n_46 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_46);
  x_12 = t;
  t = SSLsetAnnotations(x_12, n_46);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_46 = NULL,m_46 = NULL;
        t = term_y_17;
        l_46 = t;
        t = term_j_19;
        m_46 = t;
        t = term_k_19;
        t = v_5(l_46, m_46, t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        t = fetch_1_0(q_6, t);
      }
  }
  t = k_46;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm r_46 = NULL;
  r_46 = t;
  if(match_string(t, "-k"))
    {
      t = r_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_46;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
  s_46 = t;
  t = SSL_string_to_int(s_46);
  t_46 = t;
  t = term_m_20;
  u_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_20, t_46);
  t = y_5(u_46, t_46, t);
  t = s_46;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_n_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_6, s_6, t_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm w_46 = NULL;
  w_46 = t;
  if(match_string(t, "-S"))
    {
      t = w_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_46;
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL;
  t = term_o_20;
  x_46 = t;
  t = term_r_20;
  y_46 = t;
  t = term_s_20;
  t = y_5(x_46, y_46, t);
  t = term_v_20;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_w_20;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
  z_46 = t;
  t = SSL_string_to_int(z_46);
  a_47 = t;
  t = term_o_20;
  b_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_20, a_47);
  t = y_5(b_47, a_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_46);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_x_20;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL;
  t = term_y_20;
  c_47 = t;
  t = term_p_19;
  d_47 = t;
  t = term_z_20;
  t = y_5(c_47, d_47, t);
  t = term_a_21;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_6, v_6, w_6, t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_6, z_6, a_7, t);
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            t = Option_3_0(b_7, c_7, h_7, t);
          }
      }
    }
  return(t);
}
static ATerm y_5 (ATerm y_77, ATerm z_77, ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL;
  t = term_y_17;
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_17, y_77, z_77);
  t = lookup_table_0_1(e_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(y_77, z_77, f_47, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_17, y_77, z_77);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
      t = term_p_19;
      t = g_0(t);
      l_47 = t;
      t = term_b_20;
      m_47 = t;
      t = term_c_20;
      n_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, l_47);
      t = w_5(m_47, n_47, l_47, t);
      _fail(t);
    }
  else
    {
      ATerm q_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_47 = ATgetFirst((ATermList) t);
          k_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_47;
      t = d_0(t);
      t = term_p_19;
      t = f_0(t);
      q_47 = t;
      t = (ATerm) ATinsert(CheckATermList(k_47), q_47);
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm s_47 = NULL;
  s_47 = t;
  if(match_string(t, "-o"))
    {
      t = s_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_47;
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL;
  t_47 = t;
  t = term_z_17;
  u_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, t_47);
  t = y_5(u_47, t_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_47);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_g_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_7, j_7, k_7, t);
  return(t);
}
static ATerm w_5 (ATerm e_63, ATerm f_63, ATerm d_63, ATerm t)
{
  ATerm a_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_63, f_63);
  {
    ATerm h_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            ATerm m_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_63, f_63);
        t = v_5(e_63, f_63, t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = h_21;
        t = (ATerm) ATempty;
      }
  }
  e_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_63, f_63, (ATerm) ATinsert(CheckATermList(e_48), d_63));
  t = lookup_table_0_1(e_63, t);
  h_48 = t;
  t = (ATerm) ATinsert(CheckATermList(e_48), d_63);
  f_48 = t;
  t = h_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(f_63, f_48, g_48, t);
  t = a_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
      t = term_p_19;
      t = o_0(t);
      s_48 = t;
      t = term_b_20;
      t_48 = t;
      t = term_c_20;
      u_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, s_48);
      t = w_5(t_48, u_48, s_48, t);
      _fail(t);
    }
  else
    {
      ATerm c_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_48 = ATgetFirst((ATermList) t);
          p_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_48 = ATgetFirst((ATermList) t);
          r_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_48;
      t = j_0(t);
      t = q_48;
      t = l_0(t);
      c_49 = t;
      t = (ATerm) ATinsert(CheckATermList(r_48), c_49);
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm e_49 = NULL;
  e_49 = t;
  if(match_string(t, "-i"))
    {
      t = e_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_49;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL;
  f_49 = t;
  t = term_g_19;
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, f_49);
  t = y_5(g_49, f_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_49);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_7, m_7, n_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_19;
  t = whoami_0_0(t);
  h_49 = t;
  t = term_o_21;
  j_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_21), h_49);
  k_49 = t;
  t = SSL_printnl(j_49, k_49);
  t = term_q_21;
  i_49 = t;
  t = SSL_exit(i_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL;
  t = term_y_17;
  l_49 = t;
  t = term_j_19;
  m_49 = t;
  t = term_k_19;
  t = v_5(l_49, m_49, t);
  return(t);
}
static ATerm q_5 (ATerm n_61, ATerm o_61, ATerm t)
{
  ATerm r_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_61, o_61);
      LocalPopChoice(t_21);
    }
  else
    {
      t = r_21;
      t = SSL_addr(n_61, o_61);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_130 (ATerm), ATerm n_130 (ATerm), ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
  o_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_49;
      t = m_130(t);
    }
  else
    {
      ATerm t_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_49 = ATgetFirst((ATermList) t);
          q_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_49;
      t = foldr_2_0(m_130, n_130, t);
      t_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_49, t_49);
      t = n_130(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_r_20;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      t_20 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(t_20, u_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_49 = NULL,p_20 = NULL,q_20 = NULL;
  t = times_0_0(t);
  q_20 = t;
  t = SSL_explode_term(q_20);
  if(match_cons(t, sym__2))
    {
      ATerm v_21 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_20;
  t = foldr_2_0(o_7, p_7, t);
  w_49 = t;
  t = SSL_TicksToSeconds(w_49);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
  h_50 = t;
  if(match_cons(t, sym__2))
    {
      i_50 = ATgetArgument(t, 0);
      j_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_50;
        if((i_50 != t))
          {
            _fail(t);
          }
        t = h_50;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = (ATerm) ATmakeAppl(sym__2, i_50, j_50);
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_50, j_50);
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              t = SSL_gtr(i_50, j_50);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_50, j_50);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_140 (ATerm), ATerm t)
{
  ATerm n_50 = NULL;
  n_50 = t;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
        t = term_y_17;
        q_50 = t;
        t = term_o_20;
        r_50 = t;
        t = term_d_22;
        t = v_5(q_50, r_50, t);
        p_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_50, term_q_21);
        t = geq_0_0(t);
        t = n_50;
        t = w_140(t);
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = n_50;
      }
  }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,w_50 = NULL,x_50 = NULL;
  t = run_time_0_0(t);
  t_50 = t;
  t = term_p_19;
  t = whoami_0_0(t);
  u_50 = t;
  t = term_o_21;
  w_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_22), t_50), term_e_22), u_50);
  x_50 = t;
  t = SSL_printnl(w_50, x_50);
  t = (ATerm) ATmakeAppl(sym__2, term_o_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_22), t_50), term_e_22), u_50));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_20;
  y_50 = t;
  t = SSL_exit(y_50);
  return(t);
}
static ATerm z_5 (ATerm t_67, ATerm u_67, ATerm v_67, ATerm t)
{
  ATerm z_50 = NULL;
  t = SSL_hashtable_put(v_67, t_67, u_67);
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_64, ATerm t)
{
  ATerm i_51 = NULL;
  t = table_hashtable_0_0(t);
  i_51 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_21 = NULL;
        t = i_51;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_6(q_64, j_21, t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        {
          ATerm u_21 = NULL;
          t = q_64;
          t = table_create_0_0(t);
          t = i_51;
          if(match_cons(t, sym_Hashtable_1))
            {
              u_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_6(q_64, u_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm b_68, ATerm c_68, ATerm t)
{
  ATerm l_51 = NULL;
  t = SSL_hashtable_create(b_68, c_68);
  l_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_51);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,q_51 = NULL,r_51 = NULL;
  m_51 = t;
  t = term_k_22;
  q_51 = t;
  t = term_l_22;
  r_51 = t;
  t = m_51;
  t = new_hashtable_0_2(q_51, r_51, t);
  n_51 = t;
  t = m_51;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(m_51, n_51, o_51, t);
  t = m_51;
  return(t);
}
static ATerm s_5 (ATerm y_67, ATerm z_67, ATerm t)
{
  ATerm s_51 = NULL;
  t = SSL_hashtable_remove(z_67, y_67);
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_51);
  return(t);
}
static ATerm t_5 (ATerm d_68, ATerm t)
{
  ATerm t_51 = NULL;
  t = SSL_hashtable_destroy(d_68);
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_51);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_51 = NULL;
  t = SSL_table_hashtable();
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_51);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
  v_51 = t;
  t = table_hashtable_0_0(t);
  w_51 = t;
  t = lookup_table_0_1(v_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(y_51, t);
  t = w_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(v_51, x_51, t);
  t = v_51;
  return(t);
}
ATerm fetch_1_0 (ATerm x_123 (ATerm), ATerm t)
{
  static ATerm v_52 (ATerm t);
  static ATerm v_52 (ATerm t)
  {
    ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL;
    s_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_52 = ATgetFirst((ATermList) t);
        u_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_22 = NULL,j_22 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(s_52);
          f_22 = t;
          t = t_52;
          t = x_123(t);
          j_22 = t;
          t = (ATerm) ATinsert(CheckATermList(u_52), j_22);
          z_12 = t;
          t = SSLsetAnnotations(z_12, f_22);
          LocalPopChoice(n_22);
        }
      else
        {
          t = m_22;
          {
            ATerm r_22 = NULL,u_22 = NULL,a_13 = NULL;
            t = SSLgetAnnotations(s_52);
            r_22 = t;
            t = u_52;
            t = v_52(t);
            u_22 = t;
            t = (ATerm) ATinsert(CheckATermList(u_22), t_52);
            a_13 = t;
            t = SSLsetAnnotations(a_13, r_22);
          }
        }
    }
    return(t);
  }
  t = v_52(t);
  return(t);
}
static ATerm a_6 (ATerm w_67, ATerm x_67, ATerm t)
{
  t = SSL_hashtable_get(x_67, w_67);
  return(t);
}
static ATerm v_5 (ATerm x_64, ATerm y_64, ATerm t)
{
  ATerm y_52 = NULL;
  t = lookup_table_0_1(x_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(y_64, y_52, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  t = term_o_22;
  a_53 = t;
  t = term_p_19;
  b_53 = t;
  t = term_p_22;
  t = y_5(a_53, b_53, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL;
  t = term_o_22;
  e_53 = t;
  t = term_p_19;
  f_53 = t;
  t = term_p_22;
  t = y_5(e_53, f_53, t);
  t = term_s_22;
  c_53 = t;
  t = term_p_19;
  d_53 = t;
  t = term_t_22;
  t = y_5(c_53, d_53, t);
  t = term_v_22;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_7, v_7, w_7, t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      t = Option_3_0(x_7, y_7, z_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_89 (ATerm), ATerm l_89 (ATerm), ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,g_13 = NULL;
  l_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_53 = ATgetFirst((ATermList) t);
      i_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_53);
  g_53 = t;
  t = h_53;
  t = k_89(t);
  j_53 = t;
  t = i_53;
  t = l_89(t);
  k_53 = t;
  t = (ATerm) ATinsert(CheckATermList(k_53), j_53);
  g_13 = t;
  t = SSLsetAnnotations(g_13, g_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_145 (ATerm), ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,v_53 = NULL,w_53 = NULL,m_13 = NULL;
  q_53 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_23;
        t = u_145(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
      }
  }
  t = q_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_53 = ATgetFirst((ATermList) t);
      t_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_53);
  r_53 = t;
  t = term_j_19;
  w_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_19, s_53);
  t = y_5(w_53, s_53, t);
  t = t_53;
  {
    static ATerm g_54 (ATerm t);
    static ATerm g_54 (ATerm t)
    {
      ATerm f_23 = t;
      int g_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_53 = NULL;
              z_53 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_53;
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = u_145(t);
              t = Cons_2_0(_id, g_54, t);
            }
          LocalPopChoice(g_23);
        }
      else
        {
          t = f_23;
          {
            ATerm c_54 = NULL,d_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_54 = ATgetFirst((ATermList) t);
                d_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_54), (ATerm) ATmakeAppl(sym_Undefined_1, c_54));
          }
        }
      return(t);
    }
    t = g_54(t);
  }
  v_53 = t;
  t = (ATerm) ATinsert(CheckATermList(v_53), (ATerm) ATmakeAppl(sym_Program_1, s_53));
  m_13 = t;
  t = SSLsetAnnotations(m_13, r_53);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm t_54 = NULL;
  t_54 = t;
  if(match_string(t, "--help"))
    {
      t = t_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_54;
        }
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL;
  t = term_m_23;
  u_54 = t;
  t = term_p_19;
  v_54 = t;
  t = term_n_23;
  t = y_5(u_54, v_54, t);
  t = term_o_23;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_p_23;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm r_145 (ATerm), ATerm s_145 (ATerm), ATerm t_145 (ATerm), ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL;
  n_54 = t;
  t = term_b_20;
  o_54 = t;
  t = term_q_23;
  t = lookup_table_0_1(o_54, t);
  s_54 = t;
  t = term_c_20;
  p_54 = t;
  t = (ATerm) ATempty;
  q_54 = t;
  t = s_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(p_54, q_54, r_54, t);
  t = n_54;
  {
    static ATerm a_8 (ATerm t);
    static ATerm a_8 (ATerm t)
    {
      ATerm r_23 = t;
      int s_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_145(t);
          LocalPopChoice(s_23);
        }
      else
        {
          t = r_23;
          {
            ATerm t_23 = t;
            int u_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_8, d_8, e_8, t);
                LocalPopChoice(u_23);
              }
            else
              {
                t = t_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_8, t);
  }
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_55 = NULL;
        g_55 = t;
        {
          ATerm x_23 = t;
          int y_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_23 = NULL;
              t = g_55;
              {
                ATerm z_23 = t;
                int a_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_23 = NULL,d_23 = NULL;
                    t = term_y_17;
                    c_23 = t;
                    t = term_m_23;
                    d_23 = t;
                    t = term_b_24;
                    t = v_5(c_23, d_23, t);
                    LocalPopChoice(a_24);
                  }
                else
                  {
                    t = z_23;
                    t = fetch_1_0(h_8, t);
                  }
              }
              t = g_55;
              t = s_145(t);
              t = term_r_20;
              b_23 = t;
              t = SSL_exit(b_23);
              LocalPopChoice(y_23);
            }
          else
            {
              t = x_23;
              {
                ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
                t = term_y_17;
                i_23 = t;
                t = term_o_22;
                j_23 = t;
                t = term_c_24;
                t = v_5(i_23, j_23, t);
                t = g_55;
                t = t_145(t);
                t = term_r_20;
                h_23 = t;
                t = SSL_exit(h_23);
              }
            }
        }
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        {
          ATerm d_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
              static ATerm i_8 (ATerm t);
              static ATerm i_8 (ATerm t)
              {
                ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,o_13 = NULL;
                m_55 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_55 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_55);
                k_55 = t;
                t = l_55;
                if(((l_54 != NULL) && (l_54 != t)))
                  _fail(t);
                else
                  l_54 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_55);
                o_13 = t;
                t = SSLsetAnnotations(o_13, k_55);
                return(t);
              }
              t = fetch_1_0(i_8, t);
              t = term_o_21;
              i_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_54)), term_f_24);
              j_55 = t;
              t = SSL_printnl(i_55, j_55);
              t = (ATerm) ATmakeAppl(sym__2, term_o_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_54)), term_f_24));
              t = s_145(t);
              t = term_q_21;
              h_55 = t;
              t = SSL_exit(h_55);
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
            }
        }
      }
  }
  m_54 = t;
  t = term_b_20;
  t = table_destroy_0_0(t);
  t = m_54;
  return(t);
}
ATerm option_wrap_5_0 (ATerm u_143 (ATerm), ATerm v_143 (ATerm), ATerm w_143 (ATerm), ATerm x_143 (ATerm), ATerm y_143 (ATerm), ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL;
  t = parse_options_3_0(u_143, v_143, w_143, t);
  r_55 = t;
  t = term_g_24;
  t = table_create_0_0(t);
  t = term_g_24;
  s_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_24, term_h_24, r_55);
  t = lookup_table_0_1(s_55, t);
  v_55 = t;
  t = term_h_24;
  t_55 = t;
  t = v_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(t_55, r_55, u_55, t);
  t = r_55;
  t = x_143(t);
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            {
              ATerm o_24 = t;
              int p_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(n_8, o_8, q_8, t);
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = o_24;
                  {
                    ATerm r_24 = t;
                    int s_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(s_24);
                      }
                    else
                      {
                        t = r_24;
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
static ATerm m_8 (ATerm t)
{
  t = input_1_0(s_8, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm x_55 = NULL,a_56 = NULL;
  t = term_j_18;
  x_55 = t;
  t = term_p_19;
  a_56 = t;
  t = term_t_24;
  t = y_5(x_55, a_56, t);
  t = term_u_24;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(j_8, default_system_usage_0_0, default_system_about_0_0, _id, m_8, t);
  return(t);
}
