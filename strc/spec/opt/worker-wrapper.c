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
static ATerm term_y_24;
static ATerm term_x_24;
static ATerm term_v_24;
static ATerm term_j_24;
static ATerm term_i_24;
static ATerm term_h_24;
static ATerm term_e_24;
static ATerm term_d_24;
static ATerm term_s_23;
static ATerm term_r_23;
static ATerm term_q_23;
static ATerm term_p_23;
static ATerm term_o_23;
static ATerm term_g_23;
static ATerm term_y_22;
static ATerm term_x_22;
static ATerm term_w_22;
static ATerm term_v_22;
static ATerm term_t_22;
static ATerm term_s_22;
static ATerm term_q_22;
static ATerm term_n_22;
static ATerm term_m_22;
static ATerm term_i_22;
static ATerm term_h_22;
static ATerm term_f_22;
static ATerm term_t_21;
static ATerm term_s_21;
static ATerm term_q_21;
static ATerm term_p_21;
static ATerm term_k_21;
static ATerm term_d_21;
static ATerm term_c_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_z_20;
static ATerm term_y_20;
static ATerm term_x_20;
static ATerm term_w_20;
static ATerm term_v_20;
static ATerm term_s_20;
static ATerm term_r_20;
static ATerm term_p_20;
static ATerm term_h_20;
static ATerm term_e_20;
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
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_c_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_p_19);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_s_20);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_p_19);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym__2, term_v_22, term_p_19);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_p_19);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, (ATerm) ATempty);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_o_23);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_q_22);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_p_19);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
static ATerm y_4 (ATerm j_128 (ATerm), ATerm w_47, ATerm v_47, ATerm t);
ATerm genzip_4_0 (ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm d_5 (ATerm j_854, ATerm o_854, ATerm p_83, ATerm t);
ATerm while_not_2_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm p_6 (ATerm f_3, ATerm g_3, ATerm h_3, ATerm t);
static ATerm x_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm q_152 (ATerm), ATerm r_152 (ATerm), ATerm s_152 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm z_152 (ATerm), ATerm t);
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
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm h_5 (ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm c_48, ATerm b_48, ATerm t);
static ATerm i_5 (ATerm o_128 (ATerm), ATerm y_47, ATerm x_47, ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm free_vars_3_0 (ATerm d_149 (ATerm), ATerm e_149 (ATerm), ATerm f_149 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm worker_wrapper_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm u_124 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_39 (ATerm n_39, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm worker_wrapper_spec_0_0 (ATerm t);
static ATerm j_5 (ATerm r_57, ATerm s_57, ATerm t);
static ATerm k_5 (ATerm v_41, ATerm w_41, ATerm t);
static ATerm m_5 (ATerm x_123 (ATerm), ATerm h_286, ATerm b_42, ATerm t);
static ATerm l_5 (ATerm r_41, ATerm s_41, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm output_1_0 (ATerm r_144 (ATerm), ATerm t);
static ATerm f_42 (ATerm u_41, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_5 (ATerm x_41, ATerm t);
static ATerm o_5 (ATerm x_55, ATerm y_55, ATerm t);
static ATerm p_5 (ATerm t_57, ATerm u_57, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_43 (ATerm u_42, ATerm t);
static ATerm y_43 (ATerm y_42, ATerm z_42, ATerm a_43, ATerm t);
static ATerm z_43 (ATerm k_43, ATerm l_43, ATerm m_43, ATerm t);
static ATerm q_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm s_144 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm f_124 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm default_system_usage_2_0 (ATerm q_146 (ATerm), ATerm r_146 (ATerm), ATerm t);
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
static ATerm z_5 (ATerm y_77, ATerm z_77, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_5 (ATerm d_63, ATerm e_63, ATerm c_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_5 (ATerm m_61, ATerm n_61, ATerm t);
ATerm foldr_2_0 (ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_141 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_6 (ATerm s_67, ATerm t_67, ATerm u_67, ATerm t);
ATerm lookup_table_0_1 (ATerm p_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm a_68, ATerm b_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_5 (ATerm x_67, ATerm y_67, ATerm t);
static ATerm u_5 (ATerm c_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_124 (ATerm), ATerm t);
static ATerm b_6 (ATerm v_67, ATerm w_67, ATerm t);
static ATerm w_5 (ATerm w_64, ATerm x_64, ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_146 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm parse_options_3_0 (ATerm i_146 (ATerm), ATerm j_146 (ATerm), ATerm k_146 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm l_144 (ATerm), ATerm m_144 (ATerm), ATerm n_144 (ATerm), ATerm o_144 (ATerm), ATerm p_144 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
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
static ATerm y_4 (ATerm j_128 (ATerm), ATerm w_47, ATerm v_47, ATerm t)
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
          int w_8 = stack_ptr;
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
                t = h_5(j_128, a_0, v_0, w_0, t);
              }
              t = z_0(t);
              LocalPopChoice(w_8);
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
ATerm genzip_4_0 (ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm t)
{
  static ATerm l_1 (ATerm t);
  static ATerm l_1 (ATerm t)
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_126(t);
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        {
          ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,i_0 = NULL;
          t = i_126(t);
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
          t = k_126(t);
          i_1 = t;
          t = g_1;
          t = l_1(t);
          j_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_1, j_1);
          i_0 = t;
          t = SSLsetAnnotations(i_0, e_1);
          t = j_126(t);
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
static ATerm d_5 (ATerm j_854, ATerm o_854, ATerm p_83, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL;
  t = SSL_explode_term(o_854);
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_854);
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
  t = (ATerm) ATmakeAppl(sym__2, q_1, p_83);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm t)
{
  static ATerm h_2 (ATerm t);
  static ATerm h_2 (ATerm t)
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_117(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = m_117(t);
        t = h_2(t);
      }
    return(t);
  }
  t = h_2(t);
  return(t);
}
ATerm for_3_0 (ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm t)
{
  t = o_117(t);
  t = while_not_2_0(p_117, q_117, t);
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
  ATerm a_3 = NULL,b_3 = NULL,d_3 = NULL,e_3 = NULL,n_0 = NULL;
  e_3 = t;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  a_3 = t;
  t = d_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_3, d_3);
  n_0 = t;
  t = SSLsetAnnotations(n_0, a_3);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm k_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  k_4 = t;
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
      q_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_6(n_4, o_4, k_4, t);
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_4), p_4), q_4);
          }
      }
    }
  else
    {
      t = p_6(n_4, o_4, k_4, t);
    }
  return(t);
}
static ATerm p_6 (ATerm f_3, ATerm g_3, ATerm h_3, ATerm t)
{
  ATerm j_3 = NULL,m_3 = NULL,q_0 = NULL,t_3 = NULL,y_3 = NULL,b_4 = NULL,c_4 = NULL;
  t = SSLgetAnnotations(h_3);
  j_3 = t;
  t = g_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_3 = ATgetFirst((ATermList) t);
      c_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_3;
  if(match_cons(t, sym__2))
    {
      y_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_4;
        if((y_3 != t))
          {
            _fail(t);
          }
        t = c_4;
        LocalPopChoice(v_9);
      }
    else
      {
        t = t_9;
        t = g_3;
        t = d_5(y_3, b_4, c_4, t);
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
        ATerm s_5 = NULL,e_6 = NULL,f_6 = NULL;
        s_5 = t;
        if(match_cons(t, sym__2))
          {
            e_6 = ATgetArgument(t, 0);
            f_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_5;
        t = y_4(x_0, e_6, f_6, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm q_152 (ATerm), ATerm r_152 (ATerm), ATerm s_152 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,g_18 = NULL,h_18 = NULL;
  g_18 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_18 = ATgetArgument(t, 0);
      d_18 = ATgetArgument(t, 1);
      {
        ATerm d_2 = NULL,i_2 = NULL,j_2 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(g_18);
        d_2 = t;
        t = h_18;
        t = s_152(t);
        i_2 = t;
        t = d_18;
        t = q_152(t);
        j_2 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_2, j_2);
        a_1 = t;
        t = SSLsetAnnotations(a_1, d_2);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          h_18 = ATgetArgument(t, 0);
          {
            ATerm q_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,c_3 = NULL,m_8 = NULL,l_8 = NULL;
            t = SSLgetAnnotations(g_18);
            q_2 = t;
            t = h_18;
            if(match_cons(t, sym_Rule_3))
              {
                t_2 = ATgetArgument(t, 0);
                u_2 = ATgetArgument(t, 1);
                v_2 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_18);
            s_2 = t;
            t = t_2;
            t = q_152(t);
            w_2 = t;
            t = u_2;
            t = q_152(t);
            x_2 = t;
            t = v_2;
            t = q_152(t);
            y_2 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, w_2, x_2, y_2);
            l_8 = t;
            t = SSLsetAnnotations(l_8, s_2);
            c_3 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, c_3);
            m_8 = t;
            t = SSLsetAnnotations(m_8, q_2);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              h_18 = ATgetArgument(t, 0);
              d_18 = ATgetArgument(t, 1);
              b_18 = ATgetArgument(t, 2);
              {
                ATerm w_3 = NULL,d_4 = NULL,h_4 = NULL,l_4 = NULL,p_8 = NULL;
                t = SSLgetAnnotations(g_18);
                w_3 = t;
                t = h_18;
                t = s_152(t);
                d_4 = t;
                t = d_18;
                t = s_152(t);
                h_4 = t;
                t = b_18;
                t = s_152(t);
                l_4 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, d_4, h_4, l_4);
                p_8 = t;
                t = SSLsetAnnotations(p_8, w_3);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  h_18 = ATgetArgument(t, 0);
                  d_18 = ATgetArgument(t, 1);
                  b_18 = ATgetArgument(t, 2);
                  c_18 = ATgetArgument(t, 3);
                  {
                    ATerm f_5 = NULL,d_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,x_8 = NULL;
                    t = SSLgetAnnotations(g_18);
                    f_5 = t;
                    t = h_18;
                    t = s_152(t);
                    d_6 = t;
                    t = d_18;
                    t = s_152(t);
                    j_6 = t;
                    t = b_18;
                    t = s_152(t);
                    k_6 = t;
                    t = c_18;
                    t = q_152(t);
                    l_6 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, d_6, j_6, k_6, l_6);
                    x_8 = t;
                    t = SSLsetAnnotations(x_8, f_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_18 = ATgetArgument(t, 0);
                      d_18 = ATgetArgument(t, 1);
                      b_18 = ATgetArgument(t, 2);
                      c_18 = ATgetArgument(t, 3);
                      {
                        ATerm y_6 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,y_8 = NULL;
                        t = SSLgetAnnotations(g_18);
                        y_6 = t;
                        t = h_18;
                        t = s_152(t);
                        d_7 = t;
                        t = d_18;
                        t = s_152(t);
                        e_7 = t;
                        t = b_18;
                        t = s_152(t);
                        f_7 = t;
                        t = c_18;
                        t = q_152(t);
                        g_7 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_7, e_7, f_7, g_7);
                        y_8 = t;
                        t = SSLsetAnnotations(y_8, y_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          h_18 = ATgetArgument(t, 0);
                          d_18 = ATgetArgument(t, 1);
                          {
                            ATerm q_7 = NULL,t_7 = NULL,u_7 = NULL,z_8 = NULL;
                            t = SSLgetAnnotations(g_18);
                            q_7 = t;
                            t = h_18;
                            t = s_152(t);
                            t_7 = t;
                            t = d_18;
                            t = q_152(t);
                            u_7 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, t_7, u_7);
                            z_8 = t;
                            t = SSLsetAnnotations(z_8, q_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              h_18 = ATgetArgument(t, 0);
                              d_18 = ATgetArgument(t, 1);
                              {
                                ATerm c_8 = NULL,f_8 = NULL,g_8 = NULL,a_9 = NULL;
                                t = SSLgetAnnotations(g_18);
                                c_8 = t;
                                t = h_18;
                                t = s_152(t);
                                f_8 = t;
                                t = d_18;
                                t = q_152(t);
                                g_8 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, f_8, g_8);
                                a_9 = t;
                                t = SSLsetAnnotations(a_9, c_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  h_18 = ATgetArgument(t, 0);
                                  d_18 = ATgetArgument(t, 1);
                                  {
                                    ATerm r_8 = NULL,u_8 = NULL,v_8 = NULL,h_9 = NULL;
                                    t = SSLgetAnnotations(g_18);
                                    r_8 = t;
                                    t = h_18;
                                    t = s_152(t);
                                    u_8 = t;
                                    t = d_18;
                                    t = q_152(t);
                                    v_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, u_8, v_8);
                                    h_9 = t;
                                    t = SSLsetAnnotations(h_9, r_8);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      h_18 = ATgetArgument(t, 0);
                                      {
                                        ATerm g_9 = NULL,o_9 = NULL,i_9 = NULL;
                                        t = SSLgetAnnotations(g_18);
                                        g_9 = t;
                                        t = h_18;
                                        t = q_152(t);
                                        o_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, o_9);
                                        i_9 = t;
                                        t = SSLsetAnnotations(i_9, g_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          h_18 = ATgetArgument(t, 0);
                                          {
                                            ATerm u_9 = NULL,x_9 = NULL,j_9 = NULL;
                                            t = SSLgetAnnotations(g_18);
                                            u_9 = t;
                                            t = h_18;
                                            t = q_152(t);
                                            x_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, x_9);
                                            j_9 = t;
                                            t = SSLsetAnnotations(j_9, u_9);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              h_18 = ATgetArgument(t, 0);
                                              {
                                                ATerm e_10 = NULL,g_10 = NULL,k_9 = NULL;
                                                t = SSLgetAnnotations(g_18);
                                                e_10 = t;
                                                t = h_18;
                                                t = q_152(t);
                                                g_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, g_10);
                                                k_9 = t;
                                                t = SSLsetAnnotations(k_9, e_10);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  h_18 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm n_10 = NULL,p_10 = NULL,l_9 = NULL;
                                                    t = SSLgetAnnotations(g_18);
                                                    n_10 = t;
                                                    t = h_18;
                                                    t = q_152(t);
                                                    p_10 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, p_10);
                                                    l_9 = t;
                                                    t = SSLsetAnnotations(l_9, n_10);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm x_10 = NULL,z_10 = NULL,m_9 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      h_18 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(g_18);
                                                  x_10 = t;
                                                  t = h_18;
                                                  t = q_152(t);
                                                  z_10 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, z_10);
                                                  m_9 = t;
                                                  t = SSLsetAnnotations(m_9, x_10);
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
ATerm dynrule_targs_1_0 (ATerm z_152 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,d_20 = NULL;
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          y_19 = ATgetArgument(t, 0);
          {
            ATerm b_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_10);
      t = y_19;
      if(match_cons(t, sym_DynRuleId_1))
        {
          z_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_19;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm c_10 = ATgetArgument(t, 0);
          ATerm d_10 = ATgetArgument(t, 1);
          d_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_20;
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
                y_19 = ATgetArgument(t, 0);
                {
                  ATerm i_10 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_10);
            t = y_19;
            if(match_cons(t, sym_DynRuleId_1))
              {
                z_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_19;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_10 = ATgetArgument(t, 0);
                ATerm k_10 = ATgetArgument(t, 1);
                d_20 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_20;
          }
        else
          {
            t = f_10;
            if(match_cons(t, sym_AddDynRule_2))
              {
                y_19 = ATgetArgument(t, 0);
                {
                  ATerm l_10 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = y_19;
            if(match_cons(t, sym_DynRuleId_1))
              {
                z_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_19;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_10 = ATgetArgument(t, 0);
                ATerm o_10 = ATgetArgument(t, 1);
                d_20 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_20;
          }
      }
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm r_21 = NULL;
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_21 = ATgetArgument(t, 0);
          {
            ATerm s_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_10);
      t = r_21;
    }
  else
    {
      t = q_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_21;
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm b_22 = NULL;
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_22 = ATgetArgument(t, 0);
          {
            ATerm v_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_10);
      t = b_22;
    }
  else
    {
      t = t_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_22;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm g_21 = NULL;
  ATerm w_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm a_11 = ATgetArgument(t, 0);
          ATerm b_11 = ATgetArgument(t, 1);
          g_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(y_10);
      t = g_21;
      t = map_1_0(y_0, t);
    }
  else
    {
      t = w_10;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm c_11 = ATgetArgument(t, 0);
          ATerm d_11 = ATgetArgument(t, 1);
          g_21 = ATgetArgument(t, 2);
          {
            ATerm e_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = g_21;
      t = map_1_0(b_1, t);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm w_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_24);
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
                  ATerm z_24 = NULL,c_25 = NULL,d_25 = NULL,g_25 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_24 = ATgetArgument(t, 0);
                      c_25 = ATgetArgument(t, 1);
                      d_25 = ATgetArgument(t, 2);
                      g_25 = ATgetArgument(t, 3);
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
  ATerm y_25 = NULL;
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_25 = ATgetArgument(t, 0);
          {
            ATerm r_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_11);
      t = y_25;
    }
  else
    {
      t = p_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_25;
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
  ATerm d_26 = NULL;
  ATerm s_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_26 = ATgetArgument(t, 0);
          {
            ATerm w_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_11);
      t = d_26;
    }
  else
    {
      t = s_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_26;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm l_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_26);
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
              int h_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,t_26 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_26 = ATgetArgument(t, 0);
                      q_26 = ATgetArgument(t, 1);
                      r_26 = ATgetArgument(t, 2);
                      t_26 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_26;
                  t = map_1_0(b_2, t);
                  LocalPopChoice(h_12);
                }
              else
                {
                  t = g_12;
                  {
                    ATerm l_12 = t;
                    int n_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_12);
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
  ATerm i_27 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_27 = ATgetArgument(t, 0);
          {
            ATerm u_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_12);
      t = i_27;
    }
  else
    {
      t = r_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_27;
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
  ATerm q_27 = NULL;
  ATerm w_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_27 = ATgetArgument(t, 0);
          {
            ATerm b_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_12);
      t = q_27;
    }
  else
    {
      t = w_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_27;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm c_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_28);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm c_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_13);
    }
  else
    {
      t = c_13;
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
                  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,k_28 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_28 = ATgetArgument(t, 0);
                      f_28 = ATgetArgument(t, 1);
                      g_28 = ATgetArgument(t, 2);
                      k_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_28;
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
  ATerm u_28 = NULL;
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_28 = ATgetArgument(t, 0);
          {
            ATerm s_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_13);
      t = u_28;
    }
  else
    {
      t = q_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_28;
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
  ATerm d_29 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_29 = ATgetArgument(t, 0);
          {
            ATerm v_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_13);
      t = d_29;
    }
  else
    {
      t = t_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_29;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm j_29 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_29);
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
                  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_29 = ATgetArgument(t, 0);
                      n_29 = ATgetArgument(t, 1);
                      o_29 = ATgetArgument(t, 2);
                      p_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_29;
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
  ATerm c_30 = NULL;
  ATerm e_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_30 = ATgetArgument(t, 0);
          {
            ATerm i_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_14);
      t = c_30;
    }
  else
    {
      t = e_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_30;
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = map_1_0(i_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
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
  ATerm v_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_30);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_14);
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
              int s_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_30 = NULL,c_31 = NULL,f_31 = NULL,i_31 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_30 = ATgetArgument(t, 0);
                      c_31 = ATgetArgument(t, 1);
                      f_31 = ATgetArgument(t, 2);
                      i_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_31;
                  t = map_1_0(n_3, t);
                  LocalPopChoice(s_14);
                }
              else
                {
                  t = r_14;
                  {
                    ATerm u_14 = t;
                    int w_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_14);
                      }
                    else
                      {
                        t = u_14;
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
  ATerm a_32 = NULL;
  ATerm x_14 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_32 = ATgetArgument(t, 0);
          {
            ATerm d_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_15);
      t = a_32;
    }
  else
    {
      t = x_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_32;
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
  ATerm i_32 = NULL;
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_32 = ATgetArgument(t, 0);
          {
            ATerm g_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_15);
      t = i_32;
    }
  else
    {
      t = e_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_32;
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
  ATerm n_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_33);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm h_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = h_15;
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
              int n_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_33 = NULL,q_33 = NULL,t_33 = NULL,v_33 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_33 = ATgetArgument(t, 0);
                      q_33 = ATgetArgument(t, 1);
                      t_33 = ATgetArgument(t, 2);
                      v_33 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_33;
                  t = map_1_0(s_3, t);
                  LocalPopChoice(n_15);
                }
              else
                {
                  t = m_15;
                  {
                    ATerm r_15 = t;
                    int s_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_15);
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
static ATerm s_3 (ATerm t)
{
  ATerm c_34 = NULL;
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_34 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_15);
      t = c_34;
    }
  else
    {
      t = u_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_34;
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
  ATerm j_34 = NULL;
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_34 = ATgetArgument(t, 0);
          {
            ATerm z_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_15);
      t = j_34;
    }
  else
    {
      t = x_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_34;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm v_32 = NULL,k_33 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      k_33 = ATgetArgument(t, 0);
      t = k_33;
      if(match_cons(t, sym_Rule_3))
        {
          v_32 = ATgetArgument(t, 0);
          {
            ATerm a_16 = ATgetArgument(t, 1);
          }
          {
            ATerm b_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_32;
      t = free_vars_3_0(q_3, r_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          k_33 = ATgetArgument(t, 0);
          {
            ATerm c_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = k_33;
    }
  return(t);
}
static ATerm h_5 (ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm c_48, ATerm b_48, ATerm t)
{
  t = s_128(t);
  {
    static ATerm x_3 (ATerm t);
    static ATerm x_3 (ATerm t)
    {
      ATerm n_34 = NULL;
      n_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_48, n_34);
      t = r_128(t);
      return(t);
    }
    t = fetch_1_0(x_3, t);
  }
  t = b_48;
  return(t);
}
static ATerm i_5 (ATerm o_128 (ATerm), ATerm y_47, ATerm x_47, ATerm t)
{
  static ATerm d_35 (ATerm t);
  static ATerm d_35 (ATerm t)
  {
    ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
    y_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_47;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_34 = ATgetFirst((ATermList) t);
            a_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_16 = t;
          int e_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_34;
              {
                static ATerm z_3 (ATerm t);
                static ATerm z_3 (ATerm t)
                {
                  t = x_47;
                  return(t);
                }
                t = h_5(o_128, z_3, z_34, a_35, t);
              }
              t = d_35(t);
              LocalPopChoice(e_16);
            }
          else
            {
              t = d_16;
              {
                ATerm h_11 = NULL,l_11 = NULL,z_11 = NULL;
                t = SSLgetAnnotations(y_34);
                h_11 = t;
                t = a_35;
                t = d_35(t);
                l_11 = t;
                t = (ATerm) ATinsert(CheckATermList(l_11), z_34);
                z_11 = t;
                t = SSLsetAnnotations(z_11, h_11);
              }
            }
        }
      }
    return(t);
  }
  t = y_47;
  t = d_35(t);
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
static ATerm g_4 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(i_4, i_12, j_12, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm k_12 = NULL;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      if((k_12 != ATgetArgument(t, 1)))
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
static ATerm m_4 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(r_4, d_13, e_13, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm f_13 = NULL;
  if(match_cons(t, sym__2))
    {
      f_13 = ATgetArgument(t, 0);
      if((f_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm d_149 (ATerm), ATerm e_149 (ATerm), ATerm f_149 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm u_35 (ATerm t);
  static ATerm u_35 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_149(t);
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
              ATerm i_35 = NULL,j_35 = NULL,t_11 = NULL,u_11 = NULL;
              i_35 = t;
              t = e_149(t);
              j_35 = t;
              t = i_35;
              {
                static ATerm a_4 (ATerm t);
                static ATerm a_4 (ATerm t)
                {
                  ATerm l_35 = NULL;
                  t = u_35(t);
                  l_35 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_35, j_35);
                  t = diff_0_0(t);
                  return(t);
                }
                t = f_149(a_4, u_35, e_4, t);
              }
              u_11 = t;
              t = SSL_explode_term(u_11);
              if(match_cons(t, sym__2))
                {
                  ATerm j_16 = ATgetArgument(t, 0);
                  t_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_11;
              t = foldr_3_0(f_4, g_4, _id, t);
              LocalPopChoice(i_16);
            }
          else
            {
              t = h_16;
              {
                ATerm o_12 = NULL,p_12 = NULL;
                p_12 = t;
                t = SSL_explode_term(p_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_16 = ATgetArgument(t, 0);
                    o_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_12;
                t = foldr_3_0(j_4, m_4, u_35, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_35(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm i_15 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_15);
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
                  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,t_15 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_15 = ATgetArgument(t, 0);
                      p_15 = ATgetArgument(t, 1);
                      q_15 = ATgetArgument(t, 2);
                      t_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_15;
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
  ATerm k_16 = NULL;
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_16 = ATgetArgument(t, 0);
          {
            ATerm x_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_16);
      t = k_16;
    }
  else
    {
      t = v_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_16;
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
  int z_16 = stack_ptr;
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
      LocalPopChoice(z_16);
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
static ATerm x_4 (ATerm t)
{
  ATerm a_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      a_17 = ATgetArgument(t, 0);
      {
        ATerm c_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_17;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm d_17 = NULL;
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_17, term_i_17);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm e_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_17 = ATgetArgument(t, 0);
      {
        ATerm j_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_17), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm f_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      f_17 = ATgetArgument(t, 0);
      {
        ATerm k_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, f_17);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  z_37 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      a_38 = ATgetArgument(t, 0);
      b_38 = ATgetArgument(t, 1);
      c_38 = ATgetArgument(t, 2);
      d_38 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = d_38;
  if(match_cons(t, sym_Seq_2))
    {
      e_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
      t = e_38;
      if(match_cons(t, sym_Match_1))
        {
          y_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, a_38, b_38, c_38, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_37), f_38)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm f_14 = NULL,g_14 = NULL,o_14 = NULL,t_14 = NULL,v_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          e_38 = ATgetArgument(t, 0);
          f_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_38;
      if(match_cons(t, sym_Seq_2))
        {
          g_38 = ATgetArgument(t, 0);
          i_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_38;
      if(match_cons(t, sym_Match_1))
        {
          h_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_38;
      if(match_cons(t, sym_Op_2))
        {
          ATerm l_17 = ATgetArgument(t, 0);
          ATerm m_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_38;
      t = free_vars_3_0(s_4, t_4, tboundin_3_0, t);
      a_15 = t;
      t = c_38;
      t = map_1_0(x_4, t);
      b_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_15, b_15);
      t = diff_0_0(t);
      g_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_38, g_14);
      t = diff_0_0(t);
      f_14 = t;
      t = g_14;
      t = map_1_0(z_4, t);
      o_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_38, o_14);
      t = conc_0_0(t);
      y_14 = t;
      t = new_0_0(t);
      t_14 = t;
      t = b_38;
      t = map_1_0(a_5, t);
      v_14 = t;
      t = y_14;
      t = map_1_0(b_5, t);
      z_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, t_14, b_38, y_14, (ATerm) ATmakeAppl(sym_Scope_2, f_14, i_38))), (ATerm) ATmakeAppl(sym_SDefT_4, a_38, b_38, c_38, (ATerm) ATmakeAppl(sym_Scope_2, g_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_38), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_14), v_14, z_14)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_124 (ATerm), ATerm t)
{
  static ATerm j_39 (ATerm t);
  static ATerm j_39 (ATerm t)
  {
    ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
    i_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_39 = ATgetFirst((ATermList) t);
        h_39 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_18 = NULL,a_19 = NULL,b_12 = NULL;
          t = SSLgetAnnotations(i_39);
          t_18 = t;
          t = h_39;
          t = j_39(t);
          a_19 = t;
          t = (ATerm) ATinsert(CheckATermList(a_19), g_39);
          b_12 = t;
          t = SSLsetAnnotations(b_12, t_18);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_39;
        t = u_124(t);
      }
    return(t);
  }
  t = j_39(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  q_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_38;
    }
  else
    {
      static ATerm c_5 (ATerm t);
      static ATerm c_5 (ATerm t)
      {
        t = not_null(s_38);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_38 = ATgetFirst((ATermList) t);
          if(((s_38 != NULL) && (s_38 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_38;
      t = at_end_1_0(c_5, t);
    }
  return(t);
}
static ATerm v_39 (ATerm n_39, ATerm t)
{
  ATerm o_39 = NULL;
  t = SSL_explode_term(n_39);
  if(match_cons(t, sym__2))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_39;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  s_39 = t;
  if(match_cons(t, sym__2))
    {
      q_39 = ATgetArgument(t, 0);
      r_39 = ATgetArgument(t, 1);
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_5 (ATerm t);
            static ATerm e_5 (ATerm t)
            {
              t = r_39;
              return(t);
            }
            t = q_39;
            t = at_end_1_0(e_5, t);
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            t = v_39(s_39, t);
          }
      }
    }
  else
    {
      t = v_39(s_39, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_39;
      t = e_131(t);
    }
  else
    {
      ATerm c_40 = NULL,d_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_39 = ATgetFirst((ATermList) t);
          z_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_39;
      t = g_131(t);
      c_40 = t;
      t = z_39;
      t = foldr_3_0(e_131, f_131, g_131, t);
      d_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_40, d_40);
      t = f_131(t);
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,d_12 = NULL;
  q_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_40);
  n_40 = t;
  t = o_40;
  t = foldr_3_0(_id, conc_0_0, y_5, t);
  p_40 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, p_40);
  d_12 = t;
  t = SSLsetAnnotations(d_12, n_40);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
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
        ATerm s_40 = NULL;
        s_40 = t;
        t = (ATerm) ATinsert(ATempty, s_40);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,f_12 = NULL,e_12 = NULL;
  m_40 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_40);
  f_40 = t;
  t = g_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_40 = ATgetFirst((ATermList) t);
      j_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_40);
  h_40 = t;
  t = j_40;
  t = Cons_2_0(g_5, v_5, t);
  k_40 = t;
  t = (ATerm) ATinsert(CheckATermList(k_40), i_40);
  e_12 = t;
  t = SSLsetAnnotations(e_12, h_40);
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_40);
  f_12 = t;
  t = SSLsetAnnotations(f_12, f_40);
  return(t);
}
static ATerm j_5 (ATerm r_57, ATerm s_57, ATerm t)
{
  ATerm u_40 = NULL;
  t = SSL_fputc(r_57, s_57);
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_40);
  return(t);
}
static ATerm k_5 (ATerm v_41, ATerm w_41, ATerm t)
{
  ATerm v_40 = NULL;
  t = SSL_write_term_to_stream_text(v_41, w_41);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_40);
  return(t);
}
static ATerm m_5 (ATerm x_123 (ATerm), ATerm h_286, ATerm b_42, ATerm t)
{
  ATerm w_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_286, term_s_17);
  t = q_5(t);
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_40, b_42);
  t = x_123(t);
  t = fclose_0_0(t);
  t = b_42;
  return(t);
}
static ATerm l_5 (ATerm r_41, ATerm s_41, ATerm t)
{
  ATerm x_40 = NULL;
  t = SSL_write_term_to_stream_baf(r_41, s_41);
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_40);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if(match_cons(t_17, sym_Stream_1))
        {
          e_41 = ATgetArgument(t_17, 0);
        }
      else
        _fail(t);
      f_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(e_41, f_41, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      if(match_cons(u_17, sym_Stream_1))
        {
          j_41 = ATgetArgument(u_17, 0);
        }
      else
        _fail(t);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(j_41, k_41, t);
  g_41 = t;
  t = term_v_17;
  h_41 = t;
  t = g_41;
  if(match_cons(t, sym_Stream_1))
    {
      i_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, g_41);
  t = j_5(h_41, i_41, t);
  return(t);
}
ATerm output_1_0 (ATerm r_144 (ATerm), ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  t = r_144(t);
  z_40 = t;
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_41 = NULL,b_41 = NULL;
        t = term_y_17;
        a_41 = t;
        t = term_z_17;
        b_41 = t;
        t = term_a_18;
        t = w_5(a_41, b_41, t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = term_e_18;
      }
  }
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_40, z_40);
  {
    ATerm f_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_41 = NULL,d_41 = NULL;
        t = term_y_17;
        c_41 = t;
        t = term_j_18;
        d_41 = t;
        t = term_k_18;
        t = w_5(c_41, d_41, t);
        t = (ATerm) ATmakeAppl(sym__2, y_40, z_40);
        LocalPopChoice(i_18);
        if(match_cons(t, sym__2))
          {
            ATerm l_18 = ATgetArgument(t, 0);
            ATerm m_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_5(c_6, y_40, z_40, t);
      }
    else
      {
        t = f_18;
        if(match_cons(t, sym__2))
          {
            ATerm n_18 = ATgetArgument(t, 0);
            ATerm o_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_5(g_6, y_40, z_40, t);
      }
  }
  return(t);
}
static ATerm f_42 (ATerm u_41, ATerm t)
{
  t = SSL_fclose(u_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL;
  d_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_42 = ATgetArgument(t, 0);
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_42);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = f_42(d_42, t);
          }
      }
    }
  else
    {
      t = f_42(d_42, t);
    }
  return(t);
}
static ATerm n_5 (ATerm x_41, ATerm t)
{
  t = SSL_read_term_from_stream(x_41);
  return(t);
}
static ATerm o_5 (ATerm x_55, ATerm y_55, ATerm t)
{
  t = SSL_strcat(x_55, y_55);
  return(t);
}
static ATerm p_5 (ATerm t_57, ATerm u_57, ATerm t)
{
  ATerm g_42 = NULL;
  t = SSL_fopen(t_57, u_57);
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_42 = NULL;
  t = SSL_stdin_stream();
  m_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_42 = NULL;
  t = SSL_stdout_stream();
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_42 = NULL;
  t = SSL_stderr_stream();
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_42);
  return(t);
}
static ATerm x_43 (ATerm u_42, ATerm t)
{
  ATerm v_42 = NULL;
  t = SSL_explode_term(u_42);
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_18 = ATgetArgument(t, 1);
        if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
          {
            v_42 = ATgetFirst((ATermList) s_18);
            {
              ATerm u_18 = (ATerm) ATgetNext((ATermList) s_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_43 (ATerm y_42, ATerm z_42, ATerm a_43, ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,f_43 = NULL,i_43 = NULL,m_12 = NULL;
  t = SSLgetAnnotations(a_43);
  f_43 = t;
  t = y_42;
  if(match_cons(t, sym_Path_1))
    {
      i_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_43, z_42);
  m_12 = t;
  t = SSLsetAnnotations(m_12, f_43);
  if(match_cons(t, sym__2))
    {
      b_43 = ATgetArgument(t, 0);
      c_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(b_43, c_43, t);
  return(t);
}
static ATerm z_43 (ATerm k_43, ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,s_43 = NULL,q_12 = NULL;
  t = SSLgetAnnotations(m_43);
  p_43 = t;
  t = SSL_is_string(k_43);
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_43, l_43);
  q_12 = t;
  t = SSLsetAnnotations(q_12, p_43);
  if(match_cons(t, sym__2))
    {
      n_43 = ATgetArgument(t, 0);
      o_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(n_43, o_43, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
  u_43 = t;
  if(match_cons(t, sym__2))
    {
      v_43 = ATgetArgument(t, 0);
      w_43 = ATgetArgument(t, 1);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_43(u_43, t);
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            {
              ATerm x_18 = t;
              int y_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_43(v_43, w_43, u_43, t);
                  LocalPopChoice(y_18);
                }
              else
                {
                  t = x_18;
                  t = z_43(v_43, w_43, u_43, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_43(u_43, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,i_44 = NULL;
  i_44 = t;
  {
    ATerm z_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_44, term_c_19);
        t = q_5(t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = z_18;
        {
          ATerm q_19 = NULL,r_19 = NULL;
          t = term_d_19;
          r_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_19, i_44);
          t = o_5(r_19, i_44, t);
          q_19 = t;
          t = SSL_perror(q_19);
          _fail(t);
        }
      }
  }
  c_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_5(d_44, t);
  b_44 = t;
  t = c_44;
  t = fclose_0_0(t);
  t = b_44;
  return(t);
}
ATerm input_1_0 (ATerm s_144 (ATerm), ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_44 = NULL,m_44 = NULL;
      t = term_y_17;
      l_44 = t;
      t = term_g_19;
      m_44 = t;
      t = term_h_19;
      t = w_5(l_44, m_44, t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = term_i_19;
    }
  t = ReadFromFile_0_0(t);
  t = s_144(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  t = term_y_17;
  n_44 = t;
  t = term_j_19;
  o_44 = t;
  t = term_k_19;
  t = w_5(n_44, o_44, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
  q_44 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_44;
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
            t = q_44;
          }
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = (ATerm) ATinsert(ATempty, q_44);
      }
  }
  r_44 = t;
  t = term_e_18;
  s_44 = t;
  t = SSL_printnl(s_44, r_44);
  t = q_44;
  return(t);
}
ATerm map_1_0 (ATerm f_124 (ATerm), ATerm t)
{
  static ATerm k_45 (ATerm t);
  static ATerm k_45 (ATerm t)
  {
    ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
    h_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_45;
      }
    else
      {
        ATerm w_19 = NULL,f_20 = NULL,g_20 = NULL,t_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_45 = ATgetFirst((ATermList) t);
            j_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_45);
        w_19 = t;
        t = i_45;
        t = f_124(t);
        f_20 = t;
        t = j_45;
        t = k_45(t);
        g_20 = t;
        t = (ATerm) ATinsert(CheckATermList(g_20), f_20);
        t_12 = t;
        t = SSLsetAnnotations(t_12, w_19);
      }
    return(t);
  }
  t = k_45(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_45 = ATgetFirst((ATermList) t);
      o_45 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_45 = NULL,t_45 = NULL;
        static ATerm h_6 (ATerm t);
        static ATerm h_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_45)), not_null(t_45));
          return(t);
        }
        t = o_45;
        t = r_0(t);
        if(((s_45 != NULL) && (s_45 != t)))
          _fail(t);
        else
          s_45 = t;
        t = n_45;
        t = p_0(t);
        if(((t_45 != NULL) && (t_45 != t)))
          _fail(t);
        else
          t_45 = t;
        t = o_45;
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
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,v_12 = NULL;
  e_46 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_46);
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_46);
  v_12 = t;
  t = SSLsetAnnotations(v_12, c_46);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm i_46 = NULL;
  i_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_46), term_s_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm q_146 (ATerm), ATerm r_146 (ATerm), ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL;
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_46 = NULL,b_46 = NULL;
      t = term_y_17;
      a_46 = t;
      t = term_j_19;
      b_46 = t;
      t = term_k_19;
      t = w_5(a_46, b_46, t);
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      t = fetch_1_0(m_6, t);
    }
  {
    ATerm v_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_146(t);
        t = echo_0_0(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = v_19;
      }
  }
  t = term_a_20;
  t = echo_0_0(t);
  t = term_b_20;
  y_45 = t;
  t = term_c_20;
  z_45 = t;
  t = term_e_20;
  t = w_5(y_45, z_45, t);
  t = reverse_acc_2_0(_id, n_6, t);
  t = map_1_0(o_6, t);
  t = term_h_20;
  t = echo_0_0(t);
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_146(t);
        {
          ATerm k_20 = t;
          int l_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_46 = NULL;
              j_46 = t;
              t = SSL_is_string(j_46);
              t = j_46;
              LocalPopChoice(l_20);
              {
                ATerm k_46 = NULL;
                k_46 = t;
                t = (ATerm) ATinsert(ATempty, k_46);
              }
            }
          else
            {
              t = k_20;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,x_12 = NULL;
  t_46 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_46);
  r_46 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_46);
  x_12 = t;
  t = SSLsetAnnotations(x_12, r_46);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_46 = NULL;
  o_46 = t;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_46 = NULL,q_46 = NULL;
        t = term_y_17;
        p_46 = t;
        t = term_j_19;
        q_46 = t;
        t = term_k_19;
        t = w_5(p_46, q_46, t);
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = fetch_1_0(q_6, t);
      }
  }
  t = o_46;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm v_46 = NULL;
  v_46 = t;
  if(match_string(t, "-k"))
    {
      t = v_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_46;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  w_46 = t;
  t = SSL_string_to_int(w_46);
  x_46 = t;
  t = term_p_20;
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, x_46);
  t = z_5(y_46, x_46, t);
  t = w_46;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_6, s_6, t_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm a_47 = NULL;
  a_47 = t;
  if(match_string(t, "-S"))
    {
      t = a_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_47;
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  t = term_s_20;
  b_47 = t;
  t = term_v_20;
  c_47 = t;
  t = term_w_20;
  t = z_5(b_47, c_47, t);
  t = term_x_20;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_y_20;
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
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
  d_47 = t;
  t = SSL_string_to_int(d_47);
  e_47 = t;
  t = term_s_20;
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_20, e_47);
  t = z_5(f_47, e_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_47);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_z_20;
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
  ATerm g_47 = NULL,h_47 = NULL;
  t = term_a_21;
  g_47 = t;
  t = term_p_19;
  h_47 = t;
  t = term_b_21;
  t = z_5(g_47, h_47, t);
  t = term_c_21;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_d_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_6, v_6, w_6, t);
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_6, z_6, a_7, t);
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = Option_3_0(b_7, c_7, h_7, t);
          }
      }
    }
  return(t);
}
static ATerm z_5 (ATerm y_77, ATerm z_77, ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL;
  t = term_y_17;
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_17, y_77, z_77);
  t = lookup_table_0_1(i_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(y_77, z_77, j_47, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_17, y_77, z_77);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
      t = term_p_19;
      t = g_0(t);
      p_47 = t;
      t = term_b_20;
      q_47 = t;
      t = term_c_20;
      r_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, p_47);
      t = x_5(q_47, r_47, p_47, t);
      _fail(t);
    }
  else
    {
      ATerm u_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_47 = ATgetFirst((ATermList) t);
          o_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_47;
      t = d_0(t);
      t = term_p_19;
      t = f_0(t);
      u_47 = t;
      t = (ATerm) ATinsert(CheckATermList(o_47), u_47);
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm a_48 = NULL;
  a_48 = t;
  if(match_string(t, "-o"))
    {
      t = a_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_48;
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL;
  e_48 = t;
  t = term_z_17;
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, e_48);
  t = z_5(f_48, e_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_48);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_7, j_7, k_7, t);
  return(t);
}
static ATerm x_5 (ATerm d_63, ATerm e_63, ATerm c_63, ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_63, e_63);
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
        t = (ATerm) ATmakeAppl(sym__2, d_63, e_63);
        t = w_5(d_63, e_63, t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = (ATerm) ATempty;
      }
  }
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_63, e_63, (ATerm) ATinsert(CheckATermList(i_48), c_63));
  t = lookup_table_0_1(d_63, t);
  l_48 = t;
  t = (ATerm) ATinsert(CheckATermList(i_48), c_63);
  j_48 = t;
  t = l_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(e_63, j_48, k_48, t);
  t = h_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_48 = NULL,x_48 = NULL,c_49 = NULL;
      t = term_p_19;
      t = o_0(t);
      w_48 = t;
      t = term_b_20;
      x_48 = t;
      t = term_c_20;
      c_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, w_48);
      t = x_5(x_48, c_49, w_48, t);
      _fail(t);
    }
  else
    {
      ATerm g_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_48 = ATgetFirst((ATermList) t);
          t_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_48 = ATgetFirst((ATermList) t);
          v_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_48;
      t = j_0(t);
      t = u_48;
      t = l_0(t);
      g_49 = t;
      t = (ATerm) ATinsert(CheckATermList(v_48), g_49);
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm i_49 = NULL;
  i_49 = t;
  if(match_string(t, "-i"))
    {
      t = i_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_49;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL;
  j_49 = t;
  t = term_g_19;
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, j_49);
  t = z_5(k_49, j_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_49);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_7, m_7, n_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_19;
  t = whoami_0_0(t);
  l_49 = t;
  t = term_q_21;
  n_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_21), l_49);
  o_49 = t;
  t = SSL_printnl(n_49, o_49);
  t = term_t_21;
  m_49 = t;
  t = SSL_exit(m_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL;
  t = term_y_17;
  p_49 = t;
  t = term_j_19;
  q_49 = t;
  t = term_k_19;
  t = w_5(p_49, q_49, t);
  return(t);
}
static ATerm r_5 (ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_61, n_61);
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      t = SSL_addr(m_61, n_61);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_49;
      t = c_131(t);
    }
  else
    {
      ATerm x_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_49 = ATgetFirst((ATermList) t);
          u_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_49;
      t = foldr_2_0(c_131, d_131, t);
      x_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_49, x_49);
      t = d_131(t);
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
  t = term_v_20;
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
  t = r_5(t_20, u_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_50 = NULL,o_20 = NULL,q_20 = NULL;
  t = times_0_0(t);
  q_20 = t;
  t = SSL_explode_term(q_20);
  if(match_cons(t, sym__2))
    {
      ATerm x_21 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_20;
  t = foldr_2_0(o_7, p_7, t);
  a_50 = t;
  t = SSL_TicksToSeconds(a_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  if(match_cons(t, sym__2))
    {
      m_50 = ATgetArgument(t, 0);
      n_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_50;
        if((m_50 != t))
          {
            _fail(t);
          }
        t = l_50;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = (ATerm) ATmakeAppl(sym__2, m_50, n_50);
        {
          ATerm a_22 = t;
          int c_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_50, n_50);
              LocalPopChoice(c_22);
            }
          else
            {
              t = a_22;
              t = SSL_gtr(m_50, n_50);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_50, n_50);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_141 (ATerm), ATerm t)
{
  ATerm r_50 = NULL;
  r_50 = t;
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
        t = term_y_17;
        u_50 = t;
        t = term_s_20;
        v_50 = t;
        t = term_f_22;
        t = w_5(u_50, v_50, t);
        t_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_50, term_t_21);
        t = geq_0_0(t);
        t = r_50;
        t = n_141(t);
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = r_50;
      }
  }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,a_51 = NULL,b_51 = NULL;
  t = run_time_0_0(t);
  x_50 = t;
  t = term_p_19;
  t = whoami_0_0(t);
  y_50 = t;
  t = term_q_21;
  a_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_22), x_50), term_h_22), y_50);
  b_51 = t;
  t = SSL_printnl(a_51, b_51);
  t = (ATerm) ATmakeAppl(sym__2, term_q_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_22), x_50), term_h_22), y_50));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_20;
  c_51 = t;
  t = SSL_exit(c_51);
  return(t);
}
static ATerm a_6 (ATerm s_67, ATerm t_67, ATerm u_67, ATerm t)
{
  ATerm d_51 = NULL;
  t = SSL_hashtable_put(u_67, s_67, t_67);
  d_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_51);
  return(t);
}
ATerm lookup_table_0_1 (ATerm p_64, ATerm t)
{
  ATerm m_51 = NULL;
  t = table_hashtable_0_0(t);
  m_51 = t;
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_21 = NULL;
        t = m_51;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_6(p_64, j_21, t);
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        {
          ATerm u_21 = NULL;
          t = p_64;
          t = table_create_0_0(t);
          t = m_51;
          if(match_cons(t, sym_Hashtable_1))
            {
              u_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_6(p_64, u_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm a_68, ATerm b_68, ATerm t)
{
  ATerm p_51 = NULL;
  t = SSL_hashtable_create(a_68, b_68);
  p_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_51);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL,u_51 = NULL,v_51 = NULL;
  q_51 = t;
  t = term_m_22;
  u_51 = t;
  t = term_n_22;
  v_51 = t;
  t = q_51;
  t = new_hashtable_0_2(u_51, v_51, t);
  r_51 = t;
  t = q_51;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(q_51, r_51, s_51, t);
  t = q_51;
  return(t);
}
static ATerm t_5 (ATerm x_67, ATerm y_67, ATerm t)
{
  ATerm w_51 = NULL;
  t = SSL_hashtable_remove(y_67, x_67);
  w_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_51);
  return(t);
}
static ATerm u_5 (ATerm c_68, ATerm t)
{
  ATerm x_51 = NULL;
  t = SSL_hashtable_destroy(c_68);
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_51);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm y_51 = NULL;
  t = SSL_table_hashtable();
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_51);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
  z_51 = t;
  t = table_hashtable_0_0(t);
  a_52 = t;
  t = lookup_table_0_1(z_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_5(c_52, t);
  t = a_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(z_51, b_52, t);
  t = z_51;
  return(t);
}
ATerm fetch_1_0 (ATerm n_124 (ATerm), ATerm t)
{
  static ATerm z_52 (ATerm t);
  static ATerm z_52 (ATerm t)
  {
    ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
    w_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_52 = ATgetFirst((ATermList) t);
        y_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_22 = t;
      int p_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_22 = NULL,j_22 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(w_52);
          g_22 = t;
          t = x_52;
          t = n_124(t);
          j_22 = t;
          t = (ATerm) ATinsert(CheckATermList(y_52), j_22);
          z_12 = t;
          t = SSLsetAnnotations(z_12, g_22);
          LocalPopChoice(p_22);
        }
      else
        {
          t = o_22;
          {
            ATerm r_22 = NULL,u_22 = NULL,a_13 = NULL;
            t = SSLgetAnnotations(w_52);
            r_22 = t;
            t = y_52;
            t = z_52(t);
            u_22 = t;
            t = (ATerm) ATinsert(CheckATermList(u_22), x_52);
            a_13 = t;
            t = SSLsetAnnotations(a_13, r_22);
          }
        }
    }
    return(t);
  }
  t = z_52(t);
  return(t);
}
static ATerm b_6 (ATerm v_67, ATerm w_67, ATerm t)
{
  t = SSL_hashtable_get(w_67, v_67);
  return(t);
}
static ATerm w_5 (ATerm w_64, ATerm x_64, ATerm t)
{
  ATerm c_53 = NULL;
  t = lookup_table_0_1(w_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(x_64, c_53, t);
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
  ATerm e_53 = NULL,f_53 = NULL;
  t = term_q_22;
  e_53 = t;
  t = term_p_19;
  f_53 = t;
  t = term_s_22;
  t = z_5(e_53, f_53, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_t_22;
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
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL;
  t = term_q_22;
  i_53 = t;
  t = term_p_19;
  j_53 = t;
  t = term_s_22;
  t = z_5(i_53, j_53, t);
  t = term_v_22;
  g_53 = t;
  t = term_p_19;
  h_53 = t;
  t = term_w_22;
  t = z_5(g_53, h_53, t);
  t = term_x_22;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_7, v_7, w_7, t);
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      t = Option_3_0(x_7, y_7, z_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,g_13 = NULL;
  p_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_53 = ATgetFirst((ATermList) t);
      m_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_53);
  k_53 = t;
  t = l_53;
  t = a_90(t);
  n_53 = t;
  t = m_53;
  t = b_90(t);
  o_53 = t;
  t = (ATerm) ATinsert(CheckATermList(o_53), n_53);
  g_13 = t;
  t = SSLsetAnnotations(g_13, k_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_146 (ATerm), ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,z_53 = NULL,a_54 = NULL,m_13 = NULL;
  u_53 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_23;
        t = l_146(t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
      }
  }
  t = u_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_53 = ATgetFirst((ATermList) t);
      x_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_53);
  v_53 = t;
  t = term_j_19;
  a_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_19, w_53);
  t = z_5(a_54, w_53, t);
  t = x_53;
  {
    static ATerm k_54 (ATerm t);
    static ATerm k_54 (ATerm t)
    {
      ATerm k_23 = t;
      int l_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_54 = NULL;
              d_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_54;
              LocalPopChoice(n_23);
            }
          else
            {
              t = m_23;
              t = l_146(t);
              t = Cons_2_0(_id, k_54, t);
            }
          LocalPopChoice(l_23);
        }
      else
        {
          t = k_23;
          {
            ATerm g_54 = NULL,h_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_54 = ATgetFirst((ATermList) t);
                h_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_54), (ATerm) ATmakeAppl(sym_Undefined_1, g_54));
          }
        }
      return(t);
    }
    t = k_54(t);
  }
  z_53 = t;
  t = (ATerm) ATinsert(CheckATermList(z_53), (ATerm) ATmakeAppl(sym_Program_1, w_53));
  m_13 = t;
  t = SSLsetAnnotations(m_13, v_53);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm x_54 = NULL;
  x_54 = t;
  if(match_string(t, "--help"))
    {
      t = x_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_54;
        }
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  t = term_o_23;
  y_54 = t;
  t = term_p_19;
  z_54 = t;
  t = term_p_23;
  t = z_5(y_54, z_54, t);
  t = term_q_23;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_r_23;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm i_146 (ATerm), ATerm j_146 (ATerm), ATerm k_146 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
  r_54 = t;
  t = term_b_20;
  s_54 = t;
  t = term_s_23;
  t = lookup_table_0_1(s_54, t);
  w_54 = t;
  t = term_c_20;
  t_54 = t;
  t = (ATerm) ATempty;
  u_54 = t;
  t = w_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(t_54, u_54, v_54, t);
  t = r_54;
  {
    static ATerm a_8 (ATerm t);
    static ATerm a_8 (ATerm t)
    {
      ATerm t_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_146(t);
          LocalPopChoice(u_23);
        }
      else
        {
          t = t_23;
          {
            ATerm v_23 = t;
            int w_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_8, d_8, e_8, t);
                LocalPopChoice(w_23);
              }
            else
              {
                t = v_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_8, t);
  }
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_55 = NULL;
        k_55 = t;
        {
          ATerm z_23 = t;
          int a_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_23 = NULL;
              t = k_55;
              {
                ATerm b_24 = t;
                int c_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_23 = NULL,d_23 = NULL;
                    t = term_y_17;
                    c_23 = t;
                    t = term_o_23;
                    d_23 = t;
                    t = term_d_24;
                    t = w_5(c_23, d_23, t);
                    LocalPopChoice(c_24);
                  }
                else
                  {
                    t = b_24;
                    t = fetch_1_0(h_8, t);
                  }
              }
              t = k_55;
              t = j_146(t);
              t = term_v_20;
              b_23 = t;
              t = SSL_exit(b_23);
              LocalPopChoice(a_24);
            }
          else
            {
              t = z_23;
              {
                ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
                t = term_y_17;
                i_23 = t;
                t = term_q_22;
                j_23 = t;
                t = term_e_24;
                t = w_5(i_23, j_23, t);
                t = k_55;
                t = k_146(t);
                t = term_v_20;
                h_23 = t;
                t = SSL_exit(h_23);
              }
            }
        }
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        {
          ATerm f_24 = t;
          int g_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
              static ATerm i_8 (ATerm t);
              static ATerm i_8 (ATerm t)
              {
                ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,o_13 = NULL;
                q_55 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_55 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_55);
                o_55 = t;
                t = p_55;
                if(((p_54 != NULL) && (p_54 != t)))
                  _fail(t);
                else
                  p_54 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_55);
                o_13 = t;
                t = SSLsetAnnotations(o_13, o_55);
                return(t);
              }
              t = fetch_1_0(i_8, t);
              t = term_q_21;
              m_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_54)), term_h_24);
              n_55 = t;
              t = SSL_printnl(m_55, n_55);
              t = (ATerm) ATmakeAppl(sym__2, term_q_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_54)), term_h_24));
              t = j_146(t);
              t = term_t_21;
              l_55 = t;
              t = SSL_exit(l_55);
              LocalPopChoice(g_24);
            }
          else
            {
              t = f_24;
            }
        }
      }
  }
  q_54 = t;
  t = term_b_20;
  t = table_destroy_0_0(t);
  t = q_54;
  return(t);
}
ATerm option_wrap_5_0 (ATerm l_144 (ATerm), ATerm m_144 (ATerm), ATerm n_144 (ATerm), ATerm o_144 (ATerm), ATerm p_144 (ATerm), ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL;
  t = parse_options_3_0(l_144, m_144, n_144, t);
  v_55 = t;
  t = term_i_24;
  t = table_create_0_0(t);
  t = term_i_24;
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_24, term_j_24, v_55);
  t = lookup_table_0_1(w_55, t);
  b_56 = t;
  t = term_j_24;
  z_55 = t;
  t = b_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(z_55, v_55, a_56, t);
  t = v_55;
  t = o_144(t);
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_144(t);
        t = report_success_0_0(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
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
                  t = Option_3_0(n_8, o_8, q_8, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(u_24);
                      }
                    else
                      {
                        t = t_24;
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
static ATerm k_8 (ATerm t)
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
  ATerm d_56 = NULL,e_56 = NULL;
  t = term_j_18;
  d_56 = t;
  t = term_p_19;
  e_56 = t;
  t = term_v_24;
  t = z_5(d_56, e_56, t);
  t = term_x_24;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_y_24;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(j_8, default_system_usage_0_0, default_system_about_0_0, _id, k_8, t);
  return(t);
}
