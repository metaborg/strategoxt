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
Symbol sym_Overlay_3;
Symbol sym_RootApp_1;
Symbol sym_App_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_Choice_2;
Symbol sym_SRule_1;
Symbol sym_LRule_1;
Symbol sym_Thread_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Call_2;
Symbol sym_Let_2;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDefT_4;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_RDef_3;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Some_1;
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
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_y_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_f_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_b_40;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_h_39;
ATerm term_a_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_s_35;
ATerm term_o_35;
ATerm term_m_35;
ATerm term_i_35;
ATerm term_a_21;
ATerm term_r_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_h_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_j_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__2, term_n_16, term_o_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_z_16);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_n_16, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Defined_2, term_k_20, term_m_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Defined_2, term_m_35, term_o_35);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Defined_2, term_y_36, term_m_20);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_i_40);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_40);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym__2, term_n_40, term_j_16);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym__2, term_u_41, term_j_16);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(sym__2, term_x_41, term_j_16);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym__2, term_k_42, term_j_16);
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym__3, term_x_16, term_z_16, (ATerm) ATempty);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym__2, term_n_16, term_k_42);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym__2, term_n_16, term_u_41);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym__2, term_i_43, term_j_16);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm f_136 (ATerm), ATerm g_136 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm n_141 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm o_104 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm n_104 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm m_104 (ATerm), ATerm t);
static ATerm o_7 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm p_107 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm p_7 (ATerm p_25, ATerm q_25, ATerm r_25, ATerm t);
static ATerm a_3 (ATerm t);
static ATerm q_7 (ATerm j_25, ATerm n_25, ATerm l_25, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm r_7 (ATerm d_25, ATerm h_25, ATerm f_25, ATerm t);
static ATerm i_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm s_7 (ATerm b_24, ATerm c_24, ATerm d_24, ATerm f_24, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm t_7 (ATerm m_22, ATerm n_22, ATerm l_22, ATerm t);
static ATerm m_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm u_7 (ATerm k_28, ATerm j_28, ATerm t);
static ATerm v_7 (ATerm z_31, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm z_22, ATerm t);
ATerm tboundin_3_0 (ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm m_142 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm t_142 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm y_7 (ATerm p_119 (ATerm), ATerm r_53, ATerm q_53, ATerm t);
ATerm foldr_3_0 (ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm t);
static ATerm z_7 (ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm v_53, ATerm u_53, ATerm t);
static ATerm a_8 (ATerm k_119 (ATerm), ATerm p_53, ATerm o_53, ATerm t);
ATerm at_end_1_0 (ATerm v_115 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_67 (ATerm r_66, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm t);
static ATerm d_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm f_8 (ATerm a_792, ATerm f_792, ATerm n_77, ATerm t);
ATerm while_not_2_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm t);
ATerm for_3_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm t);
static ATerm i_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm z_69 (ATerm t_68, ATerm u_68, ATerm v_68, ATerm t);
static ATerm o_11 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm free_vars_3_0 (ATerm o_138 (ATerm), ATerm p_138 (ATerm), ATerm q_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm k_12 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm h_8 (ATerm y_104 (ATerm), ATerm d_26, ATerm b_26, ATerm t);
static ATerm n_12 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm i_8 (ATerm m_27, ATerm n_27, ATerm t);
ATerm end_scope_1_0 (ATerm v_104 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm u_104 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t);
static ATerm a_13 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm j_8 (ATerm u_27, ATerm v_27, ATerm w_27, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm m_8 (ATerm s_27, ATerm t_27, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
ATerm map_1_0 (ATerm e_115 (ATerm), ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm o_8 (ATerm b_39, ATerm c_39, ATerm t);
static ATerm p_8 (ATerm s_44, ATerm t_44, ATerm t);
static ATerm r_8 (ATerm b_114 (ATerm), ATerm e_394, ATerm y_44, ATerm t);
static ATerm q_8 (ATerm o_44, ATerm p_44, ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm s_131 (ATerm), ATerm t);
static ATerm e_84 (ATerm y_83, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_8 (ATerm u_44, ATerm t);
static ATerm t_8 (ATerm h_37, ATerm i_37, ATerm t);
static ATerm u_8 (ATerm d_39, ATerm e_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_85 (ATerm o_84, ATerm t);
static ATerm q_85 (ATerm s_84, ATerm t_84, ATerm u_84, ATerm t);
static ATerm r_85 (ATerm c_85, ATerm d_85, ATerm e_85, ATerm t);
static ATerm v_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_115 (ATerm), ATerm t);
static ATerm a_9 (ATerm a_29, ATerm b_29, ATerm t);
ATerm if_verbose2_1_0 (ATerm l_141 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_9 (ATerm y_73, ATerm z_73, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm m_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_9 (ATerm h_27, ATerm i_27, ATerm g_27, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_8 (ATerm y_45, ATerm z_45, ATerm t);
ATerm foldr_2_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_141 (ATerm), ATerm t);
static ATerm w_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm e_9 (ATerm s_31, ATerm t_31, ATerm u_31, ATerm t);
static ATerm f_9 (ATerm v_31, ATerm w_31, ATerm t);
ATerm lookup_table_0_1 (ATerm t_28, ATerm t);
ATerm new_hashtable_0_2 (ATerm a_32, ATerm b_32, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_8 (ATerm x_31, ATerm y_31, ATerm t);
static ATerm z_8 (ATerm c_32, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm a_136 (ATerm), ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm k_15 (ATerm t);
ATerm parse_options_3_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm y_132 (ATerm), ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm t);
static ATerm p_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
ATerm iowrap_3_0 (ATerm b_132 (ATerm), ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm t);
static ATerm g_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm c_0 = NULL,i_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_0 = ATgetFirst((ATermList) t);
      i_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_0 = NULL,y_0 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_0)), not_null(y_0));
          return(t);
        }
        t = i_0;
        t = q_0(t);
        if(((x_0 != NULL) && (x_0 != t)))
          _fail(t);
        else
          x_0 = t;
        t = c_0;
        t = p_0(t);
        if(((y_0 != NULL) && (y_0 != t)))
          _fail(t);
        else
          y_0 = t;
        t = i_0;
        t = reverse_acc_2_0(p_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_16;
      t = q_0(t);
    }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,j_1 = NULL,s_9 = NULL;
  j_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_1);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_1);
  s_9 = t;
  t = SSLsetAnnotations(s_9, g_1);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm p_1 = NULL;
  p_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_1), term_k_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm f_136 (ATerm), ATerm g_136 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 = NULL,f_1 = NULL;
      t = term_n_16;
      e_1 = t;
      t = term_o_16;
      f_1 = t;
      t = term_p_16;
      t = a_9(e_1, f_1, t);
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      t = fetch_1_0(k_0, t);
    }
  {
    ATerm s_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_136(t);
        t = echo_0_0(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = s_16;
      }
  }
  t = term_v_16;
  t = echo_0_0(t);
  t = term_x_16;
  c_1 = t;
  t = term_z_16;
  d_1 = t;
  t = term_c_17;
  t = a_9(c_1, d_1, t);
  t = reverse_acc_2_0(_id, m_0, t);
  t = map_1_0(n_0, t);
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_1 = NULL;
        t = g_136(t);
        q_1 = t;
        t = (ATerm) ATinsert(CheckATermList(q_1), term_h_17);
        t = echo_0_0(t);
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
      }
  }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,u_9 = NULL;
  z_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_1);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_1);
  u_9 = t;
  t = SSLsetAnnotations(u_9, x_1);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_1 = NULL;
  u_1 = t;
  {
    ATerm i_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL,w_1 = NULL;
        t = term_n_16;
        v_1 = t;
        t = term_o_16;
        w_1 = t;
        t = term_p_16;
        t = a_9(v_1, w_1, t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = i_17;
        t = fetch_1_0(u_0, t);
      }
  }
  t = u_1;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm n_141 (ATerm), ATerm t)
{
  ATerm b_2 = NULL;
  b_2 = t;
  {
    ATerm n_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
        t = term_n_16;
        e_2 = t;
        t = term_q_17;
        f_2 = t;
        t = term_r_17;
        t = a_9(e_2, f_2, t);
        d_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_2, term_s_17);
        t = geq_0_0(t);
        t = b_2;
        t = n_141(t);
        LocalPopChoice(p_17);
      }
    else
      {
        t = n_17;
        t = b_2;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,w_9 = NULL;
  static ATerm v_0 (ATerm t);
  static ATerm w_0 (ATerm t);
  static ATerm v_0 (ATerm t)
  {
    ATerm m_2 = NULL,n_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,y_2 = NULL,z_2 = NULL,b_3 = NULL,d_3 = NULL,a_10 = NULL,x_9 = NULL;
    d_3 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        u_2 = ATgetArgument(t, 0);
        v_2 = ATgetArgument(t, 1);
        y_2 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_3);
    t_2 = t;
    t = u_2;
    t = o_104(t);
    z_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_2, v_2, y_2);
    x_9 = t;
    t = SSLsetAnnotations(x_9, t_2);
    b_3 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        n_2 = ATgetArgument(t, 0);
        p_2 = ATgetArgument(t, 1);
        q_2 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_3);
    m_2 = t;
    t = p_2;
    t = o_104(t);
    r_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, n_2, r_2, q_2);
    a_10 = t;
    t = SSLsetAnnotations(a_10, m_2);
    return(t);
  }
  static ATerm w_0 (ATerm t)
  {
    ATerm f_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,b_10 = NULL;
    m_3 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        h_3 = ATgetArgument(t, 0);
        j_3 = ATgetArgument(t, 1);
        k_3 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_3);
    f_3 = t;
    t = k_3;
    t = o_104(t);
    l_3 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_3, j_3, l_3);
    b_10 = t;
    t = SSLsetAnnotations(b_10, f_3);
    return(t);
  }
  l_2 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      i_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
      k_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_2);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, i_2, j_2, k_2);
  w_9 = t;
  t = SSLsetAnnotations(w_9, h_2);
  t = abstract_choice_2_0(v_0, w_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm n_104 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,m_10 = NULL;
  static ATerm k_1 (ATerm t);
  static ATerm l_1 (ATerm t);
  static ATerm k_1 (ATerm t)
  {
    ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,y_3 = NULL,r_10 = NULL;
    y_3 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        u_3 = ATgetArgument(t, 0);
        v_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_3);
    t_3 = t;
    t = u_3;
    t = n_104(t);
    w_3 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, w_3, v_3);
    r_10 = t;
    t = SSLsetAnnotations(r_10, t_3);
    return(t);
  }
  static ATerm l_1 (ATerm t)
  {
    ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,t_10 = NULL;
    d_4 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        a_4 = ATgetArgument(t, 0);
        b_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_4);
    z_3 = t;
    t = b_4;
    t = n_104(t);
    c_4 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, a_4, c_4);
    t_10 = t;
    t = SSLsetAnnotations(t_10, z_3);
    return(t);
  }
  r_3 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      p_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_3);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, p_3, q_3);
  m_10 = t;
  t = SSLsetAnnotations(m_10, o_3);
  t = abstract_choice_2_0(k_1, l_1, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,k_4 = NULL,m_4 = NULL,p_4 = NULL,r_4 = NULL;
  p_4 = t;
  t = save_MarkVar_0_0(t);
  e_4 = t;
  t = p_4;
  t = p_104(t);
  m_4 = t;
  t = save_MarkVar_0_0(t);
  f_4 = t;
  t = term_t_17;
  t = table_destroy_0_0(t);
  t = term_t_17;
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, e_4);
  t = u_7(r_4, e_4, t);
  t = m_4;
  t = q_104(t);
  k_4 = t;
  t = f_4;
  t = isect_MarkVar_0_0(t);
  t = k_4;
  return(t);
}
ATerm mark_choice_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm a_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,b_11 = NULL;
  static ATerm m_1 (ATerm t);
  static ATerm s_1 (ATerm t);
  static ATerm m_1 (ATerm t)
  {
    ATerm h_5 = NULL,j_5 = NULL,k_5 = NULL,m_5 = NULL,n_5 = NULL,e_11 = NULL;
    n_5 = t;
    if(match_cons(t, sym_Choice_2))
      {
        j_5 = ATgetArgument(t, 0);
        k_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_5);
    h_5 = t;
    t = j_5;
    t = m_104(t);
    m_5 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, m_5, k_5);
    e_11 = t;
    t = SSLsetAnnotations(e_11, h_5);
    return(t);
  }
  static ATerm s_1 (ATerm t)
  {
    ATerm o_5 = NULL,q_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,f_11 = NULL;
    u_5 = t;
    if(match_cons(t, sym_Choice_2))
      {
        q_5 = ATgetArgument(t, 0);
        s_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_5);
    o_5 = t;
    t = s_5;
    t = m_104(t);
    t_5 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, q_5, t_5);
    f_11 = t;
    t = SSLsetAnnotations(f_11, o_5);
    return(t);
  }
  g_5 = t;
  if(match_cons(t, sym_Choice_2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_5);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, e_5, f_5);
  b_11 = t;
  t = SSLsetAnnotations(b_11, a_5);
  t = abstract_choice_2_0(m_1, s_1, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,j_6 = NULL,k_6 = NULL,k_11 = NULL,j_11 = NULL;
  x_5 = t;
  t = save_MarkVar_0_0(t);
  w_5 = t;
  t = x_5;
  if(match_cons(t, sym_Rec_2))
    {
      e_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_5);
  d_6 = t;
  t = j_6;
  t = mark_buv_0_0(t);
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, e_6, k_6);
  j_11 = t;
  t = SSLsetAnnotations(j_11, d_6);
  t = w_5;
  t = isect_MarkVar_0_0(t);
  t = x_5;
  if(match_cons(t, sym_Rec_2))
    {
      a_6 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_5);
  y_5 = t;
  t = b_6;
  t = mark_buv_0_0(t);
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, a_6, c_6);
  k_11 = t;
  t = SSLsetAnnotations(k_11, y_5);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,w_6 = NULL,y_6 = NULL,d_7 = NULL,e_7 = NULL,m_7 = NULL,n_7 = NULL,g_8 = NULL,l_8 = NULL,n_8 = NULL,x_8 = NULL,j_9 = NULL,k_9 = NULL,n_9 = NULL,s_11 = NULL,r_11 = NULL,n_11 = NULL;
  n_9 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
      j_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_9);
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, n_8, x_8, j_9);
  n_11 = t;
  t = SSLsetAnnotations(n_11, l_8);
  k_9 = t;
  t = save_MarkVar_0_0(t);
  o_6 = t;
  t = k_9;
  if(match_cons(t, sym_PrimT_3))
    {
      d_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
      m_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_9);
  y_6 = t;
  t = m_7;
  t = map_1_0(t_1, t);
  n_7 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, d_7, e_7, n_7);
  r_11 = t;
  t = SSLsetAnnotations(r_11, y_6);
  g_8 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      q_6 = ATgetArgument(t, 0);
      s_6 = ATgetArgument(t, 1);
      t_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_8);
  p_6 = t;
  t = s_6;
  t = mark_buv_0_0(t);
  u_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, q_6, u_6, t_6);
  s_11 = t;
  t = SSLsetAnnotations(s_11, p_6);
  w_6 = t;
  t = o_6;
  t = isect_MarkVar_0_0(t);
  t = w_6;
  return(t);
}
ATerm alltd_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  static ATerm o_9 (ATerm t);
  static ATerm o_9 (ATerm t)
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_107(t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = SRTS_all(o_9, t);
      }
    return(t);
  }
  t = o_9(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  p_12 = t;
  if(match_cons(t, sym_CallT_3))
    {
      q_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
      o_12 = ATgetArgument(t, 2);
      {
        ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,i_1 = NULL,n_1 = NULL,o_1 = NULL,r_1 = NULL,a_2 = NULL,o_2 = NULL,s_2 = NULL,w_2 = NULL,e_3 = NULL,j_12 = NULL,i_12 = NULL,f_12 = NULL;
        t = SSLgetAnnotations(p_12);
        w_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, q_12, r_12, o_12);
        f_12 = t;
        t = SSLsetAnnotations(f_12, w_2);
        e_3 = t;
        t = save_MarkVar_0_0(t);
        r_0 = t;
        t = e_3;
        if(match_cons(t, sym_CallT_3))
          {
            o_1 = ATgetArgument(t, 0);
            r_1 = ATgetArgument(t, 1);
            a_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_3);
        n_1 = t;
        t = a_2;
        t = map_1_0(c_2, t);
        o_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, o_1, r_1, o_2);
        i_12 = t;
        t = SSLsetAnnotations(i_12, n_1);
        s_2 = t;
        if(match_cons(t, sym_CallT_3))
          {
            t_0 = ATgetArgument(t, 0);
            z_0 = ATgetArgument(t, 1);
            a_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_2);
        s_0 = t;
        t = z_0;
        t = mark_buv_0_0(t);
        b_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, t_0, b_1, a_1);
        j_12 = t;
        t = SSLsetAnnotations(j_12, s_0);
        i_1 = t;
        t = r_0;
        t = isect_MarkVar_0_0(t);
        t = i_1;
      }
    }
  else
    {
      ATerm j_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL,q_4 = NULL,s_4 = NULL,t_4 = NULL,w_4 = NULL,t_12 = NULL,s_12 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          q_12 = ATgetArgument(t, 0);
          r_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_12);
      t_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, q_12, r_12);
      s_12 = t;
      t = SSLsetAnnotations(s_12, t_4);
      w_4 = t;
      t = save_MarkVar_0_0(t);
      j_4 = t;
      t = w_4;
      if(match_cons(t, sym_Call_2))
        {
          n_4 = ATgetArgument(t, 0);
          o_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_4);
      l_4 = t;
      t = o_4;
      t = mark_buv_0_0(t);
      q_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, n_4, q_4);
      t_12 = t;
      t = SSLsetAnnotations(t_12, l_4);
      s_4 = t;
      t = j_4;
      t = isect_MarkVar_0_0(t);
      t = s_4;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm p_7 (ATerm p_25, ATerm q_25, ATerm r_25, ATerm t)
{
  ATerm u_12 = NULL;
  static ATerm x_2 (ATerm t);
  static ATerm x_2 (ATerm t)
  {
    t = q_25;
    t = map_1_0(IntroduceBound_0_0, t);
    t = r_25;
    t = mark_build_vars_0_0(t);
    if(((u_12 != NULL) && (u_12 != t)))
      _fail(t);
    else
      u_12 = t;
    return(t);
  }
  t = scope_2_0(g_2, x_2, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, p_25, q_25, not_null(u_12));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm q_7 (ATerm j_25, ATerm n_25, ATerm l_25, ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
  static ATerm c_3 (ATerm t);
  static ATerm c_3 (ATerm t)
  {
    t = j_25;
    t = mark_match_vars_0_0(t);
    if(((v_12 != NULL) && (v_12 != t)))
      _fail(t);
    else
      v_12 = t;
    t = l_25;
    t = mark_buv_0_0(t);
    if(((w_12 != NULL) && (w_12 != t)))
      _fail(t);
    else
      w_12 = t;
    t = n_25;
    t = mark_build_vars_0_0(t);
    if(((x_12 != NULL) && (x_12 != t)))
      _fail(t);
    else
      x_12 = t;
    return(t);
  }
  t = scope_2_0(a_3, c_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_12), not_null(x_12), not_null(w_12)));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm n_13 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_13);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm x_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = x_17;
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            {
              ATerm c_18 = t;
              int d_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_13 = ATgetArgument(t, 0);
                      q_13 = ATgetArgument(t, 1);
                      r_13 = ATgetArgument(t, 2);
                      s_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_13;
                  t = map_1_0(x_3, t);
                  LocalPopChoice(d_18);
                }
              else
                {
                  t = c_18;
                  {
                    ATerm e_18 = t;
                    int f_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_18);
                      }
                    else
                      {
                        t = e_18;
                        t = dynrule_targs_1_0(g_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm i_14 = NULL;
  ATerm h_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_14 = ATgetArgument(t, 0);
          {
            ATerm l_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_18);
      t = i_14;
    }
  else
    {
      t = h_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_14;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = map_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm n_14 = NULL;
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_14 = ATgetArgument(t, 0);
          {
            ATerm o_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_18);
      t = n_14;
    }
  else
    {
      t = m_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_14;
    }
  return(t);
}
static ATerm r_7 (ATerm d_25, ATerm h_25, ATerm f_25, ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  static ATerm i_3 (ATerm t);
  static ATerm i_3 (ATerm t)
  {
    t = d_25;
    t = free_vars_3_0(n_3, s_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = d_25;
    t = mark_match_vars_0_0(t);
    if(((k_13 != NULL) && (k_13 != t)))
      _fail(t);
    else
      k_13 = t;
    t = f_25;
    t = mark_buv_0_0(t);
    if(((l_13 != NULL) && (l_13 != t)))
      _fail(t);
    else
      l_13 = t;
    t = h_25;
    t = mark_build_vars_0_0(t);
    if(((m_13 != NULL) && (m_13 != t)))
      _fail(t);
    else
      m_13 = t;
    return(t);
  }
  t = scope_2_0(g_3, i_3, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_13), not_null(m_13), not_null(l_13)));
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm b_17 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_17);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
            {
              ATerm u_18 = t;
              int v_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_17 = NULL,e_17 = NULL,j_17 = NULL,k_17 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_17 = ATgetArgument(t, 0);
                      e_17 = ATgetArgument(t, 1);
                      j_17 = ATgetArgument(t, 2);
                      k_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_17;
                  t = map_1_0(v_4, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_18);
                      }
                    else
                      {
                        t = w_18;
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
static ATerm v_4 (ATerm t)
{
  ATerm i_18 = NULL;
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_18 = ATgetArgument(t, 0);
          {
            ATerm a_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_18);
      t = i_18;
    }
  else
    {
      t = y_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_18;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = map_1_0(y_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm r_18 = NULL;
  ATerm c_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_18 = ATgetArgument(t, 0);
          {
            ATerm f_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_19);
      t = r_18;
    }
  else
    {
      t = c_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_18;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm x_19 = NULL;
  ATerm h_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_19 = ATgetArgument(t, 0);
          {
            ATerm l_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_19);
      t = x_19;
    }
  else
    {
      t = h_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_19;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm e_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_20);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm p_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_19);
          }
        else
          {
            t = p_19;
            {
              ATerm t_19 = t;
              int u_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,l_20 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_20 = ATgetArgument(t, 0);
                      h_20 = ATgetArgument(t, 1);
                      i_20 = ATgetArgument(t, 2);
                      l_20 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_20;
                  t = map_1_0(l_5, t);
                  LocalPopChoice(u_19);
                }
              else
                {
                  t = t_19;
                  {
                    ATerm v_19 = t;
                    int w_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_19);
                      }
                    else
                      {
                        t = v_19;
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
  ATerm z_20 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_20 = ATgetArgument(t, 0);
          {
            ATerm b_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_19);
      t = z_20;
    }
  else
    {
      t = y_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_20;
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
  ATerm g_21 = NULL;
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_21 = ATgetArgument(t, 0);
          {
            ATerm f_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_20);
      t = g_21;
    }
  else
    {
      t = c_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_21;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,c_16 = NULL,f_16 = NULL,h_16 = NULL,i_16 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      v_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
      x_15 = ATgetArgument(t, 2);
      {
        ATerm q_16 = NULL,w_16 = NULL,y_16 = NULL,a_17 = NULL;
        t = x_15;
        if(match_cons(t, sym_Rule_3))
          {
            q_15 = ATgetArgument(t, 0);
            r_15 = ATgetArgument(t, 1);
            s_15 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = x_15;
        t = free_vars_3_0(i_4, u_4, tboundin_3_0, t);
        q_16 = t;
        {
          static ATerm b_5 (ATerm t);
          static ATerm b_5 (ATerm t)
          {
            t = q_16;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = q_15;
            t = mark_match_vars_0_0(t);
            if(((w_16 != NULL) && (w_16 != t)))
              _fail(t);
            else
              w_16 = t;
            t = s_15;
            t = mark_buv_0_0(t);
            if(((y_16 != NULL) && (y_16 != t)))
              _fail(t);
            else
              y_16 = t;
            t = r_15;
            t = mark_build_vars_0_0(t);
            if(((a_17 != NULL) && (a_17 != t)))
              _fail(t);
            else
              a_17 = t;
            return(t);
          }
          t = scope_2_0(z_4, b_5, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, v_15, w_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_16), not_null(a_17), not_null(y_16)));
      }
    }
  else
    {
      ATerm d_19 = NULL,i_19 = NULL,k_19 = NULL,m_19 = NULL,q_19 = NULL,r_19 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          v_15 = ATgetArgument(t, 0);
          w_15 = ATgetArgument(t, 1);
          x_15 = ATgetArgument(t, 2);
          c_16 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = c_16;
      if(match_cons(t, sym_Rule_3))
        {
          f_16 = ATgetArgument(t, 0);
          h_16 = ATgetArgument(t, 1);
          i_16 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_15;
      t = map_1_0(c_5, t);
      d_19 = t;
      t = c_16;
      t = free_vars_3_0(d_5, i_5, tboundin_3_0, t);
      r_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_19, d_19);
      t = diff_0_0(t);
      i_19 = t;
      {
        static ATerm f_6 (ATerm t);
        static ATerm f_6 (ATerm t)
        {
          t = d_19;
          t = map_1_0(IntroduceBound_0_0, t);
          t = i_19;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = f_16;
          t = mark_match_vars_0_0(t);
          if(((k_19 != NULL) && (k_19 != t)))
            _fail(t);
          else
            k_19 = t;
          t = i_16;
          t = mark_buv_0_0(t);
          if(((m_19 != NULL) && (m_19 != t)))
            _fail(t);
          else
            m_19 = t;
          t = h_16;
          t = mark_build_vars_0_0(t);
          if(((q_19 != NULL) && (q_19 != t)))
            _fail(t);
          else
            q_19 = t;
          return(t);
        }
        t = scope_2_0(v_5, f_6, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, v_15, w_15, x_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_19), not_null(q_19), not_null(m_19)));
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm j_21 = NULL,n_21 = NULL,o_21 = NULL;
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_21);
  n_21 = t;
  t = term_n_20;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_21), term_n_20);
  t = h_8(g_6, n_21, o_21, t);
  t = j_21;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm y_21 = NULL;
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_21 = ATgetArgument(t, 0);
          {
            ATerm q_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_20);
      t = y_21;
    }
  else
    {
      t = o_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_21;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm s_7 (ATerm b_24, ATerm c_24, ATerm d_24, ATerm f_24, ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL;
  t = d_24;
  t = map_1_0(h_6, t);
  u_21 = t;
  {
    static ATerm l_6 (ATerm t);
    static ATerm l_6 (ATerm t)
    {
      t = u_21;
      t = map_1_0(IntroduceBound_0_0, t);
      t = f_24;
      t = mark_buv_0_0(t);
      if(((v_21 != NULL) && (v_21 != t)))
        _fail(t);
      else
        v_21 = t;
      return(t);
    }
    t = scope_2_0(i_6, l_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, b_24, c_24, d_24, not_null(v_21));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,p_23 = NULL,q_23 = NULL,u_23 = NULL,h_26 = NULL;
  k_23 = t;
  if(match_cons(t, sym__2))
    {
      l_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_23;
  if(match_cons(t, sym_Undefined_0))
    {
      t = l_23;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_r_20;
        }
      else
        {
          t = term_r_20;
        }
    }
  else
    {
      ATerm s_20 = t;
      int t_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm u_20 = ATgetArgument(t, 0);
              h_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(t_20);
          t = l_23;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_r_20;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  p_23 = ATgetArgument(t, 0);
                  q_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm v_20 = t;
                int w_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, q_23, h_26);
                    {
                      ATerm y_20 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm z_5 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              z_5 = ATgetArgument(t, 0);
                              if((z_5 != ATgetArgument(t, 1)))
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
                          t = y_20;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, p_23, term_a_21);
                    LocalPopChoice(w_20);
                  }
                else
                  {
                    t = v_20;
                    t = h_26;
                    if((q_23 != t))
                      {
                        _fail(t);
                      }
                    t = l_23;
                  }
              }
            }
        }
      else
        {
          t = s_20;
          t = l_23;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_r_20;
        }
    }
  return(t);
}
static ATerm t_7 (ATerm m_22, ATerm n_22, ATerm l_22, ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
  t = term_t_17;
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, m_22);
  t = a_9(s_26, m_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_26 = ATgetFirst((ATermList) t);
      {
        ATerm b_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_22, q_26);
  t = CompareEntries_0_0(t);
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, (ATerm) ATinsert(CheckATermList(l_22), r_26));
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,c_28 = NULL,s_28 = NULL,e_29 = NULL;
  e_29 = t;
  if(match_cons(t, sym__2))
    {
      y_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
      t = z_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_28 = ATgetFirst((ATermList) t);
          s_28 = (ATerm) ATgetNext((ATermList) t);
          t = c_28;
          {
            ATerm c_21 = t;
            int d_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm e_21 = ATgetArgument(t, 0);
                    ATerm f_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(d_21);
                t = y_27;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = e_29;
                  }
                else
                  {
                    ATerm h_21 = t;
                    int i_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = e_29;
                        t = t_7(y_27, c_28, s_28, t);
                        LocalPopChoice(i_21);
                      }
                    else
                      {
                        t = h_21;
                        t = e_29;
                      }
                  }
              }
            else
              {
                t = c_21;
                t = y_27;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = e_29;
                  }
                else
                  {
                    t = e_29;
                  }
              }
          }
        }
      else
        {
          t = y_27;
          if(match_cons(t, sym_Scopes_0))
            {
              t = e_29;
            }
          else
            {
              t = e_29;
            }
        }
    }
  else
    {
      t = e_29;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  t = map_1_0(m_6, t);
  j_27 = t;
  t = term_t_17;
  t = table_destroy_0_0(t);
  t = term_t_17;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, j_27);
  t = u_7(k_27, j_27, t);
  t = j_27;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,i_30 = NULL;
  i_30 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm p_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_21);
        t = i_30;
      }
    else
      {
        t = l_21;
        {
          ATerm q_21 = t;
          int t_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm w_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(t_21);
              t = i_30;
            }
          else
            {
              t = q_21;
              {
                ATerm x_21 = t;
                int z_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm a_22 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(z_21);
                    t = i_30;
                  }
                else
                  {
                    t = x_21;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm b_22 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = i_30;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  f_30 = t;
  t = i_30;
  t = SRTS_one(mark_buv_0_0, t);
  g_30 = t;
  t = f_30;
  t = isect_MarkVar_0_0(t);
  t = g_30;
  return(t);
}
static ATerm u_7 (ATerm k_28, ATerm j_28, ATerm t)
{
  static ATerm n_6 (ATerm t);
  static ATerm n_6 (ATerm t)
  {
    ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
    if(match_cons(t, sym__2))
      {
        r_30 = ATgetArgument(t, 0);
        s_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, k_28, r_30, s_30);
    t = lookup_table_0_1(k_28, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        t_30 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = e_9(r_30, s_30, t_30, t);
    t = (ATerm) ATmakeAppl(sym__3, k_28, r_30, s_30);
    return(t);
  }
  t = j_28;
  t = map_1_0(n_6, t);
  return(t);
}
static ATerm v_7 (ATerm z_31, ATerm t)
{
  t = SSL_hashtable_keys(z_31);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  static ATerm v_6 (ATerm t);
  static ATerm v_6 (ATerm t)
  {
    ATerm x_30 = NULL,y_30 = NULL;
    x_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_30), x_30);
    t = a_9(not_null(v_30), x_30, t);
    y_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_30, y_30);
    return(t);
  }
  if(((v_30 != NULL) && (v_30 != t)))
    _fail(t);
  else
    v_30 = t;
  t = lookup_table_0_1(v_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(w_30, t);
  t = map_1_0(v_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_t_17;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm z_22, ATerm t)
{
  ATerm i_31 = NULL,p_31 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm x_6 (ATerm t);
    static ATerm x_6 (ATerm t)
    {
      static ATerm k_33 (ATerm q_31, ATerm t);
      static ATerm k_33 (ATerm q_31, ATerm t)
      {
        ATerm r_31 = NULL,d_32 = NULL,k_32 = NULL,l_32 = NULL;
        t = q_31;
        if(match_cons(t, sym__2))
          {
            ATerm c_22 = ATgetArgument(t, 0);
            r_31 = c_22;
            if(match_cons(c_22, sym_Var_1))
              {
                d_32 = ATgetArgument(c_22, 0);
              }
            else
              _fail(t);
            {
              ATerm g_22 = ATgetArgument(t, 1);
              if(((ATgetType(g_22) == AT_LIST) && !(ATisEmpty(g_22))))
                {
                  ATerm j_22 = ATgetFirst((ATermList) g_22);
                  if(match_cons(j_22, sym_Defined_2))
                    {
                      k_32 = ATgetArgument(j_22, 0);
                      {
                        ATerm k_22 = ATgetArgument(j_22, 1);
                        if((ATgetSymbol((ATermAppl) k_22) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  l_32 = (ATerm) ATgetNext((ATermList) g_22);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_22;
        {
          static ATerm b_7 (ATerm t);
          static ATerm b_7 (ATerm t)
          {
            if((d_32 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(b_7, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, r_31, (ATerm) ATinsert(CheckATermList(l_32), (ATerm) ATmakeAppl(sym_Defined_2, k_32, term_a_21)));
        return(t);
      }
      ATerm n_32 = NULL,p_32 = NULL;
      p_32 = t;
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                n_32 = ATgetArgument(t, 0);
                {
                  ATerm i_23 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_23);
            t = n_32;
            if(match_cons(t, sym_Scopes_0))
              {
                t = p_32;
              }
            else
              {
                ATerm j_23 = t;
                int m_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = k_33(p_32, t);
                    LocalPopChoice(m_23);
                  }
                else
                  {
                    t = j_23;
                    t = p_32;
                  }
              }
          }
        else
          {
            t = g_23;
            {
              ATerm n_23 = t;
              int o_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_33(p_32, t);
                  LocalPopChoice(o_23);
                }
              else
                {
                  t = n_23;
                  t = p_32;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(x_6, t);
  }
  i_31 = t;
  t = term_t_17;
  t = table_destroy_0_0(t);
  t = term_t_17;
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, i_31);
  t = u_7(p_31, i_31, t);
  t = i_31;
  return(t);
}
ATerm tboundin_3_0 (ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm m_142 (ATerm), ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  i_44 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_44 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
      {
        ATerm r_6 = NULL,z_6 = NULL,a_7 = NULL,o_22 = NULL;
        t = SSLgetAnnotations(i_44);
        r_6 = t;
        t = j_44;
        t = m_142(t);
        z_6 = t;
        t = h_44;
        t = k_142(t);
        a_7 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, z_6, a_7);
        o_22 = t;
        t = SSLsetAnnotations(o_22, r_6);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          j_44 = ATgetArgument(t, 0);
          {
            ATerm j_7 = NULL,l_7 = NULL,w_7 = NULL,x_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,k_8 = NULL,t_22 = NULL,s_22 = NULL;
            t = SSLgetAnnotations(i_44);
            j_7 = t;
            t = j_44;
            if(match_cons(t, sym_Rule_3))
              {
                w_7 = ATgetArgument(t, 0);
                x_7 = ATgetArgument(t, 1);
                b_8 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_44);
            l_7 = t;
            t = w_7;
            t = k_142(t);
            c_8 = t;
            t = x_7;
            t = k_142(t);
            d_8 = t;
            t = b_8;
            t = k_142(t);
            e_8 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, c_8, d_8, e_8);
            s_22 = t;
            t = SSLsetAnnotations(s_22, l_7);
            k_8 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, k_8);
            t_22 = t;
            t = SSLsetAnnotations(t_22, j_7);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              j_44 = ATgetArgument(t, 0);
              h_44 = ATgetArgument(t, 1);
              f_44 = ATgetArgument(t, 2);
              {
                ATerm q_9 = NULL,d_10 = NULL,e_10 = NULL,g_10 = NULL,u_22 = NULL;
                t = SSLgetAnnotations(i_44);
                q_9 = t;
                t = j_44;
                t = m_142(t);
                d_10 = t;
                t = h_44;
                t = m_142(t);
                e_10 = t;
                t = f_44;
                t = m_142(t);
                g_10 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, d_10, e_10, g_10);
                u_22 = t;
                t = SSLsetAnnotations(u_22, q_9);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  j_44 = ATgetArgument(t, 0);
                  h_44 = ATgetArgument(t, 1);
                  f_44 = ATgetArgument(t, 2);
                  g_44 = ATgetArgument(t, 3);
                  {
                    ATerm w_10 = NULL,p_11 = NULL,q_11 = NULL,t_11 = NULL,v_11 = NULL,v_22 = NULL;
                    t = SSLgetAnnotations(i_44);
                    w_10 = t;
                    t = j_44;
                    t = m_142(t);
                    p_11 = t;
                    t = h_44;
                    t = m_142(t);
                    q_11 = t;
                    t = f_44;
                    t = m_142(t);
                    t_11 = t;
                    t = g_44;
                    t = k_142(t);
                    v_11 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, p_11, q_11, t_11, v_11);
                    v_22 = t;
                    t = SSLsetAnnotations(v_22, w_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_44 = ATgetArgument(t, 0);
                      h_44 = ATgetArgument(t, 1);
                      f_44 = ATgetArgument(t, 2);
                      g_44 = ATgetArgument(t, 3);
                      {
                        ATerm m_12 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,w_22 = NULL;
                        t = SSLgetAnnotations(i_44);
                        m_12 = t;
                        t = j_44;
                        t = m_142(t);
                        b_13 = t;
                        t = h_44;
                        t = m_142(t);
                        c_13 = t;
                        t = f_44;
                        t = m_142(t);
                        d_13 = t;
                        t = g_44;
                        t = k_142(t);
                        e_13 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_13, c_13, d_13, e_13);
                        w_22 = t;
                        t = SSLsetAnnotations(w_22, m_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          j_44 = ATgetArgument(t, 0);
                          h_44 = ATgetArgument(t, 1);
                          {
                            ATerm x_13 = NULL,c_14 = NULL,d_14 = NULL,x_22 = NULL;
                            t = SSLgetAnnotations(i_44);
                            x_13 = t;
                            t = j_44;
                            t = m_142(t);
                            c_14 = t;
                            t = h_44;
                            t = k_142(t);
                            d_14 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, c_14, d_14);
                            x_22 = t;
                            t = SSLsetAnnotations(x_22, x_13);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              j_44 = ATgetArgument(t, 0);
                              h_44 = ATgetArgument(t, 1);
                              {
                                ATerm v_14 = NULL,a_15 = NULL,b_15 = NULL,y_22 = NULL;
                                t = SSLgetAnnotations(i_44);
                                v_14 = t;
                                t = j_44;
                                t = m_142(t);
                                a_15 = t;
                                t = h_44;
                                t = k_142(t);
                                b_15 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, a_15, b_15);
                                y_22 = t;
                                t = SSLsetAnnotations(y_22, v_14);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  j_44 = ATgetArgument(t, 0);
                                  h_44 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_15 = NULL,m_15 = NULL,n_15 = NULL,a_23 = NULL;
                                    t = SSLgetAnnotations(i_44);
                                    j_15 = t;
                                    t = j_44;
                                    t = m_142(t);
                                    m_15 = t;
                                    t = h_44;
                                    t = k_142(t);
                                    n_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, m_15, n_15);
                                    a_23 = t;
                                    t = SSLsetAnnotations(a_23, j_15);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      j_44 = ATgetArgument(t, 0);
                                      {
                                        ATerm b_16 = NULL,e_16 = NULL,b_23 = NULL;
                                        t = SSLgetAnnotations(i_44);
                                        b_16 = t;
                                        t = j_44;
                                        t = k_142(t);
                                        e_16 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, e_16);
                                        b_23 = t;
                                        t = SSLsetAnnotations(b_23, b_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          j_44 = ATgetArgument(t, 0);
                                          {
                                            ATerm r_16 = NULL,t_16 = NULL,c_23 = NULL;
                                            t = SSLgetAnnotations(i_44);
                                            r_16 = t;
                                            t = j_44;
                                            t = k_142(t);
                                            t_16 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, t_16);
                                            c_23 = t;
                                            t = SSLsetAnnotations(c_23, r_16);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              j_44 = ATgetArgument(t, 0);
                                              {
                                                ATerm m_17 = NULL,o_17 = NULL,d_23 = NULL;
                                                t = SSLgetAnnotations(i_44);
                                                m_17 = t;
                                                t = j_44;
                                                t = k_142(t);
                                                o_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, o_17);
                                                d_23 = t;
                                                t = SSLsetAnnotations(d_23, m_17);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  j_44 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm u_17 = NULL,y_17 = NULL,e_23 = NULL;
                                                    t = SSLgetAnnotations(i_44);
                                                    u_17 = t;
                                                    t = j_44;
                                                    t = k_142(t);
                                                    y_17 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, y_17);
                                                    e_23 = t;
                                                    t = SSLsetAnnotations(e_23, u_17);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm g_18 = NULL,k_18 = NULL,f_23 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      j_44 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(i_44);
                                                  g_18 = t;
                                                  t = j_44;
                                                  t = k_142(t);
                                                  k_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, k_18);
                                                  f_23 = t;
                                                  t = SSLsetAnnotations(f_23, g_18);
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
ATerm dynrule_targs_1_0 (ATerm t_142 (ATerm), ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,f_47 = NULL;
  ATerm r_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          y_46 = ATgetArgument(t, 0);
          {
            ATerm x_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_23);
      t = y_46;
      if(match_cons(t, sym_DynRuleId_1))
        {
          z_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_46;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm y_23 = ATgetArgument(t, 0);
          ATerm z_23 = ATgetArgument(t, 1);
          f_47 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_47;
    }
  else
    {
      t = r_23;
      {
        ATerm e_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                y_46 = ATgetArgument(t, 0);
                {
                  ATerm h_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_24);
            t = y_46;
            if(match_cons(t, sym_DynRuleId_1))
              {
                z_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_46;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm i_24 = ATgetArgument(t, 0);
                ATerm j_24 = ATgetArgument(t, 1);
                f_47 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_47;
          }
        else
          {
            t = e_24;
            if(match_cons(t, sym_AddDynRule_2))
              {
                y_46 = ATgetArgument(t, 0);
                {
                  ATerm n_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = y_46;
            if(match_cons(t, sym_DynRuleId_1))
              {
                z_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_46;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm o_24 = ATgetArgument(t, 0);
                ATerm p_24 = ATgetArgument(t, 1);
                f_47 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_47;
          }
      }
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm q_48 = NULL;
  ATerm q_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_48 = ATgetArgument(t, 0);
          {
            ATerm t_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_24);
      t = q_48;
    }
  else
    {
      t = q_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_48;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm c_49 = NULL;
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_49 = ATgetArgument(t, 0);
          {
            ATerm w_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_24);
      t = c_49;
    }
  else
    {
      t = u_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_49;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm k_48 = NULL;
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm c_25 = ATgetArgument(t, 0);
          ATerm e_25 = ATgetArgument(t, 1);
          k_48 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(b_25);
      t = k_48;
      t = map_1_0(c_7, t);
    }
  else
    {
      t = a_25;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm i_25 = ATgetArgument(t, 0);
          ATerm k_25 = ATgetArgument(t, 1);
          k_48 = ATgetArgument(t, 2);
          {
            ATerm m_25 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_48;
      t = map_1_0(f_7, t);
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm r_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_50);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm s_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_25);
    }
  else
    {
      t = s_25;
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_50 = ATgetArgument(t, 0);
                      a_51 = ATgetArgument(t, 1);
                      b_51 = ATgetArgument(t, 2);
                      c_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_51;
                  t = map_1_0(i_7, t);
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
                  {
                    ATerm a_26 = t;
                    int e_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_26);
                      }
                    else
                      {
                        t = a_26;
                        t = dynrule_targs_1_0(k_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm s_51 = NULL;
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_51 = ATgetArgument(t, 0);
          {
            ATerm i_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_26);
      t = s_51;
    }
  else
    {
      t = f_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_51;
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = map_1_0(c_9, t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm z_51 = NULL;
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_51 = ATgetArgument(t, 0);
          {
            ATerm l_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_26);
      t = z_51;
    }
  else
    {
      t = j_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_51;
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm h_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_52);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm m_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_26);
    }
  else
    {
      t = m_26;
      {
        ATerm p_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_26);
          }
        else
          {
            t = p_26;
            {
              ATerm u_26 = t;
              int x_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_52 = NULL,o_52 = NULL,w_52 = NULL,x_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_52 = ATgetArgument(t, 0);
                      o_52 = ATgetArgument(t, 1);
                      w_52 = ATgetArgument(t, 2);
                      x_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_52;
                  t = map_1_0(i_9, t);
                  LocalPopChoice(x_26);
                }
              else
                {
                  t = u_26;
                  {
                    ATerm y_26 = t;
                    int z_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(z_26);
                      }
                    else
                      {
                        t = y_26;
                        t = dynrule_targs_1_0(l_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm g_53 = NULL;
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_53 = ATgetArgument(t, 0);
          {
            ATerm c_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_27);
      t = g_53;
    }
  else
    {
      t = a_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_53;
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = map_1_0(m_9, t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm l_53 = NULL;
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_53 = ATgetArgument(t, 0);
          {
            ATerm a_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_27);
      t = l_53;
    }
  else
    {
      t = e_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_53;
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm c_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_54);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm b_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_28);
    }
  else
    {
      t = b_28;
      {
        ATerm e_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_28);
          }
        else
          {
            t = e_28;
            {
              ATerm h_28 = t;
              int p_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_54 = ATgetArgument(t, 0);
                      h_54 = ATgetArgument(t, 1);
                      i_54 = ATgetArgument(t, 2);
                      j_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_54;
                  t = map_1_0(t_9, t);
                  LocalPopChoice(p_28);
                }
              else
                {
                  t = h_28;
                  {
                    ATerm q_28 = t;
                    int w_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_28);
                      }
                    else
                      {
                        t = q_28;
                        t = dynrule_targs_1_0(v_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm v_54 = NULL;
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_54 = ATgetArgument(t, 0);
          {
            ATerm z_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_28);
      t = v_54;
    }
  else
    {
      t = x_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_54;
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = map_1_0(y_9, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm q_55 = NULL;
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_55 = ATgetArgument(t, 0);
          {
            ATerm f_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_29);
      t = q_55;
    }
  else
    {
      t = c_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_55;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm x_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_55);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_29);
          }
        else
          {
            t = i_29;
            {
              ATerm k_29 = t;
              int l_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_56 = ATgetArgument(t, 0);
                      h_56 = ATgetArgument(t, 1);
                      i_56 = ATgetArgument(t, 2);
                      j_56 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_56;
                  t = map_1_0(f_10, t);
                  LocalPopChoice(l_29);
                }
              else
                {
                  t = k_29;
                  {
                    ATerm m_29 = t;
                    int n_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_29);
                      }
                    else
                      {
                        t = m_29;
                        t = dynrule_targs_1_0(h_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm w_56 = NULL;
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_56 = ATgetArgument(t, 0);
          {
            ATerm s_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_29);
      t = w_56;
    }
  else
    {
      t = p_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_56;
    }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = map_1_0(i_10, t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm b_57 = NULL;
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_57 = ATgetArgument(t, 0);
          {
            ATerm v_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_29);
      t = b_57;
    }
  else
    {
      t = t_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_57;
    }
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm i_57 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_57);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm w_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_29);
    }
  else
    {
      t = w_29;
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm n_57 = NULL,o_57 = NULL,q_57 = NULL,x_57 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_57 = ATgetArgument(t, 0);
                      o_57 = ATgetArgument(t, 1);
                      q_57 = ATgetArgument(t, 2);
                      x_57 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_57;
                  t = map_1_0(l_10, t);
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                  {
                    ATerm d_30 = t;
                    int e_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_30);
                      }
                    else
                      {
                        t = d_30;
                        t = dynrule_targs_1_0(n_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm m_58 = NULL;
  ATerm h_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_58 = ATgetArgument(t, 0);
          {
            ATerm l_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_30);
      t = m_58;
    }
  else
    {
      t = h_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_58;
    }
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = map_1_0(o_10, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm u_58 = NULL;
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_58 = ATgetArgument(t, 0);
          {
            ATerm o_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_30);
      t = u_58;
    }
  else
    {
      t = m_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_58;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm n_50 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      n_50 = ATgetArgument(t, 0);
      t = n_50;
      t = free_vars_3_0(g_7, h_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          n_50 = ATgetArgument(t, 0);
          t = n_50;
          t = free_vars_3_0(g_9, h_9, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              n_50 = ATgetArgument(t, 0);
              t = n_50;
              t = free_vars_3_0(p_9, r_9, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  n_50 = ATgetArgument(t, 0);
                  t = n_50;
                  t = free_vars_3_0(z_9, c_10, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      n_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_50;
                  t = free_vars_3_0(j_10, k_10, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm q_59 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_59);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_30);
    }
  else
    {
      t = p_30;
      {
        ATerm u_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_30);
          }
        else
          {
            t = u_30;
            {
              ATerm b_31 = t;
              int c_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_59 = ATgetArgument(t, 0);
                      x_59 = ATgetArgument(t, 1);
                      y_59 = ATgetArgument(t, 2);
                      z_59 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_59;
                  t = map_1_0(s_10, t);
                  LocalPopChoice(c_31);
                }
              else
                {
                  t = b_31;
                  {
                    ATerm e_31 = t;
                    int f_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_31);
                      }
                    else
                      {
                        t = e_31;
                        t = dynrule_targs_1_0(u_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm j_60 = NULL;
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_60 = ATgetArgument(t, 0);
          {
            ATerm l_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_31);
      t = j_60;
    }
  else
    {
      t = g_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_60;
    }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = map_1_0(v_10, t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm y_60 = NULL;
  ATerm m_31 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_60 = ATgetArgument(t, 0);
          {
            ATerm f_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_32);
      t = y_60;
    }
  else
    {
      t = m_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_60;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm j_59 = NULL,n_59 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      n_59 = ATgetArgument(t, 0);
      t = n_59;
      if(match_cons(t, sym_Rule_3))
        {
          j_59 = ATgetArgument(t, 0);
          {
            ATerm g_32 = ATgetArgument(t, 1);
          }
          {
            ATerm h_32 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = j_59;
      t = free_vars_3_0(p_10, q_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          n_59 = ATgetArgument(t, 0);
          {
            ATerm i_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_59;
    }
  return(t);
}
static ATerm y_7 (ATerm p_119 (ATerm), ATerm r_53, ATerm q_53, ATerm t)
{
  static ATerm g_62 (ATerm t);
  static ATerm g_62 (ATerm t)
  {
    ATerm t_61 = NULL,u_61 = NULL,z_61 = NULL;
    t_61 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_53;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_61 = ATgetFirst((ATermList) t);
            z_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_32 = t;
          int m_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_61;
              {
                static ATerm x_10 (ATerm t);
                static ATerm x_10 (ATerm t)
                {
                  t = q_53;
                  return(t);
                }
                t = z_7(p_119, x_10, u_61, z_61, t);
              }
              t = g_62(t);
              LocalPopChoice(m_32);
            }
          else
            {
              t = j_32;
              {
                ATerm b_19 = NULL,g_19 = NULL,v_33 = NULL;
                t = SSLgetAnnotations(t_61);
                b_19 = t;
                t = z_61;
                t = g_62(t);
                g_19 = t;
                t = (ATerm) ATinsert(CheckATermList(g_19), u_61);
                v_33 = t;
                t = SSLsetAnnotations(v_33, b_19);
              }
            }
        }
      }
    return(t);
  }
  t = r_53;
  t = g_62(t);
  return(t);
}
ATerm foldr_3_0 (ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm w_122 (ATerm), ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL;
  p_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_62;
      t = u_122(t);
    }
  else
    {
      ATerm c_63 = NULL,g_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_62 = ATgetFirst((ATermList) t);
          r_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_62;
      t = w_122(t);
      c_63 = t;
      t = r_62;
      t = foldr_3_0(u_122, v_122, w_122, t);
      g_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_63, g_63);
      t = v_122(t);
    }
  return(t);
}
static ATerm z_7 (ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm v_53, ATerm u_53, ATerm t)
{
  t = t_119(t);
  {
    static ATerm y_10 (ATerm t);
    static ATerm y_10 (ATerm t)
    {
      ATerm k_63 = NULL;
      k_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_53, k_63);
      t = s_119(t);
      return(t);
    }
    t = fetch_1_0(y_10, t);
  }
  t = u_53;
  return(t);
}
static ATerm a_8 (ATerm k_119 (ATerm), ATerm p_53, ATerm o_53, ATerm t)
{
  static ATerm s_64 (ATerm t);
  static ATerm s_64 (ATerm t)
  {
    ATerm j_64 = NULL,n_64 = NULL,p_64 = NULL;
    j_64 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_64;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_64 = ATgetFirst((ATermList) t);
            p_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_32 = t;
          int q_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_64;
              {
                static ATerm z_10 (ATerm t);
                static ATerm z_10 (ATerm t)
                {
                  t = o_53;
                  return(t);
                }
                t = z_7(k_119, z_10, n_64, p_64, t);
              }
              t = s_64(t);
              LocalPopChoice(q_32);
            }
          else
            {
              t = o_32;
              {
                ATerm a_20 = NULL,j_20 = NULL,x_33 = NULL;
                t = SSLgetAnnotations(j_64);
                a_20 = t;
                t = p_64;
                t = s_64(t);
                j_20 = t;
                t = (ATerm) ATinsert(CheckATermList(j_20), n_64);
                x_33 = t;
                t = SSLsetAnnotations(x_33, a_20);
              }
            }
        }
      }
    return(t);
  }
  t = p_53;
  t = s_64(t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_115 (ATerm), ATerm t)
{
  static ATerm h_66 (ATerm t);
  static ATerm h_66 (ATerm t)
  {
    ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
    g_66 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_66 = ATgetFirst((ATermList) t);
        f_66 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_20 = NULL,k_21 = NULL,z_33 = NULL;
          t = SSLgetAnnotations(g_66);
          x_20 = t;
          t = f_66;
          t = h_66(t);
          k_21 = t;
          t = (ATerm) ATinsert(CheckATermList(k_21), e_66);
          z_33 = t;
          t = SSLsetAnnotations(z_33, x_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_66;
        t = v_115(t);
      }
    return(t);
  }
  t = h_66(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
  v_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_64;
    }
  else
    {
      static ATerm a_11 (ATerm t);
      static ATerm a_11 (ATerm t)
      {
        t = not_null(x_64);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_64 = ATgetFirst((ATermList) t);
          if(((x_64 != NULL) && (x_64 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_64;
      t = at_end_1_0(a_11, t);
    }
  return(t);
}
static ATerm g_67 (ATerm r_66, ATerm t)
{
  ATerm x_66 = NULL;
  t = SSL_explode_term(r_66);
  if(match_cons(t, sym__2))
    {
      ATerm r_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_66;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL;
  b_67 = t;
  if(match_cons(t, sym__2))
    {
      z_66 = ATgetArgument(t, 0);
      a_67 = ATgetArgument(t, 1);
      {
        ATerm s_32 = t;
        int t_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_11 (ATerm t);
            static ATerm c_11 (ATerm t)
            {
              t = a_67;
              return(t);
            }
            t = z_66;
            t = at_end_1_0(c_11, t);
            LocalPopChoice(t_32);
          }
        else
          {
            t = s_32;
            t = g_67(b_67, t);
          }
      }
    }
  else
    {
      t = g_67(b_67, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm t)
{
  static ATerm t_67 (ATerm t);
  static ATerm t_67 (ATerm t)
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_117(t);
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        {
          ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,o_67 = NULL,r_67 = NULL,s_67 = NULL,b_34 = NULL;
          t = j_117(t);
          s_67 = t;
          if(match_cons(t, sym__2))
            {
              j_67 = ATgetArgument(t, 0);
              k_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_67);
          i_67 = t;
          t = j_67;
          t = l_117(t);
          o_67 = t;
          t = k_67;
          t = t_67(t);
          r_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_67, r_67);
          b_34 = t;
          t = SSLsetAnnotations(b_34, i_67);
          t = k_117(t);
        }
      }
    return(t);
  }
  t = t_67(t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_32 = ATgetArgument(t, 0);
      if(((ATgetType(x_32) != AT_LIST) || !(ATisEmpty(x_32))))
        _fail(t);
      {
        ATerm y_32 = ATgetArgument(t, 1);
        if(((ATgetType(y_32) != AT_LIST) || !(ATisEmpty(y_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_32 = ATgetArgument(t, 0);
      if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
        {
          a_68 = ATgetFirst((ATermList) z_32);
          b_68 = (ATerm) ATgetNext((ATermList) z_32);
        }
      else
        _fail(t);
      {
        ATerm a_33 = ATgetArgument(t, 1);
        if(((ATgetType(a_33) == AT_LIST) && !(ATisEmpty(a_33))))
          {
            c_68 = ATgetFirst((ATermList) a_33);
            d_68 = (ATerm) ATgetNext((ATermList) a_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_68, c_68), (ATerm) ATmakeAppl(sym__2, b_68, d_68));
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL;
  if(match_cons(t, sym__2))
    {
      e_68 = ATgetArgument(t, 0);
      f_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_68), e_68);
  return(t);
}
static ATerm f_8 (ATerm a_792, ATerm f_792, ATerm n_77, ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL;
  t = SSL_explode_term(f_792);
  if(match_cons(t, sym__2))
    {
      v_67 = ATgetArgument(t, 0);
      x_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_792);
  if(match_cons(t, sym__2))
    {
      if((v_67 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_67, x_67);
  t = genzip_4_0(d_11, g_11, h_11, _id, t);
  y_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_67, n_77);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm t)
{
  static ATerm h_68 (ATerm t);
  static ATerm h_68 (ATerm t)
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_113(t);
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = e_113(t);
        t = h_68(t);
      }
    return(t);
  }
  t = h_68(t);
  return(t);
}
ATerm for_3_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm t)
{
  t = g_113(t);
  t = while_not_2_0(h_113, i_113, t);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm o_68 = NULL;
  o_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_68);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,d_34 = NULL;
  s_68 = t;
  if(match_cons(t, sym__2))
    {
      q_68 = ATgetArgument(t, 0);
      r_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_68);
  p_68 = t;
  t = r_68;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_68, r_68);
  d_34 = t;
  t = SSLsetAnnotations(d_34, p_68);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL;
  l_69 = t;
  if(match_cons(t, sym__2))
    {
      m_69 = ATgetArgument(t, 0);
      n_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_69;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_69 = ATgetFirst((ATermList) t);
      p_69 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_33 = t;
        int g_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_69(m_69, n_69, l_69, t);
            LocalPopChoice(g_33);
          }
        else
          {
            t = e_33;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_69), o_69), p_69);
          }
      }
    }
  else
    {
      t = z_69(m_69, n_69, l_69, t);
    }
  return(t);
}
static ATerm z_69 (ATerm t_68, ATerm u_68, ATerm v_68, ATerm t)
{
  ATerm w_68 = NULL,z_68 = NULL,e_34 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL;
  t = SSLgetAnnotations(v_68);
  w_68 = t;
  t = u_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_69 = ATgetFirst((ATermList) t);
      f_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_69;
  if(match_cons(t, sym__2))
    {
      d_69 = ATgetArgument(t, 0);
      e_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_69;
        if((d_69 != t))
          {
            _fail(t);
          }
        t = f_69;
        LocalPopChoice(l_33);
      }
    else
      {
        t = j_33;
        t = u_68;
        t = f_8(d_69, e_69, f_69, t);
      }
  }
  z_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_68, z_68);
  e_34 = t;
  t = SSLsetAnnotations(e_34, w_68);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm y_69 = NULL;
  if(match_cons(t, sym__2))
    {
      y_69 = ATgetArgument(t, 0);
      if((y_69 != ATgetArgument(t, 1)))
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
  ATerm m_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_11, l_11, m_11, t);
      LocalPopChoice(q_33);
    }
  else
    {
      t = m_33;
      {
        ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL;
        t_69 = t;
        if(match_cons(t, sym__2))
          {
            u_69 = ATgetArgument(t, 0);
            v_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_69;
        t = a_8(o_11, u_69, v_69, t);
      }
    }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      d_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(z_11, d_22, e_22, t);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      f_22 = ATgetArgument(t, 0);
      if((f_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  if(match_cons(t, sym__2))
    {
      p_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(c_12, p_22, q_22, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      r_22 = ATgetArgument(t, 0);
      if((r_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm o_138 (ATerm), ATerm p_138 (ATerm), ATerm q_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm n_70 (ATerm t);
  static ATerm n_70 (ATerm t)
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_138(t);
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        {
          ATerm t_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_70 = NULL,c_70 = NULL,r_21 = NULL,s_21 = NULL;
              b_70 = t;
              t = p_138(t);
              c_70 = t;
              t = b_70;
              {
                static ATerm u_11 (ATerm t);
                static ATerm u_11 (ATerm t)
                {
                  ATerm e_70 = NULL;
                  t = n_70(t);
                  e_70 = t;
                  t = (ATerm) ATmakeAppl(sym__2, e_70, c_70);
                  t = diff_0_0(t);
                  return(t);
                }
                t = q_138(u_11, n_70, w_11, t);
              }
              s_21 = t;
              t = SSL_explode_term(s_21);
              if(match_cons(t, sym__2))
                {
                  ATerm w_33 = ATgetArgument(t, 0);
                  r_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_21;
              t = foldr_3_0(x_11, y_11, _id, t);
              LocalPopChoice(u_33);
            }
          else
            {
              t = t_33;
              {
                ATerm h_22 = NULL,i_22 = NULL;
                i_22 = t;
                t = SSL_explode_term(i_22);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_33 = ATgetArgument(t, 0);
                    h_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_22;
                t = foldr_3_0(a_12, b_12, n_70, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_70(t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm f_71 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_71);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm a_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_34);
    }
  else
    {
      t = a_34;
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            {
              ATerm j_34 = t;
              int k_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_71 = ATgetArgument(t, 0);
                      i_71 = ATgetArgument(t, 1);
                      j_71 = ATgetArgument(t, 2);
                      k_71 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_71;
                  t = map_1_0(g_12, t);
                  LocalPopChoice(k_34);
                }
              else
                {
                  t = j_34;
                  {
                    ATerm m_34 = t;
                    int s_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_34);
                      }
                    else
                      {
                        t = m_34;
                        t = dynrule_targs_1_0(h_12, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm r_71 = NULL;
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_71 = ATgetArgument(t, 0);
          {
            ATerm v_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_34);
      t = r_71;
    }
  else
    {
      t = t_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_71 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_71;
    }
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = map_1_0(k_12, t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm w_71 = NULL;
  ATerm w_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_71 = ATgetArgument(t, 0);
          {
            ATerm e_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_34);
      t = w_71;
    }
  else
    {
      t = w_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_71 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_71;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,i_34 = NULL,h_34 = NULL;
  e_71 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_71 = ATgetArgument(t, 0);
      c_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_71);
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, b_71, c_71);
  h_34 = t;
  t = SSLsetAnnotations(h_34, a_71);
  d_71 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_70 = ATgetArgument(t, 0);
      {
        ATerm f_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_70;
  t = free_vars_3_0(d_12, e_12, tboundin_3_0, t);
  r_70 = t;
  t = undefine_unbound_MarkVar_0_1(r_70, t);
  s_70 = t;
  t = d_71;
  if(match_cons(t, sym_Let_2))
    {
      v_70 = ATgetArgument(t, 0);
      w_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_71);
  u_70 = t;
  t = v_70;
  {
    static ATerm l_12 (ATerm t);
    static ATerm l_12 (ATerm t)
    {
      ATerm z_71 = NULL,a_72 = NULL;
      z_71 = t;
      t = term_t_17;
      t = table_destroy_0_0(t);
      t = term_t_17;
      a_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_17, s_70);
      t = u_7(a_72, s_70, t);
      t = z_71;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(l_12, t);
  }
  x_70 = t;
  t = term_t_17;
  t = table_destroy_0_0(t);
  t = term_t_17;
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, s_70);
  t = u_7(z_70, s_70, t);
  t = w_70;
  t = mark_buv_0_0(t);
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, x_70, y_70);
  i_34 = t;
  t = SSLsetAnnotations(i_34, u_70);
  return(t);
}
static ATerm h_8 (ATerm y_104 (ATerm), ATerm d_26, ATerm b_26, ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL;
  e_72 = t;
  t = y_104(t);
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_72, d_26, b_26);
  t = b_9(b_72, d_26, b_26, t);
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_72 = NULL;
        t = term_i_35;
        j_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_72, term_i_35);
        t = a_9(b_72, j_72, t);
        {
          ATerm l_35 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_35;
            }
        }
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_72 = ATgetFirst((ATermList) t);
      d_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_72, term_i_35, (ATerm) ATinsert(CheckATermList(d_72), (ATerm) ATinsert(CheckATermList(c_72), d_26)));
  t = lookup_table_0_1(b_72, t);
  i_72 = t;
  t = term_i_35;
  f_72 = t;
  t = (ATerm) ATinsert(CheckATermList(d_72), (ATerm) ATinsert(CheckATermList(c_72), d_26));
  g_72 = t;
  t = i_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(f_72, g_72, h_72, t);
  t = e_72;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
  k_72 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_72);
  l_72 = t;
  t = term_s_35;
  m_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, k_72), term_s_35);
  t = h_8(n_12, l_72, m_72, t);
  t = k_72;
  return(t);
}
static ATerm i_8 (ATerm m_27, ATerm n_27, ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL;
  o_72 = t;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_27, n_27);
        t = a_9(m_27, n_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_35 = ATgetFirst((ATermList) t);
            n_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_35);
        {
          ATerm p_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, m_27, n_27, n_72);
          t = lookup_table_0_1(m_27, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_9(n_27, n_72, p_72, t);
          t = (ATerm) ATmakeAppl(sym__3, m_27, n_27, n_72);
        }
      }
    else
      {
        t = t_35;
        {
          ATerm r_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, m_27, n_27);
          t = lookup_table_0_1(m_27, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_8(n_27, r_72, t);
          t = (ATerm) ATmakeAppl(sym__2, m_27, n_27);
        }
      }
  }
  t = o_72;
  return(t);
}
ATerm end_scope_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL;
  w_72 = t;
  t = v_104(t);
  v_72 = t;
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_73 = NULL;
        t = term_i_35;
        a_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_72, term_i_35);
        t = a_9(v_72, a_73, t);
        {
          ATerm c_36 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_36;
            }
        }
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_72 = ATgetFirst((ATermList) t);
      t_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_72, term_i_35, t_72);
  t = lookup_table_0_1(v_72, t);
  z_72 = t;
  t = term_i_35;
  x_72 = t;
  t = z_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(x_72, t_72, y_72, t);
  t = u_72;
  {
    static ATerm y_12 (ATerm t);
    static ATerm y_12 (ATerm t)
    {
      ATerm b_73 = NULL;
      b_73 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_72, b_73);
      t = i_8(v_72, b_73, t);
      return(t);
    }
    t = map_1_0(y_12, t);
  }
  t = w_72;
  return(t);
}
ATerm restore_always_2_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm t)
{
  ATerm f_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_125(t);
      t = d_125(t);
      LocalPopChoice(g_36);
    }
  else
    {
      t = f_36;
      t = d_125(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL;
  e_73 = t;
  t = u_104(t);
  d_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_73, term_i_35);
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_73 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_36 = ATgetArgument(t, 0);
            ATerm o_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_35;
        n_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_73, term_i_35);
        t = a_9(d_73, n_73, t);
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
        t = (ATerm) ATempty;
      }
  }
  f_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_73, term_i_35, (ATerm) ATinsert(CheckATermList(f_73), (ATerm) ATempty));
  t = lookup_table_0_1(d_73, t);
  j_73 = t;
  t = term_i_35;
  g_73 = t;
  t = (ATerm) ATinsert(CheckATermList(f_73), (ATerm) ATempty);
  h_73 = t;
  t = j_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(g_73, h_73, i_73, t);
  t = e_73;
  return(t);
}
ATerm scope_2_0 (ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t)
{
  static ATerm z_12 (ATerm t);
  static ATerm z_12 (ATerm t)
  {
    t = end_scope_1_0(w_104, t);
    return(t);
  }
  t = begin_scope_1_0(w_104, t);
  t = restore_always_2_0(x_104, z_12, t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm o_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,l_34 = NULL;
  w_73 = t;
  if(match_cons(t, sym_Scope_2))
    {
      t_73 = ATgetArgument(t, 0);
      u_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_73);
  o_73 = t;
  t = u_73;
  {
    static ATerm f_13 (ATerm t);
    static ATerm f_13 (ATerm t)
    {
      ATerm x_73 = NULL;
      x_73 = t;
      t = t_73;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = x_73;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(a_13, f_13, t);
  }
  v_73 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_73, v_73);
  l_34 = t;
  t = SSLsetAnnotations(l_34, o_73);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm q_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,n_34 = NULL;
      c_74 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_74);
      a_74 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, b_74);
      n_34 = t;
      t = SSLsetAnnotations(n_34, a_74);
      LocalPopChoice(s_36);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = q_36;
      {
        ATerm t_36 = t;
        int u_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,o_34 = NULL;
            g_74 = t;
            if(match_cons(t, sym_App_2))
              {
                e_74 = ATgetArgument(t, 0);
                f_74 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_74);
            d_74 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, e_74, f_74);
            o_34 = t;
            t = SSLsetAnnotations(o_34, d_74);
            LocalPopChoice(u_36);
            {
              ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,p_34 = NULL;
              r_74 = t;
              if(match_cons(t, sym_App_2))
                {
                  n_74 = ATgetArgument(t, 0);
                  o_74 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_74);
              m_74 = t;
              t = n_74;
              t = mark_buv_0_0(t);
              p_74 = t;
              t = o_74;
              t = mark_build_vars_0_0(t);
              q_74 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, p_74, q_74);
              p_34 = t;
              t = SSLsetAnnotations(p_34, m_74);
            }
          }
        else
          {
            t = t_36;
            {
              ATerm v_36 = t;
              int w_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,q_34 = NULL;
                  u_74 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      t_74 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_74);
                  s_74 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, t_74);
                  q_34 = t;
                  t = SSLsetAnnotations(q_34, s_74);
                  LocalPopChoice(w_36);
                  {
                    ATerm v_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,r_34 = NULL;
                    z_74 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        x_74 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(z_74);
                    v_74 = t;
                    t = x_74;
                    t = mark_buv_0_0(t);
                    y_74 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, y_74);
                    r_34 = t;
                    t = SSLsetAnnotations(r_34, v_74);
                  }
                }
              else
                {
                  t = v_36;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_8 (ATerm u_27, ATerm v_27, ATerm w_27, ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL;
  b_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_27, v_27);
  t = a_9(u_27, v_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_36 = ATgetFirst((ATermList) t);
      a_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_27, v_27, (ATerm) ATinsert(CheckATermList(a_75), w_27));
  t = lookup_table_0_1(u_27, t);
  e_75 = t;
  t = (ATerm) ATinsert(CheckATermList(a_75), w_27);
  c_75 = t;
  t = e_75;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(v_27, c_75, d_75, t);
  t = b_75;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL;
  f_75 = t;
  t = term_t_17;
  g_75 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_75);
  h_75 = t;
  t = term_z_36;
  i_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_17, (ATerm)ATmakeAppl(sym_Var_1, f_75), term_z_36);
  t = j_8(g_75, h_75, i_75, t);
  t = f_75;
  return(t);
}
static ATerm m_8 (ATerm s_27, ATerm t_27, ATerm t)
{
  ATerm j_75 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
  t = a_9(s_27, t_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_75 = ATgetFirst((ATermList) t);
      {
        ATerm a_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_75;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm o_76 = NULL,p_76 = NULL;
  o_76 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_23 = NULL,t_23 = NULL,v_23 = NULL,a_24 = NULL;
        t = term_t_17;
        a_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_17, o_76);
        t = m_8(a_24, o_76, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_37 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_37) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            s_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, p_76);
        t_23 = t;
        t = (ATerm) ATinsert(ATempty, s_23);
        v_23 = t;
        t = SSLsetAnnotations(t_23, v_23);
        LocalPopChoice(c_37);
      }
    else
      {
        t = b_37;
        {
          ATerm e_37 = t;
          int f_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,r_24 = NULL;
              t = term_t_17;
              r_24 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_t_17, o_76);
              t = m_8(r_24, o_76, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm g_37 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_37) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  k_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, p_76);
              l_24 = t;
              t = (ATerm) ATinsert(ATempty, k_24);
              m_24 = t;
              t = SSLsetAnnotations(l_24, m_24);
              LocalPopChoice(f_37);
            }
          else
            {
              t = e_37;
              {
                ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,g_25 = NULL;
                t = term_t_17;
                g_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_17, o_76);
                t = m_8(g_25, o_76, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm j_37 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_37) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    x_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, p_76);
                y_24 = t;
                t = (ATerm) ATinsert(ATempty, x_24);
                z_24 = t;
                t = SSLsetAnnotations(y_24, z_24);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,x_34 = NULL;
  ATerm k_37 = t;
  int l_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(l_37);
    }
  else
    {
      t = k_37;
    }
  x_76 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_76);
  u_76 = t;
  t = v_76;
  t = DeclareBound_0_0(t);
  w_76 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_76);
  x_34 = t;
  t = SSLsetAnnotations(x_34, u_76);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,z_34 = NULL;
      c_77 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_77);
      a_77 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, b_77);
      z_34 = t;
      t = SSLsetAnnotations(z_34, a_77);
      LocalPopChoice(n_37);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = m_37;
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,a_35 = NULL;
            g_77 = t;
            if(match_cons(t, sym_App_2))
              {
                e_77 = ATgetArgument(t, 0);
                f_77 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_77);
            d_77 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, e_77, f_77);
            a_35 = t;
            t = SSLsetAnnotations(a_35, d_77);
            LocalPopChoice(p_37);
            {
              ATerm i_77 = NULL,j_77 = NULL,o_77 = NULL,p_77 = NULL,r_77 = NULL,s_77 = NULL,b_35 = NULL;
              s_77 = t;
              if(match_cons(t, sym_App_2))
                {
                  j_77 = ATgetArgument(t, 0);
                  o_77 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_77);
              i_77 = t;
              t = j_77;
              t = mark_buv_0_0(t);
              p_77 = t;
              t = o_77;
              t = mark_build_vars_0_0(t);
              r_77 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, p_77, r_77);
              b_35 = t;
              t = SSLsetAnnotations(b_35, i_77);
            }
          }
        else
          {
            t = o_37;
            {
              ATerm q_37 = t;
              int r_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL,c_35 = NULL;
                  v_77 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      u_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_77);
                  t_77 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, u_77);
                  c_35 = t;
                  t = SSLsetAnnotations(c_35, t_77);
                  LocalPopChoice(r_37);
                  {
                    ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,d_35 = NULL;
                    z_77 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        x_77 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(z_77);
                    w_77 = t;
                    t = x_77;
                    t = mark_buv_0_0(t);
                    y_77 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, y_77);
                    d_35 = t;
                    t = SSLsetAnnotations(d_35, w_77);
                  }
                }
              else
                {
                  t = q_37;
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
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_78 = NULL,v_78 = NULL;
      u_78 = t;
      if(match_cons(t, sym_Match_1))
        {
          v_78 = ATgetArgument(t, 0);
          {
            ATerm o_25 = NULL,t_25 = NULL,j_35 = NULL;
            t = SSLgetAnnotations(u_78);
            o_25 = t;
            t = v_78;
            t = mark_match_vars_0_0(t);
            t_25 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, t_25);
            j_35 = t;
            t = SSLsetAnnotations(j_35, o_25);
          }
        }
      else
        {
          ATerm z_25 = NULL,c_26 = NULL,k_35 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              v_78 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_78);
          z_25 = t;
          t = v_78;
          t = mark_build_vars_0_0(t);
          c_26 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, c_26);
          k_35 = t;
          t = SSLsetAnnotations(k_35, z_25);
        }
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(v_37);
          }
        else
          {
            t = u_37;
            {
              ATerm w_37 = t;
              int x_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(x_37);
                }
              else
                {
                  t = w_37;
                  {
                    ATerm y_37 = t;
                    int z_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(z_37);
                      }
                    else
                      {
                        t = y_37;
                        {
                          ATerm a_38 = t;
                          int b_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL;
                              w_78 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  x_78 = ATgetArgument(t, 0);
                                  y_78 = ATgetArgument(t, 1);
                                  z_78 = ATgetArgument(t, 2);
                                  a_79 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = w_78;
                              t = s_7(x_78, y_78, z_78, a_79, t);
                              LocalPopChoice(b_38);
                            }
                          else
                            {
                              t = a_38;
                              {
                                ATerm c_38 = t;
                                int d_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(d_38);
                                  }
                                else
                                  {
                                    t = c_38;
                                    {
                                      ATerm e_38 = t;
                                      int f_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL;
                                          i_79 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              j_79 = ATgetArgument(t, 0);
                                              t = j_79;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  f_79 = ATgetArgument(t, 0);
                                                  g_79 = ATgetArgument(t, 1);
                                                  h_79 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = i_79;
                                              t = r_7(f_79, g_79, h_79, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  j_79 = ATgetArgument(t, 0);
                                                  t = j_79;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      f_79 = ATgetArgument(t, 0);
                                                      g_79 = ATgetArgument(t, 1);
                                                      h_79 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = i_79;
                                                  t = q_7(f_79, g_79, h_79, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      j_79 = ATgetArgument(t, 0);
                                                      k_79 = ATgetArgument(t, 1);
                                                      l_79 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = i_79;
                                                  t = p_7(j_79, k_79, l_79, t);
                                                }
                                            }
                                          LocalPopChoice(f_38);
                                        }
                                      else
                                        {
                                          t = e_38;
                                          {
                                            ATerm g_38 = t;
                                            int h_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(h_38);
                                              }
                                            else
                                              {
                                                t = g_38;
                                                {
                                                  ATerm i_38 = t;
                                                  int j_38 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(j_38);
                                                    }
                                                  else
                                                    {
                                                      t = i_38;
                                                      {
                                                        ATerm k_38 = t;
                                                        int l_38 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm v_79 = NULL;
                                                            v_79 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm m_38 = ATgetArgument(t, 0);
                                                                ATerm n_38 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = v_79;
                                                            t = o_7(t);
                                                            LocalPopChoice(l_38);
                                                          }
                                                        else
                                                          {
                                                            t = k_38;
                                                            {
                                                              ATerm o_38 = t;
                                                              int p_38 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(p_38);
                                                                }
                                                              else
                                                                {
                                                                  t = o_38;
                                                                  {
                                                                    ATerm q_38 = t;
                                                                    int r_38 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
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
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(t_38);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_38;
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
ATerm map_1_0 (ATerm e_115 (ATerm), ATerm t)
{
  static ATerm o_80 (ATerm t);
  static ATerm o_80 (ATerm t)
  {
    ATerm l_80 = NULL,m_80 = NULL,n_80 = NULL;
    l_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_80;
      }
    else
      {
        ATerm n_26 = NULL,v_26 = NULL,w_26 = NULL,n_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_80 = ATgetFirst((ATermList) t);
            n_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_80);
        n_26 = t;
        t = m_80;
        t = e_115(t);
        v_26 = t;
        t = n_80;
        t = o_80(t);
        w_26 = t;
        t = (ATerm) ATinsert(CheckATermList(w_26), v_26);
        n_35 = t;
        t = SSLsetAnnotations(n_35, n_26);
      }
    return(t);
  }
  t = o_80(t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm a_81 = NULL,g_81 = NULL,h_81 = NULL;
  a_81 = t;
  t = term_u_38;
  g_81 = t;
  t = (ATerm) ATinsert(ATempty, term_v_38);
  h_81 = t;
  t = SSL_printnl(g_81, h_81);
  t = a_81;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL,p_35 = NULL;
  l_81 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      j_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_81);
  i_81 = t;
  t = j_81;
  t = map_1_0(mark_buv_0_0, t);
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, k_81);
  p_35 = t;
  t = SSLsetAnnotations(p_35, i_81);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL;
  m_81 = t;
  t = term_u_38;
  n_81 = t;
  t = (ATerm) ATinsert(ATempty, term_w_38);
  o_81 = t;
  t = SSL_printnl(n_81, o_81);
  t = m_81;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,r_35 = NULL,q_35 = NULL;
  t = if_verbose4_1_0(g_13, t);
  z_80 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_80);
  r_80 = t;
  t = s_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_80 = ATgetFirst((ATermList) t);
      w_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_80);
  u_80 = t;
  t = w_80;
  t = Cons_2_0(h_13, i_13, t);
  x_80 = t;
  t = (ATerm) ATinsert(CheckATermList(x_80), v_80);
  q_35 = t;
  t = SSLsetAnnotations(q_35, u_80);
  y_80 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_80);
  r_35 = t;
  t = SSLsetAnnotations(r_35, r_80);
  t = if_verbose4_1_0(j_13, t);
  return(t);
}
static ATerm o_8 (ATerm b_39, ATerm c_39, ATerm t)
{
  ATerm p_81 = NULL;
  t = SSL_fputc(b_39, c_39);
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_81);
  return(t);
}
static ATerm p_8 (ATerm s_44, ATerm t_44, ATerm t)
{
  ATerm q_81 = NULL;
  t = SSL_write_term_to_stream_text(s_44, t_44);
  q_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_81);
  return(t);
}
static ATerm r_8 (ATerm b_114 (ATerm), ATerm e_394, ATerm y_44, ATerm t)
{
  ATerm r_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_394, term_x_38);
  t = v_8(t);
  r_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_81, y_44);
  t = b_114(t);
  t = fclose_0_0(t);
  t = y_44;
  return(t);
}
static ATerm q_8 (ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm s_81 = NULL;
  t = SSL_write_term_to_stream_baf(o_44, p_44);
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_81);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm r_27 = NULL,x_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_38 = ATgetArgument(t, 0);
      if(match_cons(y_38, sym_Stream_1))
        {
          r_27 = ATgetArgument(y_38, 0);
        }
      else
        _fail(t);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(r_27, x_27, t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,r_28 = NULL,u_28 = NULL,v_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_38 = ATgetArgument(t, 0);
      if(match_cons(z_38, sym_Stream_1))
        {
          u_28 = ATgetArgument(z_38, 0);
        }
      else
        _fail(t);
      v_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_8(u_28, v_28, t);
  n_28 = t;
  t = term_a_39;
  o_28 = t;
  t = n_28;
  if(match_cons(t, sym_Stream_1))
    {
      r_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, n_28);
  t = o_8(o_28, r_28, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL,z_81 = NULL,a_82 = NULL,c_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,i_83 = NULL,j_83 = NULL,w_35 = NULL,v_35 = NULL;
  x_81 = t;
  if(match_cons(t, sym__2))
    {
      g_82 = ATgetArgument(t, 0);
      h_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_81);
  f_82 = t;
  t = g_82;
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_13 (ATerm t);
        static ATerm o_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((w_81 != NULL) && (w_81 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_81 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_13, t);
        LocalPopChoice(g_39);
      }
    else
      {
        t = f_39;
        t = term_h_39;
        w_81 = t;
      }
  }
  i_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_82, h_82);
  v_35 = t;
  t = SSLsetAnnotations(v_35, f_82);
  t = x_81;
  if(match_cons(t, sym__2))
    {
      a_82 = ATgetArgument(t, 0);
      c_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_81);
  z_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_82, (ATerm) ATmakeAppl(sym__2, not_null(w_81), c_82));
  w_35 = t;
  t = SSLsetAnnotations(w_35, z_81);
  e_82 = t;
  if(match_cons(t, sym__2))
    {
      i_83 = ATgetArgument(t, 0);
      j_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_27 = NULL,l_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,x_35 = NULL;
        t = SSLgetAnnotations(e_82);
        d_27 = t;
        t = i_83;
        t = fetch_1_0(t_13, t);
        l_27 = t;
        t = j_83;
        if(match_cons(t, sym__2))
          {
            p_27 = ATgetArgument(t, 0);
            q_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_8(u_13, p_27, q_27, t);
        o_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_27, o_27);
        x_35 = t;
        t = SSLsetAnnotations(x_35, d_27);
        LocalPopChoice(j_39);
      }
    else
      {
        t = i_39;
        {
          ATerm f_28 = NULL,i_28 = NULL,l_28 = NULL,m_28 = NULL,y_35 = NULL;
          t = SSLgetAnnotations(e_82);
          f_28 = t;
          t = j_83;
          if(match_cons(t, sym__2))
            {
              l_28 = ATgetArgument(t, 0);
              m_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_8(v_13, l_28, m_28, t);
          i_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_83, i_28);
          y_35 = t;
          t = SSLsetAnnotations(y_35, f_28);
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
ATerm apply_strategy_1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL;
  q_83 = t;
  t = dtime_0_0(t);
  t = q_83;
  t = s_131(t);
  p_83 = t;
  t = dtime_0_0(t);
  m_83 = t;
  t = p_83;
  if(match_cons(t, sym__2))
    {
      n_83 = ATgetArgument(t, 0);
      o_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_83), (ATerm) ATmakeAppl(sym_Runtime_1, m_83)), o_83);
  return(t);
}
static ATerm e_84 (ATerm y_83, ATerm t)
{
  t = SSL_fclose(y_83);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL;
  c_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_84 = ATgetArgument(t, 0);
      {
        ATerm k_39 = t;
        int l_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_84);
            LocalPopChoice(l_39);
          }
        else
          {
            t = k_39;
            t = e_84(c_84, t);
          }
      }
    }
  else
    {
      t = e_84(c_84, t);
    }
  return(t);
}
static ATerm s_8 (ATerm u_44, ATerm t)
{
  t = SSL_read_term_from_stream(u_44);
  return(t);
}
static ATerm t_8 (ATerm h_37, ATerm i_37, ATerm t)
{
  t = SSL_strcat(h_37, i_37);
  return(t);
}
static ATerm u_8 (ATerm d_39, ATerm e_39, ATerm t)
{
  ATerm f_84 = NULL;
  t = SSL_fopen(d_39, e_39);
  f_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_84);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_84 = NULL;
  t = SSL_stdin_stream();
  g_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_84);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_84 = NULL;
  t = SSL_stdout_stream();
  h_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_84);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_84 = NULL;
  t = SSL_stderr_stream();
  i_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_84);
  return(t);
}
static ATerm p_85 (ATerm o_84, ATerm t)
{
  ATerm p_84 = NULL;
  t = SSL_explode_term(o_84);
  if(match_cons(t, sym__2))
    {
      ATerm m_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_39 = ATgetArgument(t, 1);
        if(((ATgetType(n_39) == AT_LIST) && !(ATisEmpty(n_39))))
          {
            p_84 = ATgetFirst((ATermList) n_39);
            {
              ATerm o_39 = (ATerm) ATgetNext((ATermList) n_39);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_84;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_84;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_84;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_84;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_85 (ATerm s_84, ATerm t_84, ATerm u_84, ATerm t)
{
  ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL,a_85 = NULL,d_36 = NULL;
  t = SSLgetAnnotations(u_84);
  x_84 = t;
  t = s_84;
  if(match_cons(t, sym_Path_1))
    {
      a_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_85, t_84);
  d_36 = t;
  t = SSLsetAnnotations(d_36, x_84);
  if(match_cons(t, sym__2))
    {
      v_84 = ATgetArgument(t, 0);
      w_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(v_84, w_84, t);
  return(t);
}
static ATerm r_85 (ATerm c_85, ATerm d_85, ATerm e_85, ATerm t)
{
  ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL,k_85 = NULL,e_36 = NULL;
  t = SSLgetAnnotations(e_85);
  h_85 = t;
  t = SSL_is_string(c_85);
  k_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_85, d_85);
  e_36 = t;
  t = SSLsetAnnotations(e_36, h_85);
  if(match_cons(t, sym__2))
    {
      f_85 = ATgetArgument(t, 0);
      g_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(f_85, g_85, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL;
  m_85 = t;
  if(match_cons(t, sym__2))
    {
      n_85 = ATgetArgument(t, 0);
      o_85 = ATgetArgument(t, 1);
      {
        ATerm p_39 = t;
        int q_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_85(m_85, t);
            LocalPopChoice(q_39);
          }
        else
          {
            t = p_39;
            {
              ATerm r_39 = t;
              int s_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_85(n_85, o_85, m_85, t);
                  LocalPopChoice(s_39);
                }
              else
                {
                  t = r_39;
                  t = r_85(n_85, o_85, m_85, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_85(m_85, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL,a_86 = NULL;
  a_86 = t;
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_86, term_v_39);
        t = v_8(t);
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        {
          ATerm o_29 = NULL,r_29 = NULL;
          t = term_w_39;
          r_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_39, a_86);
          t = t_8(r_29, a_86, t);
          o_29 = t;
          t = SSL_perror(o_29);
          _fail(t);
        }
      }
  }
  u_85 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8(v_85, t);
  t_85 = t;
  t = u_85;
  t = fclose_0_0(t);
  t = t_85;
  return(t);
}
ATerm fetch_1_0 (ATerm o_115 (ATerm), ATerm t)
{
  static ATerm z_86 (ATerm t);
  static ATerm z_86 (ATerm t)
  {
    ATerm w_86 = NULL,x_86 = NULL,y_86 = NULL;
    w_86 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_86 = ATgetFirst((ATermList) t);
        y_86 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_39 = t;
      int y_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_29 = NULL,k_30 = NULL,h_36 = NULL;
          t = SSLgetAnnotations(w_86);
          x_29 = t;
          t = x_86;
          t = o_115(t);
          k_30 = t;
          t = (ATerm) ATinsert(CheckATermList(y_86), k_30);
          h_36 = t;
          t = SSLsetAnnotations(h_36, x_29);
          LocalPopChoice(y_39);
        }
      else
        {
          t = x_39;
          {
            ATerm a_31 = NULL,d_31 = NULL,i_36 = NULL;
            t = SSLgetAnnotations(w_86);
            a_31 = t;
            t = y_86;
            t = z_86(t);
            d_31 = t;
            t = (ATerm) ATinsert(CheckATermList(d_31), x_86);
            i_36 = t;
            t = SSLsetAnnotations(i_36, a_31);
          }
        }
    }
    return(t);
  }
  t = z_86(t);
  return(t);
}
static ATerm a_9 (ATerm a_29, ATerm b_29, ATerm t)
{
  ATerm c_87 = NULL;
  t = lookup_table_0_1(a_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(b_29, c_87, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_141 (ATerm), ATerm t)
{
  ATerm f_87 = NULL;
  f_87 = t;
  {
    ATerm z_39 = t;
    int a_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_87 = NULL,i_87 = NULL,j_87 = NULL;
        t = term_n_16;
        i_87 = t;
        t = term_q_17;
        j_87 = t;
        t = term_r_17;
        t = a_9(i_87, j_87, t);
        h_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_87, term_b_40);
        t = geq_0_0(t);
        t = f_87;
        t = l_141(t);
        LocalPopChoice(a_40);
      }
    else
      {
        t = z_39;
        t = f_87;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL;
  m_87 = t;
  {
    ATerm c_40 = t;
    int d_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_87;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_40 = ATgetFirst((ATermList) t);
                ATerm f_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_87;
          }
        LocalPopChoice(d_40);
      }
    else
      {
        t = c_40;
        t = (ATerm) ATinsert(ATempty, m_87);
      }
  }
  n_87 = t;
  t = term_h_39;
  o_87 = t;
  t = SSL_printnl(o_87, n_87);
  t = m_87;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm s_87 = NULL,t_87 = NULL;
  t = term_n_16;
  s_87 = t;
  t = term_o_16;
  t_87 = t;
  t = term_p_16;
  t = a_9(s_87, t_87, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm v_87 = NULL;
  v_87 = t;
  if(match_string(t, "-k"))
    {
      t = v_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_87;
    }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL;
  w_87 = t;
  t = SSL_string_to_int(w_87);
  x_87 = t;
  t = term_g_40;
  y_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_40, x_87);
  t = d_9(y_87, x_87, t);
  t = w_87;
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = term_h_40;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_13, y_13, z_13, t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm a_88 = NULL;
  a_88 = t;
  if(match_string(t, "-S"))
    {
      t = a_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_88;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL;
  t = term_q_17;
  b_88 = t;
  t = term_i_40;
  c_88 = t;
  t = term_j_40;
  t = d_9(b_88, c_88, t);
  t = term_k_40;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_l_40;
  return(t);
}
static ATerm f_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL;
  d_88 = t;
  t = SSL_string_to_int(d_88);
  e_88 = t;
  t = term_q_17;
  f_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, e_88);
  t = d_9(f_88, e_88, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_88);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_m_40;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL;
  t = term_n_40;
  g_88 = t;
  t = term_j_16;
  h_88 = t;
  t = term_o_40;
  t = d_9(g_88, h_88, t);
  t = term_p_40;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = term_q_40;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_14, b_14, e_14, t);
      LocalPopChoice(s_40);
    }
  else
    {
      t = r_40;
      {
        ATerm t_40 = t;
        int u_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_14, g_14, h_14, t);
            LocalPopChoice(u_40);
          }
        else
          {
            t = t_40;
            t = Option_3_0(j_14, k_14, l_14, t);
          }
      }
    }
  return(t);
}
static ATerm d_9 (ATerm y_73, ATerm z_73, ATerm t)
{
  ATerm i_88 = NULL,j_88 = NULL;
  t = term_n_16;
  i_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_16, y_73, z_73);
  t = lookup_table_0_1(i_88, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(y_73, z_73, j_88, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_16, y_73, z_73);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_88 = NULL,q_88 = NULL,r_88 = NULL;
      t = term_j_16;
      t = g_0(t);
      p_88 = t;
      t = term_x_16;
      q_88 = t;
      t = term_z_16;
      r_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_16, term_z_16, p_88);
      t = b_9(q_88, r_88, p_88, t);
      _fail(t);
    }
  else
    {
      ATerm u_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_88 = ATgetFirst((ATermList) t);
          o_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_88;
      t = d_0(t);
      t = term_j_16;
      t = f_0(t);
      u_88 = t;
      t = (ATerm) ATinsert(CheckATermList(o_88), u_88);
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm w_88 = NULL;
  w_88 = t;
  if(match_string(t, "-o"))
    {
      t = w_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_88;
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL;
  x_88 = t;
  t = term_v_40;
  y_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_40, x_88);
  t = d_9(y_88, x_88, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_88);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_w_40;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_14, o_14, p_14, t);
  return(t);
}
static ATerm b_9 (ATerm h_27, ATerm i_27, ATerm g_27, ATerm t)
{
  ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL;
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_27, i_27);
  {
    ATerm x_40 = t;
    int y_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_40 = ATgetArgument(t, 0);
            ATerm a_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_27, i_27);
        t = a_9(h_27, i_27, t);
        LocalPopChoice(y_40);
      }
    else
      {
        t = x_40;
        t = (ATerm) ATempty;
      }
  }
  b_89 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_27, i_27, (ATerm) ATinsert(CheckATermList(b_89), g_27));
  t = lookup_table_0_1(h_27, t);
  e_89 = t;
  t = (ATerm) ATinsert(CheckATermList(b_89), g_27);
  c_89 = t;
  t = e_89;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(i_27, c_89, d_89, t);
  t = a_89;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_89 = NULL,q_89 = NULL,r_89 = NULL;
      t = term_j_16;
      t = o_0(t);
      p_89 = t;
      t = term_x_16;
      q_89 = t;
      t = term_z_16;
      r_89 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_16, term_z_16, p_89);
      t = b_9(q_89, r_89, p_89, t);
      _fail(t);
    }
  else
    {
      ATerm v_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_89 = ATgetFirst((ATermList) t);
          m_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_89;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_89 = ATgetFirst((ATermList) t);
          o_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_89;
      t = j_0(t);
      t = n_89;
      t = l_0(t);
      v_89 = t;
      t = (ATerm) ATinsert(CheckATermList(o_89), v_89);
    }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm x_89 = NULL;
  x_89 = t;
  if(match_string(t, "-i"))
    {
      t = x_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_89;
    }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL;
  y_89 = t;
  t = term_b_41;
  z_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_41, y_89);
  t = d_9(z_89, y_89, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_89);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_c_41;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_14, r_14, s_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_90 = NULL,b_90 = NULL,c_90 = NULL,d_90 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_16;
  t = whoami_0_0(t);
  a_90 = t;
  t = term_u_38;
  c_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_41), a_90);
  d_90 = t;
  t = SSL_printnl(c_90, d_90);
  t = term_e_41;
  b_90 = t;
  t = SSL_exit(b_90);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL;
  t = term_n_16;
  e_90 = t;
  t = term_o_16;
  f_90 = t;
  t = term_p_16;
  t = a_9(e_90, f_90, t);
  return(t);
}
static ATerm w_8 (ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm f_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_45, z_45);
      LocalPopChoice(g_41);
    }
  else
    {
      t = f_41;
      t = SSL_addr(y_45, z_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_90;
      t = s_122(t);
    }
  else
    {
      ATerm m_90 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_90 = ATgetFirst((ATermList) t);
          j_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_90;
      t = foldr_2_0(s_122, t_122, t);
      m_90 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_90, m_90);
      t = t_122(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_i_40;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL;
  if(match_cons(t, sym__2))
    {
      n_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8(n_31, o_31, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_90 = NULL,j_31 = NULL,k_31 = NULL;
  t = times_0_0(t);
  k_31 = t;
  t = SSL_explode_term(k_31);
  if(match_cons(t, sym__2))
    {
      ATerm h_41 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_31;
  t = foldr_2_0(t_14, u_14, t);
  p_90 = t;
  t = SSL_TicksToSeconds(p_90);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL;
  a_91 = t;
  if(match_cons(t, sym__2))
    {
      b_91 = ATgetArgument(t, 0);
      c_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_91;
        if((b_91 != t))
          {
            _fail(t);
          }
        t = a_91;
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        t = (ATerm) ATmakeAppl(sym__2, b_91, c_91);
        {
          ATerm k_41 = t;
          int l_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_91, c_91);
              LocalPopChoice(l_41);
            }
          else
            {
              t = k_41;
              t = SSL_gtr(b_91, c_91);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_91, c_91);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_141 (ATerm), ATerm t)
{
  ATerm g_91 = NULL;
  g_91 = t;
  {
    ATerm m_41 = t;
    int n_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_91 = NULL,j_91 = NULL,k_91 = NULL;
        t = term_n_16;
        j_91 = t;
        t = term_q_17;
        k_91 = t;
        t = term_r_17;
        t = a_9(j_91, k_91, t);
        i_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_91, term_e_41);
        t = geq_0_0(t);
        t = g_91;
        t = k_141(t);
        LocalPopChoice(n_41);
      }
    else
      {
        t = m_41;
        t = g_91;
      }
  }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm m_91 = NULL,n_91 = NULL,p_91 = NULL,q_91 = NULL;
  t = run_time_0_0(t);
  m_91 = t;
  t = term_j_16;
  t = whoami_0_0(t);
  n_91 = t;
  t = term_u_38;
  p_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_41), m_91), term_o_41), n_91);
  q_91 = t;
  t = SSL_printnl(p_91, q_91);
  t = (ATerm) ATmakeAppl(sym__2, term_u_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_41), m_91), term_o_41), n_91));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_91 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_40;
  r_91 = t;
  t = SSL_exit(r_91);
  return(t);
}
static ATerm e_9 (ATerm s_31, ATerm t_31, ATerm u_31, ATerm t)
{
  ATerm s_91 = NULL;
  t = SSL_hashtable_put(u_31, s_31, t_31);
  s_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_91);
  return(t);
}
static ATerm f_9 (ATerm v_31, ATerm w_31, ATerm t)
{
  t = SSL_hashtable_get(w_31, v_31);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_28, ATerm t)
{
  ATerm d_92 = NULL;
  t = table_hashtable_0_0(t);
  d_92 = t;
  {
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_32 = NULL;
        t = d_92;
        if(match_cons(t, sym_Hashtable_1))
          {
            u_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_9(t_28, u_32, t);
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
        {
          ATerm b_33 = NULL;
          t = t_28;
          t = table_create_0_0(t);
          t = d_92;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_9(t_28, b_33, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm a_32, ATerm b_32, ATerm t)
{
  ATerm g_92 = NULL;
  t = SSL_hashtable_create(a_32, b_32);
  g_92 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_92);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm h_92 = NULL,i_92 = NULL,j_92 = NULL,l_92 = NULL,m_92 = NULL;
  h_92 = t;
  t = term_s_41;
  l_92 = t;
  t = term_t_41;
  m_92 = t;
  t = h_92;
  t = new_hashtable_0_2(l_92, m_92, t);
  i_92 = t;
  t = h_92;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(h_92, i_92, j_92, t);
  t = h_92;
  return(t);
}
static ATerm y_8 (ATerm x_31, ATerm y_31, ATerm t)
{
  ATerm n_92 = NULL;
  t = SSL_hashtable_remove(y_31, x_31);
  n_92 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_92);
  return(t);
}
static ATerm z_8 (ATerm c_32, ATerm t)
{
  ATerm o_92 = NULL;
  t = SSL_hashtable_destroy(c_32);
  o_92 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_92);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm p_92 = NULL;
  t = SSL_table_hashtable();
  p_92 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_92);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL;
  q_92 = t;
  t = table_hashtable_0_0(t);
  r_92 = t;
  t = lookup_table_0_1(q_92, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(t_92, t);
  t = r_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(q_92, s_92, t);
  t = q_92;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm u_92 = NULL,v_92 = NULL;
  t = term_u_41;
  u_92 = t;
  t = term_j_16;
  v_92 = t;
  t = term_v_41;
  t = d_9(u_92, v_92, t);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_w_41;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL,z_92 = NULL;
  t = term_u_41;
  y_92 = t;
  t = term_j_16;
  z_92 = t;
  t = term_v_41;
  t = d_9(y_92, z_92, t);
  t = term_x_41;
  w_92 = t;
  t = term_j_16;
  x_92 = t;
  t = term_y_41;
  t = d_9(w_92, x_92, t);
  t = term_z_41;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  t = term_a_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_14, y_14, z_14, t);
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
      t = Option_3_0(c_15, d_15, e_15, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,l_36 = NULL;
  f_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_93 = ATgetFirst((ATermList) t);
      c_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_93);
  a_93 = t;
  t = b_93;
  t = t_91(t);
  d_93 = t;
  t = c_93;
  t = u_91(t);
  e_93 = t;
  t = (ATerm) ATinsert(CheckATermList(e_93), d_93);
  l_36 = t;
  t = SSLsetAnnotations(l_36, a_93);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_136 (ATerm), ATerm t)
{
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,p_93 = NULL,q_93 = NULL,n_36 = NULL;
  k_93 = t;
  {
    ATerm d_42 = t;
    int e_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_42;
        t = a_136(t);
        LocalPopChoice(e_42);
      }
    else
      {
        t = d_42;
      }
  }
  t = k_93;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_93 = ATgetFirst((ATermList) t);
      n_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_93);
  l_93 = t;
  t = term_o_16;
  q_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, m_93);
  t = d_9(q_93, m_93, t);
  t = n_93;
  {
    static ATerm a_94 (ATerm t);
    static ATerm a_94 (ATerm t)
    {
      ATerm g_42 = t;
      int h_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_42 = t;
          int j_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_93 = NULL;
              t_93 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_93;
              LocalPopChoice(j_42);
            }
          else
            {
              t = i_42;
              t = a_136(t);
              t = Cons_2_0(_id, a_94, t);
            }
          LocalPopChoice(h_42);
        }
      else
        {
          t = g_42;
          {
            ATerm w_93 = NULL,x_93 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_93 = ATgetFirst((ATermList) t);
                x_93 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_93), (ATerm) ATmakeAppl(sym_Undefined_1, w_93));
          }
        }
      return(t);
    }
    t = a_94(t);
  }
  p_93 = t;
  t = (ATerm) ATinsert(CheckATermList(p_93), (ATerm) ATmakeAppl(sym_Program_1, m_93));
  n_36 = t;
  t = SSLsetAnnotations(n_36, l_93);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm n_94 = NULL;
  n_94 = t;
  if(match_string(t, "--help"))
    {
      t = n_94;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_94;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_94;
        }
    }
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm o_94 = NULL,p_94 = NULL;
  t = term_k_42;
  o_94 = t;
  t = term_j_16;
  p_94 = t;
  t = term_l_42;
  t = d_9(o_94, p_94, t);
  t = term_m_42;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = term_n_42;
  return(t);
}
static ATerm k_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm t)
{
  ATerm f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL;
  h_94 = t;
  t = term_x_16;
  i_94 = t;
  t = term_o_42;
  t = lookup_table_0_1(i_94, t);
  m_94 = t;
  t = term_z_16;
  j_94 = t;
  t = (ATerm) ATempty;
  k_94 = t;
  t = m_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(j_94, k_94, l_94, t);
  t = h_94;
  {
    static ATerm f_15 (ATerm t);
    static ATerm f_15 (ATerm t)
    {
      ATerm p_42 = t;
      int q_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_135(t);
          LocalPopChoice(q_42);
        }
      else
        {
          t = p_42;
          {
            ATerm r_42 = t;
            int s_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_15, h_15, i_15, t);
                LocalPopChoice(s_42);
              }
            else
              {
                t = r_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_15, t);
  }
  {
    ATerm t_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_95 = NULL;
        a_95 = t;
        {
          ATerm v_42 = t;
          int w_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_33 = NULL;
              t = a_95;
              {
                ATerm x_42 = t;
                int y_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_33 = NULL,i_33 = NULL;
                    t = term_n_16;
                    h_33 = t;
                    t = term_k_42;
                    i_33 = t;
                    t = term_z_42;
                    t = a_9(h_33, i_33, t);
                    LocalPopChoice(y_42);
                  }
                else
                  {
                    t = x_42;
                    t = fetch_1_0(k_15, t);
                  }
              }
              t = a_95;
              t = y_135(t);
              t = term_i_40;
              f_33 = t;
              t = SSL_exit(f_33);
              LocalPopChoice(w_42);
            }
          else
            {
              t = v_42;
              {
                ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
                t = term_n_16;
                o_33 = t;
                t = term_u_41;
                p_33 = t;
                t = term_a_43;
                t = a_9(o_33, p_33, t);
                t = a_95;
                t = z_135(t);
                t = term_i_40;
                n_33 = t;
                t = SSL_exit(n_33);
              }
            }
        }
        LocalPopChoice(u_42);
      }
    else
      {
        t = t_42;
        {
          ATerm b_43 = t;
          int c_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_95 = NULL,c_95 = NULL,d_95 = NULL;
              static ATerm l_15 (ATerm t);
              static ATerm l_15 (ATerm t)
              {
                ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL,p_36 = NULL;
                g_95 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_95 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_95);
                e_95 = t;
                t = f_95;
                if(((f_94 != NULL) && (f_94 != t)))
                  _fail(t);
                else
                  f_94 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_95);
                p_36 = t;
                t = SSLsetAnnotations(p_36, e_95);
                return(t);
              }
              t = fetch_1_0(l_15, t);
              t = term_u_38;
              c_95 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_94)), term_d_43);
              d_95 = t;
              t = SSL_printnl(c_95, d_95);
              t = (ATerm) ATmakeAppl(sym__2, term_u_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_94)), term_d_43));
              t = y_135(t);
              t = term_e_41;
              b_95 = t;
              t = SSL_exit(b_95);
              LocalPopChoice(c_43);
            }
          else
            {
              t = b_43;
            }
        }
      }
  }
  g_94 = t;
  t = term_x_16;
  t = table_destroy_0_0(t);
  t = g_94;
  return(t);
}
ATerm option_wrap_5_0 (ATerm y_132 (ATerm), ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL;
  t = parse_options_3_0(y_132, z_132, a_133, t);
  l_95 = t;
  t = term_e_43;
  t = table_create_0_0(t);
  t = term_e_43;
  m_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_43, term_f_43, l_95);
  t = lookup_table_0_1(m_95, t);
  p_95 = t;
  t = term_f_43;
  n_95 = t;
  t = p_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(n_95, l_95, o_95, t);
  t = l_95;
  t = b_133(t);
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_133(t);
        t = report_success_0_0(t);
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = if_verbose2_1_0(a_16, t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL;
  t = term_i_43;
  q_95 = t;
  t = term_j_16;
  r_95 = t;
  t = term_j_43;
  t = d_9(q_95, r_95, t);
  t = term_k_43;
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = term_l_43;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL;
  s_95 = t;
  t = term_n_16;
  w_95 = t;
  t = term_o_16;
  x_95 = t;
  t = term_p_16;
  t = a_9(w_95, x_95, t);
  t_95 = t;
  t = term_u_38;
  u_95 = t;
  t = (ATerm) ATinsert(ATempty, t_95);
  v_95 = t;
  t = SSL_printnl(u_95, v_95);
  t = s_95;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_132 (ATerm), ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm t)
{
  static ATerm o_15 (ATerm t);
  static ATerm t_15 (ATerm t);
  static ATerm o_15 (ATerm t)
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_132(t);
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
        {
          ATerm o_43 = t;
          int p_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(p_43);
            }
          else
            {
              t = o_43;
              {
                ATerm q_43 = t;
                int r_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(r_43);
                  }
                else
                  {
                    t = q_43;
                    {
                      ATerm s_43 = t;
                      int t_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_15, y_15, z_15, t);
                          LocalPopChoice(t_43);
                        }
                      else
                        {
                          t = s_43;
                          {
                            ATerm u_43 = t;
                            int v_43 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(v_43);
                              }
                            else
                              {
                                t = u_43;
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
  static ATerm t_15 (ATerm t)
  {
    ATerm y_95 = NULL,z_95 = NULL,a_96 = NULL;
    z_95 = t;
    {
      ATerm w_43 = t;
      int x_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm d_16 (ATerm t);
          static ATerm d_16 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_95 != NULL) && (y_95 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_95 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_16, t);
          LocalPopChoice(x_43);
        }
      else
        {
          t = w_43;
          t = term_y_43;
          y_95 = t;
        }
    }
    t = not_null(y_95);
    t = ReadFromFile_0_0(t);
    a_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_95, a_96);
    t = apply_strategy_1_0(b_132, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(o_15, d_132, default_system_about_0_0, p_15, t_15, t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,r_36 = NULL;
  f_96 = t;
  if(match_cons(t, sym__2))
    {
      c_96 = ATgetArgument(t, 0);
      d_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_96);
  b_96 = t;
  t = d_96;
  t = mark_bound_unbound_vars_0_0(t);
  e_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_96, e_96);
  r_36 = t;
  t = SSLsetAnnotations(r_36, b_96);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_16, _fail, default_system_usage_0_0, t);
  return(t);
}
