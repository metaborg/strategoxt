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
Symbol sym_UndefineDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_AddDynRule_2;
Symbol sym_DynRuleId_1;
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
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
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
ATerm term_v_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_o_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_z_42;
ATerm term_p_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_f_39;
ATerm term_c_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_m_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_y_20;
ATerm term_q_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_a_16;
ATerm term_x_15;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_p_16, term_q_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Defined_2, term_i_20, term_j_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_Defined_2, term_i_35, term_j_35);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym_Defined_2, term_z_36, term_j_20);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_c_40);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_40);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym__2, term_h_40, term_x_15);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym__2, term_p_16, term_a_41);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym__2, term_p_16, term_p_41);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym__2, term_p_40, term_q_40);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym__2, term_e_42, term_x_15);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym__2, term_h_42, term_x_15);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym__2, term_p_41, term_x_15);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__3, term_p_40, term_q_40, (ATerm) ATempty);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym__2, term_p_16, term_e_42);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym__2, term_y_43, term_x_15);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm g_127 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm f_94 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm e_94 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm d_94 (ATerm), ATerm t);
static ATerm p_7 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm q_96 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm q_7 (ATerm s_24, ATerm t_24, ATerm u_24, ATerm t);
static ATerm x_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm r_7 (ATerm m_24, ATerm q_24, ATerm o_24, ATerm t);
static ATerm r_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm s_7 (ATerm g_24, ATerm k_24, ATerm i_24, ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm t_7 (ATerm e_23, ATerm f_23, ATerm g_23, ATerm i_23, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm u_7 (ATerm p_21, ATerm q_21, ATerm o_21, ATerm t);
static ATerm z_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm v_7 (ATerm n_27, ATerm m_27, ATerm t);
static ATerm w_7 (ATerm w_30, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm c_22, ATerm t);
ATerm tboundin_3_0 (ATerm d_128 (ATerm), ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm m_128 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm z_7 (ATerm l_108 (ATerm), ATerm u_51, ATerm t_51, ATerm t);
ATerm foldr_3_0 (ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t);
static ATerm a_8 (ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm y_51, ATerm x_51, ATerm t);
static ATerm b_8 (ATerm g_108 (ATerm), ATerm s_51, ATerm r_51, ATerm t);
ATerm at_end_1_0 (ATerm r_104 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_67 (ATerm s_66, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm g_8 (ATerm f_678, ATerm k_678, ATerm o_69, ATerm t);
ATerm while_not_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t);
ATerm for_3_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm z_70 (ATerm t_69, ATerm u_69, ATerm v_69, ATerm t);
static ATerm w_11 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
ATerm free_vars_3_0 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm i_8 (ATerm o_94 (ATerm), ATerm g_25, ATerm e_25, ATerm t);
static ATerm m_12 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm j_8 (ATerm p_26, ATerm q_26, ATerm t);
ATerm end_scope_1_0 (ATerm l_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_94 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t);
static ATerm r_12 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm k_8 (ATerm x_26, ATerm y_26, ATerm z_26, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm n_8 (ATerm v_26, ATerm w_26, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm p_8 (ATerm i_37, ATerm j_37, ATerm t);
static ATerm q_8 (ATerm u_42, ATerm v_42, ATerm t);
static ATerm s_8 (ATerm x_102 (ATerm), ATerm y_361, ATerm a_43, ATerm t);
static ATerm r_8 (ATerm q_42, ATerm r_42, ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm f_13 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm s_118 (ATerm), ATerm t);
static ATerm w_83 (ATerm q_83, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_8 (ATerm w_42, ATerm t);
static ATerm u_8 (ATerm b_36, ATerm c_36, ATerm t);
static ATerm v_8 (ATerm k_37, ATerm l_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_85 (ATerm g_84, ATerm t);
static ATerm i_85 (ATerm k_84, ATerm l_84, ATerm m_84, ATerm t);
static ATerm j_85 (ATerm u_84, ATerm v_84, ATerm w_84, ATerm t);
static ATerm w_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_104 (ATerm), ATerm t);
static ATerm b_9 (ATerm d_28, ATerm e_28, ATerm t);
ATerm if_verbose2_1_0 (ATerm e_127 (ATerm), ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_9 (ATerm s_63, ATerm t_63, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm f_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_9 (ATerm k_26, ATerm l_26, ATerm j_26, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_8 (ATerm a_44, ATerm b_44, ATerm t);
ATerm foldr_2_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_127 (ATerm), ATerm t);
static ATerm m_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm need_help_1_0 (ATerm q_119 (ATerm), ATerm t);
static ATerm f_9 (ATerm p_30, ATerm q_30, ATerm r_30, ATerm t);
static ATerm g_9 (ATerm s_30, ATerm t_30, ATerm t);
ATerm lookup_table_0_1 (ATerm w_27, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_30, ATerm y_30, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_8 (ATerm u_30, ATerm v_30, ATerm t);
static ATerm a_9 (ATerm z_30, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm a_104 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_122 (ATerm), ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
ATerm parse_options_1_0 (ATerm u_122 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm t);
static ATerm l_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm u_15 (ATerm t);
ATerm iowrap_3_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm t);
static ATerm w_15 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,u_0 = NULL,v_0 = NULL;
  a_0 = t;
  t = term_x_15;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_a_16;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_16), b_0), term_h_16);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_k_16;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm g_127 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm l_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL;
        t = term_p_16;
        a_1 = t;
        t = term_q_16;
        b_1 = t;
        t = term_s_16;
        t = b_9(a_1, b_1, t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_u_16);
        t = geq_0_0(t);
        t = x_0;
        t = g_127(t);
        LocalPopChoice(n_16);
      }
    else
      {
        t = l_16;
        t = x_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,k_0 = NULL;
  static ATerm h_0 (ATerm t)
  {
    ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,t_6 = NULL,n_0 = NULL;
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
    t = f_94(t);
    w_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_1, u_1, v_1);
    n_0 = t;
    t = SSLsetAnnotations(n_0, s_1);
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
    t = f_94(t);
    q_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_1, q_1, m_1);
    t_6 = t;
    t = SSLsetAnnotations(t_6, j_1);
    return(t);
  }
  static ATerm m_0 (ATerm t)
  {
    ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,u_6 = NULL;
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
    t = f_94(t);
    d_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, a_2, b_2, d_2);
    u_6 = t;
    t = SSLsetAnnotations(u_6, z_1);
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
  k_0 = t;
  t = SSLsetAnnotations(k_0, d_1);
  t = abstract_choice_2_0(h_0, m_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,i_7 = NULL;
  static ATerm q_0 (ATerm t)
  {
    ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,k_7 = NULL;
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
    t = e_94(t);
    m_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_2, l_2);
    k_7 = t;
    t = SSLsetAnnotations(k_7, j_2);
    return(t);
  }
  static ATerm s_0 (ATerm t)
  {
    ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,t_2 = NULL,u_2 = NULL,o_7 = NULL;
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
    t = e_94(t);
    t_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_2, t_2);
    o_7 = t;
    t = SSLsetAnnotations(o_7, p_2);
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
  i_7 = t;
  t = SSLsetAnnotations(i_7, f_2);
  t = abstract_choice_2_0(q_0, s_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,y_2 = NULL,b_3 = NULL,d_3 = NULL,f_3 = NULL,j_3 = NULL;
  f_3 = t;
  t = save_MarkVar_0_0(t);
  v_2 = t;
  t = f_3;
  t = g_94(t);
  d_3 = t;
  t = save_MarkVar_0_0(t);
  y_2 = t;
  t = term_v_16;
  t = table_destroy_0_0(t);
  t = term_v_16;
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_16, v_2);
  t = v_7(j_3, v_2, t);
  t = d_3;
  t = h_94(t);
  b_3 = t;
  t = y_2;
  t = isect_MarkVar_0_0(t);
  t = b_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,d_8 = NULL;
  static ATerm y_0 (ATerm t)
  {
    ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,e_8 = NULL;
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
    t = d_94(t);
    t_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, t_3, r_3);
    e_8 = t;
    t = SSLsetAnnotations(e_8, p_3);
    return(t);
  }
  static ATerm c_1 (ATerm t)
  {
    ATerm v_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,f_8 = NULL;
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
    t = d_94(t);
    z_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, w_3, z_3);
    f_8 = t;
    t = SSLsetAnnotations(f_8, v_3);
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
  d_8 = t;
  t = SSLsetAnnotations(d_8, k_3);
  t = abstract_choice_2_0(y_0, c_1, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm b_4 = NULL,j_4 = NULL,l_4 = NULL,u_4 = NULL,b_5 = NULL,d_5 = NULL,e_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,y_8 = NULL,o_8 = NULL;
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
  o_8 = t;
  t = SSLsetAnnotations(o_8, e_5);
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
  y_8 = t;
  t = SSLsetAnnotations(y_8, l_4);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm k_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,y_5 = NULL,a_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,m_6 = NULL,t_9 = NULL,r_9 = NULL,m_9 = NULL;
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
  m_9 = t;
  t = SSLsetAnnotations(m_9, g_6);
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
  t = map_1_0(g_3, t);
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, u_5, v_5, a_6);
  r_9 = t;
  t = SSLsetAnnotations(r_9, t_5);
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
  t_9 = t;
  t = SSLsetAnnotations(t_9, m_5);
  s_5 = t;
  t = k_5;
  t = isect_MarkVar_0_0(t);
  t = s_5;
  return(t);
}
ATerm alltd_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t)
  {
    ATerm w_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_96(t);
        LocalPopChoice(z_16);
      }
    else
      {
        t = w_16;
        t = SRTS_all(n_6, t);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
static ATerm h_3 (ATerm t)
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
        ATerm w_0 = NULL,i_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,o_2 = NULL,s_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,c_3 = NULL,e_3 = NULL,n_3 = NULL,i_10 = NULL,h_10 = NULL,d_10 = NULL;
        t = SSLgetAnnotations(q_10);
        e_3 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, u_10, v_10, p_10);
        d_10 = t;
        t = SSLsetAnnotations(d_10, e_3);
        n_3 = t;
        t = save_MarkVar_0_0(t);
        w_0 = t;
        t = n_3;
        if(match_cons(t, sym_CallT_3))
          {
            w_2 = ATgetArgument(t, 0);
            x_2 = ATgetArgument(t, 1);
            z_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_3);
        s_2 = t;
        t = z_2;
        t = map_1_0(h_3, t);
        a_3 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, w_2, x_2, a_3);
        h_10 = t;
        t = SSLsetAnnotations(h_10, s_2);
        c_3 = t;
        if(match_cons(t, sym_CallT_3))
          {
            n_1 = ATgetArgument(t, 0);
            o_1 = ATgetArgument(t, 1);
            p_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_3);
        i_1 = t;
        t = o_1;
        t = mark_buv_0_0(t);
        r_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, n_1, r_1, p_1);
        i_10 = t;
        t = SSLsetAnnotations(i_10, i_1);
        o_2 = t;
        t = w_0;
        t = isect_MarkVar_0_0(t);
        t = o_2;
      }
    }
  else
    {
      ATerm i_4 = NULL,k_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,t_4 = NULL,k_10 = NULL,j_10 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          u_10 = ATgetArgument(t, 0);
          v_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_10);
      q_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, u_10, v_10);
      j_10 = t;
      t = SSLsetAnnotations(j_10, q_4);
      t_4 = t;
      t = save_MarkVar_0_0(t);
      i_4 = t;
      t = t_4;
      if(match_cons(t, sym_Call_2))
        {
          m_4 = ATgetArgument(t, 0);
          n_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_4);
      k_4 = t;
      t = n_4;
      t = mark_buv_0_0(t);
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, m_4, o_4);
      k_10 = t;
      t = SSLsetAnnotations(k_10, k_4);
      p_4 = t;
      t = i_4;
      t = isect_MarkVar_0_0(t);
      t = p_4;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm q_7 (ATerm s_24, ATerm t_24, ATerm u_24, ATerm t)
{
  ATerm z_10 = NULL;
  static ATerm s_3 (ATerm t)
  {
    t = t_24;
    t = map_1_0(IntroduceBound_0_0, t);
    t = u_24;
    t = mark_build_vars_0_0(t);
    if(((z_10 != NULL) && (z_10 != t)))
      _fail(t);
    else
      z_10 = t;
    return(t);
  }
  t = scope_2_0(i_3, s_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, s_24, t_24, not_null(z_10));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm r_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_11);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
            {
              ATerm j_17 = t;
              int k_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,z_11 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_11 = ATgetArgument(t, 0);
                      u_11 = ATgetArgument(t, 1);
                      v_11 = ATgetArgument(t, 2);
                      z_11 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_11;
                  t = map_1_0(f_4, t);
                  LocalPopChoice(k_17);
                }
              else
                {
                  t = j_17;
                  {
                    ATerm l_17 = t;
                    int m_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_17);
                      }
                    else
                      {
                        t = l_17;
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
static ATerm f_4 (ATerm t)
{
  ATerm q_12 = NULL;
  ATerm n_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_12 = ATgetArgument(t, 0);
          {
            ATerm r_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_17);
      t = q_12;
    }
  else
    {
      t = n_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_12;
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
  ATerm v_12 = NULL;
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_12 = ATgetArgument(t, 0);
          {
            ATerm u_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_17);
      t = v_12;
    }
  else
    {
      t = s_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_12;
    }
  return(t);
}
static ATerm r_7 (ATerm m_24, ATerm q_24, ATerm o_24, ATerm t)
{
  ATerm m_11 = NULL,p_11 = NULL,q_11 = NULL;
  static ATerm c_4 (ATerm t)
  {
    t = m_24;
    t = free_vars_3_0(d_4, e_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = m_24;
    t = mark_match_vars_0_0(t);
    if(((m_11 != NULL) && (m_11 != t)))
      _fail(t);
    else
      m_11 = t;
    t = o_24;
    t = mark_buv_0_0(t);
    if(((p_11 != NULL) && (p_11 != t)))
      _fail(t);
    else
      p_11 = t;
    t = q_24;
    t = mark_build_vars_0_0(t);
    if(((q_11 != NULL) && (q_11 != t)))
      _fail(t);
    else
      q_11 = t;
    return(t);
  }
  t = scope_2_0(x_3, c_4, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_11), not_null(q_11), not_null(p_11)));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm v_4 (ATerm t)
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
static ATerm w_4 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            {
              ATerm a_18 = t;
              int c_18 = stack_ptr;
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
                  t = map_1_0(x_4, t);
                  LocalPopChoice(c_18);
                }
              else
                {
                  t = a_18;
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
                        t = dynrule_targs_1_0(y_4, t);
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
  ATerm i_14 = NULL;
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_14 = ATgetArgument(t, 0);
          {
            ATerm i_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_18);
      t = i_14;
    }
  else
    {
      t = g_18;
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
static ATerm y_4 (ATerm t)
{
  t = map_1_0(z_4, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm n_14 = NULL;
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_14 = ATgetArgument(t, 0);
          {
            ATerm l_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_18);
      t = n_14;
    }
  else
    {
      t = j_18;
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
static ATerm s_7 (ATerm g_24, ATerm k_24, ATerm i_24, ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  static ATerm s_4 (ATerm t)
  {
    t = g_24;
    t = free_vars_3_0(v_4, w_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = g_24;
    t = mark_match_vars_0_0(t);
    if(((k_13 != NULL) && (k_13 != t)))
      _fail(t);
    else
      k_13 = t;
    t = i_24;
    t = mark_buv_0_0(t);
    if(((l_13 != NULL) && (l_13 != t)))
      _fail(t);
    else
      l_13 = t;
    t = k_24;
    t = mark_build_vars_0_0(t);
    if(((m_13 != NULL) && (m_13 != t)))
      _fail(t);
    else
      m_13 = t;
    return(t);
  }
  t = scope_2_0(r_4, s_4, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_13), not_null(m_13), not_null(l_13)));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm y_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_16);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm n_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_18);
    }
  else
    {
      t = n_18;
      {
        ATerm q_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_18);
          }
        else
          {
            t = q_18;
            {
              ATerm s_18 = t;
              int t_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_17 = ATgetArgument(t, 0);
                      e_17 = ATgetArgument(t, 1);
                      f_17 = ATgetArgument(t, 2);
                      g_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_17;
                  t = map_1_0(f_5, t);
                  LocalPopChoice(t_18);
                }
              else
                {
                  t = s_18;
                  {
                    ATerm u_18 = t;
                    int w_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_18);
                      }
                    else
                      {
                        t = u_18;
                        t = dynrule_targs_1_0(j_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm d_18 = NULL;
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_18 = ATgetArgument(t, 0);
          {
            ATerm b_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_18);
      t = d_18;
    }
  else
    {
      t = x_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_18;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = map_1_0(l_5, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm o_18 = NULL;
  ATerm c_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_18 = ATgetArgument(t, 0);
          {
            ATerm f_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_19);
      t = o_18;
    }
  else
    {
      t = c_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_18;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm r_19 = NULL;
  ATerm g_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_19 = ATgetArgument(t, 0);
          {
            ATerm k_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_19);
      t = r_19;
    }
  else
    {
      t = g_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_19;
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm u_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_19);
  return(t);
}
static ATerm c_6 (ATerm t)
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
              int v_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_19 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_19 = ATgetArgument(t, 0);
                      e_20 = ATgetArgument(t, 1);
                      f_20 = ATgetArgument(t, 2);
                      g_20 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_20;
                  t = map_1_0(d_6, t);
                  LocalPopChoice(v_19);
                }
              else
                {
                  t = t_19;
                  {
                    ATerm w_19 = t;
                    int x_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_19);
                      }
                    else
                      {
                        t = w_19;
                        t = dynrule_targs_1_0(e_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm p_20 = NULL;
  ATerm y_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_20 = ATgetArgument(t, 0);
          {
            ATerm b_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_20);
      t = p_20;
    }
  else
    {
      t = y_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_20;
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = map_1_0(l_6, t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm b_21 = NULL;
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_21 = ATgetArgument(t, 0);
          {
            ATerm h_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_20);
      t = b_21;
    }
  else
    {
      t = c_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_21;
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm j_15 = NULL,q_15 = NULL,t_15 = NULL,z_15 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      z_15 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
      c_16 = ATgetArgument(t, 2);
      {
        ATerm m_16 = NULL,o_16 = NULL,r_16 = NULL,t_16 = NULL;
        t = c_16;
        if(match_cons(t, sym_Rule_3))
          {
            j_15 = ATgetArgument(t, 0);
            q_15 = ATgetArgument(t, 1);
            t_15 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = c_16;
        t = free_vars_3_0(a_5, c_5, tboundin_3_0, t);
        m_16 = t;
        {
          static ATerm x_5 (ATerm t)
          {
            t = m_16;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = j_15;
            t = mark_match_vars_0_0(t);
            if(((o_16 != NULL) && (o_16 != t)))
              _fail(t);
            else
              o_16 = t;
            t = t_15;
            t = mark_buv_0_0(t);
            if(((r_16 != NULL) && (r_16 != t)))
              _fail(t);
            else
              r_16 = t;
            t = q_15;
            t = mark_build_vars_0_0(t);
            if(((t_16 != NULL) && (t_16 != t)))
              _fail(t);
            else
              t_16 = t;
            return(t);
          }
          t = scope_2_0(p_5, x_5, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, z_15, b_16, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_16), not_null(t_16), not_null(r_16)));
      }
    }
  else
    {
      ATerm z_18 = NULL,a_19 = NULL,d_19 = NULL,j_19 = NULL,l_19 = NULL,m_19 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          z_15 = ATgetArgument(t, 0);
          b_16 = ATgetArgument(t, 1);
          c_16 = ATgetArgument(t, 2);
          d_16 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = d_16;
      if(match_cons(t, sym_Rule_3))
        {
          e_16 = ATgetArgument(t, 0);
          f_16 = ATgetArgument(t, 1);
          g_16 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_16;
      t = map_1_0(z_5, t);
      z_18 = t;
      t = d_16;
      t = free_vars_3_0(b_6, c_6, tboundin_3_0, t);
      m_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_19, z_18);
      t = diff_0_0(t);
      a_19 = t;
      {
        static ATerm q_6 (ATerm t)
        {
          t = z_18;
          t = map_1_0(IntroduceBound_0_0, t);
          t = a_19;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = e_16;
          t = mark_match_vars_0_0(t);
          if(((d_19 != NULL) && (d_19 != t)))
            _fail(t);
          else
            d_19 = t;
          t = g_16;
          t = mark_buv_0_0(t);
          if(((j_19 != NULL) && (j_19 != t)))
            _fail(t);
          else
            j_19 = t;
          t = f_16;
          t = mark_build_vars_0_0(t);
          if(((l_19 != NULL) && (l_19 != t)))
            _fail(t);
          else
            l_19 = t;
          return(t);
        }
        t = scope_2_0(p_6, q_6, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, z_15, b_16, c_16, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_19), not_null(l_19), not_null(j_19)));
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm e_21 = NULL,h_21 = NULL,i_21 = NULL;
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_21);
  h_21 = t;
  t = term_l_20;
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, e_21), term_l_20);
  t = i_8(v_6, h_21, i_21, t);
  t = e_21;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm y_21 = NULL;
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_21 = ATgetArgument(t, 0);
          {
            ATerm o_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_20);
      t = y_21;
    }
  else
    {
      t = m_20;
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
static ATerm x_6 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm t_7 (ATerm e_23, ATerm f_23, ATerm g_23, ATerm i_23, ATerm t)
{
  ATerm k_21 = NULL,t_21 = NULL;
  t = g_23;
  t = map_1_0(w_6, t);
  k_21 = t;
  {
    static ATerm y_6 (ATerm t)
    {
      t = k_21;
      t = map_1_0(IntroduceBound_0_0, t);
      t = i_23;
      t = mark_buv_0_0(t);
      if(((t_21 != NULL) && (t_21 != t)))
        _fail(t);
      else
        t_21 = t;
      return(t);
    }
    t = scope_2_0(x_6, y_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, e_23, f_23, g_23, not_null(t_21));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm z_25 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,n_26 = NULL;
  z_25 = t;
  if(match_cons(t, sym__2))
    {
      c_26 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_26;
  if(match_cons(t, sym_Undefined_0))
    {
      t = c_26;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_q_20;
        }
      else
        {
          t = term_q_20;
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
              n_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(t_20);
          t = c_26;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_q_20;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  d_26 = ATgetArgument(t, 0);
                  e_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm v_20 = t;
                int w_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, e_26, n_26);
                    {
                      ATerm x_20 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm w_5 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              w_5 = ATgetArgument(t, 0);
                              if((w_5 != ATgetArgument(t, 1)))
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
                          t = x_20;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, d_26, term_y_20);
                    LocalPopChoice(w_20);
                  }
                else
                  {
                    t = v_20;
                    t = n_26;
                    if((e_26 != t))
                      {
                        _fail(t);
                      }
                    t = c_26;
                  }
              }
            }
        }
      else
        {
          t = s_20;
          t = c_26;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_q_20;
        }
    }
  return(t);
}
static ATerm u_7 (ATerm p_21, ATerm q_21, ATerm o_21, ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  t = term_v_16;
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_16, p_21);
  t = b_9(g_27, p_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_27 = ATgetFirst((ATermList) t);
      {
        ATerm z_20 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_21, e_27);
  t = CompareEntries_0_0(t);
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_21, (ATerm) ATinsert(CheckATermList(o_21), f_27));
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,x_28 = NULL,y_28 = NULL;
  y_28 = t;
  if(match_cons(t, sym__2))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
      t = r_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_28 = ATgetFirst((ATermList) t);
          x_28 = (ATerm) ATgetNext((ATermList) t);
          t = s_28;
          {
            ATerm a_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm d_21 = ATgetArgument(t, 0);
                    ATerm f_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(c_21);
                t = q_28;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = y_28;
                  }
                else
                  {
                    ATerm g_21 = t;
                    int l_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_28;
                        t = u_7(q_28, s_28, x_28, t);
                        LocalPopChoice(l_21);
                      }
                    else
                      {
                        t = g_21;
                        t = y_28;
                      }
                  }
              }
            else
              {
                t = a_21;
                t = q_28;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = y_28;
                  }
                else
                  {
                    t = y_28;
                  }
              }
          }
        }
      else
        {
          t = q_28;
          if(match_cons(t, sym_Scopes_0))
            {
              t = y_28;
            }
          else
            {
              t = y_28;
            }
        }
    }
  else
    {
      t = y_28;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  t = map_1_0(z_6, t);
  o_28 = t;
  t = term_v_16;
  t = table_destroy_0_0(t);
  t = term_v_16;
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_16, o_28);
  t = v_7(p_28, o_28, t);
  t = o_28;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,i_30 = NULL;
  i_30 = t;
  {
    ATerm m_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm s_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_21);
        t = i_30;
      }
    else
      {
        t = m_21;
        {
          ATerm u_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm w_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(v_21);
              t = i_30;
            }
          else
            {
              t = u_21;
              {
                ATerm x_21 = t;
                int i_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm j_22 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_22);
                    t = i_30;
                  }
                else
                  {
                    t = x_21;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm k_22 = ATgetArgument(t, 0);
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
static ATerm v_7 (ATerm n_27, ATerm m_27, ATerm t)
{
  static ATerm a_7 (ATerm t)
  {
    ATerm k_30 = NULL,l_30 = NULL,d_31 = NULL;
    if(match_cons(t, sym__2))
      {
        k_30 = ATgetArgument(t, 0);
        l_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, n_27, k_30, l_30);
    t = lookup_table_0_1(n_27, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        d_31 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = f_9(k_30, l_30, d_31, t);
    t = (ATerm) ATmakeAppl(sym__3, n_27, k_30, l_30);
    return(t);
  }
  t = m_27;
  t = map_1_0(a_7, t);
  return(t);
}
static ATerm w_7 (ATerm w_30, ATerm t)
{
  t = SSL_hashtable_keys(w_30);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_31 = NULL,r_31 = NULL;
  static ATerm b_7 (ATerm t)
  {
    ATerm y_31 = NULL,z_31 = NULL;
    y_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_31), y_31);
    t = b_9(not_null(p_31), y_31, t);
    z_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_31, z_31);
    return(t);
  }
  if(((p_31 != NULL) && (p_31 != t)))
    _fail(t);
  else
    p_31 = t;
  t = lookup_table_0_1(p_31, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(r_31, t);
  t = map_1_0(b_7, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_v_16;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm c_22, ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm c_7 (ATerm t)
    {
      static ATerm j_33 (ATerm i_32, ATerm t)
      {
        ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,s_32 = NULL;
        t = i_32;
        if(match_cons(t, sym__2))
          {
            ATerm a_23 = ATgetArgument(t, 0);
            j_32 = a_23;
            if(match_cons(a_23, sym_Var_1))
              {
                k_32 = ATgetArgument(a_23, 0);
              }
            else
              _fail(t);
            {
              ATerm b_23 = ATgetArgument(t, 1);
              if(((ATgetType(b_23) == AT_LIST) && !(ATisEmpty(b_23))))
                {
                  ATerm c_23 = ATgetFirst((ATermList) b_23);
                  if(match_cons(c_23, sym_Defined_2))
                    {
                      l_32 = ATgetArgument(c_23, 0);
                      {
                        ATerm d_23 = ATgetArgument(c_23, 1);
                        if((ATgetSymbol((ATermAppl) d_23) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  s_32 = (ATerm) ATgetNext((ATermList) b_23);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_22;
        {
          static ATerm e_7 (ATerm t)
          {
            if((k_32 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(e_7, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, j_32, (ATerm) ATinsert(CheckATermList(s_32), (ATerm) ATmakeAppl(sym_Defined_2, l_32, term_y_20)));
        return(t);
      }
      ATerm x_32 = NULL,z_32 = NULL;
      z_32 = t;
      {
        ATerm h_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                x_32 = ATgetArgument(t, 0);
                {
                  ATerm n_23 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_23);
            t = x_32;
            if(match_cons(t, sym_Scopes_0))
              {
                t = z_32;
              }
            else
              {
                ATerm o_23 = t;
                int p_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = j_33(z_32, t);
                    LocalPopChoice(p_23);
                  }
                else
                  {
                    t = o_23;
                    t = z_32;
                  }
              }
          }
        else
          {
            t = h_23;
            {
              ATerm q_23 = t;
              int s_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_33(z_32, t);
                  LocalPopChoice(s_23);
                }
              else
                {
                  t = q_23;
                  t = z_32;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(c_7, t);
  }
  e_32 = t;
  t = term_v_16;
  t = table_destroy_0_0(t);
  t = term_v_16;
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_16, e_32);
  t = v_7(f_32, e_32, t);
  t = e_32;
  return(t);
}
ATerm tboundin_3_0 (ATerm d_128 (ATerm), ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,n_44 = NULL,o_44 = NULL;
  n_44 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_44 = ATgetArgument(t, 0);
      k_44 = ATgetArgument(t, 1);
      {
        ATerm o_6 = NULL,r_6 = NULL,s_6 = NULL,y_10 = NULL;
        t = SSLgetAnnotations(n_44);
        o_6 = t;
        t = o_44;
        t = f_128(t);
        r_6 = t;
        t = k_44;
        t = d_128(t);
        s_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, r_6, s_6);
        y_10 = t;
        t = SSLsetAnnotations(y_10, o_6);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          o_44 = ATgetArgument(t, 0);
          {
            ATerm d_7 = NULL,h_7 = NULL,j_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,d_9 = NULL,h_9 = NULL,i_9 = NULL,d_22 = NULL,b_22 = NULL;
            t = SSLgetAnnotations(n_44);
            d_7 = t;
            t = o_44;
            if(match_cons(t, sym_Rule_3))
              {
                j_7 = ATgetArgument(t, 0);
                l_7 = ATgetArgument(t, 1);
                m_7 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_44);
            h_7 = t;
            t = j_7;
            t = d_128(t);
            n_7 = t;
            t = l_7;
            t = d_128(t);
            d_9 = t;
            t = m_7;
            t = d_128(t);
            h_9 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, n_7, d_9, h_9);
            b_22 = t;
            t = SSLsetAnnotations(b_22, h_7);
            i_9 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, i_9);
            d_22 = t;
            t = SSLsetAnnotations(d_22, d_7);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              o_44 = ATgetArgument(t, 0);
              k_44 = ATgetArgument(t, 1);
              i_44 = ATgetArgument(t, 2);
              {
                ATerm v_9 = NULL,a_10 = NULL,e_10 = NULL,f_10 = NULL,e_22 = NULL;
                t = SSLgetAnnotations(n_44);
                v_9 = t;
                t = o_44;
                t = f_128(t);
                a_10 = t;
                t = k_44;
                t = f_128(t);
                e_10 = t;
                t = i_44;
                t = f_128(t);
                f_10 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, a_10, e_10, f_10);
                e_22 = t;
                t = SSLsetAnnotations(e_22, v_9);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  o_44 = ATgetArgument(t, 0);
                  k_44 = ATgetArgument(t, 1);
                  i_44 = ATgetArgument(t, 2);
                  j_44 = ATgetArgument(t, 3);
                  {
                    ATerm f_11 = NULL,k_11 = NULL,l_11 = NULL,n_11 = NULL,o_11 = NULL,n_22 = NULL;
                    t = SSLgetAnnotations(n_44);
                    f_11 = t;
                    t = o_44;
                    t = f_128(t);
                    k_11 = t;
                    t = k_44;
                    t = f_128(t);
                    l_11 = t;
                    t = i_44;
                    t = f_128(t);
                    n_11 = t;
                    t = j_44;
                    t = d_128(t);
                    o_11 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, k_11, l_11, n_11, o_11);
                    n_22 = t;
                    t = SSLsetAnnotations(n_22, f_11);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_44 = ATgetArgument(t, 0);
                      k_44 = ATgetArgument(t, 1);
                      i_44 = ATgetArgument(t, 2);
                      j_44 = ATgetArgument(t, 3);
                      {
                        ATerm n_12 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,o_22 = NULL;
                        t = SSLgetAnnotations(n_44);
                        n_12 = t;
                        t = o_44;
                        t = f_128(t);
                        b_13 = t;
                        t = k_44;
                        t = f_128(t);
                        c_13 = t;
                        t = i_44;
                        t = f_128(t);
                        d_13 = t;
                        t = j_44;
                        t = d_128(t);
                        e_13 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_13, c_13, d_13, e_13);
                        o_22 = t;
                        t = SSLsetAnnotations(o_22, n_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          o_44 = ATgetArgument(t, 0);
                          k_44 = ATgetArgument(t, 1);
                          {
                            ATerm y_13 = NULL,d_14 = NULL,e_14 = NULL,p_22 = NULL;
                            t = SSLgetAnnotations(n_44);
                            y_13 = t;
                            t = o_44;
                            t = f_128(t);
                            d_14 = t;
                            t = k_44;
                            t = d_128(t);
                            e_14 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, d_14, e_14);
                            p_22 = t;
                            t = SSLsetAnnotations(p_22, y_13);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              o_44 = ATgetArgument(t, 0);
                              k_44 = ATgetArgument(t, 1);
                              {
                                ATerm x_14 = NULL,a_15 = NULL,b_15 = NULL,t_22 = NULL;
                                t = SSLgetAnnotations(n_44);
                                x_14 = t;
                                t = o_44;
                                t = f_128(t);
                                a_15 = t;
                                t = k_44;
                                t = d_128(t);
                                b_15 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, a_15, b_15);
                                t_22 = t;
                                t = SSLsetAnnotations(t_22, x_14);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  o_44 = ATgetArgument(t, 0);
                                  k_44 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_15 = NULL,n_15 = NULL,o_15 = NULL,u_22 = NULL;
                                    t = SSLgetAnnotations(n_44);
                                    k_15 = t;
                                    t = o_44;
                                    t = f_128(t);
                                    n_15 = t;
                                    t = k_44;
                                    t = d_128(t);
                                    o_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, n_15, o_15);
                                    u_22 = t;
                                    t = SSLsetAnnotations(u_22, k_15);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      o_44 = ATgetArgument(t, 0);
                                      {
                                        ATerm y_15 = NULL,i_16 = NULL,v_22 = NULL;
                                        t = SSLgetAnnotations(n_44);
                                        y_15 = t;
                                        t = o_44;
                                        t = d_128(t);
                                        i_16 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, i_16);
                                        v_22 = t;
                                        t = SSLsetAnnotations(v_22, y_15);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          o_44 = ATgetArgument(t, 0);
                                          {
                                            ATerm x_16 = NULL,a_17 = NULL,w_22 = NULL;
                                            t = SSLgetAnnotations(n_44);
                                            x_16 = t;
                                            t = o_44;
                                            t = d_128(t);
                                            a_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, a_17);
                                            w_22 = t;
                                            t = SSLsetAnnotations(w_22, x_16);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              o_44 = ATgetArgument(t, 0);
                                              {
                                                ATerm o_17 = NULL,q_17 = NULL,x_22 = NULL;
                                                t = SSLgetAnnotations(n_44);
                                                o_17 = t;
                                                t = o_44;
                                                t = d_128(t);
                                                q_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, q_17);
                                                x_22 = t;
                                                t = SSLsetAnnotations(x_22, o_17);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  o_44 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm z_17 = NULL,b_18 = NULL,y_22 = NULL;
                                                    t = SSLgetAnnotations(n_44);
                                                    z_17 = t;
                                                    t = o_44;
                                                    t = d_128(t);
                                                    b_18 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, b_18);
                                                    y_22 = t;
                                                    t = SSLsetAnnotations(y_22, z_17);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm m_18 = NULL,v_18 = NULL,z_22 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      o_44 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(n_44);
                                                  m_18 = t;
                                                  t = o_44;
                                                  t = d_128(t);
                                                  v_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, v_18);
                                                  z_22 = t;
                                                  t = SSLsetAnnotations(z_22, m_18);
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
ATerm dynrule_targs_1_0 (ATerm m_128 (ATerm), ATerm t)
{
  ATerm s_46 = NULL,v_46 = NULL,h_47 = NULL;
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          s_46 = ATgetArgument(t, 0);
          {
            ATerm v_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_23);
      t = s_46;
      if(match_cons(t, sym_DynRuleId_1))
        {
          v_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_46;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm w_23 = ATgetArgument(t, 0);
          ATerm a_24 = ATgetArgument(t, 1);
          h_47 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_47;
    }
  else
    {
      t = t_23;
      {
        ATerm b_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                s_46 = ATgetArgument(t, 0);
                {
                  ATerm d_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(c_24);
            t = s_46;
            if(match_cons(t, sym_DynRuleId_1))
              {
                v_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_46;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm f_24 = ATgetArgument(t, 0);
                ATerm h_24 = ATgetArgument(t, 1);
                h_47 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = h_47;
          }
        else
          {
            t = b_24;
            if(match_cons(t, sym_AddDynRule_2))
              {
                s_46 = ATgetArgument(t, 0);
                {
                  ATerm j_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = s_46;
            if(match_cons(t, sym_DynRuleId_1))
              {
                v_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_46;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm l_24 = ATgetArgument(t, 0);
                ATerm n_24 = ATgetArgument(t, 1);
                h_47 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = h_47;
          }
      }
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm p_48 = NULL;
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_48 = ATgetArgument(t, 0);
          {
            ATerm y_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_24);
      t = p_48;
    }
  else
    {
      t = w_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_48;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm a_49 = NULL;
  ATerm z_24 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_49 = ATgetArgument(t, 0);
          {
            ATerm c_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_25);
      t = a_49;
    }
  else
    {
      t = z_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_49;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm d_48 = NULL;
  ATerm d_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm j_25 = ATgetArgument(t, 0);
          ATerm k_25 = ATgetArgument(t, 1);
          d_48 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(h_25);
      t = d_48;
      t = map_1_0(f_7, t);
    }
  else
    {
      t = d_25;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm l_25 = ATgetArgument(t, 0);
          ATerm m_25 = ATgetArgument(t, 1);
          d_48 = ATgetArgument(t, 2);
          {
            ATerm n_25 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_48;
      t = map_1_0(g_7, t);
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm o_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_50);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      {
        ATerm q_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_25);
          }
        else
          {
            t = q_25;
            {
              ATerm u_25 = t;
              int v_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_50 = NULL,s_50 = NULL,t_50 = NULL,w_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_50 = ATgetArgument(t, 0);
                      s_50 = ATgetArgument(t, 1);
                      t_50 = ATgetArgument(t, 2);
                      w_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_50;
                  t = map_1_0(c_8, t);
                  LocalPopChoice(v_25);
                }
              else
                {
                  t = u_25;
                  {
                    ATerm w_25 = t;
                    int x_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_25);
                      }
                    else
                      {
                        t = w_25;
                        t = dynrule_targs_1_0(h_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm v_51 = NULL;
  ATerm y_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_51 = ATgetArgument(t, 0);
          {
            ATerm b_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_26);
      t = v_51;
    }
  else
    {
      t = y_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_51;
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = map_1_0(l_8, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm h_52 = NULL;
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_52 = ATgetArgument(t, 0);
          {
            ATerm i_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_26);
      t = h_52;
    }
  else
    {
      t = g_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_52;
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm o_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_52);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm m_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_26);
    }
  else
    {
      t = m_26;
      {
        ATerm s_26 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_27);
          }
        else
          {
            t = s_26;
            {
              ATerm c_27 = t;
              int d_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_52 = ATgetArgument(t, 0);
                      s_52 = ATgetArgument(t, 1);
                      t_52 = ATgetArgument(t, 2);
                      u_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_52;
                  t = map_1_0(k_9, t);
                  LocalPopChoice(d_27);
                }
              else
                {
                  t = c_27;
                  {
                    ATerm k_27 = t;
                    int l_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_27);
                      }
                    else
                      {
                        t = k_27;
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
static ATerm k_9 (ATerm t)
{
  ATerm p_53 = NULL;
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_53 = ATgetArgument(t, 0);
          {
            ATerm r_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_27);
      t = p_53;
    }
  else
    {
      t = o_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_53;
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = map_1_0(n_9, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm z_53 = NULL;
  ATerm s_27 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_53 = ATgetArgument(t, 0);
          {
            ATerm f_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_28);
      t = z_53;
    }
  else
    {
      t = s_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_53;
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm g_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_54);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            {
              ATerm k_28 = t;
              int l_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_54 = NULL,j_54 = NULL,n_54 = NULL,o_54 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_54 = ATgetArgument(t, 0);
                      j_54 = ATgetArgument(t, 1);
                      n_54 = ATgetArgument(t, 2);
                      o_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_54;
                  t = map_1_0(q_9, t);
                  LocalPopChoice(l_28);
                }
              else
                {
                  t = k_28;
                  {
                    ATerm m_28 = t;
                    int n_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_28);
                      }
                    else
                      {
                        t = m_28;
                        t = dynrule_targs_1_0(s_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm y_54 = NULL;
  ATerm t_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_54 = ATgetArgument(t, 0);
          {
            ATerm z_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_28);
      t = y_54;
    }
  else
    {
      t = t_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_54;
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = map_1_0(u_9, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm d_55 = NULL;
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_55 = ATgetArgument(t, 0);
          {
            ATerm c_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_29);
      t = d_55;
    }
  else
    {
      t = a_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_55;
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm l_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_55);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_55 = ATgetArgument(t, 0);
                      q_55 = ATgetArgument(t, 1);
                      r_55 = ATgetArgument(t, 2);
                      s_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_55;
                  t = map_1_0(y_9, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_29);
                      }
                    else
                      {
                        t = k_29;
                        t = dynrule_targs_1_0(z_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm i_56 = NULL;
  ATerm m_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_56 = ATgetArgument(t, 0);
          {
            ATerm p_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_29);
      t = i_56;
    }
  else
    {
      t = m_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_56;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = map_1_0(b_10, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm v_56 = NULL;
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_56 = ATgetArgument(t, 0);
          {
            ATerm s_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_29);
      t = v_56;
    }
  else
    {
      t = q_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_56;
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm c_57 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_57);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
            {
              ATerm y_29 = t;
              int z_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_57 = NULL,j_57 = NULL,m_57 = NULL,n_57 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_57 = ATgetArgument(t, 0);
                      j_57 = ATgetArgument(t, 1);
                      m_57 = ATgetArgument(t, 2);
                      n_57 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_57;
                  t = map_1_0(l_10, t);
                  LocalPopChoice(z_29);
                }
              else
                {
                  t = y_29;
                  {
                    ATerm a_30 = t;
                    int b_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_30);
                      }
                    else
                      {
                        t = a_30;
                        t = dynrule_targs_1_0(m_10, t);
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
  ATerm a_58 = NULL;
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_58 = ATgetArgument(t, 0);
          {
            ATerm h_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_30);
      t = a_58;
    }
  else
    {
      t = c_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_58;
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = map_1_0(n_10, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm n_58 = NULL;
  ATerm j_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_58 = ATgetArgument(t, 0);
          {
            ATerm n_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_30);
      t = n_58;
    }
  else
    {
      t = j_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_58;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm k_50 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      k_50 = ATgetArgument(t, 0);
      t = k_50;
      t = free_vars_3_0(x_7, y_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          k_50 = ATgetArgument(t, 0);
          t = k_50;
          t = free_vars_3_0(m_8, j_9, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              k_50 = ATgetArgument(t, 0);
              t = k_50;
              t = free_vars_3_0(o_9, p_9, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  k_50 = ATgetArgument(t, 0);
                  t = k_50;
                  t = free_vars_3_0(w_9, x_9, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      k_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = k_50;
                  t = free_vars_3_0(c_10, g_10, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm s_59 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_59);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm o_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_31);
    }
  else
    {
      t = o_30;
      {
        ATerm f_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_31);
          }
        else
          {
            t = f_31;
            {
              ATerm j_31 = t;
              int k_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_59 = ATgetArgument(t, 0);
                      v_59 = ATgetArgument(t, 1);
                      w_59 = ATgetArgument(t, 2);
                      x_59 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_59;
                  t = map_1_0(s_10, t);
                  LocalPopChoice(k_31);
                }
              else
                {
                  t = j_31;
                  {
                    ATerm l_31 = t;
                    int m_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_31);
                      }
                    else
                      {
                        t = l_31;
                        t = dynrule_targs_1_0(t_10, t);
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
  ATerm i_60 = NULL;
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_60 = ATgetArgument(t, 0);
          {
            ATerm q_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_31);
      t = i_60;
    }
  else
    {
      t = n_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_60;
    }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = map_1_0(w_10, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm q_60 = NULL;
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_60 = ATgetArgument(t, 0);
          {
            ATerm u_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_31);
      t = q_60;
    }
  else
    {
      t = s_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_60;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm f_59 = NULL,n_59 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      n_59 = ATgetArgument(t, 0);
      t = n_59;
      if(match_cons(t, sym_Rule_3))
        {
          f_59 = ATgetArgument(t, 0);
          {
            ATerm v_31 = ATgetArgument(t, 1);
          }
          {
            ATerm x_31 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_59;
      t = free_vars_3_0(o_10, r_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          n_59 = ATgetArgument(t, 0);
          {
            ATerm a_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_59;
    }
  return(t);
}
static ATerm z_7 (ATerm l_108 (ATerm), ATerm u_51, ATerm t_51, ATerm t)
{
  static ATerm a_62 (ATerm t)
  {
    ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL;
    v_61 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_51;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_61 = ATgetFirst((ATermList) t);
            x_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_32 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_61;
              {
                static ATerm x_10 (ATerm t)
                {
                  t = t_51;
                  return(t);
                }
                t = a_8(l_108, x_10, w_61, x_61, t);
              }
              t = a_62(t);
              LocalPopChoice(c_32);
            }
          else
            {
              t = b_32;
              {
                ATerm h_19 = NULL,q_19 = NULL,e_31 = NULL;
                t = SSLgetAnnotations(v_61);
                h_19 = t;
                t = x_61;
                t = a_62(t);
                q_19 = t;
                t = (ATerm) ATinsert(CheckATermList(q_19), w_61);
                e_31 = t;
                t = SSLsetAnnotations(e_31, h_19);
              }
            }
        }
      }
    return(t);
  }
  t = u_51;
  t = a_62(t);
  return(t);
}
ATerm foldr_3_0 (ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,j_62 = NULL;
  d_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_62;
      t = q_111(t);
    }
  else
    {
      ATerm q_62 = NULL,r_62 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_62 = ATgetFirst((ATermList) t);
          j_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_62;
      t = s_111(t);
      q_62 = t;
      t = j_62;
      t = foldr_3_0(q_111, r_111, s_111, t);
      r_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_62, r_62);
      t = r_111(t);
    }
  return(t);
}
static ATerm a_8 (ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm y_51, ATerm x_51, ATerm t)
{
  t = p_108(t);
  {
    static ATerm a_11 (ATerm t)
    {
      ATerm b_63 = NULL;
      b_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_51, b_63);
      t = o_108(t);
      return(t);
    }
    t = fetch_1_0(a_11, t);
  }
  t = x_51;
  return(t);
}
static ATerm b_8 (ATerm g_108 (ATerm), ATerm s_51, ATerm r_51, ATerm t)
{
  static ATerm q_64 (ATerm t)
  {
    ATerm b_64 = NULL,c_64 = NULL,g_64 = NULL;
    b_64 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_64;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_64 = ATgetFirst((ATermList) t);
            g_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_32 = t;
          int h_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_64;
              {
                static ATerm b_11 (ATerm t)
                {
                  t = r_51;
                  return(t);
                }
                t = a_8(g_108, b_11, c_64, g_64, t);
              }
              t = q_64(t);
              LocalPopChoice(h_32);
            }
          else
            {
              t = d_32;
              {
                ATerm k_20 = NULL,r_20 = NULL,y_33 = NULL;
                t = SSLgetAnnotations(b_64);
                k_20 = t;
                t = g_64;
                t = q_64(t);
                r_20 = t;
                t = (ATerm) ATinsert(CheckATermList(r_20), c_64);
                y_33 = t;
                t = SSLsetAnnotations(y_33, k_20);
              }
            }
        }
      }
    return(t);
  }
  t = s_51;
  t = q_64(t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  static ATerm e_66 (ATerm t)
  {
    ATerm w_65 = NULL,x_65 = NULL,c_66 = NULL;
    c_66 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_65 = ATgetFirst((ATermList) t);
        x_65 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_21 = NULL,n_21 = NULL,a_34 = NULL;
          t = SSLgetAnnotations(c_66);
          j_21 = t;
          t = x_65;
          t = e_66(t);
          n_21 = t;
          t = (ATerm) ATinsert(CheckATermList(n_21), w_65);
          a_34 = t;
          t = SSLsetAnnotations(a_34, j_21);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_66;
        t = r_104(t);
      }
    return(t);
  }
  t = e_66(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
  x_64 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_64;
    }
  else
    {
      static ATerm c_11 (ATerm t)
      {
        t = not_null(z_64);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_64 = ATgetFirst((ATermList) t);
          if(((z_64 != NULL) && (z_64 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_64;
      t = at_end_1_0(c_11, t);
    }
  return(t);
}
static ATerm e_67 (ATerm s_66, ATerm t)
{
  ATerm t_66 = NULL;
  t = SSL_explode_term(s_66);
  if(match_cons(t, sym__2))
    {
      ATerm m_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_66;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL;
  x_66 = t;
  if(match_cons(t, sym__2))
    {
      v_66 = ATgetArgument(t, 0);
      w_66 = ATgetArgument(t, 1);
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_11 (ATerm t)
            {
              t = w_66;
              return(t);
            }
            t = v_66;
            t = at_end_1_0(d_11, t);
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            t = e_67(x_66, t);
          }
      }
    }
  else
    {
      t = e_67(x_66, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm t)
{
  static ATerm r_67 (ATerm t)
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_106(t);
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        {
          ATerm f_67 = NULL,g_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,c_34 = NULL;
          t = f_106(t);
          q_67 = t;
          if(match_cons(t, sym__2))
            {
              g_67 = ATgetArgument(t, 0);
              n_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_67);
          f_67 = t;
          t = g_67;
          t = h_106(t);
          o_67 = t;
          t = n_67;
          t = r_67(t);
          p_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_67, p_67);
          c_34 = t;
          t = SSLsetAnnotations(c_34, f_67);
          t = g_106(t);
        }
      }
    return(t);
  }
  t = r_67(t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_32 = ATgetArgument(t, 0);
      if(((ATgetType(t_32) != AT_LIST) || !(ATisEmpty(t_32))))
        _fail(t);
      {
        ATerm u_32 = ATgetArgument(t, 1);
        if(((ATgetType(u_32) != AT_LIST) || !(ATisEmpty(u_32))))
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
  ATerm h_68 = NULL,i_68 = NULL,o_68 = NULL,p_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_32 = ATgetArgument(t, 0);
      if(((ATgetType(w_32) == AT_LIST) && !(ATisEmpty(w_32))))
        {
          h_68 = ATgetFirst((ATermList) w_32);
          i_68 = (ATerm) ATgetNext((ATermList) w_32);
        }
      else
        _fail(t);
      {
        ATerm y_32 = ATgetArgument(t, 1);
        if(((ATgetType(y_32) == AT_LIST) && !(ATisEmpty(y_32))))
          {
            o_68 = ATgetFirst((ATermList) y_32);
            p_68 = (ATerm) ATgetNext((ATermList) y_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_68, o_68), (ATerm) ATmakeAppl(sym__2, i_68, p_68));
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL;
  if(match_cons(t, sym__2))
    {
      q_68 = ATgetArgument(t, 0);
      r_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_68), q_68);
  return(t);
}
static ATerm g_8 (ATerm f_678, ATerm k_678, ATerm o_69, ATerm t)
{
  ATerm v_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
  t = SSL_explode_term(k_678);
  if(match_cons(t, sym__2))
    {
      v_67 = ATgetArgument(t, 0);
      y_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_678);
  if(match_cons(t, sym__2))
    {
      if((v_67 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_67, y_67);
  t = genzip_4_0(e_11, g_11, h_11, _id, t);
  z_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_67, o_69);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t)
{
  static ATerm t_68 (ATerm t)
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_101(t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = a_102(t);
        t = t_68(t);
      }
    return(t);
  }
  t = t_68(t);
  return(t);
}
ATerm for_3_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm t)
{
  t = c_102(t);
  t = while_not_2_0(d_102, e_102, t);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm j_69 = NULL;
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_69);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm k_69 = NULL,p_69 = NULL,q_69 = NULL,s_69 = NULL,e_34 = NULL;
  s_69 = t;
  if(match_cons(t, sym__2))
    {
      p_69 = ATgetArgument(t, 0);
      q_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_69);
  k_69 = t;
  t = q_69;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_69, q_69);
  e_34 = t;
  t = SSLsetAnnotations(e_34, k_69);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL;
  l_70 = t;
  if(match_cons(t, sym__2))
    {
      m_70 = ATgetArgument(t, 0);
      n_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_70 = ATgetFirst((ATermList) t);
      p_70 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_70(m_70, n_70, l_70, t);
            LocalPopChoice(f_33);
          }
        else
          {
            t = e_33;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_70), o_70), p_70);
          }
      }
    }
  else
    {
      t = z_70(m_70, n_70, l_70, t);
    }
  return(t);
}
static ATerm z_70 (ATerm t_69, ATerm u_69, ATerm v_69, ATerm t)
{
  ATerm w_69 = NULL,z_69 = NULL,f_34 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL;
  t = SSLgetAnnotations(v_69);
  w_69 = t;
  t = u_69;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_70 = ATgetFirst((ATermList) t);
      f_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_70;
  if(match_cons(t, sym__2))
    {
      d_70 = ATgetArgument(t, 0);
      e_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_70;
        if((d_70 != t))
          {
            _fail(t);
          }
        t = f_70;
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        t = u_69;
        t = g_8(d_70, e_70, f_70, t);
      }
  }
  z_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_69, z_69);
  f_34 = t;
  t = SSLsetAnnotations(f_34, w_69);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm y_70 = NULL;
  if(match_cons(t, sym__2))
    {
      y_70 = ATgetArgument(t, 0);
      if((y_70 != ATgetArgument(t, 1)))
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
  ATerm i_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_11, j_11, s_11, t);
      LocalPopChoice(k_33);
    }
  else
    {
      t = i_33;
      {
        ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL;
        t_70 = t;
        if(match_cons(t, sym__2))
          {
            u_70 = ATgetArgument(t, 0);
            v_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_70;
        t = b_8(w_11, u_70, v_70, t);
      }
    }
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  if(match_cons(t, sym__2))
    {
      f_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(c_12, f_22, g_22, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm h_22 = NULL;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      if((h_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      q_22 = ATgetArgument(t, 0);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(f_12, q_22, r_22, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm s_22 = NULL;
  if(match_cons(t, sym__2))
    {
      s_22 = ATgetArgument(t, 0);
      if((s_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_125 (ATerm), ATerm g_125 (ATerm), ATerm h_125 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm u_71 (ATerm t)
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_125(t);
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        {
          ATerm n_33 = t;
          int r_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_71 = NULL,c_71 = NULL,z_21 = NULL,a_22 = NULL;
              b_71 = t;
              t = g_125(t);
              c_71 = t;
              t = b_71;
              {
                static ATerm x_11 (ATerm t)
                {
                  ATerm f_71 = NULL;
                  t = u_71(t);
                  f_71 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_71, c_71);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_125(x_11, u_71, y_11, t);
              }
              a_22 = t;
              t = SSL_explode_term(a_22);
              if(match_cons(t, sym__2))
                {
                  ATerm s_33 = ATgetArgument(t, 0);
                  z_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_21;
              t = foldr_3_0(a_12, b_12, _id, t);
              LocalPopChoice(r_33);
            }
          else
            {
              t = n_33;
              {
                ATerm l_22 = NULL,m_22 = NULL;
                m_22 = t;
                t = SSL_explode_term(m_22);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_33 = ATgetArgument(t, 0);
                    l_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_22;
                t = foldr_3_0(d_12, e_12, u_71, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_71(t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm n_72 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_72);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm x_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = x_33;
      {
        ATerm b_34 = t;
        int d_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_34);
          }
        else
          {
            t = b_34;
            {
              ATerm g_34 = t;
              int h_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_72 = ATgetArgument(t, 0);
                      r_72 = ATgetArgument(t, 1);
                      s_72 = ATgetArgument(t, 2);
                      t_72 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_72;
                  t = map_1_0(i_12, t);
                  LocalPopChoice(h_34);
                }
              else
                {
                  t = g_34;
                  {
                    ATerm k_34 = t;
                    int l_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_34);
                      }
                    else
                      {
                        t = k_34;
                        t = dynrule_targs_1_0(j_12, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm a_73 = NULL;
  ATerm n_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_73 = ATgetArgument(t, 0);
          {
            ATerm u_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_34);
      t = a_73;
    }
  else
    {
      t = n_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_73;
    }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = map_1_0(k_12, t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm f_73 = NULL;
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_73 = ATgetArgument(t, 0);
          {
            ATerm x_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_34);
      t = f_73;
    }
  else
    {
      t = v_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_73;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,j_34 = NULL,i_34 = NULL;
  l_72 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_72 = ATgetArgument(t, 0);
      j_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_72);
  h_72 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, i_72, j_72);
  i_34 = t;
  t = SSLsetAnnotations(i_34, h_72);
  k_72 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_72 = ATgetArgument(t, 0);
      {
        ATerm z_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_72;
  t = free_vars_3_0(g_12, h_12, tboundin_3_0, t);
  y_71 = t;
  t = undefine_unbound_MarkVar_0_1(y_71, t);
  z_71 = t;
  t = k_72;
  if(match_cons(t, sym_Let_2))
    {
      c_72 = ATgetArgument(t, 0);
      d_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_72);
  b_72 = t;
  t = c_72;
  {
    static ATerm l_12 (ATerm t)
    {
      ATerm i_73 = NULL,j_73 = NULL;
      i_73 = t;
      t = term_v_16;
      t = table_destroy_0_0(t);
      t = term_v_16;
      j_73 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_16, z_71);
      t = v_7(j_73, z_71, t);
      t = i_73;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(l_12, t);
  }
  e_72 = t;
  t = term_v_16;
  t = table_destroy_0_0(t);
  t = term_v_16;
  g_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_16, z_71);
  t = v_7(g_72, z_71, t);
  t = d_72;
  t = mark_buv_0_0(t);
  f_72 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, e_72, f_72);
  j_34 = t;
  t = SSLsetAnnotations(j_34, b_72);
  return(t);
}
static ATerm i_8 (ATerm o_94 (ATerm), ATerm g_25, ATerm e_25, ATerm t)
{
  ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL;
  n_73 = t;
  t = o_94(t);
  k_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_73, g_25, e_25);
  t = c_9(k_73, g_25, e_25, t);
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_73 = NULL;
        t = term_h_35;
        s_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_73, term_h_35);
        t = b_9(k_73, s_73, t);
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_73 = ATgetFirst((ATermList) t);
      m_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_73, term_h_35, (ATerm) ATinsert(CheckATermList(m_73), (ATerm) ATinsert(CheckATermList(l_73), g_25)));
  t = lookup_table_0_1(k_73, t);
  r_73 = t;
  t = term_h_35;
  o_73 = t;
  t = (ATerm) ATinsert(CheckATermList(m_73), (ATerm) ATinsert(CheckATermList(l_73), g_25));
  p_73 = t;
  t = r_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(o_73, p_73, q_73, t);
  t = n_73;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL;
  t_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_73);
  u_73 = t;
  t = term_m_35;
  v_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_73), term_m_35);
  t = i_8(m_12, u_73, v_73, t);
  t = t_73;
  return(t);
}
static ATerm j_8 (ATerm p_26, ATerm q_26, ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL;
  x_73 = t;
  {
    ATerm n_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_26, q_26);
        t = b_9(p_26, q_26, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_35 = ATgetFirst((ATermList) t);
            w_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_35);
        {
          ATerm y_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, p_26, q_26, w_73);
          t = lookup_table_0_1(p_26, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              y_73 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_9(q_26, w_73, y_73, t);
          t = (ATerm) ATmakeAppl(sym__3, p_26, q_26, w_73);
        }
      }
    else
      {
        t = n_35;
        {
          ATerm a_74 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, p_26, q_26);
          t = lookup_table_0_1(p_26, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              a_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_8(q_26, a_74, t);
          t = (ATerm) ATmakeAppl(sym__2, p_26, q_26);
        }
      }
  }
  t = x_73;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_94 (ATerm), ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL;
  f_74 = t;
  t = l_94(t);
  e_74 = t;
  {
    ATerm t_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_74 = NULL;
        t = term_h_35;
        j_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_74, term_h_35);
        t = b_9(e_74, j_74, t);
        LocalPopChoice(y_35);
      }
    else
      {
        t = t_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_74 = ATgetFirst((ATermList) t);
      c_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_74, term_h_35, c_74);
  t = lookup_table_0_1(e_74, t);
  i_74 = t;
  t = term_h_35;
  g_74 = t;
  t = i_74;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(g_74, c_74, h_74, t);
  t = d_74;
  {
    static ATerm o_12 (ATerm t)
    {
      ATerm k_74 = NULL;
      k_74 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_74, k_74);
      t = j_8(e_74, k_74, t);
      return(t);
    }
    t = map_1_0(o_12, t);
  }
  t = f_74;
  return(t);
}
ATerm restore_always_2_0 (ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm t)
{
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_113(t);
      t = u_113(t);
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
      t = u_113(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL;
  n_74 = t;
  t = k_94(t);
  m_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_74, term_h_35);
  {
    ATerm d_36 = t;
    int g_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_74 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_36 = ATgetArgument(t, 0);
            ATerm k_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_35;
        w_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_74, term_h_35);
        t = b_9(m_74, w_74, t);
        LocalPopChoice(g_36);
      }
    else
      {
        t = d_36;
        t = (ATerm) ATempty;
      }
  }
  o_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_74, term_h_35, (ATerm) ATinsert(CheckATermList(o_74), (ATerm) ATempty));
  t = lookup_table_0_1(m_74, t);
  s_74 = t;
  t = term_h_35;
  p_74 = t;
  t = (ATerm) ATinsert(CheckATermList(o_74), (ATerm) ATempty);
  q_74 = t;
  t = s_74;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(p_74, q_74, r_74, t);
  t = n_74;
  return(t);
}
ATerm scope_2_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t)
{
  static ATerm p_12 (ATerm t)
  {
    t = end_scope_1_0(m_94, t);
    return(t);
  }
  t = begin_scope_1_0(m_94, t);
  t = restore_always_2_0(n_94, p_12, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,m_34 = NULL;
  b_75 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_74 = ATgetArgument(t, 0);
      z_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_75);
  x_74 = t;
  t = z_74;
  {
    static ATerm s_12 (ATerm t)
    {
      ATerm c_75 = NULL;
      c_75 = t;
      t = y_74;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = c_75;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(r_12, s_12, t);
  }
  a_75 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, y_74, a_75);
  m_34 = t;
  t = SSLsetAnnotations(m_34, x_74);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm l_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL,o_34 = NULL;
      f_75 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_75);
      d_75 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_75);
      o_34 = t;
      t = SSLsetAnnotations(o_34, d_75);
      LocalPopChoice(n_36);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = l_36;
      {
        ATerm p_36 = t;
        int r_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL,p_34 = NULL;
            j_75 = t;
            if(match_cons(t, sym_App_2))
              {
                h_75 = ATgetArgument(t, 0);
                i_75 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_75);
            g_75 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, h_75, i_75);
            p_34 = t;
            t = SSLsetAnnotations(p_34, g_75);
            LocalPopChoice(r_36);
            {
              ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_34 = NULL;
              p_75 = t;
              if(match_cons(t, sym_App_2))
                {
                  l_75 = ATgetArgument(t, 0);
                  m_75 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_75);
              k_75 = t;
              t = l_75;
              t = mark_buv_0_0(t);
              n_75 = t;
              t = m_75;
              t = mark_build_vars_0_0(t);
              o_75 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, n_75, o_75);
              q_34 = t;
              t = SSLsetAnnotations(q_34, k_75);
            }
          }
        else
          {
            t = p_36;
            {
              ATerm t_36 = t;
              int v_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,r_34 = NULL;
                  s_75 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      r_75 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_75);
                  q_75 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, r_75);
                  r_34 = t;
                  t = SSLsetAnnotations(r_34, q_75);
                  LocalPopChoice(v_36);
                  {
                    ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,s_34 = NULL;
                    w_75 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        u_75 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(w_75);
                    t_75 = t;
                    t = u_75;
                    t = mark_buv_0_0(t);
                    v_75 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, v_75);
                    s_34 = t;
                    t = SSLsetAnnotations(s_34, t_75);
                  }
                }
              else
                {
                  t = t_36;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_8 (ATerm x_26, ATerm y_26, ATerm z_26, ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL;
  y_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_26, y_26);
  t = b_9(x_26, y_26, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_36 = ATgetFirst((ATermList) t);
      x_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_26, y_26, (ATerm) ATinsert(CheckATermList(x_75), z_26));
  t = lookup_table_0_1(x_26, t);
  b_76 = t;
  t = (ATerm) ATinsert(CheckATermList(x_75), z_26);
  z_75 = t;
  t = b_76;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(y_26, z_75, a_76, t);
  t = y_75;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL;
  c_76 = t;
  t = term_v_16;
  d_76 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_76);
  e_76 = t;
  t = term_a_37;
  f_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_16, (ATerm)ATmakeAppl(sym_Var_1, c_76), term_a_37);
  t = k_8(d_76, e_76, f_76, t);
  t = c_76;
  return(t);
}
static ATerm n_8 (ATerm v_26, ATerm w_26, ATerm t)
{
  ATerm g_76 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_26, w_26);
  t = b_9(v_26, w_26, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_76 = ATgetFirst((ATermList) t);
      {
        ATerm b_37 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_76;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm l_77 = NULL,m_77 = NULL;
  l_77 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,r_23 = NULL;
        t = term_v_16;
        r_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_16, l_77);
        t = n_8(r_23, l_77, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_37 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_37) != ATmakeSymbol("i_0", 0, ATtrue)))
              _fail(t);
            k_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, m_77);
        l_23 = t;
        t = (ATerm) ATinsert(ATempty, k_23);
        m_23 = t;
        t = SSLsetAnnotations(l_23, m_23);
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        {
          ATerm f_37 = t;
          int g_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,e_24 = NULL;
              t = term_v_16;
              e_24 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_v_16, l_77);
              t = n_8(e_24, l_77, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_37 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_37) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  x_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, m_77);
              y_23 = t;
              t = (ATerm) ATinsert(ATempty, x_23);
              z_23 = t;
              t = SSLsetAnnotations(y_23, z_23);
              LocalPopChoice(g_37);
            }
          else
            {
              t = f_37;
              {
                ATerm p_24 = NULL,r_24 = NULL,v_24 = NULL,a_25 = NULL;
                t = term_v_16;
                a_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_v_16, l_77);
                t = n_8(a_25, l_77, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm m_37 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) m_37) != ATmakeSymbol("c_0", 0, ATtrue)))
                      _fail(t);
                    p_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, m_77);
                r_24 = t;
                t = (ATerm) ATinsert(ATempty, p_24);
                v_24 = t;
                t = SSLsetAnnotations(r_24, v_24);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,y_34 = NULL;
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
    }
  u_77 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_77);
  r_77 = t;
  t = s_77;
  t = DeclareBound_0_0(t);
  t_77 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_77);
  y_34 = t;
  t = SSLsetAnnotations(y_34, r_77);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,a_35 = NULL;
      z_77 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_77);
      x_77 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_77);
      a_35 = t;
      t = SSLsetAnnotations(a_35, x_77);
      LocalPopChoice(q_37);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = p_37;
      {
        ATerm r_37 = t;
        int s_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL,b_35 = NULL;
            d_78 = t;
            if(match_cons(t, sym_App_2))
              {
                b_78 = ATgetArgument(t, 0);
                c_78 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_78);
            a_78 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, b_78, c_78);
            b_35 = t;
            t = SSLsetAnnotations(b_35, a_78);
            LocalPopChoice(s_37);
            {
              ATerm e_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,c_35 = NULL;
              j_78 = t;
              if(match_cons(t, sym_App_2))
                {
                  f_78 = ATgetArgument(t, 0);
                  g_78 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_78);
              e_78 = t;
              t = f_78;
              t = mark_buv_0_0(t);
              h_78 = t;
              t = g_78;
              t = mark_build_vars_0_0(t);
              i_78 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, h_78, i_78);
              c_35 = t;
              t = SSLsetAnnotations(c_35, e_78);
            }
          }
        else
          {
            t = r_37;
            {
              ATerm t_37 = t;
              int u_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL,d_35 = NULL;
                  m_78 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      l_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_78);
                  k_78 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, l_78);
                  d_35 = t;
                  t = SSLsetAnnotations(d_35, k_78);
                  LocalPopChoice(u_37);
                  {
                    ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,e_35 = NULL;
                    q_78 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        o_78 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(q_78);
                    n_78 = t;
                    t = o_78;
                    t = mark_buv_0_0(t);
                    p_78 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, p_78);
                    e_35 = t;
                    t = SSLsetAnnotations(e_35, n_78);
                  }
                }
              else
                {
                  t = t_37;
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
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_79 = NULL,m_79 = NULL;
      l_79 = t;
      if(match_cons(t, sym_Match_1))
        {
          m_79 = ATgetArgument(t, 0);
          {
            ATerm f_25 = NULL,i_25 = NULL,k_35 = NULL;
            t = SSLgetAnnotations(l_79);
            f_25 = t;
            t = m_79;
            t = mark_match_vars_0_0(t);
            i_25 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, i_25);
            k_35 = t;
            t = SSLsetAnnotations(k_35, f_25);
          }
        }
      else
        {
          ATerm r_25 = NULL,t_25 = NULL,l_35 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              m_79 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_79);
          r_25 = t;
          t = m_79;
          t = mark_build_vars_0_0(t);
          t_25 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, t_25);
          l_35 = t;
          t = SSLsetAnnotations(l_35, r_25);
        }
      LocalPopChoice(w_37);
    }
  else
    {
      t = v_37;
      {
        ATerm x_37 = t;
        int y_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(y_37);
          }
        else
          {
            t = x_37;
            {
              ATerm z_37 = t;
              int a_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(a_38);
                }
              else
                {
                  t = z_37;
                  {
                    ATerm b_38 = t;
                    int c_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(c_38);
                      }
                    else
                      {
                        t = b_38;
                        {
                          ATerm d_38 = t;
                          int e_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL;
                              n_79 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  o_79 = ATgetArgument(t, 0);
                                  p_79 = ATgetArgument(t, 1);
                                  q_79 = ATgetArgument(t, 2);
                                  r_79 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = n_79;
                              t = t_7(o_79, p_79, q_79, r_79, t);
                              LocalPopChoice(e_38);
                            }
                          else
                            {
                              t = d_38;
                              {
                                ATerm f_38 = t;
                                int g_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(g_38);
                                  }
                                else
                                  {
                                    t = f_38;
                                    {
                                      ATerm h_38 = t;
                                      int i_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL;
                                          z_79 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              a_80 = ATgetArgument(t, 0);
                                              t = a_80;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  w_79 = ATgetArgument(t, 0);
                                                  x_79 = ATgetArgument(t, 1);
                                                  y_79 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = z_79;
                                              t = s_7(w_79, x_79, y_79, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  a_80 = ATgetArgument(t, 0);
                                                  t = a_80;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      w_79 = ATgetArgument(t, 0);
                                                      x_79 = ATgetArgument(t, 1);
                                                      y_79 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_79;
                                                  t = r_7(w_79, x_79, y_79, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      a_80 = ATgetArgument(t, 0);
                                                      b_80 = ATgetArgument(t, 1);
                                                      c_80 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_79;
                                                  t = q_7(a_80, b_80, c_80, t);
                                                }
                                            }
                                          LocalPopChoice(i_38);
                                        }
                                      else
                                        {
                                          t = h_38;
                                          {
                                            ATerm j_38 = t;
                                            int k_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(k_38);
                                              }
                                            else
                                              {
                                                t = j_38;
                                                {
                                                  ATerm l_38 = t;
                                                  int m_38 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(m_38);
                                                    }
                                                  else
                                                    {
                                                      t = l_38;
                                                      {
                                                        ATerm n_38 = t;
                                                        int o_38 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm m_80 = NULL;
                                                            m_80 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm p_38 = ATgetArgument(t, 0);
                                                                ATerm q_38 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = m_80;
                                                            t = p_7(t);
                                                            LocalPopChoice(o_38);
                                                          }
                                                        else
                                                          {
                                                            t = n_38;
                                                            {
                                                              ATerm r_38 = t;
                                                              int s_38 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(s_38);
                                                                }
                                                              else
                                                                {
                                                                  t = r_38;
                                                                  {
                                                                    ATerm t_38 = t;
                                                                    int u_38 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(u_38);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_38;
                                                                        {
                                                                          ATerm v_38 = t;
                                                                          int w_38 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(w_38);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_38;
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
static ATerm t_12 (ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL,b_81 = NULL;
  z_80 = t;
  t = term_a_16;
  a_81 = t;
  t = (ATerm) ATinsert(ATempty, term_x_38);
  b_81 = t;
  t = SSL_printnl(a_81, b_81);
  t = z_80;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL,o_35 = NULL;
  f_81 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_81);
  c_81 = t;
  t = d_81;
  t = map_1_0(mark_buv_0_0, t);
  e_81 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_81);
  o_35 = t;
  t = SSLsetAnnotations(o_35, c_81);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL;
  g_81 = t;
  t = term_a_16;
  h_81 = t;
  t = (ATerm) ATinsert(ATempty, term_y_38);
  i_81 = t;
  t = SSL_printnl(h_81, i_81);
  t = g_81;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,q_35 = NULL,p_35 = NULL;
  t = if_verbose4_1_0(t_12, t);
  y_80 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_80);
  r_80 = t;
  t = s_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_80 = ATgetFirst((ATermList) t);
      v_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_80);
  t_80 = t;
  t = v_80;
  t = Cons_2_0(u_12, w_12, t);
  w_80 = t;
  t = (ATerm) ATinsert(CheckATermList(w_80), u_80);
  p_35 = t;
  t = SSLsetAnnotations(p_35, t_80);
  x_80 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_80);
  q_35 = t;
  t = SSLsetAnnotations(q_35, r_80);
  t = if_verbose4_1_0(x_12, t);
  return(t);
}
static ATerm p_8 (ATerm i_37, ATerm j_37, ATerm t)
{
  ATerm j_81 = NULL;
  t = SSL_fputc(i_37, j_37);
  j_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_81);
  return(t);
}
static ATerm q_8 (ATerm u_42, ATerm v_42, ATerm t)
{
  ATerm k_81 = NULL;
  t = SSL_write_term_to_stream_text(u_42, v_42);
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_81);
  return(t);
}
static ATerm s_8 (ATerm x_102 (ATerm), ATerm y_361, ATerm a_43, ATerm t)
{
  ATerm l_81 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_361, term_z_38);
  t = w_8(t);
  l_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_81, a_43);
  t = x_102(t);
  t = fclose_0_0(t);
  t = a_43;
  return(t);
}
static ATerm r_8 (ATerm q_42, ATerm r_42, ATerm t)
{
  ATerm m_81 = NULL;
  t = SSL_write_term_to_stream_baf(q_42, r_42);
  m_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_81);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_39 = ATgetArgument(t, 0);
      if(match_cons(a_39, sym_Stream_1))
        {
          i_27 = ATgetArgument(a_39, 0);
        }
      else
        _fail(t);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(i_27, j_27, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_39 = ATgetArgument(t, 0);
      if(match_cons(b_39, sym_Stream_1))
        {
          a_28 = ATgetArgument(b_39, 0);
        }
      else
        _fail(t);
      b_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(a_28, b_28, t);
  x_27 = t;
  t = term_c_39;
  y_27 = t;
  t = x_27;
  if(match_cons(t, sym_Stream_1))
    {
      z_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_39, x_27);
  t = p_8(y_27, z_27, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,a_83 = NULL,b_83 = NULL,v_35 = NULL,u_35 = NULL;
  r_81 = t;
  if(match_cons(t, sym__2))
    {
      y_81 = ATgetArgument(t, 0);
      z_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_81);
  x_81 = t;
  t = y_81;
  {
    ATerm d_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_12 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_81 != NULL) && (q_81 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_81 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_12, t);
        LocalPopChoice(e_39);
      }
    else
      {
        t = d_39;
        t = term_f_39;
        q_81 = t;
      }
  }
  a_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_82, z_81);
  u_35 = t;
  t = SSLsetAnnotations(u_35, x_81);
  t = r_81;
  if(match_cons(t, sym__2))
    {
      t_81 = ATgetArgument(t, 0);
      u_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_81);
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_81, (ATerm) ATmakeAppl(sym__2, not_null(q_81), u_81));
  v_35 = t;
  t = SSLsetAnnotations(v_35, s_81);
  w_81 = t;
  if(match_cons(t, sym__2))
    {
      a_83 = ATgetArgument(t, 0);
      b_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_26 = NULL,t_26 = NULL,u_26 = NULL,a_27 = NULL,h_27 = NULL,w_35 = NULL;
        t = SSLgetAnnotations(w_81);
        o_26 = t;
        t = a_83;
        t = fetch_1_0(z_12, t);
        t_26 = t;
        t = b_83;
        if(match_cons(t, sym__2))
          {
            a_27 = ATgetArgument(t, 0);
            h_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_8(a_13, a_27, h_27, t);
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
        w_35 = t;
        t = SSLsetAnnotations(w_35, o_26);
        LocalPopChoice(h_39);
      }
    else
      {
        t = g_39;
        {
          ATerm q_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,x_35 = NULL;
          t = SSLgetAnnotations(w_81);
          q_27 = t;
          t = b_83;
          if(match_cons(t, sym__2))
            {
              u_27 = ATgetArgument(t, 0);
              v_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_8(f_13, u_27, v_27, t);
          t_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_83, t_27);
          x_35 = t;
          t = SSLsetAnnotations(x_35, q_27);
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
ATerm apply_strategy_1_0 (ATerm s_118 (ATerm), ATerm t)
{
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL;
  i_83 = t;
  t = dtime_0_0(t);
  t = i_83;
  t = s_118(t);
  h_83 = t;
  t = dtime_0_0(t);
  e_83 = t;
  t = h_83;
  if(match_cons(t, sym__2))
    {
      f_83 = ATgetArgument(t, 0);
      g_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_83), (ATerm) ATmakeAppl(sym_Runtime_1, e_83)), g_83);
  return(t);
}
static ATerm w_83 (ATerm q_83, ATerm t)
{
  t = SSL_fclose(q_83);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL;
  u_83 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_83 = ATgetArgument(t, 0);
      {
        ATerm i_39 = t;
        int j_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_83);
            LocalPopChoice(j_39);
          }
        else
          {
            t = i_39;
            t = w_83(u_83, t);
          }
      }
    }
  else
    {
      t = w_83(u_83, t);
    }
  return(t);
}
static ATerm t_8 (ATerm w_42, ATerm t)
{
  t = SSL_read_term_from_stream(w_42);
  return(t);
}
static ATerm u_8 (ATerm b_36, ATerm c_36, ATerm t)
{
  t = SSL_strcat(b_36, c_36);
  return(t);
}
static ATerm v_8 (ATerm k_37, ATerm l_37, ATerm t)
{
  ATerm x_83 = NULL;
  t = SSL_fopen(k_37, l_37);
  x_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_83);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_83 = NULL;
  t = SSL_stdin_stream();
  y_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_83);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_83 = NULL;
  t = SSL_stdout_stream();
  z_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_83);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_84 = NULL;
  t = SSL_stderr_stream();
  a_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_84);
  return(t);
}
static ATerm h_85 (ATerm g_84, ATerm t)
{
  ATerm h_84 = NULL;
  t = SSL_explode_term(g_84);
  if(match_cons(t, sym__2))
    {
      ATerm k_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_39 = ATgetArgument(t, 1);
        if(((ATgetType(l_39) == AT_LIST) && !(ATisEmpty(l_39))))
          {
            h_84 = ATgetFirst((ATermList) l_39);
            {
              ATerm m_39 = (ATerm) ATgetNext((ATermList) l_39);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_84;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_84;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_84;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_84;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_85 (ATerm k_84, ATerm l_84, ATerm m_84, ATerm t)
{
  ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL,s_84 = NULL,e_36 = NULL;
  t = SSLgetAnnotations(m_84);
  p_84 = t;
  t = k_84;
  if(match_cons(t, sym_Path_1))
    {
      s_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_84, l_84);
  e_36 = t;
  t = SSLsetAnnotations(e_36, p_84);
  if(match_cons(t, sym__2))
    {
      n_84 = ATgetArgument(t, 0);
      o_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8(n_84, o_84, t);
  return(t);
}
static ATerm j_85 (ATerm u_84, ATerm v_84, ATerm w_84, ATerm t)
{
  ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL,c_85 = NULL,f_36 = NULL;
  t = SSLgetAnnotations(w_84);
  z_84 = t;
  t = SSL_is_string(u_84);
  c_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_85, v_84);
  f_36 = t;
  t = SSLsetAnnotations(f_36, z_84);
  if(match_cons(t, sym__2))
    {
      x_84 = ATgetArgument(t, 0);
      y_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8(x_84, y_84, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL;
  e_85 = t;
  if(match_cons(t, sym__2))
    {
      f_85 = ATgetArgument(t, 0);
      g_85 = ATgetArgument(t, 1);
      {
        ATerm n_39 = t;
        int o_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_85(e_85, t);
            LocalPopChoice(o_39);
          }
        else
          {
            t = n_39;
            {
              ATerm p_39 = t;
              int q_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_85(f_85, g_85, e_85, t);
                  LocalPopChoice(q_39);
                }
              else
                {
                  t = p_39;
                  t = j_85(f_85, g_85, e_85, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_85(e_85, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL,n_85 = NULL,s_85 = NULL;
  s_85 = t;
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_85, term_t_39);
        t = w_8(t);
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        {
          ATerm u_28 = NULL,v_28 = NULL;
          t = term_u_39;
          v_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_39, s_85);
          t = u_8(v_28, s_85, t);
          u_28 = t;
          t = SSL_perror(u_28);
          _fail(t);
        }
      }
  }
  m_85 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_8(n_85, t);
  l_85 = t;
  t = m_85;
  t = fclose_0_0(t);
  t = l_85;
  return(t);
}
ATerm fetch_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  static ATerm r_86 (ATerm t)
  {
    ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL;
    o_86 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_86 = ATgetFirst((ATermList) t);
        q_86 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_39 = t;
      int w_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_29 = NULL,n_29 = NULL,i_36 = NULL;
          t = SSLgetAnnotations(o_86);
          f_29 = t;
          t = p_86;
          t = k_104(t);
          n_29 = t;
          t = (ATerm) ATinsert(CheckATermList(q_86), n_29);
          i_36 = t;
          t = SSLsetAnnotations(i_36, f_29);
          LocalPopChoice(w_39);
        }
      else
        {
          t = v_39;
          {
            ATerm x_29 = NULL,e_30 = NULL,j_36 = NULL;
            t = SSLgetAnnotations(o_86);
            x_29 = t;
            t = q_86;
            t = r_86(t);
            e_30 = t;
            t = (ATerm) ATinsert(CheckATermList(e_30), p_86);
            j_36 = t;
            t = SSLsetAnnotations(j_36, x_29);
          }
        }
    }
    return(t);
  }
  t = r_86(t);
  return(t);
}
static ATerm b_9 (ATerm d_28, ATerm e_28, ATerm t)
{
  ATerm u_86 = NULL;
  t = lookup_table_0_1(d_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_9(e_28, u_86, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm x_86 = NULL;
  x_86 = t;
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL;
        t = term_p_16;
        a_87 = t;
        t = term_q_16;
        b_87 = t;
        t = term_s_16;
        t = b_9(a_87, b_87, t);
        z_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_86, term_z_39);
        t = geq_0_0(t);
        t = x_86;
        t = e_127(t);
        LocalPopChoice(y_39);
      }
    else
      {
        t = x_39;
        t = x_86;
      }
  }
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm e_87 = NULL;
  e_87 = t;
  if(match_string(t, "-k"))
    {
      t = e_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_87;
    }
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL;
  f_87 = t;
  t = SSL_string_to_int(f_87);
  g_87 = t;
  t = term_a_40;
  h_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_40, g_87);
  t = e_9(h_87, g_87, t);
  t = f_87;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_b_40;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_13, h_13, i_13, t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm j_87 = NULL;
  j_87 = t;
  if(match_string(t, "-S"))
    {
      t = j_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_87;
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm k_87 = NULL,l_87 = NULL;
  t = term_q_16;
  k_87 = t;
  t = term_c_40;
  l_87 = t;
  t = term_d_40;
  t = e_9(k_87, l_87, t);
  t = term_e_40;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_f_40;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL;
  m_87 = t;
  t = SSL_string_to_int(m_87);
  n_87 = t;
  t = term_q_16;
  o_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_16, n_87);
  t = e_9(o_87, n_87, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_87);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_g_40;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm p_87 = NULL,q_87 = NULL;
  t = term_h_40;
  p_87 = t;
  t = term_x_15;
  q_87 = t;
  t = term_i_40;
  t = e_9(p_87, q_87, t);
  t = term_j_40;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = term_k_40;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_40 = t;
  int m_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_13, o_13, t_13, t);
      LocalPopChoice(m_40);
    }
  else
    {
      t = l_40;
      {
        ATerm n_40 = t;
        int o_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_13, v_13, w_13, t);
            LocalPopChoice(o_40);
          }
        else
          {
            t = n_40;
            t = Option_3_0(x_13, z_13, a_14, t);
          }
      }
    }
  return(t);
}
static ATerm e_9 (ATerm s_63, ATerm t_63, ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL;
  t = term_p_16;
  r_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_16, s_63, t_63);
  t = lookup_table_0_1(r_87, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(s_63, t_63, s_87, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_16, s_63, t_63);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
      t = term_x_15;
      t = j_0(t);
      y_87 = t;
      t = term_p_40;
      z_87 = t;
      t = term_q_40;
      a_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_40, term_q_40, y_87);
      t = c_9(z_87, a_88, y_87, t);
      _fail(t);
    }
  else
    {
      ATerm d_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_87 = ATgetFirst((ATermList) t);
          x_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_87;
      t = d_0(t);
      t = term_x_15;
      t = g_0(t);
      d_88 = t;
      t = (ATerm) ATinsert(CheckATermList(x_87), d_88);
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm f_88 = NULL;
  f_88 = t;
  if(match_string(t, "-o"))
    {
      t = f_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_88;
    }
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL;
  g_88 = t;
  t = term_r_40;
  h_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_40, g_88);
  t = e_9(h_88, g_88, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_88);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_s_40;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_14, c_14, f_14, t);
  return(t);
}
static ATerm c_9 (ATerm k_26, ATerm l_26, ATerm j_26, ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL;
  j_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_26, l_26);
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_40 = ATgetArgument(t, 0);
            ATerm w_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_26, l_26);
        t = b_9(k_26, l_26, t);
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        t = (ATerm) ATempty;
      }
  }
  k_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_26, l_26, (ATerm) ATinsert(CheckATermList(k_88), j_26));
  t = lookup_table_0_1(k_26, t);
  n_88 = t;
  t = (ATerm) ATinsert(CheckATermList(k_88), j_26);
  l_88 = t;
  t = n_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(l_26, l_88, m_88, t);
  t = j_88;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL;
      t = term_x_15;
      t = t_0(t);
      y_88 = t;
      t = term_p_40;
      z_88 = t;
      t = term_q_40;
      a_89 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_40, term_q_40, y_88);
      t = c_9(z_88, a_89, y_88, t);
      _fail(t);
    }
  else
    {
      ATerm e_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_88 = ATgetFirst((ATermList) t);
          v_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_88;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_88 = ATgetFirst((ATermList) t);
          x_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_88;
      t = p_0(t);
      t = w_88;
      t = r_0(t);
      e_89 = t;
      t = (ATerm) ATinsert(CheckATermList(x_88), e_89);
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm g_89 = NULL;
  g_89 = t;
  if(match_string(t, "-i"))
    {
      t = g_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_89;
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm h_89 = NULL,i_89 = NULL;
  h_89 = t;
  t = term_x_40;
  i_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_40, h_89);
  t = e_9(i_89, h_89, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_89);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_14, h_14, j_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_15;
  t = whoami_0_0(t);
  j_89 = t;
  t = term_a_16;
  l_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_40), j_89);
  m_89 = t;
  t = SSL_printnl(l_89, m_89);
  t = term_k_16;
  k_89 = t;
  t = SSL_exit(k_89);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_89 = NULL,o_89 = NULL;
  t = term_p_16;
  n_89 = t;
  t = term_a_41;
  o_89 = t;
  t = term_b_41;
  t = b_9(n_89, o_89, t);
  return(t);
}
static ATerm x_8 (ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_44, b_44);
      LocalPopChoice(d_41);
    }
  else
    {
      t = c_41;
      t = SSL_addr(a_44, b_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm t)
{
  ATerm q_89 = NULL,r_89 = NULL,s_89 = NULL;
  q_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_89;
      t = o_111(t);
    }
  else
    {
      ATerm v_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_89 = ATgetFirst((ATermList) t);
          s_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_89;
      t = foldr_2_0(o_111, p_111, t);
      v_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_89, v_89);
      t = p_111(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_c_40;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL;
  if(match_cons(t, sym__2))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_8(g_31, h_31, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_89 = NULL,b_31 = NULL,c_31 = NULL;
  t = times_0_0(t);
  c_31 = t;
  t = SSL_explode_term(c_31);
  if(match_cons(t, sym__2))
    {
      ATerm e_41 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_31;
  t = foldr_2_0(k_14, l_14, t);
  y_89 = t;
  t = SSL_TicksToSeconds(y_89);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL;
  j_90 = t;
  if(match_cons(t, sym__2))
    {
      k_90 = ATgetArgument(t, 0);
      l_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_90;
        if((k_90 != t))
          {
            _fail(t);
          }
        t = j_90;
        LocalPopChoice(g_41);
      }
    else
      {
        t = f_41;
        t = (ATerm) ATmakeAppl(sym__2, k_90, l_90);
        {
          ATerm h_41 = t;
          int i_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_90, l_90);
              LocalPopChoice(i_41);
            }
          else
            {
              t = h_41;
              t = SSL_gtr(k_90, l_90);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_90, l_90);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_127 (ATerm), ATerm t)
{
  ATerm p_90 = NULL;
  p_90 = t;
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL;
        t = term_p_16;
        s_90 = t;
        t = term_q_16;
        t_90 = t;
        t = term_s_16;
        t = b_9(s_90, t_90, t);
        r_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_90, term_k_16);
        t = geq_0_0(t);
        t = p_90;
        t = d_127(t);
        LocalPopChoice(k_41);
      }
    else
      {
        t = j_41;
        t = p_90;
      }
  }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL,y_90 = NULL,z_90 = NULL;
  t = run_time_0_0(t);
  v_90 = t;
  t = term_x_15;
  t = whoami_0_0(t);
  w_90 = t;
  t = term_a_16;
  y_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_41), v_90), term_l_41), w_90);
  z_90 = t;
  t = SSL_printnl(y_90, z_90);
  t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_41), v_90), term_l_41), w_90));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_91 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_40;
  a_91 = t;
  t = SSL_exit(a_91);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL;
  l_91 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_91;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_91 = ATgetArgument(t, 0);
          {
            ATerm w_31 = NULL,m_36 = NULL;
            t = SSLgetAnnotations(l_91);
            w_31 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_91);
            m_36 = t;
            t = SSLsetAnnotations(m_36, w_31);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_91;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_119 (ATerm), ATerm t)
{
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_91 = NULL,e_91 = NULL;
      t = term_p_16;
      d_91 = t;
      t = term_p_41;
      e_91 = t;
      t = term_q_41;
      t = b_9(d_91, e_91, t);
      LocalPopChoice(o_41);
    }
  else
    {
      t = n_41;
      t = fetch_1_0(o_14, t);
    }
  t = q_119(t);
  return(t);
}
static ATerm f_9 (ATerm p_30, ATerm q_30, ATerm r_30, ATerm t)
{
  ATerm n_91 = NULL;
  t = SSL_hashtable_put(r_30, p_30, q_30);
  n_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_91);
  return(t);
}
static ATerm g_9 (ATerm s_30, ATerm t_30, ATerm t)
{
  t = SSL_hashtable_get(t_30, s_30);
  return(t);
}
ATerm lookup_table_0_1 (ATerm w_27, ATerm t)
{
  ATerm w_91 = NULL;
  t = table_hashtable_0_0(t);
  w_91 = t;
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_32 = NULL;
        t = w_91;
        if(match_cons(t, sym_Hashtable_1))
          {
            g_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_9(w_27, g_32, t);
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        {
          ATerm p_32 = NULL;
          t = w_27;
          t = table_create_0_0(t);
          t = w_91;
          if(match_cons(t, sym_Hashtable_1))
            {
              p_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_9(w_27, p_32, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_30, ATerm y_30, ATerm t)
{
  ATerm z_91 = NULL;
  t = SSL_hashtable_create(x_30, y_30);
  z_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_91);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL,e_92 = NULL,f_92 = NULL;
  a_92 = t;
  t = term_t_41;
  e_92 = t;
  t = term_u_41;
  f_92 = t;
  t = a_92;
  t = new_hashtable_0_2(e_92, f_92, t);
  b_92 = t;
  t = a_92;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(a_92, b_92, c_92, t);
  t = a_92;
  return(t);
}
static ATerm z_8 (ATerm u_30, ATerm v_30, ATerm t)
{
  ATerm g_92 = NULL;
  t = SSL_hashtable_remove(v_30, u_30);
  g_92 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_92);
  return(t);
}
static ATerm a_9 (ATerm z_30, ATerm t)
{
  ATerm h_92 = NULL;
  t = SSL_hashtable_destroy(z_30);
  h_92 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_92);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_92 = NULL;
  t = SSL_table_hashtable();
  i_92 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_92);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL;
  j_92 = t;
  t = table_hashtable_0_0(t);
  k_92 = t;
  t = lookup_table_0_1(j_92, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(m_92, t);
  t = k_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(j_92, l_92, t);
  t = j_92;
  return(t);
}
ATerm map_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  static ATerm d_93 (ATerm t)
  {
    ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL;
    a_93 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_93;
      }
    else
      {
        ATerm v_32 = NULL,c_33 = NULL,d_33 = NULL,o_36 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_93 = ATgetFirst((ATermList) t);
            c_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_93);
        v_32 = t;
        t = b_93;
        t = a_104(t);
        c_33 = t;
        t = c_93;
        t = d_93(t);
        d_33 = t;
        t = (ATerm) ATinsert(CheckATermList(d_33), c_33);
        o_36 = t;
        t = SSLsetAnnotations(o_36, v_32);
      }
    return(t);
  }
  t = d_93(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_93 = ATgetFirst((ATermList) t);
      h_93 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_93 = NULL,m_93 = NULL;
        static ATerm p_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_93)), not_null(m_93));
          return(t);
        }
        t = h_93;
        t = o_0(t);
        if(((l_93 != NULL) && (l_93 != t)))
          _fail(t);
        else
          l_93 = t;
        t = g_93;
        t = l_0(t);
        if(((m_93 != NULL) && (m_93 != t)))
          _fail(t);
        else
          m_93 = t;
        t = h_93;
        t = reverse_acc_2_0(l_0, p_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_15;
      t = o_0(t);
    }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL,q_36 = NULL;
  u_93 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_93);
  s_93 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_93);
  q_36 = t;
  t = SSLsetAnnotations(q_36, s_93);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm w_93 = NULL;
  w_93 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_93), term_v_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_93 = NULL,p_93 = NULL;
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_93 = NULL,r_93 = NULL;
      t = term_p_16;
      q_93 = t;
      t = term_a_41;
      r_93 = t;
      t = term_b_41;
      t = b_9(q_93, r_93, t);
      LocalPopChoice(x_41);
    }
  else
    {
      t = w_41;
      t = fetch_1_0(q_14, t);
    }
  t = term_y_41;
  t = echo_0_0(t);
  t = term_p_40;
  o_93 = t;
  t = term_q_40;
  p_93 = t;
  t = term_z_41;
  t = b_9(o_93, p_93, t);
  t = reverse_acc_2_0(_id, r_14, t);
  t = map_1_0(s_14, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_93 = NULL,z_93 = NULL,a_94 = NULL;
  y_93 = t;
  {
    ATerm a_42 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_93;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_42 = ATgetFirst((ATermList) t);
                ATerm d_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_93;
          }
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
        t = (ATerm) ATinsert(ATempty, y_93);
      }
  }
  z_93 = t;
  t = term_f_39;
  a_94 = t;
  t = SSL_printnl(a_94, z_93);
  t = y_93;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_94 = NULL,p_94 = NULL;
  t = term_p_16;
  j_94 = t;
  t = term_a_41;
  p_94 = t;
  t = term_b_41;
  t = b_9(j_94, p_94, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL;
  t = term_e_42;
  r_94 = t;
  t = term_x_15;
  s_94 = t;
  t = term_f_42;
  t = e_9(r_94, s_94, t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_g_42;
  return(t);
}
static ATerm w_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL;
  t = term_e_42;
  v_94 = t;
  t = term_x_15;
  w_94 = t;
  t = term_f_42;
  t = e_9(v_94, w_94, t);
  t = term_h_42;
  t_94 = t;
  t = term_x_15;
  u_94 = t;
  t = term_i_42;
  t = e_9(t_94, u_94, t);
  t = term_j_42;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_k_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_14, u_14, v_14, t);
      LocalPopChoice(m_42);
    }
  else
    {
      t = l_42;
      t = Option_3_0(w_14, y_14, z_14, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm t)
{
  ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,s_36 = NULL;
  c_95 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_94 = ATgetFirst((ATermList) t);
      z_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_95);
  x_94 = t;
  t = y_94;
  t = u_92(t);
  a_95 = t;
  t = z_94;
  t = v_92(t);
  b_95 = t;
  t = (ATerm) ATinsert(CheckATermList(b_95), a_95);
  s_36 = t;
  t = SSLsetAnnotations(s_36, x_94);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_122 (ATerm), ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,m_95 = NULL,n_95 = NULL,u_36 = NULL;
  h_95 = t;
  {
    ATerm n_42 = t;
    int o_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_42;
        t = v_122(t);
        LocalPopChoice(o_42);
      }
    else
      {
        t = n_42;
      }
  }
  t = h_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_95 = ATgetFirst((ATermList) t);
      k_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_95);
  i_95 = t;
  t = term_a_41;
  n_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_41, j_95);
  t = e_9(n_95, j_95, t);
  t = k_95;
  {
    static ATerm x_95 (ATerm t)
    {
      ATerm s_42 = t;
      int t_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_42 = t;
          int y_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_95 = NULL;
              q_95 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_95;
              LocalPopChoice(y_42);
            }
          else
            {
              t = x_42;
              t = v_122(t);
              t = Cons_2_0(_id, x_95, t);
            }
          LocalPopChoice(t_42);
        }
      else
        {
          t = s_42;
          {
            ATerm t_95 = NULL,u_95 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_95 = ATgetFirst((ATermList) t);
                u_95 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_95), (ATerm) ATmakeAppl(sym_Undefined_1, t_95));
          }
        }
      return(t);
    }
    t = x_95(t);
  }
  m_95 = t;
  t = (ATerm) ATinsert(CheckATermList(m_95), (ATerm) ATmakeAppl(sym_Program_1, j_95));
  u_36 = t;
  t = SSLsetAnnotations(u_36, i_95);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm k_96 = NULL;
  k_96 = t;
  if(match_string(t, "--help"))
    {
      t = k_96;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_96;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_96;
        }
    }
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL;
  t = term_p_41;
  l_96 = t;
  t = term_x_15;
  m_96 = t;
  t = term_z_42;
  t = e_9(l_96, m_96, t);
  t = term_b_43;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_c_43;
  return(t);
}
static ATerm g_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_122 (ATerm), ATerm t)
{
  ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL,i_96 = NULL,j_96 = NULL;
  e_96 = t;
  t = term_p_40;
  f_96 = t;
  t = term_d_43;
  t = lookup_table_0_1(f_96, t);
  j_96 = t;
  t = term_q_40;
  g_96 = t;
  t = (ATerm) ATempty;
  h_96 = t;
  t = j_96;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(g_96, h_96, i_96, t);
  t = e_96;
  {
    static ATerm c_15 (ATerm t)
    {
      ATerm e_43 = t;
      int f_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_122(t);
          LocalPopChoice(f_43);
        }
      else
        {
          t = e_43;
          {
            ATerm g_43 = t;
            int h_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_15, e_15, f_15, t);
                LocalPopChoice(h_43);
              }
            else
              {
                t = g_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_15, t);
  }
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_96 = NULL;
        z_96 = t;
        {
          ATerm k_43 = t;
          int l_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_33 = NULL;
              t = z_96;
              {
                ATerm m_43 = t;
                int n_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_33 = NULL,q_33 = NULL;
                    t = term_p_16;
                    p_33 = t;
                    t = term_p_41;
                    q_33 = t;
                    t = term_q_41;
                    t = b_9(p_33, q_33, t);
                    LocalPopChoice(n_43);
                  }
                else
                  {
                    t = m_43;
                    t = fetch_1_0(g_15, t);
                  }
              }
              t = z_96;
              t = default_system_usage_0_0(t);
              t = term_c_40;
              o_33 = t;
              t = SSL_exit(o_33);
              LocalPopChoice(l_43);
            }
          else
            {
              t = k_43;
              {
                ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
                t = term_p_16;
                v_33 = t;
                t = term_e_42;
                w_33 = t;
                t = term_o_43;
                t = b_9(v_33, w_33, t);
                t = z_96;
                t = default_system_about_0_0(t);
                t = term_c_40;
                u_33 = t;
                t = SSL_exit(u_33);
              }
            }
        }
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
        {
          ATerm p_43 = t;
          int q_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL;
              static ATerm h_15 (ATerm t)
              {
                ATerm d_97 = NULL,e_97 = NULL,f_97 = NULL,w_36 = NULL;
                f_97 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_97 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_97);
                d_97 = t;
                t = e_97;
                if(((c_96 != NULL) && (c_96 != t)))
                  _fail(t);
                else
                  c_96 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_97);
                w_36 = t;
                t = SSLsetAnnotations(w_36, d_97);
                return(t);
              }
              t = fetch_1_0(h_15, t);
              t = term_a_16;
              b_97 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_96)), term_r_43);
              c_97 = t;
              t = SSL_printnl(b_97, c_97);
              t = (ATerm) ATmakeAppl(sym__2, term_a_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_96)), term_r_43));
              t = default_system_usage_0_0(t);
              t = term_k_16;
              a_97 = t;
              t = SSL_exit(a_97);
              LocalPopChoice(q_43);
            }
          else
            {
              t = p_43;
            }
        }
      }
  }
  d_96 = t;
  t = term_p_40;
  t = table_destroy_0_0(t);
  t = d_96;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_119 (ATerm), ATerm t_119 (ATerm), ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm t)
{
  ATerm k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL;
  t = parse_options_1_0(s_119, t);
  k_97 = t;
  t = term_s_43;
  t = table_create_0_0(t);
  t = term_s_43;
  l_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_43, term_t_43, k_97);
  t = lookup_table_0_1(l_97, t);
  o_97 = t;
  t = term_t_43;
  m_97 = t;
  t = o_97;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(m_97, k_97, n_97, t);
  t = k_97;
  t = u_119(t);
  {
    ATerm u_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_119, t);
        LocalPopChoice(v_43);
      }
    else
      {
        t = u_43;
        {
          ATerm w_43 = t;
          int x_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_119(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_43);
            }
          else
            {
              t = w_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = if_verbose2_1_0(u_15, t);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm p_97 = NULL,q_97 = NULL;
  t = term_y_43;
  p_97 = t;
  t = term_x_15;
  q_97 = t;
  t = term_z_43;
  t = e_9(p_97, q_97, t);
  t = term_c_44;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  t = term_d_44;
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL;
  r_97 = t;
  t = term_p_16;
  v_97 = t;
  t = term_a_41;
  w_97 = t;
  t = term_b_41;
  t = b_9(v_97, w_97, t);
  s_97 = t;
  t = term_a_16;
  t_97 = t;
  t = (ATerm) ATinsert(ATempty, s_97);
  u_97 = t;
  t = SSL_printnl(t_97, u_97);
  t = r_97;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm t)
{
  static ATerm i_15 (ATerm t)
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_119(t);
        LocalPopChoice(f_44);
      }
    else
      {
        t = e_44;
        {
          ATerm g_44 = t;
          int h_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(h_44);
            }
          else
            {
              t = g_44;
              {
                ATerm l_44 = t;
                int m_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(m_44);
                  }
                else
                  {
                    t = l_44;
                    {
                      ATerm p_44 = t;
                      int q_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_15, r_15, s_15, t);
                          LocalPopChoice(q_44);
                        }
                      else
                        {
                          t = p_44;
                          {
                            ATerm r_44 = t;
                            int s_44 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(s_44);
                              }
                            else
                              {
                                t = r_44;
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
  static ATerm m_15 (ATerm t)
  {
    ATerm x_97 = NULL,y_97 = NULL,z_97 = NULL;
    y_97 = t;
    {
      ATerm t_44 = t;
      int u_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_15 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_97 != NULL) && (x_97 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_97 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_15, t);
          LocalPopChoice(u_44);
        }
      else
        {
          t = t_44;
          t = term_v_44;
          x_97 = t;
        }
    }
    t = not_null(x_97);
    t = ReadFromFile_0_0(t);
    z_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_97, z_97);
    t = apply_strategy_1_0(b_119, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(i_15, d_119, l_15, m_15, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,y_36 = NULL;
  e_98 = t;
  if(match_cons(t, sym__2))
    {
      b_98 = ATgetArgument(t, 0);
      c_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_98);
  a_98 = t;
  t = c_98;
  t = mark_bound_unbound_vars_0_0(t);
  d_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_98, d_98);
  y_36 = t;
  t = SSLsetAnnotations(y_36, a_98);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_15, _fail, default_usage_0_0, t);
  return(t);
}
