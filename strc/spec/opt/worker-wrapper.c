#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_SVar_1;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDefT_4;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_LRule_1;
Symbol sym_Path_2;
Symbol sym_Seq_2;
Symbol sym_Scope_2;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_Op_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_ConstType_1;
Symbol sym_Sort_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
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
Symbol sym_Undefined_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
Symbol sym_DynamicRules_1;
static void init_module_constructors (void)
{
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
}
ATerm term_b_25;
ATerm term_a_25;
ATerm term_y_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_f_24;
ATerm term_a_24;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_a_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_f_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
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
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_stdout_0);
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
  term_j_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_v_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_j_19);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_x_20);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_s_19);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_r_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_o_20);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_j_19);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_j_19);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_j_19);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym__3, term_n_20, term_o_20, (ATerm) ATempty);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_m_22);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_j_19);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
static ATerm y_4 (ATerm b_108 (ATerm), ATerm i_30, ATerm h_30, ATerm t);
ATerm genzip_4_0 (ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm d_5 (ATerm c_698, ATerm h_698, ATerm h_70, ATerm t);
ATerm while_not_2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm t);
ATerm for_3_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm j_6 (ATerm e_3, ATerm f_3, ATerm g_3, ATerm t);
static ATerm x_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm i_130 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm p_130 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm h_5 (ATerm j_108 (ATerm), ATerm k_108 (ATerm), ATerm o_30, ATerm n_30, ATerm t);
static ATerm i_5 (ATerm g_108 (ATerm), ATerm k_30, ATerm j_30, ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm free_vars_3_0 (ATerm w_127 (ATerm), ATerm x_127 (ATerm), ATerm y_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
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
ATerm at_end_1_0 (ATerm m_104 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm f_41 (ATerm x_40, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm worker_wrapper_spec_0_0 (ATerm t);
static ATerm j_5 (ATerm l_39, ATerm m_39, ATerm t);
static ATerm k_5 (ATerm g_24, ATerm h_24, ATerm t);
static ATerm m_5 (ATerm m_103 (ATerm), ATerm r_165, ATerm m_24, ATerm t);
static ATerm l_5 (ATerm c_24, ATerm d_24, ATerm t);
static ATerm d_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm output_1_0 (ATerm q_123 (ATerm), ATerm t);
static ATerm k_43 (ATerm e_43, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_5 (ATerm i_24, ATerm t);
static ATerm o_5 (ATerm e_38, ATerm f_38, ATerm t);
static ATerm p_5 (ATerm n_39, ATerm o_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_44 (ATerm v_43, ATerm t);
static ATerm x_44 (ATerm z_43, ATerm a_44, ATerm b_44, ATerm t);
static ATerm y_44 (ATerm j_44, ATerm k_44, ATerm l_44, ATerm t);
static ATerm q_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm r_123 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_5 (ATerm v_57, ATerm w_57, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_5 (ATerm q_62, ATerm r_62, ATerm p_62, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_5 (ATerm h_42, ATerm i_42, ATerm t);
ATerm foldr_2_0 (ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_120 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm need_help_1_0 (ATerm h_123 (ATerm), ATerm t);
static ATerm a_6 (ATerm i_67, ATerm j_67, ATerm k_67, ATerm t);
ATerm lookup_table_0_1 (ATerm c_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_67, ATerm r_67, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_5 (ATerm n_67, ATerm o_67, ATerm t);
static ATerm u_5 (ATerm s_67, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm v_103 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_104 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm b_6 (ATerm l_67, ATerm m_67, ATerm t);
static ATerm w_5 (ATerm j_64, ATerm k_64, ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_125 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm parse_options_1_0 (ATerm j_125 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_123 (ATerm), ATerm k_123 (ATerm), ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
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
static ATerm y_4 (ATerm b_108 (ATerm), ATerm i_30, ATerm h_30, ATerm t)
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
          ATerm u_8 = t;
          int b_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_0;
              {
                static ATerm a_0 (ATerm t);
                static ATerm a_0 (ATerm t)
                {
                  t = h_30;
                  return(t);
                }
                t = h_5(b_108, a_0, v_0, w_0, t);
              }
              t = z_0(t);
              LocalPopChoice(b_9);
            }
          else
            {
              t = u_8;
              {
                ATerm n_0 = NULL,d_1 = NULL,e_0 = NULL;
                t = SSLgetAnnotations(u_0);
                n_0 = t;
                t = w_0;
                t = z_0(t);
                d_1 = t;
                t = (ATerm) ATinsert(CheckATermList(d_1), v_0);
                e_0 = t;
                t = SSLsetAnnotations(e_0, n_0);
              }
            }
        }
      }
    return(t);
  }
  t = i_30;
  t = z_0(t);
  return(t);
}
ATerm genzip_4_0 (ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm t)
{
  static ATerm l_1 (ATerm t);
  static ATerm l_1 (ATerm t)
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_105(t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        {
          ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,i_0 = NULL;
          t = a_106(t);
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
          t = c_106(t);
          i_1 = t;
          t = g_1;
          t = l_1(t);
          j_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_1, j_1);
          i_0 = t;
          t = SSLsetAnnotations(i_0, e_1);
          t = b_106(t);
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
      ATerm e_9 = ATgetArgument(t, 0);
      if(((ATgetType(e_9) != AT_LIST) || !(ATisEmpty(e_9))))
        _fail(t);
      {
        ATerm f_9 = ATgetArgument(t, 1);
        if(((ATgetType(f_9) != AT_LIST) || !(ATisEmpty(f_9))))
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
  ATerm y_1 = NULL,z_1 = NULL,i_2 = NULL,k_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_9 = ATgetArgument(t, 0);
      if(((ATgetType(g_9) == AT_LIST) && !(ATisEmpty(g_9))))
        {
          y_1 = ATgetFirst((ATermList) g_9);
          z_1 = (ATerm) ATgetNext((ATermList) g_9);
        }
      else
        _fail(t);
      {
        ATerm m_9 = ATgetArgument(t, 1);
        if(((ATgetType(m_9) == AT_LIST) && !(ATisEmpty(m_9))))
          {
            i_2 = ATgetFirst((ATermList) m_9);
            k_2 = (ATerm) ATgetNext((ATermList) m_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_1, i_2), (ATerm) ATmakeAppl(sym__2, z_1, k_2));
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm l_2 = NULL,n_2 = NULL;
  if(match_cons(t, sym__2))
    {
      l_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_2), l_2);
  return(t);
}
static ATerm d_5 (ATerm c_698, ATerm h_698, ATerm h_70, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL;
  t = SSL_explode_term(h_698);
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_698);
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
  t = genzip_4_0(b_0, c_0, f_0, _id, t);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, h_70);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t);
  static ATerm p_2 (ATerm t)
  {
    ATerm o_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_97(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = o_9;
        t = b_97(t);
        t = p_2(t);
      }
    return(t);
  }
  t = p_2(t);
  return(t);
}
ATerm for_3_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t)
{
  t = d_97(t);
  t = while_not_2_0(e_97, f_97, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm y_2 = NULL;
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_2);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,q_0 = NULL;
  d_3 = t;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_3);
  a_3 = t;
  t = c_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_3, c_3);
  q_0 = t;
  t = SSLsetAnnotations(q_0, a_3);
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
            t = j_6(n_4, o_4, k_4, t);
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
      t = j_6(n_4, o_4, k_4, t);
    }
  return(t);
}
static ATerm j_6 (ATerm e_3, ATerm f_3, ATerm g_3, ATerm t)
{
  ATerm j_3 = NULL,q_3 = NULL,r_0 = NULL,t_3 = NULL,x_3 = NULL,y_3 = NULL,b_4 = NULL;
  t = SSLgetAnnotations(g_3);
  j_3 = t;
  t = f_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_3 = ATgetFirst((ATermList) t);
      b_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_3;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_3;
        if((x_3 != t))
          {
            _fail(t);
          }
        t = b_4;
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        t = f_3;
        t = d_5(x_3, y_3, b_4, t);
      }
  }
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_3, q_3);
  r_0 = t;
  t = SSLsetAnnotations(r_0, j_3);
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
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(k_0, s_0, t_0, t);
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      {
        ATerm e_5 = NULL,v_5 = NULL,f_6 = NULL;
        e_5 = t;
        if(match_cons(t, sym__2))
          {
            v_5 = ATgetArgument(t, 0);
            f_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_5;
        t = y_4(x_0, v_5, f_6, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm i_130 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,g_18 = NULL;
  e_18 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_18 = ATgetArgument(t, 0);
      d_18 = ATgetArgument(t, 1);
      {
        ATerm x_1 = NULL,c_2 = NULL,d_2 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(e_18);
        x_1 = t;
        t = g_18;
        t = i_130(t);
        c_2 = t;
        t = d_18;
        t = g_130(t);
        d_2 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, c_2, d_2);
        a_1 = t;
        t = SSLsetAnnotations(a_1, x_1);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          g_18 = ATgetArgument(t, 0);
          {
            ATerm q_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL,h_3 = NULL,l_8 = NULL,k_8 = NULL;
            t = SSLgetAnnotations(e_18);
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
            t = g_130(t);
            w_2 = t;
            t = u_2;
            t = g_130(t);
            x_2 = t;
            t = v_2;
            t = g_130(t);
            z_2 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, w_2, x_2, z_2);
            k_8 = t;
            t = SSLsetAnnotations(k_8, s_2);
            h_3 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, h_3);
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
                ATerm w_3 = NULL,e_4 = NULL,h_4 = NULL,l_4 = NULL,m_8 = NULL;
                t = SSLgetAnnotations(e_18);
                w_3 = t;
                t = g_18;
                t = i_130(t);
                e_4 = t;
                t = d_18;
                t = i_130(t);
                h_4 = t;
                t = b_18;
                t = i_130(t);
                l_4 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, e_4, h_4, l_4);
                m_8 = t;
                t = SSLsetAnnotations(m_8, w_3);
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
                    ATerm g_5 = NULL,e_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,q_8 = NULL;
                    t = SSLgetAnnotations(e_18);
                    g_5 = t;
                    t = g_18;
                    t = i_130(t);
                    e_6 = t;
                    t = d_18;
                    t = i_130(t);
                    k_6 = t;
                    t = b_18;
                    t = i_130(t);
                    l_6 = t;
                    t = c_18;
                    t = g_130(t);
                    m_6 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, e_6, k_6, l_6, m_6);
                    q_8 = t;
                    t = SSLsetAnnotations(q_8, g_5);
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
                        t = SSLgetAnnotations(e_18);
                        y_6 = t;
                        t = g_18;
                        t = i_130(t);
                        d_7 = t;
                        t = d_18;
                        t = i_130(t);
                        e_7 = t;
                        t = b_18;
                        t = i_130(t);
                        f_7 = t;
                        t = c_18;
                        t = g_130(t);
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
                            t = SSLgetAnnotations(e_18);
                            q_7 = t;
                            t = g_18;
                            t = i_130(t);
                            t_7 = t;
                            t = d_18;
                            t = g_130(t);
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
                                t = SSLgetAnnotations(e_18);
                                c_8 = t;
                                t = g_18;
                                t = i_130(t);
                                f_8 = t;
                                t = d_18;
                                t = g_130(t);
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
                                    ATerm s_8 = NULL,v_8 = NULL,w_8 = NULL,a_9 = NULL;
                                    t = SSLgetAnnotations(e_18);
                                    s_8 = t;
                                    t = g_18;
                                    t = i_130(t);
                                    v_8 = t;
                                    t = d_18;
                                    t = g_130(t);
                                    w_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, v_8, w_8);
                                    a_9 = t;
                                    t = SSLsetAnnotations(a_9, s_8);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      g_18 = ATgetArgument(t, 0);
                                      {
                                        ATerm n_9 = NULL,p_9 = NULL,h_9 = NULL;
                                        t = SSLgetAnnotations(e_18);
                                        n_9 = t;
                                        t = g_18;
                                        t = g_130(t);
                                        p_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, p_9);
                                        h_9 = t;
                                        t = SSLsetAnnotations(h_9, n_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          g_18 = ATgetArgument(t, 0);
                                          {
                                            ATerm v_9 = NULL,y_9 = NULL,i_9 = NULL;
                                            t = SSLgetAnnotations(e_18);
                                            v_9 = t;
                                            t = g_18;
                                            t = g_130(t);
                                            y_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, y_9);
                                            i_9 = t;
                                            t = SSLsetAnnotations(i_9, v_9);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              g_18 = ATgetArgument(t, 0);
                                              {
                                                ATerm f_10 = NULL,h_10 = NULL,j_9 = NULL;
                                                t = SSLgetAnnotations(e_18);
                                                f_10 = t;
                                                t = g_18;
                                                t = g_130(t);
                                                h_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, h_10);
                                                j_9 = t;
                                                t = SSLsetAnnotations(j_9, f_10);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  g_18 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm o_10 = NULL,q_10 = NULL,k_9 = NULL;
                                                    t = SSLgetAnnotations(e_18);
                                                    o_10 = t;
                                                    t = g_18;
                                                    t = g_130(t);
                                                    q_10 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, q_10);
                                                    k_9 = t;
                                                    t = SSLsetAnnotations(k_9, o_10);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm y_10 = NULL,a_11 = NULL,l_9 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      g_18 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(e_18);
                                                  y_10 = t;
                                                  t = g_18;
                                                  t = g_130(t);
                                                  a_11 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, a_11);
                                                  l_9 = t;
                                                  t = SSLsetAnnotations(l_9, y_10);
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
ATerm dynrule_targs_1_0 (ATerm p_130 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,l_20 = NULL;
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          d_20 = ATgetArgument(t, 0);
          {
            ATerm b_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_10);
      t = d_20;
      if(match_cons(t, sym_DynRuleId_1))
        {
          e_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_20;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm c_10 = ATgetArgument(t, 0);
          ATerm d_10 = ATgetArgument(t, 1);
          l_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_20;
    }
  else
    {
      t = z_9;
      {
        ATerm e_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                d_20 = ATgetArgument(t, 0);
                {
                  ATerm i_10 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_10);
            t = d_20;
            if(match_cons(t, sym_DynRuleId_1))
              {
                e_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = e_20;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_10 = ATgetArgument(t, 0);
                ATerm k_10 = ATgetArgument(t, 1);
                l_20 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = l_20;
          }
        else
          {
            t = e_10;
            if(match_cons(t, sym_AddDynRule_2))
              {
                d_20 = ATgetArgument(t, 0);
                {
                  ATerm l_10 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = d_20;
            if(match_cons(t, sym_DynRuleId_1))
              {
                e_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = e_20;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_10 = ATgetArgument(t, 0);
                ATerm n_10 = ATgetArgument(t, 1);
                l_20 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = l_20;
          }
      }
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm v_22 = NULL;
  ATerm p_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_22 = ATgetArgument(t, 0);
          {
            ATerm s_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_10);
      t = v_22;
    }
  else
    {
      t = p_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_22;
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm i_23 = NULL;
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_23 = ATgetArgument(t, 0);
          {
            ATerm v_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_10);
      t = i_23;
    }
  else
    {
      t = t_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_23;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm o_21 = NULL;
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm z_10 = ATgetArgument(t, 0);
          ATerm b_11 = ATgetArgument(t, 1);
          o_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(x_10);
      t = o_21;
      t = map_1_0(y_0, t);
    }
  else
    {
      t = w_10;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm c_11 = ATgetArgument(t, 0);
          ATerm d_11 = ATgetArgument(t, 1);
          o_21 = ATgetArgument(t, 2);
          {
            ATerm e_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = o_21;
      t = map_1_0(b_1, t);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm i_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_25);
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
        ATerm h_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_11);
          }
        else
          {
            t = h_11;
            {
              ATerm k_11 = t;
              int l_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_25 = NULL,o_25 = NULL,r_25 = NULL,s_25 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_25 = ATgetArgument(t, 0);
                      o_25 = ATgetArgument(t, 1);
                      r_25 = ATgetArgument(t, 2);
                      s_25 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_25;
                  t = map_1_0(m_1, t);
                  LocalPopChoice(l_11);
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
  ATerm d_26 = NULL;
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_26 = ATgetArgument(t, 0);
          {
            ATerm r_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_11);
      t = d_26;
    }
  else
    {
      t = p_11;
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
static ATerm r_1 (ATerm t)
{
  t = map_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm l_26 = NULL;
  ATerm s_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_26 = ATgetArgument(t, 0);
          {
            ATerm w_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_11);
      t = l_26;
    }
  else
    {
      t = s_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_26;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm w_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_26);
  return(t);
}
static ATerm u_1 (ATerm t)
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
                  ATerm y_26 = NULL,a_27 = NULL,c_27 = NULL,d_27 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_26 = ATgetArgument(t, 0);
                      a_27 = ATgetArgument(t, 1);
                      c_27 = ATgetArgument(t, 2);
                      d_27 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_27;
                  t = map_1_0(v_1, t);
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
                        t = dynrule_targs_1_0(w_1, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm r_27 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_27 = ATgetArgument(t, 0);
          {
            ATerm u_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_12);
      t = r_27;
    }
  else
    {
      t = r_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_27;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = map_1_0(a_2, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm c_28 = NULL;
  ATerm w_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_28 = ATgetArgument(t, 0);
          {
            ATerm b_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_12);
      t = c_28;
    }
  else
    {
      t = w_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_28;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm g_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_28);
  return(t);
}
static ATerm e_2 (ATerm t)
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
                  ATerm j_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_28 = ATgetArgument(t, 0);
                      l_28 = ATgetArgument(t, 1);
                      m_28 = ATgetArgument(t, 2);
                      n_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_28;
                  t = map_1_0(f_2, t);
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
                        t = dynrule_targs_1_0(g_2, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm f_29 = NULL;
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_29 = ATgetArgument(t, 0);
          {
            ATerm s_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_13);
      t = f_29;
    }
  else
    {
      t = q_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_29;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = map_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm k_29 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_29 = ATgetArgument(t, 0);
          {
            ATerm v_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_13);
      t = k_29;
    }
  else
    {
      t = t_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_29;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm t_29 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_29);
  return(t);
}
static ATerm m_2 (ATerm t)
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
                  ATerm x_29 = NULL,c_30 = NULL,f_30 = NULL,g_30 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_29 = ATgetArgument(t, 0);
                      c_30 = ATgetArgument(t, 1);
                      f_30 = ATgetArgument(t, 2);
                      g_30 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_30;
                  t = map_1_0(o_2, t);
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
static ATerm o_2 (ATerm t)
{
  ATerm y_30 = NULL;
  ATerm e_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_30 = ATgetArgument(t, 0);
          {
            ATerm i_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_14);
      t = y_30;
    }
  else
    {
      t = e_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_30;
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
  ATerm h_31 = NULL;
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_31 = ATgetArgument(t, 0);
          {
            ATerm l_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_14);
      t = h_31;
    }
  else
    {
      t = j_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_31;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm r_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_31);
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
                  ATerm t_31 = NULL,u_31 = NULL,x_31 = NULL,y_31 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_31 = ATgetArgument(t, 0);
                      u_31 = ATgetArgument(t, 1);
                      x_31 = ATgetArgument(t, 2);
                      y_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_31;
                  t = map_1_0(m_3, t);
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
                        t = dynrule_targs_1_0(n_3, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm m_32 = NULL;
  ATerm x_14 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_32 = ATgetArgument(t, 0);
          {
            ATerm d_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_15);
      t = m_32;
    }
  else
    {
      t = x_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_32;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = map_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm b_33 = NULL;
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_33 = ATgetArgument(t, 0);
          {
            ATerm g_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_15);
      t = b_33;
    }
  else
    {
      t = e_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_33;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm z_24 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      z_24 = ATgetArgument(t, 0);
      t = z_24;
      t = free_vars_3_0(c_1, h_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          z_24 = ATgetArgument(t, 0);
          t = z_24;
          t = free_vars_3_0(t_1, u_1, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              z_24 = ATgetArgument(t, 0);
              t = z_24;
              t = free_vars_3_0(b_2, e_2, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  z_24 = ATgetArgument(t, 0);
                  t = z_24;
                  t = free_vars_3_0(j_2, m_2, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      z_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_24;
                  t = free_vars_3_0(k_3, l_3, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm e_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_34);
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
                  ATerm k_34 = NULL,l_34 = NULL,r_34 = NULL,s_34 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_34 = ATgetArgument(t, 0);
                      l_34 = ATgetArgument(t, 1);
                      r_34 = ATgetArgument(t, 2);
                      s_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_34;
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
  ATerm c_35 = NULL;
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_35 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_15);
      t = c_35;
    }
  else
    {
      t = u_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_35;
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
  ATerm h_35 = NULL;
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_35 = ATgetArgument(t, 0);
          {
            ATerm z_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_15);
      t = h_35;
    }
  else
    {
      t = x_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_35;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm r_33 = NULL,y_33 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      y_33 = ATgetArgument(t, 0);
      t = y_33;
      if(match_cons(t, sym_Rule_3))
        {
          r_33 = ATgetArgument(t, 0);
          {
            ATerm a_16 = ATgetArgument(t, 1);
          }
          {
            ATerm b_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_33;
      t = free_vars_3_0(p_3, r_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          y_33 = ATgetArgument(t, 0);
          {
            ATerm c_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_33;
    }
  return(t);
}
static ATerm h_5 (ATerm j_108 (ATerm), ATerm k_108 (ATerm), ATerm o_30, ATerm n_30, ATerm t)
{
  t = k_108(t);
  {
    static ATerm z_3 (ATerm t);
    static ATerm z_3 (ATerm t)
    {
      ATerm n_35 = NULL;
      n_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_30, n_35);
      t = j_108(t);
      return(t);
    }
    t = fetch_1_0(z_3, t);
  }
  t = n_30;
  return(t);
}
static ATerm i_5 (ATerm g_108 (ATerm), ATerm k_30, ATerm j_30, ATerm t)
{
  static ATerm d_36 (ATerm t);
  static ATerm d_36 (ATerm t)
  {
    ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
    y_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_35 = ATgetFirst((ATermList) t);
            a_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_16 = t;
          int e_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_35;
              {
                static ATerm a_4 (ATerm t);
                static ATerm a_4 (ATerm t)
                {
                  t = j_30;
                  return(t);
                }
                t = h_5(g_108, a_4, z_35, a_36, t);
              }
              t = d_36(t);
              LocalPopChoice(e_16);
            }
          else
            {
              t = d_16;
              {
                ATerm i_11 = NULL,m_11 = NULL,z_11 = NULL;
                t = SSLgetAnnotations(y_35);
                i_11 = t;
                t = a_36;
                t = d_36(t);
                m_11 = t;
                t = (ATerm) ATinsert(CheckATermList(m_11), z_35);
                z_11 = t;
                t = SSLsetAnnotations(z_11, i_11);
              }
            }
        }
      }
    return(t);
  }
  t = k_30;
  t = d_36(t);
  return(t);
}
static ATerm d_4 (ATerm t)
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
ATerm free_vars_3_0 (ATerm w_127 (ATerm), ATerm x_127 (ATerm), ATerm y_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm u_36 (ATerm t);
  static ATerm u_36 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_127(t);
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
              ATerm i_36 = NULL,j_36 = NULL,t_11 = NULL,u_11 = NULL;
              i_36 = t;
              t = x_127(t);
              j_36 = t;
              t = i_36;
              {
                static ATerm c_4 (ATerm t);
                static ATerm c_4 (ATerm t)
                {
                  ATerm l_36 = NULL;
                  t = u_36(t);
                  l_36 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_36, j_36);
                  t = diff_0_0(t);
                  return(t);
                }
                t = y_127(c_4, u_36, d_4, t);
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
                t = foldr_3_0(j_4, m_4, u_36, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_36(t);
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
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_16);
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
  ATerm q_16 = NULL;
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_16 = ATgetArgument(t, 0);
          {
            ATerm b_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_16);
      t = q_16;
    }
  else
    {
      t = y_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_16;
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
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  b_39 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      c_39 = ATgetArgument(t, 0);
      d_39 = ATgetArgument(t, 1);
      e_39 = ATgetArgument(t, 2);
      f_39 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = f_39;
  if(match_cons(t, sym_Seq_2))
    {
      g_39 = ATgetArgument(t, 0);
      h_39 = ATgetArgument(t, 1);
      t = g_39;
      if(match_cons(t, sym_Match_1))
        {
          a_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, c_39, d_39, e_39, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_39), h_39)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm f_14 = NULL,g_14 = NULL,o_14 = NULL,t_14 = NULL,v_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          g_39 = ATgetArgument(t, 0);
          h_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_39;
      if(match_cons(t, sym_Seq_2))
        {
          i_39 = ATgetArgument(t, 0);
          k_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_39;
      if(match_cons(t, sym_Match_1))
        {
          j_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_39;
      if(match_cons(t, sym_Op_2))
        {
          ATerm l_17 = ATgetArgument(t, 0);
          ATerm m_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_39;
      t = free_vars_3_0(s_4, t_4, tboundin_3_0, t);
      a_15 = t;
      t = e_39;
      t = map_1_0(x_4, t);
      b_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_15, b_15);
      t = diff_0_0(t);
      g_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_39, g_14);
      t = diff_0_0(t);
      f_14 = t;
      t = g_14;
      t = map_1_0(z_4, t);
      o_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_39, o_14);
      t = conc_0_0(t);
      y_14 = t;
      t = new_0_0(t);
      t_14 = t;
      t = d_39;
      t = map_1_0(a_5, t);
      v_14 = t;
      t = y_14;
      t = map_1_0(b_5, t);
      z_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, t_14, d_39, y_14, (ATerm) ATmakeAppl(sym_Scope_2, f_14, k_39))), (ATerm) ATmakeAppl(sym_SDefT_4, c_39, d_39, e_39, (ATerm) ATmakeAppl(sym_Scope_2, g_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_39), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_14), v_14, z_14)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  static ATerm t_40 (ATerm t);
  static ATerm t_40 (ATerm t)
  {
    ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
    s_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_40 = ATgetFirst((ATermList) t);
        r_40 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_18 = NULL,b_19 = NULL,b_12 = NULL;
          t = SSLgetAnnotations(s_40);
          y_18 = t;
          t = r_40;
          t = t_40(t);
          b_19 = t;
          t = (ATerm) ATinsert(CheckATermList(b_19), q_40);
          b_12 = t;
          t = SSLsetAnnotations(b_12, y_18);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_40;
        t = m_104(t);
      }
    return(t);
  }
  t = t_40(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_40;
    }
  else
    {
      static ATerm c_5 (ATerm t);
      static ATerm c_5 (ATerm t)
      {
        t = not_null(c_40);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_40 = ATgetFirst((ATermList) t);
          if(((c_40 != NULL) && (c_40 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_40;
      t = at_end_1_0(c_5, t);
    }
  return(t);
}
static ATerm f_41 (ATerm x_40, ATerm t)
{
  ATerm y_40 = NULL;
  t = SSL_explode_term(x_40);
  if(match_cons(t, sym__2))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_40;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
  c_41 = t;
  if(match_cons(t, sym__2))
    {
      a_41 = ATgetArgument(t, 0);
      b_41 = ATgetArgument(t, 1);
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm f_5 (ATerm t);
            static ATerm f_5 (ATerm t)
            {
              t = b_41;
              return(t);
            }
            t = a_41;
            t = at_end_1_0(f_5, t);
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            t = f_41(c_41, t);
          }
      }
    }
  else
    {
      t = f_41(c_41, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
  h_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_41;
      t = w_110(t);
    }
  else
    {
      ATerm m_41 = NULL,n_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_41 = ATgetFirst((ATermList) t);
          j_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_41;
      t = y_110(t);
      m_41 = t;
      t = j_41;
      t = foldr_3_0(w_110, x_110, y_110, t);
      n_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_41, n_41);
      t = x_110(t);
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,d_12 = NULL;
  a_42 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      y_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_42);
  x_41 = t;
  t = y_41;
  t = foldr_3_0(_id, conc_0_0, c_6, t);
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, z_41);
  d_12 = t;
  t = SSLsetAnnotations(d_12, x_41);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
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
        ATerm c_42 = NULL;
        c_42 = t;
        t = (ATerm) ATinsert(ATempty, c_42);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,f_12 = NULL,e_12 = NULL;
  w_41 = t;
  if(match_cons(t, sym_Specification_1))
    {
      q_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_41);
  p_41 = t;
  t = q_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_41 = ATgetFirst((ATermList) t);
      t_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_41);
  r_41 = t;
  t = t_41;
  t = Cons_2_0(s_5, y_5, t);
  u_41 = t;
  t = (ATerm) ATinsert(CheckATermList(u_41), s_41);
  e_12 = t;
  t = SSLsetAnnotations(e_12, r_41);
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_41);
  f_12 = t;
  t = SSLsetAnnotations(f_12, p_41);
  return(t);
}
static ATerm j_5 (ATerm l_39, ATerm m_39, ATerm t)
{
  ATerm e_42 = NULL;
  t = SSL_fputc(l_39, m_39);
  e_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_42);
  return(t);
}
static ATerm k_5 (ATerm g_24, ATerm h_24, ATerm t)
{
  ATerm f_42 = NULL;
  t = SSL_write_term_to_stream_text(g_24, h_24);
  f_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_42);
  return(t);
}
static ATerm m_5 (ATerm m_103 (ATerm), ATerm r_165, ATerm m_24, ATerm t)
{
  ATerm g_42 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_165, term_s_17);
  t = q_5(t);
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_42, m_24);
  t = m_103(t);
  t = fclose_0_0(t);
  t = m_24;
  return(t);
}
static ATerm l_5 (ATerm c_24, ATerm d_24, ATerm t)
{
  ATerm j_42 = NULL;
  t = SSL_write_term_to_stream_baf(c_24, d_24);
  j_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_42);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if(match_cons(t_17, sym_Stream_1))
        {
          q_42 = ATgetArgument(t_17, 0);
        }
      else
        _fail(t);
      r_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(q_42, r_42, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      if(match_cons(u_17, sym_Stream_1))
        {
          v_42 = ATgetArgument(u_17, 0);
        }
      else
        _fail(t);
      w_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(v_42, w_42, t);
  s_42 = t;
  t = term_v_17;
  t_42 = t;
  t = s_42;
  if(match_cons(t, sym_Stream_1))
    {
      u_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, s_42);
  t = j_5(t_42, u_42, t);
  return(t);
}
ATerm output_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  t = q_123(t);
  l_42 = t;
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_42 = NULL,n_42 = NULL;
        t = term_y_17;
        m_42 = t;
        t = term_z_17;
        n_42 = t;
        t = term_a_18;
        t = w_5(m_42, n_42, t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = term_f_18;
      }
  }
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_42, l_42);
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_42 = NULL,p_42 = NULL;
        t = term_y_17;
        o_42 = t;
        t = term_j_18;
        p_42 = t;
        t = term_k_18;
        t = w_5(o_42, p_42, t);
        t = (ATerm) ATmakeAppl(sym__2, k_42, l_42);
        LocalPopChoice(i_18);
        if(match_cons(t, sym__2))
          {
            ATerm l_18 = ATgetArgument(t, 0);
            ATerm m_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_5(d_6, k_42, l_42, t);
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
        t = m_5(g_6, k_42, l_42, t);
      }
  }
  return(t);
}
static ATerm k_43 (ATerm e_43, ATerm t)
{
  t = SSL_fclose(e_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL;
  i_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_43 = ATgetArgument(t, 0);
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_43);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = k_43(i_43, t);
          }
      }
    }
  else
    {
      t = k_43(i_43, t);
    }
  return(t);
}
static ATerm n_5 (ATerm i_24, ATerm t)
{
  t = SSL_read_term_from_stream(i_24);
  return(t);
}
static ATerm o_5 (ATerm e_38, ATerm f_38, ATerm t)
{
  t = SSL_strcat(e_38, f_38);
  return(t);
}
static ATerm p_5 (ATerm n_39, ATerm o_39, ATerm t)
{
  ATerm l_43 = NULL;
  t = SSL_fopen(n_39, o_39);
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_43);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_43 = NULL;
  t = SSL_stdin_stream();
  m_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_43 = NULL;
  t = SSL_stdout_stream();
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_43 = NULL;
  t = SSL_stderr_stream();
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_43);
  return(t);
}
static ATerm w_44 (ATerm v_43, ATerm t)
{
  ATerm w_43 = NULL;
  t = SSL_explode_term(v_43);
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_18 = ATgetArgument(t, 1);
        if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
          {
            w_43 = ATgetFirst((ATermList) s_18);
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
  t = w_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_44 (ATerm z_43, ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,h_44 = NULL,m_12 = NULL;
  t = SSLgetAnnotations(b_44);
  e_44 = t;
  t = z_43;
  if(match_cons(t, sym_Path_1))
    {
      h_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_44, a_44);
  m_12 = t;
  t = SSLsetAnnotations(m_12, e_44);
  if(match_cons(t, sym__2))
    {
      c_44 = ATgetArgument(t, 0);
      d_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(c_44, d_44, t);
  return(t);
}
static ATerm y_44 (ATerm j_44, ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,r_44 = NULL,q_12 = NULL;
  t = SSLgetAnnotations(l_44);
  o_44 = t;
  t = SSL_is_string(j_44);
  r_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_44, k_44);
  q_12 = t;
  t = SSLsetAnnotations(q_12, o_44);
  if(match_cons(t, sym__2))
    {
      m_44 = ATgetArgument(t, 0);
      n_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(m_44, n_44, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  if(match_cons(t, sym__2))
    {
      u_44 = ATgetArgument(t, 0);
      v_44 = ATgetArgument(t, 1);
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_44(t_44, t);
            LocalPopChoice(v_18);
          }
        else
          {
            t = u_18;
            {
              ATerm w_18 = t;
              int x_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_44(u_44, v_44, t_44, t);
                  LocalPopChoice(x_18);
                }
              else
                {
                  t = w_18;
                  t = y_44(u_44, v_44, t_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_44(t_44, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL,h_45 = NULL;
  h_45 = t;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_45, term_c_19);
        t = q_5(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        {
          ATerm q_19 = NULL,r_19 = NULL;
          t = term_d_19;
          r_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_19, h_45);
          t = o_5(r_19, h_45, t);
          q_19 = t;
          t = SSL_perror(q_19);
          _fail(t);
        }
      }
  }
  b_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_5(c_45, t);
  a_45 = t;
  t = b_45;
  t = fclose_0_0(t);
  t = a_45;
  return(t);
}
ATerm input_1_0 (ATerm r_123 (ATerm), ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_45 = NULL,l_45 = NULL;
      t = term_y_17;
      k_45 = t;
      t = term_g_19;
      l_45 = t;
      t = term_h_19;
      t = w_5(k_45, l_45, t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = term_i_19;
    }
  t = ReadFromFile_0_0(t);
  t = r_123(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL;
  m_45 = t;
  t = term_j_19;
  t = whoami_0_0(t);
  n_45 = t;
  t = term_k_19;
  p_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_19), n_45), term_l_19);
  q_45 = t;
  t = SSL_printnl(p_45, q_45);
  t = term_n_19;
  o_45 = t;
  t = SSL_exit(o_45);
  t = m_45;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm s_45 = NULL;
  s_45 = t;
  if(match_string(t, "-k"))
    {
      t = s_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_45;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
  t_45 = t;
  t = SSL_string_to_int(t_45);
  u_45 = t;
  t = term_o_19;
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, u_45);
  t = z_5(v_45, u_45, t);
  t = t_45;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_6, n_6, o_6, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  if(match_string(t, "-S"))
    {
      t = x_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_45;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL;
  t = term_s_19;
  y_45 = t;
  t = term_v_19;
  z_45 = t;
  t = term_w_19;
  t = z_5(y_45, z_45, t);
  t = term_z_19;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_a_20;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
  a_46 = t;
  t = SSL_string_to_int(a_46);
  b_46 = t;
  t = term_s_19;
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_19, b_46);
  t = z_5(c_46, b_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_46);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL;
  t = term_c_20;
  d_46 = t;
  t = term_j_19;
  e_46 = t;
  t = term_f_20;
  t = z_5(d_46, e_46, t);
  t = term_g_20;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_h_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_6, q_6, r_6, t);
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm k_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_6, t_6, u_6, t);
            LocalPopChoice(m_20);
          }
        else
          {
            t = k_20;
            t = Option_3_0(v_6, w_6, x_6, t);
          }
      }
    }
  return(t);
}
static ATerm z_5 (ATerm v_57, ATerm w_57, ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  t = term_y_17;
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_17, v_57, w_57);
  t = lookup_table_0_1(f_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(v_57, w_57, g_46, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_17, v_57, w_57);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
      t = term_j_19;
      t = h_0(t);
      m_46 = t;
      t = term_n_20;
      n_46 = t;
      t = term_o_20;
      o_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_20, term_o_20, m_46);
      t = x_5(n_46, o_46, m_46, t);
      _fail(t);
    }
  else
    {
      ATerm r_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_46 = ATgetFirst((ATermList) t);
          l_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_46;
      t = d_0(t);
      t = term_j_19;
      t = g_0(t);
      r_46 = t;
      t = (ATerm) ATinsert(CheckATermList(l_46), r_46);
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm t_46 = NULL;
  t_46 = t;
  if(match_string(t, "-o"))
    {
      t = t_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_46;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  u_46 = t;
  t = term_z_17;
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, u_46);
  t = z_5(v_46, u_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_46);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_6, a_7, b_7, t);
  return(t);
}
static ATerm x_5 (ATerm q_62, ATerm r_62, ATerm p_62, ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL;
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_62, r_62);
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_20 = ATgetArgument(t, 0);
            ATerm t_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_62, r_62);
        t = w_5(q_62, r_62, t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = (ATerm) ATempty;
      }
  }
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_62, r_62, (ATerm) ATinsert(CheckATermList(y_46), p_62));
  t = lookup_table_0_1(q_62, t);
  b_47 = t;
  t = (ATerm) ATinsert(CheckATermList(y_46), p_62);
  z_46 = t;
  t = b_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(r_62, z_46, a_47, t);
  t = x_46;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
      t = term_j_19;
      t = p_0(t);
      m_47 = t;
      t = term_n_20;
      n_47 = t;
      t = term_o_20;
      o_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_20, term_o_20, m_47);
      t = x_5(n_47, o_47, m_47, t);
      _fail(t);
    }
  else
    {
      ATerm s_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_47 = ATgetFirst((ATermList) t);
          j_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_47 = ATgetFirst((ATermList) t);
          l_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_47;
      t = m_0(t);
      t = k_47;
      t = o_0(t);
      s_47 = t;
      t = (ATerm) ATinsert(CheckATermList(l_47), s_47);
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm u_47 = NULL;
  u_47 = t;
  if(match_string(t, "-i"))
    {
      t = u_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_47;
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL;
  v_47 = t;
  t = term_g_19;
  w_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, v_47);
  t = z_5(w_47, v_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_47);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_v_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_7, h_7, i_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_19;
  t = whoami_0_0(t);
  x_47 = t;
  t = term_k_19;
  z_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_20), x_47);
  a_48 = t;
  t = SSL_printnl(z_47, a_48);
  t = term_n_19;
  y_47 = t;
  t = SSL_exit(y_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL;
  t = term_y_17;
  b_48 = t;
  t = term_x_20;
  c_48 = t;
  t = term_y_20;
  t = w_5(b_48, c_48, t);
  return(t);
}
static ATerm r_5 (ATerm h_42, ATerm i_42, ATerm t)
{
  ATerm z_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_42, i_42);
      LocalPopChoice(b_21);
    }
  else
    {
      t = z_20;
      t = SSL_addr(h_42, i_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_110 (ATerm), ATerm v_110 (ATerm), ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL;
  e_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_48;
      t = u_110(t);
    }
  else
    {
      ATerm j_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_48 = ATgetFirst((ATermList) t);
          g_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_48;
      t = foldr_2_0(u_110, v_110, t);
      j_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_48, j_48);
      t = v_110(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  if(match_cons(t, sym__2))
    {
      x_19 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(x_19, y_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_48 = NULL,t_19 = NULL,u_19 = NULL;
  t = times_0_0(t);
  u_19 = t;
  t = SSL_explode_term(u_19);
  if(match_cons(t, sym__2))
    {
      ATerm c_21 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_19;
  t = foldr_2_0(j_7, k_7, t);
  m_48 = t;
  t = SSL_TicksToSeconds(m_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
  x_48 = t;
  if(match_cons(t, sym__2))
    {
      y_48 = ATgetArgument(t, 0);
      z_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_48;
        if((y_48 != t))
          {
            _fail(t);
          }
        t = x_48;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
        {
          ATerm f_21 = t;
          int g_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_48, z_48);
              LocalPopChoice(g_21);
            }
          else
            {
              t = f_21;
              t = SSL_gtr(y_48, z_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_120 (ATerm), ATerm t)
{
  ATerm d_49 = NULL;
  d_49 = t;
  {
    ATerm h_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
        t = term_y_17;
        g_49 = t;
        t = term_s_19;
        h_49 = t;
        t = term_k_21;
        t = w_5(g_49, h_49, t);
        f_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_49, term_n_19);
        t = geq_0_0(t);
        t = d_49;
        t = r_120(t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = h_21;
        t = d_49;
      }
  }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,m_49 = NULL,n_49 = NULL;
  t = run_time_0_0(t);
  j_49 = t;
  t = term_j_19;
  t = whoami_0_0(t);
  k_49 = t;
  t = term_k_19;
  m_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_21), j_49), term_l_21), k_49);
  n_49 = t;
  t = SSL_printnl(m_49, n_49);
  t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_21), j_49), term_l_21), k_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_19;
  o_49 = t;
  t = SSL_exit(o_49);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL;
  z_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_49 = ATgetArgument(t, 0);
          {
            ATerm u_20 = NULL,t_12 = NULL;
            t = SSLgetAnnotations(z_49);
            u_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_49);
            t_12 = t;
            t = SSLsetAnnotations(t_12, u_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_49 = NULL,s_49 = NULL;
      t = term_y_17;
      r_49 = t;
      t = term_r_21;
      s_49 = t;
      t = term_t_21;
      t = w_5(r_49, s_49, t);
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      t = fetch_1_0(m_7, t);
    }
  t = h_123(t);
  return(t);
}
static ATerm a_6 (ATerm i_67, ATerm j_67, ATerm k_67, ATerm t)
{
  ATerm b_50 = NULL;
  t = SSL_hashtable_put(k_67, i_67, j_67);
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_64, ATerm t)
{
  ATerm k_50 = NULL;
  t = table_hashtable_0_0(t);
  k_50 = t;
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_21 = NULL;
        t = k_50;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_6(c_64, a_21, t);
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        {
          ATerm i_21 = NULL;
          t = c_64;
          t = table_create_0_0(t);
          t = k_50;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_6(c_64, i_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_67, ATerm r_67, ATerm t)
{
  ATerm n_50 = NULL;
  t = SSL_hashtable_create(q_67, r_67);
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_50);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,s_50 = NULL,t_50 = NULL;
  o_50 = t;
  t = term_x_21;
  s_50 = t;
  t = term_y_21;
  t_50 = t;
  t = o_50;
  t = new_hashtable_0_2(s_50, t_50, t);
  p_50 = t;
  t = o_50;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(o_50, p_50, q_50, t);
  t = o_50;
  return(t);
}
static ATerm t_5 (ATerm n_67, ATerm o_67, ATerm t)
{
  ATerm u_50 = NULL;
  t = SSL_hashtable_remove(o_67, n_67);
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_50);
  return(t);
}
static ATerm u_5 (ATerm s_67, ATerm t)
{
  ATerm v_50 = NULL;
  t = SSL_hashtable_destroy(s_67);
  v_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_50);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm w_50 = NULL;
  t = SSL_table_hashtable();
  w_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_50);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
  x_50 = t;
  t = table_hashtable_0_0(t);
  y_50 = t;
  t = lookup_table_0_1(x_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_5(a_51, t);
  t = y_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(x_50, z_50, t);
  t = x_50;
  return(t);
}
ATerm map_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  static ATerm p_51 (ATerm t);
  static ATerm p_51 (ATerm t)
  {
    ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
    m_51 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_51;
      }
    else
      {
        ATerm n_21 = NULL,s_21 = NULL,u_21 = NULL,v_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_51 = ATgetFirst((ATermList) t);
            o_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_51);
        n_21 = t;
        t = n_51;
        t = v_103(t);
        s_21 = t;
        t = o_51;
        t = p_51(t);
        u_21 = t;
        t = (ATerm) ATinsert(CheckATermList(u_21), s_21);
        v_12 = t;
        t = SSLsetAnnotations(v_12, n_21);
      }
    return(t);
  }
  t = p_51(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_51 = ATgetFirst((ATermList) t);
      t_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_51 = NULL,y_51 = NULL;
        static ATerm n_7 (ATerm t);
        static ATerm n_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_51)), not_null(y_51));
          return(t);
        }
        t = t_51;
        t = l_0(t);
        if(((x_51 != NULL) && (x_51 != t)))
          _fail(t);
        else
          x_51 = t;
        t = s_51;
        t = j_0(t);
        if(((y_51 != NULL) && (y_51 != t)))
          _fail(t);
        else
          y_51 = t;
        t = t_51;
        t = reverse_acc_2_0(j_0, n_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_19;
      t = l_0(t);
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,x_12 = NULL;
  g_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_52);
  e_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_52);
  x_12 = t;
  t = SSLsetAnnotations(x_12, e_52);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm i_52 = NULL;
  i_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_52), term_z_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_52 = NULL,d_52 = NULL;
      t = term_y_17;
      c_52 = t;
      t = term_x_20;
      d_52 = t;
      t = term_y_20;
      t = w_5(c_52, d_52, t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      t = fetch_1_0(o_7, t);
    }
  t = term_c_22;
  t = echo_0_0(t);
  t = term_n_20;
  a_52 = t;
  t = term_o_20;
  b_52 = t;
  t = term_d_22;
  t = w_5(a_52, b_52, t);
  t = reverse_acc_2_0(_id, p_7, t);
  t = map_1_0(r_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  static ATerm f_53 (ATerm t);
  static ATerm f_53 (ATerm t)
  {
    ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
    c_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_53 = ATgetFirst((ATermList) t);
        e_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_22 = NULL,h_22 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(c_53);
          e_22 = t;
          t = d_53;
          t = f_104(t);
          h_22 = t;
          t = (ATerm) ATinsert(CheckATermList(e_53), h_22);
          z_12 = t;
          t = SSLsetAnnotations(z_12, e_22);
          LocalPopChoice(g_22);
        }
      else
        {
          t = f_22;
          {
            ATerm p_22 = NULL,s_22 = NULL,a_13 = NULL;
            t = SSLgetAnnotations(c_53);
            p_22 = t;
            t = e_53;
            t = f_53(t);
            s_22 = t;
            t = (ATerm) ATinsert(CheckATermList(s_22), d_53);
            a_13 = t;
            t = SSLsetAnnotations(a_13, p_22);
          }
        }
    }
    return(t);
  }
  t = f_53(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
  j_53 = t;
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_22 = ATgetFirst((ATermList) t);
                ATerm l_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_53;
          }
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = (ATerm) ATinsert(ATempty, j_53);
      }
  }
  k_53 = t;
  t = term_f_18;
  l_53 = t;
  t = SSL_printnl(l_53, k_53);
  t = j_53;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL;
  t = term_y_17;
  p_53 = t;
  t = term_x_20;
  q_53 = t;
  t = term_y_20;
  t = w_5(p_53, q_53, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm l_67, ATerm m_67, ATerm t)
{
  t = SSL_hashtable_get(m_67, l_67);
  return(t);
}
static ATerm w_5 (ATerm j_64, ATerm k_64, ATerm t)
{
  ATerm r_53 = NULL;
  t = lookup_table_0_1(j_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(k_64, r_53, t);
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
  ATerm t_53 = NULL,u_53 = NULL;
  t = term_m_22;
  t_53 = t;
  t = term_j_19;
  u_53 = t;
  t = term_n_22;
  t = z_5(t_53, u_53, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_o_22;
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
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
  t = term_m_22;
  x_53 = t;
  t = term_j_19;
  y_53 = t;
  t = term_n_22;
  t = z_5(x_53, y_53, t);
  t = term_q_22;
  v_53 = t;
  t = term_j_19;
  w_53 = t;
  t = term_r_22;
  t = z_5(v_53, w_53, t);
  t = term_t_22;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_7, v_7, w_7, t);
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      t = Option_3_0(x_7, y_7, z_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,g_13 = NULL;
  e_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_54 = ATgetFirst((ATermList) t);
      b_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_54);
  z_53 = t;
  t = a_54;
  t = w_82(t);
  c_54 = t;
  t = b_54;
  t = x_82(t);
  d_54 = t;
  t = (ATerm) ATinsert(CheckATermList(d_54), c_54);
  g_13 = t;
  t = SSLsetAnnotations(g_13, z_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_125 (ATerm), ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,o_54 = NULL,p_54 = NULL,m_13 = NULL;
  j_54 = t;
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_23;
        t = k_125(t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
      }
  }
  t = j_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_54 = ATgetFirst((ATermList) t);
      m_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_54);
  k_54 = t;
  t = term_x_20;
  p_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, l_54);
  t = z_5(p_54, l_54, t);
  t = m_54;
  {
    static ATerm z_54 (ATerm t);
    static ATerm z_54 (ATerm t)
    {
      ATerm b_23 = t;
      int c_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_23 = t;
          int h_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_54 = NULL;
              s_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_54;
              LocalPopChoice(h_23);
            }
          else
            {
              t = g_23;
              t = k_125(t);
              t = Cons_2_0(_id, z_54, t);
            }
          LocalPopChoice(c_23);
        }
      else
        {
          t = b_23;
          {
            ATerm v_54 = NULL,w_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_54 = ATgetFirst((ATermList) t);
                w_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_54), (ATerm) ATmakeAppl(sym_Undefined_1, v_54));
          }
        }
      return(t);
    }
    t = z_54(t);
  }
  o_54 = t;
  t = (ATerm) ATinsert(CheckATermList(o_54), (ATerm) ATmakeAppl(sym_Program_1, l_54));
  m_13 = t;
  t = SSLsetAnnotations(m_13, k_54);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm m_55 = NULL;
  m_55 = t;
  if(match_string(t, "--help"))
    {
      t = m_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_55;
        }
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL;
  t = term_r_21;
  n_55 = t;
  t = term_j_19;
  o_55 = t;
  t = term_j_23;
  t = z_5(n_55, o_55, t);
  t = term_k_23;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_l_23;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_125 (ATerm), ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
  g_55 = t;
  t = term_n_20;
  h_55 = t;
  t = term_m_23;
  t = lookup_table_0_1(h_55, t);
  l_55 = t;
  t = term_o_20;
  i_55 = t;
  t = (ATerm) ATempty;
  j_55 = t;
  t = l_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(i_55, j_55, k_55, t);
  t = g_55;
  {
    static ATerm a_8 (ATerm t);
    static ATerm a_8 (ATerm t)
    {
      ATerm n_23 = t;
      int r_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_125(t);
          LocalPopChoice(r_23);
        }
      else
        {
          t = n_23;
          {
            ATerm s_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_8, d_8, e_8, t);
                LocalPopChoice(t_23);
              }
            else
              {
                t = s_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_8, t);
  }
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_55 = NULL;
        z_55 = t;
        {
          ATerm w_23 = t;
          int x_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_23 = NULL;
              t = z_55;
              {
                ATerm y_23 = t;
                int z_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_23 = NULL,f_23 = NULL;
                    t = term_y_17;
                    e_23 = t;
                    t = term_r_21;
                    f_23 = t;
                    t = term_t_21;
                    t = w_5(e_23, f_23, t);
                    LocalPopChoice(z_23);
                  }
                else
                  {
                    t = y_23;
                    t = fetch_1_0(h_8, t);
                  }
              }
              t = z_55;
              t = default_system_usage_0_0(t);
              t = term_v_19;
              d_23 = t;
              t = SSL_exit(d_23);
              LocalPopChoice(x_23);
            }
          else
            {
              t = w_23;
              {
                ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
                t = term_y_17;
                p_23 = t;
                t = term_m_22;
                q_23 = t;
                t = term_a_24;
                t = w_5(p_23, q_23, t);
                t = z_55;
                t = default_system_about_0_0(t);
                t = term_v_19;
                o_23 = t;
                t = SSL_exit(o_23);
              }
            }
        }
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        {
          ATerm b_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL;
              static ATerm i_8 (ATerm t);
              static ATerm i_8 (ATerm t)
              {
                ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,o_13 = NULL;
                f_56 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_56 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_56);
                d_56 = t;
                t = e_56;
                if(((e_55 != NULL) && (e_55 != t)))
                  _fail(t);
                else
                  e_55 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_56);
                o_13 = t;
                t = SSLsetAnnotations(o_13, d_56);
                return(t);
              }
              t = fetch_1_0(i_8, t);
              t = term_k_19;
              b_56 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_55)), term_f_24);
              c_56 = t;
              t = SSL_printnl(b_56, c_56);
              t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_55)), term_f_24));
              t = default_system_usage_0_0(t);
              t = term_n_19;
              a_56 = t;
              t = SSL_exit(a_56);
              LocalPopChoice(e_24);
            }
          else
            {
              t = b_24;
            }
        }
      }
  }
  f_55 = t;
  t = term_n_20;
  t = table_destroy_0_0(t);
  t = f_55;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_123 (ATerm), ATerm k_123 (ATerm), ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL;
  t = parse_options_1_0(j_123, t);
  k_56 = t;
  t = term_j_24;
  t = table_create_0_0(t);
  t = term_j_24;
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_24, term_k_24, k_56);
  t = lookup_table_0_1(l_56, t);
  o_56 = t;
  t = term_k_24;
  m_56 = t;
  t = o_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(m_56, k_56, n_56, t);
  t = k_56;
  t = l_123(t);
  {
    ATerm l_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_123, t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = l_24;
        {
          ATerm o_24 = t;
          int p_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_123(t);
              t = report_success_0_0(t);
              LocalPopChoice(p_24);
            }
          else
            {
              t = o_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
            {
              ATerm u_24 = t;
              int v_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_8, p_8, r_8, t);
                  LocalPopChoice(v_24);
                }
              else
                {
                  t = u_24;
                  {
                    ATerm w_24 = t;
                    int x_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(x_24);
                      }
                    else
                      {
                        t = w_24;
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
static ATerm n_8 (ATerm t)
{
  t = input_1_0(t_8, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL;
  t = term_j_18;
  q_56 = t;
  t = term_j_19;
  r_56 = t;
  t = term_y_24;
  t = z_5(q_56, r_56, t);
  t = term_a_25;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_b_25;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_8, default_usage_0_0, _id, n_8, t);
  return(t);
}
