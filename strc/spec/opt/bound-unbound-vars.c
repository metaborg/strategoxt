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
ATerm term_p_43;
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
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_d_38;
ATerm term_a_38;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_l_34;
ATerm term_f_34;
ATerm term_d_34;
ATerm term_b_34;
ATerm term_b_20;
ATerm term_o_19;
ATerm term_j_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_e_16;
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
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_k_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Defined_2, term_g_19, term_h_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Defined_2, term_d_34, term_f_34);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
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
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym__2, term_k_16, term_a_39);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_39);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym__2, term_f_39, term_a_16);
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
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm f_138 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm t_103 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm s_103 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm r_103 (ATerm), ATerm t);
static ATerm p_7 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm f_106 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm q_7 (ATerm n_25, ATerm o_25, ATerm p_25, ATerm t);
static ATerm n_3 (ATerm t);
static ATerm r_7 (ATerm h_25, ATerm l_25, ATerm j_25, ATerm t);
static ATerm x_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_7 (ATerm b_25, ATerm f_25, ATerm d_25, ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm t_7 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm d_24, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm u_7 (ATerm k_22, ATerm l_22, ATerm j_22, ATerm t);
static ATerm o_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm v_7 (ATerm i_28, ATerm h_28, ATerm t);
static ATerm w_7 (ATerm e_32, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm x_22, ATerm t);
ATerm tboundin_3_0 (ATerm c_139 (ATerm), ATerm d_139 (ATerm), ATerm e_139 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm l_139 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm n_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm z_7 (ATerm f_118 (ATerm), ATerm y_53, ATerm x_53, ATerm t);
ATerm foldr_3_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm t);
static ATerm a_8 (ATerm i_118 (ATerm), ATerm j_118 (ATerm), ATerm c_54, ATerm b_54, ATerm t);
static ATerm b_8 (ATerm a_118 (ATerm), ATerm w_53, ATerm v_53, ATerm t);
ATerm at_end_1_0 (ATerm l_114 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_65 (ATerm q_64, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm g_8 (ATerm p_784, ATerm u_784, ATerm i_78, ATerm t);
ATerm while_not_2_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t);
ATerm for_3_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm b_69 (ATerm p_67, ATerm r_67, ATerm s_67, ATerm t);
static ATerm h_11 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
ATerm free_vars_3_0 (ATerm e_136 (ATerm), ATerm f_136 (ATerm), ATerm g_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm a_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm h_12 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm i_8 (ATerm d_104 (ATerm), ATerm b_26, ATerm z_25, ATerm t);
static ATerm j_12 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm j_8 (ATerm k_27, ATerm l_27, ATerm t);
ATerm end_scope_1_0 (ATerm a_104 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_103 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm k_8 (ATerm s_27, ATerm t_27, ATerm u_27, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm n_8 (ATerm q_27, ATerm r_27, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm p_8 (ATerm g_39, ATerm h_39, ATerm t);
static ATerm q_8 (ATerm x_44, ATerm y_44, ATerm t);
static ATerm s_8 (ATerm q_112 (ATerm), ATerm n_389, ATerm d_45, ATerm t);
static ATerm r_8 (ATerm t_44, ATerm u_44, ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm w_129 (ATerm), ATerm t);
static ATerm q_82 (ATerm k_82, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_8 (ATerm z_44, ATerm t);
static ATerm u_8 (ATerm k_37, ATerm l_37, ATerm t);
static ATerm v_8 (ATerm i_39, ATerm j_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_84 (ATerm a_83, ATerm t);
static ATerm c_84 (ATerm e_83, ATerm f_83, ATerm g_83, ATerm t);
static ATerm d_84 (ATerm o_83, ATerm p_83, ATerm q_83, ATerm t);
static ATerm w_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_114 (ATerm), ATerm t);
static ATerm b_9 (ATerm y_28, ATerm z_28, ATerm t);
ATerm if_verbose2_1_0 (ATerm d_138 (ATerm), ATerm t);
static ATerm z_12 (ATerm t);
static ATerm e_13 (ATerm t);
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
static ATerm e_9 (ATerm u_74, ATerm v_74, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm u_13 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_9 (ATerm f_27, ATerm g_27, ATerm e_27, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_8 (ATerm d_46, ATerm e_46, ATerm t);
ATerm foldr_2_0 (ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm b_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_138 (ATerm), ATerm t);
static ATerm c_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm e_14 (ATerm t);
ATerm need_help_1_0 (ATerm u_130 (ATerm), ATerm t);
static ATerm f_9 (ATerm x_31, ATerm y_31, ATerm z_31, ATerm t);
static ATerm g_9 (ATerm a_32, ATerm b_32, ATerm t);
ATerm lookup_table_0_1 (ATerm r_28, ATerm t);
ATerm new_hashtable_0_2 (ATerm f_32, ATerm g_32, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_8 (ATerm c_32, ATerm d_32, ATerm t);
static ATerm a_9 (ATerm h_32, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm u_113 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm s_14 (ATerm t);
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
ATerm Cons_2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_133 (ATerm), ATerm t);
static ATerm b_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm parse_options_1_0 (ATerm t_133 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_130 (ATerm), ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm z_130 (ATerm), ATerm t);
static ATerm m_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
ATerm iowrap_3_0 (ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm t);
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
  ATerm a_0 = NULL,c_0 = NULL,i_0 = NULL,u_0 = NULL,v_0 = NULL;
  a_0 = t;
  t = term_a_16;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_b_16;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_16), c_0), term_c_16);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_e_16;
  i_0 = t;
  t = SSL_exit(i_0);
  t = a_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_138 (ATerm), ATerm t)
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
        t = b_9(a_1, b_1, t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_n_16);
        t = geq_0_0(t);
        t = x_0;
        t = f_138(t);
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
ATerm mark_guardedlchoice_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,t_6 = NULL;
  static ATerm k_0 (ATerm t);
  static ATerm m_0 (ATerm t);
  static ATerm k_0 (ATerm t)
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
    t = t_103(t);
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
    t = t_103(t);
    q_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_1, q_1, m_1);
    v_6 = t;
    t = SSLsetAnnotations(v_6, j_1);
    return(t);
  }
  static ATerm m_0 (ATerm t)
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
    t = t_103(t);
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
  t = abstract_choice_2_0(k_0, m_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,o_7 = NULL;
  static ATerm n_0 (ATerm t);
  static ATerm r_0 (ATerm t);
  static ATerm n_0 (ATerm t)
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
    t = s_103(t);
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
    t = s_103(t);
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
  t = abstract_choice_2_0(n_0, r_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,y_2 = NULL,b_3 = NULL,d_3 = NULL,f_3 = NULL,j_3 = NULL;
  f_3 = t;
  t = save_MarkVar_0_0(t);
  v_2 = t;
  t = f_3;
  t = u_103(t);
  d_3 = t;
  t = save_MarkVar_0_0(t);
  y_2 = t;
  t = term_o_16;
  t = table_destroy_0_0(t);
  t = term_o_16;
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, v_2);
  t = v_7(j_3, v_2, t);
  t = d_3;
  t = v_103(t);
  b_3 = t;
  t = y_2;
  t = isect_MarkVar_0_0(t);
  t = b_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm r_103 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,f_8 = NULL;
  static ATerm y_0 (ATerm t);
  static ATerm c_1 (ATerm t);
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
    t = r_103(t);
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
    t = r_103(t);
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
ATerm alltd_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t);
  static ATerm n_6 (ATerm t)
  {
    ATerm p_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_106(t);
        LocalPopChoice(r_16);
      }
    else
      {
        t = p_16;
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
  t = term_o_16;
  return(t);
}
static ATerm q_7 (ATerm n_25, ATerm o_25, ATerm p_25, ATerm t)
{
  ATerm z_10 = NULL;
  static ATerm i_3 (ATerm t);
  static ATerm i_3 (ATerm t)
  {
    t = o_25;
    t = map_1_0(IntroduceBound_0_0, t);
    t = p_25;
    t = mark_build_vars_0_0(t);
    if(((z_10 != NULL) && (z_10 != t)))
      _fail(t);
    else
      z_10 = t;
    return(t);
  }
  t = scope_2_0(g_3, i_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, n_25, o_25, not_null(z_10));
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_o_16;
  return(t);
}
static ATerm r_7 (ATerm h_25, ATerm l_25, ATerm j_25, ATerm t)
{
  ATerm b_11 = NULL,g_11 = NULL,i_11 = NULL;
  static ATerm s_3 (ATerm t);
  static ATerm s_3 (ATerm t)
  {
    t = h_25;
    t = mark_match_vars_0_0(t);
    if(((b_11 != NULL) && (b_11 != t)))
      _fail(t);
    else
      b_11 = t;
    t = j_25;
    t = mark_buv_0_0(t);
    if(((g_11 != NULL) && (g_11 != t)))
      _fail(t);
    else
      g_11 = t;
    t = l_25;
    t = mark_build_vars_0_0(t);
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    return(t);
  }
  t = scope_2_0(n_3, s_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_11), not_null(i_11), not_null(g_11)));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_o_16;
  return(t);
}
static ATerm d_4 (ATerm t)
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
static ATerm e_4 (ATerm t)
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
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_16);
          }
        else
          {
            t = u_16;
            {
              ATerm y_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_11 = NULL,b_12 = NULL,c_12 = NULL,g_12 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_11 = ATgetArgument(t, 0);
                      b_12 = ATgetArgument(t, 1);
                      c_12 = ATgetArgument(t, 2);
                      g_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_12;
                  t = map_1_0(f_4, t);
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = y_16;
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
                        t = dynrule_targs_1_0(p_4, t);
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
static ATerm p_4 (ATerm t)
{
  t = map_1_0(q_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm y_12 = NULL;
  ATerm f_17 = t;
  int h_17 = stack_ptr;
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
      LocalPopChoice(h_17);
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
static ATerm s_7 (ATerm b_25, ATerm f_25, ATerm d_25, ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
  static ATerm c_4 (ATerm t);
  static ATerm c_4 (ATerm t)
  {
    t = b_25;
    t = free_vars_3_0(d_4, e_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = b_25;
    t = mark_match_vars_0_0(t);
    if(((r_11 != NULL) && (r_11 != t)))
      _fail(t);
    else
      r_11 = t;
    t = d_25;
    t = mark_buv_0_0(t);
    if(((s_11 != NULL) && (s_11 != t)))
      _fail(t);
    else
      s_11 = t;
    t = f_25;
    t = mark_build_vars_0_0(t);
    if(((t_11 != NULL) && (t_11 != t)))
      _fail(t);
    else
      t_11 = t;
    return(t);
  }
  t = scope_2_0(x_3, c_4, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_11), not_null(t_11), not_null(s_11)));
  return(t);
}
static ATerm s_4 (ATerm t)
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
static ATerm t_4 (ATerm t)
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
                  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_15 = ATgetArgument(t, 0);
                      q_15 = ATgetArgument(t, 1);
                      r_15 = ATgetArgument(t, 2);
                      s_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_15;
                  t = map_1_0(v_4, t);
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
                        t = dynrule_targs_1_0(w_4, t);
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
  ATerm g_16 = NULL;
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_16 = ATgetArgument(t, 0);
          {
            ATerm b_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_17);
      t = g_16;
    }
  else
    {
      t = y_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_16;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = map_1_0(x_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm q_16 = NULL;
  ATerm d_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_16 = ATgetArgument(t, 0);
          {
            ATerm g_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_18);
      t = q_16;
    }
  else
    {
      t = d_18;
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
static ATerm y_4 (ATerm t)
{
  t = term_o_16;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm e_18 = NULL;
  ATerm h_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_18 = ATgetArgument(t, 0);
          {
            ATerm k_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_18);
      t = e_18;
    }
  else
    {
      t = h_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_18;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm i_18 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_18);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
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
              int w_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_18 = ATgetArgument(t, 0);
                      p_18 = ATgetArgument(t, 1);
                      q_18 = ATgetArgument(t, 2);
                      r_18 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_18;
                  t = map_1_0(j_5, t);
                  LocalPopChoice(w_18);
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
static ATerm j_5 (ATerm t)
{
  ATerm d_19 = NULL;
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_19 = ATgetArgument(t, 0);
          {
            ATerm b_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_19);
      t = d_19;
    }
  else
    {
      t = z_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_19;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = map_1_0(w_5, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm m_19 = NULL;
  ATerm c_19 = t;
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
      t = c_19;
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
static ATerm x_5 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,f_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      h_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
      j_14 = ATgetArgument(t, 2);
      {
        ATerm z_14 = NULL,g_15 = NULL,i_15 = NULL,k_15 = NULL;
        t = j_14;
        if(match_cons(t, sym_Rule_3))
          {
            z_13 = ATgetArgument(t, 0);
            a_14 = ATgetArgument(t, 1);
            f_14 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = j_14;
        t = free_vars_3_0(s_4, t_4, tboundin_3_0, t);
        z_14 = t;
        {
          static ATerm z_4 (ATerm t);
          static ATerm z_4 (ATerm t)
          {
            t = z_14;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = z_13;
            t = mark_match_vars_0_0(t);
            if(((g_15 != NULL) && (g_15 != t)))
              _fail(t);
            else
              g_15 = t;
            t = f_14;
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
          t = scope_2_0(y_4, z_4, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, h_14, i_14, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_15), not_null(k_15), not_null(i_15)));
      }
    }
  else
    {
      ATerm k_17 = NULL,l_17 = NULL,o_17 = NULL,u_17 = NULL,w_17 = NULL,x_17 = NULL;
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
      t = map_1_0(a_5, t);
      k_17 = t;
      t = k_14;
      t = free_vars_3_0(c_5, f_5, tboundin_3_0, t);
      x_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_17, k_17);
      t = diff_0_0(t);
      l_17 = t;
      {
        static ATerm z_5 (ATerm t);
        static ATerm z_5 (ATerm t)
        {
          t = k_17;
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
        t = scope_2_0(x_5, z_5, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, h_14, i_14, j_14, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_17), not_null(w_17), not_null(u_17)));
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_19);
  s_19 = t;
  t = term_j_19;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_19), term_j_19);
  t = i_8(b_6, s_19, t_19, t);
  t = r_19;
  return(t);
}
static ATerm c_6 (ATerm t)
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
static ATerm d_6 (ATerm t)
{
  t = term_o_16;
  return(t);
}
static ATerm t_7 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm d_24, ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL;
  t = b_24;
  t = map_1_0(c_6, t);
  y_19 = t;
  {
    static ATerm l_6 (ATerm t);
    static ATerm l_6 (ATerm t)
    {
      t = y_19;
      t = map_1_0(IntroduceBound_0_0, t);
      t = d_24;
      t = mark_buv_0_0(t);
      if(((z_19 != NULL) && (z_19 != t)))
        _fail(t);
      else
        z_19 = t;
      return(t);
    }
    t = scope_2_0(d_6, l_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_23, a_24, b_24, not_null(z_19));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,o_21 = NULL,p_21 = NULL,v_21 = NULL;
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
      ATerm p_19 = t;
      int q_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm v_19 = ATgetArgument(t, 0);
              v_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(q_19);
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
                  o_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm w_19 = t;
                int x_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, o_21, v_21);
                    {
                      ATerm a_20 = t;
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
                          t = a_20;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, k_21, term_b_20);
                    LocalPopChoice(x_19);
                  }
                else
                  {
                    t = w_19;
                    t = v_21;
                    if((o_21 != t))
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
          t = p_19;
          t = j_21;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_o_19;
        }
    }
  return(t);
}
static ATerm u_7 (ATerm k_22, ATerm l_22, ATerm j_22, ATerm t)
{
  ATerm z_21 = NULL,c_22 = NULL,d_22 = NULL;
  t = term_o_16;
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, k_22);
  t = b_9(d_22, k_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_21 = ATgetFirst((ATermList) t);
      {
        ATerm c_20 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_22, z_21);
  t = CompareEntries_0_0(t);
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_22, (ATerm) ATinsert(CheckATermList(j_22), c_22));
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm j_23 = NULL,n_23 = NULL,o_23 = NULL,f_26 = NULL,j_26 = NULL;
  j_26 = t;
  if(match_cons(t, sym__2))
    {
      j_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
      t = n_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_23 = ATgetFirst((ATermList) t);
          f_26 = (ATerm) ATgetNext((ATermList) t);
          t = o_23;
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
                t = j_23;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = j_26;
                  }
                else
                  {
                    ATerm i_20 = t;
                    int k_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_26;
                        t = u_7(j_23, o_23, f_26, t);
                        LocalPopChoice(k_20);
                      }
                    else
                      {
                        t = i_20;
                        t = j_26;
                      }
                  }
              }
            else
              {
                t = d_20;
                t = j_23;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = j_26;
                  }
                else
                  {
                    t = j_26;
                  }
              }
          }
        }
      else
        {
          t = j_23;
          if(match_cons(t, sym_Scopes_0))
            {
              t = j_26;
            }
          else
            {
              t = j_26;
            }
        }
    }
  else
    {
      t = j_26;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm e_23 = NULL,i_23 = NULL;
  t = map_1_0(o_6, t);
  e_23 = t;
  t = term_o_16;
  t = table_destroy_0_0(t);
  t = term_o_16;
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, e_23);
  t = v_7(i_23, e_23, t);
  t = e_23;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm a_28 = NULL,e_28 = NULL,m_28 = NULL;
  m_28 = t;
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
        t = m_28;
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
              t = m_28;
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
                    t = m_28;
                  }
                else
                  {
                    t = s_20;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm w_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = m_28;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  a_28 = t;
  t = m_28;
  t = SRTS_one(mark_buv_0_0, t);
  e_28 = t;
  t = a_28;
  t = isect_MarkVar_0_0(t);
  t = e_28;
  return(t);
}
static ATerm v_7 (ATerm i_28, ATerm h_28, ATerm t)
{
  static ATerm r_6 (ATerm t);
  static ATerm r_6 (ATerm t)
  {
    ATerm v_28 = NULL,d_29 = NULL,f_29 = NULL;
    if(match_cons(t, sym__2))
      {
        v_28 = ATgetArgument(t, 0);
        d_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_28, v_28, d_29);
    t = lookup_table_0_1(i_28, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        f_29 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = f_9(v_28, d_29, f_29, t);
    t = (ATerm) ATmakeAppl(sym__3, i_28, v_28, d_29);
    return(t);
  }
  t = h_28;
  t = map_1_0(r_6, t);
  return(t);
}
static ATerm w_7 (ATerm e_32, ATerm t)
{
  t = SSL_hashtable_keys(e_32);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL;
  static ATerm s_6 (ATerm t);
  static ATerm s_6 (ATerm t)
  {
    ATerm k_29 = NULL,l_29 = NULL;
    k_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), k_29);
    t = b_9(not_null(i_29), k_29, t);
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
  t = w_7(j_29, t);
  t = map_1_0(s_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_o_16;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm x_22, ATerm t)
{
  ATerm q_29 = NULL,x_29 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm w_6 (ATerm t);
    static ATerm w_6 (ATerm t)
    {
      static ATerm d_31 (ATerm f_30, ATerm t);
      static ATerm d_31 (ATerm f_30, ATerm t)
      {
        ATerm j_30 = NULL,l_30 = NULL,s_30 = NULL,t_30 = NULL;
        t = f_30;
        if(match_cons(t, sym__2))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            j_30 = x_20;
            if(match_cons(x_20, sym_Var_1))
              {
                l_30 = ATgetArgument(x_20, 0);
              }
            else
              _fail(t);
            {
              ATerm f_21 = ATgetArgument(t, 1);
              if(((ATgetType(f_21) == AT_LIST) && !(ATisEmpty(f_21))))
                {
                  ATerm g_21 = ATgetFirst((ATermList) f_21);
                  if(match_cons(g_21, sym_Defined_2))
                    {
                      s_30 = ATgetArgument(g_21, 0);
                      {
                        ATerm l_21 = ATgetArgument(g_21, 1);
                        if((ATgetSymbol((ATermAppl) l_21) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t_30 = (ATerm) ATgetNext((ATermList) f_21);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_22;
        {
          static ATerm y_6 (ATerm t);
          static ATerm y_6 (ATerm t)
          {
            if((l_30 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(y_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, j_30, (ATerm) ATinsert(CheckATermList(t_30), (ATerm) ATmakeAppl(sym_Defined_2, s_30, term_b_20)));
        return(t);
      }
      ATerm v_30 = NULL,x_30 = NULL;
      x_30 = t;
      {
        ATerm m_21 = t;
        int u_21 = stack_ptr;
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
            LocalPopChoice(u_21);
            t = v_30;
            if(match_cons(t, sym_Scopes_0))
              {
                t = x_30;
              }
            else
              {
                ATerm x_21 = t;
                int f_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = d_31(x_30, t);
                    LocalPopChoice(f_22);
                  }
                else
                  {
                    t = x_21;
                    t = x_30;
                  }
              }
          }
        else
          {
            t = m_21;
            {
              ATerm r_22 = t;
              int s_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_31(x_30, t);
                  LocalPopChoice(s_22);
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
    t = map_1_0(w_6, t);
  }
  q_29 = t;
  t = term_o_16;
  t = table_destroy_0_0(t);
  t = term_o_16;
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, q_29);
  t = v_7(x_29, q_29, t);
  t = q_29;
  return(t);
}
ATerm tboundin_3_0 (ATerm c_139 (ATerm), ATerm d_139 (ATerm), ATerm e_139 (ATerm), ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
  u_42 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_42 = ATgetArgument(t, 0);
      t_42 = ATgetArgument(t, 1);
      {
        ATerm e_6 = NULL,p_6 = NULL,q_6 = NULL,z_20 = NULL;
        t = SSLgetAnnotations(u_42);
        e_6 = t;
        t = v_42;
        t = e_139(t);
        p_6 = t;
        t = t_42;
        t = c_139(t);
        q_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_6, q_6);
        z_20 = t;
        t = SSLsetAnnotations(z_20, e_6);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          v_42 = ATgetArgument(t, 0);
          {
            ATerm b_7 = NULL,d_7 = NULL,g_7 = NULL,h_7 = NULL,j_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,d_9 = NULL,b_21 = NULL,a_21 = NULL;
            t = SSLgetAnnotations(u_42);
            b_7 = t;
            t = v_42;
            if(match_cons(t, sym_Rule_3))
              {
                g_7 = ATgetArgument(t, 0);
                h_7 = ATgetArgument(t, 1);
                j_7 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_42);
            d_7 = t;
            t = g_7;
            t = c_139(t);
            l_7 = t;
            t = h_7;
            t = c_139(t);
            m_7 = t;
            t = j_7;
            t = c_139(t);
            n_7 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, l_7, m_7, n_7);
            a_21 = t;
            t = SSLsetAnnotations(a_21, d_7);
            d_9 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, d_9);
            b_21 = t;
            t = SSLsetAnnotations(b_21, b_7);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              v_42 = ATgetArgument(t, 0);
              t_42 = ATgetArgument(t, 1);
              r_42 = ATgetArgument(t, 2);
              {
                ATerm s_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,c_21 = NULL;
                t = SSLgetAnnotations(u_42);
                s_9 = t;
                t = v_42;
                t = e_139(t);
                y_9 = t;
                t = t_42;
                t = e_139(t);
                z_9 = t;
                t = r_42;
                t = e_139(t);
                a_10 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, y_9, z_9, a_10);
                c_21 = t;
                t = SSLsetAnnotations(c_21, s_9);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  v_42 = ATgetArgument(t, 0);
                  t_42 = ATgetArgument(t, 1);
                  r_42 = ATgetArgument(t, 2);
                  s_42 = ATgetArgument(t, 3);
                  {
                    ATerm e_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,d_21 = NULL;
                    t = SSLgetAnnotations(u_42);
                    e_11 = t;
                    t = v_42;
                    t = e_139(t);
                    l_11 = t;
                    t = t_42;
                    t = e_139(t);
                    m_11 = t;
                    t = r_42;
                    t = e_139(t);
                    n_11 = t;
                    t = s_42;
                    t = c_139(t);
                    o_11 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_11, m_11, n_11, o_11);
                    d_21 = t;
                    t = SSLsetAnnotations(d_21, e_11);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_42 = ATgetArgument(t, 0);
                      t_42 = ATgetArgument(t, 1);
                      r_42 = ATgetArgument(t, 2);
                      s_42 = ATgetArgument(t, 3);
                      {
                        ATerm l_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_21 = NULL;
                        t = SSLgetAnnotations(u_42);
                        l_12 = t;
                        t = v_42;
                        t = e_139(t);
                        a_13 = t;
                        t = t_42;
                        t = e_139(t);
                        b_13 = t;
                        t = r_42;
                        t = e_139(t);
                        c_13 = t;
                        t = s_42;
                        t = c_139(t);
                        d_13 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, a_13, b_13, c_13, d_13);
                        e_21 = t;
                        t = SSLsetAnnotations(e_21, l_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          v_42 = ATgetArgument(t, 0);
                          t_42 = ATgetArgument(t, 1);
                          {
                            ATerm p_13 = NULL,s_13 = NULL,t_13 = NULL,h_21 = NULL;
                            t = SSLgetAnnotations(u_42);
                            p_13 = t;
                            t = v_42;
                            t = e_139(t);
                            s_13 = t;
                            t = t_42;
                            t = c_139(t);
                            t_13 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, s_13, t_13);
                            h_21 = t;
                            t = SSLsetAnnotations(h_21, p_13);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              v_42 = ATgetArgument(t, 0);
                              t_42 = ATgetArgument(t, 1);
                              {
                                ATerm d_14 = NULL,q_14 = NULL,r_14 = NULL,r_21 = NULL;
                                t = SSLgetAnnotations(u_42);
                                d_14 = t;
                                t = v_42;
                                t = e_139(t);
                                q_14 = t;
                                t = t_42;
                                t = c_139(t);
                                r_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, q_14, r_14);
                                r_21 = t;
                                t = SSLsetAnnotations(r_21, d_14);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  v_42 = ATgetArgument(t, 0);
                                  t_42 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_15 = NULL,n_15 = NULL,o_15 = NULL,s_21 = NULL;
                                    t = SSLgetAnnotations(u_42);
                                    c_15 = t;
                                    t = v_42;
                                    t = e_139(t);
                                    n_15 = t;
                                    t = t_42;
                                    t = c_139(t);
                                    o_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, n_15, o_15);
                                    s_21 = t;
                                    t = SSLsetAnnotations(s_21, c_15);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      v_42 = ATgetArgument(t, 0);
                                      {
                                        ATerm f_16 = NULL,m_16 = NULL,t_21 = NULL;
                                        t = SSLgetAnnotations(u_42);
                                        f_16 = t;
                                        t = v_42;
                                        t = c_139(t);
                                        m_16 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, m_16);
                                        t_21 = t;
                                        t = SSLsetAnnotations(t_21, f_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          v_42 = ATgetArgument(t, 0);
                                          {
                                            ATerm v_16 = NULL,x_16 = NULL,y_21 = NULL;
                                            t = SSLgetAnnotations(u_42);
                                            v_16 = t;
                                            t = v_42;
                                            t = c_139(t);
                                            x_16 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, x_16);
                                            y_21 = t;
                                            t = SSLsetAnnotations(y_21, v_16);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              v_42 = ATgetArgument(t, 0);
                                              {
                                                ATerm g_17 = NULL,j_17 = NULL,i_22 = NULL;
                                                t = SSLgetAnnotations(u_42);
                                                g_17 = t;
                                                t = v_42;
                                                t = c_139(t);
                                                j_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, j_17);
                                                i_22 = t;
                                                t = SSLsetAnnotations(i_22, g_17);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  v_42 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm a_18 = NULL,c_18 = NULL,m_22 = NULL;
                                                    t = SSLgetAnnotations(u_42);
                                                    a_18 = t;
                                                    t = v_42;
                                                    t = c_139(t);
                                                    c_18 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, c_18);
                                                    m_22 = t;
                                                    t = SSLsetAnnotations(m_22, a_18);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm n_18 = NULL,v_18 = NULL,n_22 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      v_42 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(u_42);
                                                  n_18 = t;
                                                  t = v_42;
                                                  t = c_139(t);
                                                  v_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, v_18);
                                                  n_22 = t;
                                                  t = SSLsetAnnotations(n_22, n_18);
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
ATerm dynrule_targs_1_0 (ATerm l_139 (ATerm), ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,n_44 = NULL;
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          b_44 = ATgetArgument(t, 0);
          {
            ATerm v_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_22);
      t = b_44;
      if(match_cons(t, sym_DynRuleId_1))
        {
          c_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_44;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm w_22 = ATgetArgument(t, 0);
          ATerm y_22 = ATgetArgument(t, 1);
          n_44 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_44;
    }
  else
    {
      t = t_22;
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                b_44 = ATgetArgument(t, 0);
                {
                  ATerm b_23 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_23);
            t = b_44;
            if(match_cons(t, sym_DynRuleId_1))
              {
                c_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = c_44;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm c_23 = ATgetArgument(t, 0);
                ATerm d_23 = ATgetArgument(t, 1);
                n_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = n_44;
          }
        else
          {
            t = z_22;
            if(match_cons(t, sym_AddDynRule_2))
              {
                b_44 = ATgetArgument(t, 0);
                {
                  ATerm f_23 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = b_44;
            if(match_cons(t, sym_DynRuleId_1))
              {
                c_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = c_44;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm l_23 = ATgetArgument(t, 0);
                ATerm m_23 = ATgetArgument(t, 1);
                n_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = n_44;
          }
      }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm p_46 = NULL;
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_46 = ATgetArgument(t, 0);
          {
            ATerm s_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_23);
      t = p_46;
    }
  else
    {
      t = p_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_46;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm c_47 = NULL;
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_47 = ATgetArgument(t, 0);
          {
            ATerm v_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_23);
      t = c_47;
    }
  else
    {
      t = t_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_47;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm b_46 = NULL;
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm f_24 = ATgetArgument(t, 0);
          ATerm g_24 = ATgetArgument(t, 1);
          b_46 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(x_23);
      t = b_46;
      t = map_1_0(z_6, t);
    }
  else
    {
      t = w_23;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm h_24 = ATgetArgument(t, 0);
          ATerm i_24 = ATgetArgument(t, 1);
          b_46 = ATgetArgument(t, 2);
          {
            ATerm k_24 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = b_46;
      t = map_1_0(a_7, t);
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm c_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_49);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            {
              ATerm s_24 = t;
              int t_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_49 = NULL,j_49 = NULL,k_49 = NULL,n_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_49 = ATgetArgument(t, 0);
                      j_49 = ATgetArgument(t, 1);
                      k_49 = ATgetArgument(t, 2);
                      n_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_49;
                  t = map_1_0(f_7, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(v_24);
                      }
                    else
                      {
                        t = u_24;
                        t = dynrule_targs_1_0(i_7, t);
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
  ATerm x_49 = NULL;
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_49 = ATgetArgument(t, 0);
          {
            ATerm z_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_24);
      t = x_49;
    }
  else
    {
      t = x_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_49;
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = map_1_0(k_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm f_50 = NULL;
  ATerm c_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_50 = ATgetArgument(t, 0);
          {
            ATerm i_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_25);
      t = f_50;
    }
  else
    {
      t = c_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_50;
    }
  return(t);
}
static ATerm c_8 (ATerm t)
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
  ATerm k_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_25);
    }
  else
    {
      t = k_25;
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
                  ATerm x_50 = NULL,y_50 = NULL,a_51 = NULL,b_51 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_50 = ATgetArgument(t, 0);
                      y_50 = ATgetArgument(t, 1);
                      a_51 = ATgetArgument(t, 2);
                      b_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_51;
                  t = map_1_0(e_8, t);
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
  ATerm y_25 = t;
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
      t = y_25;
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
  t = map_1_0(o_8, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm r_51 = NULL;
  ATerm e_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_51 = ATgetArgument(t, 0);
          {
            ATerm o_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_26);
      t = r_51;
    }
  else
    {
      t = e_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_51;
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm f_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_52);
  return(t);
}
static ATerm h_9 (ATerm t)
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
              ATerm t_26 = t;
              int u_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_52 = ATgetArgument(t, 0);
                      i_52 = ATgetArgument(t, 1);
                      j_52 = ATgetArgument(t, 2);
                      k_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_52;
                  t = map_1_0(i_9, t);
                  LocalPopChoice(u_26);
                }
              else
                {
                  t = t_26;
                  {
                    ATerm v_26 = t;
                    int w_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_26);
                      }
                    else
                      {
                        t = v_26;
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
  ATerm z_52 = NULL;
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_52 = ATgetArgument(t, 0);
          {
            ATerm z_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_26);
      t = z_52;
    }
  else
    {
      t = x_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_52;
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
  ATerm h_53 = NULL;
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_53 = ATgetArgument(t, 0);
          {
            ATerm d_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_27);
      t = h_53;
    }
  else
    {
      t = a_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_53;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm n_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_53);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      {
        ATerm x_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_27);
          }
        else
          {
            t = x_27;
            {
              ATerm b_28 = t;
              int c_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_53 = ATgetArgument(t, 0);
                      r_53 = ATgetArgument(t, 1);
                      s_53 = ATgetArgument(t, 2);
                      t_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_53;
                  t = map_1_0(p_9, t);
                  LocalPopChoice(c_28);
                }
              else
                {
                  t = b_28;
                  {
                    ATerm d_28 = t;
                    int f_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_28);
                      }
                    else
                      {
                        t = d_28;
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
  ATerm p_54 = NULL;
  ATerm g_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_54 = ATgetArgument(t, 0);
          {
            ATerm k_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_28);
      t = p_54;
    }
  else
    {
      t = g_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_54;
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
  ATerm w_54 = NULL;
  ATerm l_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_54 = ATgetArgument(t, 0);
          {
            ATerm o_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_28);
      t = w_54;
    }
  else
    {
      t = l_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_54;
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm d_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_55);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm q_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_28);
    }
  else
    {
      t = q_28;
      {
        ATerm u_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_28);
          }
        else
          {
            t = u_28;
            {
              ATerm x_28 = t;
              int b_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,t_55 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_55 = ATgetArgument(t, 0);
                      n_55 = ATgetArgument(t, 1);
                      o_55 = ATgetArgument(t, 2);
                      t_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_55;
                  t = map_1_0(w_9, t);
                  LocalPopChoice(b_29);
                }
              else
                {
                  t = x_28;
                  {
                    ATerm c_29 = t;
                    int g_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(g_29);
                      }
                    else
                      {
                        t = c_29;
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
static ATerm w_9 (ATerm t)
{
  ATerm m_56 = NULL;
  ATerm h_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_56 = ATgetArgument(t, 0);
          {
            ATerm n_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_29);
      t = m_56;
    }
  else
    {
      t = h_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_56;
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
  ATerm v_56 = NULL;
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_56 = ATgetArgument(t, 0);
          {
            ATerm r_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_29);
      t = v_56;
    }
  else
    {
      t = o_29;
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
ATerm Bind4_0_0 (ATerm t)
{
  ATerm a_49 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      a_49 = ATgetArgument(t, 0);
      t = a_49;
      t = free_vars_3_0(c_7, e_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          a_49 = ATgetArgument(t, 0);
          t = a_49;
          t = free_vars_3_0(c_8, d_8, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              a_49 = ATgetArgument(t, 0);
              t = a_49;
              t = free_vars_3_0(y_8, h_9, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  a_49 = ATgetArgument(t, 0);
                  t = a_49;
                  t = free_vars_3_0(n_9, o_9, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      a_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_49;
                  t = free_vars_3_0(u_9, v_9, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm c_58 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_58);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm s_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = s_29;
      {
        ATerm v_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_29);
          }
        else
          {
            t = v_29;
            {
              ATerm z_29 = t;
              int a_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_58 = NULL,h_58 = NULL,k_58 = NULL,l_58 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_58 = ATgetArgument(t, 0);
                      h_58 = ATgetArgument(t, 1);
                      k_58 = ATgetArgument(t, 2);
                      l_58 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_58;
                  t = map_1_0(g_10, t);
                  LocalPopChoice(a_30);
                }
              else
                {
                  t = z_29;
                  {
                    ATerm b_30 = t;
                    int e_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_30);
                      }
                    else
                      {
                        t = b_30;
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
  ATerm y_58 = NULL;
  ATerm g_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_58 = ATgetArgument(t, 0);
          {
            ATerm m_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_30);
      t = y_58;
    }
  else
    {
      t = g_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_58;
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
  ATerm d_59 = NULL;
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_59 = ATgetArgument(t, 0);
          {
            ATerm p_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_30);
      t = d_59;
    }
  else
    {
      t = n_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_59;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm n_57 = NULL,u_57 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_57 = ATgetArgument(t, 0);
      t = u_57;
      if(match_cons(t, sym_Rule_3))
        {
          n_57 = ATgetArgument(t, 0);
          {
            ATerm q_30 = ATgetArgument(t, 1);
          }
          {
            ATerm r_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = n_57;
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
static ATerm z_7 (ATerm f_118 (ATerm), ATerm y_53, ATerm x_53, ATerm t)
{
  static ATerm n_60 (ATerm t);
  static ATerm n_60 (ATerm t)
  {
    ATerm y_59 = NULL,c_60 = NULL,d_60 = NULL;
    y_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_53;
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
              t = y_59;
              {
                static ATerm o_10 (ATerm t);
                static ATerm o_10 (ATerm t)
                {
                  t = x_53;
                  return(t);
                }
                t = a_8(f_118, o_10, c_60, d_60, t);
              }
              t = n_60(t);
              LocalPopChoice(y_30);
            }
          else
            {
              t = w_30;
              {
                ATerm i_19 = NULL,u_19 = NULL,x_32 = NULL;
                t = SSLgetAnnotations(y_59);
                i_19 = t;
                t = d_60;
                t = n_60(t);
                u_19 = t;
                t = (ATerm) ATinsert(CheckATermList(u_19), c_60);
                x_32 = t;
                t = SSLsetAnnotations(x_32, i_19);
              }
            }
        }
      }
    return(t);
  }
  t = y_53;
  t = n_60(t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm t)
{
  ATerm s_60 = NULL,u_60 = NULL,z_60 = NULL;
  s_60 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_60;
      t = k_121(t);
    }
  else
    {
      ATerm c_61 = NULL,d_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_60 = ATgetFirst((ATermList) t);
          z_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_60;
      t = m_121(t);
      c_61 = t;
      t = z_60;
      t = foldr_3_0(k_121, l_121, m_121, t);
      d_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_61, d_61);
      t = l_121(t);
    }
  return(t);
}
static ATerm a_8 (ATerm i_118 (ATerm), ATerm j_118 (ATerm), ATerm c_54, ATerm b_54, ATerm t)
{
  t = j_118(t);
  {
    static ATerm r_10 (ATerm t);
    static ATerm r_10 (ATerm t)
    {
      ATerm g_61 = NULL;
      g_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_54, g_61);
      t = i_118(t);
      return(t);
    }
    t = fetch_1_0(r_10, t);
  }
  t = b_54;
  return(t);
}
static ATerm b_8 (ATerm a_118 (ATerm), ATerm w_53, ATerm v_53, ATerm t)
{
  static ATerm q_62 (ATerm t);
  static ATerm q_62 (ATerm t)
  {
    ATerm g_62 = NULL,i_62 = NULL,m_62 = NULL;
    g_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_62;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_62 = ATgetFirst((ATermList) t);
            m_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_62;
              {
                static ATerm s_10 (ATerm t);
                static ATerm s_10 (ATerm t)
                {
                  t = v_53;
                  return(t);
                }
                t = a_8(a_118, s_10, i_62, m_62, t);
              }
              t = q_62(t);
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              {
                ATerm j_20 = NULL,m_20 = NULL,e_33 = NULL;
                t = SSLgetAnnotations(g_62);
                j_20 = t;
                t = m_62;
                t = q_62(t);
                m_20 = t;
                t = (ATerm) ATinsert(CheckATermList(m_20), i_62);
                e_33 = t;
                t = SSLsetAnnotations(e_33, j_20);
              }
            }
        }
      }
    return(t);
  }
  t = w_53;
  t = q_62(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_114 (ATerm), ATerm t)
{
  static ATerm e_64 (ATerm t);
  static ATerm e_64 (ATerm t)
  {
    ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL;
    d_64 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_64 = ATgetFirst((ATermList) t);
        c_64 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_20 = NULL,y_20 = NULL,g_33 = NULL;
          t = SSLgetAnnotations(d_64);
          v_20 = t;
          t = c_64;
          t = e_64(t);
          y_20 = t;
          t = (ATerm) ATinsert(CheckATermList(y_20), b_64);
          g_33 = t;
          t = SSLsetAnnotations(g_33, v_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_64;
        t = l_114(t);
      }
    return(t);
  }
  t = e_64(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,z_62 = NULL;
  t_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_62;
    }
  else
    {
      static ATerm t_10 (ATerm t);
      static ATerm t_10 (ATerm t)
      {
        t = not_null(z_62);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_62 = ATgetFirst((ATermList) t);
          if(((z_62 != NULL) && (z_62 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_62;
      t = at_end_1_0(t_10, t);
    }
  return(t);
}
static ATerm h_65 (ATerm q_64, ATerm t)
{
  ATerm s_64 = NULL;
  t = SSL_explode_term(q_64);
  if(match_cons(t, sym__2))
    {
      ATerm b_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_64;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL;
  w_64 = t;
  if(match_cons(t, sym__2))
    {
      u_64 = ATgetArgument(t, 0);
      v_64 = ATgetArgument(t, 1);
      {
        ATerm c_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_10 (ATerm t);
            static ATerm w_10 (ATerm t)
            {
              t = v_64;
              return(t);
            }
            t = u_64;
            t = at_end_1_0(w_10, t);
            LocalPopChoice(e_31);
          }
        else
          {
            t = c_31;
            t = h_65(w_64, t);
          }
      }
    }
  else
    {
      t = h_65(w_64, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm t)
{
  static ATerm q_65 (ATerm t);
  static ATerm q_65 (ATerm t)
  {
    ATerm f_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_115(t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = f_31;
        {
          ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,i_33 = NULL;
          t = z_115(t);
          p_65 = t;
          if(match_cons(t, sym__2))
            {
              l_65 = ATgetArgument(t, 0);
              m_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_65);
          k_65 = t;
          t = l_65;
          t = b_116(t);
          n_65 = t;
          t = m_65;
          t = q_65(t);
          o_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_65, o_65);
          i_33 = t;
          t = SSLsetAnnotations(i_33, k_65);
          t = a_116(t);
        }
      }
    return(t);
  }
  t = q_65(t);
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
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      if(((ATgetType(k_31) == AT_LIST) && !(ATisEmpty(k_31))))
        {
          g_66 = ATgetFirst((ATermList) k_31);
          h_66 = (ATerm) ATgetNext((ATermList) k_31);
        }
      else
        _fail(t);
      {
        ATerm l_31 = ATgetArgument(t, 1);
        if(((ATgetType(l_31) == AT_LIST) && !(ATisEmpty(l_31))))
          {
            i_66 = ATgetFirst((ATermList) l_31);
            j_66 = (ATerm) ATgetNext((ATermList) l_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_66, i_66), (ATerm) ATmakeAppl(sym__2, h_66, j_66));
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm k_66 = NULL,n_66 = NULL;
  if(match_cons(t, sym__2))
    {
      k_66 = ATgetArgument(t, 0);
      n_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_66), k_66);
  return(t);
}
static ATerm g_8 (ATerm p_784, ATerm u_784, ATerm i_78, ATerm t)
{
  ATerm u_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
  t = SSL_explode_term(u_784);
  if(match_cons(t, sym__2))
    {
      u_65 = ATgetArgument(t, 0);
      x_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_784);
  if(match_cons(t, sym__2))
    {
      if((u_65 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_65, x_65);
  t = genzip_4_0(x_10, y_10, a_11, _id, t);
  y_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_65, i_78);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  static ATerm q_66 (ATerm t);
  static ATerm q_66 (ATerm t)
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_111(t);
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = t_111(t);
        t = q_66(t);
      }
    return(t);
  }
  t = q_66(t);
  return(t);
}
ATerm for_3_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t)
{
  t = v_111(t);
  t = while_not_2_0(w_111, x_111, t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm i_67 = NULL;
  i_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_67);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,k_33 = NULL;
  m_67 = t;
  if(match_cons(t, sym__2))
    {
      k_67 = ATgetArgument(t, 0);
      l_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_67);
  j_67 = t;
  t = l_67;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_67, l_67);
  k_33 = t;
  t = SSLsetAnnotations(k_33, j_67);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL;
  n_68 = t;
  if(match_cons(t, sym__2))
    {
      o_68 = ATgetArgument(t, 0);
      p_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_68 = ATgetFirst((ATermList) t);
      r_68 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_69(o_68, p_68, n_68, t);
            LocalPopChoice(q_31);
          }
        else
          {
            t = p_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_68), q_68), r_68);
          }
      }
    }
  else
    {
      t = b_69(o_68, p_68, n_68, t);
    }
  return(t);
}
static ATerm b_69 (ATerm p_67, ATerm r_67, ATerm s_67, ATerm t)
{
  ATerm t_67 = NULL,b_68 = NULL,l_33 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL;
  t = SSLgetAnnotations(s_67);
  t_67 = t;
  t = r_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_68 = ATgetFirst((ATermList) t);
      h_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_68;
  if(match_cons(t, sym__2))
    {
      f_68 = ATgetArgument(t, 0);
      g_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_68;
        if((f_68 != t))
          {
            _fail(t);
          }
        t = h_68;
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = r_67;
        t = g_8(f_68, g_68, h_68, t);
      }
  }
  b_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_67, b_68);
  l_33 = t;
  t = SSLsetAnnotations(l_33, t_67);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm a_69 = NULL;
  if(match_cons(t, sym__2))
    {
      a_69 = ATgetArgument(t, 0);
      if((a_69 != ATgetArgument(t, 1)))
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
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_11, d_11, f_11, t);
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      {
        ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL;
        v_68 = t;
        if(match_cons(t, sym__2))
          {
            w_68 = ATgetArgument(t, 0);
            x_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_68;
        t = b_8(h_11, w_68, x_68, t);
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
  ATerm a_22 = NULL,b_22 = NULL;
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(v_11, a_22, b_22, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      e_22 = ATgetArgument(t, 0);
      if((e_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  if(match_cons(t, sym__2))
    {
      o_22 = ATgetArgument(t, 0);
      p_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_7(y_11, o_22, p_22, t);
  return(t);
}
static ATerm y_11 (ATerm t)
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
ATerm free_vars_3_0 (ATerm e_136 (ATerm), ATerm f_136 (ATerm), ATerm g_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm p_69 (ATerm t);
  static ATerm p_69 (ATerm t)
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_136(t);
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
              ATerm d_69 = NULL,e_69 = NULL,n_21 = NULL,q_21 = NULL;
              d_69 = t;
              t = f_136(t);
              e_69 = t;
              t = d_69;
              {
                static ATerm j_11 (ATerm t);
                static ATerm j_11 (ATerm t)
                {
                  ATerm g_69 = NULL;
                  t = p_69(t);
                  g_69 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_69, e_69);
                  t = diff_0_0(t);
                  return(t);
                }
                t = g_136(j_11, p_69, k_11, t);
              }
              q_21 = t;
              t = SSL_explode_term(q_21);
              if(match_cons(t, sym__2))
                {
                  ATerm o_32 = ATgetArgument(t, 0);
                  n_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_21;
              t = foldr_3_0(p_11, q_11, _id, t);
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              {
                ATerm g_22 = NULL,h_22 = NULL;
                h_22 = t;
                t = SSL_explode_term(h_22);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_32 = ATgetArgument(t, 0);
                    g_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_22;
                t = foldr_3_0(w_11, x_11, p_69, t);
              }
            }
        }
      }
    return(t);
  }
  t = p_69(t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm h_70 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_70);
  return(t);
}
static ATerm d_12 (ATerm t)
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
              int c_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_70 = ATgetArgument(t, 0);
                      k_70 = ATgetArgument(t, 1);
                      l_70 = ATgetArgument(t, 2);
                      m_70 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_70;
                  t = map_1_0(e_12, t);
                  LocalPopChoice(c_33);
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
                        t = dynrule_targs_1_0(f_12, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm t_70 = NULL;
  ATerm h_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_70 = ATgetArgument(t, 0);
          {
            ATerm m_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_33);
      t = t_70;
    }
  else
    {
      t = h_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_70;
    }
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = map_1_0(h_12, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm y_70 = NULL;
  ATerm n_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_70 = ATgetArgument(t, 0);
          {
            ATerm r_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_33);
      t = y_70;
    }
  else
    {
      t = n_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_70;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,p_33 = NULL,o_33 = NULL;
  g_70 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_70 = ATgetArgument(t, 0);
      e_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_70);
  c_70 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, d_70, e_70);
  o_33 = t;
  t = SSLsetAnnotations(o_33, c_70);
  f_70 = t;
  if(match_cons(t, sym_Let_2))
    {
      v_69 = ATgetArgument(t, 0);
      {
        ATerm t_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_69;
  t = free_vars_3_0(a_12, d_12, tboundin_3_0, t);
  t_69 = t;
  t = undefine_unbound_MarkVar_0_1(t_69, t);
  u_69 = t;
  t = f_70;
  if(match_cons(t, sym_Let_2))
    {
      x_69 = ATgetArgument(t, 0);
      y_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_70);
  w_69 = t;
  t = x_69;
  {
    static ATerm i_12 (ATerm t);
    static ATerm i_12 (ATerm t)
    {
      ATerm b_71 = NULL,c_71 = NULL;
      b_71 = t;
      t = term_o_16;
      t = table_destroy_0_0(t);
      t = term_o_16;
      c_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_o_16, u_69);
      t = v_7(c_71, u_69, t);
      t = b_71;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(i_12, t);
  }
  z_69 = t;
  t = term_o_16;
  t = table_destroy_0_0(t);
  t = term_o_16;
  b_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_16, u_69);
  t = v_7(b_70, u_69, t);
  t = y_69;
  t = mark_buv_0_0(t);
  a_70 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, z_69, a_70);
  p_33 = t;
  t = SSLsetAnnotations(p_33, w_69);
  return(t);
}
static ATerm i_8 (ATerm d_104 (ATerm), ATerm b_26, ATerm z_25, ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL;
  g_71 = t;
  t = d_104(t);
  d_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_71, b_26, z_25);
  t = c_9(d_71, b_26, z_25, t);
  {
    ATerm z_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_71 = NULL;
        t = term_b_34;
        l_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_71, term_b_34);
        t = b_9(d_71, l_71, t);
        {
          ATerm c_34 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_34;
            }
        }
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
      e_71 = ATgetFirst((ATermList) t);
      f_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_71, term_b_34, (ATerm) ATinsert(CheckATermList(f_71), (ATerm) ATinsert(CheckATermList(e_71), b_26)));
  t = lookup_table_0_1(d_71, t);
  k_71 = t;
  t = term_b_34;
  h_71 = t;
  t = (ATerm) ATinsert(CheckATermList(f_71), (ATerm) ATinsert(CheckATermList(e_71), b_26));
  i_71 = t;
  t = k_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(h_71, i_71, j_71, t);
  t = g_71;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL;
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_71);
  n_71 = t;
  t = term_l_34;
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, m_71), term_l_34);
  t = i_8(j_12, n_71, o_71, t);
  t = m_71;
  return(t);
}
static ATerm j_8 (ATerm k_27, ATerm l_27, ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL;
  q_71 = t;
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_27, l_27);
        t = b_9(k_27, l_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_34 = ATgetFirst((ATermList) t);
            p_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_34);
        {
          ATerm r_71 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, k_27, l_27, p_71);
          t = lookup_table_0_1(k_27, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_71 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_9(l_27, p_71, r_71, t);
          t = (ATerm) ATmakeAppl(sym__3, k_27, l_27, p_71);
        }
      }
    else
      {
        t = m_34;
        {
          ATerm t_71 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, k_27, l_27);
          t = lookup_table_0_1(k_27, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_71 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_8(l_27, t_71, t);
          t = (ATerm) ATmakeAppl(sym__2, k_27, l_27);
        }
      }
  }
  t = q_71;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL;
  y_71 = t;
  t = a_104(t);
  x_71 = t;
  {
    ATerm p_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_72 = NULL;
        t = term_b_34;
        c_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_71, term_b_34);
        t = b_9(x_71, c_72, t);
        {
          ATerm t_34 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_34;
            }
        }
        LocalPopChoice(s_34);
      }
    else
      {
        t = p_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_71 = ATgetFirst((ATermList) t);
      v_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_71, term_b_34, v_71);
  t = lookup_table_0_1(x_71, t);
  b_72 = t;
  t = term_b_34;
  z_71 = t;
  t = b_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(z_71, v_71, a_72, t);
  t = w_71;
  {
    static ATerm k_12 (ATerm t);
    static ATerm k_12 (ATerm t)
    {
      ATerm d_72 = NULL;
      d_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_71, d_72);
      t = j_8(x_71, d_72, t);
      return(t);
    }
    t = map_1_0(k_12, t);
  }
  t = y_71;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm t)
{
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_123(t);
      t = t_123(t);
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
      t = t_123(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL;
  g_72 = t;
  t = z_103(t);
  f_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_72, term_b_34);
  {
    ATerm z_34 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_72 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_35 = ATgetArgument(t, 0);
            ATerm g_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_34;
        p_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_72, term_b_34);
        t = b_9(f_72, p_72, t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = z_34;
        t = (ATerm) ATempty;
      }
  }
  h_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_72, term_b_34, (ATerm) ATinsert(CheckATermList(h_72), (ATerm) ATempty));
  t = lookup_table_0_1(f_72, t);
  l_72 = t;
  t = term_b_34;
  i_72 = t;
  t = (ATerm) ATinsert(CheckATermList(h_72), (ATerm) ATempty);
  j_72 = t;
  t = l_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(i_72, j_72, k_72, t);
  t = g_72;
  return(t);
}
ATerm scope_2_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm t)
{
  static ATerm m_12 (ATerm t);
  static ATerm m_12 (ATerm t)
  {
    t = end_scope_1_0(b_104, t);
    return(t);
  }
  t = begin_scope_1_0(b_104, t);
  t = restore_always_2_0(c_104, m_12, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,s_33 = NULL;
  u_72 = t;
  if(match_cons(t, sym_Scope_2))
    {
      r_72 = ATgetArgument(t, 0);
      s_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_72);
  q_72 = t;
  t = s_72;
  {
    static ATerm o_12 (ATerm t);
    static ATerm o_12 (ATerm t)
    {
      ATerm v_72 = NULL;
      v_72 = t;
      t = r_72;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = v_72;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(n_12, o_12, t);
  }
  t_72 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, r_72, t_72);
  s_33 = t;
  t = SSLsetAnnotations(s_33, q_72);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm h_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_72 = NULL,x_72 = NULL,y_72 = NULL,u_33 = NULL;
      y_72 = t;
      if(match_cons(t, sym_Var_1))
        {
          x_72 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_72);
      w_72 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, x_72);
      u_33 = t;
      t = SSLsetAnnotations(u_33, w_72);
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
            ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,v_33 = NULL;
            c_73 = t;
            if(match_cons(t, sym_App_2))
              {
                a_73 = ATgetArgument(t, 0);
                b_73 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_73);
            z_72 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, a_73, b_73);
            v_33 = t;
            t = SSLsetAnnotations(v_33, z_72);
            LocalPopChoice(o_35);
            {
              ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL,i_73 = NULL,w_33 = NULL;
              i_73 = t;
              if(match_cons(t, sym_App_2))
                {
                  e_73 = ATgetArgument(t, 0);
                  f_73 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_73);
              d_73 = t;
              t = e_73;
              t = mark_buv_0_0(t);
              g_73 = t;
              t = f_73;
              t = mark_build_vars_0_0(t);
              h_73 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, g_73, h_73);
              w_33 = t;
              t = SSLsetAnnotations(w_33, d_73);
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
                  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL,x_33 = NULL;
                  l_73 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      k_73 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_73);
                  j_73 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, k_73);
                  x_33 = t;
                  t = SSLsetAnnotations(x_33, j_73);
                  LocalPopChoice(r_35);
                  {
                    ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,y_33 = NULL;
                    p_73 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        n_73 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(p_73);
                    m_73 = t;
                    t = n_73;
                    t = mark_buv_0_0(t);
                    o_73 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, o_73);
                    y_33 = t;
                    t = SSLsetAnnotations(y_33, m_73);
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
static ATerm k_8 (ATerm s_27, ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL;
  r_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
  t = b_9(s_27, t_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_35 = ATgetFirst((ATermList) t);
      q_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_27, t_27, (ATerm) ATinsert(CheckATermList(q_73), u_27));
  t = lookup_table_0_1(s_27, t);
  u_73 = t;
  t = (ATerm) ATinsert(CheckATermList(q_73), u_27);
  s_73 = t;
  t = u_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(t_27, s_73, t_73, t);
  t = r_73;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL;
  v_73 = t;
  t = term_o_16;
  w_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_73);
  x_73 = t;
  t = term_x_35;
  y_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_16, (ATerm)ATmakeAppl(sym_Var_1, v_73), term_x_35);
  t = k_8(w_73, x_73, y_73, t);
  t = v_73;
  return(t);
}
static ATerm n_8 (ATerm q_27, ATerm r_27, ATerm t)
{
  ATerm z_73 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
  t = b_9(q_27, r_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_73 = ATgetFirst((ATermList) t);
      {
        ATerm z_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_73;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL;
  p_75 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_23 = NULL,h_23 = NULL,k_23 = NULL,r_23 = NULL;
        t = term_o_16;
        r_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_16, p_75);
        t = n_8(r_23, p_75, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_36) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            g_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, q_75);
        h_23 = t;
        t = (ATerm) ATinsert(ATempty, g_23);
        k_23 = t;
        t = SSLsetAnnotations(h_23, k_23);
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
              ATerm y_23 = NULL,c_24 = NULL,e_24 = NULL,j_24 = NULL;
              t = term_o_16;
              j_24 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_o_16, p_75);
              t = n_8(j_24, p_75, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_36 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_36) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  y_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, q_75);
              c_24 = t;
              t = (ATerm) ATinsert(ATempty, y_23);
              e_24 = t;
              t = SSLsetAnnotations(c_24, e_24);
              LocalPopChoice(g_36);
            }
          else
            {
              t = f_36;
              {
                ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,w_24 = NULL;
                t = term_o_16;
                w_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_o_16, p_75);
                t = n_8(w_24, p_75, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm i_36 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_36) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    p_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, q_75);
                q_24 = t;
                t = (ATerm) ATinsert(ATempty, p_24);
                r_24 = t;
                t = SSLsetAnnotations(q_24, r_24);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,e_34 = NULL;
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
  z_75 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_75);
  w_75 = t;
  t = x_75;
  t = DeclareBound_0_0(t);
  y_75 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_75);
  e_34 = t;
  t = SSLsetAnnotations(e_34, w_75);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm l_36 = t;
  int m_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_76 = NULL,d_76 = NULL,e_76 = NULL,g_34 = NULL;
      e_76 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_76);
      c_76 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_76);
      g_34 = t;
      t = SSLsetAnnotations(g_34, c_76);
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
            ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,h_34 = NULL;
            i_76 = t;
            if(match_cons(t, sym_App_2))
              {
                g_76 = ATgetArgument(t, 0);
                h_76 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_76);
            f_76 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, g_76, h_76);
            h_34 = t;
            t = SSLsetAnnotations(h_34, f_76);
            LocalPopChoice(o_36);
            {
              ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,i_34 = NULL;
              o_76 = t;
              if(match_cons(t, sym_App_2))
                {
                  k_76 = ATgetArgument(t, 0);
                  l_76 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_76);
              j_76 = t;
              t = k_76;
              t = mark_buv_0_0(t);
              m_76 = t;
              t = l_76;
              t = mark_build_vars_0_0(t);
              n_76 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, m_76, n_76);
              i_34 = t;
              t = SSLsetAnnotations(i_34, j_76);
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
                  ATerm p_76 = NULL,q_76 = NULL,r_76 = NULL,j_34 = NULL;
                  r_76 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      q_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_76);
                  p_76 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, q_76);
                  j_34 = t;
                  t = SSLsetAnnotations(j_34, p_76);
                  LocalPopChoice(q_36);
                  {
                    ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,k_34 = NULL;
                    v_76 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        t_76 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(v_76);
                    s_76 = t;
                    t = t_76;
                    t = mark_buv_0_0(t);
                    u_76 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, u_76);
                    k_34 = t;
                    t = SSLsetAnnotations(k_34, s_76);
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
      ATerm q_77 = NULL,r_77 = NULL;
      q_77 = t;
      if(match_cons(t, sym_Match_1))
        {
          r_77 = ATgetArgument(t, 0);
          {
            ATerm a_25 = NULL,e_25 = NULL,q_34 = NULL;
            t = SSLgetAnnotations(q_77);
            a_25 = t;
            t = r_77;
            t = mark_match_vars_0_0(t);
            e_25 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, e_25);
            q_34 = t;
            t = SSLsetAnnotations(q_34, a_25);
          }
        }
      else
        {
          ATerm r_25 = NULL,t_25 = NULL,r_34 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              r_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_77);
          r_25 = t;
          t = r_77;
          t = mark_build_vars_0_0(t);
          t_25 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, t_25);
          r_34 = t;
          t = SSLsetAnnotations(r_34, r_25);
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
                    int y_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(y_36);
                      }
                    else
                      {
                        t = x_36;
                        {
                          ATerm z_36 = t;
                          int a_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL;
                              s_77 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  t_77 = ATgetArgument(t, 0);
                                  u_77 = ATgetArgument(t, 1);
                                  v_77 = ATgetArgument(t, 2);
                                  w_77 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = s_77;
                              t = t_7(t_77, u_77, v_77, w_77, t);
                              LocalPopChoice(a_37);
                            }
                          else
                            {
                              t = z_36;
                              {
                                ATerm b_37 = t;
                                int c_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
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
                                          ATerm b_78 = NULL,d_78 = NULL,e_78 = NULL,j_78 = NULL,k_78 = NULL,m_78 = NULL,n_78 = NULL;
                                          j_78 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              k_78 = ATgetArgument(t, 0);
                                              t = k_78;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  b_78 = ATgetArgument(t, 0);
                                                  d_78 = ATgetArgument(t, 1);
                                                  e_78 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = j_78;
                                              t = s_7(b_78, d_78, e_78, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  k_78 = ATgetArgument(t, 0);
                                                  t = k_78;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      b_78 = ATgetArgument(t, 0);
                                                      d_78 = ATgetArgument(t, 1);
                                                      e_78 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = j_78;
                                                  t = r_7(b_78, d_78, e_78, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      k_78 = ATgetArgument(t, 0);
                                                      m_78 = ATgetArgument(t, 1);
                                                      n_78 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = j_78;
                                                  t = q_7(k_78, m_78, n_78, t);
                                                }
                                            }
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
                                                t = mark_call_0_0(t);
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
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(i_37);
                                                    }
                                                  else
                                                    {
                                                      t = h_37;
                                                      {
                                                        ATerm j_37 = t;
                                                        int m_37 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm x_78 = NULL;
                                                            x_78 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm n_37 = ATgetArgument(t, 0);
                                                                ATerm o_37 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = x_78;
                                                            t = p_7(t);
                                                            LocalPopChoice(m_37);
                                                          }
                                                        else
                                                          {
                                                            t = j_37;
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
  ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL;
  k_79 = t;
  t = term_b_16;
  l_79 = t;
  t = (ATerm) ATinsert(ATempty, term_v_37);
  m_79 = t;
  t = SSL_printnl(l_79, m_79);
  t = k_79;
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm n_79 = NULL,o_79 = NULL,p_79 = NULL,q_79 = NULL,u_34 = NULL;
  q_79 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_79);
  n_79 = t;
  t = o_79;
  t = map_1_0(mark_buv_0_0, t);
  p_79 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, p_79);
  u_34 = t;
  t = SSLsetAnnotations(u_34, n_79);
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
  ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL;
  r_79 = t;
  t = term_b_16;
  s_79 = t;
  t = (ATerm) ATinsert(ATempty, term_w_37);
  t_79 = t;
  t = SSL_printnl(s_79, t_79);
  t = r_79;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL,w_34 = NULL,v_34 = NULL;
  t = if_verbose4_1_0(p_12, t);
  j_79 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_79);
  c_79 = t;
  t = d_79;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_79 = ATgetFirst((ATermList) t);
      g_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_79);
  e_79 = t;
  t = g_79;
  t = Cons_2_0(q_12, r_12, t);
  h_79 = t;
  t = (ATerm) ATinsert(CheckATermList(h_79), f_79);
  v_34 = t;
  t = SSLsetAnnotations(v_34, e_79);
  i_79 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_79);
  w_34 = t;
  t = SSLsetAnnotations(w_34, c_79);
  t = if_verbose4_1_0(s_12, t);
  return(t);
}
static ATerm p_8 (ATerm g_39, ATerm h_39, ATerm t)
{
  ATerm u_79 = NULL;
  t = SSL_fputc(g_39, h_39);
  u_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_79);
  return(t);
}
static ATerm q_8 (ATerm x_44, ATerm y_44, ATerm t)
{
  ATerm v_79 = NULL;
  t = SSL_write_term_to_stream_text(x_44, y_44);
  v_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_79);
  return(t);
}
static ATerm s_8 (ATerm q_112 (ATerm), ATerm n_389, ATerm d_45, ATerm t)
{
  ATerm w_79 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_389, term_x_37);
  t = w_8(t);
  w_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_79, d_45);
  t = q_112(t);
  t = fclose_0_0(t);
  t = d_45;
  return(t);
}
static ATerm r_8 (ATerm t_44, ATerm u_44, ATerm t)
{
  ATerm x_79 = NULL;
  t = SSL_write_term_to_stream_baf(t_44, u_44);
  x_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_79);
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
  ATerm m_26 = NULL,n_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_37 = ATgetArgument(t, 0);
      if(match_cons(y_37, sym_Stream_1))
        {
          m_26 = ATgetArgument(y_37, 0);
        }
      else
        _fail(t);
      n_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(m_26, n_26, t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,v_27 = NULL,w_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_37 = ATgetArgument(t, 0);
      if(match_cons(z_37, sym_Stream_1))
        {
          w_27 = ATgetArgument(z_37, 0);
        }
      else
        _fail(t);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(w_27, y_27, t);
  o_27 = t;
  t = term_a_38;
  p_27 = t;
  t = o_27;
  if(match_cons(t, sym_Stream_1))
    {
      v_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_38, o_27);
  t = p_8(p_27, v_27, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL,s_80 = NULL,u_81 = NULL,v_81 = NULL,b_35 = NULL,a_35 = NULL;
  e_80 = t;
  if(match_cons(t, sym__2))
    {
      q_80 = ATgetArgument(t, 0);
      r_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_80);
  p_80 = t;
  t = q_80;
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_12 (ATerm t);
        static ATerm u_12 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((d_80 != NULL) && (d_80 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_80 = ATgetArgument(t, 0);
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
        d_80 = t;
      }
  }
  s_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_80, r_80);
  a_35 = t;
  t = SSLsetAnnotations(a_35, p_80);
  t = e_80;
  if(match_cons(t, sym__2))
    {
      g_80 = ATgetArgument(t, 0);
      h_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_80);
  f_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_80, (ATerm) ATmakeAppl(sym__2, not_null(d_80), h_80));
  b_35 = t;
  t = SSLsetAnnotations(b_35, f_80);
  o_80 = t;
  if(match_cons(t, sym__2))
    {
      u_81 = ATgetArgument(t, 0);
      v_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,l_26 = NULL,c_35 = NULL;
        t = SSLgetAnnotations(o_80);
        a_26 = t;
        t = u_81;
        t = fetch_1_0(v_12, t);
        g_26 = t;
        t = v_81;
        if(match_cons(t, sym__2))
          {
            i_26 = ATgetArgument(t, 0);
            l_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_8(w_12, i_26, l_26, t);
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_26, h_26);
        c_35 = t;
        t = SSLsetAnnotations(c_35, a_26);
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        {
          ATerm c_27 = NULL,j_27 = NULL,m_27 = NULL,n_27 = NULL,d_35 = NULL;
          t = SSLgetAnnotations(o_80);
          c_27 = t;
          t = v_81;
          if(match_cons(t, sym__2))
            {
              m_27 = ATgetArgument(t, 0);
              n_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_8(x_12, m_27, n_27, t);
          j_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_81, j_27);
          d_35 = t;
          t = SSLsetAnnotations(d_35, c_27);
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
ATerm apply_strategy_1_0 (ATerm w_129 (ATerm), ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL;
  c_82 = t;
  t = dtime_0_0(t);
  t = c_82;
  t = w_129(t);
  b_82 = t;
  t = dtime_0_0(t);
  y_81 = t;
  t = b_82;
  if(match_cons(t, sym__2))
    {
      z_81 = ATgetArgument(t, 0);
      a_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_81), (ATerm) ATmakeAppl(sym_Runtime_1, y_81)), a_82);
  return(t);
}
static ATerm q_82 (ATerm k_82, ATerm t)
{
  t = SSL_fclose(k_82);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL;
  o_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_82 = ATgetArgument(t, 0);
      {
        ATerm g_38 = t;
        int h_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_82);
            LocalPopChoice(h_38);
          }
        else
          {
            t = g_38;
            t = q_82(o_82, t);
          }
      }
    }
  else
    {
      t = q_82(o_82, t);
    }
  return(t);
}
static ATerm t_8 (ATerm z_44, ATerm t)
{
  t = SSL_read_term_from_stream(z_44);
  return(t);
}
static ATerm u_8 (ATerm k_37, ATerm l_37, ATerm t)
{
  t = SSL_strcat(k_37, l_37);
  return(t);
}
static ATerm v_8 (ATerm i_39, ATerm j_39, ATerm t)
{
  ATerm r_82 = NULL;
  t = SSL_fopen(i_39, j_39);
  r_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_82 = NULL;
  t = SSL_stdin_stream();
  s_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_82 = NULL;
  t = SSL_stdout_stream();
  t_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_82 = NULL;
  t = SSL_stderr_stream();
  u_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_82);
  return(t);
}
static ATerm b_84 (ATerm a_83, ATerm t)
{
  ATerm b_83 = NULL;
  t = SSL_explode_term(a_83);
  if(match_cons(t, sym__2))
    {
      ATerm i_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_38 = ATgetArgument(t, 1);
        if(((ATgetType(j_38) == AT_LIST) && !(ATisEmpty(j_38))))
          {
            b_83 = ATgetFirst((ATermList) j_38);
            {
              ATerm k_38 = (ATerm) ATgetNext((ATermList) j_38);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_83;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_83;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_83;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_83;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_84 (ATerm e_83, ATerm f_83, ATerm g_83, ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL,m_83 = NULL,i_35 = NULL;
  t = SSLgetAnnotations(g_83);
  j_83 = t;
  t = e_83;
  if(match_cons(t, sym_Path_1))
    {
      m_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_83, f_83);
  i_35 = t;
  t = SSLsetAnnotations(i_35, j_83);
  if(match_cons(t, sym__2))
    {
      h_83 = ATgetArgument(t, 0);
      i_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8(h_83, i_83, t);
  return(t);
}
static ATerm d_84 (ATerm o_83, ATerm p_83, ATerm q_83, ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL,w_83 = NULL,j_35 = NULL;
  t = SSLgetAnnotations(q_83);
  t_83 = t;
  t = SSL_is_string(o_83);
  w_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_83, p_83);
  j_35 = t;
  t = SSLsetAnnotations(j_35, t_83);
  if(match_cons(t, sym__2))
    {
      r_83 = ATgetArgument(t, 0);
      s_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_8(r_83, s_83, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL;
  y_83 = t;
  if(match_cons(t, sym__2))
    {
      z_83 = ATgetArgument(t, 0);
      a_84 = ATgetArgument(t, 1);
      {
        ATerm l_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_84(y_83, t);
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
                  t = c_84(z_83, a_84, y_83, t);
                  LocalPopChoice(o_38);
                }
              else
                {
                  t = n_38;
                  t = d_84(z_83, a_84, y_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_84(y_83, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL,m_84 = NULL;
  m_84 = t;
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_84, term_r_38);
        t = w_8(t);
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        {
          ATerm p_28 = NULL,s_28 = NULL;
          t = term_s_38;
          s_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_38, m_84);
          t = u_8(s_28, m_84, t);
          p_28 = t;
          t = SSL_perror(p_28);
          _fail(t);
        }
      }
  }
  g_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_8(h_84, t);
  f_84 = t;
  t = g_84;
  t = fclose_0_0(t);
  t = f_84;
  return(t);
}
ATerm fetch_1_0 (ATerm e_114 (ATerm), ATerm t)
{
  static ATerm l_85 (ATerm t);
  static ATerm l_85 (ATerm t)
  {
    ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
    i_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_85 = ATgetFirst((ATermList) t);
        k_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_38 = t;
      int u_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_29 = NULL,e_29 = NULL,m_35 = NULL;
          t = SSLgetAnnotations(i_85);
          a_29 = t;
          t = j_85;
          t = e_114(t);
          e_29 = t;
          t = (ATerm) ATinsert(CheckATermList(k_85), e_29);
          m_35 = t;
          t = SSLsetAnnotations(m_35, a_29);
          LocalPopChoice(u_38);
        }
      else
        {
          t = t_38;
          {
            ATerm t_29 = NULL,w_29 = NULL,n_35 = NULL;
            t = SSLgetAnnotations(i_85);
            t_29 = t;
            t = k_85;
            t = l_85(t);
            w_29 = t;
            t = (ATerm) ATinsert(CheckATermList(w_29), j_85);
            n_35 = t;
            t = SSLsetAnnotations(n_35, t_29);
          }
        }
    }
    return(t);
  }
  t = l_85(t);
  return(t);
}
static ATerm b_9 (ATerm y_28, ATerm z_28, ATerm t)
{
  ATerm o_85 = NULL;
  t = lookup_table_0_1(y_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_9(z_28, o_85, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_138 (ATerm), ATerm t)
{
  ATerm r_85 = NULL;
  r_85 = t;
  {
    ATerm v_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
        t = term_j_16;
        u_85 = t;
        t = term_k_16;
        v_85 = t;
        t = term_l_16;
        t = b_9(u_85, v_85, t);
        t_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_85, term_x_38);
        t = geq_0_0(t);
        t = r_85;
        t = d_138(t);
        LocalPopChoice(w_38);
      }
    else
      {
        t = v_38;
        t = r_85;
      }
  }
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm y_85 = NULL;
  y_85 = t;
  if(match_string(t, "-k"))
    {
      t = y_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_85;
    }
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL;
  z_85 = t;
  t = SSL_string_to_int(z_85);
  a_86 = t;
  t = term_y_38;
  b_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_38, a_86);
  t = e_9(b_86, a_86, t);
  t = z_85;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_12, e_13, f_13, t);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm d_86 = NULL;
  d_86 = t;
  if(match_string(t, "-S"))
    {
      t = d_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_86;
    }
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm e_86 = NULL,f_86 = NULL;
  t = term_k_16;
  e_86 = t;
  t = term_a_39;
  f_86 = t;
  t = term_b_39;
  t = e_9(e_86, f_86, t);
  t = term_c_39;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_d_39;
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
  ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
  g_86 = t;
  t = SSL_string_to_int(g_86);
  h_86 = t;
  t = term_k_16;
  i_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_16, h_86);
  t = e_9(i_86, h_86, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_86);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_e_39;
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
  ATerm j_86 = NULL,k_86 = NULL;
  t = term_f_39;
  j_86 = t;
  t = term_a_16;
  k_86 = t;
  t = term_k_39;
  t = e_9(j_86, k_86, t);
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
static ATerm e_9 (ATerm u_74, ATerm v_74, ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL;
  t = term_j_16;
  l_86 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_16, u_74, v_74);
  t = lookup_table_0_1(l_86, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(u_74, v_74, m_86, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_16, u_74, v_74);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL;
      t = term_a_16;
      t = g_0(t);
      s_86 = t;
      t = term_r_39;
      t_86 = t;
      t = term_s_39;
      u_86 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_39, term_s_39, s_86);
      t = c_9(t_86, u_86, s_86, t);
      _fail(t);
    }
  else
    {
      ATerm x_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_86 = ATgetFirst((ATermList) t);
          r_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_86;
      t = d_0(t);
      t = term_a_16;
      t = f_0(t);
      x_86 = t;
      t = (ATerm) ATinsert(CheckATermList(r_86), x_86);
    }
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm z_86 = NULL;
  z_86 = t;
  if(match_string(t, "-o"))
    {
      t = z_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_86;
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL;
  a_87 = t;
  t = term_t_39;
  b_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_39, a_87);
  t = e_9(b_87, a_87, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_87);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  t = term_u_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_13, r_13, u_13, t);
  return(t);
}
static ATerm c_9 (ATerm f_27, ATerm g_27, ATerm e_27, ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL;
  d_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_27, g_27);
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
        t = (ATerm) ATmakeAppl(sym__2, f_27, g_27);
        t = b_9(f_27, g_27, t);
        LocalPopChoice(w_39);
      }
    else
      {
        t = v_39;
        t = (ATerm) ATempty;
      }
  }
  e_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_27, g_27, (ATerm) ATinsert(CheckATermList(e_87), e_27));
  t = lookup_table_0_1(f_27, t);
  h_87 = t;
  t = (ATerm) ATinsert(CheckATermList(e_87), e_27);
  f_87 = t;
  t = h_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(g_27, f_87, g_87, t);
  t = d_87;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_87 = NULL,t_87 = NULL,u_87 = NULL;
      t = term_a_16;
      t = q_0(t);
      s_87 = t;
      t = term_r_39;
      t_87 = t;
      t = term_s_39;
      u_87 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_39, term_s_39, s_87);
      t = c_9(t_87, u_87, s_87, t);
      _fail(t);
    }
  else
    {
      ATerm y_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_87 = ATgetFirst((ATermList) t);
          p_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_87;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_87 = ATgetFirst((ATermList) t);
          r_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_87;
      t = o_0(t);
      t = q_87;
      t = p_0(t);
      y_87 = t;
      t = (ATerm) ATinsert(CheckATermList(r_87), y_87);
    }
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm a_88 = NULL;
  a_88 = t;
  if(match_string(t, "-i"))
    {
      t = a_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_88;
    }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL;
  b_88 = t;
  t = term_z_39;
  c_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_39, b_88);
  t = e_9(c_88, b_88, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_88);
  return(t);
}
static ATerm x_13 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_13, w_13, x_13, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_16;
  t = whoami_0_0(t);
  d_88 = t;
  t = term_b_16;
  f_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_40), d_88);
  g_88 = t;
  t = SSL_printnl(f_88, g_88);
  t = term_e_16;
  e_88 = t;
  t = SSL_exit(e_88);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL;
  t = term_j_16;
  h_88 = t;
  t = term_c_40;
  i_88 = t;
  t = term_d_40;
  t = b_9(h_88, i_88, t);
  return(t);
}
static ATerm x_8 (ATerm d_46, ATerm e_46, ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_46, e_46);
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
      t = SSL_addr(d_46, e_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm t)
{
  ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL;
  k_88 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_88;
      t = i_121(t);
    }
  else
    {
      ATerm p_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_88 = ATgetFirst((ATermList) t);
          m_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_88;
      t = foldr_2_0(i_121, j_121, t);
      p_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_88, p_88);
      t = j_121(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  if(match_cons(t, sym__2))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_8(h_30, i_30, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_88 = NULL,c_30 = NULL,d_30 = NULL;
  t = times_0_0(t);
  d_30 = t;
  t = SSL_explode_term(d_30);
  if(match_cons(t, sym__2))
    {
      ATerm g_40 = ATgetArgument(t, 0);
      c_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_30;
  t = foldr_2_0(y_13, b_14, t);
  s_88 = t;
  t = SSL_TicksToSeconds(s_88);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
  d_89 = t;
  if(match_cons(t, sym__2))
    {
      e_89 = ATgetArgument(t, 0);
      f_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_89;
        if((e_89 != t))
          {
            _fail(t);
          }
        t = d_89;
        LocalPopChoice(i_40);
      }
    else
      {
        t = h_40;
        t = (ATerm) ATmakeAppl(sym__2, e_89, f_89);
        {
          ATerm j_40 = t;
          int k_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_89, f_89);
              LocalPopChoice(k_40);
            }
          else
            {
              t = j_40;
              t = SSL_gtr(e_89, f_89);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_89, f_89);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_138 (ATerm), ATerm t)
{
  ATerm j_89 = NULL;
  j_89 = t;
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
        t = term_j_16;
        m_89 = t;
        t = term_k_16;
        n_89 = t;
        t = term_l_16;
        t = b_9(m_89, n_89, t);
        l_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_89, term_e_16);
        t = geq_0_0(t);
        t = j_89;
        t = c_138(t);
        LocalPopChoice(m_40);
      }
    else
      {
        t = l_40;
        t = j_89;
      }
  }
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm p_89 = NULL,q_89 = NULL,s_89 = NULL,t_89 = NULL;
  t = run_time_0_0(t);
  p_89 = t;
  t = term_a_16;
  t = whoami_0_0(t);
  q_89 = t;
  t = term_b_16;
  s_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_40), p_89), term_n_40), q_89);
  t_89 = t;
  t = SSL_printnl(s_89, t_89);
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_40), p_89), term_n_40), q_89));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_89 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_39;
  u_89 = t;
  t = SSL_exit(u_89);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL;
  f_90 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_90;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_90 = ATgetArgument(t, 0);
          {
            ATerm g_31 = NULL,q_35 = NULL;
            t = SSLgetAnnotations(f_90);
            g_31 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_90);
            q_35 = t;
            t = SSLsetAnnotations(q_35, g_31);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_90;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_130 (ATerm), ATerm t)
{
  ATerm p_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_89 = NULL,y_89 = NULL;
      t = term_j_16;
      x_89 = t;
      t = term_r_40;
      y_89 = t;
      t = term_s_40;
      t = b_9(x_89, y_89, t);
      LocalPopChoice(q_40);
    }
  else
    {
      t = p_40;
      t = fetch_1_0(e_14, t);
    }
  t = u_130(t);
  return(t);
}
static ATerm f_9 (ATerm x_31, ATerm y_31, ATerm z_31, ATerm t)
{
  ATerm h_90 = NULL;
  t = SSL_hashtable_put(z_31, x_31, y_31);
  h_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_90);
  return(t);
}
static ATerm g_9 (ATerm a_32, ATerm b_32, ATerm t)
{
  t = SSL_hashtable_get(b_32, a_32);
  return(t);
}
ATerm lookup_table_0_1 (ATerm r_28, ATerm t)
{
  ATerm q_90 = NULL;
  t = table_hashtable_0_0(t);
  q_90 = t;
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_31 = NULL;
        t = q_90;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_9(r_28, m_31, t);
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        {
          ATerm r_31 = NULL;
          t = r_28;
          t = table_create_0_0(t);
          t = q_90;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_9(r_28, r_31, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm f_32, ATerm g_32, ATerm t)
{
  ATerm t_90 = NULL;
  t = SSL_hashtable_create(f_32, g_32);
  t_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_90);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL,a_91 = NULL,b_91 = NULL;
  u_90 = t;
  t = term_v_40;
  a_91 = t;
  t = term_w_40;
  b_91 = t;
  t = u_90;
  t = new_hashtable_0_2(a_91, b_91, t);
  v_90 = t;
  t = u_90;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(u_90, v_90, w_90, t);
  t = u_90;
  return(t);
}
static ATerm z_8 (ATerm c_32, ATerm d_32, ATerm t)
{
  ATerm c_91 = NULL;
  t = SSL_hashtable_remove(d_32, c_32);
  c_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_91);
  return(t);
}
static ATerm a_9 (ATerm h_32, ATerm t)
{
  ATerm d_91 = NULL;
  t = SSL_hashtable_destroy(h_32);
  d_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_91);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_91 = NULL;
  t = SSL_table_hashtable();
  e_91 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_91);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL;
  f_91 = t;
  t = table_hashtable_0_0(t);
  g_91 = t;
  t = lookup_table_0_1(f_91, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(i_91, t);
  t = g_91;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(f_91, h_91, t);
  t = f_91;
  return(t);
}
ATerm map_1_0 (ATerm u_113 (ATerm), ATerm t)
{
  static ATerm x_91 (ATerm t);
  static ATerm x_91 (ATerm t)
  {
    ATerm u_91 = NULL,v_91 = NULL,w_91 = NULL;
    u_91 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_91;
      }
    else
      {
        ATerm w_31 = NULL,k_32 = NULL,l_32 = NULL,s_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_91 = ATgetFirst((ATermList) t);
            w_91 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_91);
        w_31 = t;
        t = v_91;
        t = u_113(t);
        k_32 = t;
        t = w_91;
        t = x_91(t);
        l_32 = t;
        t = (ATerm) ATinsert(CheckATermList(l_32), k_32);
        s_35 = t;
        t = SSLsetAnnotations(s_35, w_31);
      }
    return(t);
  }
  t = x_91(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_92 = ATgetFirst((ATermList) t);
      b_92 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_92 = NULL,g_92 = NULL;
        static ATerm g_14 (ATerm t);
        static ATerm g_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_92)), not_null(g_92));
          return(t);
        }
        t = b_92;
        t = l_0(t);
        if(((f_92 != NULL) && (f_92 != t)))
          _fail(t);
        else
          f_92 = t;
        t = a_92;
        t = j_0(t);
        if(((g_92 != NULL) && (g_92 != t)))
          _fail(t);
        else
          g_92 = t;
        t = b_92;
        t = reverse_acc_2_0(j_0, g_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_16;
      t = l_0(t);
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm m_92 = NULL,n_92 = NULL,o_92 = NULL,u_35 = NULL;
  o_92 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_92);
  m_92 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_92);
  u_35 = t;
  t = SSLsetAnnotations(u_35, m_92);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm q_92 = NULL;
  q_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_92), term_x_40);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_92 = NULL,j_92 = NULL;
  ATerm y_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_92 = NULL,l_92 = NULL;
      t = term_j_16;
      k_92 = t;
      t = term_c_40;
      l_92 = t;
      t = term_d_40;
      t = b_9(k_92, l_92, t);
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
  i_92 = t;
  t = term_s_39;
  j_92 = t;
  t = term_b_41;
  t = b_9(i_92, j_92, t);
  t = reverse_acc_2_0(_id, p_14, t);
  t = map_1_0(s_14, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL;
  s_92 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_92;
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
            t = s_92;
          }
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        t = (ATerm) ATinsert(ATempty, s_92);
      }
  }
  t_92 = t;
  t = term_d_38;
  u_92 = t;
  t = SSL_printnl(u_92, t_92);
  t = s_92;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_92 = NULL,z_92 = NULL;
  t = term_j_16;
  y_92 = t;
  t = term_c_40;
  z_92 = t;
  t = term_d_40;
  t = b_9(y_92, z_92, t);
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
  ATerm a_93 = NULL,b_93 = NULL;
  t = term_g_41;
  a_93 = t;
  t = term_a_16;
  b_93 = t;
  t = term_h_41;
  t = e_9(a_93, b_93, t);
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
  ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL;
  t = term_g_41;
  e_93 = t;
  t = term_a_16;
  f_93 = t;
  t = term_h_41;
  t = e_9(e_93, f_93, t);
  t = term_j_41;
  c_93 = t;
  t = term_a_16;
  d_93 = t;
  t = term_k_41;
  t = e_9(c_93, d_93, t);
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
ATerm Cons_2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL,k_93 = NULL,l_93 = NULL,w_35 = NULL;
  l_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_93 = ATgetFirst((ATermList) t);
      i_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_93);
  g_93 = t;
  t = h_93;
  t = y_90(t);
  j_93 = t;
  t = i_93;
  t = z_90(t);
  k_93 = t;
  t = (ATerm) ATinsert(CheckATermList(k_93), j_93);
  w_35 = t;
  t = SSLsetAnnotations(w_35, g_93);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_133 (ATerm), ATerm t)
{
  ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL,t_93 = NULL,v_93 = NULL,w_93 = NULL,y_35 = NULL;
  q_93 = t;
  {
    ATerm p_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_41;
        t = u_133(t);
        LocalPopChoice(q_41);
      }
    else
      {
        t = p_41;
      }
  }
  t = q_93;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_93 = ATgetFirst((ATermList) t);
      t_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_93);
  r_93 = t;
  t = term_c_40;
  w_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_40, s_93);
  t = e_9(w_93, s_93, t);
  t = t_93;
  {
    static ATerm g_94 (ATerm t);
    static ATerm g_94 (ATerm t)
    {
      ATerm s_41 = t;
      int t_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_93 = NULL;
              z_93 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_93;
              LocalPopChoice(v_41);
            }
          else
            {
              t = u_41;
              t = u_133(t);
              t = Cons_2_0(_id, g_94, t);
            }
          LocalPopChoice(t_41);
        }
      else
        {
          t = s_41;
          {
            ATerm c_94 = NULL,d_94 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_94 = ATgetFirst((ATermList) t);
                d_94 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_94), (ATerm) ATmakeAppl(sym_Undefined_1, c_94));
          }
        }
      return(t);
    }
    t = g_94(t);
  }
  v_93 = t;
  t = (ATerm) ATinsert(CheckATermList(v_93), (ATerm) ATmakeAppl(sym_Program_1, s_93));
  y_35 = t;
  t = SSLsetAnnotations(y_35, r_93);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm t_94 = NULL;
  t_94 = t;
  if(match_string(t, "--help"))
    {
      t = t_94;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_94;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_94;
        }
    }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm u_94 = NULL,v_94 = NULL;
  t = term_r_40;
  u_94 = t;
  t = term_a_16;
  v_94 = t;
  t = term_w_41;
  t = e_9(u_94, v_94, t);
  t = term_x_41;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  t = term_y_41;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_133 (ATerm), ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL;
  n_94 = t;
  t = term_r_39;
  o_94 = t;
  t = term_z_41;
  t = lookup_table_0_1(o_94, t);
  s_94 = t;
  t = term_s_39;
  p_94 = t;
  t = (ATerm) ATempty;
  q_94 = t;
  t = s_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(p_94, q_94, r_94, t);
  t = n_94;
  {
    static ATerm a_15 (ATerm t);
    static ATerm a_15 (ATerm t)
    {
      ATerm a_42 = t;
      int b_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_133(t);
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
                t = Option_3_0(b_15, d_15, e_15, t);
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
        ATerm g_95 = NULL;
        g_95 = t;
        {
          ATerm g_42 = t;
          int h_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_32 = NULL;
              t = g_95;
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
                    t = b_9(t_32, u_32, t);
                    LocalPopChoice(j_42);
                  }
                else
                  {
                    t = i_42;
                    t = fetch_1_0(f_15, t);
                  }
              }
              t = g_95;
              t = default_system_usage_0_0(t);
              t = term_a_39;
              s_32 = t;
              t = SSL_exit(s_32);
              LocalPopChoice(h_42);
            }
          else
            {
              t = g_42;
              {
                ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
                t = term_j_16;
                a_33 = t;
                t = term_g_41;
                b_33 = t;
                t = term_k_42;
                t = b_9(a_33, b_33, t);
                t = g_95;
                t = default_system_about_0_0(t);
                t = term_a_39;
                z_32 = t;
                t = SSL_exit(z_32);
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
              ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL;
              static ATerm h_15 (ATerm t);
              static ATerm h_15 (ATerm t)
              {
                ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL,a_36 = NULL;
                m_95 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_95 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_95);
                k_95 = t;
                t = l_95;
                if(((l_94 != NULL) && (l_94 != t)))
                  _fail(t);
                else
                  l_94 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_95);
                a_36 = t;
                t = SSLsetAnnotations(a_36, k_95);
                return(t);
              }
              t = fetch_1_0(h_15, t);
              t = term_b_16;
              i_95 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_94)), term_n_42);
              j_95 = t;
              t = SSL_printnl(i_95, j_95);
              t = (ATerm) ATmakeAppl(sym__2, term_b_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_94)), term_n_42));
              t = default_system_usage_0_0(t);
              t = term_e_16;
              h_95 = t;
              t = SSL_exit(h_95);
              LocalPopChoice(m_42);
            }
          else
            {
              t = l_42;
            }
        }
      }
  }
  m_94 = t;
  t = term_r_39;
  t = table_destroy_0_0(t);
  t = m_94;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_130 (ATerm), ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm z_130 (ATerm), ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL;
  t = parse_options_1_0(w_130, t);
  r_95 = t;
  t = term_o_42;
  t = table_create_0_0(t);
  t = term_o_42;
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_42, term_p_42, r_95);
  t = lookup_table_0_1(s_95, t);
  v_95 = t;
  t = term_p_42;
  t_95 = t;
  t = v_95;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(t_95, r_95, u_95, t);
  t = r_95;
  t = y_130(t);
  {
    ATerm q_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_130, t);
        LocalPopChoice(w_42);
      }
    else
      {
        t = q_42;
        {
          ATerm x_42 = t;
          int y_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_130(t);
              t = report_success_0_0(t);
              LocalPopChoice(y_42);
            }
          else
            {
              t = x_42;
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
  ATerm w_95 = NULL,x_95 = NULL;
  t = term_z_42;
  w_95 = t;
  t = term_a_16;
  x_95 = t;
  t = term_a_43;
  t = e_9(w_95, x_95, t);
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
  ATerm y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL;
  y_95 = t;
  t = term_j_16;
  c_96 = t;
  t = term_c_40;
  d_96 = t;
  t = term_d_40;
  t = b_9(c_96, d_96, t);
  z_95 = t;
  t = term_b_16;
  a_96 = t;
  t = (ATerm) ATinsert(ATempty, z_95);
  b_96 = t;
  t = SSL_printnl(a_96, b_96);
  t = y_95;
  return(t);
}
ATerm iowrap_3_0 (ATerm f_130 (ATerm), ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm t)
{
  static ATerm j_15 (ATerm t);
  static ATerm t_15 (ATerm t);
  static ATerm j_15 (ATerm t)
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_130(t);
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
    ATerm e_96 = NULL,f_96 = NULL,g_96 = NULL;
    f_96 = t;
    {
      ATerm n_43 = t;
      int o_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm y_15 (ATerm t);
          static ATerm y_15 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_96 != NULL) && (e_96 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_96 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_15, t);
          LocalPopChoice(o_43);
        }
      else
        {
          t = n_43;
          t = term_p_43;
          e_96 = t;
        }
    }
    t = not_null(e_96);
    t = ReadFromFile_0_0(t);
    g_96 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_96, g_96);
    t = apply_strategy_1_0(f_130, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(j_15, h_130, m_15, t_15, t);
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL,k_96 = NULL,l_96 = NULL,c_36 = NULL;
  l_96 = t;
  if(match_cons(t, sym__2))
    {
      i_96 = ATgetArgument(t, 0);
      j_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_96);
  h_96 = t;
  t = j_96;
  t = mark_bound_unbound_vars_0_0(t);
  k_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_96, k_96);
  c_36 = t;
  t = SSLsetAnnotations(c_36, h_96);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(z_15, _fail, default_usage_0_0, t);
  return(t);
}
