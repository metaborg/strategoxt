#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Undefined_0;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_t_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_a_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_e_22;
ATerm term_d_22;
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
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_o_20);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_j_19);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_j_19);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_j_19);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym__3, term_n_20, term_o_20, (ATerm) ATempty);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_n_22);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_j_19);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
static ATerm y_4 (ATerm z_114 (ATerm), ATerm u_41, ATerm t_41, ATerm t);
ATerm genzip_4_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm d_5 (ATerm h_768, ATerm m_768, ATerm k_75, ATerm t);
ATerm while_not_2_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t);
ATerm for_3_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm j_6 (ATerm e_3, ATerm f_3, ATerm g_3, ATerm t);
static ATerm x_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm g_136 (ATerm), ATerm t);
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
static ATerm h_5 (ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm a_42, ATerm z_41, ATerm t);
static ATerm i_5 (ATerm e_115 (ATerm), ATerm w_41, ATerm v_41, ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm free_vars_3_0 (ATerm n_133 (ATerm), ATerm o_133 (ATerm), ATerm p_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
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
ATerm at_end_1_0 (ATerm k_111 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_40 (ATerm c_40, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm worker_wrapper_spec_0_0 (ATerm t);
static ATerm j_5 (ATerm m_51, ATerm n_51, ATerm t);
static ATerm k_5 (ATerm r_35, ATerm s_35, ATerm t);
static ATerm m_5 (ATerm k_110 (ATerm), ATerm y_239, ATerm x_35, ATerm t);
static ATerm l_5 (ATerm n_35, ATerm o_35, ATerm t);
static ATerm d_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm output_1_0 (ATerm o_129 (ATerm), ATerm t);
static ATerm u_42 (ATerm o_42, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_5 (ATerm t_35, ATerm t);
static ATerm o_5 (ATerm q_49, ATerm r_49, ATerm t);
static ATerm p_5 (ATerm o_51, ATerm p_51, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_44 (ATerm i_43, ATerm t);
static ATerm k_44 (ATerm m_43, ATerm n_43, ATerm o_43, ATerm t);
static ATerm l_44 (ATerm w_43, ATerm x_43, ATerm y_43, ATerm t);
static ATerm q_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm p_129 (ATerm), ATerm t);
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
static ATerm z_5 (ATerm k_70, ATerm l_70, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_5 (ATerm t_56, ATerm u_56, ATerm s_56, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_5 (ATerm c_55, ATerm d_55, ATerm t);
ATerm foldr_2_0 (ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_126 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm need_help_1_0 (ATerm f_129 (ATerm), ATerm t);
static ATerm a_6 (ATerm l_61, ATerm m_61, ATerm n_61, ATerm t);
ATerm lookup_table_0_1 (ATerm f_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm t_61, ATerm u_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_5 (ATerm q_61, ATerm r_61, ATerm t);
static ATerm u_5 (ATerm v_61, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm t_110 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_111 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm b_6 (ATerm o_61, ATerm p_61, ATerm t);
static ATerm w_5 (ATerm m_58, ATerm n_58, ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_131 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm h_8 (ATerm t);
ATerm parse_options_1_0 (ATerm c_131 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm k_129 (ATerm), ATerm t);
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
static ATerm y_4 (ATerm z_114 (ATerm), ATerm u_41, ATerm t_41, ATerm t)
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
                  t = t_41;
                  return(t);
                }
                t = h_5(z_114, a_0, v_0, w_0, t);
              }
              t = z_0(t);
              LocalPopChoice(b_9);
            }
          else
            {
              t = u_8;
              {
                ATerm p_0 = NULL,d_1 = NULL,e_0 = NULL;
                t = SSLgetAnnotations(u_0);
                p_0 = t;
                t = w_0;
                t = z_0(t);
                d_1 = t;
                t = (ATerm) ATinsert(CheckATermList(d_1), v_0);
                e_0 = t;
                t = SSLsetAnnotations(e_0, p_0);
              }
            }
        }
      }
    return(t);
  }
  t = u_41;
  t = z_0(t);
  return(t);
}
ATerm genzip_4_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm t)
{
  static ATerm l_1 (ATerm t);
  static ATerm l_1 (ATerm t)
  {
    ATerm c_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_112(t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        {
          ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,k_0 = NULL;
          t = y_112(t);
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
          t = a_113(t);
          i_1 = t;
          t = g_1;
          t = l_1(t);
          j_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_1, j_1);
          k_0 = t;
          t = SSLsetAnnotations(k_0, e_1);
          t = z_112(t);
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
static ATerm i_0 (ATerm t)
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
static ATerm d_5 (ATerm h_768, ATerm m_768, ATerm k_75, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL;
  t = SSL_explode_term(m_768);
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_768);
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
  t = genzip_4_0(b_0, c_0, i_0, _id, t);
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, k_75);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t);
  static ATerm p_2 (ATerm t)
  {
    ATerm o_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_103(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = o_9;
        t = z_103(t);
        t = p_2(t);
      }
    return(t);
  }
  t = p_2(t);
  return(t);
}
ATerm for_3_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t)
{
  t = b_104(t);
  t = while_not_2_0(c_104, d_104, t);
  return(t);
}
static ATerm n_0 (ATerm t)
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
      t = for_3_0(n_0, s_0, t_0, t);
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
ATerm tboundin_3_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm t)
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
        t = z_135(t);
        c_2 = t;
        t = d_18;
        t = x_135(t);
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
            t = x_135(t);
            w_2 = t;
            t = u_2;
            t = x_135(t);
            x_2 = t;
            t = v_2;
            t = x_135(t);
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
                t = z_135(t);
                e_4 = t;
                t = d_18;
                t = z_135(t);
                h_4 = t;
                t = b_18;
                t = z_135(t);
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
                    t = z_135(t);
                    e_6 = t;
                    t = d_18;
                    t = z_135(t);
                    k_6 = t;
                    t = b_18;
                    t = z_135(t);
                    l_6 = t;
                    t = c_18;
                    t = x_135(t);
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
                        t = z_135(t);
                        d_7 = t;
                        t = d_18;
                        t = z_135(t);
                        e_7 = t;
                        t = b_18;
                        t = z_135(t);
                        f_7 = t;
                        t = c_18;
                        t = x_135(t);
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
                            t = z_135(t);
                            t_7 = t;
                            t = d_18;
                            t = x_135(t);
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
                                t = z_135(t);
                                f_8 = t;
                                t = d_18;
                                t = x_135(t);
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
                                    t = z_135(t);
                                    v_8 = t;
                                    t = d_18;
                                    t = x_135(t);
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
                                        t = x_135(t);
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
                                            t = x_135(t);
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
                                                t = x_135(t);
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
                                                    t = x_135(t);
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
                                                  t = x_135(t);
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
ATerm dynrule_targs_1_0 (ATerm g_136 (ATerm), ATerm t)
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
  ATerm a_22 = NULL;
  ATerm p_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_22 = ATgetArgument(t, 0);
          {
            ATerm s_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_10);
      t = a_22;
    }
  else
    {
      t = p_10;
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
static ATerm b_1 (ATerm t)
{
  ATerm j_23 = NULL;
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_23 = ATgetArgument(t, 0);
          {
            ATerm v_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_10);
      t = j_23;
    }
  else
    {
      t = t_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_23;
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
  ATerm y_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_24);
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
                  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,f_25 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_25 = ATgetArgument(t, 0);
                      b_25 = ATgetArgument(t, 1);
                      c_25 = ATgetArgument(t, 2);
                      f_25 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_25;
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
  ATerm q_25 = NULL;
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_25 = ATgetArgument(t, 0);
          {
            ATerm r_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_11);
      t = q_25;
    }
  else
    {
      t = p_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_25;
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
static ATerm t_1 (ATerm t)
{
  ATerm k_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_26);
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
                  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,r_26 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_26 = ATgetArgument(t, 0);
                      n_26 = ATgetArgument(t, 1);
                      o_26 = ATgetArgument(t, 2);
                      r_26 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_26;
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
  ATerm d_27 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_27 = ATgetArgument(t, 0);
          {
            ATerm u_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_12);
      t = d_27;
    }
  else
    {
      t = r_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_27;
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
  ATerm n_27 = NULL;
  ATerm w_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_27 = ATgetArgument(t, 0);
          {
            ATerm b_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_12);
      t = n_27;
    }
  else
    {
      t = w_12;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_27;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm r_27 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_27);
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
                  ATerm d_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_28 = ATgetArgument(t, 0);
                      g_28 = ATgetArgument(t, 1);
                      h_28 = ATgetArgument(t, 2);
                      i_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_28;
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
  ATerm s_28 = NULL;
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_28 = ATgetArgument(t, 0);
          {
            ATerm s_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_13);
      t = s_28;
    }
  else
    {
      t = q_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_28;
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
  ATerm a_29 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_29 = ATgetArgument(t, 0);
          {
            ATerm v_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_13);
      t = a_29;
    }
  else
    {
      t = t_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_29;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
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
                  ATerm k_29 = NULL,l_29 = NULL,o_29 = NULL,p_29 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_29 = ATgetArgument(t, 0);
                      l_29 = ATgetArgument(t, 1);
                      o_29 = ATgetArgument(t, 2);
                      p_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_29;
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
  ATerm w_29 = NULL;
  ATerm e_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_29 = ATgetArgument(t, 0);
          {
            ATerm i_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_14);
      t = w_29;
    }
  else
    {
      t = e_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_29;
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
  ATerm f_30 = NULL;
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_30 = ATgetArgument(t, 0);
          {
            ATerm l_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_14);
      t = f_30;
    }
  else
    {
      t = j_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_30;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm l_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_30);
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
                  ATerm p_30 = NULL,s_30 = NULL,u_30 = NULL,z_30 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_30 = ATgetArgument(t, 0);
                      s_30 = ATgetArgument(t, 1);
                      u_30 = ATgetArgument(t, 2);
                      z_30 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_30;
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
  ATerm s_31 = NULL;
  ATerm x_14 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_31 = ATgetArgument(t, 0);
          {
            ATerm d_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_15);
      t = s_31;
    }
  else
    {
      t = x_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_31;
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
  ATerm f_32 = NULL;
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_32 = ATgetArgument(t, 0);
          {
            ATerm g_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_15);
      t = f_32;
    }
  else
    {
      t = e_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_32;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm r_24 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      r_24 = ATgetArgument(t, 0);
      t = r_24;
      t = free_vars_3_0(c_1, h_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          r_24 = ATgetArgument(t, 0);
          t = r_24;
          t = free_vars_3_0(t_1, u_1, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              r_24 = ATgetArgument(t, 0);
              t = r_24;
              t = free_vars_3_0(b_2, e_2, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  r_24 = ATgetArgument(t, 0);
                  t = r_24;
                  t = free_vars_3_0(j_2, m_2, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      r_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_24;
                  t = free_vars_3_0(k_3, l_3, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm j_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_33);
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
                  ATerm l_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_33 = ATgetArgument(t, 0);
                      r_33 = ATgetArgument(t, 1);
                      s_33 = ATgetArgument(t, 2);
                      t_33 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_33;
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
  ATerm f_34 = NULL;
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_34 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_15);
      t = f_34;
    }
  else
    {
      t = u_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_34;
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
  ATerm k_34 = NULL;
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_34 = ATgetArgument(t, 0);
          {
            ATerm z_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_15);
      t = k_34;
    }
  else
    {
      t = x_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_34;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm t_32 = NULL,a_33 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_33 = ATgetArgument(t, 0);
      t = a_33;
      if(match_cons(t, sym_Rule_3))
        {
          t_32 = ATgetArgument(t, 0);
          {
            ATerm a_16 = ATgetArgument(t, 1);
          }
          {
            ATerm b_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_32;
      t = free_vars_3_0(p_3, r_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_33 = ATgetArgument(t, 0);
          {
            ATerm c_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_33;
    }
  return(t);
}
static ATerm h_5 (ATerm h_115 (ATerm), ATerm i_115 (ATerm), ATerm a_42, ATerm z_41, ATerm t)
{
  t = i_115(t);
  {
    static ATerm z_3 (ATerm t);
    static ATerm z_3 (ATerm t)
    {
      ATerm o_34 = NULL;
      o_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_42, o_34);
      t = h_115(t);
      return(t);
    }
    t = fetch_1_0(z_3, t);
  }
  t = z_41;
  return(t);
}
static ATerm i_5 (ATerm e_115 (ATerm), ATerm w_41, ATerm v_41, ATerm t)
{
  static ATerm e_35 (ATerm t);
  static ATerm e_35 (ATerm t)
  {
    ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
    z_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_41;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_35 = ATgetFirst((ATermList) t);
            b_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_16 = t;
          int e_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_34;
              {
                static ATerm a_4 (ATerm t);
                static ATerm a_4 (ATerm t)
                {
                  t = v_41;
                  return(t);
                }
                t = h_5(e_115, a_4, a_35, b_35, t);
              }
              t = e_35(t);
              LocalPopChoice(e_16);
            }
          else
            {
              t = d_16;
              {
                ATerm i_11 = NULL,m_11 = NULL,z_11 = NULL;
                t = SSLgetAnnotations(z_34);
                i_11 = t;
                t = b_35;
                t = e_35(t);
                m_11 = t;
                t = (ATerm) ATinsert(CheckATermList(m_11), a_35);
                z_11 = t;
                t = SSLsetAnnotations(z_11, i_11);
              }
            }
        }
      }
    return(t);
  }
  t = w_41;
  t = e_35(t);
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
ATerm free_vars_3_0 (ATerm n_133 (ATerm), ATerm o_133 (ATerm), ATerm p_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm c_36 (ATerm t);
  static ATerm c_36 (ATerm t)
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_133(t);
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
              ATerm j_35 = NULL,k_35 = NULL,t_11 = NULL,u_11 = NULL;
              j_35 = t;
              t = o_133(t);
              k_35 = t;
              t = j_35;
              {
                static ATerm c_4 (ATerm t);
                static ATerm c_4 (ATerm t)
                {
                  ATerm m_35 = NULL;
                  t = c_36(t);
                  m_35 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_35, k_35);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_133(c_4, c_36, d_4, t);
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
                t = foldr_3_0(j_4, m_4, c_36, t);
              }
            }
        }
      }
    return(t);
  }
  t = c_36(t);
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
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  o_38 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      p_38 = ATgetArgument(t, 0);
      q_38 = ATgetArgument(t, 1);
      r_38 = ATgetArgument(t, 2);
      s_38 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = s_38;
  if(match_cons(t, sym_Seq_2))
    {
      t_38 = ATgetArgument(t, 0);
      u_38 = ATgetArgument(t, 1);
      t = t_38;
      if(match_cons(t, sym_Match_1))
        {
          n_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, p_38, q_38, r_38, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_38), u_38)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm f_14 = NULL,g_14 = NULL,o_14 = NULL,t_14 = NULL,v_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          t_38 = ATgetArgument(t, 0);
          u_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_38;
      if(match_cons(t, sym_Seq_2))
        {
          v_38 = ATgetArgument(t, 0);
          x_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_38;
      if(match_cons(t, sym_Match_1))
        {
          w_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_38;
      if(match_cons(t, sym_Op_2))
        {
          ATerm l_17 = ATgetArgument(t, 0);
          ATerm m_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_38;
      t = free_vars_3_0(s_4, t_4, tboundin_3_0, t);
      a_15 = t;
      t = r_38;
      t = map_1_0(x_4, t);
      b_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_15, b_15);
      t = diff_0_0(t);
      g_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_38, g_14);
      t = diff_0_0(t);
      f_14 = t;
      t = g_14;
      t = map_1_0(z_4, t);
      o_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_38, o_14);
      t = conc_0_0(t);
      y_14 = t;
      t = new_0_0(t);
      t_14 = t;
      t = q_38;
      t = map_1_0(a_5, t);
      v_14 = t;
      t = y_14;
      t = map_1_0(b_5, t);
      z_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, t_14, q_38, y_14, (ATerm) ATmakeAppl(sym_Scope_2, f_14, x_38))), (ATerm) ATmakeAppl(sym_SDefT_4, p_38, q_38, r_38, (ATerm) ATmakeAppl(sym_Scope_2, g_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_38), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, t_14), v_14, z_14)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_111 (ATerm), ATerm t)
{
  static ATerm y_39 (ATerm t);
  static ATerm y_39 (ATerm t)
  {
    ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
    x_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_39 = ATgetFirst((ATermList) t);
        w_39 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_18 = NULL,b_19 = NULL,b_12 = NULL;
          t = SSLgetAnnotations(x_39);
          y_18 = t;
          t = w_39;
          t = y_39(t);
          b_19 = t;
          t = (ATerm) ATinsert(CheckATermList(b_19), v_39);
          b_12 = t;
          t = SSLsetAnnotations(b_12, y_18);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_39;
        t = k_111(t);
      }
    return(t);
  }
  t = y_39(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
  f_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_39;
    }
  else
    {
      static ATerm c_5 (ATerm t);
      static ATerm c_5 (ATerm t)
      {
        t = not_null(h_39);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_39 = ATgetFirst((ATermList) t);
          if(((h_39 != NULL) && (h_39 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_39;
      t = at_end_1_0(c_5, t);
    }
  return(t);
}
static ATerm k_40 (ATerm c_40, ATerm t)
{
  ATerm d_40 = NULL;
  t = SSL_explode_term(c_40);
  if(match_cons(t, sym__2))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_40;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  h_40 = t;
  if(match_cons(t, sym__2))
    {
      f_40 = ATgetArgument(t, 0);
      g_40 = ATgetArgument(t, 1);
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm f_5 (ATerm t);
            static ATerm f_5 (ATerm t)
            {
              t = g_40;
              return(t);
            }
            t = f_40;
            t = at_end_1_0(f_5, t);
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            t = k_40(h_40, t);
          }
      }
    }
  else
    {
      t = k_40(h_40, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm u_117 (ATerm), ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_40;
      t = u_117(t);
    }
  else
    {
      ATerm r_40 = NULL,s_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_40 = ATgetFirst((ATermList) t);
          o_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_40;
      t = w_117(t);
      r_40 = t;
      t = o_40;
      t = foldr_3_0(u_117, v_117, w_117, t);
      s_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_40, s_40);
      t = v_117(t);
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,d_12 = NULL;
  f_41 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_41);
  c_41 = t;
  t = d_41;
  t = foldr_3_0(_id, conc_0_0, c_6, t);
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_41);
  d_12 = t;
  t = SSLsetAnnotations(d_12, c_41);
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
        ATerm h_41 = NULL;
        h_41 = t;
        t = (ATerm) ATinsert(ATempty, h_41);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,f_12 = NULL,e_12 = NULL;
  b_41 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_41);
  u_40 = t;
  t = v_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_40 = ATgetFirst((ATermList) t);
      y_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_40);
  w_40 = t;
  t = y_40;
  t = Cons_2_0(s_5, y_5, t);
  z_40 = t;
  t = (ATerm) ATinsert(CheckATermList(z_40), x_40);
  e_12 = t;
  t = SSLsetAnnotations(e_12, w_40);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_41);
  f_12 = t;
  t = SSLsetAnnotations(f_12, u_40);
  return(t);
}
static ATerm j_5 (ATerm m_51, ATerm n_51, ATerm t)
{
  ATerm j_41 = NULL;
  t = SSL_fputc(m_51, n_51);
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_41);
  return(t);
}
static ATerm k_5 (ATerm r_35, ATerm s_35, ATerm t)
{
  ATerm k_41 = NULL;
  t = SSL_write_term_to_stream_text(r_35, s_35);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_41);
  return(t);
}
static ATerm m_5 (ATerm k_110 (ATerm), ATerm y_239, ATerm x_35, ATerm t)
{
  ATerm l_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_239, term_s_17);
  t = q_5(t);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_41, x_35);
  t = k_110(t);
  t = fclose_0_0(t);
  t = x_35;
  return(t);
}
static ATerm l_5 (ATerm n_35, ATerm o_35, ATerm t)
{
  ATerm m_41 = NULL;
  t = SSL_write_term_to_stream_baf(n_35, o_35);
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_41);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if(match_cons(t_17, sym_Stream_1))
        {
          x_41 = ATgetArgument(t_17, 0);
        }
      else
        _fail(t);
      y_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(x_41, y_41, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_17 = ATgetArgument(t, 0);
      if(match_cons(u_17, sym_Stream_1))
        {
          f_42 = ATgetArgument(u_17, 0);
        }
      else
        _fail(t);
      g_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(f_42, g_42, t);
  c_42 = t;
  t = term_v_17;
  d_42 = t;
  t = c_42;
  if(match_cons(t, sym_Stream_1))
    {
      e_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, c_42);
  t = j_5(d_42, e_42, t);
  return(t);
}
ATerm output_1_0 (ATerm o_129 (ATerm), ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  t = o_129(t);
  o_41 = t;
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_41 = NULL,q_41 = NULL;
        t = term_y_17;
        p_41 = t;
        t = term_z_17;
        q_41 = t;
        t = term_a_18;
        t = w_5(p_41, q_41, t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = term_f_18;
      }
  }
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_41 = NULL,s_41 = NULL;
        t = term_y_17;
        r_41 = t;
        t = term_j_18;
        s_41 = t;
        t = term_k_18;
        t = w_5(r_41, s_41, t);
        t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
        LocalPopChoice(i_18);
        if(match_cons(t, sym__2))
          {
            ATerm l_18 = ATgetArgument(t, 0);
            ATerm m_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_5(d_6, n_41, o_41, t);
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
        t = m_5(g_6, n_41, o_41, t);
      }
  }
  return(t);
}
static ATerm u_42 (ATerm o_42, ATerm t)
{
  t = SSL_fclose(o_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL;
  s_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_42 = ATgetArgument(t, 0);
      {
        ATerm p_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_42);
            LocalPopChoice(q_18);
          }
        else
          {
            t = p_18;
            t = u_42(s_42, t);
          }
      }
    }
  else
    {
      t = u_42(s_42, t);
    }
  return(t);
}
static ATerm n_5 (ATerm t_35, ATerm t)
{
  t = SSL_read_term_from_stream(t_35);
  return(t);
}
static ATerm o_5 (ATerm q_49, ATerm r_49, ATerm t)
{
  t = SSL_strcat(q_49, r_49);
  return(t);
}
static ATerm p_5 (ATerm o_51, ATerm p_51, ATerm t)
{
  ATerm v_42 = NULL;
  t = SSL_fopen(o_51, p_51);
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_43 = NULL;
  t = SSL_stdin_stream();
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_43 = NULL;
  t = SSL_stdout_stream();
  b_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_43 = NULL;
  t = SSL_stderr_stream();
  c_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_43);
  return(t);
}
static ATerm j_44 (ATerm i_43, ATerm t)
{
  ATerm j_43 = NULL;
  t = SSL_explode_term(i_43);
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_18 = ATgetArgument(t, 1);
        if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
          {
            j_43 = ATgetFirst((ATermList) s_18);
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
  t = j_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_44 (ATerm m_43, ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,u_43 = NULL,m_12 = NULL;
  t = SSLgetAnnotations(o_43);
  r_43 = t;
  t = m_43;
  if(match_cons(t, sym_Path_1))
    {
      u_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_43, n_43);
  m_12 = t;
  t = SSLsetAnnotations(m_12, r_43);
  if(match_cons(t, sym__2))
    {
      p_43 = ATgetArgument(t, 0);
      q_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(p_43, q_43, t);
  return(t);
}
static ATerm l_44 (ATerm w_43, ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,e_44 = NULL,q_12 = NULL;
  t = SSLgetAnnotations(y_43);
  b_44 = t;
  t = SSL_is_string(w_43);
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_44, x_43);
  q_12 = t;
  t = SSLsetAnnotations(q_12, b_44);
  if(match_cons(t, sym__2))
    {
      z_43 = ATgetArgument(t, 0);
      a_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(z_43, a_44, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  g_44 = t;
  if(match_cons(t, sym__2))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_44(g_44, t);
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
                  t = k_44(h_44, i_44, g_44, t);
                  LocalPopChoice(x_18);
                }
              else
                {
                  t = w_18;
                  t = l_44(h_44, i_44, g_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_44(g_44, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,u_44 = NULL;
  u_44 = t;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_44, term_c_19);
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
          t = (ATerm) ATmakeAppl(sym__2, term_d_19, u_44);
          t = o_5(r_19, u_44, t);
          q_19 = t;
          t = SSL_perror(q_19);
          _fail(t);
        }
      }
  }
  o_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_5(p_44, t);
  n_44 = t;
  t = o_44;
  t = fclose_0_0(t);
  t = n_44;
  return(t);
}
ATerm input_1_0 (ATerm p_129 (ATerm), ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_44 = NULL,y_44 = NULL;
      t = term_y_17;
      x_44 = t;
      t = term_g_19;
      y_44 = t;
      t = term_h_19;
      t = w_5(x_44, y_44, t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = term_i_19;
    }
  t = ReadFromFile_0_0(t);
  t = p_129(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL;
  z_44 = t;
  t = term_j_19;
  t = whoami_0_0(t);
  a_45 = t;
  t = term_k_19;
  c_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_19), a_45), term_l_19);
  d_45 = t;
  t = SSL_printnl(c_45, d_45);
  t = term_n_19;
  b_45 = t;
  t = SSL_exit(b_45);
  t = z_44;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  if(match_string(t, "-k"))
    {
      t = f_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_45;
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL;
  g_45 = t;
  t = SSL_string_to_int(g_45);
  h_45 = t;
  t = term_o_19;
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, h_45);
  t = z_5(i_45, h_45, t);
  t = g_45;
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
  ATerm k_45 = NULL;
  k_45 = t;
  if(match_string(t, "-S"))
    {
      t = k_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_45;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL;
  t = term_s_19;
  l_45 = t;
  t = term_v_19;
  m_45 = t;
  t = term_w_19;
  t = z_5(l_45, m_45, t);
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
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  t = SSL_string_to_int(n_45);
  o_45 = t;
  t = term_s_19;
  p_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_19, o_45);
  t = z_5(p_45, o_45, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_45);
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
  ATerm q_45 = NULL,r_45 = NULL;
  t = term_c_20;
  q_45 = t;
  t = term_j_19;
  r_45 = t;
  t = term_f_20;
  t = z_5(q_45, r_45, t);
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
static ATerm z_5 (ATerm k_70, ATerm l_70, ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL;
  t = term_y_17;
  s_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_17, k_70, l_70);
  t = lookup_table_0_1(s_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(k_70, l_70, t_45, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_17, k_70, l_70);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL;
      t = term_j_19;
      t = g_0(t);
      z_45 = t;
      t = term_n_20;
      a_46 = t;
      t = term_o_20;
      b_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_20, term_o_20, z_45);
      t = x_5(a_46, b_46, z_45, t);
      _fail(t);
    }
  else
    {
      ATerm e_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_45 = ATgetFirst((ATermList) t);
          y_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_45;
      t = d_0(t);
      t = term_j_19;
      t = f_0(t);
      e_46 = t;
      t = (ATerm) ATinsert(CheckATermList(y_45), e_46);
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm g_46 = NULL;
  g_46 = t;
  if(match_string(t, "-o"))
    {
      t = g_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_46;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  h_46 = t;
  t = term_z_17;
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, h_46);
  t = z_5(i_46, h_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_46);
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
static ATerm x_5 (ATerm t_56, ATerm u_56, ATerm s_56, ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
  k_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_56, u_56);
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
        t = (ATerm) ATmakeAppl(sym__2, t_56, u_56);
        t = w_5(t_56, u_56, t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        t = (ATerm) ATempty;
      }
  }
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_56, u_56, (ATerm) ATinsert(CheckATermList(l_46), s_56));
  t = lookup_table_0_1(t_56, t);
  o_46 = t;
  t = (ATerm) ATinsert(CheckATermList(l_46), s_56);
  m_46 = t;
  t = o_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(u_56, m_46, n_46, t);
  t = k_46;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
      t = term_j_19;
      t = o_0(t);
      z_46 = t;
      t = term_n_20;
      a_47 = t;
      t = term_o_20;
      b_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_20, term_o_20, z_46);
      t = x_5(a_47, b_47, z_46, t);
      _fail(t);
    }
  else
    {
      ATerm f_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_46 = ATgetFirst((ATermList) t);
          w_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_46;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_46 = ATgetFirst((ATermList) t);
          y_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_46;
      t = l_0(t);
      t = x_46;
      t = m_0(t);
      f_47 = t;
      t = (ATerm) ATinsert(CheckATermList(y_46), f_47);
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm h_47 = NULL;
  h_47 = t;
  if(match_string(t, "-i"))
    {
      t = h_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_47;
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL;
  i_47 = t;
  t = term_g_19;
  j_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, i_47);
  t = z_5(j_47, i_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_47);
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
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_19;
  t = whoami_0_0(t);
  k_47 = t;
  t = term_k_19;
  m_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_20), k_47);
  n_47 = t;
  t = SSL_printnl(m_47, n_47);
  t = term_n_19;
  l_47 = t;
  t = SSL_exit(l_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL;
  t = term_y_17;
  o_47 = t;
  t = term_x_20;
  p_47 = t;
  t = term_y_20;
  t = w_5(o_47, p_47, t);
  return(t);
}
static ATerm r_5 (ATerm c_55, ATerm d_55, ATerm t)
{
  ATerm z_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_55, d_55);
      LocalPopChoice(b_21);
    }
  else
    {
      t = z_20;
      t = SSL_addr(c_55, d_55);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL;
  r_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_47;
      t = s_117(t);
    }
  else
    {
      ATerm w_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_47 = ATgetFirst((ATermList) t);
          t_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_47;
      t = foldr_2_0(s_117, t_117, t);
      w_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_47, w_47);
      t = t_117(t);
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
  ATerm z_47 = NULL,t_19 = NULL,u_19 = NULL;
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
  z_47 = t;
  t = SSL_TicksToSeconds(z_47);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  if(match_cons(t, sym__2))
    {
      l_48 = ATgetArgument(t, 0);
      m_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_48;
        if((l_48 != t))
          {
            _fail(t);
          }
        t = k_48;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
        {
          ATerm f_21 = t;
          int g_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_48, m_48);
              LocalPopChoice(g_21);
            }
          else
            {
              t = f_21;
              t = SSL_gtr(l_48, m_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_126 (ATerm), ATerm t)
{
  ATerm q_48 = NULL;
  q_48 = t;
  {
    ATerm h_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
        t = term_y_17;
        t_48 = t;
        t = term_s_19;
        u_48 = t;
        t = term_k_21;
        t = w_5(t_48, u_48, t);
        s_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_48, term_n_19);
        t = geq_0_0(t);
        t = q_48;
        t = p_126(t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = h_21;
        t = q_48;
      }
  }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,z_48 = NULL,a_49 = NULL;
  t = run_time_0_0(t);
  w_48 = t;
  t = term_j_19;
  t = whoami_0_0(t);
  x_48 = t;
  t = term_k_19;
  z_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_21), w_48), term_l_21), x_48);
  a_49 = t;
  t = SSL_printnl(z_48, a_49);
  t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_21), w_48), term_l_21), x_48));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_19;
  b_49 = t;
  t = SSL_exit(b_49);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL;
  m_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_49 = ATgetArgument(t, 0);
          {
            ATerm u_20 = NULL,t_12 = NULL;
            t = SSLgetAnnotations(m_49);
            u_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_49);
            t_12 = t;
            t = SSLsetAnnotations(t_12, u_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_129 (ATerm), ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_49 = NULL,f_49 = NULL;
      t = term_y_17;
      e_49 = t;
      t = term_r_21;
      f_49 = t;
      t = term_t_21;
      t = w_5(e_49, f_49, t);
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
      t = fetch_1_0(m_7, t);
    }
  t = f_129(t);
  return(t);
}
static ATerm a_6 (ATerm l_61, ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm o_49 = NULL;
  t = SSL_hashtable_put(n_61, l_61, m_61);
  o_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_49);
  return(t);
}
ATerm lookup_table_0_1 (ATerm f_58, ATerm t)
{
  ATerm z_49 = NULL;
  t = table_hashtable_0_0(t);
  z_49 = t;
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_21 = NULL;
        t = z_49;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_6(f_58, a_21, t);
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        {
          ATerm i_21 = NULL;
          t = f_58;
          t = table_create_0_0(t);
          t = z_49;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_6(f_58, i_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm t_61, ATerm u_61, ATerm t)
{
  ATerm c_50 = NULL;
  t = SSL_hashtable_create(t_61, u_61);
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_50);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,h_50 = NULL,i_50 = NULL;
  d_50 = t;
  t = term_x_21;
  h_50 = t;
  t = term_y_21;
  i_50 = t;
  t = d_50;
  t = new_hashtable_0_2(h_50, i_50, t);
  e_50 = t;
  t = d_50;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(d_50, e_50, f_50, t);
  t = d_50;
  return(t);
}
static ATerm t_5 (ATerm q_61, ATerm r_61, ATerm t)
{
  ATerm j_50 = NULL;
  t = SSL_hashtable_remove(r_61, q_61);
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_50);
  return(t);
}
static ATerm u_5 (ATerm v_61, ATerm t)
{
  ATerm k_50 = NULL;
  t = SSL_hashtable_destroy(v_61);
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_50);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm l_50 = NULL;
  t = SSL_table_hashtable();
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_50);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL;
  m_50 = t;
  t = table_hashtable_0_0(t);
  n_50 = t;
  t = lookup_table_0_1(m_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_5(p_50, t);
  t = n_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(m_50, o_50, t);
  t = m_50;
  return(t);
}
ATerm map_1_0 (ATerm t_110 (ATerm), ATerm t)
{
  static ATerm e_51 (ATerm t);
  static ATerm e_51 (ATerm t)
  {
    ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
    b_51 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_51;
      }
    else
      {
        ATerm n_21 = NULL,s_21 = NULL,u_21 = NULL,v_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_51 = ATgetFirst((ATermList) t);
            d_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_51);
        n_21 = t;
        t = c_51;
        t = t_110(t);
        s_21 = t;
        t = d_51;
        t = e_51(t);
        u_21 = t;
        t = (ATerm) ATinsert(CheckATermList(u_21), s_21);
        v_12 = t;
        t = SSLsetAnnotations(v_12, n_21);
      }
    return(t);
  }
  t = e_51(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_51 = ATgetFirst((ATermList) t);
      i_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_51 = NULL,t_51 = NULL;
        static ATerm n_7 (ATerm t);
        static ATerm n_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_51)), not_null(t_51));
          return(t);
        }
        t = i_51;
        t = j_0(t);
        if(((s_51 != NULL) && (s_51 != t)))
          _fail(t);
        else
          s_51 = t;
        t = h_51;
        t = h_0(t);
        if(((t_51 != NULL) && (t_51 != t)))
          _fail(t);
        else
          t_51 = t;
        t = i_51;
        t = reverse_acc_2_0(h_0, n_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_19;
      t = j_0(t);
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,x_12 = NULL;
  b_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_52);
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_52);
  x_12 = t;
  t = SSLsetAnnotations(x_12, z_51);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm d_52 = NULL;
  d_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_52), term_z_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL;
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_51 = NULL,y_51 = NULL;
      t = term_y_17;
      x_51 = t;
      t = term_x_20;
      y_51 = t;
      t = term_y_20;
      t = w_5(x_51, y_51, t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      t = fetch_1_0(o_7, t);
    }
  t = term_d_22;
  t = echo_0_0(t);
  t = term_n_20;
  v_51 = t;
  t = term_o_20;
  w_51 = t;
  t = term_e_22;
  t = w_5(v_51, w_51, t);
  t = reverse_acc_2_0(_id, p_7, t);
  t = map_1_0(r_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm d_111 (ATerm), ATerm t)
{
  static ATerm c_53 (ATerm t);
  static ATerm c_53 (ATerm t)
  {
    ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
    z_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_53 = ATgetFirst((ATermList) t);
        b_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_22 = t;
      int h_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_22 = NULL,i_22 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(z_52);
          f_22 = t;
          t = a_53;
          t = d_111(t);
          i_22 = t;
          t = (ATerm) ATinsert(CheckATermList(b_53), i_22);
          z_12 = t;
          t = SSLsetAnnotations(z_12, f_22);
          LocalPopChoice(h_22);
        }
      else
        {
          t = g_22;
          {
            ATerm q_22 = NULL,t_22 = NULL,a_13 = NULL;
            t = SSLgetAnnotations(z_52);
            q_22 = t;
            t = b_53;
            t = c_53(t);
            t_22 = t;
            t = (ATerm) ATinsert(CheckATermList(t_22), a_53);
            a_13 = t;
            t = SSLsetAnnotations(a_13, q_22);
          }
        }
    }
    return(t);
  }
  t = c_53(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL;
  g_53 = t;
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_22 = ATgetFirst((ATermList) t);
                ATerm m_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_53;
          }
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = (ATerm) ATinsert(ATempty, g_53);
      }
  }
  h_53 = t;
  t = term_f_18;
  i_53 = t;
  t = SSL_printnl(i_53, h_53);
  t = g_53;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL;
  t = term_y_17;
  m_53 = t;
  t = term_x_20;
  n_53 = t;
  t = term_y_20;
  t = w_5(m_53, n_53, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm o_61, ATerm p_61, ATerm t)
{
  t = SSL_hashtable_get(p_61, o_61);
  return(t);
}
static ATerm w_5 (ATerm m_58, ATerm n_58, ATerm t)
{
  ATerm o_53 = NULL;
  t = lookup_table_0_1(m_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(n_58, o_53, t);
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
  ATerm q_53 = NULL,r_53 = NULL;
  t = term_n_22;
  q_53 = t;
  t = term_j_19;
  r_53 = t;
  t = term_o_22;
  t = z_5(q_53, r_53, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_p_22;
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
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL;
  t = term_n_22;
  u_53 = t;
  t = term_j_19;
  v_53 = t;
  t = term_o_22;
  t = z_5(u_53, v_53, t);
  t = term_r_22;
  s_53 = t;
  t = term_j_19;
  t_53 = t;
  t = term_s_22;
  t = z_5(s_53, t_53, t);
  t = term_u_22;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_v_22;
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
ATerm Cons_2_0 (ATerm a_88 (ATerm), ATerm b_88 (ATerm), ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,g_13 = NULL;
  b_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_53 = ATgetFirst((ATermList) t);
      y_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_54);
  w_53 = t;
  t = x_53;
  t = a_88(t);
  z_53 = t;
  t = y_53;
  t = b_88(t);
  a_54 = t;
  t = (ATerm) ATinsert(CheckATermList(a_54), z_53);
  g_13 = t;
  t = SSLsetAnnotations(g_13, w_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_131 (ATerm), ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL,l_54 = NULL,m_54 = NULL,m_13 = NULL;
  g_54 = t;
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_23;
        t = d_131(t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
      }
  }
  t = g_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_54 = ATgetFirst((ATermList) t);
      j_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_54);
  h_54 = t;
  t = term_x_20;
  m_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, i_54);
  t = z_5(m_54, i_54, t);
  t = j_54;
  {
    static ATerm w_54 (ATerm t);
    static ATerm w_54 (ATerm t)
    {
      ATerm b_23 = t;
      int c_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_23 = t;
          int h_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_54 = NULL;
              p_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_54;
              LocalPopChoice(h_23);
            }
          else
            {
              t = f_23;
              t = d_131(t);
              t = Cons_2_0(_id, w_54, t);
            }
          LocalPopChoice(c_23);
        }
      else
        {
          t = b_23;
          {
            ATerm s_54 = NULL,t_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_54 = ATgetFirst((ATermList) t);
                t_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_54), (ATerm) ATmakeAppl(sym_Undefined_1, s_54));
          }
        }
      return(t);
    }
    t = w_54(t);
  }
  l_54 = t;
  t = (ATerm) ATinsert(CheckATermList(l_54), (ATerm) ATmakeAppl(sym_Program_1, i_54));
  m_13 = t;
  t = SSLsetAnnotations(m_13, h_54);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm l_55 = NULL;
  l_55 = t;
  if(match_string(t, "--help"))
    {
      t = l_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_55;
        }
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL;
  t = term_r_21;
  m_55 = t;
  t = term_j_19;
  n_55 = t;
  t = term_i_23;
  t = z_5(m_55, n_55, t);
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
ATerm parse_options_1_0 (ATerm c_131 (ATerm), ATerm t)
{
  ATerm b_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL;
  f_55 = t;
  t = term_n_20;
  g_55 = t;
  t = term_m_23;
  t = lookup_table_0_1(g_55, t);
  k_55 = t;
  t = term_o_20;
  h_55 = t;
  t = (ATerm) ATempty;
  i_55 = t;
  t = k_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(h_55, i_55, j_55, t);
  t = f_55;
  {
    static ATerm a_8 (ATerm t);
    static ATerm a_8 (ATerm t)
    {
      ATerm n_23 = t;
      int r_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_131(t);
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
        ATerm y_55 = NULL;
        y_55 = t;
        {
          ATerm w_23 = t;
          int x_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_23 = NULL;
              t = y_55;
              {
                ATerm y_23 = t;
                int z_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_23 = NULL,g_23 = NULL;
                    t = term_y_17;
                    e_23 = t;
                    t = term_r_21;
                    g_23 = t;
                    t = term_t_21;
                    t = w_5(e_23, g_23, t);
                    LocalPopChoice(z_23);
                  }
                else
                  {
                    t = y_23;
                    t = fetch_1_0(h_8, t);
                  }
              }
              t = y_55;
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
                t = term_n_22;
                q_23 = t;
                t = term_a_24;
                t = w_5(p_23, q_23, t);
                t = y_55;
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
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
              static ATerm i_8 (ATerm t);
              static ATerm i_8 (ATerm t)
              {
                ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,o_13 = NULL;
                e_56 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_56 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_56);
                c_56 = t;
                t = d_56;
                if(((b_55 != NULL) && (b_55 != t)))
                  _fail(t);
                else
                  b_55 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_56);
                o_13 = t;
                t = SSLsetAnnotations(o_13, c_56);
                return(t);
              }
              t = fetch_1_0(i_8, t);
              t = term_k_19;
              a_56 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_55)), term_d_24);
              b_56 = t;
              t = SSL_printnl(a_56, b_56);
              t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_55)), term_d_24));
              t = default_system_usage_0_0(t);
              t = term_n_19;
              z_55 = t;
              t = SSL_exit(z_55);
              LocalPopChoice(c_24);
            }
          else
            {
              t = b_24;
            }
        }
      }
  }
  e_55 = t;
  t = term_n_20;
  t = table_destroy_0_0(t);
  t = e_55;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm k_129 (ATerm), ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL;
  t = parse_options_1_0(h_129, t);
  k_56 = t;
  t = term_e_24;
  t = table_create_0_0(t);
  t = term_e_24;
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_24, term_f_24, k_56);
  t = lookup_table_0_1(l_56, t);
  o_56 = t;
  t = term_f_24;
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
  t = j_129(t);
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_129, t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_129(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
              t = report_failure_0_0(t);
            }
        }
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
                  t = Option_3_0(o_8, p_8, r_8, t);
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = o_24;
                  {
                    ATerm q_24 = t;
                    int s_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(s_24);
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
  t = term_t_24;
  t = z_5(q_56, r_56, t);
  t = term_u_24;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_v_24;
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
