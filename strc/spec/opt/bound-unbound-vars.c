#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_DynamicRules_1;
static void init_module_constructors (void)
{
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_u_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_g_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_o_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_o_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_f_33;
ATerm term_b_33;
ATerm term_f_19;
ATerm term_v_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_r_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Defined_2, term_o_18, term_p_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym_Defined_2, term_f_33, term_j_33);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Defined_2, term_o_34, term_p_18);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_r_36);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_w_36);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_r_37);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_u_37);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym__2, term_j_38, term_k_38);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_t_38);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_38);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym__2, term_y_38, term_a_38);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym__2, term_j_40, term_a_38);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(sym__2, term_m_40, term_a_38);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(sym__2, term_z_40, term_a_38);
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym__3, term_j_38, term_k_38, (ATerm) ATempty);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_z_40);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_j_40);
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym__2, term_w_36, term_a_38);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm if_verbose4_1_0 (ATerm y_151 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm q_113 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm p_113 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm o_113 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm q_116 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_7 (ATerm l_26, ATerm m_26, ATerm n_26, ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_7 (ATerm f_26, ATerm j_26, ATerm h_26, ATerm t);
static ATerm u_3 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm m_7 (ATerm z_25, ATerm d_26, ATerm b_26, ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm n_7 (ATerm x_24, ATerm y_24, ATerm z_24, ATerm b_25, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm o_7 (ATerm i_23, ATerm j_23, ATerm h_23, ATerm t);
static ATerm n_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm p_7 (ATerm g_29, ATerm f_29, ATerm t);
static ATerm q_7 (ATerm v_32, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm v_23, ATerm t);
ATerm tboundin_3_0 (ATerm v_152 (ATerm), ATerm w_152 (ATerm), ATerm x_152 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm e_153 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm t_7 (ATerm p_128 (ATerm), ATerm q_54, ATerm p_54, ATerm t);
ATerm foldr_3_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm t);
static ATerm u_7 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_54, ATerm t_54, ATerm t);
static ATerm v_7 (ATerm k_128 (ATerm), ATerm o_54, ATerm n_54, ATerm t);
ATerm at_end_1_0 (ATerm v_124 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm u_64 (ATerm b_64, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm i_126 (ATerm), ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm l_126 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_8 (ATerm b_832, ATerm g_832, ATerm l_84, ATerm t);
ATerm while_not_2_0 (ATerm e_122 (ATerm), ATerm f_122 (ATerm), ATerm t);
ATerm for_3_0 (ATerm h_122 (ATerm), ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm k_67 (ATerm e_66, ATerm f_66, ATerm g_66, ATerm t);
static ATerm e_11 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
ATerm free_vars_3_0 (ATerm u_148 (ATerm), ATerm v_148 (ATerm), ATerm w_148 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm c_8 (ATerm z_113 (ATerm), ATerm z_26, ATerm x_26, ATerm t);
static ATerm f_12 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm d_8 (ATerm i_28, ATerm j_28, ATerm t);
ATerm end_scope_1_0 (ATerm w_113 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_113 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm e_8 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm h_8 (ATerm o_28, ATerm p_28, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm o_12 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm i_8 (ATerm x_39, ATerm y_39, ATerm t);
static ATerm j_8 (ATerm o_45, ATerm p_45, ATerm t);
static ATerm l_8 (ATerm c_123 (ATerm), ATerm w_403, ATerm u_45, ATerm t);
static ATerm k_8 (ATerm k_45, ATerm l_45, ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
ATerm output_1_0 (ATerm k_143 (ATerm), ATerm t);
static ATerm p_78 (ATerm j_78, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_8 (ATerm q_45, ATerm t);
static ATerm n_8 (ATerm d_38, ATerm e_38, ATerm t);
static ATerm o_8 (ATerm z_39, ATerm a_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_80 (ATerm z_78, ATerm t);
static ATerm b_80 (ATerm d_79, ATerm e_79, ATerm f_79, ATerm t);
static ATerm c_80 (ATerm n_79, ATerm o_79, ATerm p_79, ATerm t);
static ATerm p_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm l_143 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_124 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm s_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
ATerm default_system_usage_2_0 (ATerm l_146 (ATerm), ATerm m_146 (ATerm), ATerm t);
static ATerm w_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_8 (ATerm w_80, ATerm x_80, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm s_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_8 (ATerm d_28, ATerm e_28, ATerm c_28, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_8 (ATerm x_46, ATerm y_46, ATerm t);
ATerm foldr_2_0 (ATerm s_131 (ATerm), ATerm t_131 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_151 (ATerm), ATerm t);
static ATerm k_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_8 (ATerm o_32, ATerm p_32, ATerm q_32, ATerm t);
ATerm lookup_table_0_1 (ATerm p_29, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_32, ATerm x_32, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm s_8 (ATerm t_32, ATerm u_32, ATerm t);
static ATerm t_8 (ATerm y_32, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_124 (ATerm), ATerm t);
static ATerm a_9 (ATerm r_32, ATerm s_32, ATerm t);
static ATerm v_8 (ATerm w_29, ATerm x_29, ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_146 (ATerm), ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm z_14 (ATerm t);
ATerm parse_options_3_0 (ATerm d_146 (ATerm), ATerm e_146 (ATerm), ATerm f_146 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm t);
static ATerm d_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_151 (ATerm), ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL;
        t = term_q_15;
        v_0 = t;
        t = term_r_15;
        w_0 = t;
        t = term_s_15;
        t = v_8(v_0, w_0, t);
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_0, term_v_15);
        t = geq_0_0(t);
        t = c_0;
        t = y_151(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = c_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm q_113 (ATerm), ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,o_0 = NULL;
  static ATerm a_0 (ATerm t);
  static ATerm i_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,j_6 = NULL,e_6 = NULL;
    t_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        k_1 = ATgetArgument(t, 0);
        l_1 = ATgetArgument(t, 1);
        m_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_1);
    j_1 = t;
    t = k_1;
    t = q_113(t);
    q_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, q_1, l_1, m_1);
    e_6 = t;
    t = SSLsetAnnotations(e_6, j_1);
    s_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        e_1 = ATgetArgument(t, 0);
        f_1 = ATgetArgument(t, 1);
        g_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_1);
    d_1 = t;
    t = f_1;
    t = q_113(t);
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_1, h_1, g_1);
    j_6 = t;
    t = SSLsetAnnotations(j_6, d_1);
    return(t);
  }
  static ATerm i_0 (ATerm t)
  {
    ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,m_6 = NULL;
    z_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        v_1 = ATgetArgument(t, 0);
        w_1 = ATgetArgument(t, 1);
        x_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_1);
    u_1 = t;
    t = x_1;
    t = q_113(t);
    y_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, v_1, w_1, y_1);
    m_6 = t;
    t = SSLsetAnnotations(m_6, u_1);
    return(t);
  }
  c_1 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      z_0 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
      b_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_1);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_0, a_1, b_1);
  o_0 = t;
  t = SSLsetAnnotations(o_0, y_0);
  t = abstract_choice_2_0(a_0, i_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,u_6 = NULL;
  static ATerm k_0 (ATerm t);
  static ATerm m_0 (ATerm t);
  static ATerm k_0 (ATerm t)
  {
    ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,v_6 = NULL;
    i_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        f_2 = ATgetArgument(t, 0);
        g_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_2);
    e_2 = t;
    t = f_2;
    t = p_113(t);
    h_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, h_2, g_2);
    v_6 = t;
    t = SSLsetAnnotations(v_6, e_2);
    return(t);
  }
  static ATerm m_0 (ATerm t)
  {
    ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,y_6 = NULL;
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
    t = l_2;
    t = p_113(t);
    m_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, k_2, m_2);
    y_6 = t;
    t = SSLsetAnnotations(y_6, j_2);
    return(t);
  }
  d_2 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      b_2 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_2);
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, b_2, c_2);
  u_6 = t;
  t = SSLsetAnnotations(u_6, a_2);
  t = abstract_choice_2_0(k_0, m_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,v_2 = NULL;
  t_2 = t;
  t = save_MarkVar_0_0(t);
  p_2 = t;
  t = t_2;
  t = r_113(t);
  s_2 = t;
  t = save_MarkVar_0_0(t);
  q_2 = t;
  t = term_w_15;
  t = table_destroy_0_0(t);
  t = term_w_15;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_15, p_2);
  t = p_7(v_2, p_2, t);
  t = s_2;
  t = s_113(t);
  r_2 = t;
  t = q_2;
  t = isect_MarkVar_0_0(t);
  t = r_2;
  return(t);
}
ATerm mark_choice_1_0 (ATerm o_113 (ATerm), ATerm t)
{
  ATerm x_2 = NULL,a_3 = NULL,d_3 = NULL,f_3 = NULL,s_7 = NULL;
  static ATerm q_0 (ATerm t);
  static ATerm x_0 (ATerm t);
  static ATerm q_0 (ATerm t)
  {
    ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL,y_7 = NULL;
    q_3 = t;
    if(match_cons(t, sym_Choice_2))
      {
        m_3 = ATgetArgument(t, 0);
        n_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_3);
    l_3 = t;
    t = m_3;
    t = o_113(t);
    o_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, o_3, n_3);
    y_7 = t;
    t = SSLsetAnnotations(y_7, l_3);
    return(t);
  }
  static ATerm x_0 (ATerm t)
  {
    ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,v_3 = NULL,w_3 = NULL,z_7 = NULL;
    w_3 = t;
    if(match_cons(t, sym_Choice_2))
      {
        s_3 = ATgetArgument(t, 0);
        t_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_3);
    r_3 = t;
    t = t_3;
    t = o_113(t);
    v_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, s_3, v_3);
    z_7 = t;
    t = SSLsetAnnotations(z_7, r_3);
    return(t);
  }
  f_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      a_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_3);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, a_3, d_3);
  s_7 = t;
  t = SSLsetAnnotations(s_7, x_2);
  t = abstract_choice_2_0(q_0, x_0, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,u_8 = NULL,r_8 = NULL;
  y_3 = t;
  t = save_MarkVar_0_0(t);
  x_3 = t;
  t = y_3;
  if(match_cons(t, sym_Rec_2))
    {
      g_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_3);
  e_4 = t;
  t = h_4;
  t = mark_buv_0_0(t);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, g_4, i_4);
  r_8 = t;
  t = SSLsetAnnotations(r_8, e_4);
  t = x_3;
  t = isect_MarkVar_0_0(t);
  t = y_3;
  if(match_cons(t, sym_Rec_2))
    {
      b_4 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_3);
  a_4 = t;
  t = c_4;
  t = mark_buv_0_0(t);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, b_4, d_4);
  u_8 = t;
  t = SSLsetAnnotations(u_8, a_4);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,s_4 = NULL,v_4 = NULL,w_4 = NULL,b_5 = NULL,f_5 = NULL,h_5 = NULL,i_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,u_5 = NULL,v_5 = NULL,e_9 = NULL,d_9 = NULL,c_9 = NULL;
  v_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      q_5 = ATgetArgument(t, 0);
      r_5 = ATgetArgument(t, 1);
      s_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_5);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, q_5, r_5, s_5);
  c_9 = t;
  t = SSLsetAnnotations(c_9, p_5);
  u_5 = t;
  t = save_MarkVar_0_0(t);
  j_4 = t;
  t = u_5;
  if(match_cons(t, sym_PrimT_3))
    {
      i_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
      l_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_5);
  h_5 = t;
  t = l_5;
  t = map_1_0(e_3, t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, i_5, k_5, m_5);
  d_9 = t;
  t = SSLsetAnnotations(d_9, h_5);
  o_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      s_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
      w_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_5);
  k_4 = t;
  t = v_4;
  t = mark_buv_0_0(t);
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, s_4, b_5, w_4);
  e_9 = t;
  t = SSLsetAnnotations(e_9, k_4);
  f_5 = t;
  t = j_4;
  t = isect_MarkVar_0_0(t);
  t = f_5;
  return(t);
}
ATerm alltd_1_0 (ATerm q_116 (ATerm), ATerm t)
{
  static ATerm w_5 (ATerm t);
  static ATerm w_5 (ATerm t)
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_116(t);
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        t = SRTS_all(w_5, t);
      }
    return(t);
  }
  t = w_5(t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
      i_10 = ATgetArgument(t, 2);
      {
        ATerm s_0 = NULL,t_0 = NULL,i_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,o_2 = NULL,u_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL,b_3 = NULL,c_3 = NULL,i_3 = NULL,v_9 = NULL,s_9 = NULL,q_9 = NULL;
        t = SSLgetAnnotations(j_10);
        c_3 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, k_10, l_10, i_10);
        q_9 = t;
        t = SSLsetAnnotations(q_9, c_3);
        i_3 = t;
        t = save_MarkVar_0_0(t);
        s_0 = t;
        t = i_3;
        if(match_cons(t, sym_CallT_3))
          {
            u_2 = ATgetArgument(t, 0);
            w_2 = ATgetArgument(t, 1);
            y_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_3);
        o_2 = t;
        t = y_2;
        t = map_1_0(g_3, t);
        z_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, u_2, w_2, z_2);
        s_9 = t;
        t = SSLsetAnnotations(s_9, o_2);
        b_3 = t;
        if(match_cons(t, sym_CallT_3))
          {
            i_1 = ATgetArgument(t, 0);
            n_1 = ATgetArgument(t, 1);
            o_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_3);
        t_0 = t;
        t = n_1;
        t = mark_buv_0_0(t);
        p_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, i_1, p_1, o_1);
        v_9 = t;
        t = SSLsetAnnotations(v_9, t_0);
        r_1 = t;
        t = s_0;
        t = isect_MarkVar_0_0(t);
        t = r_1;
      }
    }
  else
    {
      ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,t_4 = NULL,u_4 = NULL,z_4 = NULL,x_9 = NULL,w_9 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          k_10 = ATgetArgument(t, 0);
          l_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_10);
      u_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, k_10, l_10);
      w_9 = t;
      t = SSLsetAnnotations(w_9, u_4);
      z_4 = t;
      t = save_MarkVar_0_0(t);
      n_4 = t;
      t = z_4;
      if(match_cons(t, sym_Call_2))
        {
          p_4 = ATgetArgument(t, 0);
          q_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_4);
      o_4 = t;
      t = q_4;
      t = mark_buv_0_0(t);
      r_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, p_4, r_4);
      x_9 = t;
      t = SSLsetAnnotations(x_9, o_4);
      t_4 = t;
      t = n_4;
      t = isect_MarkVar_0_0(t);
      t = t_4;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_w_15;
  return(t);
}
static ATerm k_7 (ATerm l_26, ATerm m_26, ATerm n_26, ATerm t)
{
  ATerm o_10 = NULL;
  static ATerm j_3 (ATerm t);
  static ATerm j_3 (ATerm t)
  {
    t = m_26;
    t = map_1_0(IntroduceBound_0_0, t);
    t = n_26;
    t = mark_build_vars_0_0(t);
    if(((o_10 != NULL) && (o_10 != t)))
      _fail(t);
    else
      o_10 = t;
    return(t);
  }
  t = scope_2_0(h_3, j_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, l_26, m_26, not_null(o_10));
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_w_15;
  return(t);
}
static ATerm l_7 (ATerm f_26, ATerm j_26, ATerm h_26, ATerm t)
{
  ATerm p_10 = NULL,s_10 = NULL,t_10 = NULL;
  static ATerm p_3 (ATerm t);
  static ATerm p_3 (ATerm t)
  {
    t = f_26;
    t = mark_match_vars_0_0(t);
    if(((p_10 != NULL) && (p_10 != t)))
      _fail(t);
    else
      p_10 = t;
    t = h_26;
    t = mark_buv_0_0(t);
    if(((s_10 != NULL) && (s_10 != t)))
      _fail(t);
    else
      s_10 = t;
    t = j_26;
    t = mark_build_vars_0_0(t);
    if(((t_10 != NULL) && (t_10 != t)))
      _fail(t);
    else
      t_10 = t;
    return(t);
  }
  t = scope_2_0(k_3, p_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_10), not_null(t_10), not_null(s_10)));
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_w_15;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm l_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_11);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            {
              ATerm e_16 = t;
              int g_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_11 = ATgetArgument(t, 0);
                      q_11 = ATgetArgument(t, 1);
                      r_11 = ATgetArgument(t, 2);
                      s_11 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_11;
                  t = map_1_0(m_4, t);
                  LocalPopChoice(g_16);
                }
              else
                {
                  t = e_16;
                  {
                    ATerm h_16 = t;
                    int i_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(i_16);
                      }
                    else
                      {
                        t = h_16;
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
static ATerm m_4 (ATerm t)
{
  ATerm e_12 = NULL;
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_12 = ATgetArgument(t, 0);
          {
            ATerm l_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_16);
      t = e_12;
    }
  else
    {
      t = j_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_12;
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
  ATerm n_12 = NULL;
  ATerm n_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_12 = ATgetArgument(t, 0);
          {
            ATerm s_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_16);
      t = n_12;
    }
  else
    {
      t = n_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_12;
    }
  return(t);
}
static ATerm m_7 (ATerm z_25, ATerm d_26, ATerm b_26, ATerm t)
{
  ATerm a_11 = NULL,f_11 = NULL,h_11 = NULL;
  static ATerm z_3 (ATerm t);
  static ATerm z_3 (ATerm t)
  {
    t = z_25;
    t = free_vars_3_0(f_4, l_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = z_25;
    t = mark_match_vars_0_0(t);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    t = b_26;
    t = mark_buv_0_0(t);
    if(((f_11 != NULL) && (f_11 != t)))
      _fail(t);
    else
      f_11 = t;
    t = d_26;
    t = mark_build_vars_0_0(t);
    if(((h_11 != NULL) && (h_11 != t)))
      _fail(t);
    else
      h_11 = t;
    return(t);
  }
  t = scope_2_0(u_3, z_3, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_11), not_null(h_11), not_null(f_11)));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm c_15 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_15);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            {
              ATerm y_16 = t;
              int a_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,j_15 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_15 = ATgetArgument(t, 0);
                      f_15 = ATgetArgument(t, 1);
                      g_15 = ATgetArgument(t, 2);
                      j_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_15;
                  t = map_1_0(d_5, t);
                  LocalPopChoice(a_17);
                }
              else
                {
                  t = y_16;
                  {
                    ATerm b_17 = t;
                    int d_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_17);
                      }
                    else
                      {
                        t = b_17;
                        t = dynrule_targs_1_0(e_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm x_15 = NULL;
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_15 = ATgetArgument(t, 0);
          {
            ATerm g_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_17);
      t = x_15;
    }
  else
    {
      t = e_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_15;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = map_1_0(g_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm f_16 = NULL;
  ATerm i_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_16 = ATgetArgument(t, 0);
          {
            ATerm m_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_17);
      t = f_16;
    }
  else
    {
      t = i_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_16;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_w_15;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm t_17 = NULL;
  ATerm n_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_17 = ATgetArgument(t, 0);
          {
            ATerm r_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_17);
      t = t_17;
    }
  else
    {
      t = n_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_17;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm w_17 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_17);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm s_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_17);
    }
  else
    {
      t = s_17;
      {
        ATerm v_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_17);
          }
        else
          {
            t = v_17;
            {
              ATerm z_17 = t;
              int a_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_17 = NULL,c_18 = NULL,d_18 = NULL,i_18 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_17 = ATgetArgument(t, 0);
                      c_18 = ATgetArgument(t, 1);
                      d_18 = ATgetArgument(t, 2);
                      i_18 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_18;
                  t = map_1_0(z_5, t);
                  LocalPopChoice(a_18);
                }
              else
                {
                  t = z_17;
                  {
                    ATerm b_18 = t;
                    int f_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_18);
                      }
                    else
                      {
                        t = b_18;
                        t = dynrule_targs_1_0(b_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm r_18 = NULL;
  ATerm h_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_18 = ATgetArgument(t, 0);
          {
            ATerm k_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_18);
      t = r_18;
    }
  else
    {
      t = h_18;
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
static ATerm b_6 (ATerm t)
{
  t = map_1_0(c_6, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm d_19 = NULL;
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_19 = ATgetArgument(t, 0);
          {
            ATerm n_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_18);
      t = d_19;
    }
  else
    {
      t = l_18;
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
static ATerm d_6 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,n_13 = NULL,t_13 = NULL,u_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      n_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
      u_13 = ATgetArgument(t, 2);
      {
        ATerm g_14 = NULL,i_14 = NULL,y_14 = NULL,b_15 = NULL;
        t = u_13;
        if(match_cons(t, sym_Rule_3))
          {
            j_13 = ATgetArgument(t, 0);
            k_13 = ATgetArgument(t, 1);
            l_13 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = u_13;
        t = free_vars_3_0(a_5, c_5, tboundin_3_0, t);
        g_14 = t;
        {
          static ATerm n_5 (ATerm t);
          static ATerm n_5 (ATerm t)
          {
            t = g_14;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = j_13;
            t = mark_match_vars_0_0(t);
            if(((i_14 != NULL) && (i_14 != t)))
              _fail(t);
            else
              i_14 = t;
            t = l_13;
            t = mark_buv_0_0(t);
            if(((y_14 != NULL) && (y_14 != t)))
              _fail(t);
            else
              y_14 = t;
            t = k_13;
            t = mark_build_vars_0_0(t);
            if(((b_15 != NULL) && (b_15 != t)))
              _fail(t);
            else
              b_15 = t;
            return(t);
          }
          t = scope_2_0(j_5, n_5, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, n_13, t_13, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_14), not_null(b_15), not_null(y_14)));
      }
    }
  else
    {
      ATerm q_16 = NULL,r_16 = NULL,z_16 = NULL,h_17 = NULL,o_17 = NULL,q_17 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          n_13 = ATgetArgument(t, 0);
          t_13 = ATgetArgument(t, 1);
          u_13 = ATgetArgument(t, 2);
          z_13 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = z_13;
      if(match_cons(t, sym_Rule_3))
        {
          a_14 = ATgetArgument(t, 0);
          b_14 = ATgetArgument(t, 1);
          c_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_13;
      t = map_1_0(t_5, t);
      q_16 = t;
      t = z_13;
      t = free_vars_3_0(x_5, y_5, tboundin_3_0, t);
      q_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_17, q_16);
      t = diff_0_0(t);
      r_16 = t;
      {
        static ATerm f_6 (ATerm t);
        static ATerm f_6 (ATerm t)
        {
          t = q_16;
          t = map_1_0(IntroduceBound_0_0, t);
          t = r_16;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = a_14;
          t = mark_match_vars_0_0(t);
          if(((z_16 != NULL) && (z_16 != t)))
            _fail(t);
          else
            z_16 = t;
          t = c_14;
          t = mark_buv_0_0(t);
          if(((h_17 != NULL) && (h_17 != t)))
            _fail(t);
          else
            h_17 = t;
          t = b_14;
          t = mark_build_vars_0_0(t);
          if(((o_17 != NULL) && (o_17 != t)))
            _fail(t);
          else
            o_17 = t;
          return(t);
        }
        t = scope_2_0(d_6, f_6, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, n_13, t_13, u_13, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_16), not_null(o_17), not_null(h_17)));
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_19);
  h_19 = t;
  t = term_q_18;
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, g_19), term_q_18);
  t = c_8(g_6, h_19, i_19, t);
  t = g_19;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm t_19 = NULL;
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_19 = ATgetArgument(t, 0);
          {
            ATerm u_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_18);
      t = t_19;
    }
  else
    {
      t = s_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_19;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_w_15;
  return(t);
}
static ATerm n_7 (ATerm x_24, ATerm y_24, ATerm z_24, ATerm b_25, ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  t = z_24;
  t = map_1_0(h_6, t);
  m_19 = t;
  {
    static ATerm l_6 (ATerm t);
    static ATerm l_6 (ATerm t)
    {
      t = m_19;
      t = map_1_0(IntroduceBound_0_0, t);
      t = b_25;
      t = mark_buv_0_0(t);
      if(((n_19 != NULL) && (n_19 != t)))
        _fail(t);
      else
        n_19 = t;
      return(t);
    }
    t = scope_2_0(i_6, l_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_24, y_24, z_24, not_null(n_19));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,i_21 = NULL;
  x_20 = t;
  if(match_cons(t, sym__2))
    {
      y_20 = ATgetArgument(t, 0);
      d_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_21;
  if(match_cons(t, sym_Undefined_0))
    {
      t = y_20;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_v_18;
        }
      else
        {
          t = term_v_18;
        }
    }
  else
    {
      ATerm x_18 = t;
      int y_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm z_18 = ATgetArgument(t, 0);
              i_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(y_18);
          t = y_20;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_v_18;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  b_21 = ATgetArgument(t, 0);
                  c_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm b_19 = t;
                int c_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, c_21, i_21);
                    {
                      ATerm e_19 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm a_6 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              a_6 = ATgetArgument(t, 0);
                              if((a_6 != ATgetArgument(t, 1)))
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
                          t = e_19;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, b_21, term_f_19);
                    LocalPopChoice(c_19);
                  }
                else
                  {
                    t = b_19;
                    t = i_21;
                    if((c_21 != t))
                      {
                        _fail(t);
                      }
                    t = y_20;
                  }
              }
            }
        }
      else
        {
          t = x_18;
          t = y_20;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_v_18;
        }
    }
  return(t);
}
static ATerm o_7 (ATerm i_23, ATerm j_23, ATerm h_23, ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  t = term_w_15;
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_15, i_23);
  t = v_8(s_21, i_23, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_21 = ATgetFirst((ATermList) t);
      {
        ATerm j_19 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_23, q_21);
  t = CompareEntries_0_0(t);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_23, (ATerm) ATinsert(CheckATermList(h_23), r_21));
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,s_22 = NULL,t_22 = NULL;
  t_22 = t;
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
      t = m_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_22 = ATgetFirst((ATermList) t);
          s_22 = (ATerm) ATgetNext((ATermList) t);
          t = n_22;
          {
            ATerm k_19 = t;
            int l_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm o_19 = ATgetArgument(t, 0);
                    ATerm p_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(l_19);
                t = l_22;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = t_22;
                  }
                else
                  {
                    ATerm r_19 = t;
                    int s_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = t_22;
                        t = o_7(l_22, n_22, s_22, t);
                        LocalPopChoice(s_19);
                      }
                    else
                      {
                        t = r_19;
                        t = t_22;
                      }
                  }
              }
            else
              {
                t = k_19;
                t = l_22;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = t_22;
                  }
                else
                  {
                    t = t_22;
                  }
              }
          }
        }
      else
        {
          t = l_22;
          if(match_cons(t, sym_Scopes_0))
            {
              t = t_22;
            }
          else
            {
              t = t_22;
            }
        }
    }
  else
    {
      t = t_22;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  t = map_1_0(n_6, t);
  j_22 = t;
  t = term_w_15;
  t = table_destroy_0_0(t);
  t = term_w_15;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_15, j_22);
  t = p_7(k_22, j_22, t);
  t = j_22;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,d_27 = NULL;
  d_27 = t;
  {
    ATerm u_19 = t;
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
        t = d_27;
      }
    else
      {
        t = u_19;
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
              t = d_27;
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
                    t = d_27;
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
                    t = d_27;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  l_24 = t;
  t = d_27;
  t = SRTS_one(mark_buv_0_0, t);
  m_24 = t;
  t = l_24;
  t = isect_MarkVar_0_0(t);
  t = m_24;
  return(t);
}
static ATerm p_7 (ATerm g_29, ATerm f_29, ATerm t)
{
  static ATerm o_6 (ATerm t);
  static ATerm o_6 (ATerm t)
  {
    ATerm o_27 = NULL,p_27 = NULL,r_27 = NULL;
    if(match_cons(t, sym__2))
      {
        o_27 = ATgetArgument(t, 0);
        p_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, g_29, o_27, p_27);
    t = lookup_table_0_1(g_29, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        r_27 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = z_8(o_27, p_27, r_27, t);
    t = (ATerm) ATmakeAppl(sym__3, g_29, o_27, p_27);
    return(t);
  }
  t = f_29;
  t = map_1_0(o_6, t);
  return(t);
}
static ATerm q_7 (ATerm v_32, ATerm t)
{
  t = SSL_hashtable_keys(v_32);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_27 = NULL,x_27 = NULL;
  static ATerm p_6 (ATerm t);
  static ATerm p_6 (ATerm t)
  {
    ATerm y_27 = NULL,k_28 = NULL;
    y_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), y_27);
    t = v_8(not_null(t_27), y_27, t);
    k_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_27, k_28);
    return(t);
  }
  if(((t_27 != NULL) && (t_27 != t)))
    _fail(t);
  else
    t_27 = t;
  t = lookup_table_0_1(t_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(x_27, t);
  t = map_1_0(p_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_w_15;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm v_23, ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm q_6 (ATerm t);
    static ATerm q_6 (ATerm t)
    {
      static ATerm r_30 (ATerm z_28, ATerm t);
      static ATerm r_30 (ATerm z_28, ATerm t)
      {
        ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL,j_29 = NULL;
        t = z_28;
        if(match_cons(t, sym__2))
          {
            ATerm g_20 = ATgetArgument(t, 0);
            a_29 = g_20;
            if(match_cons(g_20, sym_Var_1))
              {
                b_29 = ATgetArgument(g_20, 0);
              }
            else
              _fail(t);
            {
              ATerm h_20 = ATgetArgument(t, 1);
              if(((ATgetType(h_20) == AT_LIST) && !(ATisEmpty(h_20))))
                {
                  ATerm l_20 = ATgetFirst((ATermList) h_20);
                  if(match_cons(l_20, sym_Defined_2))
                    {
                      c_29 = ATgetArgument(l_20, 0);
                      {
                        ATerm m_20 = ATgetArgument(l_20, 1);
                        if((ATgetSymbol((ATermAppl) m_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  j_29 = (ATerm) ATgetNext((ATermList) h_20);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_23;
        {
          static ATerm r_6 (ATerm t);
          static ATerm r_6 (ATerm t)
          {
            if((b_29 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(r_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, a_29, (ATerm) ATinsert(CheckATermList(j_29), (ATerm) ATmakeAppl(sym_Defined_2, c_29, term_f_19)));
        return(t);
      }
      ATerm e_30 = NULL,n_30 = NULL;
      n_30 = t;
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                e_30 = ATgetArgument(t, 0);
                {
                  ATerm r_20 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(q_20);
            t = e_30;
            if(match_cons(t, sym_Scopes_0))
              {
                t = n_30;
              }
            else
              {
                ATerm s_20 = t;
                int z_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = r_30(n_30, t);
                    LocalPopChoice(z_20);
                  }
                else
                  {
                    t = s_20;
                    t = n_30;
                  }
              }
          }
        else
          {
            t = p_20;
            {
              ATerm e_21 = t;
              int f_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_30(n_30, t);
                  LocalPopChoice(f_21);
                }
              else
                {
                  t = e_21;
                  t = n_30;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(q_6, t);
  }
  x_28 = t;
  t = term_w_15;
  t = table_destroy_0_0(t);
  t = term_w_15;
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_15, x_28);
  t = p_7(y_28, x_28, t);
  t = x_28;
  return(t);
}
ATerm tboundin_3_0 (ATerm v_152 (ATerm), ATerm w_152 (ATerm), ATerm x_152 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  n_42 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_42 = ATgetArgument(t, 0);
      m_42 = ATgetArgument(t, 1);
      {
        ATerm k_6 = NULL,s_6 = NULL,t_6 = NULL,i_20 = NULL;
        t = SSLgetAnnotations(n_42);
        k_6 = t;
        t = o_42;
        t = x_152(t);
        s_6 = t;
        t = m_42;
        t = v_152(t);
        t_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, s_6, t_6);
        i_20 = t;
        t = SSLsetAnnotations(i_20, k_6);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          o_42 = ATgetArgument(t, 0);
          {
            ATerm f_7 = NULL,h_7 = NULL,i_7 = NULL,w_7 = NULL,x_7 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,k_9 = NULL,n_20 = NULL,j_20 = NULL;
            t = SSLgetAnnotations(n_42);
            f_7 = t;
            t = o_42;
            if(match_cons(t, sym_Rule_3))
              {
                i_7 = ATgetArgument(t, 0);
                w_7 = ATgetArgument(t, 1);
                x_7 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_42);
            h_7 = t;
            t = i_7;
            t = v_152(t);
            f_9 = t;
            t = w_7;
            t = v_152(t);
            g_9 = t;
            t = x_7;
            t = v_152(t);
            h_9 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, f_9, g_9, h_9);
            j_20 = t;
            t = SSLsetAnnotations(j_20, h_7);
            k_9 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, k_9);
            n_20 = t;
            t = SSLsetAnnotations(n_20, f_7);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              o_42 = ATgetArgument(t, 0);
              m_42 = ATgetArgument(t, 1);
              k_42 = ATgetArgument(t, 2);
              {
                ATerm y_9 = NULL,c_10 = NULL,e_10 = NULL,f_10 = NULL,o_20 = NULL;
                t = SSLgetAnnotations(n_42);
                y_9 = t;
                t = o_42;
                t = x_152(t);
                c_10 = t;
                t = m_42;
                t = x_152(t);
                e_10 = t;
                t = k_42;
                t = x_152(t);
                f_10 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, c_10, e_10, f_10);
                o_20 = t;
                t = SSLsetAnnotations(o_20, y_9);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  o_42 = ATgetArgument(t, 0);
                  m_42 = ATgetArgument(t, 1);
                  k_42 = ATgetArgument(t, 2);
                  l_42 = ATgetArgument(t, 3);
                  {
                    ATerm d_11 = NULL,k_11 = NULL,m_11 = NULL,n_11 = NULL,v_11 = NULL,t_20 = NULL;
                    t = SSLgetAnnotations(n_42);
                    d_11 = t;
                    t = o_42;
                    t = x_152(t);
                    k_11 = t;
                    t = m_42;
                    t = x_152(t);
                    m_11 = t;
                    t = k_42;
                    t = x_152(t);
                    n_11 = t;
                    t = l_42;
                    t = v_152(t);
                    v_11 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, k_11, m_11, n_11, v_11);
                    t_20 = t;
                    t = SSLsetAnnotations(t_20, d_11);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_42 = ATgetArgument(t, 0);
                      m_42 = ATgetArgument(t, 1);
                      k_42 = ATgetArgument(t, 2);
                      l_42 = ATgetArgument(t, 3);
                      {
                        ATerm t_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,u_20 = NULL;
                        t = SSLgetAnnotations(n_42);
                        t_12 = t;
                        t = o_42;
                        t = x_152(t);
                        y_12 = t;
                        t = m_42;
                        t = x_152(t);
                        z_12 = t;
                        t = k_42;
                        t = x_152(t);
                        a_13 = t;
                        t = l_42;
                        t = v_152(t);
                        b_13 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, y_12, z_12, a_13, b_13);
                        u_20 = t;
                        t = SSLsetAnnotations(u_20, t_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          o_42 = ATgetArgument(t, 0);
                          m_42 = ATgetArgument(t, 1);
                          {
                            ATerm q_13 = NULL,v_13 = NULL,w_13 = NULL,v_20 = NULL;
                            t = SSLgetAnnotations(n_42);
                            q_13 = t;
                            t = o_42;
                            t = x_152(t);
                            v_13 = t;
                            t = m_42;
                            t = v_152(t);
                            w_13 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, v_13, w_13);
                            v_20 = t;
                            t = SSLsetAnnotations(v_20, q_13);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              o_42 = ATgetArgument(t, 0);
                              m_42 = ATgetArgument(t, 1);
                              {
                                ATerm o_14 = NULL,r_14 = NULL,t_14 = NULL,w_20 = NULL;
                                t = SSLgetAnnotations(n_42);
                                o_14 = t;
                                t = o_42;
                                t = x_152(t);
                                r_14 = t;
                                t = m_42;
                                t = v_152(t);
                                t_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, r_14, t_14);
                                w_20 = t;
                                t = SSLsetAnnotations(w_20, o_14);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  o_42 = ATgetArgument(t, 0);
                                  m_42 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_15 = NULL,t_15 = NULL,u_15 = NULL,p_21 = NULL;
                                    t = SSLgetAnnotations(n_42);
                                    k_15 = t;
                                    t = o_42;
                                    t = x_152(t);
                                    t_15 = t;
                                    t = m_42;
                                    t = v_152(t);
                                    u_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, t_15, u_15);
                                    p_21 = t;
                                    t = SSLsetAnnotations(p_21, k_15);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      o_42 = ATgetArgument(t, 0);
                                      {
                                        ATerm m_16 = NULL,o_16 = NULL,v_21 = NULL;
                                        t = SSLgetAnnotations(n_42);
                                        m_16 = t;
                                        t = o_42;
                                        t = v_152(t);
                                        o_16 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, o_16);
                                        v_21 = t;
                                        t = SSLsetAnnotations(v_21, m_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          o_42 = ATgetArgument(t, 0);
                                          {
                                            ATerm x_16 = NULL,c_17 = NULL,w_21 = NULL;
                                            t = SSLgetAnnotations(n_42);
                                            x_16 = t;
                                            t = o_42;
                                            t = v_152(t);
                                            c_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, c_17);
                                            w_21 = t;
                                            t = SSLsetAnnotations(w_21, x_16);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              o_42 = ATgetArgument(t, 0);
                                              {
                                                ATerm j_17 = NULL,l_17 = NULL,x_21 = NULL;
                                                t = SSLgetAnnotations(n_42);
                                                j_17 = t;
                                                t = o_42;
                                                t = v_152(t);
                                                l_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, l_17);
                                                x_21 = t;
                                                t = SSLsetAnnotations(x_21, j_17);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  o_42 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm e_18 = NULL,g_18 = NULL,e_22 = NULL;
                                                    t = SSLgetAnnotations(n_42);
                                                    e_18 = t;
                                                    t = o_42;
                                                    t = v_152(t);
                                                    g_18 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, g_18);
                                                    e_22 = t;
                                                    t = SSLsetAnnotations(e_22, e_18);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm w_18 = NULL,a_19 = NULL,f_22 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      o_42 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(n_42);
                                                  w_18 = t;
                                                  t = o_42;
                                                  t = v_152(t);
                                                  a_19 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, a_19);
                                                  f_22 = t;
                                                  t = SSLsetAnnotations(f_22, w_18);
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
ATerm dynrule_targs_1_0 (ATerm e_153 (ATerm), ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,v_43 = NULL;
  ATerm g_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          r_43 = ATgetArgument(t, 0);
          {
            ATerm k_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_21);
      t = r_43;
      if(match_cons(t, sym_DynRuleId_1))
        {
          s_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_43;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm l_21 = ATgetArgument(t, 0);
          ATerm m_21 = ATgetArgument(t, 1);
          v_43 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_43;
    }
  else
    {
      t = g_21;
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                r_43 = ATgetArgument(t, 0);
                {
                  ATerm b_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_21);
            t = r_43;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_43;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm g_22 = ATgetArgument(t, 0);
                ATerm o_22 = ATgetArgument(t, 1);
                v_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = v_43;
          }
        else
          {
            t = n_21;
            if(match_cons(t, sym_AddDynRule_2))
              {
                r_43 = ATgetArgument(t, 0);
                {
                  ATerm q_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = r_43;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_43;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm r_22 = ATgetArgument(t, 0);
                ATerm u_22 = ATgetArgument(t, 1);
                v_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = v_43;
          }
      }
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm d_45 = NULL;
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_45 = ATgetArgument(t, 0);
          {
            ATerm x_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_22);
      t = d_45;
    }
  else
    {
      t = v_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_45;
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm d_46 = NULL;
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_46 = ATgetArgument(t, 0);
          {
            ATerm a_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_22);
      t = d_46;
    }
  else
    {
      t = y_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_46;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm w_44 = NULL;
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm d_23 = ATgetArgument(t, 0);
          ATerm e_23 = ATgetArgument(t, 1);
          w_44 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(c_23);
      t = w_44;
      t = map_1_0(w_6, t);
    }
  else
    {
      t = b_23;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm f_23 = ATgetArgument(t, 0);
          ATerm g_23 = ATgetArgument(t, 1);
          w_44 = ATgetArgument(t, 2);
          {
            ATerm k_23 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = w_44;
      t = map_1_0(x_6, t);
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm e_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_48);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
            {
              ATerm q_23 = t;
              int r_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,o_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_48 = ATgetArgument(t, 0);
                      j_48 = ATgetArgument(t, 1);
                      k_48 = ATgetArgument(t, 2);
                      o_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_48;
                  t = map_1_0(b_7, t);
                  LocalPopChoice(r_23);
                }
              else
                {
                  t = q_23;
                  {
                    ATerm u_23 = t;
                    int w_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_23);
                      }
                    else
                      {
                        t = u_23;
                        t = dynrule_targs_1_0(c_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm e_49 = NULL;
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_49 = ATgetArgument(t, 0);
          {
            ATerm z_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_23);
      t = e_49;
    }
  else
    {
      t = x_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_49;
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = map_1_0(d_7, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm n_49 = NULL;
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_49 = ATgetArgument(t, 0);
          {
            ATerm c_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_24);
      t = n_49;
    }
  else
    {
      t = a_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_49;
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm x_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_49);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm a_50 = NULL,c_50 = NULL,g_50 = NULL,o_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_50 = ATgetArgument(t, 0);
                      c_50 = ATgetArgument(t, 1);
                      g_50 = ATgetArgument(t, 2);
                      o_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_50;
                  t = map_1_0(r_7, t);
                  LocalPopChoice(j_24);
                }
              else
                {
                  t = i_24;
                  {
                    ATerm p_24 = t;
                    int q_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(q_24);
                      }
                    else
                      {
                        t = p_24;
                        t = dynrule_targs_1_0(b_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm x_50 = NULL;
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_50 = ATgetArgument(t, 0);
          {
            ATerm t_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_24);
      t = x_50;
    }
  else
    {
      t = r_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_50;
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = map_1_0(f_8, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm h_51 = NULL;
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_51 = ATgetArgument(t, 0);
          {
            ATerm a_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_24);
      t = h_51;
    }
  else
    {
      t = v_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_51;
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm n_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_51);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            {
              ATerm j_25 = t;
              int k_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_51 = ATgetArgument(t, 0);
                      s_51 = ATgetArgument(t, 1);
                      t_51 = ATgetArgument(t, 2);
                      u_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_51;
                  t = map_1_0(b_9, t);
                  LocalPopChoice(k_25);
                }
              else
                {
                  t = j_25;
                  {
                    ATerm m_25 = t;
                    int n_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_25);
                      }
                    else
                      {
                        t = m_25;
                        t = dynrule_targs_1_0(i_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm k_52 = NULL;
  ATerm o_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_52 = ATgetArgument(t, 0);
          {
            ATerm s_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_25);
      t = k_52;
    }
  else
    {
      t = o_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_52;
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = map_1_0(j_9, t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm t_52 = NULL;
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_52 = ATgetArgument(t, 0);
          {
            ATerm v_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_25);
      t = t_52;
    }
  else
    {
      t = t_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_52;
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm z_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_52);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm w_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = w_25;
      {
        ATerm c_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_26);
          }
        else
          {
            t = c_26;
            {
              ATerm g_26 = t;
              int i_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_53 = NULL,c_53 = NULL,f_53 = NULL,g_53 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_53 = ATgetArgument(t, 0);
                      c_53 = ATgetArgument(t, 1);
                      f_53 = ATgetArgument(t, 2);
                      g_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_53;
                  t = map_1_0(n_9, t);
                  LocalPopChoice(i_26);
                }
              else
                {
                  t = g_26;
                  {
                    ATerm k_26 = t;
                    int o_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_26);
                      }
                    else
                      {
                        t = k_26;
                        t = dynrule_targs_1_0(o_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm t_53 = NULL;
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_53 = ATgetArgument(t, 0);
          {
            ATerm r_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_26);
      t = t_53;
    }
  else
    {
      t = p_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_53;
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = map_1_0(p_9, t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm g_54 = NULL;
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_54 = ATgetArgument(t, 0);
          {
            ATerm w_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_26);
      t = g_54;
    }
  else
    {
      t = s_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_54;
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm z_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_54);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm y_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = y_26;
      {
        ATerm b_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_27);
          }
        else
          {
            t = b_27;
            {
              ATerm f_27 = t;
              int i_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_55 = ATgetArgument(t, 0);
                      f_55 = ATgetArgument(t, 1);
                      g_55 = ATgetArgument(t, 2);
                      h_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_55;
                  t = map_1_0(u_9, t);
                  LocalPopChoice(i_27);
                }
              else
                {
                  t = f_27;
                  {
                    ATerm j_27 = t;
                    int k_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_27);
                      }
                    else
                      {
                        t = j_27;
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
static ATerm u_9 (ATerm t)
{
  ATerm w_55 = NULL;
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_55 = ATgetArgument(t, 0);
          {
            ATerm s_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_27);
      t = w_55;
    }
  else
    {
      t = l_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_55;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = map_1_0(a_10, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm h_56 = NULL;
  ATerm u_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_56 = ATgetArgument(t, 0);
          {
            ATerm b_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_28);
      t = h_56;
    }
  else
    {
      t = u_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_56;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm z_47 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      z_47 = ATgetArgument(t, 0);
      t = z_47;
      t = free_vars_3_0(z_6, a_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          z_47 = ATgetArgument(t, 0);
          t = z_47;
          t = free_vars_3_0(e_7, g_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              z_47 = ATgetArgument(t, 0);
              t = z_47;
              t = free_vars_3_0(g_8, x_8, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  z_47 = ATgetArgument(t, 0);
                  t = z_47;
                  t = free_vars_3_0(l_9, m_9, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      z_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_47;
                  t = free_vars_3_0(r_9, t_9, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm m_57 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_57);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm h_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_28);
          }
        else
          {
            t = h_28;
            {
              ATerm m_28 = t;
              int n_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_57 = ATgetArgument(t, 0);
                      v_57 = ATgetArgument(t, 1);
                      w_57 = ATgetArgument(t, 2);
                      x_57 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_57;
                  t = map_1_0(g_10, t);
                  LocalPopChoice(n_28);
                }
              else
                {
                  t = m_28;
                  {
                    ATerm t_28 = t;
                    int u_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_28);
                      }
                    else
                      {
                        t = t_28;
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
  ATerm e_58 = NULL;
  ATerm w_28 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_58 = ATgetArgument(t, 0);
          {
            ATerm e_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_29);
      t = e_58;
    }
  else
    {
      t = w_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_58;
    }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = map_1_0(m_10, t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm n_58 = NULL;
  ATerm h_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_58 = ATgetArgument(t, 0);
          {
            ATerm l_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_29);
      t = n_58;
    }
  else
    {
      t = h_29;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm v_56 = NULL,g_57 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      g_57 = ATgetArgument(t, 0);
      t = g_57;
      if(match_cons(t, sym_Rule_3))
        {
          v_56 = ATgetArgument(t, 0);
          {
            ATerm m_29 = ATgetArgument(t, 1);
          }
          {
            ATerm n_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_56;
      t = free_vars_3_0(b_10, d_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          g_57 = ATgetArgument(t, 0);
          {
            ATerm q_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = g_57;
    }
  return(t);
}
static ATerm t_7 (ATerm p_128 (ATerm), ATerm q_54, ATerm p_54, ATerm t)
{
  static ATerm a_60 (ATerm t);
  static ATerm a_60 (ATerm t)
  {
    ATerm q_59 = NULL,s_59 = NULL,x_59 = NULL;
    q_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_54;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_59 = ATgetFirst((ATermList) t);
            x_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_29 = t;
          int t_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_59;
              {
                static ATerm n_10 (ATerm t);
                static ATerm n_10 (ATerm t)
                {
                  t = p_54;
                  return(t);
                }
                t = u_7(p_128, n_10, s_59, x_59, t);
              }
              t = a_60(t);
              LocalPopChoice(t_29);
            }
          else
            {
              t = r_29;
              {
                ATerm q_19 = NULL,v_19 = NULL,v_27 = NULL;
                t = SSLgetAnnotations(q_59);
                q_19 = t;
                t = x_59;
                t = a_60(t);
                v_19 = t;
                t = (ATerm) ATinsert(CheckATermList(v_19), s_59);
                v_27 = t;
                t = SSLsetAnnotations(v_27, q_19);
              }
            }
        }
      }
    return(t);
  }
  t = q_54;
  t = a_60(t);
  return(t);
}
ATerm foldr_3_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL;
  d_60 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_60;
      t = u_131(t);
    }
  else
    {
      ATerm m_60 = NULL,r_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_60 = ATgetFirst((ATermList) t);
          f_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_60;
      t = w_131(t);
      m_60 = t;
      t = f_60;
      t = foldr_3_0(u_131, v_131, w_131, t);
      r_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_60, r_60);
      t = v_131(t);
    }
  return(t);
}
static ATerm u_7 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_54, ATerm t_54, ATerm t)
{
  t = t_128(t);
  {
    static ATerm q_10 (ATerm t);
    static ATerm q_10 (ATerm t)
    {
      ATerm u_60 = NULL;
      u_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_54, u_60);
      t = s_128(t);
      return(t);
    }
    t = fetch_1_0(q_10, t);
  }
  t = t_54;
  return(t);
}
static ATerm v_7 (ATerm k_128 (ATerm), ATerm o_54, ATerm n_54, ATerm t)
{
  static ATerm e_62 (ATerm t);
  static ATerm e_62 (ATerm t)
  {
    ATerm r_61 = NULL,s_61 = NULL,w_61 = NULL;
    r_61 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_61;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_61 = ATgetFirst((ATermList) t);
            w_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_61;
              {
                static ATerm r_10 (ATerm t);
                static ATerm r_10 (ATerm t)
                {
                  t = n_54;
                  return(t);
                }
                t = u_7(k_128, r_10, s_61, w_61, t);
              }
              t = e_62(t);
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              {
                ATerm f_20 = NULL,k_20 = NULL,f_31 = NULL;
                t = SSLgetAnnotations(r_61);
                f_20 = t;
                t = w_61;
                t = e_62(t);
                k_20 = t;
                t = (ATerm) ATinsert(CheckATermList(k_20), s_61);
                f_31 = t;
                t = SSLsetAnnotations(f_31, f_20);
              }
            }
        }
      }
    return(t);
  }
  t = o_54;
  t = e_62(t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_124 (ATerm), ATerm t)
{
  static ATerm n_63 (ATerm t);
  static ATerm n_63 (ATerm t)
  {
    ATerm j_63 = NULL,l_63 = NULL,m_63 = NULL;
    m_63 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_63 = ATgetFirst((ATermList) t);
        l_63 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_21 = NULL,h_21 = NULL,h_31 = NULL;
          t = SSLgetAnnotations(m_63);
          a_21 = t;
          t = l_63;
          t = n_63(t);
          h_21 = t;
          t = (ATerm) ATinsert(CheckATermList(h_21), j_63);
          h_31 = t;
          t = SSLsetAnnotations(h_31, a_21);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_63;
        t = v_124(t);
      }
    return(t);
  }
  t = n_63(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL;
  i_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_62;
    }
  else
    {
      static ATerm u_10 (ATerm t);
      static ATerm u_10 (ATerm t)
      {
        t = not_null(k_62);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_62 = ATgetFirst((ATermList) t);
          if(((k_62 != NULL) && (k_62 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_62;
      t = at_end_1_0(u_10, t);
    }
  return(t);
}
static ATerm u_64 (ATerm b_64, ATerm t)
{
  ATerm c_64 = NULL;
  t = SSL_explode_term(b_64);
  if(match_cons(t, sym__2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_64;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,m_64 = NULL;
  m_64 = t;
  if(match_cons(t, sym__2))
    {
      e_64 = ATgetArgument(t, 0);
      f_64 = ATgetArgument(t, 1);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_10 (ATerm t);
            static ATerm v_10 (ATerm t)
            {
              t = f_64;
              return(t);
            }
            t = e_64;
            t = at_end_1_0(v_10, t);
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            t = u_64(m_64, t);
          }
      }
    }
  else
    {
      t = u_64(m_64, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm i_126 (ATerm), ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm l_126 (ATerm), ATerm t)
{
  static ATerm d_65 (ATerm t);
  static ATerm d_65 (ATerm t)
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_126(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        {
          ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,j_31 = NULL;
          t = j_126(t);
          a_65 = t;
          if(match_cons(t, sym__2))
            {
              w_64 = ATgetArgument(t, 0);
              x_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_65);
          v_64 = t;
          t = w_64;
          t = l_126(t);
          y_64 = t;
          t = x_64;
          t = d_65(t);
          z_64 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_64, z_64);
          j_31 = t;
          t = SSLsetAnnotations(j_31, v_64);
          t = k_126(t);
        }
      }
    return(t);
  }
  t = d_65(t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_30 = ATgetArgument(t, 0);
      if(((ATgetType(f_30) != AT_LIST) || !(ATisEmpty(f_30))))
        _fail(t);
      {
        ATerm g_30 = ATgetArgument(t, 1);
        if(((ATgetType(g_30) != AT_LIST) || !(ATisEmpty(g_30))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_30 = ATgetArgument(t, 0);
      if(((ATgetType(i_30) == AT_LIST) && !(ATisEmpty(i_30))))
        {
          l_65 = ATgetFirst((ATermList) i_30);
          m_65 = (ATerm) ATgetNext((ATermList) i_30);
        }
      else
        _fail(t);
      {
        ATerm j_30 = ATgetArgument(t, 1);
        if(((ATgetType(j_30) == AT_LIST) && !(ATisEmpty(j_30))))
          {
            n_65 = ATgetFirst((ATermList) j_30);
            o_65 = (ATerm) ATgetNext((ATermList) j_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_65, n_65), (ATerm) ATmakeAppl(sym__2, m_65, o_65));
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL;
  if(match_cons(t, sym__2))
    {
      p_65 = ATgetArgument(t, 0);
      q_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_65), p_65);
  return(t);
}
static ATerm a_8 (ATerm b_832, ATerm g_832, ATerm l_84, ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL;
  t = SSL_explode_term(g_832);
  if(match_cons(t, sym__2))
    {
      g_65 = ATgetArgument(t, 0);
      i_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_832);
  if(match_cons(t, sym__2))
    {
      if((g_65 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_65, i_65);
  t = genzip_4_0(w_10, x_10, y_10, _id, t);
  j_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_65, l_84);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm e_122 (ATerm), ATerm f_122 (ATerm), ATerm t)
{
  static ATerm s_65 (ATerm t);
  static ATerm s_65 (ATerm t)
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_122(t);
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        t = f_122(t);
        t = s_65(t);
      }
    return(t);
  }
  t = s_65(t);
  return(t);
}
ATerm for_3_0 (ATerm h_122 (ATerm), ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t)
{
  t = h_122(t);
  t = while_not_2_0(i_122, j_122, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm z_65 = NULL;
  z_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_65);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,l_31 = NULL;
  d_66 = t;
  if(match_cons(t, sym__2))
    {
      b_66 = ATgetArgument(t, 0);
      c_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_66);
  a_66 = t;
  t = c_66;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_66, c_66);
  l_31 = t;
  t = SSLsetAnnotations(l_31, a_66);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL;
  w_66 = t;
  if(match_cons(t, sym__2))
    {
      x_66 = ATgetArgument(t, 0);
      y_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_66 = ATgetFirst((ATermList) t);
      a_67 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_67(x_66, y_66, w_66, t);
            LocalPopChoice(o_30);
          }
        else
          {
            t = m_30;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_66), z_66), a_67);
          }
      }
    }
  else
    {
      t = k_67(x_66, y_66, w_66, t);
    }
  return(t);
}
static ATerm k_67 (ATerm e_66, ATerm f_66, ATerm g_66, ATerm t)
{
  ATerm h_66 = NULL,k_66 = NULL,m_31 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL;
  t = SSLgetAnnotations(g_66);
  h_66 = t;
  t = f_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_66 = ATgetFirst((ATermList) t);
      q_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_66;
  if(match_cons(t, sym__2))
    {
      o_66 = ATgetArgument(t, 0);
      p_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_66;
        if((o_66 != t))
          {
            _fail(t);
          }
        t = q_66;
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        t = f_66;
        t = a_8(o_66, p_66, q_66, t);
      }
  }
  k_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_66, k_66);
  m_31 = t;
  t = SSLsetAnnotations(m_31, h_66);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm j_67 = NULL;
  if(match_cons(t, sym__2))
    {
      j_67 = ATgetArgument(t, 0);
      if((j_67 != ATgetArgument(t, 1)))
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
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(z_10, b_11, c_11, t);
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      {
        ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL;
        e_67 = t;
        if(match_cons(t, sym__2))
          {
            f_67 = ATgetArgument(t, 0);
            g_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_67;
        t = v_7(e_11, f_67, g_67, t);
      }
    }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      y_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(t_11, y_21, z_21, t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm a_22 = NULL;
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      if((a_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(x_11, h_22, i_22, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm p_22 = NULL;
  if(match_cons(t, sym__2))
    {
      p_22 = ATgetArgument(t, 0);
      if((p_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm u_148 (ATerm), ATerm v_148 (ATerm), ATerm w_148 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm y_67 (ATerm t);
  static ATerm y_67 (ATerm t)
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_148(t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        {
          ATerm z_30 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_67 = NULL,n_67 = NULL,t_21 = NULL,u_21 = NULL;
              m_67 = t;
              t = v_148(t);
              n_67 = t;
              t = m_67;
              {
                static ATerm g_11 (ATerm t);
                static ATerm g_11 (ATerm t)
                {
                  ATerm p_67 = NULL;
                  t = y_67(t);
                  p_67 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_67, n_67);
                  t = diff_0_0(t);
                  return(t);
                }
                t = w_148(g_11, y_67, i_11, t);
              }
              u_21 = t;
              t = SSL_explode_term(u_21);
              if(match_cons(t, sym__2))
                {
                  ATerm e_31 = ATgetArgument(t, 0);
                  t_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_21;
              t = foldr_3_0(j_11, o_11, _id, t);
              LocalPopChoice(d_31);
            }
          else
            {
              t = z_30;
              {
                ATerm c_22 = NULL,d_22 = NULL;
                d_22 = t;
                t = SSL_explode_term(d_22);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_31 = ATgetArgument(t, 0);
                    c_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_22;
                t = foldr_3_0(u_11, w_11, y_67, t);
              }
            }
        }
      }
    return(t);
  }
  t = y_67(t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm q_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_68);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm i_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_31);
    }
  else
    {
      t = i_31;
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_31);
          }
        else
          {
            t = n_31;
            {
              ATerm r_31 = t;
              int s_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_68 = ATgetArgument(t, 0);
                      t_68 = ATgetArgument(t, 1);
                      u_68 = ATgetArgument(t, 2);
                      v_68 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_68;
                  t = map_1_0(a_12, t);
                  LocalPopChoice(s_31);
                }
              else
                {
                  t = r_31;
                  {
                    ATerm u_31 = t;
                    int a_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(a_32);
                      }
                    else
                      {
                        t = u_31;
                        t = dynrule_targs_1_0(b_12, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm c_69 = NULL;
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_69 = ATgetArgument(t, 0);
          {
            ATerm d_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_32);
      t = c_69;
    }
  else
    {
      t = b_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_69;
    }
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = map_1_0(c_12, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm h_69 = NULL;
  ATerm e_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_69 = ATgetArgument(t, 0);
          {
            ATerm m_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_32);
      t = h_69;
    }
  else
    {
      t = e_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_69;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_31 = NULL,p_31 = NULL;
  p_68 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_68 = ATgetArgument(t, 0);
      n_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_68);
  l_68 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, m_68, n_68);
  p_31 = t;
  t = SSLsetAnnotations(p_31, l_68);
  o_68 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_68 = ATgetArgument(t, 0);
      {
        ATerm n_32 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_68;
  t = free_vars_3_0(y_11, z_11, tboundin_3_0, t);
  c_68 = t;
  t = undefine_unbound_MarkVar_0_1(c_68, t);
  d_68 = t;
  t = o_68;
  if(match_cons(t, sym_Let_2))
    {
      g_68 = ATgetArgument(t, 0);
      h_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_68);
  f_68 = t;
  t = g_68;
  {
    static ATerm d_12 (ATerm t);
    static ATerm d_12 (ATerm t)
    {
      ATerm k_69 = NULL,l_69 = NULL;
      k_69 = t;
      t = term_w_15;
      t = table_destroy_0_0(t);
      t = term_w_15;
      l_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_15, d_68);
      t = p_7(l_69, d_68, t);
      t = k_69;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(d_12, t);
  }
  i_68 = t;
  t = term_w_15;
  t = table_destroy_0_0(t);
  t = term_w_15;
  k_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_15, d_68);
  t = p_7(k_68, d_68, t);
  t = h_68;
  t = mark_buv_0_0(t);
  j_68 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, i_68, j_68);
  q_31 = t;
  t = SSLsetAnnotations(q_31, f_68);
  return(t);
}
static ATerm c_8 (ATerm z_113 (ATerm), ATerm z_26, ATerm x_26, ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL;
  p_69 = t;
  t = z_113(t);
  m_69 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_69, z_26, x_26);
  t = w_8(m_69, z_26, x_26, t);
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_69 = NULL;
        t = term_b_33;
        u_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_69, term_b_33);
        t = v_8(m_69, u_69, t);
        {
          ATerm e_33 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_33;
            }
        }
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_69 = ATgetFirst((ATermList) t);
      o_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_69, term_b_33, (ATerm) ATinsert(CheckATermList(o_69), (ATerm) ATinsert(CheckATermList(n_69), z_26)));
  t = lookup_table_0_1(m_69, t);
  t_69 = t;
  t = term_b_33;
  q_69 = t;
  t = (ATerm) ATinsert(CheckATermList(o_69), (ATerm) ATinsert(CheckATermList(n_69), z_26));
  r_69 = t;
  t = t_69;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(q_69, r_69, s_69, t);
  t = p_69;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL;
  v_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_69);
  w_69 = t;
  t = term_k_33;
  x_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_69), term_k_33);
  t = c_8(f_12, w_69, x_69, t);
  t = v_69;
  return(t);
}
static ATerm d_8 (ATerm i_28, ATerm j_28, ATerm t)
{
  ATerm y_69 = NULL,z_69 = NULL;
  z_69 = t;
  {
    ATerm l_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_28, j_28);
        t = v_8(i_28, j_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_33 = ATgetFirst((ATermList) t);
            y_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_33);
        {
          ATerm a_70 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, i_28, j_28, y_69);
          t = lookup_table_0_1(i_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              a_70 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_8(j_28, y_69, a_70, t);
          t = (ATerm) ATmakeAppl(sym__3, i_28, j_28, y_69);
        }
      }
    else
      {
        t = l_33;
        {
          ATerm c_70 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, i_28, j_28);
          t = lookup_table_0_1(i_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              c_70 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_8(j_28, c_70, t);
          t = (ATerm) ATmakeAppl(sym__2, i_28, j_28);
        }
      }
  }
  t = z_69;
  return(t);
}
ATerm end_scope_1_0 (ATerm w_113 (ATerm), ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL;
  h_70 = t;
  t = w_113(t);
  g_70 = t;
  {
    ATerm r_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_70 = NULL;
        t = term_b_33;
        l_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_70, term_b_33);
        t = v_8(g_70, l_70, t);
        {
          ATerm v_33 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_33;
            }
        }
        LocalPopChoice(t_33);
      }
    else
      {
        t = r_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_70 = ATgetFirst((ATermList) t);
      e_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_70, term_b_33, e_70);
  t = lookup_table_0_1(g_70, t);
  k_70 = t;
  t = term_b_33;
  i_70 = t;
  t = k_70;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(i_70, e_70, j_70, t);
  t = f_70;
  {
    static ATerm g_12 (ATerm t);
    static ATerm g_12 (ATerm t)
    {
      ATerm m_70 = NULL;
      m_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_70, m_70);
      t = d_8(g_70, m_70, t);
      return(t);
    }
    t = map_1_0(g_12, t);
  }
  t = h_70;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_134(t);
      t = f_134(t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      t = f_134(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_113 (ATerm), ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL;
  p_70 = t;
  t = v_113(t);
  o_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_70, term_b_33);
  {
    ATerm b_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_70 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_34 = ATgetArgument(t, 0);
            ATerm g_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_33;
        y_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_70, term_b_33);
        t = v_8(o_70, y_70, t);
        LocalPopChoice(d_34);
      }
    else
      {
        t = b_34;
        t = (ATerm) ATempty;
      }
  }
  q_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_70, term_b_33, (ATerm) ATinsert(CheckATermList(q_70), (ATerm) ATempty));
  t = lookup_table_0_1(o_70, t);
  u_70 = t;
  t = term_b_33;
  r_70 = t;
  t = (ATerm) ATinsert(CheckATermList(q_70), (ATerm) ATempty);
  s_70 = t;
  t = u_70;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(r_70, s_70, t_70, t);
  t = p_70;
  return(t);
}
ATerm scope_2_0 (ATerm x_113 (ATerm), ATerm y_113 (ATerm), ATerm t)
{
  static ATerm h_12 (ATerm t);
  static ATerm h_12 (ATerm t)
  {
    t = end_scope_1_0(x_113, t);
    return(t);
  }
  t = begin_scope_1_0(x_113, t);
  t = restore_always_2_0(y_113, h_12, t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,t_31 = NULL;
  d_71 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_71 = ATgetArgument(t, 0);
      b_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_71);
  z_70 = t;
  t = b_71;
  {
    static ATerm j_12 (ATerm t);
    static ATerm j_12 (ATerm t)
    {
      ATerm e_71 = NULL;
      e_71 = t;
      t = a_71;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = e_71;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(i_12, j_12, t);
  }
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, a_71, c_71);
  t_31 = t;
  t = SSLsetAnnotations(t_31, z_70);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL,v_31 = NULL;
      h_71 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_71 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_71);
      f_71 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_71);
      v_31 = t;
      t = SSLsetAnnotations(v_31, f_71);
      LocalPopChoice(i_34);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = h_34;
      {
        ATerm j_34 = t;
        int k_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,w_31 = NULL;
            l_71 = t;
            if(match_cons(t, sym_App_2))
              {
                j_71 = ATgetArgument(t, 0);
                k_71 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_71);
            i_71 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, j_71, k_71);
            w_31 = t;
            t = SSLsetAnnotations(w_31, i_71);
            LocalPopChoice(k_34);
            {
              ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,x_31 = NULL;
              r_71 = t;
              if(match_cons(t, sym_App_2))
                {
                  n_71 = ATgetArgument(t, 0);
                  o_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_71);
              m_71 = t;
              t = n_71;
              t = mark_buv_0_0(t);
              p_71 = t;
              t = o_71;
              t = mark_build_vars_0_0(t);
              q_71 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, p_71, q_71);
              x_31 = t;
              t = SSLsetAnnotations(x_31, m_71);
            }
          }
        else
          {
            t = j_34;
            {
              ATerm l_34 = t;
              int m_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,y_31 = NULL;
                  u_71 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      t_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_71);
                  s_71 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, t_71);
                  y_31 = t;
                  t = SSLsetAnnotations(y_31, s_71);
                  LocalPopChoice(m_34);
                  {
                    ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_31 = NULL;
                    y_71 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        w_71 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(y_71);
                    v_71 = t;
                    t = w_71;
                    t = mark_buv_0_0(t);
                    x_71 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, x_71);
                    z_31 = t;
                    t = SSLsetAnnotations(z_31, v_71);
                  }
                }
              else
                {
                  t = l_34;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_8 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL;
  a_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_28, r_28);
  t = v_8(q_28, r_28, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_34 = ATgetFirst((ATermList) t);
      z_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_28, r_28, (ATerm) ATinsert(CheckATermList(z_71), s_28));
  t = lookup_table_0_1(q_28, t);
  d_72 = t;
  t = (ATerm) ATinsert(CheckATermList(z_71), s_28);
  b_72 = t;
  t = d_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(r_28, b_72, c_72, t);
  t = a_72;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL;
  e_72 = t;
  t = term_w_15;
  f_72 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_72);
  g_72 = t;
  t = term_p_34;
  h_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_15, (ATerm)ATmakeAppl(sym_Var_1, e_72), term_p_34);
  t = e_8(f_72, g_72, h_72, t);
  t = e_72;
  return(t);
}
static ATerm h_8 (ATerm o_28, ATerm p_28, ATerm t)
{
  ATerm i_72 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
  t = v_8(o_28, p_28, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_72 = ATgetFirst((ATermList) t);
      {
        ATerm q_34 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_72;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL;
  n_73 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_23 = NULL,s_23 = NULL,t_23 = NULL,d_24 = NULL;
        t = term_w_15;
        d_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_15, n_73);
        t = h_8(d_24, n_73, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_34) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            p_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, o_73);
        s_23 = t;
        t = (ATerm) ATinsert(ATempty, p_23);
        t_23 = t;
        t = SSLsetAnnotations(s_23, t_23);
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        {
          ATerm u_34 = t;
          int v_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_24 = NULL,n_24 = NULL,o_24 = NULL,u_24 = NULL;
              t = term_w_15;
              u_24 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_w_15, n_73);
              t = h_8(u_24, n_73, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm w_34 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_34) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  k_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, o_73);
              n_24 = t;
              t = (ATerm) ATinsert(ATempty, k_24);
              o_24 = t;
              t = SSLsetAnnotations(n_24, o_24);
              LocalPopChoice(v_34);
            }
          else
            {
              t = u_34;
              {
                ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,l_25 = NULL;
                t = term_w_15;
                l_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_15, n_73);
                t = h_8(l_25, n_73, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm x_34 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) x_34) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    e_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, o_73);
                f_25 = t;
                t = (ATerm) ATinsert(ATempty, e_25);
                g_25 = t;
                t = SSLsetAnnotations(f_25, g_25);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,f_32 = NULL;
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
    }
  w_73 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_73);
  t_73 = t;
  t = u_73;
  t = DeclareBound_0_0(t);
  v_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_73);
  f_32 = t;
  t = SSLsetAnnotations(f_32, t_73);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,h_32 = NULL;
      b_74 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_74);
      z_73 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_74);
      h_32 = t;
      t = SSLsetAnnotations(h_32, z_73);
      LocalPopChoice(b_35);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = a_35;
      {
        ATerm c_35 = t;
        int d_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,i_32 = NULL;
            f_74 = t;
            if(match_cons(t, sym_App_2))
              {
                d_74 = ATgetArgument(t, 0);
                e_74 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_74);
            c_74 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, d_74, e_74);
            i_32 = t;
            t = SSLsetAnnotations(i_32, c_74);
            LocalPopChoice(d_35);
            {
              ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,j_32 = NULL;
              l_74 = t;
              if(match_cons(t, sym_App_2))
                {
                  h_74 = ATgetArgument(t, 0);
                  i_74 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_74);
              g_74 = t;
              t = h_74;
              t = mark_buv_0_0(t);
              j_74 = t;
              t = i_74;
              t = mark_build_vars_0_0(t);
              k_74 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, j_74, k_74);
              j_32 = t;
              t = SSLsetAnnotations(j_32, g_74);
            }
          }
        else
          {
            t = c_35;
            {
              ATerm e_35 = t;
              int f_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL,k_32 = NULL;
                  o_74 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      n_74 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_74);
                  m_74 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, n_74);
                  k_32 = t;
                  t = SSLsetAnnotations(k_32, m_74);
                  LocalPopChoice(f_35);
                  {
                    ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,l_32 = NULL;
                    s_74 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        q_74 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(s_74);
                    p_74 = t;
                    t = q_74;
                    t = mark_buv_0_0(t);
                    r_74 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, r_74);
                    l_32 = t;
                    t = SSLsetAnnotations(l_32, p_74);
                  }
                }
              else
                {
                  t = e_35;
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
  ATerm g_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_75 = NULL,o_75 = NULL;
      n_75 = t;
      if(match_cons(t, sym_Match_1))
        {
          o_75 = ATgetArgument(t, 0);
          {
            ATerm p_25 = NULL,r_25 = NULL,c_33 = NULL;
            t = SSLgetAnnotations(n_75);
            p_25 = t;
            t = o_75;
            t = mark_match_vars_0_0(t);
            r_25 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, r_25);
            c_33 = t;
            t = SSLsetAnnotations(c_33, p_25);
          }
        }
      else
        {
          ATerm x_25 = NULL,a_26 = NULL,d_33 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              o_75 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_75);
          x_25 = t;
          t = o_75;
          t = mark_build_vars_0_0(t);
          a_26 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, a_26);
          d_33 = t;
          t = SSLsetAnnotations(d_33, x_25);
        }
      LocalPopChoice(h_35);
    }
  else
    {
      t = g_35;
      {
        ATerm i_35 = t;
        int j_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(j_35);
          }
        else
          {
            t = i_35;
            {
              ATerm k_35 = t;
              int l_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(l_35);
                }
              else
                {
                  t = k_35;
                  {
                    ATerm m_35 = t;
                    int n_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(n_35);
                      }
                    else
                      {
                        t = m_35;
                        {
                          ATerm o_35 = t;
                          int p_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL;
                              p_75 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  q_75 = ATgetArgument(t, 0);
                                  r_75 = ATgetArgument(t, 1);
                                  s_75 = ATgetArgument(t, 2);
                                  t_75 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = p_75;
                              t = n_7(q_75, r_75, s_75, t_75, t);
                              LocalPopChoice(p_35);
                            }
                          else
                            {
                              t = o_35;
                              {
                                ATerm q_35 = t;
                                int r_35 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(r_35);
                                  }
                                else
                                  {
                                    t = q_35;
                                    {
                                      ATerm s_35 = t;
                                      int t_35 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL;
                                          b_76 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              c_76 = ATgetArgument(t, 0);
                                              t = c_76;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  y_75 = ATgetArgument(t, 0);
                                                  z_75 = ATgetArgument(t, 1);
                                                  a_76 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = b_76;
                                              t = m_7(y_75, z_75, a_76, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  c_76 = ATgetArgument(t, 0);
                                                  t = c_76;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      y_75 = ATgetArgument(t, 0);
                                                      z_75 = ATgetArgument(t, 1);
                                                      a_76 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = b_76;
                                                  t = l_7(y_75, z_75, a_76, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      c_76 = ATgetArgument(t, 0);
                                                      d_76 = ATgetArgument(t, 1);
                                                      e_76 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = b_76;
                                                  t = k_7(c_76, d_76, e_76, t);
                                                }
                                            }
                                          LocalPopChoice(t_35);
                                        }
                                      else
                                        {
                                          t = s_35;
                                          {
                                            ATerm u_35 = t;
                                            int v_35 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
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
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(x_35);
                                                    }
                                                  else
                                                    {
                                                      t = w_35;
                                                      {
                                                        ATerm y_35 = t;
                                                        int z_35 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm o_76 = NULL;
                                                            o_76 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm a_36 = ATgetArgument(t, 0);
                                                                ATerm b_36 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = o_76;
                                                            t = j_7(t);
                                                            LocalPopChoice(z_35);
                                                          }
                                                        else
                                                          {
                                                            t = y_35;
                                                            {
                                                              ATerm c_36 = t;
                                                              int d_36 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(d_36);
                                                                }
                                                              else
                                                                {
                                                                  t = c_36;
                                                                  {
                                                                    ATerm e_36 = t;
                                                                    int f_36 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(f_36);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_36;
                                                                        {
                                                                          ATerm g_36 = t;
                                                                          int h_36 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(h_36);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_36;
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
static ATerm k_12 (ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  b_77 = t;
  t = term_i_36;
  c_77 = t;
  t = (ATerm) ATinsert(ATempty, term_j_36);
  d_77 = t;
  t = SSL_printnl(c_77, d_77);
  t = b_77;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,g_33 = NULL;
  h_77 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_77);
  e_77 = t;
  t = f_77;
  t = map_1_0(mark_buv_0_0, t);
  g_77 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_77);
  g_33 = t;
  t = SSLsetAnnotations(g_33, e_77);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL;
  i_77 = t;
  t = term_i_36;
  j_77 = t;
  t = (ATerm) ATinsert(ATempty, term_k_36);
  k_77 = t;
  t = SSL_printnl(j_77, k_77);
  t = i_77;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,i_33 = NULL,h_33 = NULL;
  t = if_verbose4_1_0(k_12, t);
  a_77 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_77);
  t_76 = t;
  t = u_76;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_76 = ATgetFirst((ATermList) t);
      x_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_76);
  v_76 = t;
  t = x_76;
  t = Cons_2_0(l_12, m_12, t);
  y_76 = t;
  t = (ATerm) ATinsert(CheckATermList(y_76), w_76);
  h_33 = t;
  t = SSLsetAnnotations(h_33, v_76);
  z_76 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, z_76);
  i_33 = t;
  t = SSLsetAnnotations(i_33, t_76);
  t = if_verbose4_1_0(o_12, t);
  return(t);
}
static ATerm i_8 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm l_77 = NULL;
  t = SSL_fputc(x_39, y_39);
  l_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_77);
  return(t);
}
static ATerm j_8 (ATerm o_45, ATerm p_45, ATerm t)
{
  ATerm m_77 = NULL;
  t = SSL_write_term_to_stream_text(o_45, p_45);
  m_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_77);
  return(t);
}
static ATerm l_8 (ATerm c_123 (ATerm), ATerm w_403, ATerm u_45, ATerm t)
{
  ATerm n_77 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_403, term_l_36);
  t = p_8(t);
  n_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_77, u_45);
  t = c_123(t);
  t = fclose_0_0(t);
  t = u_45;
  return(t);
}
static ATerm k_8 (ATerm k_45, ATerm l_45, ATerm t)
{
  ATerm o_77 = NULL;
  t = SSL_write_term_to_stream_baf(k_45, l_45);
  o_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_77);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_36 = ATgetArgument(t, 0);
      if(match_cons(m_36, sym_Stream_1))
        {
          v_77 = ATgetArgument(m_36, 0);
        }
      else
        _fail(t);
      w_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(v_77, w_77, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_36 = ATgetArgument(t, 0);
      if(match_cons(n_36, sym_Stream_1))
        {
          a_78 = ATgetArgument(n_36, 0);
        }
      else
        _fail(t);
      b_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(a_78, b_78, t);
  x_77 = t;
  t = term_o_36;
  y_77 = t;
  t = x_77;
  if(match_cons(t, sym_Stream_1))
    {
      z_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_36, x_77);
  t = i_8(y_77, z_77, t);
  return(t);
}
ATerm output_1_0 (ATerm k_143 (ATerm), ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL;
  t = k_143(t);
  q_77 = t;
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_77 = NULL,s_77 = NULL;
        t = term_q_15;
        r_77 = t;
        t = term_r_36;
        s_77 = t;
        t = term_s_36;
        t = v_8(r_77, s_77, t);
        LocalPopChoice(q_36);
      }
    else
      {
        t = p_36;
        t = term_t_36;
      }
  }
  p_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_77, q_77);
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_77 = NULL,u_77 = NULL;
        t = term_q_15;
        t_77 = t;
        t = term_w_36;
        u_77 = t;
        t = term_x_36;
        t = v_8(t_77, u_77, t);
        t = (ATerm) ATmakeAppl(sym__2, p_77, q_77);
        LocalPopChoice(v_36);
        if(match_cons(t, sym__2))
          {
            ATerm y_36 = ATgetArgument(t, 0);
            ATerm z_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_8(p_12, p_77, q_77, t);
      }
    else
      {
        t = u_36;
        if(match_cons(t, sym__2))
          {
            ATerm a_37 = ATgetArgument(t, 0);
            ATerm b_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_8(q_12, p_77, q_77, t);
      }
  }
  return(t);
}
static ATerm p_78 (ATerm j_78, ATerm t)
{
  t = SSL_fclose(j_78);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL;
  n_78 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_78 = ATgetArgument(t, 0);
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_78);
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
            t = p_78(n_78, t);
          }
      }
    }
  else
    {
      t = p_78(n_78, t);
    }
  return(t);
}
static ATerm m_8 (ATerm q_45, ATerm t)
{
  t = SSL_read_term_from_stream(q_45);
  return(t);
}
static ATerm n_8 (ATerm d_38, ATerm e_38, ATerm t)
{
  t = SSL_strcat(d_38, e_38);
  return(t);
}
static ATerm o_8 (ATerm z_39, ATerm a_40, ATerm t)
{
  ATerm q_78 = NULL;
  t = SSL_fopen(z_39, a_40);
  q_78 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_78);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_78 = NULL;
  t = SSL_stdin_stream();
  r_78 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_78);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_78 = NULL;
  t = SSL_stdout_stream();
  s_78 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_78);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_78 = NULL;
  t = SSL_stderr_stream();
  t_78 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_78);
  return(t);
}
static ATerm a_80 (ATerm z_78, ATerm t)
{
  ATerm a_79 = NULL;
  t = SSL_explode_term(z_78);
  if(match_cons(t, sym__2))
    {
      ATerm e_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_37 = ATgetArgument(t, 1);
        if(((ATgetType(f_37) == AT_LIST) && !(ATisEmpty(f_37))))
          {
            a_79 = ATgetFirst((ATermList) f_37);
            {
              ATerm g_37 = (ATerm) ATgetNext((ATermList) f_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_79;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_79;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_79;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_79;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_80 (ATerm d_79, ATerm e_79, ATerm f_79, ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL,l_79 = NULL,m_33 = NULL;
  t = SSLgetAnnotations(f_79);
  i_79 = t;
  t = d_79;
  if(match_cons(t, sym_Path_1))
    {
      l_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_79, e_79);
  m_33 = t;
  t = SSLsetAnnotations(m_33, i_79);
  if(match_cons(t, sym__2))
    {
      g_79 = ATgetArgument(t, 0);
      h_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(g_79, h_79, t);
  return(t);
}
static ATerm c_80 (ATerm n_79, ATerm o_79, ATerm p_79, ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL,v_79 = NULL,n_33 = NULL;
  t = SSLgetAnnotations(p_79);
  s_79 = t;
  t = SSL_is_string(n_79);
  v_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_79, o_79);
  n_33 = t;
  t = SSLsetAnnotations(n_33, s_79);
  if(match_cons(t, sym__2))
    {
      q_79 = ATgetArgument(t, 0);
      r_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(q_79, r_79, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL;
  x_79 = t;
  if(match_cons(t, sym__2))
    {
      y_79 = ATgetArgument(t, 0);
      z_79 = ATgetArgument(t, 1);
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_80(x_79, t);
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
                  t = b_80(y_79, z_79, x_79, t);
                  LocalPopChoice(k_37);
                }
              else
                {
                  t = j_37;
                  t = c_80(y_79, z_79, x_79, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_80(x_79, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_80 = NULL,f_80 = NULL,g_80 = NULL,l_80 = NULL;
  l_80 = t;
  {
    ATerm l_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_80, term_n_37);
        t = p_8(t);
        LocalPopChoice(m_37);
      }
    else
      {
        t = l_37;
        {
          ATerm u_26 = NULL,v_26 = NULL;
          t = term_o_37;
          v_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_37, l_80);
          t = n_8(v_26, l_80, t);
          u_26 = t;
          t = SSL_perror(u_26);
          _fail(t);
        }
      }
  }
  f_80 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_8(g_80, t);
  e_80 = t;
  t = f_80;
  t = fclose_0_0(t);
  t = e_80;
  return(t);
}
ATerm input_1_0 (ATerm l_143 (ATerm), ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_80 = NULL,p_80 = NULL;
      t = term_q_15;
      o_80 = t;
      t = term_r_37;
      p_80 = t;
      t = term_s_37;
      t = v_8(o_80, p_80, t);
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      t = term_t_37;
    }
  t = ReadFromFile_0_0(t);
  t = l_143(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL;
  t = term_q_15;
  q_80 = t;
  t = term_u_37;
  r_80 = t;
  t = term_v_37;
  t = v_8(q_80, r_80, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL;
  t_80 = t;
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_80;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_37 = ATgetFirst((ATermList) t);
                ATerm z_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_80;
          }
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        t = (ATerm) ATinsert(ATempty, t_80);
      }
  }
  u_80 = t;
  t = term_t_36;
  v_80 = t;
  t = SSL_printnl(v_80, u_80);
  t = t_80;
  return(t);
}
ATerm map_1_0 (ATerm g_124 (ATerm), ATerm t)
{
  static ATerm v_81 (ATerm t);
  static ATerm v_81 (ATerm t)
  {
    ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL;
    r_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_81;
      }
    else
      {
        ATerm c_27 = NULL,g_27 = NULL,h_27 = NULL,q_33 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_81 = ATgetFirst((ATermList) t);
            t_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_81);
        c_27 = t;
        t = s_81;
        t = g_124(t);
        g_27 = t;
        t = t_81;
        t = v_81(t);
        h_27 = t;
        t = (ATerm) ATinsert(CheckATermList(h_27), g_27);
        q_33 = t;
        t = SSLsetAnnotations(q_33, c_27);
      }
    return(t);
  }
  t = v_81(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_81 = ATgetFirst((ATermList) t);
      z_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_82 = NULL,e_82 = NULL;
        static ATerm r_12 (ATerm t);
        static ATerm r_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_82)), not_null(e_82));
          return(t);
        }
        t = z_81;
        t = r_0(t);
        if(((d_82 != NULL) && (d_82 != t)))
          _fail(t);
        else
          d_82 = t;
        t = y_81;
        t = p_0(t);
        if(((e_82 != NULL) && (e_82 != t)))
          _fail(t);
        else
          e_82 = t;
        t = z_81;
        t = reverse_acc_2_0(p_0, r_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_38;
      t = r_0(t);
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL,s_33 = NULL;
  o_82 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_82);
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_82);
  s_33 = t;
  t = SSLsetAnnotations(s_33, m_82);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm s_82 = NULL;
  s_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_82), term_b_38);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm l_146 (ATerm), ATerm m_146 (ATerm), ATerm t)
{
  ATerm i_82 = NULL,j_82 = NULL;
  ATerm c_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_82 = NULL,l_82 = NULL;
      t = term_q_15;
      k_82 = t;
      t = term_u_37;
      l_82 = t;
      t = term_v_37;
      t = v_8(k_82, l_82, t);
      LocalPopChoice(f_38);
    }
  else
    {
      t = c_38;
      t = fetch_1_0(s_12, t);
    }
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_146(t);
        t = echo_0_0(t);
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
      }
  }
  t = term_i_38;
  t = echo_0_0(t);
  t = term_j_38;
  i_82 = t;
  t = term_k_38;
  j_82 = t;
  t = term_l_38;
  t = v_8(i_82, j_82, t);
  t = reverse_acc_2_0(_id, u_12, t);
  t = map_1_0(v_12, t);
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_82 = NULL;
        t = m_146(t);
        t_82 = t;
        t = (ATerm) ATinsert(CheckATermList(t_82), term_o_38);
        t = echo_0_0(t);
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
      }
  }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL,u_33 = NULL;
  b_83 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_83);
  z_82 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_83);
  u_33 = t;
  t = SSLsetAnnotations(u_33, z_82);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_82 = NULL;
  w_82 = t;
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_82 = NULL,y_82 = NULL;
        t = term_q_15;
        x_82 = t;
        t = term_u_37;
        y_82 = t;
        t = term_v_37;
        t = v_8(x_82, y_82, t);
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = fetch_1_0(w_12, t);
      }
  }
  t = w_82;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm d_83 = NULL;
  d_83 = t;
  if(match_string(t, "-k"))
    {
      t = d_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_83;
    }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL;
  e_83 = t;
  t = SSL_string_to_int(e_83);
  f_83 = t;
  t = term_r_38;
  g_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_38, f_83);
  t = y_8(g_83, f_83, t);
  t = e_83;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_s_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_12, c_13, d_13, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm i_83 = NULL;
  i_83 = t;
  if(match_string(t, "-S"))
    {
      t = i_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_83;
    }
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL;
  t = term_r_15;
  j_83 = t;
  t = term_t_38;
  k_83 = t;
  t = term_u_38;
  t = y_8(j_83, k_83, t);
  t = term_v_38;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_w_38;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL;
  l_83 = t;
  t = SSL_string_to_int(l_83);
  m_83 = t;
  t = term_r_15;
  n_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_15, m_83);
  t = y_8(n_83, m_83, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_83);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_x_38;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm o_83 = NULL,p_83 = NULL;
  t = term_y_38;
  o_83 = t;
  t = term_a_38;
  p_83 = t;
  t = term_z_38;
  t = y_8(o_83, p_83, t);
  t = term_a_39;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_39 = t;
  int d_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_13, f_13, g_13, t);
      LocalPopChoice(d_39);
    }
  else
    {
      t = c_39;
      {
        ATerm e_39 = t;
        int f_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_13, i_13, m_13, t);
            LocalPopChoice(f_39);
          }
        else
          {
            t = e_39;
            t = Option_3_0(o_13, p_13, r_13, t);
          }
      }
    }
  return(t);
}
static ATerm y_8 (ATerm w_80, ATerm x_80, ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL;
  t = term_q_15;
  q_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_15, w_80, x_80);
  t = lookup_table_0_1(q_83, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(w_80, x_80, r_83, t);
  t = (ATerm) ATmakeAppl(sym__3, term_q_15, w_80, x_80);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL;
      t = term_a_38;
      t = g_0(t);
      x_83 = t;
      t = term_j_38;
      y_83 = t;
      t = term_k_38;
      z_83 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_38, term_k_38, x_83);
      t = w_8(y_83, z_83, x_83, t);
      _fail(t);
    }
  else
    {
      ATerm c_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_83 = ATgetFirst((ATermList) t);
          w_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_83;
      t = d_0(t);
      t = term_a_38;
      t = f_0(t);
      c_84 = t;
      t = (ATerm) ATinsert(CheckATermList(w_83), c_84);
    }
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm e_84 = NULL;
  e_84 = t;
  if(match_string(t, "-o"))
    {
      t = e_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_84;
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm g_84 = NULL,h_84 = NULL;
  g_84 = t;
  t = term_r_36;
  h_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_36, g_84);
  t = y_8(h_84, g_84, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_84);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_g_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_13, x_13, y_13, t);
  return(t);
}
static ATerm w_8 (ATerm d_28, ATerm e_28, ATerm c_28, ATerm t)
{
  ATerm n_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL;
  n_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_28, e_28);
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_39 = ATgetArgument(t, 0);
            ATerm k_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_28, e_28);
        t = v_8(d_28, e_28, t);
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        t = (ATerm) ATempty;
      }
  }
  p_84 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_28, e_28, (ATerm) ATinsert(CheckATermList(p_84), c_28));
  t = lookup_table_0_1(d_28, t);
  s_84 = t;
  t = (ATerm) ATinsert(CheckATermList(p_84), c_28);
  q_84 = t;
  t = s_84;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(e_28, q_84, r_84, t);
  t = n_84;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
      t = term_a_38;
      t = n_0(t);
      d_85 = t;
      t = term_j_38;
      e_85 = t;
      t = term_k_38;
      f_85 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_38, term_k_38, d_85);
      t = w_8(e_85, f_85, d_85, t);
      _fail(t);
    }
  else
    {
      ATerm j_85 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_84 = ATgetFirst((ATermList) t);
          a_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_85;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_85 = ATgetFirst((ATermList) t);
          c_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_84;
      t = j_0(t);
      t = b_85;
      t = l_0(t);
      j_85 = t;
      t = (ATerm) ATinsert(CheckATermList(c_85), j_85);
    }
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm l_85 = NULL;
  l_85 = t;
  if(match_string(t, "-i"))
    {
      t = l_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_85;
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm m_85 = NULL,n_85 = NULL;
  m_85 = t;
  t = term_r_37;
  n_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, m_85);
  t = y_8(n_85, m_85, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_85);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_l_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_14, e_14, f_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_38;
  t = whoami_0_0(t);
  o_85 = t;
  t = term_i_36;
  q_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_39), o_85);
  r_85 = t;
  t = SSL_printnl(q_85, r_85);
  t = term_n_39;
  p_85 = t;
  t = SSL_exit(p_85);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_85 = NULL,t_85 = NULL;
  t = term_q_15;
  s_85 = t;
  t = term_u_37;
  t_85 = t;
  t = term_v_37;
  t = v_8(s_85, t_85, t);
  return(t);
}
static ATerm q_8 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_46, y_46);
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      t = SSL_addr(x_46, y_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_131 (ATerm), ATerm t_131 (ATerm), ATerm t)
{
  ATerm v_85 = NULL,w_85 = NULL,x_85 = NULL;
  v_85 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_85;
      t = s_131(t);
    }
  else
    {
      ATerm a_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_85 = ATgetFirst((ATermList) t);
          x_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_85;
      t = foldr_2_0(s_131, t_131, t);
      a_86 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_85, a_86);
      t = t_131(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_t_38;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm w_27 = NULL,z_27 = NULL;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(w_27, z_27, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_86 = NULL,n_27 = NULL,q_27 = NULL;
  t = times_0_0(t);
  q_27 = t;
  t = SSL_explode_term(q_27);
  if(match_cons(t, sym__2))
    {
      ATerm q_39 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_27;
  t = foldr_2_0(h_14, j_14, t);
  d_86 = t;
  t = SSL_TicksToSeconds(d_86);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL;
  o_86 = t;
  if(match_cons(t, sym__2))
    {
      p_86 = ATgetArgument(t, 0);
      q_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_86;
        if((p_86 != t))
          {
            _fail(t);
          }
        t = o_86;
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        t = (ATerm) ATmakeAppl(sym__2, p_86, q_86);
        {
          ATerm t_39 = t;
          int u_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_86, q_86);
              LocalPopChoice(u_39);
            }
          else
            {
              t = t_39;
              t = SSL_gtr(p_86, q_86);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_86, q_86);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_151 (ATerm), ATerm t)
{
  ATerm u_86 = NULL;
  u_86 = t;
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_86 = NULL,x_86 = NULL,y_86 = NULL;
        t = term_q_15;
        x_86 = t;
        t = term_r_15;
        y_86 = t;
        t = term_s_15;
        t = v_8(x_86, y_86, t);
        w_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_86, term_n_39);
        t = geq_0_0(t);
        t = u_86;
        t = v_151(t);
        LocalPopChoice(w_39);
      }
    else
      {
        t = v_39;
        t = u_86;
      }
  }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm a_87 = NULL,b_87 = NULL,d_87 = NULL,e_87 = NULL;
  t = run_time_0_0(t);
  a_87 = t;
  t = term_a_38;
  t = whoami_0_0(t);
  b_87 = t;
  t = term_i_36;
  d_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_40), a_87), term_b_40), b_87);
  e_87 = t;
  t = SSL_printnl(d_87, e_87);
  t = (ATerm) ATmakeAppl(sym__2, term_i_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_40), a_87), term_b_40), b_87));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_87 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_38;
  f_87 = t;
  t = SSL_exit(f_87);
  return(t);
}
static ATerm z_8 (ATerm o_32, ATerm p_32, ATerm q_32, ATerm t)
{
  ATerm g_87 = NULL;
  t = SSL_hashtable_put(q_32, o_32, p_32);
  g_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_87);
  return(t);
}
ATerm lookup_table_0_1 (ATerm p_29, ATerm t)
{
  ATerm p_87 = NULL;
  t = table_hashtable_0_0(t);
  p_87 = t;
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_28 = NULL;
        t = p_87;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_9(p_29, v_28, t);
        LocalPopChoice(e_40);
      }
    else
      {
        t = d_40;
        {
          ATerm i_29 = NULL;
          t = p_29;
          t = table_create_0_0(t);
          t = p_87;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_9(p_29, i_29, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_32, ATerm x_32, ATerm t)
{
  ATerm s_87 = NULL;
  t = SSL_hashtable_create(w_32, x_32);
  s_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_87);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_87 = NULL,u_87 = NULL,v_87 = NULL,x_87 = NULL,y_87 = NULL;
  t_87 = t;
  t = term_f_40;
  x_87 = t;
  t = term_g_40;
  y_87 = t;
  t = t_87;
  t = new_hashtable_0_2(x_87, y_87, t);
  u_87 = t;
  t = t_87;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(t_87, u_87, v_87, t);
  t = t_87;
  return(t);
}
static ATerm s_8 (ATerm t_32, ATerm u_32, ATerm t)
{
  ATerm z_87 = NULL;
  t = SSL_hashtable_remove(u_32, t_32);
  z_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_87);
  return(t);
}
static ATerm t_8 (ATerm y_32, ATerm t)
{
  ATerm a_88 = NULL;
  t = SSL_hashtable_destroy(y_32);
  a_88 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_88);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_88 = NULL;
  t = SSL_table_hashtable();
  b_88 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_88);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL;
  c_88 = t;
  t = table_hashtable_0_0(t);
  d_88 = t;
  t = lookup_table_0_1(c_88, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_8(f_88, t);
  t = d_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8(c_88, e_88, t);
  t = c_88;
  return(t);
}
ATerm fetch_1_0 (ATerm o_124 (ATerm), ATerm t)
{
  static ATerm d_89 (ATerm t);
  static ATerm d_89 (ATerm t)
  {
    ATerm z_88 = NULL,a_89 = NULL,b_89 = NULL;
    z_88 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_89 = ATgetFirst((ATermList) t);
        b_89 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_40 = t;
      int i_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_29 = NULL,s_29 = NULL,w_33 = NULL;
          t = SSLgetAnnotations(z_88);
          o_29 = t;
          t = a_89;
          t = o_124(t);
          s_29 = t;
          t = (ATerm) ATinsert(CheckATermList(b_89), s_29);
          w_33 = t;
          t = SSLsetAnnotations(w_33, o_29);
          LocalPopChoice(i_40);
        }
      else
        {
          t = h_40;
          {
            ATerm d_30 = NULL,h_30 = NULL,x_33 = NULL;
            t = SSLgetAnnotations(z_88);
            d_30 = t;
            t = b_89;
            t = d_89(t);
            h_30 = t;
            t = (ATerm) ATinsert(CheckATermList(h_30), a_89);
            x_33 = t;
            t = SSLsetAnnotations(x_33, d_30);
          }
        }
    }
    return(t);
  }
  t = d_89(t);
  return(t);
}
static ATerm a_9 (ATerm r_32, ATerm s_32, ATerm t)
{
  t = SSL_hashtable_get(s_32, r_32);
  return(t);
}
static ATerm v_8 (ATerm w_29, ATerm x_29, ATerm t)
{
  ATerm h_89 = NULL;
  t = lookup_table_0_1(w_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(x_29, h_89, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm j_89 = NULL,k_89 = NULL;
  t = term_j_40;
  j_89 = t;
  t = term_a_38;
  k_89 = t;
  t = term_k_40;
  t = y_8(j_89, k_89, t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_l_40;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,s_89 = NULL,t_89 = NULL;
  t = term_j_40;
  s_89 = t;
  t = term_a_38;
  t_89 = t;
  t = term_k_40;
  t = y_8(s_89, t_89, t);
  t = term_m_40;
  l_89 = t;
  t = term_a_38;
  m_89 = t;
  t = term_n_40;
  t = y_8(l_89, m_89, t);
  t = term_o_40;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_p_40;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_14, m_14, n_14, t);
      LocalPopChoice(r_40);
    }
  else
    {
      t = q_40;
      t = Option_3_0(p_14, q_14, s_14, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL,a_34 = NULL;
  z_89 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_89 = ATgetFirst((ATermList) t);
      w_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_89);
  u_89 = t;
  t = v_89;
  t = e_112(t);
  x_89 = t;
  t = w_89;
  t = f_112(t);
  y_89 = t;
  t = (ATerm) ATinsert(CheckATermList(y_89), x_89);
  a_34 = t;
  t = SSLsetAnnotations(a_34, u_89);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_146 (ATerm), ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,j_90 = NULL,l_90 = NULL,c_34 = NULL;
  e_90 = t;
  {
    ATerm s_40 = t;
    int t_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_40;
        t = g_146(t);
        LocalPopChoice(t_40);
      }
    else
      {
        t = s_40;
      }
  }
  t = e_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_90 = ATgetFirst((ATermList) t);
      h_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_90);
  f_90 = t;
  t = term_u_37;
  l_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_37, g_90);
  t = y_8(l_90, g_90, t);
  t = h_90;
  {
    static ATerm w_90 (ATerm t);
    static ATerm w_90 (ATerm t)
    {
      ATerm v_40 = t;
      int w_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_40 = t;
          int y_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_90 = NULL;
              p_90 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_90;
              LocalPopChoice(y_40);
            }
          else
            {
              t = x_40;
              t = g_146(t);
              t = Cons_2_0(_id, w_90, t);
            }
          LocalPopChoice(w_40);
        }
      else
        {
          t = v_40;
          {
            ATerm s_90 = NULL,t_90 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_90 = ATgetFirst((ATermList) t);
                t_90 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_90), (ATerm) ATmakeAppl(sym_Undefined_1, s_90));
          }
        }
      return(t);
    }
    t = w_90(t);
  }
  j_90 = t;
  t = (ATerm) ATinsert(CheckATermList(j_90), (ATerm) ATmakeAppl(sym_Program_1, g_90));
  c_34 = t;
  t = SSLsetAnnotations(c_34, f_90);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm j_91 = NULL;
  j_91 = t;
  if(match_string(t, "--help"))
    {
      t = j_91;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_91;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_91;
        }
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL;
  t = term_z_40;
  k_91 = t;
  t = term_a_38;
  l_91 = t;
  t = term_a_41;
  t = y_8(k_91, l_91, t);
  t = term_b_41;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm d_146 (ATerm), ATerm e_146 (ATerm), ATerm f_146 (ATerm), ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL;
  d_91 = t;
  t = term_j_38;
  e_91 = t;
  t = term_d_41;
  t = lookup_table_0_1(e_91, t);
  i_91 = t;
  t = term_k_38;
  f_91 = t;
  t = (ATerm) ATempty;
  g_91 = t;
  t = i_91;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(f_91, g_91, h_91, t);
  t = d_91;
  {
    static ATerm u_14 (ATerm t);
    static ATerm u_14 (ATerm t)
    {
      ATerm e_41 = t;
      int f_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_146(t);
          LocalPopChoice(f_41);
        }
      else
        {
          t = e_41;
          {
            ATerm g_41 = t;
            int h_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_14, w_14, x_14, t);
                LocalPopChoice(h_41);
              }
            else
              {
                t = g_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_14, t);
  }
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_91 = NULL;
        w_91 = t;
        {
          ATerm k_41 = t;
          int l_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_30 = NULL;
              t = w_91;
              {
                ATerm m_41 = t;
                int n_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_30 = NULL,w_30 = NULL;
                    t = term_q_15;
                    v_30 = t;
                    t = term_z_40;
                    w_30 = t;
                    t = term_o_41;
                    t = v_8(v_30, w_30, t);
                    LocalPopChoice(n_41);
                  }
                else
                  {
                    t = m_41;
                    t = fetch_1_0(z_14, t);
                  }
              }
              t = w_91;
              t = e_146(t);
              t = term_t_38;
              u_30 = t;
              t = SSL_exit(u_30);
              LocalPopChoice(l_41);
            }
          else
            {
              t = k_41;
              {
                ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
                t = term_q_15;
                b_31 = t;
                t = term_j_40;
                c_31 = t;
                t = term_p_41;
                t = v_8(b_31, c_31, t);
                t = w_91;
                t = f_146(t);
                t = term_t_38;
                a_31 = t;
                t = SSL_exit(a_31);
              }
            }
        }
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        {
          ATerm q_41 = t;
          int r_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL;
              static ATerm a_15 (ATerm t);
              static ATerm a_15 (ATerm t)
              {
                ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL,e_34 = NULL;
                c_92 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_92 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_92);
                a_92 = t;
                t = b_92;
                if(((b_91 != NULL) && (b_91 != t)))
                  _fail(t);
                else
                  b_91 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_92);
                e_34 = t;
                t = SSLsetAnnotations(e_34, a_92);
                return(t);
              }
              t = fetch_1_0(a_15, t);
              t = term_i_36;
              y_91 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_91)), term_s_41);
              z_91 = t;
              t = SSL_printnl(y_91, z_91);
              t = (ATerm) ATmakeAppl(sym__2, term_i_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_91)), term_s_41));
              t = e_146(t);
              t = term_n_39;
              x_91 = t;
              t = SSL_exit(x_91);
              LocalPopChoice(r_41);
            }
          else
            {
              t = q_41;
            }
        }
      }
  }
  c_91 = t;
  t = term_j_38;
  t = table_destroy_0_0(t);
  t = c_91;
  return(t);
}
ATerm option_wrap_5_0 (ATerm e_143 (ATerm), ATerm f_143 (ATerm), ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm t)
{
  ATerm h_92 = NULL,i_92 = NULL,j_92 = NULL,k_92 = NULL,l_92 = NULL;
  t = parse_options_3_0(e_143, f_143, g_143, t);
  h_92 = t;
  t = term_t_41;
  t = table_create_0_0(t);
  t = term_t_41;
  i_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_41, term_u_41, h_92);
  t = lookup_table_0_1(i_92, t);
  l_92 = t;
  t = term_u_41;
  j_92 = t;
  t = l_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(j_92, h_92, k_92, t);
  t = h_92;
  t = h_143(t);
  {
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(w_41);
      }
    else
      {
        t = v_41;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm x_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(y_41);
    }
  else
    {
      t = x_41;
      {
        ATerm z_41 = t;
        int a_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(a_42);
          }
        else
          {
            t = z_41;
            {
              ATerm b_42 = t;
              int c_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_15, l_15, m_15, t);
                  LocalPopChoice(c_42);
                }
              else
                {
                  t = b_42;
                  {
                    ATerm d_42 = t;
                    int e_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(e_42);
                      }
                    else
                      {
                        t = d_42;
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
static ATerm h_15 (ATerm t)
{
  t = input_1_0(n_15, t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm n_92 = NULL,o_92 = NULL;
  t = term_w_36;
  n_92 = t;
  t = term_a_38;
  o_92 = t;
  t = term_f_42;
  t = y_8(n_92, o_92, t);
  t = term_g_42;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  t = term_h_42;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = output_1_0(mark_bound_unbound_vars_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(d_15, default_system_usage_0_0, default_system_about_0_0, _id, h_15, t);
  return(t);
}
