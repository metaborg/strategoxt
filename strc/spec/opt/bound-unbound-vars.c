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
ATerm term_u_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_n_42;
ATerm term_k_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_r_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_d_38;
ATerm term_a_38;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_f_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_b_20;
ATerm term_o_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_k_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Defined_2, term_g_19, term_h_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Defined_2, term_c_34, term_d_34);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_Defined_2, term_v_35, term_h_19);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym__2, term_k_16, term_e_39);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_39);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym__2, term_j_39, term_a_16);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_c_40);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_r_40);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym__2, term_r_39, term_s_39);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym__2, term_g_41, term_a_16);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_a_16);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym__2, term_r_40, term_a_16);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym__3, term_r_39, term_s_39, (ATerm) ATempty);
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_g_41);
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym__2, term_z_42, term_a_16);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm q_131 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm r_97 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm q_97 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm p_97 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm c_100 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm r_7 (ATerm c_25, ATerm d_25, ATerm e_25, ATerm t);
static ATerm o_3 (ATerm t);
static ATerm s_7 (ATerm w_24, ATerm a_25, ATerm y_24, ATerm t);
static ATerm y_3 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_7 (ATerm q_24, ATerm u_24, ATerm s_24, ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm u_7 (ATerm o_23, ATerm p_23, ATerm q_23, ATerm s_23, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm v_7 (ATerm z_21, ATerm a_22, ATerm y_21, ATerm t);
static ATerm o_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm w_7 (ATerm x_27, ATerm w_27, ATerm t);
static ATerm x_7 (ATerm t_31, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm m_22, ATerm t);
ATerm tboundin_3_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm w_132 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm n_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm a_8 (ATerm y_111 (ATerm), ATerm r_52, ATerm q_52, ATerm t);
ATerm foldr_3_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm t);
static ATerm b_8 (ATerm b_112 (ATerm), ATerm c_112 (ATerm), ATerm v_52, ATerm u_52, ATerm t);
static ATerm c_8 (ATerm t_111 (ATerm), ATerm p_52, ATerm o_52, ATerm t);
ATerm at_end_1_0 (ATerm e_108 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_65 (ATerm l_64, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm h_8 (ATerm q_710, ATerm v_710, ATerm q_72, ATerm t);
ATerm while_not_2_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t);
ATerm for_3_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm k_69 (ATerm w_67, ATerm x_67, ATerm y_67, ATerm t);
static ATerm i_11 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm free_vars_3_0 (ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm r_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm b_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm j_8 (ATerm a_98 (ATerm), ATerm q_25, ATerm o_25, ATerm t);
static ATerm j_12 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm k_8 (ATerm z_26, ATerm a_27, ATerm t);
ATerm end_scope_1_0 (ATerm x_97 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm w_97 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm l_8 (ATerm h_27, ATerm i_27, ATerm j_27, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm o_8 (ATerm f_27, ATerm g_27, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm q_8 (ATerm f_38, ATerm g_38, ATerm t);
static ATerm r_8 (ATerm r_43, ATerm s_43, ATerm t);
static ATerm t_8 (ATerm k_106 (ATerm), ATerm w_370, ATerm x_43, ATerm t);
static ATerm s_8 (ATerm n_43, ATerm o_43, ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm c_123 (ATerm), ATerm t);
static ATerm w_82 (ATerm q_82, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_8 (ATerm t_43, ATerm t);
static ATerm v_8 (ATerm y_36, ATerm z_36, ATerm t);
static ATerm w_8 (ATerm h_38, ATerm i_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_84 (ATerm g_83, ATerm t);
static ATerm i_84 (ATerm k_83, ATerm l_83, ATerm m_83, ATerm t);
static ATerm j_84 (ATerm u_83, ATerm v_83, ATerm w_83, ATerm t);
static ATerm x_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_107 (ATerm), ATerm t);
static ATerm c_9 (ATerm n_28, ATerm o_28, ATerm t);
ATerm if_verbose2_1_0 (ATerm o_131 (ATerm), ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm f_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_9 (ATerm u_66, ATerm v_66, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm v_13 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_9 (ATerm u_26, ATerm v_26, ATerm t_26, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_8 (ATerm x_44, ATerm y_44, ATerm t);
ATerm foldr_2_0 (ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm c_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_131 (ATerm), ATerm t);
static ATerm d_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm f_14 (ATerm t);
ATerm need_help_1_0 (ATerm a_124 (ATerm), ATerm t);
static ATerm g_9 (ATerm m_31, ATerm n_31, ATerm o_31, ATerm t);
static ATerm h_9 (ATerm p_31, ATerm q_31, ATerm t);
ATerm lookup_table_0_1 (ATerm g_28, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_31, ATerm v_31, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm a_9 (ATerm r_31, ATerm s_31, ATerm t);
static ATerm b_9 (ATerm w_31, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm n_107 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_127 (ATerm), ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm g_15 (ATerm t);
ATerm parse_options_1_0 (ATerm e_127 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm t);
static ATerm m_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
ATerm iowrap_3_0 (ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm t);
static ATerm z_15 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,k_0 = NULL,n_0 = NULL,u_0 = NULL,v_0 = NULL;
  a_0 = t;
  t = term_a_16;
  t = whoami_0_0(t);
  k_0 = t;
  t = term_b_16;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_16), k_0), term_c_16);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_f_16;
  n_0 = t;
  t = SSL_exit(n_0);
  t = a_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm q_131 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm h_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL;
        t = term_j_16;
        a_1 = t;
        t = term_k_16;
        b_1 = t;
        t = term_l_16;
        t = c_9(a_1, b_1, t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_o_16);
        t = geq_0_0(t);
        t = x_0;
        t = q_131(t);
        LocalPopChoice(i_16);
      }
    else
      {
        t = h_16;
        t = x_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,s_6 = NULL;
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
    t = r_97(t);
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
    t = r_97(t);
    q_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_1, q_1, m_1);
    v_6 = t;
    t = SSLsetAnnotations(v_6, j_1);
    return(t);
  }
  static ATerm p_0 (ATerm t)
  {
    ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,w_6 = NULL;
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
    t = r_97(t);
    d_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, a_2, b_2, d_2);
    w_6 = t;
    t = SSLsetAnnotations(w_6, z_1);
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
  s_6 = t;
  t = SSLsetAnnotations(s_6, d_1);
  t = abstract_choice_2_0(o_0, p_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,l_7 = NULL;
  static ATerm q_0 (ATerm t)
  {
    ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,p_7 = NULL;
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
    t = q_97(t);
    m_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_2, l_2);
    p_7 = t;
    t = SSLsetAnnotations(p_7, j_2);
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
    t = q_97(t);
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
  l_7 = t;
  t = SSLsetAnnotations(l_7, f_2);
  t = abstract_choice_2_0(q_0, r_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,y_2 = NULL,b_3 = NULL,c_3 = NULL,e_3 = NULL,g_3 = NULL;
  e_3 = t;
  t = save_MarkVar_0_0(t);
  v_2 = t;
  t = e_3;
  t = s_97(t);
  c_3 = t;
  t = save_MarkVar_0_0(t);
  y_2 = t;
  t = term_p_16;
  t = table_destroy_0_0(t);
  t = term_p_16;
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, v_2);
  t = w_7(g_3, v_2, t);
  t = c_3;
  t = t_97(t);
  b_3 = t;
  t = y_2;
  t = isect_MarkVar_0_0(t);
  t = b_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,f_8 = NULL;
  static ATerm y_0 (ATerm t)
  {
    ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,u_3 = NULL,g_8 = NULL;
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
    t = p_97(t);
    s_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, s_3, r_3);
    g_8 = t;
    t = SSLsetAnnotations(g_8, p_3);
    return(t);
  }
  static ATerm c_1 (ATerm t)
  {
    ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,z_3 = NULL,a_4 = NULL,i_8 = NULL;
    a_4 = t;
    if(match_cons(t, sym_Choice_2))
      {
        w_3 = ATgetArgument(t, 0);
        x_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_4);
    v_3 = t;
    t = x_3;
    t = p_97(t);
    z_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, w_3, z_3);
    i_8 = t;
    t = SSLsetAnnotations(i_8, v_3);
    return(t);
  }
  n_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      l_3 = ATgetArgument(t, 0);
      m_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_3);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, l_3, m_3);
  f_8 = t;
  t = SSLsetAnnotations(f_8, k_3);
  t = abstract_choice_2_0(y_0, c_1, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,k_4 = NULL,m_4 = NULL,v_4 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL,h_5 = NULL,i_5 = NULL,k_9 = NULL,z_8 = NULL;
  c_4 = t;
  t = save_MarkVar_0_0(t);
  b_4 = t;
  t = c_4;
  if(match_cons(t, sym_Rec_2))
    {
      f_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_4);
  e_5 = t;
  t = h_5;
  t = mark_buv_0_0(t);
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, f_5, i_5);
  z_8 = t;
  t = SSLsetAnnotations(z_8, e_5);
  t = b_4;
  t = isect_MarkVar_0_0(t);
  t = c_4;
  if(match_cons(t, sym_Rec_2))
    {
      m_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_4);
  k_4 = t;
  t = v_4;
  t = mark_buv_0_0(t);
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, m_4, c_5);
  k_9 = t;
  t = SSLsetAnnotations(k_9, k_4);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm j_5 = NULL,l_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,z_5 = NULL,b_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,y_9 = NULL,u_9 = NULL,s_9 = NULL;
  l_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
      j_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_6);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, h_6, i_6, j_6);
  s_9 = t;
  t = SSLsetAnnotations(s_9, g_6);
  k_6 = t;
  t = save_MarkVar_0_0(t);
  j_5 = t;
  t = k_6;
  if(match_cons(t, sym_PrimT_3))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
      w_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_6);
  t_5 = t;
  t = w_5;
  t = map_1_0(d_3, t);
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, u_5, v_5, z_5);
  u_9 = t;
  t = SSLsetAnnotations(u_9, t_5);
  b_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
      p_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_6);
  l_5 = t;
  t = o_5;
  t = mark_buv_0_0(t);
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, n_5, r_5, p_5);
  y_9 = t;
  t = SSLsetAnnotations(y_9, l_5);
  s_5 = t;
  t = j_5;
  t = isect_MarkVar_0_0(t);
  t = s_5;
  return(t);
}
ATerm alltd_1_0 (ATerm c_100 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t)
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_100(t);
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        t = SRTS_all(n_6, t);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,v_10 = NULL;
  q_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      r_10 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
      p_10 = ATgetArgument(t, 2);
      {
        ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL,i_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,o_2 = NULL,s_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,i_3 = NULL,k_10 = NULL,j_10 = NULL,i_10 = NULL;
        t = SSLgetAnnotations(q_10);
        a_3 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, r_10, v_10, p_10);
        i_10 = t;
        t = SSLsetAnnotations(i_10, a_3);
        i_3 = t;
        t = save_MarkVar_0_0(t);
        s_0 = t;
        t = i_3;
        if(match_cons(t, sym_CallT_3))
          {
            o_2 = ATgetArgument(t, 0);
            s_2 = ATgetArgument(t, 1);
            w_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_3);
        r_1 = t;
        t = w_2;
        t = map_1_0(f_3, t);
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
      ATerm h_4 = NULL,i_4 = NULL,j_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,s_4 = NULL,m_10 = NULL,l_10 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          r_10 = ATgetArgument(t, 0);
          v_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_10);
      p_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, r_10, v_10);
      l_10 = t;
      t = SSLsetAnnotations(l_10, p_4);
      s_4 = t;
      t = save_MarkVar_0_0(t);
      h_4 = t;
      t = s_4;
      if(match_cons(t, sym_Call_2))
        {
          j_4 = ATgetArgument(t, 0);
          l_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_4);
      i_4 = t;
      t = l_4;
      t = mark_buv_0_0(t);
      n_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, j_4, n_4);
      m_10 = t;
      t = SSLsetAnnotations(m_10, i_4);
      o_4 = t;
      t = h_4;
      t = isect_MarkVar_0_0(t);
      t = o_4;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm r_7 (ATerm c_25, ATerm d_25, ATerm e_25, ATerm t)
{
  ATerm z_10 = NULL;
  static ATerm j_3 (ATerm t)
  {
    t = d_25;
    t = map_1_0(IntroduceBound_0_0, t);
    t = e_25;
    t = mark_build_vars_0_0(t);
    if(((z_10 != NULL) && (z_10 != t)))
      _fail(t);
    else
      z_10 = t;
    return(t);
  }
  t = scope_2_0(h_3, j_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, c_25, d_25, not_null(z_10));
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm s_7 (ATerm w_24, ATerm a_25, ATerm y_24, ATerm t)
{
  ATerm a_11 = NULL,c_11 = NULL,h_11 = NULL;
  static ATerm t_3 (ATerm t)
  {
    t = w_24;
    t = mark_match_vars_0_0(t);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    t = y_24;
    t = mark_buv_0_0(t);
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    t = a_25;
    t = mark_build_vars_0_0(t);
    if(((h_11 != NULL) && (h_11 != t)))
      _fail(t);
    else
      h_11 = t;
    return(t);
  }
  t = scope_2_0(o_3, t_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_11), not_null(h_11), not_null(c_11)));
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm u_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_11);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_16);
          }
        else
          {
            t = u_16;
            {
              ATerm x_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_11 = NULL,a_12 = NULL,c_12 = NULL,d_12 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_11 = ATgetArgument(t, 0);
                      a_12 = ATgetArgument(t, 1);
                      c_12 = ATgetArgument(t, 2);
                      d_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_12;
                  t = map_1_0(g_4, t);
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = x_16;
                  {
                    ATerm a_17 = t;
                    int b_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_17);
                      }
                    else
                      {
                        t = a_17;
                        t = dynrule_targs_1_0(q_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm t_12 = NULL;
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_12 = ATgetArgument(t, 0);
          {
            ATerm e_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_17);
      t = t_12;
    }
  else
    {
      t = c_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_12;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = map_1_0(r_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm y_12 = NULL;
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_12 = ATgetArgument(t, 0);
          {
            ATerm i_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_17);
      t = y_12;
    }
  else
    {
      t = f_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_12;
    }
  return(t);
}
static ATerm t_7 (ATerm q_24, ATerm u_24, ATerm s_24, ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
  static ATerm d_4 (ATerm t)
  {
    t = q_24;
    t = free_vars_3_0(e_4, f_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = q_24;
    t = mark_match_vars_0_0(t);
    if(((r_11 != NULL) && (r_11 != t)))
      _fail(t);
    else
      r_11 = t;
    t = s_24;
    t = mark_buv_0_0(t);
    if(((s_11 != NULL) && (s_11 != t)))
      _fail(t);
    else
      s_11 = t;
    t = u_24;
    t = mark_build_vars_0_0(t);
    if(((t_11 != NULL) && (t_11 != t)))
      _fail(t);
    else
      t_11 = t;
    return(t);
  }
  t = scope_2_0(y_3, d_4, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_11), not_null(t_11), not_null(s_11)));
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm l_15 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_15);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm p_17 = t;
        int q_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_17);
          }
        else
          {
            t = p_17;
            {
              ATerm r_17 = t;
              int s_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_15 = ATgetArgument(t, 0);
                      q_15 = ATgetArgument(t, 1);
                      r_15 = ATgetArgument(t, 2);
                      s_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_15;
                  t = map_1_0(w_4, t);
                  LocalPopChoice(s_17);
                }
              else
                {
                  t = r_17;
                  {
                    ATerm t_17 = t;
                    int v_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(v_17);
                      }
                    else
                      {
                        t = t_17;
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
static ATerm w_4 (ATerm t)
{
  ATerm e_16 = NULL;
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_16 = ATgetArgument(t, 0);
          {
            ATerm c_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_17);
      t = e_16;
    }
  else
    {
      t = y_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_16;
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
  ATerm m_16 = NULL;
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_16 = ATgetArgument(t, 0);
          {
            ATerm g_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_18);
      t = m_16;
    }
  else
    {
      t = e_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_16;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm a_18 = NULL;
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_18 = ATgetArgument(t, 0);
          {
            ATerm l_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_18);
      t = a_18;
    }
  else
    {
      t = i_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_18;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm h_18 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_18);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
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
                  ATerm k_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_18 = ATgetArgument(t, 0);
                      p_18 = ATgetArgument(t, 1);
                      q_18 = ATgetArgument(t, 2);
                      r_18 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_18;
                  t = map_1_0(k_5, t);
                  LocalPopChoice(v_18);
                }
              else
                {
                  t = u_18;
                  {
                    ATerm x_18 = t;
                    int y_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_18);
                      }
                    else
                      {
                        t = x_18;
                        t = dynrule_targs_1_0(q_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm a_19 = NULL;
  ATerm z_18 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_19 = ATgetArgument(t, 0);
          {
            ATerm c_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_19);
      t = a_19;
    }
  else
    {
      t = z_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_19;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = map_1_0(x_5, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm m_19 = NULL;
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_19 = ATgetArgument(t, 0);
          {
            ATerm f_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_19);
      t = m_19;
    }
  else
    {
      t = d_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_19;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm u_13 = NULL,a_14 = NULL,b_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      h_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
      j_14 = ATgetArgument(t, 2);
      {
        ATerm z_14 = NULL,f_15 = NULL,i_15 = NULL,k_15 = NULL;
        t = j_14;
        if(match_cons(t, sym_Rule_3))
          {
            u_13 = ATgetArgument(t, 0);
            a_14 = ATgetArgument(t, 1);
            b_14 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = j_14;
        t = free_vars_3_0(t_4, u_4, tboundin_3_0, t);
        z_14 = t;
        {
          static ATerm a_5 (ATerm t)
          {
            t = z_14;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = u_13;
            t = mark_match_vars_0_0(t);
            if(((f_15 != NULL) && (f_15 != t)))
              _fail(t);
            else
              f_15 = t;
            t = b_14;
            t = mark_buv_0_0(t);
            if(((i_15 != NULL) && (i_15 != t)))
              _fail(t);
            else
              i_15 = t;
            t = a_14;
            t = mark_build_vars_0_0(t);
            if(((k_15 != NULL) && (k_15 != t)))
              _fail(t);
            else
              k_15 = t;
            return(t);
          }
          t = scope_2_0(z_4, a_5, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, h_14, i_14, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_15), not_null(k_15), not_null(i_15)));
      }
    }
  else
    {
      ATerm j_17 = NULL,l_17 = NULL,o_17 = NULL,u_17 = NULL,w_17 = NULL,x_17 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          h_14 = ATgetArgument(t, 0);
          i_14 = ATgetArgument(t, 1);
          j_14 = ATgetArgument(t, 2);
          k_14 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = k_14;
      if(match_cons(t, sym_Rule_3))
        {
          l_14 = ATgetArgument(t, 0);
          m_14 = ATgetArgument(t, 1);
          n_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_14;
      t = map_1_0(b_5, t);
      j_17 = t;
      t = k_14;
      t = free_vars_3_0(d_5, g_5, tboundin_3_0, t);
      x_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_17, j_17);
      t = diff_0_0(t);
      l_17 = t;
      {
        static ATerm a_6 (ATerm t)
        {
          t = j_17;
          t = map_1_0(IntroduceBound_0_0, t);
          t = l_17;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = l_14;
          t = mark_match_vars_0_0(t);
          if(((o_17 != NULL) && (o_17 != t)))
            _fail(t);
          else
            o_17 = t;
          t = n_14;
          t = mark_buv_0_0(t);
          if(((u_17 != NULL) && (u_17 != t)))
            _fail(t);
          else
            u_17 = t;
          t = m_14;
          t = mark_build_vars_0_0(t);
          if(((w_17 != NULL) && (w_17 != t)))
            _fail(t);
          else
            w_17 = t;
          return(t);
        }
        t = scope_2_0(y_5, a_6, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, h_14, i_14, j_14, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_17), not_null(w_17), not_null(u_17)));
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm p_19 = NULL,s_19 = NULL,t_19 = NULL;
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_19);
  s_19 = t;
  t = term_i_19;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_19), term_i_19);
  t = j_8(c_6, s_19, t_19, t);
  t = p_19;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm g_20 = NULL;
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_20 = ATgetArgument(t, 0);
          {
            ATerm n_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_19);
      t = g_20;
    }
  else
    {
      t = k_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_20;
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm u_7 (ATerm o_23, ATerm p_23, ATerm q_23, ATerm s_23, ATerm t)
{
  ATerm v_19 = NULL,z_19 = NULL;
  t = q_23;
  t = map_1_0(d_6, t);
  v_19 = t;
  {
    static ATerm m_6 (ATerm t)
    {
      t = v_19;
      t = map_1_0(IntroduceBound_0_0, t);
      t = s_23;
      t = mark_buv_0_0(t);
      if(((z_19 != NULL) && (z_19 != t)))
        _fail(t);
      else
        z_19 = t;
      return(t);
    }
    t = scope_2_0(e_6, m_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, o_23, p_23, q_23, not_null(z_19));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,p_21 = NULL,v_21 = NULL;
  i_21 = t;
  if(match_cons(t, sym__2))
    {
      j_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_21;
  if(match_cons(t, sym_Undefined_0))
    {
      t = j_21;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_o_19;
        }
      else
        {
          t = term_o_19;
        }
    }
  else
    {
      ATerm q_19 = t;
      int r_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm w_19 = ATgetArgument(t, 0);
              v_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(r_19);
          t = j_21;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_o_19;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  k_21 = ATgetArgument(t, 0);
                  l_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm x_19 = t;
                int y_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, l_21, v_21);
                    {
                      ATerm a_20 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm m_5 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              m_5 = ATgetArgument(t, 0);
                              if((m_5 != ATgetArgument(t, 1)))
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
                          t = a_20;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, k_21, term_b_20);
                    LocalPopChoice(y_19);
                  }
                else
                  {
                    t = x_19;
                    t = v_21;
                    if((l_21 != t))
                      {
                        _fail(t);
                      }
                    t = j_21;
                  }
              }
            }
        }
      else
        {
          t = q_19;
          t = j_21;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_o_19;
        }
    }
  return(t);
}
static ATerm v_7 (ATerm z_21, ATerm a_22, ATerm y_21, ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,s_22 = NULL;
  t = term_p_16;
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, z_21);
  t = c_9(s_22, z_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_22 = ATgetFirst((ATermList) t);
      {
        ATerm c_20 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_22, h_22);
  t = CompareEntries_0_0(t);
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_21, (ATerm) ATinsert(CheckATermList(y_21), i_22));
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,f_26 = NULL,g_26 = NULL;
  g_26 = t;
  if(match_cons(t, sym__2))
    {
      y_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
      t = z_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_26 = ATgetFirst((ATermList) t);
          f_26 = (ATerm) ATgetNext((ATermList) t);
          t = a_26;
          {
            ATerm d_20 = t;
            int e_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm f_20 = ATgetArgument(t, 0);
                    ATerm h_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(e_20);
                t = y_25;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = g_26;
                  }
                else
                  {
                    ATerm i_20 = t;
                    int k_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = g_26;
                        t = v_7(y_25, a_26, f_26, t);
                        LocalPopChoice(k_20);
                      }
                    else
                      {
                        t = i_20;
                        t = g_26;
                      }
                  }
              }
            else
              {
                t = d_20;
                t = y_25;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = g_26;
                  }
                else
                  {
                    t = g_26;
                  }
              }
          }
        }
      else
        {
          t = y_25;
          if(match_cons(t, sym_Scopes_0))
            {
              t = g_26;
            }
          else
            {
              t = g_26;
            }
        }
    }
  else
    {
      t = g_26;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm u_25 = NULL,x_25 = NULL;
  t = map_1_0(o_6, t);
  u_25 = t;
  t = term_p_16;
  t = table_destroy_0_0(t);
  t = term_p_16;
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, u_25);
  t = w_7(x_25, u_25, t);
  t = u_25;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,q_28 = NULL;
  q_28 = t;
  {
    ATerm l_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm o_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_20);
        t = q_28;
      }
    else
      {
        t = l_20;
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm r_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(q_20);
              t = q_28;
            }
          else
            {
              t = p_20;
              {
                ATerm s_20 = t;
                int t_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm u_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(t_20);
                    t = q_28;
                  }
                else
                  {
                    t = s_20;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm x_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = q_28;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  k_28 = t;
  t = q_28;
  t = SRTS_one(mark_buv_0_0, t);
  l_28 = t;
  t = k_28;
  t = isect_MarkVar_0_0(t);
  t = l_28;
  return(t);
}
static ATerm w_7 (ATerm x_27, ATerm w_27, ATerm t)
{
  static ATerm r_6 (ATerm t)
  {
    ATerm x_28 = NULL,y_28 = NULL,e_29 = NULL;
    if(match_cons(t, sym__2))
      {
        x_28 = ATgetArgument(t, 0);
        y_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_27, x_28, y_28);
    t = lookup_table_0_1(x_27, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        e_29 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = g_9(x_28, y_28, e_29, t);
    t = (ATerm) ATmakeAppl(sym__3, x_27, x_28, y_28);
    return(t);
  }
  t = w_27;
  t = map_1_0(r_6, t);
  return(t);
}
static ATerm x_7 (ATerm t_31, ATerm t)
{
  t = SSL_hashtable_keys(t_31);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL;
  static ATerm t_6 (ATerm t)
  {
    ATerm k_29 = NULL,l_29 = NULL;
    k_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), k_29);
    t = c_9(not_null(i_29), k_29, t);
    l_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_29, l_29);
    return(t);
  }
  if(((i_29 != NULL) && (i_29 != t)))
    _fail(t);
  else
    i_29 = t;
  t = lookup_table_0_1(i_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(j_29, t);
  t = map_1_0(t_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_p_16;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm m_22, ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm x_6 (ATerm t)
    {
      static ATerm d_31 (ATerm y_29, ATerm t)
      {
        ATerm g_30 = NULL,k_30 = NULL,m_30 = NULL,t_30 = NULL;
        t = y_29;
        if(match_cons(t, sym__2))
          {
            ATerm y_20 = ATgetArgument(t, 0);
            g_30 = y_20;
            if(match_cons(y_20, sym_Var_1))
              {
                k_30 = ATgetArgument(y_20, 0);
              }
            else
              _fail(t);
            {
              ATerm g_21 = ATgetArgument(t, 1);
              if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
                {
                  ATerm h_21 = ATgetFirst((ATermList) g_21);
                  if(match_cons(h_21, sym_Defined_2))
                    {
                      m_30 = ATgetArgument(h_21, 0);
                      {
                        ATerm m_21 = ATgetArgument(h_21, 1);
                        if((ATgetSymbol((ATermAppl) m_21) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t_30 = (ATerm) ATgetNext((ATermList) g_21);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_22;
        {
          static ATerm y_6 (ATerm t)
          {
            if((k_30 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(y_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, g_30, (ATerm) ATinsert(CheckATermList(t_30), (ATerm) ATmakeAppl(sym_Defined_2, m_30, term_b_20)));
        return(t);
      }
      ATerm v_30 = NULL,x_30 = NULL;
      x_30 = t;
      {
        ATerm n_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                v_30 = ATgetArgument(t, 0);
                {
                  ATerm w_21 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(q_21);
            t = v_30;
            if(match_cons(t, sym_Scopes_0))
              {
                t = x_30;
              }
            else
              {
                ATerm d_22 = t;
                int f_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = d_31(x_30, t);
                    LocalPopChoice(f_22);
                  }
                else
                  {
                    t = d_22;
                    t = x_30;
                  }
              }
          }
        else
          {
            t = n_21;
            {
              ATerm r_22 = t;
              int t_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_31(x_30, t);
                  LocalPopChoice(t_22);
                }
              else
                {
                  t = r_22;
                  t = x_30;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(x_6, t);
  }
  q_29 = t;
  t = term_p_16;
  t = table_destroy_0_0(t);
  t = term_p_16;
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, q_29);
  t = w_7(r_29, q_29, t);
  t = q_29;
  return(t);
}
ATerm tboundin_3_0 (ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm t)
{
  ATerm r_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,y_42 = NULL;
  w_42 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_42 = ATgetArgument(t, 0);
      v_42 = ATgetArgument(t, 1);
      {
        ATerm f_6 = NULL,p_6 = NULL,q_6 = NULL,v_20 = NULL;
        t = SSLgetAnnotations(w_42);
        f_6 = t;
        t = y_42;
        t = p_132(t);
        p_6 = t;
        t = v_42;
        t = n_132(t);
        q_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_6, q_6);
        v_20 = t;
        t = SSLsetAnnotations(v_20, f_6);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          y_42 = ATgetArgument(t, 0);
          {
            ATerm c_7 = NULL,e_7 = NULL,h_7 = NULL,i_7 = NULL,k_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,e_9 = NULL,b_21 = NULL,a_21 = NULL;
            t = SSLgetAnnotations(w_42);
            c_7 = t;
            t = y_42;
            if(match_cons(t, sym_Rule_3))
              {
                h_7 = ATgetArgument(t, 0);
                i_7 = ATgetArgument(t, 1);
                k_7 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(y_42);
            e_7 = t;
            t = h_7;
            t = n_132(t);
            m_7 = t;
            t = i_7;
            t = n_132(t);
            n_7 = t;
            t = k_7;
            t = n_132(t);
            o_7 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, m_7, n_7, o_7);
            a_21 = t;
            t = SSLsetAnnotations(a_21, e_7);
            e_9 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, e_9);
            b_21 = t;
            t = SSLsetAnnotations(b_21, c_7);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              y_42 = ATgetArgument(t, 0);
              v_42 = ATgetArgument(t, 1);
              r_42 = ATgetArgument(t, 2);
              {
                ATerm t_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_21 = NULL;
                t = SSLgetAnnotations(w_42);
                t_9 = t;
                t = y_42;
                t = p_132(t);
                z_9 = t;
                t = v_42;
                t = p_132(t);
                a_10 = t;
                t = r_42;
                t = p_132(t);
                b_10 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, z_9, a_10, b_10);
                c_21 = t;
                t = SSLsetAnnotations(c_21, t_9);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  y_42 = ATgetArgument(t, 0);
                  v_42 = ATgetArgument(t, 1);
                  r_42 = ATgetArgument(t, 2);
                  u_42 = ATgetArgument(t, 3);
                  {
                    ATerm f_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,d_21 = NULL;
                    t = SSLgetAnnotations(w_42);
                    f_11 = t;
                    t = y_42;
                    t = p_132(t);
                    l_11 = t;
                    t = v_42;
                    t = p_132(t);
                    m_11 = t;
                    t = r_42;
                    t = p_132(t);
                    n_11 = t;
                    t = u_42;
                    t = n_132(t);
                    o_11 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_11, m_11, n_11, o_11);
                    d_21 = t;
                    t = SSLsetAnnotations(d_21, f_11);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_42 = ATgetArgument(t, 0);
                      v_42 = ATgetArgument(t, 1);
                      r_42 = ATgetArgument(t, 2);
                      u_42 = ATgetArgument(t, 3);
                      {
                        ATerm m_12 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,e_21 = NULL;
                        t = SSLgetAnnotations(w_42);
                        m_12 = t;
                        t = y_42;
                        t = p_132(t);
                        b_13 = t;
                        t = v_42;
                        t = p_132(t);
                        c_13 = t;
                        t = r_42;
                        t = p_132(t);
                        d_13 = t;
                        t = u_42;
                        t = n_132(t);
                        e_13 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_13, c_13, d_13, e_13);
                        e_21 = t;
                        t = SSLsetAnnotations(e_21, m_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          y_42 = ATgetArgument(t, 0);
                          v_42 = ATgetArgument(t, 1);
                          {
                            ATerm p_13 = NULL,s_13 = NULL,t_13 = NULL,f_21 = NULL;
                            t = SSLgetAnnotations(w_42);
                            p_13 = t;
                            t = y_42;
                            t = p_132(t);
                            s_13 = t;
                            t = v_42;
                            t = n_132(t);
                            t_13 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, s_13, t_13);
                            f_21 = t;
                            t = SSLsetAnnotations(f_21, p_13);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              y_42 = ATgetArgument(t, 0);
                              v_42 = ATgetArgument(t, 1);
                              {
                                ATerm e_14 = NULL,r_14 = NULL,s_14 = NULL,s_21 = NULL;
                                t = SSLgetAnnotations(w_42);
                                e_14 = t;
                                t = y_42;
                                t = p_132(t);
                                r_14 = t;
                                t = v_42;
                                t = n_132(t);
                                s_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, r_14, s_14);
                                s_21 = t;
                                t = SSLsetAnnotations(s_21, e_14);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  y_42 = ATgetArgument(t, 0);
                                  v_42 = ATgetArgument(t, 1);
                                  {
                                    ATerm d_15 = NULL,o_15 = NULL,p_15 = NULL,t_21 = NULL;
                                    t = SSLgetAnnotations(w_42);
                                    d_15 = t;
                                    t = y_42;
                                    t = p_132(t);
                                    o_15 = t;
                                    t = v_42;
                                    t = n_132(t);
                                    p_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, o_15, p_15);
                                    t_21 = t;
                                    t = SSLsetAnnotations(t_21, d_15);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      y_42 = ATgetArgument(t, 0);
                                      {
                                        ATerm g_16 = NULL,n_16 = NULL,u_21 = NULL;
                                        t = SSLgetAnnotations(w_42);
                                        g_16 = t;
                                        t = y_42;
                                        t = n_132(t);
                                        n_16 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, n_16);
                                        u_21 = t;
                                        t = SSLsetAnnotations(u_21, g_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          y_42 = ATgetArgument(t, 0);
                                          {
                                            ATerm w_16 = NULL,y_16 = NULL,e_22 = NULL;
                                            t = SSLgetAnnotations(w_42);
                                            w_16 = t;
                                            t = y_42;
                                            t = n_132(t);
                                            y_16 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, y_16);
                                            e_22 = t;
                                            t = SSLsetAnnotations(e_22, w_16);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              y_42 = ATgetArgument(t, 0);
                                              {
                                                ATerm h_17 = NULL,k_17 = NULL,k_22 = NULL;
                                                t = SSLgetAnnotations(w_42);
                                                h_17 = t;
                                                t = y_42;
                                                t = n_132(t);
                                                k_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, k_17);
                                                k_22 = t;
                                                t = SSLsetAnnotations(k_22, h_17);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  y_42 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm b_18 = NULL,d_18 = NULL,l_22 = NULL;
                                                    t = SSLgetAnnotations(w_42);
                                                    b_18 = t;
                                                    t = y_42;
                                                    t = n_132(t);
                                                    d_18 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, d_18);
                                                    l_22 = t;
                                                    t = SSLsetAnnotations(l_22, b_18);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm o_18 = NULL,w_18 = NULL,n_22 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      y_42 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(w_42);
                                                  o_18 = t;
                                                  t = y_42;
                                                  t = n_132(t);
                                                  w_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, w_18);
                                                  n_22 = t;
                                                  t = SSLsetAnnotations(n_22, o_18);
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
ATerm dynrule_targs_1_0 (ATerm w_132 (ATerm), ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,r_44 = NULL;
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          k_44 = ATgetArgument(t, 0);
          {
            ATerm w_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_22);
      t = k_44;
      if(match_cons(t, sym_DynRuleId_1))
        {
          l_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_44;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm x_22 = ATgetArgument(t, 0);
          ATerm y_22 = ATgetArgument(t, 1);
          r_44 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_44;
    }
  else
    {
      t = u_22;
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                k_44 = ATgetArgument(t, 0);
                {
                  ATerm b_23 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_23);
            t = k_44;
            if(match_cons(t, sym_DynRuleId_1))
              {
                l_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_44;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm c_23 = ATgetArgument(t, 0);
                ATerm d_23 = ATgetArgument(t, 1);
                r_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = r_44;
          }
        else
          {
            t = z_22;
            if(match_cons(t, sym_AddDynRule_2))
              {
                k_44 = ATgetArgument(t, 0);
                {
                  ATerm e_23 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = k_44;
            if(match_cons(t, sym_DynRuleId_1))
              {
                l_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_44;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm i_23 = ATgetArgument(t, 0);
                ATerm j_23 = ATgetArgument(t, 1);
                r_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = r_44;
          }
      }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm s_46 = NULL;
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_46 = ATgetArgument(t, 0);
          {
            ATerm n_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_23);
      t = s_46;
    }
  else
    {
      t = k_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_46;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm z_46 = NULL;
  ATerm r_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_46 = ATgetArgument(t, 0);
          {
            ATerm u_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_23);
      t = z_46;
    }
  else
    {
      t = r_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_46;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm y_45 = NULL;
  ATerm v_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm a_24 = ATgetArgument(t, 0);
          ATerm b_24 = ATgetArgument(t, 1);
          y_45 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(z_23);
      t = y_45;
      t = map_1_0(z_6, t);
    }
  else
    {
      t = v_23;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm c_24 = ATgetArgument(t, 0);
          ATerm e_24 = ATgetArgument(t, 1);
          y_45 = ATgetArgument(t, 2);
          {
            ATerm f_24 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_45;
      t = map_1_0(a_7, t);
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm f_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_49);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm i_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_24);
          }
        else
          {
            t = i_24;
            {
              ATerm n_24 = t;
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_49 = NULL,i_49 = NULL,l_49 = NULL,m_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_49 = ATgetArgument(t, 0);
                      i_49 = ATgetArgument(t, 1);
                      l_49 = ATgetArgument(t, 2);
                      m_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_49;
                  t = map_1_0(f_7, t);
                  LocalPopChoice(o_24);
                }
              else
                {
                  t = n_24;
                  {
                    ATerm p_24 = t;
                    int t_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_24);
                      }
                    else
                      {
                        t = p_24;
                        t = dynrule_targs_1_0(g_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm y_49 = NULL;
  ATerm v_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_49 = ATgetArgument(t, 0);
          {
            ATerm b_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_24);
      t = y_49;
    }
  else
    {
      t = v_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_49;
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = map_1_0(j_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm d_50 = NULL;
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_50 = ATgetArgument(t, 0);
          {
            ATerm i_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_25);
      t = d_50;
    }
  else
    {
      t = g_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_50;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm m_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_50);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
        ATerm m_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_25);
          }
        else
          {
            t = m_25;
            {
              ATerm r_25 = t;
              int s_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_50 = NULL,w_50 = NULL,z_50 = NULL,a_51 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_50 = ATgetArgument(t, 0);
                      w_50 = ATgetArgument(t, 1);
                      z_50 = ATgetArgument(t, 2);
                      a_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_50;
                  t = map_1_0(e_8, t);
                  LocalPopChoice(s_25);
                }
              else
                {
                  t = r_25;
                  {
                    ATerm t_25 = t;
                    int v_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(v_25);
                      }
                    else
                      {
                        t = t_25;
                        t = dynrule_targs_1_0(m_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm l_51 = NULL;
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_51 = ATgetArgument(t, 0);
          {
            ATerm d_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_26);
      t = l_51;
    }
  else
    {
      t = b_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_51;
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = map_1_0(n_8, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm u_51 = NULL;
  ATerm e_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_51 = ATgetArgument(t, 0);
          {
            ATerm l_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_26);
      t = u_51;
    }
  else
    {
      t = e_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_51;
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm y_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_51);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            {
              ATerm w_26 = t;
              int x_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_52 = ATgetArgument(t, 0);
                      l_52 = ATgetArgument(t, 1);
                      m_52 = ATgetArgument(t, 2);
                      n_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_52;
                  t = map_1_0(j_9, t);
                  LocalPopChoice(x_26);
                }
              else
                {
                  t = w_26;
                  {
                    ATerm y_26 = t;
                    int b_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_27);
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
static ATerm j_9 (ATerm t)
{
  ATerm j_53 = NULL;
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_53 = ATgetArgument(t, 0);
          {
            ATerm e_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_27);
      t = j_53;
    }
  else
    {
      t = c_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_53;
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
  ATerm q_53 = NULL;
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_53 = ATgetArgument(t, 0);
          {
            ATerm n_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_27);
      t = q_53;
    }
  else
    {
      t = l_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_53;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm x_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_53);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      {
        ATerm q_27 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_28);
          }
        else
          {
            t = q_27;
            {
              ATerm c_28 = t;
              int d_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_53 = NULL,g_54 = NULL,h_54 = NULL,j_54 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_53 = ATgetArgument(t, 0);
                      g_54 = ATgetArgument(t, 1);
                      h_54 = ATgetArgument(t, 2);
                      j_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_54;
                  t = map_1_0(p_9, t);
                  LocalPopChoice(d_28);
                }
              else
                {
                  t = c_28;
                  {
                    ATerm e_28 = t;
                    int f_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_28);
                      }
                    else
                      {
                        t = e_28;
                        t = dynrule_targs_1_0(q_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm u_54 = NULL;
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_54 = ATgetArgument(t, 0);
          {
            ATerm j_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_28);
      t = u_54;
    }
  else
    {
      t = h_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_54;
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = map_1_0(r_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm b_55 = NULL;
  ATerm m_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_55 = ATgetArgument(t, 0);
          {
            ATerm r_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_28);
      t = b_55;
    }
  else
    {
      t = m_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_55;
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm h_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_55);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm s_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_28);
    }
  else
    {
      t = s_28;
      {
        ATerm w_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_28);
          }
        else
          {
            t = w_28;
            {
              ATerm a_29 = t;
              int c_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_55 = ATgetArgument(t, 0);
                      n_55 = ATgetArgument(t, 1);
                      o_55 = ATgetArgument(t, 2);
                      p_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_55;
                  t = map_1_0(x_9, t);
                  LocalPopChoice(c_29);
                }
              else
                {
                  t = a_29;
                  {
                    ATerm d_29 = t;
                    int g_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(g_29);
                      }
                    else
                      {
                        t = d_29;
                        t = dynrule_targs_1_0(c_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm i_56 = NULL;
  ATerm h_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_56 = ATgetArgument(t, 0);
          {
            ATerm n_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_29);
      t = i_56;
    }
  else
    {
      t = h_29;
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
static ATerm c_10 (ATerm t)
{
  t = map_1_0(d_10, t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm u_56 = NULL;
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_56 = ATgetArgument(t, 0);
          {
            ATerm s_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_29);
      t = u_56;
    }
  else
    {
      t = o_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_56;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm d_49 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      d_49 = ATgetArgument(t, 0);
      t = d_49;
      t = free_vars_3_0(b_7, d_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          d_49 = ATgetArgument(t, 0);
          t = d_49;
          t = free_vars_3_0(z_7, d_8, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              d_49 = ATgetArgument(t, 0);
              t = d_49;
              t = free_vars_3_0(p_8, i_9, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  d_49 = ATgetArgument(t, 0);
                  t = d_49;
                  t = free_vars_3_0(n_9, o_9, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      d_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = d_49;
                  t = free_vars_3_0(v_9, w_9, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm z_57 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_57);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm t_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_29);
    }
  else
    {
      t = t_29;
      {
        ATerm w_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_29);
          }
        else
          {
            t = w_29;
            {
              ATerm a_30 = t;
              int b_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_58 = NULL,g_58 = NULL,j_58 = NULL,k_58 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_58 = ATgetArgument(t, 0);
                      g_58 = ATgetArgument(t, 1);
                      j_58 = ATgetArgument(t, 2);
                      k_58 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_58;
                  t = map_1_0(g_10, t);
                  LocalPopChoice(b_30);
                }
              else
                {
                  t = a_30;
                  {
                    ATerm c_30 = t;
                    int f_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_30);
                      }
                    else
                      {
                        t = c_30;
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
static ATerm g_10 (ATerm t)
{
  ATerm z_58 = NULL;
  ATerm h_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_58 = ATgetArgument(t, 0);
          {
            ATerm n_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_30);
      t = z_58;
    }
  else
    {
      t = h_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_58;
    }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = map_1_0(n_10, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm g_59 = NULL;
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_59 = ATgetArgument(t, 0);
          {
            ATerm q_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_30);
      t = g_59;
    }
  else
    {
      t = o_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_59;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm h_57 = NULL,u_57 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_57 = ATgetArgument(t, 0);
      t = u_57;
      if(match_cons(t, sym_Rule_3))
        {
          h_57 = ATgetArgument(t, 0);
          {
            ATerm r_30 = ATgetArgument(t, 1);
          }
          {
            ATerm s_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_57;
      t = free_vars_3_0(e_10, f_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_57 = ATgetArgument(t, 0);
          {
            ATerm u_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_57;
    }
  return(t);
}
static ATerm a_8 (ATerm y_111 (ATerm), ATerm r_52, ATerm q_52, ATerm t)
{
  static ATerm j_60 (ATerm t)
  {
    ATerm a_60 = NULL,c_60 = NULL,d_60 = NULL;
    a_60 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_52;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_60 = ATgetFirst((ATermList) t);
            d_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_30 = t;
          int y_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_60;
              {
                static ATerm o_10 (ATerm t)
                {
                  t = q_52;
                  return(t);
                }
                t = b_8(y_111, o_10, c_60, d_60, t);
              }
              t = j_60(t);
              LocalPopChoice(y_30);
            }
          else
            {
              t = w_30;
              {
                ATerm j_19 = NULL,u_19 = NULL,x_32 = NULL;
                t = SSLgetAnnotations(a_60);
                j_19 = t;
                t = d_60;
                t = j_60(t);
                u_19 = t;
                t = (ATerm) ATinsert(CheckATermList(u_19), c_60);
                x_32 = t;
                t = SSLsetAnnotations(x_32, j_19);
              }
            }
        }
      }
    return(t);
  }
  t = r_52;
  t = j_60(t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm f_115 (ATerm), ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL;
  t_60 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_60;
      t = d_115(t);
    }
  else
    {
      ATerm b_61 = NULL,g_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_60 = ATgetFirst((ATermList) t);
          v_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_60;
      t = f_115(t);
      b_61 = t;
      t = v_60;
      t = foldr_3_0(d_115, e_115, f_115, t);
      g_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_61, g_61);
      t = e_115(t);
    }
  return(t);
}
static ATerm b_8 (ATerm b_112 (ATerm), ATerm c_112 (ATerm), ATerm v_52, ATerm u_52, ATerm t)
{
  t = c_112(t);
  {
    static ATerm s_10 (ATerm t)
    {
      ATerm j_61 = NULL;
      j_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_52, j_61);
      t = b_112(t);
      return(t);
    }
    t = fetch_1_0(s_10, t);
  }
  t = u_52;
  return(t);
}
static ATerm c_8 (ATerm t_111 (ATerm), ATerm p_52, ATerm o_52, ATerm t)
{
  static ATerm p_62 (ATerm t)
  {
    ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
    c_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_62;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_62 = ATgetFirst((ATermList) t);
            e_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_62;
              {
                static ATerm t_10 (ATerm t)
                {
                  t = o_52;
                  return(t);
                }
                t = b_8(t_111, t_10, d_62, e_62, t);
              }
              t = p_62(t);
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              {
                ATerm j_20 = NULL,m_20 = NULL,e_33 = NULL;
                t = SSLgetAnnotations(c_62);
                j_20 = t;
                t = e_62;
                t = p_62(t);
                m_20 = t;
                t = (ATerm) ATinsert(CheckATermList(m_20), d_62);
                e_33 = t;
                t = SSLsetAnnotations(e_33, j_20);
              }
            }
        }
      }
    return(t);
  }
  t = p_52;
  t = p_62(t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_108 (ATerm), ATerm t)
{
  static ATerm h_64 (ATerm t)
  {
    ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL;
    g_64 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_64 = ATgetFirst((ATermList) t);
        f_64 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_20 = NULL,z_20 = NULL,g_33 = NULL;
          t = SSLgetAnnotations(g_64);
          w_20 = t;
          t = f_64;
          t = h_64(t);
          z_20 = t;
          t = (ATerm) ATinsert(CheckATermList(z_20), e_64);
          g_33 = t;
          t = SSLsetAnnotations(g_33, w_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_64;
        t = e_108(t);
      }
    return(t);
  }
  t = h_64(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL;
  w_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_62;
    }
  else
    {
      static ATerm u_10 (ATerm t)
      {
        t = not_null(y_62);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_62 = ATgetFirst((ATermList) t);
          if(((y_62 != NULL) && (y_62 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_62;
      t = at_end_1_0(u_10, t);
    }
  return(t);
}
static ATerm c_65 (ATerm l_64, ATerm t)
{
  ATerm p_64 = NULL;
  t = SSL_explode_term(l_64);
  if(match_cons(t, sym__2))
    {
      ATerm b_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_64;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_64 = NULL,x_64 = NULL,z_64 = NULL;
  z_64 = t;
  if(match_cons(t, sym__2))
    {
      s_64 = ATgetArgument(t, 0);
      x_64 = ATgetArgument(t, 1);
      {
        ATerm c_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_10 (ATerm t)
            {
              t = x_64;
              return(t);
            }
            t = s_64;
            t = at_end_1_0(w_10, t);
            LocalPopChoice(e_31);
          }
        else
          {
            t = c_31;
            t = c_65(z_64, t);
          }
      }
    }
  else
    {
      t = c_65(z_64, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm t)
{
  static ATerm t_65 (ATerm t)
  {
    ATerm f_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_109(t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = f_31;
        {
          ATerm d_65 = NULL,i_65 = NULL,k_65 = NULL,o_65 = NULL,r_65 = NULL,s_65 = NULL,i_33 = NULL;
          t = s_109(t);
          s_65 = t;
          if(match_cons(t, sym__2))
            {
              i_65 = ATgetArgument(t, 0);
              k_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_65);
          d_65 = t;
          t = i_65;
          t = u_109(t);
          o_65 = t;
          t = k_65;
          t = t_65(t);
          r_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_65, r_65);
          i_33 = t;
          t = SSLsetAnnotations(i_33, d_65);
          t = t_109(t);
        }
      }
    return(t);
  }
  t = t_65(t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_31 = ATgetArgument(t, 0);
      if(((ATgetType(i_31) != AT_LIST) || !(ATisEmpty(i_31))))
        _fail(t);
      {
        ATerm j_31 = ATgetArgument(t, 1);
        if(((ATgetType(j_31) != AT_LIST) || !(ATisEmpty(j_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm d_66 = NULL,e_66 = NULL,f_66 = NULL,q_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      if(((ATgetType(k_31) == AT_LIST) && !(ATisEmpty(k_31))))
        {
          d_66 = ATgetFirst((ATermList) k_31);
          e_66 = (ATerm) ATgetNext((ATermList) k_31);
        }
      else
        _fail(t);
      {
        ATerm l_31 = ATgetArgument(t, 1);
        if(((ATgetType(l_31) == AT_LIST) && !(ATisEmpty(l_31))))
          {
            f_66 = ATgetFirst((ATermList) l_31);
            q_66 = (ATerm) ATgetNext((ATermList) l_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_66, f_66), (ATerm) ATmakeAppl(sym__2, e_66, q_66));
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL;
  if(match_cons(t, sym__2))
    {
      r_66 = ATgetArgument(t, 0);
      s_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_66), r_66);
  return(t);
}
static ATerm h_8 (ATerm q_710, ATerm v_710, ATerm q_72, ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
  t = SSL_explode_term(v_710);
  if(match_cons(t, sym__2))
    {
      v_65 = ATgetArgument(t, 0);
      x_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_710);
  if(match_cons(t, sym__2))
    {
      if((v_65 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_65, x_65);
  t = genzip_4_0(x_10, y_10, b_11, _id, t);
  y_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_65, q_72);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t)
{
  static ATerm w_66 (ATerm t)
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_105(t);
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = n_105(t);
        t = w_66(t);
      }
    return(t);
  }
  t = w_66(t);
  return(t);
}
ATerm for_3_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t)
{
  t = p_105(t);
  t = while_not_2_0(q_105, r_105, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm m_67 = NULL;
  m_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_67);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm n_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,k_33 = NULL;
  v_67 = t;
  if(match_cons(t, sym__2))
    {
      t_67 = ATgetArgument(t, 0);
      u_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_67);
  n_67 = t;
  t = u_67;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_67, u_67);
  k_33 = t;
  t = SSLsetAnnotations(k_33, n_67);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL;
  w_68 = t;
  if(match_cons(t, sym__2))
    {
      x_68 = ATgetArgument(t, 0);
      y_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_68 = ATgetFirst((ATermList) t);
      a_69 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_32 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_69(x_68, y_68, w_68, t);
            LocalPopChoice(b_32);
          }
        else
          {
            t = a_32;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_68), z_68), a_69);
          }
      }
    }
  else
    {
      t = k_69(x_68, y_68, w_68, t);
    }
  return(t);
}
static ATerm k_69 (ATerm w_67, ATerm x_67, ATerm y_67, ATerm t)
{
  ATerm z_67 = NULL,f_68 = NULL,l_33 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
  t = SSLgetAnnotations(y_67);
  z_67 = t;
  t = x_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_68 = ATgetFirst((ATermList) t);
      q_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_68;
  if(match_cons(t, sym__2))
    {
      o_68 = ATgetArgument(t, 0);
      p_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_68;
        if((o_68 != t))
          {
            _fail(t);
          }
        t = q_68;
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
        t = x_67;
        t = h_8(o_68, p_68, q_68, t);
      }
  }
  f_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_67, f_68);
  l_33 = t;
  t = SSLsetAnnotations(l_33, z_67);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm j_69 = NULL;
  if(match_cons(t, sym__2))
    {
      j_69 = ATgetArgument(t, 0);
      if((j_69 != ATgetArgument(t, 1)))
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
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(d_11, e_11, g_11, t);
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      {
        ATerm e_69 = NULL,f_69 = NULL,g_69 = NULL;
        e_69 = t;
        if(match_cons(t, sym__2))
          {
            f_69 = ATgetArgument(t, 0);
            g_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_69;
        t = c_8(i_11, f_69, g_69, t);
      }
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm x_21 = NULL,b_22 = NULL;
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_8(v_11, x_21, b_22, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      if((c_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  if(match_cons(t, sym__2))
    {
      o_22 = ATgetArgument(t, 0);
      p_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_8(z_11, o_22, p_22, t);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm q_22 = NULL;
  if(match_cons(t, sym__2))
    {
      q_22 = ATgetArgument(t, 0);
      if((q_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm r_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm e_70 (ATerm t)
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_129(t);
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_69 = NULL,s_69 = NULL,o_21 = NULL,r_21 = NULL;
              r_69 = t;
              t = q_129(t);
              s_69 = t;
              t = r_69;
              {
                static ATerm j_11 (ATerm t)
                {
                  ATerm u_69 = NULL;
                  t = e_70(t);
                  u_69 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_69, s_69);
                  t = diff_0_0(t);
                  return(t);
                }
                t = r_129(j_11, e_70, k_11, t);
              }
              r_21 = t;
              t = SSL_explode_term(r_21);
              if(match_cons(t, sym__2))
                {
                  ATerm o_32 = ATgetArgument(t, 0);
                  o_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_21;
              t = foldr_3_0(p_11, q_11, _id, t);
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              {
                ATerm g_22 = NULL,j_22 = NULL;
                j_22 = t;
                t = SSL_explode_term(j_22);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_32 = ATgetArgument(t, 0);
                    g_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_22;
                t = foldr_3_0(x_11, y_11, e_70, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_70(t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm w_70 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_70);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
        ATerm v_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_32);
          }
        else
          {
            t = v_32;
            {
              ATerm y_32 = t;
              int z_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_70 = ATgetArgument(t, 0);
                      z_70 = ATgetArgument(t, 1);
                      a_71 = ATgetArgument(t, 2);
                      b_71 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_71;
                  t = map_1_0(f_12, t);
                  LocalPopChoice(z_32);
                }
              else
                {
                  t = y_32;
                  {
                    ATerm d_33 = t;
                    int f_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_33);
                      }
                    else
                      {
                        t = d_33;
                        t = dynrule_targs_1_0(g_12, t);
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
  ATerm i_71 = NULL;
  ATerm h_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_71 = ATgetArgument(t, 0);
          {
            ATerm m_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_33);
      t = i_71;
    }
  else
    {
      t = h_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_71 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_71;
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = map_1_0(h_12, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm n_71 = NULL;
  ATerm n_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_71 = ATgetArgument(t, 0);
          {
            ATerm r_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_33);
      t = n_71;
    }
  else
    {
      t = n_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_71 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_71;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,p_33 = NULL,o_33 = NULL;
  v_70 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_70 = ATgetArgument(t, 0);
      t_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_70);
  r_70 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, s_70, t_70);
  o_33 = t;
  t = SSLsetAnnotations(o_33, r_70);
  u_70 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_70 = ATgetArgument(t, 0);
      {
        ATerm t_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = k_70;
  t = free_vars_3_0(b_12, e_12, tboundin_3_0, t);
  i_70 = t;
  t = undefine_unbound_MarkVar_0_1(i_70, t);
  j_70 = t;
  t = u_70;
  if(match_cons(t, sym_Let_2))
    {
      m_70 = ATgetArgument(t, 0);
      n_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_70);
  l_70 = t;
  t = m_70;
  {
    static ATerm i_12 (ATerm t)
    {
      ATerm q_71 = NULL,r_71 = NULL;
      q_71 = t;
      t = term_p_16;
      t = table_destroy_0_0(t);
      t = term_p_16;
      r_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_p_16, j_70);
      t = w_7(r_71, j_70, t);
      t = q_71;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(i_12, t);
  }
  o_70 = t;
  t = term_p_16;
  t = table_destroy_0_0(t);
  t = term_p_16;
  q_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, j_70);
  t = w_7(q_70, j_70, t);
  t = n_70;
  t = mark_buv_0_0(t);
  p_70 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, o_70, p_70);
  p_33 = t;
  t = SSLsetAnnotations(p_33, l_70);
  return(t);
}
static ATerm j_8 (ATerm a_98 (ATerm), ATerm q_25, ATerm o_25, ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  v_71 = t;
  t = a_98(t);
  s_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_71, q_25, o_25);
  t = d_9(s_71, q_25, o_25, t);
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_72 = NULL;
        t = term_b_34;
        a_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_71, term_b_34);
        t = c_9(s_71, a_72, t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = z_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_71 = ATgetFirst((ATermList) t);
      u_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_71, term_b_34, (ATerm) ATinsert(CheckATermList(u_71), (ATerm) ATinsert(CheckATermList(t_71), q_25)));
  t = lookup_table_0_1(s_71, t);
  z_71 = t;
  t = term_b_34;
  w_71 = t;
  t = (ATerm) ATinsert(CheckATermList(u_71), (ATerm) ATinsert(CheckATermList(t_71), q_25));
  x_71 = t;
  t = z_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_9(w_71, x_71, y_71, t);
  t = v_71;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_72);
  c_72 = t;
  t = term_f_34;
  d_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_72), term_f_34);
  t = j_8(j_12, c_72, d_72, t);
  t = b_72;
  return(t);
}
static ATerm k_8 (ATerm z_26, ATerm a_27, ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL;
  f_72 = t;
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_26, a_27);
        t = c_9(z_26, a_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_34 = ATgetFirst((ATermList) t);
            e_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_34);
        {
          ATerm g_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, z_26, a_27, e_72);
          t = lookup_table_0_1(z_26, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_9(a_27, e_72, g_72, t);
          t = (ATerm) ATmakeAppl(sym__3, z_26, a_27, e_72);
        }
      }
    else
      {
        t = l_34;
        {
          ATerm i_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, z_26, a_27);
          t = lookup_table_0_1(z_26, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              i_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_9(a_27, i_72, t);
          t = (ATerm) ATmakeAppl(sym__2, z_26, a_27);
        }
      }
  }
  t = f_72;
  return(t);
}
ATerm end_scope_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL,r_72 = NULL,s_72 = NULL;
  s_72 = t;
  t = x_97(t);
  r_72 = t;
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_72 = NULL;
        t = term_b_34;
        u_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_72, term_b_34);
        t = c_9(r_72, u_72, t);
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_72 = ATgetFirst((ATermList) t);
      l_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_72;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(l_72), m_72);
        LocalPopChoice(t_34);
        {
          ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, r_72, term_b_34);
          t = lookup_table_0_1(r_72, t);
          x_72 = t;
          t = term_b_34;
          v_72 = t;
          t = x_72;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_9(v_72, w_72, t);
          t = (ATerm) ATmakeAppl(sym__2, r_72, term_b_34);
        }
      }
    else
      {
        t = s_34;
        {
          ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, r_72, term_b_34, l_72);
          t = lookup_table_0_1(r_72, t);
          a_73 = t;
          t = term_b_34;
          y_72 = t;
          t = a_73;
          if(match_cons(t, sym_Hashtable_1))
            {
              z_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_9(y_72, l_72, z_72, t);
          t = (ATerm) ATmakeAppl(sym__3, r_72, term_b_34, l_72);
        }
      }
  }
  t = m_72;
  {
    static ATerm k_12 (ATerm t)
    {
      ATerm b_73 = NULL;
      b_73 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_72, b_73);
      t = k_8(r_72, b_73, t);
      return(t);
    }
    t = map_1_0(k_12, t);
  }
  t = s_72;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm t)
{
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_117(t);
      t = m_117(t);
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
      t = m_117(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL;
  e_73 = t;
  t = w_97(t);
  d_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_73, term_b_34);
  {
    ATerm z_34 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_73 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_35 = ATgetArgument(t, 0);
            ATerm g_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_34;
        n_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_73, term_b_34);
        t = c_9(d_73, n_73, t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = z_34;
        t = (ATerm) ATempty;
      }
  }
  f_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_73, term_b_34, (ATerm) ATinsert(CheckATermList(f_73), (ATerm) ATempty));
  t = lookup_table_0_1(d_73, t);
  j_73 = t;
  t = term_b_34;
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
  t = g_9(g_73, h_73, i_73, t);
  t = e_73;
  return(t);
}
ATerm scope_2_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t)
{
  static ATerm l_12 (ATerm t)
  {
    t = end_scope_1_0(y_97, t);
    return(t);
  }
  t = begin_scope_1_0(y_97, t);
  t = restore_always_2_0(z_97, l_12, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,s_33 = NULL;
  s_73 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_73 = ATgetArgument(t, 0);
      q_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_73);
  o_73 = t;
  t = q_73;
  {
    static ATerm o_12 (ATerm t)
    {
      ATerm t_73 = NULL;
      t_73 = t;
      t = p_73;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = t_73;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(n_12, o_12, t);
  }
  r_73 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, p_73, r_73);
  s_33 = t;
  t = SSLsetAnnotations(s_33, o_73);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm h_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL,u_33 = NULL;
      w_73 = t;
      if(match_cons(t, sym_Var_1))
        {
          v_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_73);
      u_73 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_73);
      u_33 = t;
      t = SSLsetAnnotations(u_33, u_73);
      LocalPopChoice(k_35);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = h_35;
      {
        ATerm l_35 = t;
        int o_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,v_33 = NULL;
            a_74 = t;
            if(match_cons(t, sym_App_2))
              {
                y_73 = ATgetArgument(t, 0);
                z_73 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_74);
            x_73 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, y_73, z_73);
            v_33 = t;
            t = SSLsetAnnotations(v_33, x_73);
            LocalPopChoice(o_35);
            {
              ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,h_74 = NULL,w_33 = NULL;
              h_74 = t;
              if(match_cons(t, sym_App_2))
                {
                  c_74 = ATgetArgument(t, 0);
                  d_74 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_74);
              b_74 = t;
              t = c_74;
              t = mark_buv_0_0(t);
              e_74 = t;
              t = d_74;
              t = mark_build_vars_0_0(t);
              f_74 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, e_74, f_74);
              w_33 = t;
              t = SSLsetAnnotations(w_33, b_74);
            }
          }
        else
          {
            t = l_35;
            {
              ATerm p_35 = t;
              int r_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_74 = NULL,k_74 = NULL,l_74 = NULL,x_33 = NULL;
                  l_74 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      k_74 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_74);
                  i_74 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, k_74);
                  x_33 = t;
                  t = SSLsetAnnotations(x_33, i_74);
                  LocalPopChoice(r_35);
                  {
                    ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,y_33 = NULL;
                    p_74 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        n_74 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(p_74);
                    m_74 = t;
                    t = n_74;
                    t = mark_buv_0_0(t);
                    o_74 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, o_74);
                    y_33 = t;
                    t = SSLsetAnnotations(y_33, m_74);
                  }
                }
              else
                {
                  t = p_35;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_8 (ATerm h_27, ATerm i_27, ATerm j_27, ATerm t)
{
  ATerm q_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL;
  w_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_27, i_27);
  t = c_9(h_27, i_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_35 = ATgetFirst((ATermList) t);
      q_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, h_27, i_27, (ATerm) ATinsert(CheckATermList(q_74), j_27));
  t = lookup_table_0_1(h_27, t);
  z_74 = t;
  t = (ATerm) ATinsert(CheckATermList(q_74), j_27);
  x_74 = t;
  t = z_74;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_9(i_27, x_74, y_74, t);
  t = w_74;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL;
  a_75 = t;
  t = term_p_16;
  b_75 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_75);
  c_75 = t;
  t = term_x_35;
  d_75 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_16, (ATerm)ATmakeAppl(sym_Var_1, a_75), term_x_35);
  t = l_8(b_75, c_75, d_75, t);
  t = a_75;
  return(t);
}
static ATerm o_8 (ATerm f_27, ATerm g_27, ATerm t)
{
  ATerm e_75 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_27, g_27);
  t = c_9(f_27, g_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_75 = ATgetFirst((ATermList) t);
      {
        ATerm z_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_75;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL;
  l_76 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,m_23 = NULL;
        t = term_p_16;
        m_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_16, l_76);
        t = o_8(m_23, l_76, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_36) != ATmakeSymbol("i_0", 0, ATtrue)))
              _fail(t);
            f_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, m_76);
        g_23 = t;
        t = (ATerm) ATinsert(ATempty, f_23);
        h_23 = t;
        t = SSLsetAnnotations(g_23, h_23);
        LocalPopChoice(d_36);
      }
    else
      {
        t = b_36;
        {
          ATerm f_36 = t;
          int g_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,d_24 = NULL;
              t = term_p_16;
              d_24 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_p_16, l_76);
              t = o_8(d_24, l_76, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_36) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  w_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, m_76);
              x_23 = t;
              t = (ATerm) ATinsert(ATempty, w_23);
              y_23 = t;
              t = SSLsetAnnotations(x_23, y_23);
              LocalPopChoice(g_36);
            }
          else
            {
              t = f_36;
              {
                ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,r_24 = NULL;
                t = term_p_16;
                r_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_16, l_76);
                t = o_8(r_24, l_76, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm i_36 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_36) != ATmakeSymbol("c_0", 0, ATtrue)))
                      _fail(t);
                    j_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, m_76);
                k_24 = t;
                t = (ATerm) ATinsert(ATempty, j_24);
                l_24 = t;
                t = SSLsetAnnotations(k_24, l_24);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,e_34 = NULL;
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(k_36);
    }
  else
    {
      t = j_36;
    }
  u_76 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_76);
  r_76 = t;
  t = s_76;
  t = DeclareBound_0_0(t);
  t_76 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_76);
  e_34 = t;
  t = SSLsetAnnotations(e_34, r_76);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm l_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL,g_34 = NULL;
      z_76 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_76);
      x_76 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_76);
      g_34 = t;
      t = SSLsetAnnotations(g_34, x_76);
      LocalPopChoice(m_36);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = l_36;
      {
        ATerm n_36 = t;
        int o_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,h_34 = NULL;
            d_77 = t;
            if(match_cons(t, sym_App_2))
              {
                b_77 = ATgetArgument(t, 0);
                c_77 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_77);
            a_77 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, b_77, c_77);
            h_34 = t;
            t = SSLsetAnnotations(h_34, a_77);
            LocalPopChoice(o_36);
            {
              ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,i_34 = NULL;
              j_77 = t;
              if(match_cons(t, sym_App_2))
                {
                  f_77 = ATgetArgument(t, 0);
                  g_77 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_77);
              e_77 = t;
              t = f_77;
              t = mark_buv_0_0(t);
              h_77 = t;
              t = g_77;
              t = mark_build_vars_0_0(t);
              i_77 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, h_77, i_77);
              i_34 = t;
              t = SSLsetAnnotations(i_34, e_77);
            }
          }
        else
          {
            t = n_36;
            {
              ATerm p_36 = t;
              int q_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL,j_34 = NULL;
                  m_77 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      l_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_77);
                  k_77 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, l_77);
                  j_34 = t;
                  t = SSLsetAnnotations(j_34, k_77);
                  LocalPopChoice(q_36);
                  {
                    ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,k_34 = NULL;
                    q_77 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        o_77 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(q_77);
                    n_77 = t;
                    t = o_77;
                    t = mark_buv_0_0(t);
                    p_77 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, p_77);
                    k_34 = t;
                    t = SSLsetAnnotations(k_34, n_77);
                  }
                }
              else
                {
                  t = p_36;
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
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_78 = NULL,m_78 = NULL;
      l_78 = t;
      if(match_cons(t, sym_Match_1))
        {
          m_78 = ATgetArgument(t, 0);
          {
            ATerm z_24 = NULL,f_25 = NULL,q_34 = NULL;
            t = SSLgetAnnotations(l_78);
            z_24 = t;
            t = m_78;
            t = mark_match_vars_0_0(t);
            f_25 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, f_25);
            q_34 = t;
            t = SSLsetAnnotations(q_34, z_24);
          }
        }
      else
        {
          ATerm l_25 = NULL,n_25 = NULL,r_34 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              m_78 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_78);
          l_25 = t;
          t = m_78;
          t = mark_build_vars_0_0(t);
          n_25 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, n_25);
          r_34 = t;
          t = SSLsetAnnotations(r_34, l_25);
        }
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      {
        ATerm t_36 = t;
        int u_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(u_36);
          }
        else
          {
            t = t_36;
            {
              ATerm v_36 = t;
              int w_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(w_36);
                }
              else
                {
                  t = v_36;
                  {
                    ATerm x_36 = t;
                    int a_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(a_37);
                      }
                    else
                      {
                        t = x_36;
                        {
                          ATerm b_37 = t;
                          int c_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL;
                              n_78 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  o_78 = ATgetArgument(t, 0);
                                  p_78 = ATgetArgument(t, 1);
                                  q_78 = ATgetArgument(t, 2);
                                  r_78 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = n_78;
                              t = u_7(o_78, p_78, q_78, r_78, t);
                              LocalPopChoice(c_37);
                            }
                          else
                            {
                              t = b_37;
                              {
                                ATerm d_37 = t;
                                int e_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(e_37);
                                  }
                                else
                                  {
                                    t = d_37;
                                    {
                                      ATerm f_37 = t;
                                      int g_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL;
                                          z_78 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              a_79 = ATgetArgument(t, 0);
                                              t = a_79;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  w_78 = ATgetArgument(t, 0);
                                                  x_78 = ATgetArgument(t, 1);
                                                  y_78 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = z_78;
                                              t = t_7(w_78, x_78, y_78, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  a_79 = ATgetArgument(t, 0);
                                                  t = a_79;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      w_78 = ATgetArgument(t, 0);
                                                      x_78 = ATgetArgument(t, 1);
                                                      y_78 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_78;
                                                  t = s_7(w_78, x_78, y_78, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      a_79 = ATgetArgument(t, 0);
                                                      b_79 = ATgetArgument(t, 1);
                                                      c_79 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_78;
                                                  t = r_7(a_79, b_79, c_79, t);
                                                }
                                            }
                                          LocalPopChoice(g_37);
                                        }
                                      else
                                        {
                                          t = f_37;
                                          {
                                            ATerm h_37 = t;
                                            int i_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(i_37);
                                              }
                                            else
                                              {
                                                t = h_37;
                                                {
                                                  ATerm j_37 = t;
                                                  int k_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(k_37);
                                                    }
                                                  else
                                                    {
                                                      t = j_37;
                                                      {
                                                        ATerm l_37 = t;
                                                        int m_37 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm m_79 = NULL;
                                                            m_79 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm n_37 = ATgetArgument(t, 0);
                                                                ATerm o_37 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = m_79;
                                                            t = q_7(t);
                                                            LocalPopChoice(m_37);
                                                          }
                                                        else
                                                          {
                                                            t = l_37;
                                                            {
                                                              ATerm p_37 = t;
                                                              int q_37 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(q_37);
                                                                }
                                                              else
                                                                {
                                                                  t = p_37;
                                                                  {
                                                                    ATerm r_37 = t;
                                                                    int s_37 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(s_37);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_37;
                                                                        {
                                                                          ATerm t_37 = t;
                                                                          int u_37 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(u_37);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_37;
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
static ATerm p_12 (ATerm t)
{
  ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL;
  z_79 = t;
  t = term_b_16;
  a_80 = t;
  t = (ATerm) ATinsert(ATempty, term_v_37);
  b_80 = t;
  t = SSL_printnl(a_80, b_80);
  t = z_79;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,u_34 = NULL;
  f_80 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_80);
  c_80 = t;
  t = d_80;
  t = map_1_0(mark_buv_0_0, t);
  e_80 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_80);
  u_34 = t;
  t = SSLsetAnnotations(u_34, c_80);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL;
  g_80 = t;
  t = term_b_16;
  h_80 = t;
  t = (ATerm) ATinsert(ATempty, term_w_37);
  i_80 = t;
  t = SSL_printnl(h_80, i_80);
  t = g_80;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,w_34 = NULL,v_34 = NULL;
  t = if_verbose4_1_0(p_12, t);
  y_79 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_79);
  r_79 = t;
  t = s_79;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_79 = ATgetFirst((ATermList) t);
      v_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_79);
  t_79 = t;
  t = v_79;
  t = Cons_2_0(q_12, r_12, t);
  w_79 = t;
  t = (ATerm) ATinsert(CheckATermList(w_79), u_79);
  v_34 = t;
  t = SSLsetAnnotations(v_34, t_79);
  x_79 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_79);
  w_34 = t;
  t = SSLsetAnnotations(w_34, r_79);
  t = if_verbose4_1_0(s_12, t);
  return(t);
}
static ATerm q_8 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm j_80 = NULL;
  t = SSL_fputc(f_38, g_38);
  j_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_80);
  return(t);
}
static ATerm r_8 (ATerm r_43, ATerm s_43, ATerm t)
{
  ATerm k_80 = NULL;
  t = SSL_write_term_to_stream_text(r_43, s_43);
  k_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_80);
  return(t);
}
static ATerm t_8 (ATerm k_106 (ATerm), ATerm w_370, ATerm x_43, ATerm t)
{
  ATerm l_80 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_370, term_x_37);
  t = x_8(t);
  l_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_80, x_43);
  t = k_106(t);
  t = fclose_0_0(t);
  t = x_43;
  return(t);
}
static ATerm s_8 (ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm m_80 = NULL;
  t = SSL_write_term_to_stream_baf(n_43, o_43);
  m_80 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_80);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_37 = ATgetArgument(t, 0);
      if(match_cons(y_37, sym_Stream_1))
        {
          n_26 = ATgetArgument(y_37, 0);
        }
      else
        _fail(t);
      o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_8(n_26, o_26, t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_37 = ATgetArgument(t, 0);
      if(match_cons(z_37, sym_Stream_1))
        {
          z_27 = ATgetArgument(z_37, 0);
        }
      else
        _fail(t);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(z_27, a_28, t);
  u_27 = t;
  t = term_a_38;
  v_27 = t;
  t = u_27;
  if(match_cons(t, sym_Stream_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_38, u_27);
  t = q_8(v_27, y_27, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL,a_82 = NULL,b_82 = NULL,b_35 = NULL,a_35 = NULL;
  r_80 = t;
  if(match_cons(t, sym__2))
    {
      y_80 = ATgetArgument(t, 0);
      z_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_80);
  x_80 = t;
  t = y_80;
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_12 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_80 != NULL) && (q_80 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_80 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(u_12, t);
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
        t = term_d_38;
        q_80 = t;
      }
  }
  a_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_81, z_80);
  a_35 = t;
  t = SSLsetAnnotations(a_35, x_80);
  t = r_80;
  if(match_cons(t, sym__2))
    {
      t_80 = ATgetArgument(t, 0);
      u_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_80);
  s_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_80, (ATerm) ATmakeAppl(sym__2, not_null(q_80), u_80));
  b_35 = t;
  t = SSLsetAnnotations(b_35, s_80);
  w_80 = t;
  if(match_cons(t, sym__2))
    {
      a_82 = ATgetArgument(t, 0);
      b_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_25 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,m_26 = NULL,c_35 = NULL;
        t = SSLgetAnnotations(w_80);
        w_25 = t;
        t = a_82;
        t = fetch_1_0(v_12, t);
        h_26 = t;
        t = b_82;
        if(match_cons(t, sym__2))
          {
            j_26 = ATgetArgument(t, 0);
            m_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_8(w_12, j_26, m_26, t);
        i_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_26, i_26);
        c_35 = t;
        t = SSLsetAnnotations(c_35, w_25);
        LocalPopChoice(j_38);
      }
    else
      {
        t = e_38;
        {
          ATerm k_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,d_35 = NULL;
          t = SSLgetAnnotations(w_80);
          k_27 = t;
          t = b_82;
          if(match_cons(t, sym__2))
            {
              s_27 = ATgetArgument(t, 0);
              t_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_8(x_12, s_27, t_27, t);
          r_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_82, r_27);
          d_35 = t;
          t = SSLsetAnnotations(d_35, k_27);
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
ATerm apply_strategy_1_0 (ATerm c_123 (ATerm), ATerm t)
{
  ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
  i_82 = t;
  t = dtime_0_0(t);
  t = i_82;
  t = c_123(t);
  h_82 = t;
  t = dtime_0_0(t);
  e_82 = t;
  t = h_82;
  if(match_cons(t, sym__2))
    {
      f_82 = ATgetArgument(t, 0);
      g_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_82), (ATerm) ATmakeAppl(sym_Runtime_1, e_82)), g_82);
  return(t);
}
static ATerm w_82 (ATerm q_82, ATerm t)
{
  t = SSL_fclose(q_82);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_82 = NULL,u_82 = NULL;
  u_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_82 = ATgetArgument(t, 0);
      {
        ATerm k_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_82);
            LocalPopChoice(l_38);
          }
        else
          {
            t = k_38;
            t = w_82(u_82, t);
          }
      }
    }
  else
    {
      t = w_82(u_82, t);
    }
  return(t);
}
static ATerm u_8 (ATerm t_43, ATerm t)
{
  t = SSL_read_term_from_stream(t_43);
  return(t);
}
static ATerm v_8 (ATerm y_36, ATerm z_36, ATerm t)
{
  t = SSL_strcat(y_36, z_36);
  return(t);
}
static ATerm w_8 (ATerm h_38, ATerm i_38, ATerm t)
{
  ATerm x_82 = NULL;
  t = SSL_fopen(h_38, i_38);
  x_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_82 = NULL;
  t = SSL_stdin_stream();
  y_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_82 = NULL;
  t = SSL_stdout_stream();
  z_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_83 = NULL;
  t = SSL_stderr_stream();
  a_83 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_83);
  return(t);
}
static ATerm h_84 (ATerm g_83, ATerm t)
{
  ATerm h_83 = NULL;
  t = SSL_explode_term(g_83);
  if(match_cons(t, sym__2))
    {
      ATerm m_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_38 = ATgetArgument(t, 1);
        if(((ATgetType(n_38) == AT_LIST) && !(ATisEmpty(n_38))))
          {
            h_83 = ATgetFirst((ATermList) n_38);
            {
              ATerm o_38 = (ATerm) ATgetNext((ATermList) n_38);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_83;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_83;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_83;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_83;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_84 (ATerm k_83, ATerm l_83, ATerm m_83, ATerm t)
{
  ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL,s_83 = NULL,i_35 = NULL;
  t = SSLgetAnnotations(m_83);
  p_83 = t;
  t = k_83;
  if(match_cons(t, sym_Path_1))
    {
      s_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_83, l_83);
  i_35 = t;
  t = SSLsetAnnotations(i_35, p_83);
  if(match_cons(t, sym__2))
    {
      n_83 = ATgetArgument(t, 0);
      o_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8(n_83, o_83, t);
  return(t);
}
static ATerm j_84 (ATerm u_83, ATerm v_83, ATerm w_83, ATerm t)
{
  ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL,c_84 = NULL,j_35 = NULL;
  t = SSLgetAnnotations(w_83);
  z_83 = t;
  t = SSL_is_string(u_83);
  c_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_84, v_83);
  j_35 = t;
  t = SSLsetAnnotations(j_35, z_83);
  if(match_cons(t, sym__2))
    {
      x_83 = ATgetArgument(t, 0);
      y_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8(x_83, y_83, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL;
  e_84 = t;
  if(match_cons(t, sym__2))
    {
      f_84 = ATgetArgument(t, 0);
      g_84 = ATgetArgument(t, 1);
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_84(e_84, t);
            LocalPopChoice(q_38);
          }
        else
          {
            t = p_38;
            {
              ATerm r_38 = t;
              int s_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_84(f_84, g_84, e_84, t);
                  LocalPopChoice(s_38);
                }
              else
                {
                  t = r_38;
                  t = j_84(f_84, g_84, e_84, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_84(e_84, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL,s_84 = NULL;
  s_84 = t;
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_84, term_v_38);
        t = x_8(t);
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
        {
          ATerm t_28 = NULL,u_28 = NULL;
          t = term_w_38;
          u_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_38, s_84);
          t = v_8(u_28, s_84, t);
          t_28 = t;
          t = SSL_perror(t_28);
          _fail(t);
        }
      }
  }
  m_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_8(n_84, t);
  l_84 = t;
  t = m_84;
  t = fclose_0_0(t);
  t = l_84;
  return(t);
}
ATerm fetch_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  static ATerm r_85 (ATerm t)
  {
    ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL;
    o_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_85 = ATgetFirst((ATermList) t);
        q_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_38 = t;
      int y_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_29 = NULL,f_29 = NULL,m_35 = NULL;
          t = SSLgetAnnotations(o_85);
          b_29 = t;
          t = p_85;
          t = x_107(t);
          f_29 = t;
          t = (ATerm) ATinsert(CheckATermList(q_85), f_29);
          m_35 = t;
          t = SSLsetAnnotations(m_35, b_29);
          LocalPopChoice(y_38);
        }
      else
        {
          t = x_38;
          {
            ATerm u_29 = NULL,x_29 = NULL,n_35 = NULL;
            t = SSLgetAnnotations(o_85);
            u_29 = t;
            t = q_85;
            t = r_85(t);
            x_29 = t;
            t = (ATerm) ATinsert(CheckATermList(x_29), p_85);
            n_35 = t;
            t = SSLsetAnnotations(n_35, u_29);
          }
        }
    }
    return(t);
  }
  t = r_85(t);
  return(t);
}
static ATerm c_9 (ATerm n_28, ATerm o_28, ATerm t)
{
  ATerm u_85 = NULL;
  t = lookup_table_0_1(n_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_9(o_28, u_85, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_131 (ATerm), ATerm t)
{
  ATerm x_85 = NULL;
  x_85 = t;
  {
    ATerm z_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL;
        t = term_j_16;
        a_86 = t;
        t = term_k_16;
        b_86 = t;
        t = term_l_16;
        t = c_9(a_86, b_86, t);
        z_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_85, term_b_39);
        t = geq_0_0(t);
        t = x_85;
        t = o_131(t);
        LocalPopChoice(a_39);
      }
    else
      {
        t = z_38;
        t = x_85;
      }
  }
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm e_86 = NULL;
  e_86 = t;
  if(match_string(t, "-k"))
    {
      t = e_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_86;
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL;
  f_86 = t;
  t = SSL_string_to_int(f_86);
  g_86 = t;
  t = term_c_39;
  h_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_39, g_86);
  t = f_9(h_86, g_86, t);
  t = f_86;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_12, a_13, f_13, t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm j_86 = NULL;
  j_86 = t;
  if(match_string(t, "-S"))
    {
      t = j_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_86;
    }
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL;
  t = term_k_16;
  k_86 = t;
  t = term_e_39;
  l_86 = t;
  t = term_f_39;
  t = f_9(k_86, l_86, t);
  t = term_g_39;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_h_39;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL,o_86 = NULL;
  m_86 = t;
  t = SSL_string_to_int(m_86);
  n_86 = t;
  t = term_k_16;
  o_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_16, n_86);
  t = f_9(o_86, n_86, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_86);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_i_39;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL;
  t = term_j_39;
  p_86 = t;
  t = term_a_16;
  q_86 = t;
  t = term_k_39;
  t = f_9(p_86, q_86, t);
  t = term_l_39;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_13, h_13, i_13, t);
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
            t = ArgOption_3_0(j_13, k_13, l_13, t);
            LocalPopChoice(q_39);
          }
        else
          {
            t = p_39;
            t = Option_3_0(m_13, n_13, o_13, t);
          }
      }
    }
  return(t);
}
static ATerm f_9 (ATerm u_66, ATerm v_66, ATerm t)
{
  ATerm r_86 = NULL,s_86 = NULL;
  t = term_j_16;
  r_86 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_16, u_66, v_66);
  t = lookup_table_0_1(r_86, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_9(u_66, v_66, s_86, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_16, u_66, v_66);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm w_86 = NULL,x_86 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL;
      t = term_a_16;
      t = f_0(t);
      y_86 = t;
      t = term_r_39;
      z_86 = t;
      t = term_s_39;
      a_87 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_39, term_s_39, y_86);
      t = d_9(z_86, a_87, y_86, t);
      _fail(t);
    }
  else
    {
      ATerm d_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_86 = ATgetFirst((ATermList) t);
          x_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_86;
      t = b_0(t);
      t = term_a_16;
      t = d_0(t);
      d_87 = t;
      t = (ATerm) ATinsert(CheckATermList(x_86), d_87);
    }
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm f_87 = NULL;
  f_87 = t;
  if(match_string(t, "-o"))
    {
      t = f_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_87;
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm g_87 = NULL,h_87 = NULL;
  g_87 = t;
  t = term_t_39;
  h_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_39, g_87);
  t = f_9(h_87, g_87, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_87);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = term_u_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_13, r_13, v_13, t);
  return(t);
}
static ATerm d_9 (ATerm u_26, ATerm v_26, ATerm t_26, ATerm t)
{
  ATerm j_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,n_87 = NULL;
  j_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_26, v_26);
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_39 = ATgetArgument(t, 0);
            ATerm y_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_26, v_26);
        t = c_9(u_26, v_26, t);
        LocalPopChoice(w_39);
      }
    else
      {
        t = v_39;
        t = (ATerm) ATempty;
      }
  }
  k_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_26, v_26, (ATerm) ATinsert(CheckATermList(k_87), t_26));
  t = lookup_table_0_1(u_26, t);
  n_87 = t;
  t = (ATerm) ATinsert(CheckATermList(k_87), t_26);
  l_87 = t;
  t = n_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_9(v_26, l_87, m_87, t);
  t = j_87;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
      t = term_a_16;
      t = m_0(t);
      y_87 = t;
      t = term_r_39;
      z_87 = t;
      t = term_s_39;
      a_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_39, term_s_39, y_87);
      t = d_9(z_87, a_88, y_87, t);
      _fail(t);
    }
  else
    {
      ATerm e_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_87 = ATgetFirst((ATermList) t);
          v_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_87;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_87 = ATgetFirst((ATermList) t);
          x_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_87;
      t = j_0(t);
      t = w_87;
      t = l_0(t);
      e_88 = t;
      t = (ATerm) ATinsert(CheckATermList(x_87), e_88);
    }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm g_88 = NULL;
  g_88 = t;
  if(match_string(t, "-i"))
    {
      t = g_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_88;
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL;
  h_88 = t;
  t = term_z_39;
  i_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_39, h_88);
  t = f_9(i_88, h_88, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_88);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_13, x_13, y_13, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_16;
  t = whoami_0_0(t);
  j_88 = t;
  t = term_b_16;
  l_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_40), j_88);
  m_88 = t;
  t = SSL_printnl(l_88, m_88);
  t = term_f_16;
  k_88 = t;
  t = SSL_exit(k_88);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL;
  t = term_j_16;
  n_88 = t;
  t = term_c_40;
  o_88 = t;
  t = term_d_40;
  t = c_9(n_88, o_88, t);
  return(t);
}
static ATerm y_8 (ATerm x_44, ATerm y_44, ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_44, y_44);
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
      t = SSL_addr(x_44, y_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm t)
{
  ATerm q_88 = NULL,r_88 = NULL,s_88 = NULL;
  q_88 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_88;
      t = b_115(t);
    }
  else
    {
      ATerm v_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_88 = ATgetFirst((ATermList) t);
          s_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_88;
      t = foldr_2_0(b_115, c_115, t);
      v_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_88, v_88);
      t = c_115(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_13 (ATerm t)
{
  t = term_e_39;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL;
  if(match_cons(t, sym__2))
    {
      i_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_8(i_30, j_30, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_88 = NULL,d_30 = NULL,e_30 = NULL;
  t = times_0_0(t);
  e_30 = t;
  t = SSL_explode_term(e_30);
  if(match_cons(t, sym__2))
    {
      ATerm g_40 = ATgetArgument(t, 0);
      d_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_30;
  t = foldr_2_0(z_13, c_14, t);
  y_88 = t;
  t = SSL_TicksToSeconds(y_88);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL;
  j_89 = t;
  if(match_cons(t, sym__2))
    {
      k_89 = ATgetArgument(t, 0);
      l_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_89;
        if((k_89 != t))
          {
            _fail(t);
          }
        t = j_89;
        LocalPopChoice(i_40);
      }
    else
      {
        t = h_40;
        t = (ATerm) ATmakeAppl(sym__2, k_89, l_89);
        {
          ATerm j_40 = t;
          int k_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_89, l_89);
              LocalPopChoice(k_40);
            }
          else
            {
              t = j_40;
              t = SSL_gtr(k_89, l_89);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_89, l_89);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_131 (ATerm), ATerm t)
{
  ATerm p_89 = NULL;
  p_89 = t;
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL;
        t = term_j_16;
        s_89 = t;
        t = term_k_16;
        t_89 = t;
        t = term_l_16;
        t = c_9(s_89, t_89, t);
        r_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_89, term_f_16);
        t = geq_0_0(t);
        t = p_89;
        t = n_131(t);
        LocalPopChoice(m_40);
      }
    else
      {
        t = l_40;
        t = p_89;
      }
  }
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm v_89 = NULL,w_89 = NULL,y_89 = NULL,z_89 = NULL;
  t = run_time_0_0(t);
  v_89 = t;
  t = term_a_16;
  t = whoami_0_0(t);
  w_89 = t;
  t = term_b_16;
  y_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_40), v_89), term_n_40), w_89);
  z_89 = t;
  t = SSL_printnl(y_89, z_89);
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_40), v_89), term_n_40), w_89));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_90 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_39;
  a_90 = t;
  t = SSL_exit(a_90);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm k_90 = NULL,l_90 = NULL;
  l_90 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_90;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_90 = ATgetArgument(t, 0);
          {
            ATerm g_31 = NULL,q_35 = NULL;
            t = SSLgetAnnotations(l_90);
            g_31 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_90);
            q_35 = t;
            t = SSLsetAnnotations(q_35, g_31);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_90;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_124 (ATerm), ATerm t)
{
  ATerm p_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_90 = NULL,e_90 = NULL;
      t = term_j_16;
      d_90 = t;
      t = term_r_40;
      e_90 = t;
      t = term_s_40;
      t = c_9(d_90, e_90, t);
      LocalPopChoice(q_40);
    }
  else
    {
      t = p_40;
      t = fetch_1_0(f_14, t);
    }
  t = a_124(t);
  return(t);
}
static ATerm g_9 (ATerm m_31, ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm n_90 = NULL;
  t = SSL_hashtable_put(o_31, m_31, n_31);
  n_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_90);
  return(t);
}
static ATerm h_9 (ATerm p_31, ATerm q_31, ATerm t)
{
  t = SSL_hashtable_get(q_31, p_31);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_28, ATerm t)
{
  ATerm w_90 = NULL;
  t = table_hashtable_0_0(t);
  w_90 = t;
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_31 = NULL;
        t = w_90;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_9(g_28, x_31, t);
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        {
          ATerm c_32 = NULL;
          t = g_28;
          t = table_create_0_0(t);
          t = w_90;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_9(g_28, c_32, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_31, ATerm v_31, ATerm t)
{
  ATerm z_90 = NULL;
  t = SSL_hashtable_create(u_31, v_31);
  z_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_90);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL,e_91 = NULL,f_91 = NULL;
  a_91 = t;
  t = term_v_40;
  e_91 = t;
  t = term_w_40;
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
  t = g_9(a_91, b_91, c_91, t);
  t = a_91;
  return(t);
}
static ATerm a_9 (ATerm r_31, ATerm s_31, ATerm t)
{
  ATerm g_91 = NULL;
  t = SSL_hashtable_remove(s_31, r_31);
  g_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_91);
  return(t);
}
static ATerm b_9 (ATerm w_31, ATerm t)
{
  ATerm h_91 = NULL;
  t = SSL_hashtable_destroy(w_31);
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
  t = b_9(m_91, t);
  t = k_91;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(j_91, l_91, t);
  t = j_91;
  return(t);
}
ATerm map_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  static ATerm b_92 (ATerm t)
  {
    ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL;
    y_91 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_91;
      }
    else
      {
        ATerm h_32 = NULL,k_32 = NULL,l_32 = NULL,s_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_91 = ATgetFirst((ATermList) t);
            a_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_91);
        h_32 = t;
        t = z_91;
        t = n_107(t);
        k_32 = t;
        t = a_92;
        t = b_92(t);
        l_32 = t;
        t = (ATerm) ATinsert(CheckATermList(l_32), k_32);
        s_35 = t;
        t = SSLsetAnnotations(s_35, h_32);
      }
    return(t);
  }
  t = b_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_92 = ATgetFirst((ATermList) t);
      f_92 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_92 = NULL,k_92 = NULL;
        static ATerm g_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_92)), not_null(k_92));
          return(t);
        }
        t = f_92;
        t = h_0(t);
        if(((j_92 != NULL) && (j_92 != t)))
          _fail(t);
        else
          j_92 = t;
        t = e_92;
        t = g_0(t);
        if(((k_92 != NULL) && (k_92 != t)))
          _fail(t);
        else
          k_92 = t;
        t = f_92;
        t = reverse_acc_2_0(g_0, g_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_16;
      t = h_0(t);
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL,u_35 = NULL;
  s_92 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_92);
  q_92 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_92);
  u_35 = t;
  t = SSLsetAnnotations(u_35, q_92);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm u_92 = NULL;
  u_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_92), term_x_40);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL;
  ATerm y_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_92 = NULL,p_92 = NULL;
      t = term_j_16;
      o_92 = t;
      t = term_c_40;
      p_92 = t;
      t = term_d_40;
      t = c_9(o_92, p_92, t);
      LocalPopChoice(z_40);
    }
  else
    {
      t = y_40;
      t = fetch_1_0(o_14, t);
    }
  t = term_a_41;
  t = echo_0_0(t);
  t = term_r_39;
  m_92 = t;
  t = term_s_39;
  n_92 = t;
  t = term_b_41;
  t = c_9(m_92, n_92, t);
  t = reverse_acc_2_0(_id, p_14, t);
  t = map_1_0(q_14, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL;
  w_92 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_92;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_41 = ATgetFirst((ATermList) t);
                ATerm f_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_92;
          }
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        t = (ATerm) ATinsert(ATempty, w_92);
      }
  }
  x_92 = t;
  t = term_d_38;
  y_92 = t;
  t = SSL_printnl(y_92, x_92);
  t = w_92;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_93 = NULL,d_93 = NULL;
  t = term_j_16;
  c_93 = t;
  t = term_c_40;
  d_93 = t;
  t = term_d_40;
  t = c_9(c_93, d_93, t);
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
  ATerm e_93 = NULL,f_93 = NULL;
  t = term_g_41;
  e_93 = t;
  t = term_a_16;
  f_93 = t;
  t = term_h_41;
  t = f_9(e_93, f_93, t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = term_i_41;
  return(t);
}
static ATerm w_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL;
  t = term_g_41;
  i_93 = t;
  t = term_a_16;
  j_93 = t;
  t = term_h_41;
  t = f_9(i_93, j_93, t);
  t = term_j_41;
  g_93 = t;
  t = term_a_16;
  h_93 = t;
  t = term_k_41;
  t = f_9(g_93, h_93, t);
  t = term_l_41;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = term_m_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_14, u_14, v_14, t);
      LocalPopChoice(o_41);
    }
  else
    {
      t = n_41;
      t = Option_3_0(w_14, x_14, y_14, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm t)
{
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,w_35 = NULL;
  p_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_93 = ATgetFirst((ATermList) t);
      m_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_93);
  k_93 = t;
  t = l_93;
  t = i_96(t);
  n_93 = t;
  t = m_93;
  t = j_96(t);
  o_93 = t;
  t = (ATerm) ATinsert(CheckATermList(o_93), n_93);
  w_35 = t;
  t = SSLsetAnnotations(w_35, k_93);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL,z_93 = NULL,a_94 = NULL,y_35 = NULL;
  u_93 = t;
  {
    ATerm p_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_41;
        t = f_127(t);
        LocalPopChoice(q_41);
      }
    else
      {
        t = p_41;
      }
  }
  t = u_93;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_93 = ATgetFirst((ATermList) t);
      x_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_93);
  v_93 = t;
  t = term_c_40;
  a_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_40, w_93);
  t = f_9(a_94, w_93, t);
  t = x_93;
  {
    static ATerm k_94 (ATerm t)
    {
      ATerm s_41 = t;
      int t_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_94 = NULL;
              d_94 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_94;
              LocalPopChoice(v_41);
            }
          else
            {
              t = u_41;
              t = f_127(t);
              t = Cons_2_0(_id, k_94, t);
            }
          LocalPopChoice(t_41);
        }
      else
        {
          t = s_41;
          {
            ATerm g_94 = NULL,h_94 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_94 = ATgetFirst((ATermList) t);
                h_94 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_94), (ATerm) ATmakeAppl(sym_Undefined_1, g_94));
          }
        }
      return(t);
    }
    t = k_94(t);
  }
  z_93 = t;
  t = (ATerm) ATinsert(CheckATermList(z_93), (ATerm) ATmakeAppl(sym_Program_1, w_93));
  y_35 = t;
  t = SSLsetAnnotations(y_35, v_93);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm x_94 = NULL;
  x_94 = t;
  if(match_string(t, "--help"))
    {
      t = x_94;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_94;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_94;
        }
    }
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL;
  t = term_r_40;
  y_94 = t;
  t = term_a_16;
  z_94 = t;
  t = term_w_41;
  t = f_9(y_94, z_94, t);
  t = term_x_41;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  t = term_y_41;
  return(t);
}
static ATerm g_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL;
  r_94 = t;
  t = term_r_39;
  s_94 = t;
  t = term_z_41;
  t = lookup_table_0_1(s_94, t);
  w_94 = t;
  t = term_s_39;
  t_94 = t;
  t = (ATerm) ATempty;
  u_94 = t;
  t = w_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_9(t_94, u_94, v_94, t);
  t = r_94;
  {
    static ATerm a_15 (ATerm t)
    {
      ATerm a_42 = t;
      int b_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_127(t);
          LocalPopChoice(b_42);
        }
      else
        {
          t = a_42;
          {
            ATerm c_42 = t;
            int d_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_15, c_15, e_15, t);
                LocalPopChoice(d_42);
              }
            else
              {
                t = c_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_15, t);
  }
  {
    ATerm e_42 = t;
    int f_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_95 = NULL;
        k_95 = t;
        {
          ATerm g_42 = t;
          int h_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_32 = NULL;
              t = k_95;
              {
                ATerm i_42 = t;
                int j_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_32 = NULL,u_32 = NULL;
                    t = term_j_16;
                    t_32 = t;
                    t = term_r_40;
                    u_32 = t;
                    t = term_s_40;
                    t = c_9(t_32, u_32, t);
                    LocalPopChoice(j_42);
                  }
                else
                  {
                    t = i_42;
                    t = fetch_1_0(g_15, t);
                  }
              }
              t = k_95;
              t = default_system_usage_0_0(t);
              t = term_e_39;
              s_32 = t;
              t = SSL_exit(s_32);
              LocalPopChoice(h_42);
            }
          else
            {
              t = g_42;
              {
                ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
                t = term_j_16;
                b_33 = t;
                t = term_g_41;
                c_33 = t;
                t = term_k_42;
                t = c_9(b_33, c_33, t);
                t = k_95;
                t = default_system_about_0_0(t);
                t = term_e_39;
                a_33 = t;
                t = SSL_exit(a_33);
              }
            }
        }
        LocalPopChoice(f_42);
      }
    else
      {
        t = e_42;
        {
          ATerm l_42 = t;
          int m_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL;
              static ATerm h_15 (ATerm t)
              {
                ATerm o_95 = NULL,p_95 = NULL,q_95 = NULL,a_36 = NULL;
                q_95 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_95 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_95);
                o_95 = t;
                t = p_95;
                if(((p_94 != NULL) && (p_94 != t)))
                  _fail(t);
                else
                  p_94 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_95);
                a_36 = t;
                t = SSLsetAnnotations(a_36, o_95);
                return(t);
              }
              t = fetch_1_0(h_15, t);
              t = term_b_16;
              m_95 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_94)), term_n_42);
              n_95 = t;
              t = SSL_printnl(m_95, n_95);
              t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_94)), term_n_42));
              t = default_system_usage_0_0(t);
              t = term_f_16;
              l_95 = t;
              t = SSL_exit(l_95);
              LocalPopChoice(m_42);
            }
          else
            {
              t = l_42;
            }
        }
      }
  }
  q_94 = t;
  t = term_r_39;
  t = table_destroy_0_0(t);
  t = q_94;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL,z_95 = NULL;
  t = parse_options_1_0(c_124, t);
  v_95 = t;
  t = term_o_42;
  t = table_create_0_0(t);
  t = term_o_42;
  w_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_42, term_p_42, v_95);
  t = lookup_table_0_1(w_95, t);
  z_95 = t;
  t = term_p_42;
  x_95 = t;
  t = z_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_9(x_95, v_95, y_95, t);
  t = v_95;
  t = e_124(t);
  {
    ATerm q_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_124, t);
        LocalPopChoice(s_42);
      }
    else
      {
        t = q_42;
        {
          ATerm t_42 = t;
          int x_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_124(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_42);
            }
          else
            {
              t = t_42;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_15 (ATerm t)
{
  t = if_verbose2_1_0(x_15, t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm a_96 = NULL,b_96 = NULL;
  t = term_z_42;
  a_96 = t;
  t = term_a_16;
  b_96 = t;
  t = term_a_43;
  t = f_9(a_96, b_96, t);
  t = term_b_43;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_c_43;
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL;
  c_96 = t;
  t = term_j_16;
  g_96 = t;
  t = term_c_40;
  h_96 = t;
  t = term_d_40;
  t = c_9(g_96, h_96, t);
  d_96 = t;
  t = term_b_16;
  e_96 = t;
  t = (ATerm) ATinsert(ATempty, d_96);
  f_96 = t;
  t = SSL_printnl(e_96, f_96);
  t = c_96;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_123 (ATerm), ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm t)
{
  static ATerm j_15 (ATerm t)
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_123(t);
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
        {
          ATerm f_43 = t;
          int g_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(g_43);
            }
          else
            {
              t = f_43;
              {
                ATerm h_43 = t;
                int i_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(i_43);
                  }
                else
                  {
                    t = h_43;
                    {
                      ATerm j_43 = t;
                      int k_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_15, v_15, w_15, t);
                          LocalPopChoice(k_43);
                        }
                      else
                        {
                          t = j_43;
                          {
                            ATerm l_43 = t;
                            int m_43 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(m_43);
                              }
                            else
                              {
                                t = l_43;
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
    ATerm k_96 = NULL,l_96 = NULL,m_96 = NULL;
    l_96 = t;
    {
      ATerm p_43 = t;
      int q_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm y_15 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_96 != NULL) && (k_96 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_96 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_15, t);
          LocalPopChoice(q_43);
        }
      else
        {
          t = p_43;
          t = term_u_43;
          k_96 = t;
        }
    }
    t = not_null(k_96);
    t = ReadFromFile_0_0(t);
    m_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_96, m_96);
    t = apply_strategy_1_0(l_123, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(j_15, n_123, m_15, t_15, t);
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm n_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL,r_96 = NULL,c_36 = NULL;
  r_96 = t;
  if(match_cons(t, sym__2))
    {
      o_96 = ATgetArgument(t, 0);
      p_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_96);
  n_96 = t;
  t = p_96;
  t = mark_bound_unbound_vars_0_0(t);
  q_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_96, q_96);
  c_36 = t;
  t = SSLsetAnnotations(c_36, n_96);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(z_15, _fail, default_usage_0_0, t);
  return(t);
}
