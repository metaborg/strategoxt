#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_Rule_3;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_RDecT_3;
Symbol sym_GenDynRules_1;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Overlay_3;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Hashtable_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Some_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_DynamicRules_1;
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
}
ATerm term_d_40;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_a_39;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_l_38;
ATerm term_f_38;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_g_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_m_34;
ATerm term_j_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_n_29;
ATerm term_l_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_w_18;
ATerm term_c_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_o_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_f_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Defined_2, term_s_17, term_t_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Defined_2, term_f_29, term_l_29);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Defined_2, term_c_31, term_t_17);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_l_35);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_35);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_q_35, term_o_14);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_j_36);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_c_37);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_y_35, term_z_35);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__2, term_r_37, term_o_14);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym__2, term_u_37, term_o_14);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym__2, term_c_37, term_o_14);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym__3, term_y_35, term_z_35, (ATerm) ATempty);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_r_37);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym__2, term_m_39, term_o_14);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm p_119 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm z_86 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm y_86 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm x_86 (ATerm), ATerm t);
static ATerm p_7 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm k_89 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm q_7 (ATerm l_24, ATerm m_24, ATerm n_24, ATerm t);
static ATerm n_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm r_7 (ATerm f_24, ATerm j_24, ATerm h_24, ATerm t);
static ATerm e_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm s_7 (ATerm z_23, ATerm d_24, ATerm b_24, ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm t_7 (ATerm x_22, ATerm y_22, ATerm z_22, ATerm b_23, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm u_7 (ATerm i_21, ATerm j_21, ATerm h_21, ATerm t);
static ATerm c_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm v_7 (ATerm g_27, ATerm f_27, ATerm t);
static ATerm w_7 (ATerm c_30, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm v_21, ATerm t);
ATerm tboundin_3_0 (ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm z_7 (ATerm f_101 (ATerm), ATerm a_51, ATerm z_50, ATerm t);
ATerm foldr_3_0 (ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm t);
static ATerm a_8 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm e_51, ATerm d_51, ATerm t);
static ATerm b_8 (ATerm a_101 (ATerm), ATerm y_50, ATerm x_50, ATerm t);
ATerm at_end_1_0 (ATerm l_97 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_56 (ATerm n_55, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm g_8 (ATerm y_638, ATerm d_639, ATerm p_62, ATerm t);
ATerm while_not_2_0 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm t);
ATerm for_3_0 (ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm j_61 (ATerm p_58, ATerm r_58, ATerm y_58, ATerm t);
static ATerm u_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm n_10 (ATerm t);
ATerm free_vars_3_0 (ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm q_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm o_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm i_8 (ATerm i_87 (ATerm), ATerm z_24, ATerm x_24, ATerm t);
static ATerm x_10 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm j_8 (ATerm i_26, ATerm j_26, ATerm t);
ATerm end_scope_1_0 (ATerm f_87 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_87 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm t);
static ATerm b_11 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm k_8 (ATerm q_26, ATerm r_26, ATerm s_26, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm n_8 (ATerm o_26, ATerm p_26, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm p_8 (ATerm o_36, ATerm p_36, ATerm t);
static ATerm q_8 (ATerm a_42, ATerm b_42, ATerm t);
static ATerm s_8 (ATerm r_95 (ATerm), ATerm g_350, ATerm g_42, ATerm t);
static ATerm r_8 (ATerm w_41, ATerm x_41, ATerm t);
static ATerm k_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm n_11 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm b_111 (ATerm), ATerm t);
static ATerm w_76 (ATerm q_76, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_8 (ATerm c_42, ATerm t);
static ATerm u_8 (ATerm h_35, ATerm i_35, ATerm t);
static ATerm v_8 (ATerm q_36, ATerm r_36, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_78 (ATerm g_77, ATerm t);
static ATerm i_78 (ATerm k_77, ATerm l_77, ATerm m_77, ATerm t);
static ATerm j_78 (ATerm u_77, ATerm v_77, ATerm w_77, ATerm t);
static ATerm w_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_97 (ATerm), ATerm t);
static ATerm b_9 (ATerm w_27, ATerm x_27, ATerm t);
ATerm if_verbose2_1_0 (ATerm n_119 (ATerm), ATerm t);
static ATerm o_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_9 (ATerm t_56, ATerm u_56, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_9 (ATerm d_26, ATerm e_26, ATerm c_26, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_8 (ATerm g_43, ATerm h_43, ATerm t);
ATerm foldr_2_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_119 (ATerm), ATerm t);
static ATerm z_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_13 (ATerm t);
ATerm need_help_1_0 (ATerm z_111 (ATerm), ATerm t);
static ATerm f_9 (ATerm v_29, ATerm w_29, ATerm x_29, ATerm t);
static ATerm g_9 (ATerm y_29, ATerm z_29, ATerm t);
ATerm lookup_table_0_1 (ATerm p_27, ATerm t);
ATerm new_hashtable_0_2 (ATerm d_30, ATerm e_30, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_8 (ATerm a_30, ATerm b_30, ATerm t);
static ATerm a_9 (ATerm f_30, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm u_96 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm e_115 (ATerm), ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
ATerm parse_options_1_0 (ATerm d_115 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm b_112 (ATerm), ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm t);
static ATerm a_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
ATerm iowrap_3_0 (ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm t);
static ATerm n_14 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,j_0 = NULL,m_0 = NULL,u_0 = NULL,v_0 = NULL;
  a_0 = t;
  t = term_o_14;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_q_14;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_14), j_0), term_r_14);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_t_14;
  m_0 = t;
  t = SSL_exit(m_0);
  t = a_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm p_119 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL;
        t = term_c_15;
        a_1 = t;
        t = term_f_15;
        b_1 = t;
        t = term_h_15;
        t = b_9(a_1, b_1, t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_i_15);
        t = geq_0_0(t);
        t = x_0;
        t = p_119(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = x_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm z_86 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,t_6 = NULL;
  static ATerm o_0 (ATerm t)
  {
    ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,v_6 = NULL,u_6 = NULL;
    y_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        t_1 = ATgetArgument(t, 0);
        u_1 = ATgetArgument(t, 1);
        v_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_1);
    s_1 = t;
    t = t_1;
    t = z_86(t);
    w_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_1, u_1, v_1);
    u_6 = t;
    t = SSLsetAnnotations(u_6, s_1);
    x_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        k_1 = ATgetArgument(t, 0);
        l_1 = ATgetArgument(t, 1);
        m_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_1);
    j_1 = t;
    t = l_1;
    t = z_86(t);
    q_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_1, q_1, m_1);
    v_6 = t;
    t = SSLsetAnnotations(v_6, j_1);
    return(t);
  }
  static ATerm p_0 (ATerm t)
  {
    ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,x_6 = NULL;
    e_2 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        a_2 = ATgetArgument(t, 0);
        b_2 = ATgetArgument(t, 1);
        c_2 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_2);
    z_1 = t;
    t = c_2;
    t = z_86(t);
    d_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, a_2, b_2, d_2);
    x_6 = t;
    t = SSLsetAnnotations(x_6, z_1);
    return(t);
  }
  h_1 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      e_1 = ATgetArgument(t, 0);
      f_1 = ATgetArgument(t, 1);
      g_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_1);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_1, f_1, g_1);
  t_6 = t;
  t = SSLsetAnnotations(t_6, d_1);
  t = abstract_choice_2_0(o_0, p_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,o_7 = NULL;
  static ATerm q_0 (ATerm t)
  {
    ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,x_7 = NULL;
    n_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        k_2 = ATgetArgument(t, 0);
        l_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_2);
    j_2 = t;
    t = k_2;
    t = y_86(t);
    m_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_2, l_2);
    x_7 = t;
    t = SSLsetAnnotations(x_7, j_2);
    return(t);
  }
  static ATerm r_0 (ATerm t)
  {
    ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,t_2 = NULL,u_2 = NULL,y_7 = NULL;
    u_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        q_2 = ATgetArgument(t, 0);
        r_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_2);
    p_2 = t;
    t = r_2;
    t = y_86(t);
    t_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_2, t_2);
    y_7 = t;
    t = SSLsetAnnotations(y_7, p_2);
    return(t);
  }
  i_2 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      g_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_2);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, g_2, h_2);
  o_7 = t;
  t = SSLsetAnnotations(o_7, f_2);
  t = abstract_choice_2_0(q_0, r_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,y_2 = NULL,b_3 = NULL,d_3 = NULL,f_3 = NULL,j_3 = NULL;
  f_3 = t;
  t = save_MarkVar_0_0(t);
  v_2 = t;
  t = f_3;
  t = a_87(t);
  d_3 = t;
  t = save_MarkVar_0_0(t);
  y_2 = t;
  t = term_j_15;
  t = table_destroy_0_0(t);
  t = term_j_15;
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_15, v_2);
  t = v_7(j_3, v_2, t);
  t = d_3;
  t = b_87(t);
  b_3 = t;
  t = y_2;
  t = isect_MarkVar_0_0(t);
  t = b_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,f_8 = NULL;
  static ATerm y_0 (ATerm t)
  {
    ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,h_8 = NULL;
    u_3 = t;
    if(match_cons(t, sym_Choice_2))
      {
        q_3 = ATgetArgument(t, 0);
        r_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_3);
    p_3 = t;
    t = q_3;
    t = x_86(t);
    t_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, t_3, r_3);
    h_8 = t;
    t = SSLsetAnnotations(h_8, p_3);
    return(t);
  }
  static ATerm c_1 (ATerm t)
  {
    ATerm v_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,l_8 = NULL;
    a_4 = t;
    if(match_cons(t, sym_Choice_2))
      {
        w_3 = ATgetArgument(t, 0);
        y_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_4);
    v_3 = t;
    t = y_3;
    t = x_86(t);
    z_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, w_3, z_3);
    l_8 = t;
    t = SSLsetAnnotations(l_8, v_3);
    return(t);
  }
  o_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      l_3 = ATgetArgument(t, 0);
      m_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_3);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, l_3, m_3);
  f_8 = t;
  t = SSLsetAnnotations(f_8, k_3);
  t = abstract_choice_2_0(y_0, c_1, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm b_4 = NULL,j_4 = NULL,l_4 = NULL,u_4 = NULL,b_5 = NULL,d_5 = NULL,e_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,k_9 = NULL,j_9 = NULL;
  j_4 = t;
  t = save_MarkVar_0_0(t);
  b_4 = t;
  t = j_4;
  if(match_cons(t, sym_Rec_2))
    {
      g_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_4);
  e_5 = t;
  t = h_5;
  t = mark_buv_0_0(t);
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, g_5, i_5);
  j_9 = t;
  t = SSLsetAnnotations(j_9, e_5);
  t = b_4;
  t = isect_MarkVar_0_0(t);
  t = j_4;
  if(match_cons(t, sym_Rec_2))
    {
      u_4 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_4);
  l_4 = t;
  t = b_5;
  t = mark_buv_0_0(t);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, u_4, d_5);
  k_9 = t;
  t = SSLsetAnnotations(k_9, l_4);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm k_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,y_5 = NULL,a_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,m_6 = NULL,b_10 = NULL,x_9 = NULL,t_9 = NULL;
  m_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
      j_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_6);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, h_6, i_6, j_6);
  t_9 = t;
  t = SSLsetAnnotations(t_9, g_6);
  k_6 = t;
  t = save_MarkVar_0_0(t);
  k_5 = t;
  t = k_6;
  if(match_cons(t, sym_PrimT_3))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
      y_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_6);
  t_5 = t;
  t = y_5;
  t = map_1_0(c_3, t);
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, u_5, v_5, a_6);
  x_9 = t;
  t = SSLsetAnnotations(x_9, t_5);
  f_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
      q_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_6);
  m_5 = t;
  t = o_5;
  t = mark_buv_0_0(t);
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, n_5, r_5, q_5);
  b_10 = t;
  t = SSLsetAnnotations(b_10, m_5);
  s_5 = t;
  t = k_5;
  t = isect_MarkVar_0_0(t);
  t = s_5;
  return(t);
}
ATerm alltd_1_0 (ATerm k_89 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t)
  {
    ATerm k_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_89(t);
        LocalPopChoice(m_15);
      }
    else
      {
        t = k_15;
        t = SRTS_all(n_6, t);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,u_10 = NULL,v_10 = NULL;
  q_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      u_10 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
      p_10 = ATgetArgument(t, 2);
      {
        ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL,i_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,o_2 = NULL,s_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,h_3 = NULL,k_10 = NULL,j_10 = NULL,i_10 = NULL;
        t = SSLgetAnnotations(q_10);
        a_3 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, u_10, v_10, p_10);
        i_10 = t;
        t = SSLsetAnnotations(i_10, a_3);
        h_3 = t;
        t = save_MarkVar_0_0(t);
        s_0 = t;
        t = h_3;
        if(match_cons(t, sym_CallT_3))
          {
            o_2 = ATgetArgument(t, 0);
            s_2 = ATgetArgument(t, 1);
            w_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_3);
        r_1 = t;
        t = w_2;
        t = map_1_0(e_3, t);
        x_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, o_2, s_2, x_2);
        j_10 = t;
        t = SSLsetAnnotations(j_10, r_1);
        z_2 = t;
        if(match_cons(t, sym_CallT_3))
          {
            w_0 = ATgetArgument(t, 0);
            i_1 = ATgetArgument(t, 1);
            n_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_2);
        t_0 = t;
        t = i_1;
        t = mark_buv_0_0(t);
        o_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, w_0, o_1, n_1);
        k_10 = t;
        t = SSLsetAnnotations(k_10, t_0);
        p_1 = t;
        t = s_0;
        t = isect_MarkVar_0_0(t);
        t = p_1;
      }
    }
  else
    {
      ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,r_4 = NULL,m_10 = NULL,l_10 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          u_10 = ATgetArgument(t, 0);
          v_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_10);
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, u_10, v_10);
      l_10 = t;
      t = SSLsetAnnotations(l_10, o_4);
      r_4 = t;
      t = save_MarkVar_0_0(t);
      g_4 = t;
      t = r_4;
      if(match_cons(t, sym_Call_2))
        {
          i_4 = ATgetArgument(t, 0);
          k_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_4);
      h_4 = t;
      t = k_4;
      t = mark_buv_0_0(t);
      m_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, i_4, m_4);
      m_10 = t;
      t = SSLsetAnnotations(m_10, h_4);
      n_4 = t;
      t = g_4;
      t = isect_MarkVar_0_0(t);
      t = n_4;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm q_7 (ATerm l_24, ATerm m_24, ATerm n_24, ATerm t)
{
  ATerm z_10 = NULL;
  static ATerm i_3 (ATerm t)
  {
    t = m_24;
    t = map_1_0(IntroduceBound_0_0, t);
    t = n_24;
    t = mark_build_vars_0_0(t);
    if(((z_10 != NULL) && (z_10 != t)))
      _fail(t);
    else
      z_10 = t;
    return(t);
  }
  t = scope_2_0(g_3, i_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, l_24, m_24, not_null(z_10));
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm q_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_11);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
        ATerm p_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_15);
          }
        else
          {
            t = p_15;
            {
              ATerm t_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_11 = ATgetArgument(t, 0);
                      t_11 = ATgetArgument(t, 1);
                      u_11 = ATgetArgument(t, 2);
                      v_11 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_11;
                  t = map_1_0(d_4, t);
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = t_15;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm p_12 = NULL;
  ATerm a_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_12 = ATgetArgument(t, 0);
          {
            ATerm e_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_16);
      t = p_12;
    }
  else
    {
      t = a_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_12;
    }
  return(t);
}
static ATerm r_7 (ATerm f_24, ATerm j_24, ATerm h_24, ATerm t)
{
  ATerm i_11 = NULL,m_11 = NULL,p_11 = NULL;
  static ATerm s_3 (ATerm t)
  {
    t = f_24;
    t = free_vars_3_0(x_3, c_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = f_24;
    t = mark_match_vars_0_0(t);
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = h_24;
    t = mark_buv_0_0(t);
    if(((m_11 != NULL) && (m_11 != t)))
      _fail(t);
    else
      m_11 = t;
    t = j_24;
    t = mark_build_vars_0_0(t);
    if(((p_11 != NULL) && (p_11 != t)))
      _fail(t);
    else
      p_11 = t;
    return(t);
  }
  t = scope_2_0(n_3, s_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_11), not_null(p_11), not_null(m_11)));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm x_12 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_12);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            {
              ATerm j_16 = t;
              int l_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_13 = NULL,d_13 = NULL,i_13 = NULL,j_13 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_13 = ATgetArgument(t, 0);
                      d_13 = ATgetArgument(t, 1);
                      i_13 = ATgetArgument(t, 2);
                      j_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_13;
                  t = map_1_0(s_4, t);
                  LocalPopChoice(l_16);
                }
              else
                {
                  t = j_16;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm q_13 = NULL;
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_13 = ATgetArgument(t, 0);
          {
            ATerm o_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_16);
      t = q_13;
    }
  else
    {
      t = m_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_13;
    }
  return(t);
}
static ATerm s_7 (ATerm z_23, ATerm d_24, ATerm b_24, ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  static ATerm f_4 (ATerm t)
  {
    t = z_23;
    t = free_vars_3_0(p_4, q_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = z_23;
    t = mark_match_vars_0_0(t);
    if(((u_12 != NULL) && (u_12 != t)))
      _fail(t);
    else
      u_12 = t;
    t = b_24;
    t = mark_buv_0_0(t);
    if(((v_12 != NULL) && (v_12 != t)))
      _fail(t);
    else
      v_12 = t;
    t = d_24;
    t = mark_build_vars_0_0(t);
    if(((w_12 != NULL) && (w_12 != t)))
      _fail(t);
    else
      w_12 = t;
    return(t);
  }
  t = scope_2_0(e_4, f_4, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_12), not_null(w_12), not_null(v_12)));
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm v_15 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_15);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
            {
              ATerm t_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,c_16 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_15 = ATgetArgument(t, 0);
                      y_15 = ATgetArgument(t, 1);
                      z_15 = ATgetArgument(t, 2);
                      c_16 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_15;
                  t = map_1_0(w_4, t);
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = t_16;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm k_16 = NULL;
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_16 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_16);
      t = k_16;
    }
  else
    {
      t = w_16;
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
static ATerm x_4 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm f_18 = NULL;
  ATerm a_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_18 = ATgetArgument(t, 0);
          {
            ATerm e_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_17);
      t = f_18;
    }
  else
    {
      t = a_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_18;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm n_18 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_18);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            {
              ATerm k_17 = t;
              int l_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_18 = ATgetArgument(t, 0);
                      q_18 = ATgetArgument(t, 1);
                      r_18 = ATgetArgument(t, 2);
                      s_18 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_18;
                  t = map_1_0(f_5, t);
                  LocalPopChoice(l_17);
                }
              else
                {
                  t = k_17;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm g_19 = NULL;
  ATerm m_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_19 = ATgetArgument(t, 0);
          {
            ATerm q_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_17);
      t = g_19;
    }
  else
    {
      t = m_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_19;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,p_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      p_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
      v_14 = ATgetArgument(t, 2);
      {
        ATerm d_15 = NULL,l_15 = NULL,r_15 = NULL,u_15 = NULL;
        t = v_14;
        if(match_cons(t, sym_Rule_3))
          {
            i_14 = ATgetArgument(t, 0);
            j_14 = ATgetArgument(t, 1);
            k_14 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = v_14;
        t = free_vars_3_0(t_4, v_4, tboundin_3_0, t);
        d_15 = t;
        {
          static ATerm y_4 (ATerm t)
          {
            t = d_15;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = i_14;
            t = mark_match_vars_0_0(t);
            if(((l_15 != NULL) && (l_15 != t)))
              _fail(t);
            else
              l_15 = t;
            t = k_14;
            t = mark_buv_0_0(t);
            if(((r_15 != NULL) && (r_15 != t)))
              _fail(t);
            else
              r_15 = t;
            t = j_14;
            t = mark_build_vars_0_0(t);
            if(((u_15 != NULL) && (u_15 != t)))
              _fail(t);
            else
              u_15 = t;
            return(t);
          }
          t = scope_2_0(x_4, y_4, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, p_14, u_14, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_15), not_null(u_15), not_null(r_15)));
      }
    }
  else
    {
      ATerm y_16 = NULL,d_17 = NULL,f_17 = NULL,n_17 = NULL,z_17 = NULL,b_18 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          p_14 = ATgetArgument(t, 0);
          u_14 = ATgetArgument(t, 1);
          v_14 = ATgetArgument(t, 2);
          w_14 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = w_14;
      if(match_cons(t, sym_Rule_3))
        {
          x_14 = ATgetArgument(t, 0);
          y_14 = ATgetArgument(t, 1);
          z_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_14;
      t = map_1_0(z_4, t);
      y_16 = t;
      t = w_14;
      t = free_vars_3_0(a_5, c_5, tboundin_3_0, t);
      b_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_18, y_16);
      t = diff_0_0(t);
      d_17 = t;
      {
        static ATerm p_5 (ATerm t)
        {
          t = y_16;
          t = map_1_0(IntroduceBound_0_0, t);
          t = d_17;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = x_14;
          t = mark_match_vars_0_0(t);
          if(((f_17 != NULL) && (f_17 != t)))
            _fail(t);
          else
            f_17 = t;
          t = z_14;
          t = mark_buv_0_0(t);
          if(((n_17 != NULL) && (n_17 != t)))
            _fail(t);
          else
            n_17 = t;
          t = y_14;
          t = mark_build_vars_0_0(t);
          if(((z_17 != NULL) && (z_17 != t)))
            _fail(t);
          else
            z_17 = t;
          return(t);
        }
        t = scope_2_0(j_5, p_5, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, p_14, u_14, v_14, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_17), not_null(z_17), not_null(n_17)));
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_19);
  k_19 = t;
  t = term_u_17;
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_19), term_u_17);
  t = i_8(w_5, k_19, l_19, t);
  t = j_19;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm u_19 = NULL;
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_19 = ATgetArgument(t, 0);
          {
            ATerm a_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_17);
      t = u_19;
    }
  else
    {
      t = v_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_19;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm t_7 (ATerm x_22, ATerm y_22, ATerm z_22, ATerm b_23, ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  t = z_22;
  t = map_1_0(x_5, t);
  p_19 = t;
  {
    static ATerm b_6 (ATerm t)
    {
      t = p_19;
      t = map_1_0(IntroduceBound_0_0, t);
      t = b_23;
      t = mark_buv_0_0(t);
      if(((q_19 != NULL) && (q_19 != t)))
        _fail(t);
      else
        q_19 = t;
      return(t);
    }
    t = scope_2_0(z_5, b_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_22, y_22, z_22, not_null(q_19));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,f_21 = NULL;
  w_20 = t;
  if(match_cons(t, sym__2))
    {
      x_20 = ATgetArgument(t, 0);
      c_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_21;
  if(match_cons(t, sym_Undefined_0))
    {
      t = x_20;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_c_18;
        }
      else
        {
          t = term_c_18;
        }
    }
  else
    {
      ATerm e_18 = t;
      int h_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm i_18 = ATgetArgument(t, 0);
              f_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(h_18);
          t = x_20;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_c_18;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  a_21 = ATgetArgument(t, 0);
                  b_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm m_18 = t;
                int o_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, b_21, f_21);
                    {
                      ATerm v_18 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm l_5 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              l_5 = ATgetArgument(t, 0);
                              if((l_5 != ATgetArgument(t, 1)))
                                {
                                  _fail(ATgetArgument(t, 1));
                                }
                            }
                          else
                            _fail(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = v_18;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, a_21, term_w_18);
                    LocalPopChoice(o_18);
                  }
                else
                  {
                    t = m_18;
                    t = f_21;
                    if((b_21 != t))
                      {
                        _fail(t);
                      }
                    t = x_20;
                  }
              }
            }
        }
      else
        {
          t = e_18;
          t = x_20;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_c_18;
        }
    }
  return(t);
}
static ATerm u_7 (ATerm i_21, ATerm j_21, ATerm h_21, ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,w_21 = NULL;
  t = term_j_15;
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_15, i_21);
  t = b_9(w_21, i_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_21 = ATgetFirst((ATermList) t);
      {
        ATerm x_18 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_21, q_21);
  t = CompareEntries_0_0(t);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_21, (ATerm) ATinsert(CheckATermList(h_21), r_21));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm m_22 = NULL,q_22 = NULL,c_25 = NULL,m_25 = NULL,n_25 = NULL;
  n_25 = t;
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
      t = q_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_25 = ATgetFirst((ATermList) t);
          m_25 = (ATerm) ATgetNext((ATermList) t);
          t = c_25;
          {
            ATerm y_18 = t;
            int a_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm b_19 = ATgetArgument(t, 0);
                    ATerm h_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(a_19);
                t = m_22;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = n_25;
                  }
                else
                  {
                    ATerm i_19 = t;
                    int r_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_25;
                        t = u_7(m_22, c_25, m_25, t);
                        LocalPopChoice(r_19);
                      }
                    else
                      {
                        t = i_19;
                        t = n_25;
                      }
                  }
              }
            else
              {
                t = y_18;
                t = m_22;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = n_25;
                  }
                else
                  {
                    t = n_25;
                  }
              }
          }
        }
      else
        {
          t = m_22;
          if(match_cons(t, sym_Scopes_0))
            {
              t = n_25;
            }
          else
            {
              t = n_25;
            }
        }
    }
  else
    {
      t = n_25;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm h_22 = NULL,l_22 = NULL;
  t = map_1_0(c_6, t);
  h_22 = t;
  t = term_j_15;
  t = table_destroy_0_0(t);
  t = term_j_15;
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_15, h_22);
  t = v_7(l_22, h_22, t);
  t = h_22;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm v_26 = NULL,y_26 = NULL,a_27 = NULL;
  a_27 = t;
  {
    ATerm t_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm x_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_19);
        t = a_27;
      }
    else
      {
        t = t_19;
        {
          ATerm y_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm a_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(z_19);
              t = a_27;
            }
          else
            {
              t = y_19;
              {
                ATerm b_20 = t;
                int c_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm d_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(c_20);
                    t = a_27;
                  }
                else
                  {
                    t = b_20;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm e_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = a_27;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  v_26 = t;
  t = a_27;
  t = SRTS_one(mark_buv_0_0, t);
  y_26 = t;
  t = v_26;
  t = isect_MarkVar_0_0(t);
  t = y_26;
  return(t);
}
static ATerm v_7 (ATerm g_27, ATerm f_27, ATerm t)
{
  static ATerm d_6 (ATerm t)
  {
    ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
    if(match_cons(t, sym__2))
      {
        m_27 = ATgetArgument(t, 0);
        n_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, g_27, m_27, n_27);
    t = lookup_table_0_1(g_27, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        o_27 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = f_9(m_27, n_27, o_27, t);
    t = (ATerm) ATmakeAppl(sym__3, g_27, m_27, n_27);
    return(t);
  }
  t = f_27;
  t = map_1_0(d_6, t);
  return(t);
}
static ATerm w_7 (ATerm c_30, ATerm t)
{
  t = SSL_hashtable_keys(c_30);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm c_28 = NULL,e_28 = NULL;
  static ATerm l_6 (ATerm t)
  {
    ATerm m_28 = NULL,o_28 = NULL;
    m_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_28), m_28);
    t = b_9(not_null(c_28), m_28, t);
    o_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_28, o_28);
    return(t);
  }
  if(((c_28 != NULL) && (c_28 != t)))
    _fail(t);
  else
    c_28 = t;
  t = lookup_table_0_1(c_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(e_28, t);
  t = map_1_0(l_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_j_15;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm v_21, ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm o_6 (ATerm t)
    {
      static ATerm j_30 (ATerm e_29, ATerm t)
      {
        ATerm g_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
        t = e_29;
        if(match_cons(t, sym__2))
          {
            ATerm f_20 = ATgetArgument(t, 0);
            g_29 = f_20;
            if(match_cons(f_20, sym_Var_1))
              {
                i_29 = ATgetArgument(f_20, 0);
              }
            else
              _fail(t);
            {
              ATerm g_20 = ATgetArgument(t, 1);
              if(((ATgetType(g_20) == AT_LIST) && !(ATisEmpty(g_20))))
                {
                  ATerm j_20 = ATgetFirst((ATermList) g_20);
                  if(match_cons(j_20, sym_Defined_2))
                    {
                      j_29 = ATgetArgument(j_20, 0);
                      {
                        ATerm k_20 = ATgetArgument(j_20, 1);
                        if((ATgetSymbol((ATermAppl) k_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  k_29 = (ATerm) ATgetNext((ATermList) g_20);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_21;
        {
          static ATerm r_6 (ATerm t)
          {
            if((i_29 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(r_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, g_29, (ATerm) ATinsert(CheckATermList(k_29), (ATerm) ATmakeAppl(sym_Defined_2, j_29, term_w_18)));
        return(t);
      }
      ATerm m_29 = NULL,o_29 = NULL;
      o_29 = t;
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                m_29 = ATgetArgument(t, 0);
                {
                  ATerm o_20 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(n_20);
            t = m_29;
            if(match_cons(t, sym_Scopes_0))
              {
                t = o_29;
              }
            else
              {
                ATerm p_20 = t;
                int q_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = j_30(o_29, t);
                    LocalPopChoice(q_20);
                  }
                else
                  {
                    t = p_20;
                    t = o_29;
                  }
              }
          }
        else
          {
            t = m_20;
            {
              ATerm r_20 = t;
              int t_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_30(o_29, t);
                  LocalPopChoice(t_20);
                }
              else
                {
                  t = r_20;
                  t = o_29;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(o_6, t);
  }
  x_28 = t;
  t = term_j_15;
  t = table_destroy_0_0(t);
  t = term_j_15;
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_15, x_28);
  t = v_7(y_28, x_28, t);
  t = x_28;
  return(t);
}
ATerm tboundin_3_0 (ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm o_120 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,i_38 = NULL,m_38 = NULL;
  i_38 = t;
  if(match_cons(t, sym_Scope_2))
    {
      m_38 = ATgetArgument(t, 0);
      c_38 = ATgetArgument(t, 1);
      {
        ATerm e_6 = NULL,p_6 = NULL,q_6 = NULL,d_18 = NULL;
        t = SSLgetAnnotations(i_38);
        e_6 = t;
        t = m_38;
        t = o_120(t);
        p_6 = t;
        t = c_38;
        t = m_120(t);
        q_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_6, q_6);
        d_18 = t;
        t = SSLsetAnnotations(d_18, e_6);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          m_38 = ATgetArgument(t, 0);
          c_38 = ATgetArgument(t, 1);
          d_38 = ATgetArgument(t, 2);
          {
            ATerm d_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,g_18 = NULL;
            t = SSLgetAnnotations(i_38);
            d_7 = t;
            t = m_38;
            t = o_120(t);
            l_7 = t;
            t = c_38;
            t = o_120(t);
            m_7 = t;
            t = d_38;
            t = o_120(t);
            n_7 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, l_7, m_7, n_7);
            g_18 = t;
            t = SSLsetAnnotations(g_18, d_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              m_38 = ATgetArgument(t, 0);
              c_38 = ATgetArgument(t, 1);
              d_38 = ATgetArgument(t, 2);
              e_38 = ATgetArgument(t, 3);
              {
                ATerm v_9 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,r_10 = NULL,z_18 = NULL;
                t = SSLgetAnnotations(i_38);
                v_9 = t;
                t = m_38;
                t = o_120(t);
                e_10 = t;
                t = c_38;
                t = o_120(t);
                f_10 = t;
                t = d_38;
                t = o_120(t);
                g_10 = t;
                t = e_38;
                t = m_120(t);
                r_10 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, e_10, f_10, g_10, r_10);
                z_18 = t;
                t = SSLsetAnnotations(z_18, v_9);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  m_38 = ATgetArgument(t, 0);
                  c_38 = ATgetArgument(t, 1);
                  d_38 = ATgetArgument(t, 2);
                  e_38 = ATgetArgument(t, 3);
                  {
                    ATerm j_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,a_12 = NULL,c_19 = NULL;
                    t = SSLgetAnnotations(i_38);
                    j_11 = t;
                    t = m_38;
                    t = o_120(t);
                    w_11 = t;
                    t = c_38;
                    t = o_120(t);
                    x_11 = t;
                    t = d_38;
                    t = o_120(t);
                    y_11 = t;
                    t = e_38;
                    t = m_120(t);
                    a_12 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, w_11, x_11, y_11, a_12);
                    c_19 = t;
                    t = SSLsetAnnotations(c_19, j_11);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      m_38 = ATgetArgument(t, 0);
                      {
                        ATerm o_12 = NULL,t_12 = NULL,d_19 = NULL;
                        t = SSLgetAnnotations(i_38);
                        o_12 = t;
                        t = m_38;
                        t = m_120(t);
                        t_12 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, t_12);
                        d_19 = t;
                        t = SSLsetAnnotations(d_19, o_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          m_38 = ATgetArgument(t, 0);
                          {
                            ATerm g_13 = NULL,s_13 = NULL,n_19 = NULL;
                            t = SSLgetAnnotations(i_38);
                            g_13 = t;
                            t = m_38;
                            t = m_120(t);
                            s_13 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_13);
                            n_19 = t;
                            t = SSLsetAnnotations(n_19, g_13);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              m_38 = ATgetArgument(t, 0);
                              {
                                ATerm z_13 = NULL,b_14 = NULL,o_19 = NULL;
                                t = SSLgetAnnotations(i_38);
                                z_13 = t;
                                t = m_38;
                                t = m_120(t);
                                b_14 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, b_14);
                                o_19 = t;
                                t = SSLsetAnnotations(o_19, z_13);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  m_38 = ATgetArgument(t, 0);
                                  {
                                    ATerm h_14 = NULL,m_14 = NULL,s_19 = NULL;
                                    t = SSLgetAnnotations(i_38);
                                    h_14 = t;
                                    t = m_38;
                                    t = m_120(t);
                                    m_14 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, m_14);
                                    s_19 = t;
                                    t = SSLsetAnnotations(s_19, h_14);
                                  }
                                }
                              else
                                {
                                  ATerm e_15 = NULL,g_15 = NULL,v_19 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      m_38 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(i_38);
                                  e_15 = t;
                                  t = m_38;
                                  t = m_120(t);
                                  g_15 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, g_15);
                                  v_19 = t;
                                  t = SSLsetAnnotations(v_19, e_15);
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
static ATerm s_6 (ATerm t)
{
  ATerm k_39 = NULL;
  ATerm v_20 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_39 = ATgetArgument(t, 0);
          {
            ATerm e_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_21);
      t = k_39;
    }
  else
    {
      t = v_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_39;
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm r_39 = NULL;
  ATerm g_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_39 = ATgetArgument(t, 0);
          {
            ATerm l_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_21);
      t = r_39;
    }
  else
    {
      t = g_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_39;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm c_39 = NULL;
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm o_21 = ATgetArgument(t, 0);
          ATerm u_21 = ATgetArgument(t, 1);
          c_39 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(n_21);
      t = c_39;
      t = map_1_0(s_6, t);
    }
  else
    {
      t = m_21;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm x_21 = ATgetArgument(t, 0);
          ATerm y_21 = ATgetArgument(t, 1);
          c_39 = ATgetArgument(t, 2);
          {
            ATerm z_21 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = c_39;
      t = map_1_0(w_6, t);
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm d_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_41);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            {
              ATerm k_22 = t;
              int n_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_41 = ATgetArgument(t, 0);
                      k_41 = ATgetArgument(t, 1);
                      l_41 = ATgetArgument(t, 2);
                      m_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_41;
                  t = map_1_0(a_7, t);
                  LocalPopChoice(n_22);
                }
              else
                {
                  t = k_22;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm d_42 = NULL;
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_42 = ATgetArgument(t, 0);
          {
            ATerm s_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_22);
      t = d_42;
    }
  else
    {
      t = o_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_42;
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm l_42 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_42);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm w_22 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_23);
          }
        else
          {
            t = w_22;
            {
              ATerm d_23 = t;
              int e_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_42 = ATgetArgument(t, 0);
                      t_42 = ATgetArgument(t, 1);
                      u_42 = ATgetArgument(t, 2);
                      v_42 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_42;
                  t = map_1_0(e_7, t);
                  LocalPopChoice(e_23);
                }
              else
                {
                  t = d_23;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm o_43 = NULL;
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_43 = ATgetArgument(t, 0);
          {
            ATerm i_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_23);
      t = o_43;
    }
  else
    {
      t = f_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_43;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm v_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_43);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      {
        ATerm m_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_23);
          }
        else
          {
            t = m_23;
            {
              ATerm o_23 = t;
              int q_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,b_44 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_43 = ATgetArgument(t, 0);
                      y_43 = ATgetArgument(t, 1);
                      z_43 = ATgetArgument(t, 2);
                      b_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_43;
                  t = map_1_0(h_7, t);
                  LocalPopChoice(q_23);
                }
              else
                {
                  t = o_23;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm z_44 = NULL;
  ATerm r_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_44 = ATgetArgument(t, 0);
          {
            ATerm a_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_23);
      t = z_44;
    }
  else
    {
      t = r_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_44;
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm f_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_45);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm c_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_24);
    }
  else
    {
      t = c_24;
      {
        ATerm i_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_24);
          }
        else
          {
            t = i_24;
            {
              ATerm w_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_45 = NULL,s_45 = NULL,w_45 = NULL,a_46 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_45 = ATgetArgument(t, 0);
                      s_45 = ATgetArgument(t, 1);
                      w_45 = ATgetArgument(t, 2);
                      a_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_45;
                  t = map_1_0(k_7, t);
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = w_24;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm v_46 = NULL;
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_46 = ATgetArgument(t, 0);
          {
            ATerm d_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_25);
      t = v_46;
    }
  else
    {
      t = a_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_46;
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm f_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_47);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            {
              ATerm i_25 = t;
              int j_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_47 = ATgetArgument(t, 0);
                      i_47 = ATgetArgument(t, 1);
                      j_47 = ATgetArgument(t, 2);
                      k_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_47;
                  t = map_1_0(e_8, t);
                  LocalPopChoice(j_25);
                }
              else
                {
                  t = i_25;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm z_47 = NULL;
  ATerm l_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_47 = ATgetArgument(t, 0);
          {
            ATerm p_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_25);
      t = z_47;
    }
  else
    {
      t = l_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_47;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm b_41 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      b_41 = ATgetArgument(t, 0);
      t = b_41;
      t = free_vars_3_0(y_6, z_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          b_41 = ATgetArgument(t, 0);
          t = b_41;
          t = free_vars_3_0(b_7, c_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              b_41 = ATgetArgument(t, 0);
              t = b_41;
              t = free_vars_3_0(f_7, g_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_41 = ATgetArgument(t, 0);
                  t = b_41;
                  t = free_vars_3_0(i_7, j_7, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      b_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = b_41;
                  t = free_vars_3_0(c_8, d_8, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm y_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_48);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm q_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_25);
    }
  else
    {
      t = q_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            {
              ATerm v_25 = t;
              int w_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL,g_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_49 = ATgetArgument(t, 0);
                      d_49 = ATgetArgument(t, 1);
                      e_49 = ATgetArgument(t, 2);
                      g_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_49;
                  t = map_1_0(y_8, t);
                  LocalPopChoice(w_25);
                }
              else
                {
                  t = v_25;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm s_49 = NULL;
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_49 = ATgetArgument(t, 0);
          {
            ATerm z_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_25);
      t = s_49;
    }
  else
    {
      t = x_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_49;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm n_48 = NULL,t_48 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      t_48 = ATgetArgument(t, 0);
      t = t_48;
      if(match_cons(t, sym_Rule_3))
        {
          n_48 = ATgetArgument(t, 0);
          {
            ATerm a_26 = ATgetArgument(t, 1);
          }
          {
            ATerm b_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_48;
      t = free_vars_3_0(m_8, o_8, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          t_48 = ATgetArgument(t, 0);
          {
            ATerm g_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_48;
    }
  return(t);
}
static ATerm z_7 (ATerm f_101 (ATerm), ATerm a_51, ATerm z_50, ATerm t)
{
  static ATerm t_51 (ATerm t)
  {
    ATerm b_51 = NULL,c_51 = NULL,g_51 = NULL;
    b_51 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_50;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_51 = ATgetFirst((ATermList) t);
            g_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_51;
              {
                static ATerm d_9 (ATerm t)
                {
                  t = z_50;
                  return(t);
                }
                t = a_8(f_101, d_9, c_51, g_51, t);
              }
              t = t_51(t);
              LocalPopChoice(k_26);
            }
          else
            {
              t = h_26;
              {
                ATerm q_15 = NULL,b_16 = NULL,s_20 = NULL;
                t = SSLgetAnnotations(b_51);
                q_15 = t;
                t = g_51;
                t = t_51(t);
                b_16 = t;
                t = (ATerm) ATinsert(CheckATermList(b_16), c_51);
                s_20 = t;
                t = SSLsetAnnotations(s_20, q_15);
              }
            }
        }
      }
    return(t);
  }
  t = a_51;
  t = t_51(t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  y_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_51;
      t = k_104(t);
    }
  else
    {
      ATerm g_52 = NULL,h_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_51 = ATgetFirst((ATermList) t);
          a_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_51;
      t = m_104(t);
      g_52 = t;
      t = a_52;
      t = foldr_3_0(k_104, l_104, m_104, t);
      h_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_52, h_52);
      t = l_104(t);
    }
  return(t);
}
static ATerm a_8 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm e_51, ATerm d_51, ATerm t)
{
  t = j_101(t);
  {
    static ATerm h_9 (ATerm t)
    {
      ATerm p_52 = NULL;
      p_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_51, p_52);
      t = i_101(t);
      return(t);
    }
    t = fetch_1_0(h_9, t);
  }
  t = d_51;
  return(t);
}
static ATerm b_8 (ATerm a_101 (ATerm), ATerm y_50, ATerm x_50, ATerm t)
{
  static ATerm t_53 (ATerm t)
  {
    ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL;
    m_53 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_53;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_53 = ATgetFirst((ATermList) t);
            o_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_53;
              {
                static ATerm i_9 (ATerm t)
                {
                  t = x_50;
                  return(t);
                }
                t = a_8(a_101, i_9, n_53, o_53, t);
              }
              t = t_53(t);
              LocalPopChoice(m_26);
            }
          else
            {
              t = l_26;
              {
                ATerm u_16 = NULL,b_17 = NULL,u_20 = NULL;
                t = SSLgetAnnotations(m_53);
                u_16 = t;
                t = o_53;
                t = t_53(t);
                b_17 = t;
                t = (ATerm) ATinsert(CheckATermList(b_17), n_53);
                u_20 = t;
                t = SSLsetAnnotations(u_20, u_16);
              }
            }
        }
      }
    return(t);
  }
  t = y_50;
  t = t_53(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  static ATerm d_55 (ATerm t)
  {
    ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
    y_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_54 = ATgetFirst((ATermList) t);
        x_54 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_17 = NULL,r_17 = NULL,z_20 = NULL;
          t = SSLgetAnnotations(y_54);
          o_17 = t;
          t = x_54;
          t = d_55(t);
          r_17 = t;
          t = (ATerm) ATinsert(CheckATermList(r_17), w_54);
          z_20 = t;
          t = SSLsetAnnotations(z_20, o_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_54;
        t = l_97(t);
      }
    return(t);
  }
  t = d_55(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
  y_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_53;
    }
  else
    {
      static ATerm l_9 (ATerm t)
      {
        t = not_null(a_54);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_53 = ATgetFirst((ATermList) t);
          if(((a_54 != NULL) && (a_54 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_53;
      t = at_end_1_0(l_9, t);
    }
  return(t);
}
static ATerm b_56 (ATerm n_55, ATerm t)
{
  ATerm p_55 = NULL;
  t = SSL_explode_term(n_55);
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_55;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL;
  w_55 = t;
  if(match_cons(t, sym__2))
    {
      u_55 = ATgetArgument(t, 0);
      v_55 = ATgetArgument(t, 1);
      {
        ATerm u_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_9 (ATerm t)
            {
              t = v_55;
              return(t);
            }
            t = u_55;
            t = at_end_1_0(m_9, t);
            LocalPopChoice(w_26);
          }
        else
          {
            t = u_26;
            t = b_56(w_55, t);
          }
      }
    }
  else
    {
      t = b_56(w_55, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm t)
{
  static ATerm r_56 (ATerm t)
  {
    ATerm x_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_98(t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = x_26;
        {
          ATerm c_56 = NULL,f_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,p_56 = NULL,b_22 = NULL;
          t = z_98(t);
          p_56 = t;
          if(match_cons(t, sym__2))
            {
              f_56 = ATgetArgument(t, 0);
              h_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_56);
          c_56 = t;
          t = f_56;
          t = b_99(t);
          i_56 = t;
          t = h_56;
          t = r_56(t);
          j_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_56, j_56);
          b_22 = t;
          t = SSLsetAnnotations(b_22, c_56);
          t = a_99(t);
        }
      }
    return(t);
  }
  t = r_56(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      if(((ATgetType(b_27) != AT_LIST) || !(ATisEmpty(b_27))))
        _fail(t);
      {
        ATerm c_27 = ATgetArgument(t, 1);
        if(((ATgetType(c_27) != AT_LIST) || !(ATisEmpty(c_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm f_57 = NULL,i_57 = NULL,k_57 = NULL,l_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(((ATgetType(d_27) == AT_LIST) && !(ATisEmpty(d_27))))
        {
          f_57 = ATgetFirst((ATermList) d_27);
          i_57 = (ATerm) ATgetNext((ATermList) d_27);
        }
      else
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(((ATgetType(e_27) == AT_LIST) && !(ATisEmpty(e_27))))
          {
            k_57 = ATgetFirst((ATermList) e_27);
            l_57 = (ATerm) ATgetNext((ATermList) e_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_57, k_57), (ATerm) ATmakeAppl(sym__2, i_57, l_57));
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL;
  if(match_cons(t, sym__2))
    {
      m_57 = ATgetArgument(t, 0);
      n_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_57), m_57);
  return(t);
}
static ATerm g_8 (ATerm y_638, ATerm d_639, ATerm p_62, ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL;
  t = SSL_explode_term(d_639);
  if(match_cons(t, sym__2))
    {
      a_57 = ATgetArgument(t, 0);
      c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_638);
  if(match_cons(t, sym__2))
    {
      if((a_57 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_57, c_57);
  t = genzip_4_0(n_9, o_9, p_9, _id, t);
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_57, p_62);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm t)
{
  static ATerm r_57 (ATerm t)
  {
    ATerm h_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_94(t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = h_27;
        t = u_94(t);
        t = r_57(t);
      }
    return(t);
  }
  t = r_57(t);
  return(t);
}
ATerm for_3_0 (ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm t)
{
  t = w_94(t);
  t = while_not_2_0(x_94, y_94, t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm e_58 = NULL;
  e_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_58);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm i_58 = NULL,k_58 = NULL,l_58 = NULL,o_58 = NULL,y_27 = NULL;
  o_58 = t;
  if(match_cons(t, sym__2))
    {
      k_58 = ATgetArgument(t, 0);
      l_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_58);
  i_58 = t;
  t = l_58;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_58, l_58);
  y_27 = t;
  t = SSLsetAnnotations(y_27, i_58);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,h_60 = NULL,m_60 = NULL,n_60 = NULL;
  b_60 = t;
  if(match_cons(t, sym__2))
    {
      c_60 = ATgetArgument(t, 0);
      h_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_60 = ATgetFirst((ATermList) t);
      n_60 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_61(c_60, h_60, b_60, t);
            LocalPopChoice(q_27);
          }
        else
          {
            t = k_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_60), m_60), n_60);
          }
      }
    }
  else
    {
      t = j_61(c_60, h_60, b_60, t);
    }
  return(t);
}
static ATerm j_61 (ATerm p_58, ATerm r_58, ATerm y_58, ATerm t)
{
  ATerm z_58 = NULL,e_59 = NULL,z_27 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL;
  t = SSLgetAnnotations(y_58);
  z_58 = t;
  t = r_58;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_59 = ATgetFirst((ATermList) t);
      u_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_59;
  if(match_cons(t, sym__2))
    {
      s_59 = ATgetArgument(t, 0);
      t_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_59;
        if((s_59 != t))
          {
            _fail(t);
          }
        t = u_59;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        t = r_58;
        t = g_8(s_59, t_59, u_59, t);
      }
  }
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_58, e_59);
  z_27 = t;
  t = SSLsetAnnotations(z_27, z_58);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm i_61 = NULL;
  if(match_cons(t, sym__2))
    {
      i_61 = ATgetArgument(t, 0);
      if((i_61 != ATgetArgument(t, 1)))
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
  ATerm t_27 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(q_9, r_9, s_9, t);
      LocalPopChoice(b_28);
    }
  else
    {
      t = t_27;
      {
        ATerm v_60 = NULL,z_60 = NULL,b_61 = NULL;
        v_60 = t;
        if(match_cons(t, sym__2))
          {
            z_60 = ATgetArgument(t, 0);
            b_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_60;
        t = b_8(u_9, z_60, b_61, t);
      }
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(c_10, j_18, k_18, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm l_18 = NULL;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      if((l_18 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(n_10, e_19, f_19, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm m_19 = NULL;
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      if((m_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm q_117 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm v_62 (ATerm t)
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_117(t);
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        {
          ATerm h_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_61 = NULL,m_61 = NULL,x_17 = NULL,y_17 = NULL;
              l_61 = t;
              t = p_117(t);
              m_61 = t;
              t = l_61;
              {
                static ATerm w_9 (ATerm t)
                {
                  ATerm s_61 = NULL;
                  t = v_62(t);
                  s_61 = t;
                  t = (ATerm) ATmakeAppl(sym__2, s_61, m_61);
                  t = diff_0_0(t);
                  return(t);
                }
                t = q_117(w_9, v_62, y_9, t);
              }
              y_17 = t;
              t = SSL_explode_term(y_17);
              if(match_cons(t, sym__2))
                {
                  ATerm j_28 = ATgetArgument(t, 0);
                  x_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_17;
              t = foldr_3_0(z_9, a_10, _id, t);
              LocalPopChoice(i_28);
            }
          else
            {
              t = h_28;
              {
                ATerm t_18 = NULL,u_18 = NULL;
                u_18 = t;
                t = SSL_explode_term(u_18);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_28 = ATgetArgument(t, 0);
                    t_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_18;
                t = foldr_3_0(d_10, h_10, v_62, t);
              }
            }
        }
      }
    return(t);
  }
  t = v_62(t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm v_63 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_63);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm l_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = l_28;
      {
        ATerm p_28 = t;
        int q_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_28);
          }
        else
          {
            t = p_28;
            {
              ATerm r_28 = t;
              int t_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_64 = NULL,e_64 = NULL,g_64 = NULL,h_64 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_64 = ATgetArgument(t, 0);
                      e_64 = ATgetArgument(t, 1);
                      g_64 = ATgetArgument(t, 2);
                      h_64 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_64;
                  t = map_1_0(t_10, t);
                  LocalPopChoice(t_28);
                }
              else
                {
                  t = r_28;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm y_64 = NULL;
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_64 = ATgetArgument(t, 0);
          {
            ATerm w_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_28);
      t = y_64;
    }
  else
    {
      t = u_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_64;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,h_63 = NULL,i_63 = NULL,k_63 = NULL,p_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,g_31 = NULL,f_31 = NULL;
  u_63 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_63 = ATgetArgument(t, 0);
      s_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_63);
  p_63 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, r_63, s_63);
  f_31 = t;
  t = SSLsetAnnotations(f_31, p_63);
  t_63 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_63 = ATgetArgument(t, 0);
      {
        ATerm z_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_63;
  t = free_vars_3_0(o_10, s_10, tboundin_3_0, t);
  y_62 = t;
  t = undefine_unbound_MarkVar_0_1(y_62, t);
  z_62 = t;
  t = t_63;
  if(match_cons(t, sym_Let_2))
    {
      c_63 = ATgetArgument(t, 0);
      d_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_63);
  b_63 = t;
  t = c_63;
  {
    static ATerm w_10 (ATerm t)
    {
      ATerm d_65 = NULL,f_65 = NULL;
      d_65 = t;
      t = term_j_15;
      t = table_destroy_0_0(t);
      t = term_j_15;
      f_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_j_15, z_62);
      t = v_7(f_65, z_62, t);
      t = d_65;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(w_10, t);
  }
  h_63 = t;
  t = term_j_15;
  t = table_destroy_0_0(t);
  t = term_j_15;
  k_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_15, z_62);
  t = v_7(k_63, z_62, t);
  t = d_63;
  t = mark_buv_0_0(t);
  i_63 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, h_63, i_63);
  g_31 = t;
  t = SSLsetAnnotations(g_31, b_63);
  return(t);
}
static ATerm i_8 (ATerm i_87 (ATerm), ATerm z_24, ATerm x_24, ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,o_65 = NULL,p_65 = NULL,v_65 = NULL;
  l_65 = t;
  t = i_87(t);
  g_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_65, z_24, x_24);
  t = c_9(g_65, z_24, x_24, t);
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_65 = NULL;
        t = term_d_29;
        w_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_65, term_d_29);
        t = b_9(g_65, w_65, t);
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_65 = ATgetFirst((ATermList) t);
      k_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_65, term_d_29, (ATerm) ATinsert(CheckATermList(k_65), (ATerm) ATinsert(CheckATermList(h_65), z_24)));
  t = lookup_table_0_1(g_65, t);
  v_65 = t;
  t = term_d_29;
  m_65 = t;
  t = (ATerm) ATinsert(CheckATermList(k_65), (ATerm) ATinsert(CheckATermList(h_65), z_24));
  o_65 = t;
  t = v_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(m_65, o_65, p_65, t);
  t = l_65;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL;
  x_65 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_65);
  y_65 = t;
  t = term_n_29;
  z_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_65), term_n_29);
  t = i_8(x_10, y_65, z_65, t);
  t = x_65;
  return(t);
}
static ATerm j_8 (ATerm i_26, ATerm j_26, ATerm t)
{
  ATerm a_66 = NULL,d_66 = NULL;
  d_66 = t;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_26, j_26);
        t = b_9(i_26, j_26, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_29 = ATgetFirst((ATermList) t);
            a_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_29);
        {
          ATerm f_66 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, i_26, j_26, a_66);
          t = lookup_table_0_1(i_26, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_9(j_26, a_66, f_66, t);
          t = (ATerm) ATmakeAppl(sym__3, i_26, j_26, a_66);
        }
      }
    else
      {
        t = p_29;
        {
          ATerm h_66 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, i_26, j_26);
          t = lookup_table_0_1(i_26, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              h_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_8(j_26, h_66, t);
          t = (ATerm) ATmakeAppl(sym__2, i_26, j_26);
        }
      }
  }
  t = d_66;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL;
  x_66 = t;
  t = f_87(t);
  w_66 = t;
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_67 = NULL;
        t = term_d_29;
        b_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_66, term_d_29);
        t = b_9(w_66, b_67, t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_66 = ATgetFirst((ATermList) t);
      p_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_66, term_d_29, p_66);
  t = lookup_table_0_1(w_66, t);
  a_67 = t;
  t = term_d_29;
  y_66 = t;
  t = a_67;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(y_66, p_66, z_66, t);
  t = q_66;
  {
    static ATerm y_10 (ATerm t)
    {
      ATerm c_67 = NULL;
      c_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_66, c_67);
      t = j_8(w_66, c_67, t);
      return(t);
    }
    t = map_1_0(y_10, t);
  }
  t = x_66;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm t)
{
  ATerm u_29 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_106(t);
      t = o_106(t);
      LocalPopChoice(g_30);
    }
  else
    {
      t = u_29;
      t = o_106(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL,n_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL;
  i_67 = t;
  t = e_87(t);
  h_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_67, term_d_29);
  {
    ATerm i_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_67 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_30 = ATgetArgument(t, 0);
            ATerm o_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_29;
        w_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_67, term_d_29);
        t = b_9(h_67, w_67, t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = i_30;
        t = (ATerm) ATempty;
      }
  }
  j_67 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_67, term_d_29, (ATerm) ATinsert(CheckATermList(j_67), (ATerm) ATempty));
  t = lookup_table_0_1(h_67, t);
  s_67 = t;
  t = term_d_29;
  n_67 = t;
  t = (ATerm) ATinsert(CheckATermList(j_67), (ATerm) ATempty);
  q_67 = t;
  t = s_67;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(n_67, q_67, r_67, t);
  t = i_67;
  return(t);
}
ATerm scope_2_0 (ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm t)
{
  static ATerm a_11 (ATerm t)
  {
    t = end_scope_1_0(g_87, t);
    return(t);
  }
  t = begin_scope_1_0(g_87, t);
  t = restore_always_2_0(h_87, a_11, t);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,j_31 = NULL;
  b_68 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_67 = ATgetArgument(t, 0);
      z_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_68);
  x_67 = t;
  t = z_67;
  {
    static ATerm c_11 (ATerm t)
    {
      ATerm c_68 = NULL;
      c_68 = t;
      t = y_67;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = c_68;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(b_11, c_11, t);
  }
  a_68 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, y_67, a_68);
  j_31 = t;
  t = SSLsetAnnotations(j_31, x_67);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,l_31 = NULL;
      f_68 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_68);
      d_68 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_68);
      l_31 = t;
      t = SSLsetAnnotations(l_31, d_68);
      LocalPopChoice(q_30);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = p_30;
      {
        ATerm r_30 = t;
        int s_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,m_31 = NULL;
            j_68 = t;
            if(match_cons(t, sym_App_2))
              {
                h_68 = ATgetArgument(t, 0);
                i_68 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_68);
            g_68 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, h_68, i_68);
            m_31 = t;
            t = SSLsetAnnotations(m_31, g_68);
            LocalPopChoice(s_30);
            {
              ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,n_31 = NULL;
              p_68 = t;
              if(match_cons(t, sym_App_2))
                {
                  l_68 = ATgetArgument(t, 0);
                  m_68 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_68);
              k_68 = t;
              t = l_68;
              t = mark_buv_0_0(t);
              n_68 = t;
              t = m_68;
              t = mark_build_vars_0_0(t);
              o_68 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, n_68, o_68);
              n_31 = t;
              t = SSLsetAnnotations(n_31, k_68);
            }
          }
        else
          {
            t = r_30;
            {
              ATerm w_30 = t;
              int x_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,o_31 = NULL;
                  s_68 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      r_68 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_68);
                  q_68 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, r_68);
                  o_31 = t;
                  t = SSLsetAnnotations(o_31, q_68);
                  LocalPopChoice(x_30);
                  {
                    ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,p_31 = NULL;
                    w_68 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        u_68 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(w_68);
                    t_68 = t;
                    t = u_68;
                    t = mark_buv_0_0(t);
                    v_68 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, v_68);
                    p_31 = t;
                    t = SSLsetAnnotations(p_31, t_68);
                  }
                }
              else
                {
                  t = w_30;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_8 (ATerm q_26, ATerm r_26, ATerm s_26, ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL;
  y_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_26, r_26);
  t = b_9(q_26, r_26, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_30 = ATgetFirst((ATermList) t);
      x_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_26, r_26, (ATerm) ATinsert(CheckATermList(x_68), s_26));
  t = lookup_table_0_1(q_26, t);
  b_69 = t;
  t = (ATerm) ATinsert(CheckATermList(x_68), s_26);
  z_68 = t;
  t = b_69;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(r_26, z_68, a_69, t);
  t = y_68;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL;
  c_69 = t;
  t = term_j_15;
  d_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_69);
  e_69 = t;
  t = term_d_31;
  f_69 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_15, (ATerm)ATmakeAppl(sym_Var_1, c_69), term_d_31);
  t = k_8(d_69, e_69, f_69, t);
  t = c_69;
  return(t);
}
static ATerm n_8 (ATerm o_26, ATerm p_26, ATerm t)
{
  ATerm g_69 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_26, p_26);
  t = b_9(o_26, p_26, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_69 = ATgetFirst((ATermList) t);
      {
        ATerm e_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_69;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL;
  l_70 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_20 = NULL,i_20 = NULL,l_20 = NULL,y_20 = NULL;
        t = term_j_15;
        y_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_15, l_70);
        t = n_8(y_20, l_70, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_31) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            h_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, m_70);
        i_20 = t;
        t = (ATerm) ATinsert(ATempty, h_20);
        l_20 = t;
        t = SSLsetAnnotations(i_20, l_20);
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        {
          ATerm q_31 = t;
          int r_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_21 = NULL,s_21 = NULL,t_21 = NULL,a_22 = NULL;
              t = term_j_15;
              a_22 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_j_15, l_70);
              t = n_8(a_22, l_70, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm s_31 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_31) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  p_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, m_70);
              s_21 = t;
              t = (ATerm) ATinsert(ATempty, p_21);
              t_21 = t;
              t = SSLsetAnnotations(s_21, t_21);
              LocalPopChoice(r_31);
            }
          else
            {
              t = q_31;
              {
                ATerm g_22 = NULL,i_22 = NULL,j_22 = NULL,r_22 = NULL;
                t = term_j_15;
                r_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_15, l_70);
                t = n_8(r_22, l_70, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm t_31 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) t_31) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    g_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, m_70);
                i_22 = t;
                t = (ATerm) ATinsert(ATempty, g_22);
                j_22 = t;
                t = SSLsetAnnotations(i_22, j_22);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_31 = NULL;
  ATerm u_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(w_31);
    }
  else
    {
      t = u_31;
    }
  u_70 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_70);
  r_70 = t;
  t = s_70;
  t = DeclareBound_0_0(t);
  t_70 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_70);
  v_31 = t;
  t = SSLsetAnnotations(v_31, r_70);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,x_31 = NULL;
      z_70 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_70);
      x_70 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_70);
      x_31 = t;
      t = SSLsetAnnotations(x_31, x_70);
      LocalPopChoice(d_32);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = c_32;
      {
        ATerm e_32 = t;
        int f_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,y_31 = NULL;
            d_71 = t;
            if(match_cons(t, sym_App_2))
              {
                b_71 = ATgetArgument(t, 0);
                c_71 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_71);
            a_71 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, b_71, c_71);
            y_31 = t;
            t = SSLsetAnnotations(y_31, a_71);
            LocalPopChoice(f_32);
            {
              ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,z_31 = NULL;
              j_71 = t;
              if(match_cons(t, sym_App_2))
                {
                  f_71 = ATgetArgument(t, 0);
                  g_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_71);
              e_71 = t;
              t = f_71;
              t = mark_buv_0_0(t);
              h_71 = t;
              t = g_71;
              t = mark_build_vars_0_0(t);
              i_71 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, h_71, i_71);
              z_31 = t;
              t = SSLsetAnnotations(z_31, e_71);
            }
          }
        else
          {
            t = e_32;
            {
              ATerm g_32 = t;
              int j_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,a_32 = NULL;
                  m_71 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      l_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_71);
                  k_71 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, l_71);
                  a_32 = t;
                  t = SSLsetAnnotations(a_32, k_71);
                  LocalPopChoice(j_32);
                  {
                    ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,b_32 = NULL;
                    q_71 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        o_71 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(q_71);
                    n_71 = t;
                    t = o_71;
                    t = mark_buv_0_0(t);
                    p_71 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, p_71);
                    b_32 = t;
                    t = SSLsetAnnotations(b_32, n_71);
                  }
                }
              else
                {
                  t = g_32;
                  t = SRTS_all(mark_match_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm mark_buv_0_0 (ATerm t)
{
  ATerm k_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_72 = NULL,m_72 = NULL;
      l_72 = t;
      if(match_cons(t, sym_Match_1))
        {
          m_72 = ATgetArgument(t, 0);
          {
            ATerm v_22 = NULL,a_23 = NULL,h_32 = NULL;
            t = SSLgetAnnotations(l_72);
            v_22 = t;
            t = m_72;
            t = mark_match_vars_0_0(t);
            a_23 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, a_23);
            h_32 = t;
            t = SSLsetAnnotations(h_32, v_22);
          }
        }
      else
        {
          ATerm h_23 = NULL,j_23 = NULL,i_32 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              m_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_72);
          h_23 = t;
          t = m_72;
          t = mark_build_vars_0_0(t);
          j_23 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, j_23);
          i_32 = t;
          t = SSLsetAnnotations(i_32, h_23);
        }
      LocalPopChoice(o_32);
    }
  else
    {
      t = k_32;
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            {
              ATerm v_32 = t;
              int w_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(w_32);
                }
              else
                {
                  t = v_32;
                  {
                    ATerm x_32 = t;
                    int y_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(y_32);
                      }
                    else
                      {
                        t = x_32;
                        {
                          ATerm b_33 = t;
                          int c_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL;
                              n_72 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  o_72 = ATgetArgument(t, 0);
                                  p_72 = ATgetArgument(t, 1);
                                  q_72 = ATgetArgument(t, 2);
                                  r_72 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = n_72;
                              t = t_7(o_72, p_72, q_72, r_72, t);
                              LocalPopChoice(c_33);
                            }
                          else
                            {
                              t = b_33;
                              {
                                ATerm f_33 = t;
                                int g_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(g_33);
                                  }
                                else
                                  {
                                    t = f_33;
                                    {
                                      ATerm i_33 = t;
                                      int k_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL;
                                          z_72 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              a_73 = ATgetArgument(t, 0);
                                              t = a_73;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  w_72 = ATgetArgument(t, 0);
                                                  x_72 = ATgetArgument(t, 1);
                                                  y_72 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = z_72;
                                              t = s_7(w_72, x_72, y_72, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  a_73 = ATgetArgument(t, 0);
                                                  t = a_73;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      w_72 = ATgetArgument(t, 0);
                                                      x_72 = ATgetArgument(t, 1);
                                                      y_72 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_72;
                                                  t = r_7(w_72, x_72, y_72, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      a_73 = ATgetArgument(t, 0);
                                                      b_73 = ATgetArgument(t, 1);
                                                      c_73 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_72;
                                                  t = q_7(a_73, b_73, c_73, t);
                                                }
                                            }
                                          LocalPopChoice(k_33);
                                        }
                                      else
                                        {
                                          t = i_33;
                                          {
                                            ATerm m_33 = t;
                                            int o_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(o_33);
                                              }
                                            else
                                              {
                                                t = m_33;
                                                {
                                                  ATerm q_33 = t;
                                                  int s_33 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(s_33);
                                                    }
                                                  else
                                                    {
                                                      t = q_33;
                                                      {
                                                        ATerm u_33 = t;
                                                        int v_33 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm m_73 = NULL;
                                                            m_73 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm w_33 = ATgetArgument(t, 0);
                                                                ATerm x_33 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = m_73;
                                                            t = p_7(t);
                                                            LocalPopChoice(v_33);
                                                          }
                                                        else
                                                          {
                                                            t = u_33;
                                                            {
                                                              ATerm y_33 = t;
                                                              int z_33 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(z_33);
                                                                }
                                                              else
                                                                {
                                                                  t = y_33;
                                                                  {
                                                                    ATerm a_34 = t;
                                                                    int b_34 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(b_34);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_34;
                                                                        {
                                                                          ATerm c_34 = t;
                                                                          int d_34 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(d_34);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_34;
                                                                              t = SRTS_all(mark_buv_0_0, t);
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
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL;
  z_73 = t;
  t = term_q_14;
  a_74 = t;
  t = (ATerm) ATinsert(ATempty, term_e_34);
  b_74 = t;
  t = SSL_printnl(a_74, b_74);
  t = z_73;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,l_32 = NULL;
  f_74 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_74);
  c_74 = t;
  t = d_74;
  t = map_1_0(mark_buv_0_0, t);
  e_74 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_74);
  l_32 = t;
  t = SSLsetAnnotations(l_32, c_74);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL;
  g_74 = t;
  t = term_q_14;
  h_74 = t;
  t = (ATerm) ATinsert(ATempty, term_f_34);
  i_74 = t;
  t = SSL_printnl(h_74, i_74);
  t = g_74;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,n_32 = NULL,m_32 = NULL;
  t = if_verbose4_1_0(d_11, t);
  y_73 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_73);
  r_73 = t;
  t = s_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_73 = ATgetFirst((ATermList) t);
      v_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_73);
  t_73 = t;
  t = v_73;
  t = Cons_2_0(e_11, f_11, t);
  w_73 = t;
  t = (ATerm) ATinsert(CheckATermList(w_73), u_73);
  m_32 = t;
  t = SSLsetAnnotations(m_32, t_73);
  x_73 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_73);
  n_32 = t;
  t = SSLsetAnnotations(n_32, r_73);
  t = if_verbose4_1_0(g_11, t);
  return(t);
}
static ATerm p_8 (ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm j_74 = NULL;
  t = SSL_fputc(o_36, p_36);
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_74);
  return(t);
}
static ATerm q_8 (ATerm a_42, ATerm b_42, ATerm t)
{
  ATerm k_74 = NULL;
  t = SSL_write_term_to_stream_text(a_42, b_42);
  k_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_74);
  return(t);
}
static ATerm s_8 (ATerm r_95 (ATerm), ATerm g_350, ATerm g_42, ATerm t)
{
  ATerm l_74 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_350, term_g_34);
  t = w_8(t);
  l_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_74, g_42);
  t = r_95(t);
  t = fclose_0_0(t);
  t = g_42;
  return(t);
}
static ATerm r_8 (ATerm w_41, ATerm x_41, ATerm t)
{
  ATerm m_74 = NULL;
  t = SSL_write_term_to_stream_baf(w_41, x_41);
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_74);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_34 = ATgetArgument(t, 0);
      if(match_cons(h_34, sym_Stream_1))
        {
          w_23 = ATgetArgument(h_34, 0);
        }
      else
        _fail(t);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(w_23, x_23, t);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      if(match_cons(i_34, sym_Stream_1))
        {
          u_24 = ATgetArgument(i_34, 0);
        }
      else
        _fail(t);
      v_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(u_24, v_24, t);
  r_24 = t;
  t = term_j_34;
  s_24 = t;
  t = r_24;
  if(match_cons(t, sym_Stream_1))
    {
      t_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_34, r_24);
  t = p_8(s_24, t_24, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,a_76 = NULL,b_76 = NULL,s_32 = NULL,r_32 = NULL;
  r_74 = t;
  if(match_cons(t, sym__2))
    {
      y_74 = ATgetArgument(t, 0);
      z_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_74);
  x_74 = t;
  t = y_74;
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_11 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_74 != NULL) && (q_74 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_11, t);
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        t = term_m_34;
        q_74 = t;
      }
  }
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_75, z_74);
  r_32 = t;
  t = SSLsetAnnotations(r_32, x_74);
  t = r_74;
  if(match_cons(t, sym__2))
    {
      t_74 = ATgetArgument(t, 0);
      u_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_74);
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_74, (ATerm) ATmakeAppl(sym__2, not_null(q_74), u_74));
  s_32 = t;
  t = SSLsetAnnotations(s_32, s_74);
  w_74 = t;
  if(match_cons(t, sym__2))
    {
      a_76 = ATgetArgument(t, 0);
      b_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,t_32 = NULL;
        t = SSLgetAnnotations(w_74);
        p_23 = t;
        t = a_76;
        t = fetch_1_0(k_11, t);
        s_23 = t;
        t = b_76;
        if(match_cons(t, sym__2))
          {
            u_23 = ATgetArgument(t, 0);
            v_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_8(l_11, u_23, v_23, t);
        t_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_23, t_23);
        t_32 = t;
        t = SSLsetAnnotations(t_32, p_23);
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
        {
          ATerm g_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,u_32 = NULL;
          t = SSLgetAnnotations(w_74);
          g_24 = t;
          t = b_76;
          if(match_cons(t, sym__2))
            {
              p_24 = ATgetArgument(t, 0);
              q_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_8(n_11, p_24, q_24, t);
          o_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_76, o_24);
          u_32 = t;
          t = SSLsetAnnotations(u_32, g_24);
        }
      }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm b_111 (ATerm), ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL;
  i_76 = t;
  t = dtime_0_0(t);
  t = i_76;
  t = b_111(t);
  h_76 = t;
  t = dtime_0_0(t);
  e_76 = t;
  t = h_76;
  if(match_cons(t, sym__2))
    {
      f_76 = ATgetArgument(t, 0);
      g_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_76), (ATerm) ATmakeAppl(sym_Runtime_1, e_76)), g_76);
  return(t);
}
static ATerm w_76 (ATerm q_76, ATerm t)
{
  t = SSL_fclose(q_76);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL;
  u_76 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_76 = ATgetArgument(t, 0);
      {
        ATerm p_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_76);
            LocalPopChoice(q_34);
          }
        else
          {
            t = p_34;
            t = w_76(u_76, t);
          }
      }
    }
  else
    {
      t = w_76(u_76, t);
    }
  return(t);
}
static ATerm t_8 (ATerm c_42, ATerm t)
{
  t = SSL_read_term_from_stream(c_42);
  return(t);
}
static ATerm u_8 (ATerm h_35, ATerm i_35, ATerm t)
{
  t = SSL_strcat(h_35, i_35);
  return(t);
}
static ATerm v_8 (ATerm q_36, ATerm r_36, ATerm t)
{
  ATerm x_76 = NULL;
  t = SSL_fopen(q_36, r_36);
  x_76 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_76);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_76 = NULL;
  t = SSL_stdin_stream();
  y_76 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_76);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_76 = NULL;
  t = SSL_stdout_stream();
  z_76 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_76);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_77 = NULL;
  t = SSL_stderr_stream();
  a_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_77);
  return(t);
}
static ATerm h_78 (ATerm g_77, ATerm t)
{
  ATerm h_77 = NULL;
  t = SSL_explode_term(g_77);
  if(match_cons(t, sym__2))
    {
      ATerm r_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_34 = ATgetArgument(t, 1);
        if(((ATgetType(s_34) == AT_LIST) && !(ATisEmpty(s_34))))
          {
            h_77 = ATgetFirst((ATermList) s_34);
            {
              ATerm t_34 = (ATerm) ATgetNext((ATermList) s_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_77;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_77;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_77;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_77;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_78 (ATerm k_77, ATerm l_77, ATerm m_77, ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL,s_77 = NULL,z_32 = NULL;
  t = SSLgetAnnotations(m_77);
  p_77 = t;
  t = k_77;
  if(match_cons(t, sym_Path_1))
    {
      s_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_77, l_77);
  z_32 = t;
  t = SSLsetAnnotations(z_32, p_77);
  if(match_cons(t, sym__2))
    {
      n_77 = ATgetArgument(t, 0);
      o_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8(n_77, o_77, t);
  return(t);
}
static ATerm j_78 (ATerm u_77, ATerm v_77, ATerm w_77, ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,c_78 = NULL,a_33 = NULL;
  t = SSLgetAnnotations(w_77);
  z_77 = t;
  t = SSL_is_string(u_77);
  c_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_78, v_77);
  a_33 = t;
  t = SSLsetAnnotations(a_33, z_77);
  if(match_cons(t, sym__2))
    {
      x_77 = ATgetArgument(t, 0);
      y_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8(x_77, y_77, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL;
  e_78 = t;
  if(match_cons(t, sym__2))
    {
      f_78 = ATgetArgument(t, 0);
      g_78 = ATgetArgument(t, 1);
      {
        ATerm u_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_78(e_78, t);
            LocalPopChoice(v_34);
          }
        else
          {
            t = u_34;
            {
              ATerm w_34 = t;
              int x_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_78(f_78, g_78, e_78, t);
                  LocalPopChoice(x_34);
                }
              else
                {
                  t = w_34;
                  t = j_78(f_78, g_78, e_78, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_78(e_78, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL,s_78 = NULL;
  s_78 = t;
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_78, term_a_35);
        t = w_8(t);
        LocalPopChoice(z_34);
      }
    else
      {
        t = y_34;
        {
          ATerm k_25 = NULL,r_25 = NULL;
          t = term_b_35;
          r_25 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_35, s_78);
          t = u_8(r_25, s_78, t);
          k_25 = t;
          t = SSL_perror(k_25);
          _fail(t);
        }
      }
  }
  m_78 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_8(n_78, t);
  l_78 = t;
  t = m_78;
  t = fclose_0_0(t);
  t = l_78;
  return(t);
}
ATerm fetch_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  static ATerm r_79 (ATerm t)
  {
    ATerm o_79 = NULL,p_79 = NULL,q_79 = NULL;
    o_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_79 = ATgetFirst((ATermList) t);
        q_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_35 = t;
      int d_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_26 = NULL,t_26 = NULL,d_33 = NULL;
          t = SSLgetAnnotations(o_79);
          f_26 = t;
          t = p_79;
          t = e_97(t);
          t_26 = t;
          t = (ATerm) ATinsert(CheckATermList(q_79), t_26);
          d_33 = t;
          t = SSLsetAnnotations(d_33, f_26);
          LocalPopChoice(d_35);
        }
      else
        {
          t = c_35;
          {
            ATerm i_27 = NULL,l_27 = NULL,e_33 = NULL;
            t = SSLgetAnnotations(o_79);
            i_27 = t;
            t = q_79;
            t = r_79(t);
            l_27 = t;
            t = (ATerm) ATinsert(CheckATermList(l_27), p_79);
            e_33 = t;
            t = SSLsetAnnotations(e_33, i_27);
          }
        }
    }
    return(t);
  }
  t = r_79(t);
  return(t);
}
static ATerm b_9 (ATerm w_27, ATerm x_27, ATerm t)
{
  ATerm u_79 = NULL;
  t = lookup_table_0_1(w_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_9(x_27, u_79, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_119 (ATerm), ATerm t)
{
  ATerm x_79 = NULL;
  x_79 = t;
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL;
        t = term_c_15;
        a_80 = t;
        t = term_f_15;
        b_80 = t;
        t = term_h_15;
        t = b_9(a_80, b_80, t);
        z_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_79, term_g_35);
        t = geq_0_0(t);
        t = x_79;
        t = n_119(t);
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        t = x_79;
      }
  }
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm e_80 = NULL;
  e_80 = t;
  if(match_string(t, "-k"))
    {
      t = e_80;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_80;
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL;
  f_80 = t;
  t = SSL_string_to_int(f_80);
  g_80 = t;
  t = term_j_35;
  h_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_35, g_80);
  t = e_9(h_80, g_80, t);
  t = f_80;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_k_35;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_11, r_11, z_11, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm j_80 = NULL;
  j_80 = t;
  if(match_string(t, "-S"))
    {
      t = j_80;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_80;
    }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm k_80 = NULL,l_80 = NULL;
  t = term_f_15;
  k_80 = t;
  t = term_l_35;
  l_80 = t;
  t = term_m_35;
  t = e_9(k_80, l_80, t);
  t = term_n_35;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_o_35;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm m_80 = NULL,n_80 = NULL,o_80 = NULL;
  m_80 = t;
  t = SSL_string_to_int(m_80);
  n_80 = t;
  t = term_f_15;
  o_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_15, n_80);
  t = e_9(o_80, n_80, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_80);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_p_35;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm p_80 = NULL,q_80 = NULL;
  t = term_q_35;
  p_80 = t;
  t = term_o_14;
  q_80 = t;
  t = term_r_35;
  t = e_9(p_80, q_80, t);
  t = term_s_35;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_t_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_12, c_12, d_12, t);
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      {
        ATerm w_35 = t;
        int x_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_12, f_12, g_12, t);
            LocalPopChoice(x_35);
          }
        else
          {
            t = w_35;
            t = Option_3_0(h_12, i_12, j_12, t);
          }
      }
    }
  return(t);
}
static ATerm e_9 (ATerm t_56, ATerm u_56, ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL;
  t = term_c_15;
  r_80 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_15, t_56, u_56);
  t = lookup_table_0_1(r_80, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(t_56, u_56, s_80, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_15, t_56, u_56);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL;
      t = term_o_14;
      t = e_0(t);
      y_80 = t;
      t = term_y_35;
      z_80 = t;
      t = term_z_35;
      a_81 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_35, term_z_35, y_80);
      t = c_9(z_80, a_81, y_80, t);
      _fail(t);
    }
  else
    {
      ATerm d_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_80 = ATgetFirst((ATermList) t);
          x_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_80;
      t = c_0(t);
      t = term_o_14;
      t = d_0(t);
      d_81 = t;
      t = (ATerm) ATinsert(CheckATermList(x_80), d_81);
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm f_81 = NULL;
  f_81 = t;
  if(match_string(t, "-o"))
    {
      t = f_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_81;
    }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm g_81 = NULL,h_81 = NULL;
  g_81 = t;
  t = term_a_36;
  h_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_36, g_81);
  t = e_9(h_81, g_81, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_81);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_b_36;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_12, l_12, m_12, t);
  return(t);
}
static ATerm c_9 (ATerm d_26, ATerm e_26, ATerm c_26, ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL;
  j_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_26, e_26);
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_36 = ATgetArgument(t, 0);
            ATerm f_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_26, e_26);
        t = b_9(d_26, e_26, t);
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        t = (ATerm) ATempty;
      }
  }
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_26, e_26, (ATerm) ATinsert(CheckATermList(k_81), c_26));
  t = lookup_table_0_1(d_26, t);
  n_81 = t;
  t = (ATerm) ATinsert(CheckATermList(k_81), c_26);
  l_81 = t;
  t = n_81;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(e_26, l_81, m_81, t);
  t = j_81;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL;
      t = term_o_14;
      t = n_0(t);
      y_81 = t;
      t = term_y_35;
      z_81 = t;
      t = term_z_35;
      a_82 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_35, term_z_35, y_81);
      t = c_9(z_81, a_82, y_81, t);
      _fail(t);
    }
  else
    {
      ATerm e_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_81 = ATgetFirst((ATermList) t);
          v_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_81;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_81 = ATgetFirst((ATermList) t);
          x_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_81;
      t = k_0(t);
      t = w_81;
      t = l_0(t);
      e_82 = t;
      t = (ATerm) ATinsert(CheckATermList(x_81), e_82);
    }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm g_82 = NULL;
  g_82 = t;
  if(match_string(t, "-i"))
    {
      t = g_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_82;
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm h_82 = NULL,i_82 = NULL;
  h_82 = t;
  t = term_g_36;
  i_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_36, h_82);
  t = e_9(i_82, h_82, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_82);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_h_36;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_12, q_12, r_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_14;
  t = whoami_0_0(t);
  j_82 = t;
  t = term_q_14;
  l_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_36), j_82);
  m_82 = t;
  t = SSL_printnl(l_82, m_82);
  t = term_t_14;
  k_82 = t;
  t = SSL_exit(k_82);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL;
  t = term_c_15;
  n_82 = t;
  t = term_j_36;
  o_82 = t;
  t = term_k_36;
  t = b_9(n_82, o_82, t);
  return(t);
}
static ATerm x_8 (ATerm g_43, ATerm h_43, ATerm t)
{
  ATerm l_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_43, h_43);
      LocalPopChoice(m_36);
    }
  else
    {
      t = l_36;
      t = SSL_addr(g_43, h_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL;
  q_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_82;
      t = i_104(t);
    }
  else
    {
      ATerm v_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_82 = ATgetFirst((ATermList) t);
          s_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_82;
      t = foldr_2_0(i_104, j_104, t);
      v_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_82, v_82);
      t = j_104(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_l_35;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm a_28 = NULL,d_28 = NULL;
  if(match_cons(t, sym__2))
    {
      a_28 = ATgetArgument(t, 0);
      d_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_8(a_28, d_28, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_82 = NULL,u_27 = NULL,v_27 = NULL;
  t = times_0_0(t);
  v_27 = t;
  t = SSL_explode_term(v_27);
  if(match_cons(t, sym__2))
    {
      ATerm n_36 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_27;
  t = foldr_2_0(s_12, y_12, t);
  y_82 = t;
  t = SSL_TicksToSeconds(y_82);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL;
  j_83 = t;
  if(match_cons(t, sym__2))
    {
      k_83 = ATgetArgument(t, 0);
      l_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_83;
        if((k_83 != t))
          {
            _fail(t);
          }
        t = j_83;
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        t = (ATerm) ATmakeAppl(sym__2, k_83, l_83);
        {
          ATerm u_36 = t;
          int v_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_83, l_83);
              LocalPopChoice(v_36);
            }
          else
            {
              t = u_36;
              t = SSL_gtr(k_83, l_83);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_83, l_83);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_119 (ATerm), ATerm t)
{
  ATerm p_83 = NULL;
  p_83 = t;
  {
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL;
        t = term_c_15;
        s_83 = t;
        t = term_f_15;
        t_83 = t;
        t = term_h_15;
        t = b_9(s_83, t_83, t);
        r_83 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_83, term_t_14);
        t = geq_0_0(t);
        t = p_83;
        t = m_119(t);
        LocalPopChoice(x_36);
      }
    else
      {
        t = w_36;
        t = p_83;
      }
  }
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL,y_83 = NULL,z_83 = NULL;
  t = run_time_0_0(t);
  v_83 = t;
  t = term_o_14;
  t = whoami_0_0(t);
  w_83 = t;
  t = term_q_14;
  y_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_36), v_83), term_y_36), w_83);
  z_83 = t;
  t = SSL_printnl(y_83, z_83);
  t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_36), v_83), term_y_36), w_83));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_84 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_35;
  a_84 = t;
  t = SSL_exit(a_84);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL;
  l_84 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_84;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_84 = ATgetArgument(t, 0);
          {
            ATerm s_28 = NULL,h_33 = NULL;
            t = SSLgetAnnotations(l_84);
            s_28 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_84);
            h_33 = t;
            t = SSLsetAnnotations(h_33, s_28);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_84;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_84 = NULL,e_84 = NULL;
      t = term_c_15;
      d_84 = t;
      t = term_c_37;
      e_84 = t;
      t = term_d_37;
      t = b_9(d_84, e_84, t);
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
      t = fetch_1_0(a_13, t);
    }
  t = z_111(t);
  return(t);
}
static ATerm f_9 (ATerm v_29, ATerm w_29, ATerm x_29, ATerm t)
{
  ATerm n_84 = NULL;
  t = SSL_hashtable_put(x_29, v_29, w_29);
  n_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_84);
  return(t);
}
static ATerm g_9 (ATerm y_29, ATerm z_29, ATerm t)
{
  t = SSL_hashtable_get(z_29, y_29);
  return(t);
}
ATerm lookup_table_0_1 (ATerm p_27, ATerm t)
{
  ATerm w_84 = NULL;
  t = table_hashtable_0_0(t);
  w_84 = t;
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_29 = NULL;
        t = w_84;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_9(p_27, a_29, t);
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
        {
          ATerm h_29 = NULL;
          t = p_27;
          t = table_create_0_0(t);
          t = w_84;
          if(match_cons(t, sym_Hashtable_1))
            {
              h_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_9(p_27, h_29, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm d_30, ATerm e_30, ATerm t)
{
  ATerm z_84 = NULL;
  t = SSL_hashtable_create(d_30, e_30);
  z_84 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_84);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL,e_85 = NULL,f_85 = NULL;
  a_85 = t;
  t = term_g_37;
  e_85 = t;
  t = term_h_37;
  f_85 = t;
  t = a_85;
  t = new_hashtable_0_2(e_85, f_85, t);
  b_85 = t;
  t = a_85;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(a_85, b_85, c_85, t);
  t = a_85;
  return(t);
}
static ATerm z_8 (ATerm a_30, ATerm b_30, ATerm t)
{
  ATerm g_85 = NULL;
  t = SSL_hashtable_remove(b_30, a_30);
  g_85 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_85);
  return(t);
}
static ATerm a_9 (ATerm f_30, ATerm t)
{
  ATerm h_85 = NULL;
  t = SSL_hashtable_destroy(f_30);
  h_85 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_85);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_85 = NULL;
  t = SSL_table_hashtable();
  i_85 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_85);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL;
  j_85 = t;
  t = table_hashtable_0_0(t);
  k_85 = t;
  t = lookup_table_0_1(j_85, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(m_85, t);
  t = k_85;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(j_85, l_85, t);
  t = j_85;
  return(t);
}
ATerm map_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  static ATerm d_86 (ATerm t)
  {
    ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL;
    a_86 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_86;
      }
    else
      {
        ATerm h_30 = NULL,l_30 = NULL,m_30 = NULL,j_33 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_86 = ATgetFirst((ATermList) t);
            c_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_86);
        h_30 = t;
        t = b_86;
        t = u_96(t);
        l_30 = t;
        t = c_86;
        t = d_86(t);
        m_30 = t;
        t = (ATerm) ATinsert(CheckATermList(m_30), l_30);
        j_33 = t;
        t = SSLsetAnnotations(j_33, h_30);
      }
    return(t);
  }
  t = d_86(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_86 = ATgetFirst((ATermList) t);
      h_86 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_86 = NULL,m_86 = NULL;
        static ATerm b_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_86)), not_null(m_86));
          return(t);
        }
        t = h_86;
        t = i_0(t);
        if(((l_86 != NULL) && (l_86 != t)))
          _fail(t);
        else
          l_86 = t;
        t = g_86;
        t = g_0(t);
        if(((m_86 != NULL) && (m_86 != t)))
          _fail(t);
        else
          m_86 = t;
        t = h_86;
        t = reverse_acc_2_0(g_0, b_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_14;
      t = i_0(t);
    }
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL,l_33 = NULL;
  u_86 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_86);
  s_86 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_86);
  l_33 = t;
  t = SSLsetAnnotations(l_33, s_86);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm w_86 = NULL;
  w_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_86), term_i_37);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_86 = NULL,p_86 = NULL;
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_86 = NULL,r_86 = NULL;
      t = term_c_15;
      q_86 = t;
      t = term_j_36;
      r_86 = t;
      t = term_k_36;
      t = b_9(q_86, r_86, t);
      LocalPopChoice(k_37);
    }
  else
    {
      t = j_37;
      t = fetch_1_0(e_13, t);
    }
  t = term_l_37;
  t = echo_0_0(t);
  t = term_y_35;
  o_86 = t;
  t = term_z_35;
  p_86 = t;
  t = term_m_37;
  t = b_9(o_86, p_86, t);
  t = reverse_acc_2_0(_id, f_13, t);
  t = map_1_0(h_13, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_87 = NULL,j_87 = NULL,l_87 = NULL;
  d_87 = t;
  {
    ATerm n_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_87;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_37 = ATgetFirst((ATermList) t);
                ATerm q_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_87;
          }
        LocalPopChoice(o_37);
      }
    else
      {
        t = n_37;
        t = (ATerm) ATinsert(ATempty, d_87);
      }
  }
  j_87 = t;
  t = term_m_34;
  l_87 = t;
  t = SSL_printnl(l_87, j_87);
  t = d_87;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_87 = NULL,q_87 = NULL;
  t = term_c_15;
  p_87 = t;
  t = term_j_36;
  q_87 = t;
  t = term_k_36;
  t = b_9(p_87, q_87, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL;
  t = term_r_37;
  r_87 = t;
  t = term_o_14;
  s_87 = t;
  t = term_s_37;
  t = e_9(r_87, s_87, t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_t_37;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL;
  t = term_r_37;
  v_87 = t;
  t = term_o_14;
  w_87 = t;
  t = term_s_37;
  t = e_9(v_87, w_87, t);
  t = term_u_37;
  t_87 = t;
  t = term_o_14;
  u_87 = t;
  t = term_v_37;
  t = e_9(t_87, u_87, t);
  t = term_w_37;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_13, l_13, m_13, t);
      LocalPopChoice(z_37);
    }
  else
    {
      t = y_37;
      t = Option_3_0(n_13, o_13, p_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm t)
{
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,n_33 = NULL;
  c_88 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_87 = ATgetFirst((ATermList) t);
      z_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_88);
  x_87 = t;
  t = y_87;
  t = t_85(t);
  a_88 = t;
  t = z_87;
  t = u_85(t);
  b_88 = t;
  t = (ATerm) ATinsert(CheckATermList(b_88), a_88);
  n_33 = t;
  t = SSLsetAnnotations(n_33, x_87);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,m_88 = NULL,n_88 = NULL,p_33 = NULL;
  h_88 = t;
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_38;
        t = e_115(t);
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
      }
  }
  t = h_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_88 = ATgetFirst((ATermList) t);
      k_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_88);
  i_88 = t;
  t = term_j_36;
  n_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_36, j_88);
  t = e_9(n_88, j_88, t);
  t = k_88;
  {
    static ATerm x_88 (ATerm t)
    {
      ATerm g_38 = t;
      int h_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_38 = t;
          int k_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_88 = NULL;
              q_88 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_88;
              LocalPopChoice(k_38);
            }
          else
            {
              t = j_38;
              t = e_115(t);
              t = Cons_2_0(_id, x_88, t);
            }
          LocalPopChoice(h_38);
        }
      else
        {
          t = g_38;
          {
            ATerm t_88 = NULL,u_88 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_88 = ATgetFirst((ATermList) t);
                u_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_88), (ATerm) ATmakeAppl(sym_Undefined_1, t_88));
          }
        }
      return(t);
    }
    t = x_88(t);
  }
  m_88 = t;
  t = (ATerm) ATinsert(CheckATermList(m_88), (ATerm) ATmakeAppl(sym_Program_1, j_88));
  p_33 = t;
  t = SSLsetAnnotations(p_33, i_88);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm m_89 = NULL;
  m_89 = t;
  if(match_string(t, "--help"))
    {
      t = m_89;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_89;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_89;
        }
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm n_89 = NULL,o_89 = NULL;
  t = term_c_37;
  n_89 = t;
  t = term_o_14;
  o_89 = t;
  t = term_l_38;
  t = e_9(n_89, o_89, t);
  t = term_n_38;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = term_o_38;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_115 (ATerm), ATerm t)
{
  ATerm c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL;
  e_89 = t;
  t = term_y_35;
  f_89 = t;
  t = term_p_38;
  t = lookup_table_0_1(f_89, t);
  j_89 = t;
  t = term_z_35;
  g_89 = t;
  t = (ATerm) ATempty;
  h_89 = t;
  t = j_89;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(g_89, h_89, i_89, t);
  t = e_89;
  {
    static ATerm r_13 (ATerm t)
    {
      ATerm q_38 = t;
      int r_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_115(t);
          LocalPopChoice(r_38);
        }
      else
        {
          t = q_38;
          {
            ATerm s_38 = t;
            int t_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_13, u_13, v_13, t);
                LocalPopChoice(t_38);
              }
            else
              {
                t = s_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_13, t);
  }
  {
    ATerm u_38 = t;
    int v_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_89 = NULL;
        z_89 = t;
        {
          ATerm w_38 = t;
          int x_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_30 = NULL;
              t = z_89;
              {
                ATerm y_38 = t;
                int z_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_30 = NULL,v_30 = NULL;
                    t = term_c_15;
                    u_30 = t;
                    t = term_c_37;
                    v_30 = t;
                    t = term_d_37;
                    t = b_9(u_30, v_30, t);
                    LocalPopChoice(z_38);
                  }
                else
                  {
                    t = y_38;
                    t = fetch_1_0(w_13, t);
                  }
              }
              t = z_89;
              t = default_system_usage_0_0(t);
              t = term_l_35;
              t_30 = t;
              t = SSL_exit(t_30);
              LocalPopChoice(x_38);
            }
          else
            {
              t = w_38;
              {
                ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
                t = term_c_15;
                a_31 = t;
                t = term_r_37;
                b_31 = t;
                t = term_a_39;
                t = b_9(a_31, b_31, t);
                t = z_89;
                t = default_system_about_0_0(t);
                t = term_l_35;
                z_30 = t;
                t = SSL_exit(z_30);
              }
            }
        }
        LocalPopChoice(v_38);
      }
    else
      {
        t = u_38;
        {
          ATerm b_39 = t;
          int d_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_90 = NULL,b_90 = NULL,c_90 = NULL;
              static ATerm x_13 (ATerm t)
              {
                ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL,r_33 = NULL;
                f_90 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_90 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_90);
                d_90 = t;
                t = e_90;
                if(((c_89 != NULL) && (c_89 != t)))
                  _fail(t);
                else
                  c_89 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_90);
                r_33 = t;
                t = SSLsetAnnotations(r_33, d_90);
                return(t);
              }
              t = fetch_1_0(x_13, t);
              t = term_q_14;
              b_90 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_89)), term_e_39);
              c_90 = t;
              t = SSL_printnl(b_90, c_90);
              t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_89)), term_e_39));
              t = default_system_usage_0_0(t);
              t = term_t_14;
              a_90 = t;
              t = SSL_exit(a_90);
              LocalPopChoice(d_39);
            }
          else
            {
              t = b_39;
            }
        }
      }
  }
  d_89 = t;
  t = term_y_35;
  t = table_destroy_0_0(t);
  t = d_89;
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_112 (ATerm), ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm t)
{
  ATerm k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL;
  t = parse_options_1_0(b_112, t);
  k_90 = t;
  t = term_f_39;
  t = table_create_0_0(t);
  t = term_f_39;
  l_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_39, term_g_39, k_90);
  t = lookup_table_0_1(l_90, t);
  o_90 = t;
  t = term_g_39;
  m_90 = t;
  t = o_90;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(m_90, k_90, n_90, t);
  t = k_90;
  t = d_112(t);
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_112, t);
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        {
          ATerm j_39 = t;
          int l_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_112(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_39);
            }
          else
            {
              t = j_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = if_verbose2_1_0(g_14, t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm p_90 = NULL,q_90 = NULL;
  t = term_m_39;
  p_90 = t;
  t = term_o_14;
  q_90 = t;
  t = term_n_39;
  t = e_9(p_90, q_90, t);
  t = term_o_39;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_p_39;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL,v_90 = NULL,w_90 = NULL;
  r_90 = t;
  t = term_c_15;
  v_90 = t;
  t = term_j_36;
  w_90 = t;
  t = term_k_36;
  t = b_9(v_90, w_90, t);
  s_90 = t;
  t = term_q_14;
  t_90 = t;
  t = (ATerm) ATinsert(ATempty, s_90);
  u_90 = t;
  t = SSL_printnl(t_90, u_90);
  t = r_90;
  return(t);
}
ATerm iowrap_3_0 (ATerm k_111 (ATerm), ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm t)
{
  static ATerm y_13 (ATerm t)
  {
    ATerm q_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_111(t);
        LocalPopChoice(s_39);
      }
    else
      {
        t = q_39;
        {
          ATerm t_39 = t;
          int u_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(u_39);
            }
          else
            {
              t = t_39;
              {
                ATerm v_39 = t;
                int w_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(w_39);
                  }
                else
                  {
                    t = v_39;
                    {
                      ATerm x_39 = t;
                      int y_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(d_14, e_14, f_14, t);
                          LocalPopChoice(y_39);
                        }
                      else
                        {
                          t = x_39;
                          {
                            ATerm z_39 = t;
                            int a_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(a_40);
                              }
                            else
                              {
                                t = z_39;
                                t = keep_option_0_0(t);
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
  static ATerm c_14 (ATerm t)
  {
    ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
    y_90 = t;
    {
      ATerm b_40 = t;
      int c_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm l_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_90 != NULL) && (x_90 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_90 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_14, t);
          LocalPopChoice(c_40);
        }
      else
        {
          t = b_40;
          t = term_d_40;
          x_90 = t;
        }
    }
    t = not_null(x_90);
    t = ReadFromFile_0_0(t);
    z_90 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_90, z_90);
    t = apply_strategy_1_0(k_111, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(y_13, m_111, a_14, c_14, t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,t_33 = NULL;
  e_91 = t;
  if(match_cons(t, sym__2))
    {
      b_91 = ATgetArgument(t, 0);
      c_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_91);
  a_91 = t;
  t = c_91;
  t = mark_bound_unbound_vars_0_0(t);
  d_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_91, d_91);
  t_33 = t;
  t = SSLsetAnnotations(t_33, a_91);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(n_14, _fail, default_usage_0_0, t);
  return(t);
}
