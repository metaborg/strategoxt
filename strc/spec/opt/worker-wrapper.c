#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Op_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_LRule_1;
Symbol sym_Path_2;
Symbol sym_Seq_2;
Symbol sym_Scope_2;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDefT_4;
Symbol sym_ConstType_1;
Symbol sym_Sort_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_Undefined_0;
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
Symbol sym_Hashtable_1;
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
Symbol sym_DynamicRules_1;
static void init_module_constructors (void)
{
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
ATerm term_v_24;
ATerm term_u_24;
ATerm term_s_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_e_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_g_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_b_18;
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
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_i_18);
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
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_c_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym__2, term_q_20, term_r_20);
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
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_q_20);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
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
  term_q_23 = (ATerm) ATmakeAppl(sym__3, term_a_20, term_c_20, (ATerm) ATempty);
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
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_p_19);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
static ATerm x_4 (ATerm l_120 (ATerm), ATerm f_43, ATerm e_43, ATerm t);
ATerm genzip_4_0 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm c_5 (ATerm c_791, ATerm h_791, ATerm u_76, ATerm t);
ATerm while_not_2_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm x_6 (ATerm g_3, ATerm i_3, ATerm j_3, ATerm t);
static ATerm u_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm s_143 (ATerm), ATerm t_143 (ATerm), ATerm u_143 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm b_144 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm g_5 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm l_43, ATerm k_43, ATerm t);
static ATerm h_5 (ATerm q_120 (ATerm), ATerm h_43, ATerm g_43, ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm free_vars_3_0 (ATerm f_140 (ATerm), ATerm g_140 (ATerm), ATerm h_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm worker_wrapper_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm w_116 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_40 (ATerm b_40, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm i_123 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm worker_wrapper_spec_0_0 (ATerm t);
static ATerm i_5 (ATerm x_52, ATerm y_52, ATerm t);
static ATerm j_5 (ATerm e_37, ATerm f_37, ATerm t);
static ATerm l_5 (ATerm x_115 (ATerm), ATerm s_259, ATerm k_37, ATerm t);
static ATerm k_5 (ATerm a_37, ATerm b_37, ATerm t);
static ATerm b_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm output_1_0 (ATerm x_135 (ATerm), ATerm t);
static ATerm m_42 (ATerm g_42, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_5 (ATerm g_37, ATerm t);
static ATerm n_5 (ATerm d_51, ATerm e_51, ATerm t);
static ATerm o_5 (ATerm z_52, ATerm a_53, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_44 (ATerm w_42, ATerm t);
static ATerm f_44 (ATerm a_43, ATerm b_43, ATerm c_43, ATerm t);
static ATerm g_44 (ATerm r_43, ATerm s_43, ATerm t_43, ATerm t);
static ATerm p_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm y_135 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm f_116 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm default_system_usage_2_0 (ATerm w_137 (ATerm), ATerm x_137 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_5 (ATerm t_71, ATerm u_71, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_5 (ATerm j_58, ATerm k_58, ATerm i_58, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_5 (ATerm s_56, ATerm t_56, ATerm t);
ATerm foldr_2_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_132 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_5 (ATerm u_62, ATerm v_62, ATerm w_62, ATerm t);
ATerm lookup_table_0_1 (ATerm v_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm c_63, ATerm d_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm s_5 (ATerm z_62, ATerm a_63, ATerm t);
static ATerm t_5 (ATerm e_63, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_116 (ATerm), ATerm t);
static ATerm a_6 (ATerm x_62, ATerm y_62, ATerm t);
static ATerm v_5 (ATerm c_60, ATerm d_60, ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_137 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm parse_options_3_0 (ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm q_137 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm r_8 (ATerm t);
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
static ATerm x_4 (ATerm l_120 (ATerm), ATerm f_43, ATerm e_43, ATerm t)
{
  static ATerm a_1 (ATerm t);
  static ATerm a_1 (ATerm t)
  {
    ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL;
    v_0 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_0;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_0 = ATgetFirst((ATermList) t);
            x_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_8 = t;
          int v_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_0;
              {
                static ATerm a_0 (ATerm t);
                static ATerm a_0 (ATerm t)
                {
                  t = e_43;
                  return(t);
                }
                t = g_5(l_120, a_0, w_0, x_0, t);
              }
              t = a_1(t);
              LocalPopChoice(v_8);
            }
          else
            {
              t = s_8;
              {
                ATerm p_0 = NULL,c_1 = NULL,f_0 = NULL;
                t = SSLgetAnnotations(v_0);
                p_0 = t;
                t = x_0;
                t = a_1(t);
                c_1 = t;
                t = (ATerm) ATinsert(CheckATermList(c_1), w_0);
                f_0 = t;
                t = SSLsetAnnotations(f_0, p_0);
              }
            }
        }
      }
    return(t);
  }
  t = f_43;
  t = a_1(t);
  return(t);
}
ATerm genzip_4_0 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm t)
{
  static ATerm m_1 (ATerm t);
  static ATerm m_1 (ATerm t)
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_118(t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        {
          ATerm f_1 = NULL,g_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,k_0 = NULL;
          t = k_118(t);
          l_1 = t;
          if(match_cons(t, sym__2))
            {
              g_1 = ATgetArgument(t, 0);
              i_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_1);
          f_1 = t;
          t = g_1;
          t = m_118(t);
          j_1 = t;
          t = i_1;
          t = m_1(t);
          k_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_1, k_1);
          k_0 = t;
          t = SSLsetAnnotations(k_0, f_1);
          t = l_118(t);
        }
      }
    return(t);
  }
  t = m_1(t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(((ATgetType(c_9) != AT_LIST) || !(ATisEmpty(c_9))))
        _fail(t);
      {
        ATerm d_9 = ATgetArgument(t, 1);
        if(((ATgetType(d_9) != AT_LIST) || !(ATisEmpty(d_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_9 = ATgetArgument(t, 0);
      if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
        {
          u_1 = ATgetFirst((ATermList) e_9);
          v_1 = (ATerm) ATgetNext((ATermList) e_9);
        }
      else
        _fail(t);
      {
        ATerm m_9 = ATgetArgument(t, 1);
        if(((ATgetType(m_9) == AT_LIST) && !(ATisEmpty(m_9))))
          {
            w_1 = ATgetFirst((ATermList) m_9);
            x_1 = (ATerm) ATgetNext((ATermList) m_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_1, w_1), (ATerm) ATmakeAppl(sym__2, v_1, x_1));
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm y_1 = NULL,g_2 = NULL;
  if(match_cons(t, sym__2))
    {
      y_1 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_2), y_1);
  return(t);
}
static ATerm c_5 (ATerm c_791, ATerm h_791, ATerm u_76, ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
  t = SSL_explode_term(h_791);
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_791);
  if(match_cons(t, sym__2))
    {
      if((o_1 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_1, q_1);
  t = genzip_4_0(c_0, e_0, i_0, _id, t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_1, u_76);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm t)
{
  static ATerm k_2 (ATerm t);
  static ATerm k_2 (ATerm t)
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_109(t);
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        t = m_109(t);
        t = k_2(t);
      }
    return(t);
  }
  t = k_2(t);
  return(t);
}
ATerm for_3_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm t)
{
  t = o_109(t);
  t = while_not_2_0(p_109, q_109, t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm a_3 = NULL;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_3);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,r_0 = NULL;
  f_3 = t;
  if(match_cons(t, sym__2))
    {
      d_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_3);
  c_3 = t;
  t = e_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_3, e_3);
  r_0 = t;
  t = SSLsetAnnotations(r_0, c_3);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,s_4 = NULL,z_4 = NULL;
  n_4 = t;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_4 = ATgetFirst((ATermList) t);
      z_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_6(o_4, p_4, n_4, t);
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_4), s_4), z_4);
          }
      }
    }
  else
    {
      t = x_6(o_4, p_4, n_4, t);
    }
  return(t);
}
static ATerm x_6 (ATerm g_3, ATerm i_3, ATerm j_3, ATerm t)
{
  ATerm k_3 = NULL,n_3 = NULL,s_0 = NULL,x_3 = NULL,a_4 = NULL,b_4 = NULL,e_4 = NULL;
  t = SSLgetAnnotations(j_3);
  k_3 = t;
  t = i_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_3 = ATgetFirst((ATermList) t);
      e_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_3;
  if(match_cons(t, sym__2))
    {
      a_4 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_4;
        if((a_4 != t))
          {
            _fail(t);
          }
        t = e_4;
        LocalPopChoice(u_9);
      }
    else
      {
        t = s_9;
        t = i_3;
        t = c_5(a_4, b_4, e_4, t);
      }
  }
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_3, n_3);
  s_0 = t;
  t = SSLsetAnnotations(s_0, k_3);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm p_6 = NULL;
  if(match_cons(t, sym__2))
    {
      p_6 = ATgetArgument(t, 0);
      if((p_6 != ATgetArgument(t, 1)))
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
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(n_0, q_0, t_0, t);
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      {
        ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
        e_6 = t;
        if(match_cons(t, sym__2))
          {
            f_6 = ATgetArgument(t, 0);
            g_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6;
        t = x_4(u_0, f_6, g_6, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm s_143 (ATerm), ATerm t_143 (ATerm), ATerm u_143 (ATerm), ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,f_18 = NULL,g_18 = NULL,l_18 = NULL;
  g_18 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
      {
        ATerm c_2 = NULL,f_2 = NULL,h_2 = NULL,e_1 = NULL;
        t = SSLgetAnnotations(g_18);
        c_2 = t;
        t = l_18;
        t = u_143(t);
        f_2 = t;
        t = f_18;
        t = s_143(t);
        h_2 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, f_2, h_2);
        e_1 = t;
        t = SSLsetAnnotations(e_1, c_2);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          l_18 = ATgetArgument(t, 0);
          {
            ATerm q_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,p_8 = NULL,l_8 = NULL;
            t = SSLgetAnnotations(g_18);
            q_2 = t;
            t = l_18;
            if(match_cons(t, sym_Rule_3))
              {
                t_2 = ATgetArgument(t, 0);
                u_2 = ATgetArgument(t, 1);
                v_2 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_18);
            s_2 = t;
            t = t_2;
            t = s_143(t);
            w_2 = t;
            t = u_2;
            t = s_143(t);
            x_2 = t;
            t = v_2;
            t = s_143(t);
            y_2 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, w_2, x_2, y_2);
            l_8 = t;
            t = SSLsetAnnotations(l_8, s_2);
            z_2 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, z_2);
            p_8 = t;
            t = SSLsetAnnotations(p_8, q_2);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              l_18 = ATgetArgument(t, 0);
              f_18 = ATgetArgument(t, 1);
              c_18 = ATgetArgument(t, 2);
              {
                ATerm v_3 = NULL,c_4 = NULL,d_4 = NULL,g_4 = NULL,w_8 = NULL;
                t = SSLgetAnnotations(g_18);
                v_3 = t;
                t = l_18;
                t = u_143(t);
                c_4 = t;
                t = f_18;
                t = u_143(t);
                d_4 = t;
                t = c_18;
                t = u_143(t);
                g_4 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, c_4, d_4, g_4);
                w_8 = t;
                t = SSLsetAnnotations(w_8, v_3);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  l_18 = ATgetArgument(t, 0);
                  f_18 = ATgetArgument(t, 1);
                  c_18 = ATgetArgument(t, 2);
                  d_18 = ATgetArgument(t, 3);
                  {
                    ATerm e_5 = NULL,c_6 = NULL,d_6 = NULL,j_6 = NULL,k_6 = NULL,x_8 = NULL;
                    t = SSLgetAnnotations(g_18);
                    e_5 = t;
                    t = l_18;
                    t = u_143(t);
                    c_6 = t;
                    t = f_18;
                    t = u_143(t);
                    d_6 = t;
                    t = c_18;
                    t = u_143(t);
                    j_6 = t;
                    t = d_18;
                    t = s_143(t);
                    k_6 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, c_6, d_6, j_6, k_6);
                    x_8 = t;
                    t = SSLsetAnnotations(x_8, e_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_18 = ATgetArgument(t, 0);
                      f_18 = ATgetArgument(t, 1);
                      c_18 = ATgetArgument(t, 2);
                      d_18 = ATgetArgument(t, 3);
                      {
                        ATerm y_6 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,y_8 = NULL;
                        t = SSLgetAnnotations(g_18);
                        y_6 = t;
                        t = l_18;
                        t = u_143(t);
                        d_7 = t;
                        t = f_18;
                        t = u_143(t);
                        e_7 = t;
                        t = c_18;
                        t = u_143(t);
                        f_7 = t;
                        t = d_18;
                        t = s_143(t);
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
                          l_18 = ATgetArgument(t, 0);
                          f_18 = ATgetArgument(t, 1);
                          {
                            ATerm q_7 = NULL,t_7 = NULL,u_7 = NULL,z_8 = NULL;
                            t = SSLgetAnnotations(g_18);
                            q_7 = t;
                            t = l_18;
                            t = u_143(t);
                            t_7 = t;
                            t = f_18;
                            t = s_143(t);
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
                              l_18 = ATgetArgument(t, 0);
                              f_18 = ATgetArgument(t, 1);
                              {
                                ATerm c_8 = NULL,f_8 = NULL,g_8 = NULL,g_9 = NULL;
                                t = SSLgetAnnotations(g_18);
                                c_8 = t;
                                t = l_18;
                                t = u_143(t);
                                f_8 = t;
                                t = f_18;
                                t = s_143(t);
                                g_8 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, f_8, g_8);
                                g_9 = t;
                                t = SSLsetAnnotations(g_9, c_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  l_18 = ATgetArgument(t, 0);
                                  f_18 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_8 = NULL,t_8 = NULL,u_8 = NULL,h_9 = NULL;
                                    t = SSLgetAnnotations(g_18);
                                    q_8 = t;
                                    t = l_18;
                                    t = u_143(t);
                                    t_8 = t;
                                    t = f_18;
                                    t = s_143(t);
                                    u_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, t_8, u_8);
                                    h_9 = t;
                                    t = SSLsetAnnotations(h_9, q_8);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      l_18 = ATgetArgument(t, 0);
                                      {
                                        ATerm f_9 = NULL,n_9 = NULL,i_9 = NULL;
                                        t = SSLgetAnnotations(g_18);
                                        f_9 = t;
                                        t = l_18;
                                        t = s_143(t);
                                        n_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, n_9);
                                        i_9 = t;
                                        t = SSLsetAnnotations(i_9, f_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          l_18 = ATgetArgument(t, 0);
                                          {
                                            ATerm t_9 = NULL,w_9 = NULL,j_9 = NULL;
                                            t = SSLgetAnnotations(g_18);
                                            t_9 = t;
                                            t = l_18;
                                            t = s_143(t);
                                            w_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, w_9);
                                            j_9 = t;
                                            t = SSLsetAnnotations(j_9, t_9);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              l_18 = ATgetArgument(t, 0);
                                              {
                                                ATerm d_10 = NULL,f_10 = NULL,k_9 = NULL;
                                                t = SSLgetAnnotations(g_18);
                                                d_10 = t;
                                                t = l_18;
                                                t = s_143(t);
                                                f_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, f_10);
                                                k_9 = t;
                                                t = SSLsetAnnotations(k_9, d_10);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  l_18 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm m_10 = NULL,o_10 = NULL,l_9 = NULL;
                                                    t = SSLgetAnnotations(g_18);
                                                    m_10 = t;
                                                    t = l_18;
                                                    t = s_143(t);
                                                    o_10 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, o_10);
                                                    l_9 = t;
                                                    t = SSLsetAnnotations(l_9, m_10);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm w_10 = NULL,y_10 = NULL,v_9 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      l_18 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(g_18);
                                                  w_10 = t;
                                                  t = l_18;
                                                  t = s_143(t);
                                                  y_10 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, y_10);
                                                  v_9 = t;
                                                  t = SSLsetAnnotations(v_9, w_10);
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
ATerm dynrule_targs_1_0 (ATerm b_144 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,b_20 = NULL,k_20 = NULL;
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
          b_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_20;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm c_10 = ATgetArgument(t, 0);
          ATerm e_10 = ATgetArgument(t, 1);
          k_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_20;
    }
  else
    {
      t = z_9;
      {
        ATerm g_10 = t;
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
                b_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = b_20;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_10 = ATgetArgument(t, 0);
                ATerm k_10 = ATgetArgument(t, 1);
                k_20 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_20;
          }
        else
          {
            t = g_10;
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
                b_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = b_20;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm n_10 = ATgetArgument(t, 0);
                ATerm p_10 = ATgetArgument(t, 1);
                k_20 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_20;
          }
      }
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm t_21 = NULL;
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_21 = ATgetArgument(t, 0);
          {
            ATerm s_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_10);
      t = t_21;
    }
  else
    {
      t = q_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_21;
    }
  return(t);
}
static ATerm z_0 (ATerm t)
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
  ATerm k_21 = NULL;
  ATerm x_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm a_11 = ATgetArgument(t, 0);
          ATerm b_11 = ATgetArgument(t, 1);
          k_21 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(z_10);
      t = k_21;
      t = map_1_0(y_0, t);
    }
  else
    {
      t = x_10;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm c_11 = ATgetArgument(t, 0);
          ATerm d_11 = ATgetArgument(t, 1);
          k_21 = ATgetArgument(t, 2);
          {
            ATerm e_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_21;
      t = map_1_0(z_0, t);
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm x_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_24);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm f_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_11);
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
              ATerm l_11 = t;
              int m_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_25 = ATgetArgument(t, 0);
                      d_25 = ATgetArgument(t, 1);
                      e_25 = ATgetArgument(t, 2);
                      f_25 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_25;
                  t = map_1_0(h_1, t);
                  LocalPopChoice(m_11);
                }
              else
                {
                  t = l_11;
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
                        t = dynrule_targs_1_0(n_1, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_1 (ATerm t)
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
            ATerm t_11 = ATgetArgument(t, 1);
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
static ATerm n_1 (ATerm t)
{
  t = map_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm f_26 = NULL;
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_26 = ATgetArgument(t, 0);
          {
            ATerm w_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_11);
      t = f_26;
    }
  else
    {
      t = u_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_26;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm n_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_26);
  return(t);
}
static ATerm z_1 (ATerm t)
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
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_12);
          }
        else
          {
            t = a_12;
            {
              ATerm j_12 = t;
              int k_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_26 = ATgetArgument(t, 0);
                      r_26 = ATgetArgument(t, 1);
                      s_26 = ATgetArgument(t, 2);
                      t_26 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_26;
                  t = map_1_0(a_2, t);
                  LocalPopChoice(k_12);
                }
              else
                {
                  t = j_12;
                  {
                    ATerm l_12 = t;
                    int o_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_12);
                      }
                    else
                      {
                        t = l_12;
                        t = dynrule_targs_1_0(b_2, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
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
static ATerm b_2 (ATerm t)
{
  t = map_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm y_27 = NULL;
  ATerm w_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_27 = ATgetArgument(t, 0);
          {
            ATerm e_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_12);
      t = y_27;
    }
  else
    {
      t = w_12;
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
static ATerm e_2 (ATerm t)
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
static ATerm i_2 (ATerm t)
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_28 = ATgetArgument(t, 0);
                      i_28 = ATgetArgument(t, 1);
                      j_28 = ATgetArgument(t, 2);
                      k_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_28;
                  t = map_1_0(j_2, t);
                  LocalPopChoice(k_13);
                }
              else
                {
                  t = j_13;
                  {
                    ATerm m_13 = t;
                    int o_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_13);
                      }
                    else
                      {
                        t = m_13;
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
static ATerm j_2 (ATerm t)
{
  ATerm y_28 = NULL;
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_28 = ATgetArgument(t, 0);
          {
            ATerm s_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_13);
      t = y_28;
    }
  else
    {
      t = q_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_28;
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
  ATerm f_29 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_29 = ATgetArgument(t, 0);
          {
            ATerm v_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_13);
      t = f_29;
    }
  else
    {
      t = t_13;
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
                  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,q_29 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_29 = ATgetArgument(t, 0);
                      m_29 = ATgetArgument(t, 1);
                      n_29 = ATgetArgument(t, 2);
                      q_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_29;
                  t = map_1_0(p_2, t);
                  LocalPopChoice(b_14);
                }
              else
                {
                  t = a_14;
                  {
                    ATerm c_14 = t;
                    int f_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_14);
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
  ATerm b_30 = NULL;
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_30 = ATgetArgument(t, 0);
          {
            ATerm i_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_14);
      t = b_30;
    }
  else
    {
      t = g_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_30;
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = map_1_0(b_3, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm l_30 = NULL;
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_30 = ATgetArgument(t, 0);
          {
            ATerm l_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_14);
      t = l_30;
    }
  else
    {
      t = j_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_30;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm u_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_30);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            {
              ATerm s_14 = t;
              int v_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_31 = NULL,g_31 = NULL,j_31 = NULL,l_31 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_31 = ATgetArgument(t, 0);
                      g_31 = ATgetArgument(t, 1);
                      j_31 = ATgetArgument(t, 2);
                      l_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_31;
                  t = map_1_0(m_3, t);
                  LocalPopChoice(v_14);
                }
              else
                {
                  t = s_14;
                  {
                    ATerm w_14 = t;
                    int b_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_15);
                      }
                    else
                      {
                        t = w_14;
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
static ATerm m_3 (ATerm t)
{
  ATerm b_32 = NULL;
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_32 = ATgetArgument(t, 0);
          {
            ATerm e_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_15);
      t = b_32;
    }
  else
    {
      t = c_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_32;
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
  ATerm k_32 = NULL;
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_32 = ATgetArgument(t, 0);
          {
            ATerm h_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_15);
      t = k_32;
    }
  else
    {
      t = f_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_32;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm t_24 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      t_24 = ATgetArgument(t, 0);
      t = t_24;
      t = free_vars_3_0(b_1, d_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          t_24 = ATgetArgument(t, 0);
          t = t_24;
          t = free_vars_3_0(t_1, z_1, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              t_24 = ATgetArgument(t, 0);
              t = t_24;
              t = free_vars_3_0(e_2, i_2, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  t_24 = ATgetArgument(t, 0);
                  t = t_24;
                  t = free_vars_3_0(n_2, o_2, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      t_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_24;
                  t = free_vars_3_0(h_3, l_3, tboundin_3_0, t);
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
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm q_15 = t;
              int r_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_33 = ATgetArgument(t, 0);
                      t_33 = ATgetArgument(t, 1);
                      u_33 = ATgetArgument(t, 2);
                      v_33 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_33;
                  t = map_1_0(s_3, t);
                  LocalPopChoice(r_15);
                }
              else
                {
                  t = q_15;
                  {
                    ATerm s_15 = t;
                    int t_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_15);
                      }
                    else
                      {
                        t = s_15;
                        t = dynrule_targs_1_0(t_3, t);
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
  ATerm e_34 = NULL;
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_34 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_15);
      t = e_34;
    }
  else
    {
      t = u_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_34;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = map_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
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
  ATerm b_33 = NULL,k_33 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      k_33 = ATgetArgument(t, 0);
      t = k_33;
      if(match_cons(t, sym_Rule_3))
        {
          b_33 = ATgetArgument(t, 0);
          {
            ATerm a_16 = ATgetArgument(t, 1);
          }
          {
            ATerm b_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = b_33;
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
static ATerm g_5 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm l_43, ATerm k_43, ATerm t)
{
  t = u_120(t);
  {
    static ATerm w_3 (ATerm t);
    static ATerm w_3 (ATerm t)
    {
      ATerm n_34 = NULL;
      n_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_43, n_34);
      t = t_120(t);
      return(t);
    }
    t = fetch_1_0(w_3, t);
  }
  t = k_43;
  return(t);
}
static ATerm h_5 (ATerm q_120 (ATerm), ATerm h_43, ATerm g_43, ATerm t)
{
  static ATerm d_35 (ATerm t);
  static ATerm d_35 (ATerm t)
  {
    ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
    y_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_43;
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
                static ATerm y_3 (ATerm t);
                static ATerm y_3 (ATerm t)
                {
                  t = g_43;
                  return(t);
                }
                t = g_5(q_120, y_3, z_34, a_35, t);
              }
              t = d_35(t);
              LocalPopChoice(e_16);
            }
          else
            {
              t = d_16;
              {
                ATerm g_11 = NULL,k_11 = NULL,z_11 = NULL;
                t = SSLgetAnnotations(y_34);
                g_11 = t;
                t = a_35;
                t = d_35(t);
                k_11 = t;
                t = (ATerm) ATinsert(CheckATermList(k_11), z_34);
                z_11 = t;
                t = SSLsetAnnotations(z_11, g_11);
              }
            }
        }
      }
    return(t);
  }
  t = h_43;
  t = d_35(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm c_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(j_4, c_12, h_12, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm i_12 = NULL;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      if((i_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm x_12 = NULL,c_13 = NULL;
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      c_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(m_4, x_12, c_13, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      d_13 = ATgetArgument(t, 0);
      if((d_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_140 (ATerm), ATerm g_140 (ATerm), ATerm h_140 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm u_35 (ATerm t);
  static ATerm u_35 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_140(t);
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        {
          ATerm h_16 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_35 = NULL,j_35 = NULL,r_11 = NULL,s_11 = NULL;
              i_35 = t;
              t = g_140(t);
              j_35 = t;
              t = i_35;
              {
                static ATerm z_3 (ATerm t);
                static ATerm z_3 (ATerm t)
                {
                  ATerm l_35 = NULL;
                  t = u_35(t);
                  l_35 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_35, j_35);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_140(z_3, u_35, f_4, t);
              }
              s_11 = t;
              t = SSL_explode_term(s_11);
              if(match_cons(t, sym__2))
                {
                  ATerm k_16 = ATgetArgument(t, 0);
                  r_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_11;
              t = foldr_3_0(h_4, i_4, _id, t);
              LocalPopChoice(j_16);
            }
          else
            {
              t = h_16;
              {
                ATerm m_12 = NULL,n_12 = NULL;
                n_12 = t;
                t = SSL_explode_term(n_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_16 = ATgetArgument(t, 0);
                    m_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_12;
                t = foldr_3_0(k_4, l_4, u_35, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_35(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm a_15 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_15);
  return(t);
}
static ATerm r_4 (ATerm t)
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
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            {
              ATerm r_16 = t;
              int s_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_15 = ATgetArgument(t, 0);
                      n_15 = ATgetArgument(t, 1);
                      o_15 = ATgetArgument(t, 2);
                      p_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_15;
                  t = map_1_0(t_4, t);
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
                        t = dynrule_targs_1_0(u_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm i_16 = NULL;
  ATerm v_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_16 = ATgetArgument(t, 0);
          {
            ATerm y_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_16);
      t = i_16;
    }
  else
    {
      t = v_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_16;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = map_1_0(v_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm o_16 = NULL;
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_16 = ATgetArgument(t, 0);
          {
            ATerm e_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_17);
      t = o_16;
    }
  else
    {
      t = a_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_16;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm w_16 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      w_16 = ATgetArgument(t, 0);
      {
        ATerm f_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_16;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm z_16 = NULL;
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_16, term_i_17);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm c_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      c_17 = ATgetArgument(t, 0);
      {
        ATerm j_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_17), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm d_17 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      d_17 = ATgetArgument(t, 0);
      {
        ATerm k_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, d_17);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
  l_38 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_38 = ATgetArgument(t, 0);
      p_38 = ATgetArgument(t, 1);
      q_38 = ATgetArgument(t, 2);
      r_38 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = r_38;
  if(match_cons(t, sym_Seq_2))
    {
      s_38 = ATgetArgument(t, 0);
      t_38 = ATgetArgument(t, 1);
      t = s_38;
      if(match_cons(t, sym_Match_1))
        {
          k_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, o_38, p_38, q_38, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_38), t_38)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm d_14 = NULL,e_14 = NULL,m_14 = NULL,n_14 = NULL,t_14 = NULL,u_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          s_38 = ATgetArgument(t, 0);
          t_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_38;
      if(match_cons(t, sym_Seq_2))
        {
          u_38 = ATgetArgument(t, 0);
          w_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_38;
      if(match_cons(t, sym_Match_1))
        {
          v_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_38;
      if(match_cons(t, sym_Op_2))
        {
          ATerm l_17 = ATgetArgument(t, 0);
          ATerm m_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_38;
      t = free_vars_3_0(q_4, r_4, tboundin_3_0, t);
      y_14 = t;
      t = q_38;
      t = map_1_0(w_4, t);
      z_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_14, z_14);
      t = diff_0_0(t);
      e_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_38, e_14);
      t = diff_0_0(t);
      d_14 = t;
      t = e_14;
      t = map_1_0(y_4, t);
      m_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_38, m_14);
      t = conc_0_0(t);
      u_14 = t;
      t = new_0_0(t);
      n_14 = t;
      t = p_38;
      t = map_1_0(a_5, t);
      t_14 = t;
      t = u_14;
      t = map_1_0(b_5, t);
      x_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, n_14, p_38, u_14, (ATerm) ATmakeAppl(sym_Scope_2, d_14, w_38))), (ATerm) ATmakeAppl(sym_SDefT_4, o_38, p_38, q_38, (ATerm) ATmakeAppl(sym_Scope_2, e_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_38), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_14), t_14, x_14)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm w_116 (ATerm), ATerm t)
{
  static ATerm x_39 (ATerm t);
  static ATerm x_39 (ATerm t)
  {
    ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
    w_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_39 = ATgetFirst((ATermList) t);
        v_39 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_18 = NULL,z_18 = NULL,b_12 = NULL;
          t = SSLgetAnnotations(w_39);
          s_18 = t;
          t = v_39;
          t = x_39(t);
          z_18 = t;
          t = (ATerm) ATinsert(CheckATermList(z_18), u_39);
          b_12 = t;
          t = SSLsetAnnotations(b_12, s_18);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_39;
        t = w_116(t);
      }
    return(t);
  }
  t = x_39(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_39;
    }
  else
    {
      static ATerm d_5 (ATerm t);
      static ATerm d_5 (ATerm t)
      {
        t = not_null(g_39);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_39 = ATgetFirst((ATermList) t);
          if(((g_39 != NULL) && (g_39 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_39;
      t = at_end_1_0(d_5, t);
    }
  return(t);
}
static ATerm j_40 (ATerm b_40, ATerm t)
{
  ATerm c_40 = NULL;
  t = SSL_explode_term(b_40);
  if(match_cons(t, sym__2))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_40;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  g_40 = t;
  if(match_cons(t, sym__2))
    {
      e_40 = ATgetArgument(t, 0);
      f_40 = ATgetArgument(t, 1);
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm f_5 (ATerm t);
            static ATerm f_5 (ATerm t)
            {
              t = f_40;
              return(t);
            }
            t = e_40;
            t = at_end_1_0(f_5, t);
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            t = j_40(g_40, t);
          }
      }
    }
  else
    {
      t = j_40(g_40, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm i_123 (ATerm), ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_40;
      t = g_123(t);
    }
  else
    {
      ATerm q_40 = NULL,r_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_40 = ATgetFirst((ATermList) t);
          n_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_40;
      t = i_123(t);
      q_40 = t;
      t = n_40;
      t = foldr_3_0(g_123, h_123, i_123, t);
      r_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_40, r_40);
      t = h_123(t);
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,e_12 = NULL;
  e_41 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      c_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_41);
  b_41 = t;
  t = c_41;
  t = foldr_3_0(_id, conc_0_0, x_5, t);
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, d_41);
  e_12 = t;
  t = SSLsetAnnotations(e_12, b_41);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
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
        ATerm g_41 = NULL;
        g_41 = t;
        t = (ATerm) ATinsert(ATempty, g_41);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,g_12 = NULL,f_12 = NULL;
  a_41 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_41);
  t_40 = t;
  t = u_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_40 = ATgetFirst((ATermList) t);
      x_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_40);
  v_40 = t;
  t = x_40;
  t = Cons_2_0(r_5, u_5, t);
  y_40 = t;
  t = (ATerm) ATinsert(CheckATermList(y_40), w_40);
  f_12 = t;
  t = SSLsetAnnotations(f_12, v_40);
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, z_40);
  g_12 = t;
  t = SSLsetAnnotations(g_12, t_40);
  return(t);
}
static ATerm i_5 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm i_41 = NULL;
  t = SSL_fputc(x_52, y_52);
  i_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_41);
  return(t);
}
static ATerm j_5 (ATerm e_37, ATerm f_37, ATerm t)
{
  ATerm j_41 = NULL;
  t = SSL_write_term_to_stream_text(e_37, f_37);
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_41);
  return(t);
}
static ATerm l_5 (ATerm x_115 (ATerm), ATerm s_259, ATerm k_37, ATerm t)
{
  ATerm k_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_259, term_s_17);
  t = p_5(t);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_41, k_37);
  t = x_115(t);
  t = fclose_0_0(t);
  t = k_37;
  return(t);
}
static ATerm k_5 (ATerm a_37, ATerm b_37, ATerm t)
{
  ATerm l_41 = NULL;
  t = SSL_write_term_to_stream_baf(a_37, b_37);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_41);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if(match_cons(t_17, sym_Stream_1))
        {
          s_41 = ATgetArgument(t_17, 0);
        }
      else
        _fail(t);
      t_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(s_41, t_41, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      if(match_cons(u_17, sym_Stream_1))
        {
          x_41 = ATgetArgument(u_17, 0);
        }
      else
        _fail(t);
      y_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(x_41, y_41, t);
  u_41 = t;
  t = term_v_17;
  v_41 = t;
  t = u_41;
  if(match_cons(t, sym_Stream_1))
    {
      w_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, u_41);
  t = i_5(v_41, w_41, t);
  return(t);
}
ATerm output_1_0 (ATerm x_135 (ATerm), ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL;
  t = x_135(t);
  n_41 = t;
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_41 = NULL,p_41 = NULL;
        t = term_y_17;
        o_41 = t;
        t = term_z_17;
        p_41 = t;
        t = term_a_18;
        t = v_5(o_41, p_41, t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = term_b_18;
      }
  }
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_41, n_41);
  {
    ATerm e_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_41 = NULL,r_41 = NULL;
        t = term_y_17;
        q_41 = t;
        t = term_i_18;
        r_41 = t;
        t = term_j_18;
        t = v_5(q_41, r_41, t);
        t = (ATerm) ATmakeAppl(sym__2, m_41, n_41);
        LocalPopChoice(h_18);
        if(match_cons(t, sym__2))
          {
            ATerm k_18 = ATgetArgument(t, 0);
            ATerm m_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_5(b_6, m_41, n_41, t);
      }
    else
      {
        t = e_18;
        if(match_cons(t, sym__2))
          {
            ATerm n_18 = ATgetArgument(t, 0);
            ATerm o_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_5(h_6, m_41, n_41, t);
      }
  }
  return(t);
}
static ATerm m_42 (ATerm g_42, ATerm t)
{
  t = SSL_fclose(g_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  k_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_42 = ATgetArgument(t, 0);
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_42);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = m_42(k_42, t);
          }
      }
    }
  else
    {
      t = m_42(k_42, t);
    }
  return(t);
}
static ATerm m_5 (ATerm g_37, ATerm t)
{
  t = SSL_read_term_from_stream(g_37);
  return(t);
}
static ATerm n_5 (ATerm d_51, ATerm e_51, ATerm t)
{
  t = SSL_strcat(d_51, e_51);
  return(t);
}
static ATerm o_5 (ATerm z_52, ATerm a_53, ATerm t)
{
  ATerm n_42 = NULL;
  t = SSL_fopen(z_52, a_53);
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_42 = NULL;
  t = SSL_stdin_stream();
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_42 = NULL;
  t = SSL_stdout_stream();
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_42 = NULL;
  t = SSL_stderr_stream();
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_42);
  return(t);
}
static ATerm e_44 (ATerm w_42, ATerm t)
{
  ATerm x_42 = NULL;
  t = SSL_explode_term(w_42);
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_18 = ATgetArgument(t, 1);
        if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
          {
            x_42 = ATgetFirst((ATermList) t_18);
            {
              ATerm u_18 = (ATerm) ATgetNext((ATermList) t_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_44 (ATerm a_43, ATerm b_43, ATerm c_43, ATerm t)
{
  ATerm d_43 = NULL,i_43 = NULL,j_43 = NULL,p_43 = NULL,p_12 = NULL;
  t = SSLgetAnnotations(c_43);
  j_43 = t;
  t = a_43;
  if(match_cons(t, sym_Path_1))
    {
      p_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_43, b_43);
  p_12 = t;
  t = SSLsetAnnotations(p_12, j_43);
  if(match_cons(t, sym__2))
    {
      d_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(d_43, i_43, t);
  return(t);
}
static ATerm g_44 (ATerm r_43, ATerm s_43, ATerm t_43, ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,z_43 = NULL,q_12 = NULL;
  t = SSLgetAnnotations(t_43);
  w_43 = t;
  t = SSL_is_string(r_43);
  z_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_43, s_43);
  q_12 = t;
  t = SSLsetAnnotations(q_12, w_43);
  if(match_cons(t, sym__2))
    {
      u_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(u_43, v_43, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
  b_44 = t;
  if(match_cons(t, sym__2))
    {
      c_44 = ATgetArgument(t, 0);
      d_44 = ATgetArgument(t, 1);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_44(b_44, t);
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
                  t = f_44(c_44, d_44, b_44, t);
                  LocalPopChoice(y_18);
                }
              else
                {
                  t = x_18;
                  t = g_44(c_44, d_44, b_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_44(b_44, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,t_44 = NULL;
  t_44 = t;
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_44, term_c_19);
        t = p_5(t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        {
          ATerm q_19 = NULL,r_19 = NULL;
          t = term_d_19;
          r_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_19, t_44);
          t = n_5(r_19, t_44, t);
          q_19 = t;
          t = SSL_perror(q_19);
          _fail(t);
        }
      }
  }
  n_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(o_44, t);
  m_44 = t;
  t = n_44;
  t = fclose_0_0(t);
  t = m_44;
  return(t);
}
ATerm input_1_0 (ATerm y_135 (ATerm), ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_44 = NULL,x_44 = NULL;
      t = term_y_17;
      w_44 = t;
      t = term_g_19;
      x_44 = t;
      t = term_h_19;
      t = v_5(w_44, x_44, t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = term_i_19;
    }
  t = ReadFromFile_0_0(t);
  t = y_135(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  t = term_y_17;
  y_44 = t;
  t = term_j_19;
  z_44 = t;
  t = term_k_19;
  t = v_5(y_44, z_44, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
  b_45 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_45;
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
            t = b_45;
          }
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = (ATerm) ATinsert(ATempty, b_45);
      }
  }
  c_45 = t;
  t = term_b_18;
  d_45 = t;
  t = SSL_printnl(d_45, c_45);
  t = b_45;
  return(t);
}
ATerm map_1_0 (ATerm f_116 (ATerm), ATerm t)
{
  static ATerm v_45 (ATerm t);
  static ATerm v_45 (ATerm t)
  {
    ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
    s_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_45;
      }
    else
      {
        ATerm w_19 = NULL,d_20 = NULL,e_20 = NULL,t_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_45 = ATgetFirst((ATermList) t);
            u_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_45);
        w_19 = t;
        t = t_45;
        t = f_116(t);
        d_20 = t;
        t = u_45;
        t = v_45(t);
        e_20 = t;
        t = (ATerm) ATinsert(CheckATermList(e_20), d_20);
        t_12 = t;
        t = SSLsetAnnotations(t_12, w_19);
      }
    return(t);
  }
  t = v_45(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_45 = ATgetFirst((ATermList) t);
      z_45 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_46 = NULL,e_46 = NULL;
        static ATerm i_6 (ATerm t);
        static ATerm i_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_46)), not_null(e_46));
          return(t);
        }
        t = z_45;
        t = o_0(t);
        if(((d_46 != NULL) && (d_46 != t)))
          _fail(t);
        else
          d_46 = t;
        t = y_45;
        t = m_0(t);
        if(((e_46 != NULL) && (e_46 != t)))
          _fail(t);
        else
          e_46 = t;
        t = z_45;
        t = reverse_acc_2_0(m_0, i_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_19;
      t = o_0(t);
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,v_12 = NULL;
  o_46 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_46);
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_46);
  v_12 = t;
  t = SSLsetAnnotations(v_12, m_46);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm s_46 = NULL;
  s_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_46), term_s_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm w_137 (ATerm), ATerm x_137 (ATerm), ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL;
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_46 = NULL,l_46 = NULL;
      t = term_y_17;
      k_46 = t;
      t = term_j_19;
      l_46 = t;
      t = term_k_19;
      t = v_5(k_46, l_46, t);
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      t = fetch_1_0(l_6, t);
    }
  {
    ATerm v_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_137(t);
        t = echo_0_0(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = v_19;
      }
  }
  t = term_z_19;
  t = echo_0_0(t);
  t = term_a_20;
  i_46 = t;
  t = term_c_20;
  j_46 = t;
  t = term_f_20;
  t = v_5(i_46, j_46, t);
  t = reverse_acc_2_0(_id, m_6, t);
  t = map_1_0(n_6, t);
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_46 = NULL;
        t = x_137(t);
        t_46 = t;
        t = (ATerm) ATinsert(CheckATermList(t_46), term_i_20);
        t = echo_0_0(t);
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
      }
  }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,y_12 = NULL;
  b_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_47);
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_47);
  y_12 = t;
  t = SSLsetAnnotations(y_12, z_46);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_46 = NULL;
  w_46 = t;
  {
    ATerm j_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_46 = NULL,y_46 = NULL;
        t = term_y_17;
        x_46 = t;
        t = term_j_19;
        y_46 = t;
        t = term_k_19;
        t = v_5(x_46, y_46, t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = j_20;
        t = fetch_1_0(o_6, t);
      }
  }
  t = w_46;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm d_47 = NULL;
  d_47 = t;
  if(match_string(t, "-k"))
    {
      t = d_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_47;
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  e_47 = t;
  t = SSL_string_to_int(e_47);
  f_47 = t;
  t = term_n_20;
  g_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_20, f_47);
  t = y_5(g_47, f_47, t);
  t = e_47;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_6, r_6, s_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm i_47 = NULL;
  i_47 = t;
  if(match_string(t, "-S"))
    {
      t = i_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_47;
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  t = term_q_20;
  j_47 = t;
  t = term_r_20;
  k_47 = t;
  t = term_s_20;
  t = y_5(j_47, k_47, t);
  t = term_v_20;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_w_20;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
  l_47 = t;
  t = SSL_string_to_int(l_47);
  m_47 = t;
  t = term_q_20;
  n_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_20, m_47);
  t = y_5(n_47, m_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_47);
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
  ATerm o_47 = NULL,p_47 = NULL;
  t = term_y_20;
  o_47 = t;
  t = term_p_19;
  p_47 = t;
  t = term_z_20;
  t = y_5(o_47, p_47, t);
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
      t = Option_3_0(t_6, u_6, v_6, t);
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
            t = ArgOption_3_0(w_6, z_6, a_7, t);
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
static ATerm y_5 (ATerm t_71, ATerm u_71, ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL;
  t = term_y_17;
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_17, t_71, u_71);
  t = lookup_table_0_1(q_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(t_71, u_71, r_47, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_17, t_71, u_71);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
      t = term_p_19;
      t = g_0(t);
      x_47 = t;
      t = term_a_20;
      y_47 = t;
      t = term_c_20;
      z_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_20, term_c_20, x_47);
      t = w_5(y_47, z_47, x_47, t);
      _fail(t);
    }
  else
    {
      ATerm c_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_47 = ATgetFirst((ATermList) t);
          w_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_47;
      t = b_0(t);
      t = term_p_19;
      t = d_0(t);
      c_48 = t;
      t = (ATerm) ATinsert(CheckATermList(w_47), c_48);
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm e_48 = NULL;
  e_48 = t;
  if(match_string(t, "-o"))
    {
      t = e_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_48;
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  f_48 = t;
  t = term_z_17;
  g_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, f_48);
  t = y_5(g_48, f_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_48);
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
static ATerm w_5 (ATerm j_58, ATerm k_58, ATerm i_58, ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL;
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_58, k_58);
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            ATerm m_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_58, k_58);
        t = v_5(j_58, k_58, t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = (ATerm) ATempty;
      }
  }
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_58, k_58, (ATerm) ATinsert(CheckATermList(j_48), i_58));
  t = lookup_table_0_1(j_58, t);
  m_48 = t;
  t = (ATerm) ATinsert(CheckATermList(j_48), i_58);
  k_48 = t;
  t = m_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(k_58, k_48, l_48, t);
  t = i_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
      t = term_p_19;
      t = l_0(t);
      x_48 = t;
      t = term_a_20;
      y_48 = t;
      t = term_c_20;
      z_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_20, term_c_20, x_48);
      t = w_5(y_48, z_48, x_48, t);
      _fail(t);
    }
  else
    {
      ATerm d_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_48 = ATgetFirst((ATermList) t);
          u_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_48 = ATgetFirst((ATermList) t);
          w_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_48;
      t = h_0(t);
      t = v_48;
      t = j_0(t);
      d_49 = t;
      t = (ATerm) ATinsert(CheckATermList(w_48), d_49);
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm f_49 = NULL;
  f_49 = t;
  if(match_string(t, "-i"))
    {
      t = f_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_49;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL;
  g_49 = t;
  t = term_g_19;
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, g_49);
  t = y_5(h_49, g_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_49);
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
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_19;
  t = whoami_0_0(t);
  i_49 = t;
  t = term_o_21;
  k_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_21), i_49);
  l_49 = t;
  t = SSL_printnl(k_49, l_49);
  t = term_q_21;
  j_49 = t;
  t = SSL_exit(j_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL;
  t = term_y_17;
  m_49 = t;
  t = term_j_19;
  n_49 = t;
  t = term_k_19;
  t = v_5(m_49, n_49, t);
  return(t);
}
static ATerm q_5 (ATerm s_56, ATerm t_56, ATerm t)
{
  ATerm s_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_56, t_56);
      LocalPopChoice(u_21);
    }
  else
    {
      t = s_21;
      t = SSL_addr(s_56, t_56);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_49;
      t = e_123(t);
    }
  else
    {
      ATerm u_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_49 = ATgetFirst((ATermList) t);
          r_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_49;
      t = foldr_2_0(e_123, f_123, t);
      u_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_49, u_49);
      t = f_123(t);
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
  ATerm x_49 = NULL,l_20 = NULL,p_20 = NULL;
  t = times_0_0(t);
  p_20 = t;
  t = SSL_explode_term(p_20);
  if(match_cons(t, sym__2))
    {
      ATerm v_21 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_20;
  t = foldr_2_0(o_7, p_7, t);
  x_49 = t;
  t = SSL_TicksToSeconds(x_49);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
  i_50 = t;
  if(match_cons(t, sym__2))
    {
      j_50 = ATgetArgument(t, 0);
      k_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_50;
        if((j_50 != t))
          {
            _fail(t);
          }
        t = i_50;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = (ATerm) ATmakeAppl(sym__2, j_50, k_50);
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_50, k_50);
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              t = SSL_gtr(j_50, k_50);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_50, k_50);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_132 (ATerm), ATerm t)
{
  ATerm o_50 = NULL;
  o_50 = t;
  {
    ATerm a_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL;
        t = term_y_17;
        r_50 = t;
        t = term_q_20;
        s_50 = t;
        t = term_d_22;
        t = v_5(r_50, s_50, t);
        q_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_50, term_q_21);
        t = geq_0_0(t);
        t = o_50;
        t = t_132(t);
        LocalPopChoice(c_22);
      }
    else
      {
        t = a_22;
        t = o_50;
      }
  }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,x_50 = NULL,y_50 = NULL;
  t = run_time_0_0(t);
  u_50 = t;
  t = term_p_19;
  t = whoami_0_0(t);
  v_50 = t;
  t = term_o_21;
  x_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_22), u_50), term_f_22), v_50);
  y_50 = t;
  t = SSL_printnl(x_50, y_50);
  t = (ATerm) ATmakeAppl(sym__2, term_o_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_22), u_50), term_f_22), v_50));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_20;
  z_50 = t;
  t = SSL_exit(z_50);
  return(t);
}
static ATerm z_5 (ATerm u_62, ATerm v_62, ATerm w_62, ATerm t)
{
  ATerm a_51 = NULL;
  t = SSL_hashtable_put(w_62, u_62, v_62);
  a_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_51);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_59, ATerm t)
{
  ATerm l_51 = NULL;
  t = table_hashtable_0_0(t);
  l_51 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_21 = NULL;
        t = l_51;
        if(match_cons(t, sym_Hashtable_1))
          {
            h_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_6(v_59, h_21, t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        {
          ATerm r_21 = NULL;
          t = v_59;
          t = table_create_0_0(t);
          t = l_51;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_6(v_59, r_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm c_63, ATerm d_63, ATerm t)
{
  ATerm o_51 = NULL;
  t = SSL_hashtable_create(c_63, d_63);
  o_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_51);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,t_51 = NULL,u_51 = NULL;
  p_51 = t;
  t = term_k_22;
  t_51 = t;
  t = term_l_22;
  u_51 = t;
  t = p_51;
  t = new_hashtable_0_2(t_51, u_51, t);
  q_51 = t;
  t = p_51;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(p_51, q_51, r_51, t);
  t = p_51;
  return(t);
}
static ATerm s_5 (ATerm z_62, ATerm a_63, ATerm t)
{
  ATerm v_51 = NULL;
  t = SSL_hashtable_remove(a_63, z_62);
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_51);
  return(t);
}
static ATerm t_5 (ATerm e_63, ATerm t)
{
  ATerm w_51 = NULL;
  t = SSL_hashtable_destroy(e_63);
  w_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_51);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_51 = NULL;
  t = SSL_table_hashtable();
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_51);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL;
  y_51 = t;
  t = table_hashtable_0_0(t);
  z_51 = t;
  t = lookup_table_0_1(y_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(b_52, t);
  t = z_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(y_51, a_52, t);
  t = y_51;
  return(t);
}
ATerm fetch_1_0 (ATerm p_116 (ATerm), ATerm t)
{
  static ATerm e_53 (ATerm t);
  static ATerm e_53 (ATerm t)
  {
    ATerm v_52 = NULL,w_52 = NULL,d_53 = NULL;
    v_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_52 = ATgetFirst((ATermList) t);
        d_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_22 = NULL,j_22 = NULL,a_13 = NULL;
          t = SSLgetAnnotations(v_52);
          e_22 = t;
          t = w_52;
          t = p_116(t);
          j_22 = t;
          t = (ATerm) ATinsert(CheckATermList(d_53), j_22);
          a_13 = t;
          t = SSLsetAnnotations(a_13, e_22);
          LocalPopChoice(n_22);
        }
      else
        {
          t = m_22;
          {
            ATerm r_22 = NULL,u_22 = NULL,b_13 = NULL;
            t = SSLgetAnnotations(v_52);
            r_22 = t;
            t = d_53;
            t = e_53(t);
            u_22 = t;
            t = (ATerm) ATinsert(CheckATermList(u_22), w_52);
            b_13 = t;
            t = SSLsetAnnotations(b_13, r_22);
          }
        }
    }
    return(t);
  }
  t = e_53(t);
  return(t);
}
static ATerm a_6 (ATerm x_62, ATerm y_62, ATerm t)
{
  t = SSL_hashtable_get(y_62, x_62);
  return(t);
}
static ATerm v_5 (ATerm c_60, ATerm d_60, ATerm t)
{
  ATerm h_53 = NULL;
  t = lookup_table_0_1(c_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(d_60, h_53, t);
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
  ATerm j_53 = NULL,k_53 = NULL;
  t = term_o_22;
  j_53 = t;
  t = term_p_19;
  k_53 = t;
  t = term_p_22;
  t = y_5(j_53, k_53, t);
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
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL;
  t = term_o_22;
  n_53 = t;
  t = term_p_19;
  o_53 = t;
  t = term_p_22;
  t = y_5(n_53, o_53, t);
  t = term_s_22;
  l_53 = t;
  t = term_p_19;
  m_53 = t;
  t = term_t_22;
  t = y_5(l_53, m_53, t);
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
ATerm Cons_2_0 (ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,l_13 = NULL;
  u_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_53 = ATgetFirst((ATermList) t);
      r_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_53);
  p_53 = t;
  t = q_53;
  t = d_97(t);
  s_53 = t;
  t = r_53;
  t = e_97(t);
  t_53 = t;
  t = (ATerm) ATinsert(CheckATermList(t_53), s_53);
  l_13 = t;
  t = SSLsetAnnotations(l_13, p_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_137 (ATerm), ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,d_54 = NULL,e_54 = NULL,g_54 = NULL,h_54 = NULL,n_13 = NULL;
  z_53 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_23;
        t = r_137(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
      }
  }
  t = z_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_54 = ATgetFirst((ATermList) t);
      e_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_53);
  a_54 = t;
  t = term_j_19;
  h_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_19, d_54);
  t = y_5(h_54, d_54, t);
  t = e_54;
  {
    static ATerm r_54 (ATerm t);
    static ATerm r_54 (ATerm t)
    {
      ATerm f_23 = t;
      int g_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_54 = NULL;
              k_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_54;
              LocalPopChoice(l_23);
            }
          else
            {
              t = k_23;
              t = r_137(t);
              t = Cons_2_0(_id, r_54, t);
            }
          LocalPopChoice(g_23);
        }
      else
        {
          t = f_23;
          {
            ATerm n_54 = NULL,o_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_54 = ATgetFirst((ATermList) t);
                o_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_54), (ATerm) ATmakeAppl(sym_Undefined_1, n_54));
          }
        }
      return(t);
    }
    t = r_54(t);
  }
  g_54 = t;
  t = (ATerm) ATinsert(CheckATermList(g_54), (ATerm) ATmakeAppl(sym_Program_1, d_54));
  n_13 = t;
  t = SSLsetAnnotations(n_13, a_54);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm e_55 = NULL;
  e_55 = t;
  if(match_string(t, "--help"))
    {
      t = e_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_55;
        }
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL;
  t = term_m_23;
  f_55 = t;
  t = term_p_19;
  g_55 = t;
  t = term_n_23;
  t = y_5(f_55, g_55, t);
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
ATerm parse_options_3_0 (ATerm o_137 (ATerm), ATerm p_137 (ATerm), ATerm q_137 (ATerm), ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL;
  y_54 = t;
  t = term_a_20;
  z_54 = t;
  t = term_q_23;
  t = lookup_table_0_1(z_54, t);
  d_55 = t;
  t = term_c_20;
  a_55 = t;
  t = (ATerm) ATempty;
  b_55 = t;
  t = d_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(a_55, b_55, c_55, t);
  t = y_54;
  {
    static ATerm a_8 (ATerm t);
    static ATerm a_8 (ATerm t)
    {
      ATerm r_23 = t;
      int s_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_137(t);
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
        ATerm r_55 = NULL;
        r_55 = t;
        {
          ATerm x_23 = t;
          int y_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_23 = NULL;
              t = r_55;
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
              t = r_55;
              t = p_137(t);
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
                t = r_55;
                t = q_137(t);
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
              ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
              static ATerm i_8 (ATerm t);
              static ATerm i_8 (ATerm t)
              {
                ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL,p_13 = NULL;
                x_55 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_55 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_55);
                v_55 = t;
                t = w_55;
                if(((w_54 != NULL) && (w_54 != t)))
                  _fail(t);
                else
                  w_54 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_55);
                p_13 = t;
                t = SSLsetAnnotations(p_13, v_55);
                return(t);
              }
              t = fetch_1_0(i_8, t);
              t = term_o_21;
              t_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_54)), term_f_24);
              u_55 = t;
              t = SSL_printnl(t_55, u_55);
              t = (ATerm) ATmakeAppl(sym__2, term_o_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_54)), term_f_24));
              t = p_137(t);
              t = term_q_21;
              s_55 = t;
              t = SSL_exit(s_55);
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
            }
        }
      }
  }
  x_54 = t;
  t = term_a_20;
  t = table_destroy_0_0(t);
  t = x_54;
  return(t);
}
ATerm option_wrap_5_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL;
  t = parse_options_3_0(r_135, s_135, t_135, t);
  c_56 = t;
  t = term_g_24;
  t = table_create_0_0(t);
  t = term_g_24;
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_24, term_h_24, c_56);
  t = lookup_table_0_1(d_56, t);
  g_56 = t;
  t = term_h_24;
  e_56 = t;
  t = g_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(e_56, c_56, f_56, t);
  t = c_56;
  t = u_135(t);
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_135(t);
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
                  t = Option_3_0(m_8, n_8, o_8, t);
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = o_24;
                  {
                    ATerm q_24 = t;
                    int r_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(r_24);
                      }
                    else
                      {
                        t = q_24;
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
  t = input_1_0(r_8, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL;
  t = term_i_18;
  i_56 = t;
  t = term_p_19;
  j_56 = t;
  t = term_s_24;
  t = y_5(i_56, j_56, t);
  t = term_u_24;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_v_24;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(j_8, default_system_usage_0_0, default_system_about_0_0, _id, k_8, t);
  return(t);
}
