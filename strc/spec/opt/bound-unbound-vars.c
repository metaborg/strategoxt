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
ATerm term_w_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_y_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
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
ATerm term_n_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_t_37;
ATerm term_q_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_j_37;
ATerm term_q_35;
ATerm term_o_35;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_w_33;
ATerm term_t_33;
ATerm term_p_19;
ATerm term_f_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_c_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Defined_2, term_y_18, term_z_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Defined_2, term_w_33, term_c_34);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_Defined_2, term_o_35, term_z_18);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_s_38);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym__2, term_c_16, term_w_38);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_38);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym__2, term_b_39, term_s_15);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym__2, term_n_40, term_s_15);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym__2, term_q_40, term_s_15);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(sym__2, term_d_41, term_s_15);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym__3, term_n_39, term_o_39, (ATerm) ATempty);
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_d_41);
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_n_40);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_b_42, term_s_15);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm u_138 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm u_103 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm t_103 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm s_103 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm g_106 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_7 (ATerm n_25, ATerm o_25, ATerm p_25, ATerm t);
static ATerm l_3 (ATerm t);
static ATerm i_7 (ATerm h_25, ATerm l_25, ATerm j_25, ATerm t);
static ATerm v_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm j_7 (ATerm b_25, ATerm f_25, ATerm d_25, ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm k_7 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm d_24, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm l_7 (ATerm k_22, ATerm l_22, ATerm j_22, ATerm t);
static ATerm j_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm m_7 (ATerm i_28, ATerm h_28, ATerm t);
static ATerm n_7 (ATerm e_32, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm x_22, ATerm t);
ATerm tboundin_3_0 (ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm a_140 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm q_7 (ATerm g_118 (ATerm), ATerm y_53, ATerm x_53, ATerm t);
ATerm foldr_3_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm t);
static ATerm r_7 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm c_54, ATerm b_54, ATerm t);
static ATerm s_7 (ATerm b_118 (ATerm), ATerm w_53, ATerm v_53, ATerm t);
ATerm at_end_1_0 (ATerm m_114 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm p_65 (ATerm w_64, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_7 (ATerm s_785, ATerm x_785, ATerm j_78, ATerm t);
ATerm while_not_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t);
ATerm for_3_0 (ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm y_111 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm k_68 (ATerm e_67, ATerm f_67, ATerm g_67, ATerm t);
static ATerm c_11 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm free_vars_3_0 (ATerm t_136 (ATerm), ATerm u_136 (ATerm), ATerm v_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm z_7 (ATerm e_104 (ATerm), ATerm b_26, ATerm z_25, ATerm t);
static ATerm f_12 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm a_8 (ATerm k_27, ATerm l_27, ATerm t);
ATerm end_scope_1_0 (ATerm b_104 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_123 (ATerm), ATerm u_123 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm a_104 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t);
static ATerm l_12 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm b_8 (ATerm s_27, ATerm t_27, ATerm u_27, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm e_8 (ATerm q_27, ATerm r_27, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
ATerm map_1_0 (ATerm v_113 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm g_8 (ATerm g_39, ATerm h_39, ATerm t);
static ATerm h_8 (ATerm x_44, ATerm y_44, ATerm t);
static ATerm j_8 (ATerm r_112 (ATerm), ATerm c_390, ATerm d_45, ATerm t);
static ATerm i_8 (ATerm t_44, ATerm u_44, ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm z_12 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm x_129 (ATerm), ATerm t);
static ATerm p_82 (ATerm j_82, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_8 (ATerm z_44, ATerm t);
static ATerm l_8 (ATerm k_37, ATerm l_37, ATerm t);
static ATerm m_8 (ATerm i_39, ATerm j_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_84 (ATerm z_82, ATerm t);
static ATerm b_84 (ATerm d_83, ATerm e_83, ATerm f_83, ATerm t);
static ATerm c_84 (ATerm n_83, ATerm o_83, ATerm p_83, ATerm t);
static ATerm n_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_114 (ATerm), ATerm t);
static ATerm s_8 (ATerm y_28, ATerm z_28, ATerm t);
ATerm if_verbose2_1_0 (ATerm s_138 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_8 (ATerm u_74, ATerm v_74, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_8 (ATerm f_27, ATerm g_27, ATerm e_27, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_8 (ATerm d_46, ATerm e_46, ATerm t);
ATerm foldr_2_0 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_138 (ATerm), ATerm t);
static ATerm y_13 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_8 (ATerm x_31, ATerm y_31, ATerm z_31, ATerm t);
static ATerm x_8 (ATerm a_32, ATerm b_32, ATerm t);
ATerm lookup_table_0_1 (ATerm r_28, ATerm t);
ATerm new_hashtable_0_2 (ATerm f_32, ATerm g_32, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm q_8 (ATerm c_32, ATerm d_32, ATerm t);
static ATerm r_8 (ATerm h_32, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_134 (ATerm), ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm w_14 (ATerm t);
ATerm parse_options_3_0 (ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm t);
static ATerm a_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm m_15 (ATerm t);
ATerm iowrap_3_0 (ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm i_130 (ATerm), ATerm t);
static ATerm r_15 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,i_0 = NULL,s_0 = NULL,t_0 = NULL;
  a_0 = t;
  t = term_s_15;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_t_15;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_15), c_0), term_v_15);
  t_0 = t;
  t = SSL_printnl(s_0, t_0);
  t = term_x_15;
  i_0 = t;
  t = SSL_exit(i_0);
  t = a_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_138 (ATerm), ATerm t)
{
  ATerm v_0 = NULL;
  v_0 = t;
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL;
        t = term_b_16;
        y_0 = t;
        t = term_c_16;
        z_0 = t;
        t = term_d_16;
        t = s_8(y_0, z_0, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_0, term_e_16);
        t = geq_0_0(t);
        t = v_0;
        t = u_138(t);
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        t = v_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm u_103 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,w_6 = NULL;
  static ATerm k_0 (ATerm t);
  static ATerm m_0 (ATerm t);
  static ATerm k_0 (ATerm t)
  {
    ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,c_7 = NULL,b_7 = NULL;
    w_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        r_1 = ATgetArgument(t, 0);
        s_1 = ATgetArgument(t, 1);
        t_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_1);
    q_1 = t;
    t = r_1;
    t = u_103(t);
    u_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, u_1, s_1, t_1);
    b_7 = t;
    t = SSLsetAnnotations(b_7, q_1);
    v_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        i_1 = ATgetArgument(t, 0);
        j_1 = ATgetArgument(t, 1);
        k_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_1);
    h_1 = t;
    t = j_1;
    t = u_103(t);
    o_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, i_1, o_1, k_1);
    c_7 = t;
    t = SSLsetAnnotations(c_7, h_1);
    return(t);
  }
  static ATerm m_0 (ATerm t)
  {
    ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,o_7 = NULL;
    c_2 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        y_1 = ATgetArgument(t, 0);
        z_1 = ATgetArgument(t, 1);
        a_2 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_2);
    x_1 = t;
    t = a_2;
    t = u_103(t);
    b_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_1, z_1, b_2);
    o_7 = t;
    t = SSLsetAnnotations(o_7, x_1);
    return(t);
  }
  f_1 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      c_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
      e_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_1);
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_1, d_1, e_1);
  w_6 = t;
  t = SSLsetAnnotations(w_6, b_1);
  t = abstract_choice_2_0(k_0, m_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,w_7 = NULL;
  static ATerm n_0 (ATerm t);
  static ATerm p_0 (ATerm t);
  static ATerm n_0 (ATerm t)
  {
    ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,y_7 = NULL;
    l_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        i_2 = ATgetArgument(t, 0);
        j_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_2);
    h_2 = t;
    t = i_2;
    t = t_103(t);
    k_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, k_2, j_2);
    y_7 = t;
    t = SSLsetAnnotations(y_7, h_2);
    return(t);
  }
  static ATerm p_0 (ATerm t)
  {
    ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,r_2 = NULL,s_2 = NULL,c_8 = NULL;
    s_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        o_2 = ATgetArgument(t, 0);
        p_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_2);
    n_2 = t;
    t = p_2;
    t = t_103(t);
    r_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, o_2, r_2);
    c_8 = t;
    t = SSLsetAnnotations(c_8, n_2);
    return(t);
  }
  g_2 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      e_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_2);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, e_2, f_2);
  w_7 = t;
  t = SSLsetAnnotations(w_7, d_2);
  t = abstract_choice_2_0(n_0, p_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,w_2 = NULL,z_2 = NULL,b_3 = NULL,d_3 = NULL,h_3 = NULL;
  d_3 = t;
  t = save_MarkVar_0_0(t);
  t_2 = t;
  t = d_3;
  t = v_103(t);
  b_3 = t;
  t = save_MarkVar_0_0(t);
  w_2 = t;
  t = term_g_16;
  t = table_destroy_0_0(t);
  t = term_g_16;
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, t_2);
  t = m_7(h_3, t_2, t);
  t = b_3;
  t = w_103(t);
  z_2 = t;
  t = w_2;
  t = isect_MarkVar_0_0(t);
  t = z_2;
  return(t);
}
ATerm mark_choice_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL,u_8 = NULL;
  static ATerm w_0 (ATerm t);
  static ATerm a_1 (ATerm t);
  static ATerm w_0 (ATerm t)
  {
    ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL,b_9 = NULL;
    s_3 = t;
    if(match_cons(t, sym_Choice_2))
      {
        o_3 = ATgetArgument(t, 0);
        p_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_3);
    n_3 = t;
    t = o_3;
    t = s_103(t);
    r_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, r_3, p_3);
    b_9 = t;
    t = SSLsetAnnotations(b_9, n_3);
    return(t);
  }
  static ATerm a_1 (ATerm t)
  {
    ATerm t_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,c_9 = NULL;
    y_3 = t;
    if(match_cons(t, sym_Choice_2))
      {
        u_3 = ATgetArgument(t, 0);
        w_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_3);
    t_3 = t;
    t = w_3;
    t = s_103(t);
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, u_3, x_3);
    c_9 = t;
    t = SSLsetAnnotations(c_9, t_3);
    return(t);
  }
  m_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      j_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, j_3, k_3);
  u_8 = t;
  t = SSLsetAnnotations(u_8, i_3);
  t = abstract_choice_2_0(w_0, a_1, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm z_3 = NULL,h_4 = NULL,j_4 = NULL,s_4 = NULL,z_4 = NULL,b_5 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,s_9 = NULL,p_9 = NULL;
  h_4 = t;
  t = save_MarkVar_0_0(t);
  z_3 = t;
  t = h_4;
  if(match_cons(t, sym_Rec_2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_4);
  c_5 = t;
  t = f_5;
  t = mark_buv_0_0(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, e_5, g_5);
  p_9 = t;
  t = SSLsetAnnotations(p_9, c_5);
  t = z_3;
  t = isect_MarkVar_0_0(t);
  t = h_4;
  if(match_cons(t, sym_Rec_2))
    {
      s_4 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_4);
  j_4 = t;
  t = z_4;
  t = mark_buv_0_0(t);
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, s_4, b_5);
  s_9 = t;
  t = SSLsetAnnotations(s_9, j_4);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm i_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,z_5 = NULL,b_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,k_6 = NULL,l_6 = NULL,b_10 = NULL,a_10 = NULL,z_9 = NULL;
  l_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      g_6 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
      i_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_6);
  b_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, g_6, h_6, i_6);
  z_9 = t;
  t = SSLsetAnnotations(z_9, b_6);
  k_6 = t;
  t = save_MarkVar_0_0(t);
  i_5 = t;
  t = k_6;
  if(match_cons(t, sym_PrimT_3))
    {
      t_5 = ATgetArgument(t, 0);
      u_5 = ATgetArgument(t, 1);
      v_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_6);
  s_5 = t;
  t = v_5;
  t = map_1_0(a_3, t);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, t_5, u_5, w_5);
  a_10 = t;
  t = SSLsetAnnotations(a_10, s_5);
  z_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      l_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
      o_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_5);
  k_5 = t;
  t = m_5;
  t = mark_buv_0_0(t);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, l_5, p_5, o_5);
  b_10 = t;
  t = SSLsetAnnotations(b_10, k_5);
  q_5 = t;
  t = i_5;
  t = isect_MarkVar_0_0(t);
  t = q_5;
  return(t);
}
ATerm alltd_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  static ATerm m_6 (ATerm t);
  static ATerm m_6 (ATerm t)
  {
    ATerm h_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_106(t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = h_16;
        t = SRTS_all(m_6, t);
      }
    return(t);
  }
  t = m_6(t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm q_10 = NULL,s_10 = NULL,t_10 = NULL,y_10 = NULL;
  s_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      t_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
      q_10 = ATgetArgument(t, 2);
      {
        ATerm q_0 = NULL,r_0 = NULL,u_0 = NULL,g_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,p_1 = NULL,m_2 = NULL,q_2 = NULL,u_2 = NULL,v_2 = NULL,x_2 = NULL,y_2 = NULL,f_3 = NULL,h_10 = NULL,g_10 = NULL,f_10 = NULL;
        t = SSLgetAnnotations(s_10);
        y_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, t_10, y_10, q_10);
        f_10 = t;
        t = SSLsetAnnotations(f_10, y_2);
        f_3 = t;
        t = save_MarkVar_0_0(t);
        q_0 = t;
        t = f_3;
        if(match_cons(t, sym_CallT_3))
          {
            m_2 = ATgetArgument(t, 0);
            q_2 = ATgetArgument(t, 1);
            u_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_3);
        p_1 = t;
        t = u_2;
        t = map_1_0(c_3, t);
        v_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, m_2, q_2, v_2);
        g_10 = t;
        t = SSLsetAnnotations(g_10, p_1);
        x_2 = t;
        if(match_cons(t, sym_CallT_3))
          {
            u_0 = ATgetArgument(t, 0);
            g_1 = ATgetArgument(t, 1);
            l_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_2);
        r_0 = t;
        t = g_1;
        t = mark_buv_0_0(t);
        m_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, u_0, m_1, l_1);
        h_10 = t;
        t = SSLsetAnnotations(h_10, r_0);
        n_1 = t;
        t = q_0;
        t = isect_MarkVar_0_0(t);
        t = n_1;
      }
    }
  else
    {
      ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,p_4 = NULL,m_10 = NULL,i_10 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          t_10 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_10);
      m_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, t_10, y_10);
      i_10 = t;
      t = SSLsetAnnotations(i_10, m_4);
      p_4 = t;
      t = save_MarkVar_0_0(t);
      e_4 = t;
      t = p_4;
      if(match_cons(t, sym_Call_2))
        {
          g_4 = ATgetArgument(t, 0);
          i_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_4);
      f_4 = t;
      t = i_4;
      t = mark_buv_0_0(t);
      k_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, g_4, k_4);
      m_10 = t;
      t = SSLsetAnnotations(m_10, f_4);
      l_4 = t;
      t = e_4;
      t = isect_MarkVar_0_0(t);
      t = l_4;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_g_16;
  return(t);
}
static ATerm h_7 (ATerm n_25, ATerm o_25, ATerm p_25, ATerm t)
{
  ATerm h_11 = NULL;
  static ATerm g_3 (ATerm t);
  static ATerm g_3 (ATerm t)
  {
    t = o_25;
    t = map_1_0(IntroduceBound_0_0, t);
    t = p_25;
    t = mark_build_vars_0_0(t);
    if(((h_11 != NULL) && (h_11 != t)))
      _fail(t);
    else
      h_11 = t;
    return(t);
  }
  t = scope_2_0(e_3, g_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, n_25, o_25, not_null(h_11));
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_g_16;
  return(t);
}
static ATerm i_7 (ATerm h_25, ATerm l_25, ATerm j_25, ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  static ATerm q_3 (ATerm t);
  static ATerm q_3 (ATerm t)
  {
    t = h_25;
    t = mark_match_vars_0_0(t);
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = j_25;
    t = mark_buv_0_0(t);
    if(((j_11 != NULL) && (j_11 != t)))
      _fail(t);
    else
      j_11 = t;
    t = l_25;
    t = mark_build_vars_0_0(t);
    if(((k_11 != NULL) && (k_11 != t)))
      _fail(t);
    else
      k_11 = t;
    return(t);
  }
  t = scope_2_0(l_3, q_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_11), not_null(k_11), not_null(j_11)));
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_g_16;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm y_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_11);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            {
              ATerm p_16 = t;
              int r_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_12 = ATgetArgument(t, 0);
                      g_12 = ATgetArgument(t, 1);
                      h_12 = ATgetArgument(t, 2);
                      i_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_12;
                  t = map_1_0(d_4, t);
                  LocalPopChoice(r_16);
                }
              else
                {
                  t = p_16;
                  {
                    ATerm s_16 = t;
                    int t_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_16);
                      }
                    else
                      {
                        t = s_16;
                        t = dynrule_targs_1_0(n_4, t);
                      }
                  }
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
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_12 = ATgetArgument(t, 0);
          {
            ATerm x_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_16);
      t = p_12;
    }
  else
    {
      t = v_16;
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
static ATerm n_4 (ATerm t)
{
  t = map_1_0(o_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm d_13 = NULL;
  ATerm y_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_13 = ATgetArgument(t, 0);
          {
            ATerm b_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_17);
      t = d_13;
    }
  else
    {
      t = y_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_13;
    }
  return(t);
}
static ATerm j_7 (ATerm b_25, ATerm f_25, ATerm d_25, ATerm t)
{
  ATerm r_11 = NULL,t_11 = NULL,u_11 = NULL;
  static ATerm a_4 (ATerm t);
  static ATerm a_4 (ATerm t)
  {
    t = b_25;
    t = free_vars_3_0(b_4, c_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = b_25;
    t = mark_match_vars_0_0(t);
    if(((r_11 != NULL) && (r_11 != t)))
      _fail(t);
    else
      r_11 = t;
    t = d_25;
    t = mark_buv_0_0(t);
    if(((t_11 != NULL) && (t_11 != t)))
      _fail(t);
    else
      t_11 = t;
    t = f_25;
    t = mark_build_vars_0_0(t);
    if(((u_11 != NULL) && (u_11 != t)))
      _fail(t);
    else
      u_11 = t;
    return(t);
  }
  t = scope_2_0(v_3, a_4, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(r_11), not_null(u_11), not_null(t_11)));
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm k_15 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_15);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
            {
              ATerm h_17 = t;
              int i_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,u_15 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_15 = ATgetArgument(t, 0);
                      o_15 = ATgetArgument(t, 1);
                      p_15 = ATgetArgument(t, 2);
                      u_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_15;
                  t = map_1_0(t_4, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_17);
                      }
                    else
                      {
                        t = j_17;
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
  ATerm l_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_16 = ATgetArgument(t, 0);
          {
            ATerm q_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_17);
      t = i_16;
    }
  else
    {
      t = l_17;
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
  ATerm u_16 = NULL;
  ATerm s_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_16 = ATgetArgument(t, 0);
          {
            ATerm w_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_17);
      t = u_16;
    }
  else
    {
      t = s_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_16;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_g_16;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm g_18 = NULL;
  ATerm y_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_18 = ATgetArgument(t, 0);
          {
            ATerm b_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_18);
      t = g_18;
    }
  else
    {
      t = y_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_18;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm j_18 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_18);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            {
              ATerm h_18 = t;
              int i_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_18 = ATgetArgument(t, 0);
                      o_18 = ATgetArgument(t, 1);
                      p_18 = ATgetArgument(t, 2);
                      q_18 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_18;
                  t = map_1_0(h_5, t);
                  LocalPopChoice(i_18);
                }
              else
                {
                  t = h_18;
                  {
                    ATerm k_18 = t;
                    int m_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_18);
                      }
                    else
                      {
                        t = k_18;
                        t = dynrule_targs_1_0(n_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm e_19 = NULL;
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_19 = ATgetArgument(t, 0);
          {
            ATerm u_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_18);
      t = e_19;
    }
  else
    {
      t = s_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_19;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = map_1_0(r_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm l_19 = NULL;
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_19 = ATgetArgument(t, 0);
          {
            ATerm x_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_18);
      t = l_19;
    }
  else
    {
      t = v_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_19;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,p_14 = NULL,q_14 = NULL,v_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      d_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
      f_14 = ATgetArgument(t, 2);
      {
        ATerm b_15 = NULL,d_15 = NULL,h_15 = NULL,j_15 = NULL;
        t = f_14;
        if(match_cons(t, sym_Rule_3))
          {
            z_13 = ATgetArgument(t, 0);
            a_14 = ATgetArgument(t, 1);
            b_14 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = f_14;
        t = free_vars_3_0(q_4, r_4, tboundin_3_0, t);
        b_15 = t;
        {
          static ATerm x_4 (ATerm t);
          static ATerm x_4 (ATerm t)
          {
            t = b_15;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = z_13;
            t = mark_match_vars_0_0(t);
            if(((d_15 != NULL) && (d_15 != t)))
              _fail(t);
            else
              d_15 = t;
            t = b_14;
            t = mark_buv_0_0(t);
            if(((h_15 != NULL) && (h_15 != t)))
              _fail(t);
            else
              h_15 = t;
            t = a_14;
            t = mark_build_vars_0_0(t);
            if(((j_15 != NULL) && (j_15 != t)))
              _fail(t);
            else
              j_15 = t;
            return(t);
          }
          t = scope_2_0(w_4, x_4, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, d_14, e_14, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_15), not_null(j_15), not_null(h_15)));
      }
    }
  else
    {
      ATerm m_17 = NULL,n_17 = NULL,p_17 = NULL,r_17 = NULL,x_17 = NULL,z_17 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          d_14 = ATgetArgument(t, 0);
          e_14 = ATgetArgument(t, 1);
          f_14 = ATgetArgument(t, 2);
          p_14 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = p_14;
      if(match_cons(t, sym_Rule_3))
        {
          q_14 = ATgetArgument(t, 0);
          v_14 = ATgetArgument(t, 1);
          x_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_14;
      t = map_1_0(y_4, t);
      m_17 = t;
      t = p_14;
      t = free_vars_3_0(a_5, d_5, tboundin_3_0, t);
      z_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_17, m_17);
      t = diff_0_0(t);
      n_17 = t;
      {
        static ATerm y_5 (ATerm t);
        static ATerm y_5 (ATerm t)
        {
          t = m_17;
          t = map_1_0(IntroduceBound_0_0, t);
          t = n_17;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = q_14;
          t = mark_match_vars_0_0(t);
          if(((p_17 != NULL) && (p_17 != t)))
            _fail(t);
          else
            p_17 = t;
          t = x_14;
          t = mark_buv_0_0(t);
          if(((r_17 != NULL) && (r_17 != t)))
            _fail(t);
          else
            r_17 = t;
          t = v_14;
          t = mark_build_vars_0_0(t);
          if(((x_17 != NULL) && (x_17 != t)))
            _fail(t);
          else
            x_17 = t;
          return(t);
        }
        t = scope_2_0(x_5, y_5, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, d_14, e_14, f_14, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_17), not_null(x_17), not_null(r_17)));
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_19);
  w_19 = t;
  t = term_a_19;
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_19), term_a_19);
  t = z_7(a_6, w_19, x_19, t);
  t = v_19;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm f_20 = NULL;
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_20 = ATgetArgument(t, 0);
          {
            ATerm d_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_19);
      t = f_20;
    }
  else
    {
      t = b_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_20;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_g_16;
  return(t);
}
static ATerm k_7 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm d_24, ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL;
  t = b_24;
  t = map_1_0(c_6, t);
  z_19 = t;
  {
    static ATerm f_6 (ATerm t);
    static ATerm f_6 (ATerm t)
    {
      t = z_19;
      t = map_1_0(IntroduceBound_0_0, t);
      t = d_24;
      t = mark_buv_0_0(t);
      if(((a_20 != NULL) && (a_20 != t)))
        _fail(t);
      else
        a_20 = t;
      return(t);
    }
    t = scope_2_0(d_6, f_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_23, a_24, b_24, not_null(a_20));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,u_21 = NULL;
  m_21 = t;
  if(match_cons(t, sym__2))
    {
      n_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_21;
  if(match_cons(t, sym_Undefined_0))
    {
      t = n_21;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_f_19;
        }
      else
        {
          t = term_f_19;
        }
    }
  else
    {
      ATerm h_19 = t;
      int i_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm j_19 = ATgetArgument(t, 0);
              u_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(i_19);
          t = n_21;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_f_19;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  o_21 = ATgetArgument(t, 0);
                  p_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm k_19 = t;
                int m_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, p_21, u_21);
                    {
                      ATerm o_19 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm j_5 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              j_5 = ATgetArgument(t, 0);
                              if((j_5 != ATgetArgument(t, 1)))
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
                          t = o_19;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, o_21, term_p_19);
                    LocalPopChoice(m_19);
                  }
                else
                  {
                    t = k_19;
                    t = u_21;
                    if((p_21 != t))
                      {
                        _fail(t);
                      }
                    t = n_21;
                  }
              }
            }
        }
      else
        {
          t = h_19;
          t = n_21;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_f_19;
        }
    }
  return(t);
}
static ATerm l_7 (ATerm k_22, ATerm l_22, ATerm j_22, ATerm t)
{
  ATerm b_22 = NULL,g_22 = NULL,h_22 = NULL;
  t = term_g_16;
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, k_22);
  t = s_8(h_22, k_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_22 = ATgetFirst((ATermList) t);
      {
        ATerm q_19 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_22, b_22);
  t = CompareEntries_0_0(t);
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_22, (ATerm) ATinsert(CheckATermList(j_22), g_22));
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,s_23 = NULL,i_26 = NULL,j_26 = NULL;
  j_26 = t;
  if(match_cons(t, sym__2))
    {
      n_23 = ATgetArgument(t, 0);
      o_23 = ATgetArgument(t, 1);
      t = o_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_23 = ATgetFirst((ATermList) t);
          i_26 = (ATerm) ATgetNext((ATermList) t);
          t = s_23;
          {
            ATerm r_19 = t;
            int s_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm t_19 = ATgetArgument(t, 0);
                    ATerm u_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(s_19);
                t = n_23;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = j_26;
                  }
                else
                  {
                    ATerm y_19 = t;
                    int b_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_26;
                        t = l_7(n_23, s_23, i_26, t);
                        LocalPopChoice(b_20);
                      }
                    else
                      {
                        t = y_19;
                        t = j_26;
                      }
                  }
              }
            else
              {
                t = r_19;
                t = n_23;
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
          t = n_23;
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
  ATerm i_23 = NULL,j_23 = NULL;
  t = map_1_0(j_6, t);
  i_23 = t;
  t = term_g_16;
  t = table_destroy_0_0(t);
  t = term_g_16;
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, i_23);
  t = m_7(j_23, i_23, t);
  t = i_23;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm d_28 = NULL,p_28 = NULL,x_28 = NULL;
  x_28 = t;
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm g_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_20);
        t = x_28;
      }
    else
      {
        t = d_20;
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm k_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(i_20);
              t = x_28;
            }
          else
            {
              t = h_20;
              {
                ATerm l_20 = t;
                int m_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm n_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(m_20);
                    t = x_28;
                  }
                else
                  {
                    t = l_20;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm o_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_28;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  d_28 = t;
  t = x_28;
  t = SRTS_one(mark_buv_0_0, t);
  p_28 = t;
  t = d_28;
  t = isect_MarkVar_0_0(t);
  t = p_28;
  return(t);
}
static ATerm m_7 (ATerm i_28, ATerm h_28, ATerm t)
{
  static ATerm p_6 (ATerm t);
  static ATerm p_6 (ATerm t)
  {
    ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
    if(match_cons(t, sym__2))
      {
        b_29 = ATgetArgument(t, 0);
        c_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_28, b_29, c_29);
    t = lookup_table_0_1(i_28, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        d_29 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = w_8(b_29, c_29, d_29, t);
    t = (ATerm) ATmakeAppl(sym__3, i_28, b_29, c_29);
    return(t);
  }
  t = h_28;
  t = map_1_0(p_6, t);
  return(t);
}
static ATerm n_7 (ATerm e_32, ATerm t)
{
  t = SSL_hashtable_keys(e_32);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL;
  static ATerm q_6 (ATerm t);
  static ATerm q_6 (ATerm t)
  {
    ATerm h_29 = NULL,i_29 = NULL;
    h_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_29), h_29);
    t = s_8(not_null(f_29), h_29, t);
    i_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_29, i_29);
    return(t);
  }
  if(((f_29 != NULL) && (f_29 != t)))
    _fail(t);
  else
    f_29 = t;
  t = lookup_table_0_1(f_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(g_29, t);
  t = map_1_0(q_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_g_16;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm x_22, ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm r_6 (ATerm t);
    static ATerm r_6 (ATerm t)
    {
      static ATerm i_31 (ATerm l_30, ATerm t);
      static ATerm i_31 (ATerm l_30, ATerm t)
      {
        ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
        t = l_30;
        if(match_cons(t, sym__2))
          {
            ATerm p_20 = ATgetArgument(t, 0);
            m_30 = p_20;
            if(match_cons(p_20, sym_Var_1))
              {
                n_30 = ATgetArgument(p_20, 0);
              }
            else
              _fail(t);
            {
              ATerm q_20 = ATgetArgument(t, 1);
              if(((ATgetType(q_20) == AT_LIST) && !(ATisEmpty(q_20))))
                {
                  ATerm r_20 = ATgetFirst((ATermList) q_20);
                  if(match_cons(r_20, sym_Defined_2))
                    {
                      o_30 = ATgetArgument(r_20, 0);
                      {
                        ATerm t_20 = ATgetArgument(r_20, 1);
                        if((ATgetSymbol((ATermAppl) t_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  p_30 = (ATerm) ATgetNext((ATermList) q_20);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_22;
        {
          static ATerm s_6 (ATerm t);
          static ATerm s_6 (ATerm t)
          {
            if((n_30 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(s_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, m_30, (ATerm) ATinsert(CheckATermList(p_30), (ATerm) ATmakeAppl(sym_Defined_2, o_30, term_p_19)));
        return(t);
      }
      ATerm t_30 = NULL,v_30 = NULL;
      v_30 = t;
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                t_30 = ATgetArgument(t, 0);
                {
                  ATerm x_20 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(v_20);
            t = t_30;
            if(match_cons(t, sym_Scopes_0))
              {
                t = v_30;
              }
            else
              {
                ATerm c_21 = t;
                int d_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_31(v_30, t);
                    LocalPopChoice(d_21);
                  }
                else
                  {
                    t = c_21;
                    t = v_30;
                  }
              }
          }
        else
          {
            t = u_20;
            {
              ATerm e_21 = t;
              int t_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_31(v_30, t);
                  LocalPopChoice(t_21);
                }
              else
                {
                  t = e_21;
                  t = v_30;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(r_6, t);
  }
  j_30 = t;
  t = term_g_16;
  t = table_destroy_0_0(t);
  t = term_g_16;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, j_30);
  t = m_7(k_30, j_30, t);
  t = j_30;
  return(t);
}
ATerm tboundin_3_0 (ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,t_42 = NULL,u_42 = NULL;
  t_42 = t;
  if(match_cons(t, sym_Scope_2))
    {
      u_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
      {
        ATerm e_6 = NULL,n_6 = NULL,o_6 = NULL,y_20 = NULL;
        t = SSLgetAnnotations(t_42);
        e_6 = t;
        t = u_42;
        t = t_139(t);
        n_6 = t;
        t = q_42;
        t = r_139(t);
        o_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_6, o_6);
        y_20 = t;
        t = SSLsetAnnotations(y_20, e_6);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          u_42 = ATgetArgument(t, 0);
          {
            ATerm v_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,y_8 = NULL,z_8 = NULL,a_21 = NULL,z_20 = NULL;
            t = SSLgetAnnotations(t_42);
            v_6 = t;
            t = u_42;
            if(match_cons(t, sym_Rule_3))
              {
                z_6 = ATgetArgument(t, 0);
                a_7 = ATgetArgument(t, 1);
                d_7 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_42);
            y_6 = t;
            t = z_6;
            t = r_139(t);
            e_7 = t;
            t = a_7;
            t = r_139(t);
            f_7 = t;
            t = d_7;
            t = r_139(t);
            y_8 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, e_7, f_7, y_8);
            z_20 = t;
            t = SSLsetAnnotations(z_20, y_6);
            z_8 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, z_8);
            a_21 = t;
            t = SSLsetAnnotations(a_21, v_6);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              u_42 = ATgetArgument(t, 0);
              q_42 = ATgetArgument(t, 1);
              o_42 = ATgetArgument(t, 2);
              {
                ATerm m_9 = NULL,r_9 = NULL,v_9 = NULL,w_9 = NULL,b_21 = NULL;
                t = SSLgetAnnotations(t_42);
                m_9 = t;
                t = u_42;
                t = t_139(t);
                r_9 = t;
                t = q_42;
                t = t_139(t);
                v_9 = t;
                t = o_42;
                t = t_139(t);
                w_9 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, r_9, v_9, w_9);
                b_21 = t;
                t = SSLsetAnnotations(b_21, m_9);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  u_42 = ATgetArgument(t, 0);
                  q_42 = ATgetArgument(t, 1);
                  o_42 = ATgetArgument(t, 2);
                  p_42 = ATgetArgument(t, 3);
                  {
                    ATerm x_10 = NULL,f_11 = NULL,g_11 = NULL,l_11 = NULL,m_11 = NULL,f_21 = NULL;
                    t = SSLgetAnnotations(t_42);
                    x_10 = t;
                    t = u_42;
                    t = t_139(t);
                    f_11 = t;
                    t = q_42;
                    t = t_139(t);
                    g_11 = t;
                    t = o_42;
                    t = t_139(t);
                    l_11 = t;
                    t = p_42;
                    t = r_139(t);
                    m_11 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, f_11, g_11, l_11, m_11);
                    f_21 = t;
                    t = SSLsetAnnotations(f_21, x_10);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_42 = ATgetArgument(t, 0);
                      q_42 = ATgetArgument(t, 1);
                      o_42 = ATgetArgument(t, 2);
                      p_42 = ATgetArgument(t, 3);
                      {
                        ATerm e_12 = NULL,t_12 = NULL,u_12 = NULL,x_12 = NULL,y_12 = NULL,g_21 = NULL;
                        t = SSLgetAnnotations(t_42);
                        e_12 = t;
                        t = u_42;
                        t = t_139(t);
                        t_12 = t;
                        t = q_42;
                        t = t_139(t);
                        u_12 = t;
                        t = o_42;
                        t = t_139(t);
                        x_12 = t;
                        t = p_42;
                        t = r_139(t);
                        y_12 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, t_12, u_12, x_12, y_12);
                        g_21 = t;
                        t = SSLsetAnnotations(g_21, e_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          u_42 = ATgetArgument(t, 0);
                          q_42 = ATgetArgument(t, 1);
                          {
                            ATerm n_13 = NULL,q_13 = NULL,r_13 = NULL,j_21 = NULL;
                            t = SSLgetAnnotations(t_42);
                            n_13 = t;
                            t = u_42;
                            t = t_139(t);
                            q_13 = t;
                            t = q_42;
                            t = r_139(t);
                            r_13 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, q_13, r_13);
                            j_21 = t;
                            t = SSLsetAnnotations(j_21, n_13);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              u_42 = ATgetArgument(t, 0);
                              q_42 = ATgetArgument(t, 1);
                              {
                                ATerm g_14 = NULL,j_14 = NULL,k_14 = NULL,k_21 = NULL;
                                t = SSLgetAnnotations(t_42);
                                g_14 = t;
                                t = u_42;
                                t = t_139(t);
                                j_14 = t;
                                t = q_42;
                                t = r_139(t);
                                k_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, j_14, k_14);
                                k_21 = t;
                                t = SSLsetAnnotations(k_21, g_14);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  u_42 = ATgetArgument(t, 0);
                                  q_42 = ATgetArgument(t, 1);
                                  {
                                    ATerm u_14 = NULL,f_15 = NULL,l_15 = NULL,l_21 = NULL;
                                    t = SSLgetAnnotations(t_42);
                                    u_14 = t;
                                    t = u_42;
                                    t = t_139(t);
                                    f_15 = t;
                                    t = q_42;
                                    t = r_139(t);
                                    l_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, f_15, l_15);
                                    l_21 = t;
                                    t = SSLsetAnnotations(l_21, u_14);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      u_42 = ATgetArgument(t, 0);
                                      {
                                        ATerm y_15 = NULL,f_16 = NULL,r_21 = NULL;
                                        t = SSLgetAnnotations(t_42);
                                        y_15 = t;
                                        t = u_42;
                                        t = r_139(t);
                                        f_16 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, f_16);
                                        r_21 = t;
                                        t = SSLsetAnnotations(r_21, y_15);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          u_42 = ATgetArgument(t, 0);
                                          {
                                            ATerm o_16 = NULL,q_16 = NULL,a_22 = NULL;
                                            t = SSLgetAnnotations(t_42);
                                            o_16 = t;
                                            t = u_42;
                                            t = r_139(t);
                                            q_16 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, q_16);
                                            a_22 = t;
                                            t = SSLsetAnnotations(a_22, o_16);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              u_42 = ATgetArgument(t, 0);
                                              {
                                                ATerm z_16 = NULL,e_17 = NULL,e_22 = NULL;
                                                t = SSLgetAnnotations(t_42);
                                                z_16 = t;
                                                t = u_42;
                                                t = r_139(t);
                                                e_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, e_17);
                                                e_22 = t;
                                                t = SSLsetAnnotations(e_22, z_16);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  u_42 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm t_17 = NULL,v_17 = NULL,f_22 = NULL;
                                                    t = SSLgetAnnotations(t_42);
                                                    t_17 = t;
                                                    t = u_42;
                                                    t = r_139(t);
                                                    v_17 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, v_17);
                                                    f_22 = t;
                                                    t = SSLsetAnnotations(f_22, t_17);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm l_18 = NULL,r_18 = NULL,i_22 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      u_42 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(t_42);
                                                  l_18 = t;
                                                  t = u_42;
                                                  t = r_139(t);
                                                  r_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, r_18);
                                                  i_22 = t;
                                                  t = SSLsetAnnotations(i_22, l_18);
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
ATerm dynrule_targs_1_0 (ATerm a_140 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,m_44 = NULL,b_45 = NULL;
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          g_44 = ATgetArgument(t, 0);
          {
            ATerm z_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_21);
      t = g_44;
      if(match_cons(t, sym_DynRuleId_1))
        {
          m_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_44;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_22 = ATgetArgument(t, 0);
          ATerm q_22 = ATgetArgument(t, 1);
          b_45 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_45;
    }
  else
    {
      t = v_21;
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                g_44 = ATgetArgument(t, 0);
                {
                  ATerm t_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_22);
            t = g_44;
            if(match_cons(t, sym_DynRuleId_1))
              {
                m_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_44;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm u_22 = ATgetArgument(t, 0);
                ATerm v_22 = ATgetArgument(t, 1);
                b_45 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_45;
          }
        else
          {
            t = r_22;
            if(match_cons(t, sym_AddDynRule_2))
              {
                g_44 = ATgetArgument(t, 0);
                {
                  ATerm w_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = g_44;
            if(match_cons(t, sym_DynRuleId_1))
              {
                m_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_44;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm y_22 = ATgetArgument(t, 0);
                ATerm z_22 = ATgetArgument(t, 1);
                b_45 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_45;
          }
      }
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm s_46 = NULL;
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_46 = ATgetArgument(t, 0);
          {
            ATerm c_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_23);
      t = s_46;
    }
  else
    {
      t = a_23;
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
static ATerm u_6 (ATerm t)
{
  ATerm f_47 = NULL;
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_47 = ATgetArgument(t, 0);
          {
            ATerm k_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_23);
      t = f_47;
    }
  else
    {
      t = g_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_47;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm g_46 = NULL;
  ATerm l_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm q_23 = ATgetArgument(t, 0);
          ATerm r_23 = ATgetArgument(t, 1);
          g_46 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(p_23);
      t = g_46;
      t = map_1_0(t_6, t);
    }
  else
    {
      t = l_23;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm t_23 = ATgetArgument(t, 0);
          ATerm u_23 = ATgetArgument(t, 1);
          g_46 = ATgetArgument(t, 2);
          {
            ATerm y_23 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = g_46;
      t = map_1_0(u_6, t);
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm a_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_49);
  return(t);
}
static ATerm p_7 (ATerm t)
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
        ATerm f_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_24);
          }
        else
          {
            t = f_24;
            {
              ATerm i_24 = t;
              int j_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_49 = ATgetArgument(t, 0);
                      f_49 = ATgetArgument(t, 1);
                      g_49 = ATgetArgument(t, 2);
                      h_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_49;
                  t = map_1_0(t_7, t);
                  LocalPopChoice(j_24);
                }
              else
                {
                  t = i_24;
                  {
                    ATerm k_24 = t;
                    int l_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_24);
                      }
                    else
                      {
                        t = k_24;
                        t = dynrule_targs_1_0(u_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm t_49 = NULL;
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_49 = ATgetArgument(t, 0);
          {
            ATerm r_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_24);
      t = t_49;
    }
  else
    {
      t = p_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_49;
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = map_1_0(v_7, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm c_50 = NULL;
  ATerm s_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_50 = ATgetArgument(t, 0);
          {
            ATerm v_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_24);
      t = c_50;
    }
  else
    {
      t = s_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_50;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm p_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_50);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm w_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_24);
    }
  else
    {
      t = w_24;
      {
        ATerm a_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_25);
          }
        else
          {
            t = a_25;
            {
              ATerm e_25 = t;
              int g_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_50 = ATgetArgument(t, 0);
                      u_50 = ATgetArgument(t, 1);
                      v_50 = ATgetArgument(t, 2);
                      w_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_50;
                  t = map_1_0(p_8, t);
                  LocalPopChoice(g_25);
                }
              else
                {
                  t = e_25;
                  {
                    ATerm i_25 = t;
                    int m_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_25);
                      }
                    else
                      {
                        t = i_25;
                        t = dynrule_targs_1_0(a_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm m_51 = NULL;
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_51 = ATgetArgument(t, 0);
          {
            ATerm t_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_25);
      t = m_51;
    }
  else
    {
      t = r_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_51;
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = map_1_0(d_9, t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm w_51 = NULL;
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_51 = ATgetArgument(t, 0);
          {
            ATerm w_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_25);
      t = w_51;
    }
  else
    {
      t = u_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_51;
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm c_52 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_52);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm y_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_26);
    }
  else
    {
      t = y_25;
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            {
              ATerm g_26 = t;
              int h_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_52 = ATgetArgument(t, 0);
                      i_52 = ATgetArgument(t, 1);
                      j_52 = ATgetArgument(t, 2);
                      k_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_52;
                  t = map_1_0(g_9, t);
                  LocalPopChoice(h_26);
                }
              else
                {
                  t = g_26;
                  {
                    ATerm k_26 = t;
                    int l_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_26);
                      }
                    else
                      {
                        t = k_26;
                        t = dynrule_targs_1_0(h_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm v_52 = NULL;
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_52 = ATgetArgument(t, 0);
          {
            ATerm o_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_26);
      t = v_52;
    }
  else
    {
      t = m_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_52;
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = map_1_0(i_9, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm c_53 = NULL;
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_53 = ATgetArgument(t, 0);
          {
            ATerm r_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_26);
      t = c_53;
    }
  else
    {
      t = p_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_53;
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm k_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_53);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            {
              ATerm x_26 = t;
              int d_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_53 = ATgetArgument(t, 0);
                      o_53 = ATgetArgument(t, 1);
                      p_53 = ATgetArgument(t, 2);
                      q_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_53;
                  t = map_1_0(l_9, t);
                  LocalPopChoice(d_27);
                }
              else
                {
                  t = x_26;
                  {
                    ATerm i_27 = t;
                    int j_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(j_27);
                      }
                    else
                      {
                        t = i_27;
                        t = dynrule_targs_1_0(n_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm t_54 = NULL;
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_54 = ATgetArgument(t, 0);
          {
            ATerm o_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_27);
      t = t_54;
    }
  else
    {
      t = m_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_54;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = map_1_0(o_9, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm d_55 = NULL;
  ATerm p_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_55 = ATgetArgument(t, 0);
          {
            ATerm x_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_27);
      t = d_55;
    }
  else
    {
      t = p_27;
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
static ATerm q_9 (ATerm t)
{
  ATerm p_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_55);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      {
        ATerm a_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_28);
          }
        else
          {
            t = a_28;
            {
              ATerm n_28 = t;
              int o_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_55 = NULL,t_55 = NULL,v_55 = NULL,y_55 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_55 = ATgetArgument(t, 0);
                      t_55 = ATgetArgument(t, 1);
                      v_55 = ATgetArgument(t, 2);
                      y_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_55;
                  t = map_1_0(u_9, t);
                  LocalPopChoice(o_28);
                }
              else
                {
                  t = n_28;
                  {
                    ATerm q_28 = t;
                    int s_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_28);
                      }
                    else
                      {
                        t = q_28;
                        t = dynrule_targs_1_0(x_9, t);
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
  ATerm p_56 = NULL;
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_56 = ATgetArgument(t, 0);
          {
            ATerm v_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_28);
      t = p_56;
    }
  else
    {
      t = t_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_56;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = map_1_0(y_9, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm x_56 = NULL;
  ATerm w_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_56 = ATgetArgument(t, 0);
          {
            ATerm e_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_29);
      t = x_56;
    }
  else
    {
      t = w_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_56;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm y_48 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      y_48 = ATgetArgument(t, 0);
      t = y_48;
      t = free_vars_3_0(x_6, p_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          y_48 = ATgetArgument(t, 0);
          t = y_48;
          t = free_vars_3_0(d_8, f_8, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              y_48 = ATgetArgument(t, 0);
              t = y_48;
              t = free_vars_3_0(e_9, f_9, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  y_48 = ATgetArgument(t, 0);
                  t = y_48;
                  t = free_vars_3_0(j_9, k_9, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      y_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = y_48;
                  t = free_vars_3_0(q_9, t_9, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm b_58 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_58);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_29);
          }
        else
          {
            t = n_29;
            {
              ATerm p_29 = t;
              int q_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_58 = ATgetArgument(t, 0);
                      e_58 = ATgetArgument(t, 1);
                      f_58 = ATgetArgument(t, 2);
                      g_58 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_58;
                  t = map_1_0(e_10, t);
                  LocalPopChoice(q_29);
                }
              else
                {
                  t = p_29;
                  {
                    ATerm s_29 = t;
                    int t_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_29);
                      }
                    else
                      {
                        t = s_29;
                        t = dynrule_targs_1_0(j_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm r_58 = NULL;
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_58 = ATgetArgument(t, 0);
          {
            ATerm x_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_29);
      t = r_58;
    }
  else
    {
      t = v_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_58;
    }
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = map_1_0(k_10, t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm z_58 = NULL;
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_58 = ATgetArgument(t, 0);
          {
            ATerm a_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_29);
      t = z_58;
    }
  else
    {
      t = y_29;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm q_57 = NULL,y_57 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      y_57 = ATgetArgument(t, 0);
      t = y_57;
      if(match_cons(t, sym_Rule_3))
        {
          q_57 = ATgetArgument(t, 0);
          {
            ATerm b_30 = ATgetArgument(t, 1);
          }
          {
            ATerm d_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = q_57;
      t = free_vars_3_0(c_10, d_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          y_57 = ATgetArgument(t, 0);
          {
            ATerm e_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_57;
    }
  return(t);
}
static ATerm q_7 (ATerm g_118 (ATerm), ATerm y_53, ATerm x_53, ATerm t)
{
  static ATerm j_60 (ATerm t);
  static ATerm j_60 (ATerm t)
  {
    ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL;
    e_60 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_53;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_60 = ATgetFirst((ATermList) t);
            g_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_60;
              {
                static ATerm l_10 (ATerm t);
                static ATerm l_10 (ATerm t)
                {
                  t = x_53;
                  return(t);
                }
                t = r_7(g_118, l_10, f_60, g_60, t);
              }
              t = j_60(t);
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              {
                ATerm g_19 = NULL,n_19 = NULL,t_32 = NULL;
                t = SSLgetAnnotations(e_60);
                g_19 = t;
                t = g_60;
                t = j_60(t);
                n_19 = t;
                t = (ATerm) ATinsert(CheckATermList(n_19), f_60);
                t_32 = t;
                t = SSLsetAnnotations(t_32, g_19);
              }
            }
        }
      }
    return(t);
  }
  t = y_53;
  t = j_60(t);
  return(t);
}
ATerm foldr_3_0 (ATerm l_121 (ATerm), ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm t)
{
  ATerm m_60 = NULL,r_60 = NULL,w_60 = NULL;
  m_60 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_60;
      t = l_121(t);
    }
  else
    {
      ATerm z_60 = NULL,a_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_60 = ATgetFirst((ATermList) t);
          w_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_60;
      t = n_121(t);
      z_60 = t;
      t = w_60;
      t = foldr_3_0(l_121, m_121, n_121, t);
      a_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_60, a_61);
      t = m_121(t);
    }
  return(t);
}
static ATerm r_7 (ATerm j_118 (ATerm), ATerm k_118 (ATerm), ATerm c_54, ATerm b_54, ATerm t)
{
  t = k_118(t);
  {
    static ATerm n_10 (ATerm t);
    static ATerm n_10 (ATerm t)
    {
      ATerm j_61 = NULL;
      j_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_54, j_61);
      t = j_118(t);
      return(t);
    }
    t = fetch_1_0(n_10, t);
  }
  t = b_54;
  return(t);
}
static ATerm s_7 (ATerm b_118 (ATerm), ATerm w_53, ATerm v_53, ATerm t)
{
  static ATerm t_62 (ATerm t);
  static ATerm t_62 (ATerm t)
  {
    ATerm g_62 = NULL,l_62 = NULL,m_62 = NULL;
    g_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_62;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_62 = ATgetFirst((ATermList) t);
            m_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_30 = t;
          int q_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_62;
              {
                static ATerm o_10 (ATerm t);
                static ATerm o_10 (ATerm t)
                {
                  t = v_53;
                  return(t);
                }
                t = r_7(b_118, o_10, l_62, m_62, t);
              }
              t = t_62(t);
              LocalPopChoice(q_30);
            }
          else
            {
              t = i_30;
              {
                ATerm c_20 = NULL,j_20 = NULL,v_32 = NULL;
                t = SSLgetAnnotations(g_62);
                c_20 = t;
                t = m_62;
                t = t_62(t);
                j_20 = t;
                t = (ATerm) ATinsert(CheckATermList(j_20), l_62);
                v_32 = t;
                t = SSLsetAnnotations(v_32, c_20);
              }
            }
        }
      }
    return(t);
  }
  t = w_53;
  t = t_62(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_114 (ATerm), ATerm t)
{
  static ATerm i_64 (ATerm t);
  static ATerm i_64 (ATerm t)
  {
    ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL;
    h_64 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_64 = ATgetFirst((ATermList) t);
        g_64 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_20 = NULL,w_20 = NULL,x_32 = NULL;
          t = SSLgetAnnotations(h_64);
          s_20 = t;
          t = g_64;
          t = i_64(t);
          w_20 = t;
          t = (ATerm) ATinsert(CheckATermList(w_20), f_64);
          x_32 = t;
          t = SSLsetAnnotations(x_32, s_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_64;
        t = m_114(t);
      }
    return(t);
  }
  t = i_64(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_63 = NULL,h_63 = NULL,i_63 = NULL;
  f_63 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_63;
    }
  else
    {
      static ATerm p_10 (ATerm t);
      static ATerm p_10 (ATerm t)
      {
        t = not_null(i_63);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_63 = ATgetFirst((ATermList) t);
          if(((i_63 != NULL) && (i_63 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_63;
      t = at_end_1_0(p_10, t);
    }
  return(t);
}
static ATerm p_65 (ATerm w_64, ATerm t)
{
  ATerm x_64 = NULL;
  t = SSL_explode_term(w_64);
  if(match_cons(t, sym__2))
    {
      ATerm r_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_64;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL,h_65 = NULL;
  h_65 = t;
  if(match_cons(t, sym__2))
    {
      z_64 = ATgetArgument(t, 0);
      a_65 = ATgetArgument(t, 1);
      {
        ATerm u_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_10 (ATerm t);
            static ATerm r_10 (ATerm t)
            {
              t = a_65;
              return(t);
            }
            t = z_64;
            t = at_end_1_0(r_10, t);
            LocalPopChoice(w_30);
          }
        else
          {
            t = u_30;
            t = p_65(h_65, t);
          }
      }
    }
  else
    {
      t = p_65(h_65, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm t)
{
  static ATerm y_65 (ATerm t);
  static ATerm y_65 (ATerm t)
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_115(t);
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        {
          ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,z_32 = NULL;
          t = a_116(t);
          v_65 = t;
          if(match_cons(t, sym__2))
            {
              r_65 = ATgetArgument(t, 0);
              s_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_65);
          q_65 = t;
          t = r_65;
          t = c_116(t);
          t_65 = t;
          t = s_65;
          t = y_65(t);
          u_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_65, u_65);
          z_32 = t;
          t = SSLsetAnnotations(z_32, q_65);
          t = b_116(t);
        }
      }
    return(t);
  }
  t = y_65(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_31 = ATgetArgument(t, 0);
      if(((ATgetType(c_31) != AT_LIST) || !(ATisEmpty(c_31))))
        _fail(t);
      {
        ATerm d_31 = ATgetArgument(t, 1);
        if(((ATgetType(d_31) != AT_LIST) || !(ATisEmpty(d_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_31 = ATgetArgument(t, 0);
      if(((ATgetType(e_31) == AT_LIST) && !(ATisEmpty(e_31))))
        {
          l_66 = ATgetFirst((ATermList) e_31);
          m_66 = (ATerm) ATgetNext((ATermList) e_31);
        }
      else
        _fail(t);
      {
        ATerm f_31 = ATgetArgument(t, 1);
        if(((ATgetType(f_31) == AT_LIST) && !(ATisEmpty(f_31))))
          {
            n_66 = ATgetFirst((ATermList) f_31);
            o_66 = (ATerm) ATgetNext((ATermList) f_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_66, n_66), (ATerm) ATmakeAppl(sym__2, m_66, o_66));
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL;
  if(match_cons(t, sym__2))
    {
      p_66 = ATgetArgument(t, 0);
      q_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_66), p_66);
  return(t);
}
static ATerm x_7 (ATerm s_785, ATerm x_785, ATerm j_78, ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,g_66 = NULL,j_66 = NULL;
  t = SSL_explode_term(x_785);
  if(match_cons(t, sym__2))
    {
      b_66 = ATgetArgument(t, 0);
      g_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_785);
  if(match_cons(t, sym__2))
    {
      if((b_66 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_66, g_66);
  t = genzip_4_0(u_10, v_10, w_10, _id, t);
  j_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_66, j_78);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t)
{
  static ATerm s_66 (ATerm t);
  static ATerm s_66 (ATerm t)
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_111(t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        t = u_111(t);
        t = s_66(t);
      }
    return(t);
  }
  t = s_66(t);
  return(t);
}
ATerm for_3_0 (ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm y_111 (ATerm), ATerm t)
{
  t = w_111(t);
  t = while_not_2_0(x_111, y_111, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm z_66 = NULL;
  z_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_66);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,b_33 = NULL;
  d_67 = t;
  if(match_cons(t, sym__2))
    {
      b_67 = ATgetArgument(t, 0);
      c_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_67);
  a_67 = t;
  t = c_67;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_67, c_67);
  b_33 = t;
  t = SSLsetAnnotations(b_33, a_67);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL;
  w_67 = t;
  if(match_cons(t, sym__2))
    {
      x_67 = ATgetArgument(t, 0);
      y_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_67 = ATgetFirst((ATermList) t);
      a_68 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_68(x_67, y_67, w_67, t);
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_67), z_67), a_68);
          }
      }
    }
  else
    {
      t = k_68(x_67, y_67, w_67, t);
    }
  return(t);
}
static ATerm k_68 (ATerm e_67, ATerm f_67, ATerm g_67, ATerm t)
{
  ATerm h_67 = NULL,k_67 = NULL,c_33 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
  t = SSLgetAnnotations(g_67);
  h_67 = t;
  t = f_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_67 = ATgetFirst((ATermList) t);
      q_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_67;
  if(match_cons(t, sym__2))
    {
      o_67 = ATgetArgument(t, 0);
      p_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_67;
        if((o_67 != t))
          {
            _fail(t);
          }
        t = q_67;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = f_67;
        t = x_7(o_67, p_67, q_67, t);
      }
  }
  k_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_67, k_67);
  c_33 = t;
  t = SSLsetAnnotations(c_33, h_67);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm j_68 = NULL;
  if(match_cons(t, sym__2))
    {
      j_68 = ATgetArgument(t, 0);
      if((j_68 != ATgetArgument(t, 1)))
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
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(z_10, a_11, b_11, t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
        ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL;
        e_68 = t;
        if(match_cons(t, sym__2))
          {
            f_68 = ATgetArgument(t, 0);
            g_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_68;
        t = s_7(c_11, f_68, g_68, t);
      }
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm s_21 = NULL,x_21 = NULL;
  if(match_cons(t, sym__2))
    {
      s_21 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(p_11, s_21, x_21, t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      y_21 = ATgetArgument(t, 0);
      if((y_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(v_11, m_22, n_22, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      o_22 = ATgetArgument(t, 0);
      if((o_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm t_136 (ATerm), ATerm u_136 (ATerm), ATerm v_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm y_68 (ATerm t);
  static ATerm y_68 (ATerm t)
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_136(t);
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_68 = NULL,n_68 = NULL,h_21 = NULL,i_21 = NULL;
              m_68 = t;
              t = u_136(t);
              n_68 = t;
              t = m_68;
              {
                static ATerm d_11 (ATerm t);
                static ATerm d_11 (ATerm t)
                {
                  ATerm p_68 = NULL;
                  t = y_68(t);
                  p_68 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_68, n_68);
                  t = diff_0_0(t);
                  return(t);
                }
                t = v_136(d_11, y_68, e_11, t);
              }
              i_21 = t;
              t = SSL_explode_term(i_21);
              if(match_cons(t, sym__2))
                {
                  ATerm v_31 = ATgetArgument(t, 0);
                  h_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_21;
              t = foldr_3_0(n_11, o_11, _id, t);
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              {
                ATerm c_22 = NULL,d_22 = NULL;
                d_22 = t;
                t = SSL_explode_term(d_22);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_31 = ATgetArgument(t, 0);
                    c_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_22;
                t = foldr_3_0(q_11, s_11, y_68, t);
              }
            }
        }
      }
    return(t);
  }
  t = y_68(t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm q_69 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_69);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm i_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = i_32;
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            {
              ATerm s_32 = t;
              int u_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_69 = ATgetArgument(t, 0);
                      t_69 = ATgetArgument(t, 1);
                      u_69 = ATgetArgument(t, 2);
                      v_69 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_69;
                  t = map_1_0(z_11, t);
                  LocalPopChoice(u_32);
                }
              else
                {
                  t = s_32;
                  {
                    ATerm w_32 = t;
                    int y_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_32);
                      }
                    else
                      {
                        t = w_32;
                        t = dynrule_targs_1_0(a_12, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm c_70 = NULL;
  ATerm a_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_70 = ATgetArgument(t, 0);
          {
            ATerm e_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_33);
      t = c_70;
    }
  else
    {
      t = a_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_70;
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = map_1_0(c_12, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm h_70 = NULL;
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_70 = ATgetArgument(t, 0);
          {
            ATerm k_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_33);
      t = h_70;
    }
  else
    {
      t = h_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_70;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,g_33 = NULL,f_33 = NULL;
  p_69 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_69 = ATgetArgument(t, 0);
      n_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_69);
  l_69 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, m_69, n_69);
  f_33 = t;
  t = SSLsetAnnotations(f_33, l_69);
  o_69 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_69 = ATgetArgument(t, 0);
      {
        ATerm q_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_69;
  t = free_vars_3_0(w_11, x_11, tboundin_3_0, t);
  c_69 = t;
  t = undefine_unbound_MarkVar_0_1(c_69, t);
  d_69 = t;
  t = o_69;
  if(match_cons(t, sym_Let_2))
    {
      g_69 = ATgetArgument(t, 0);
      h_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_69);
  f_69 = t;
  t = g_69;
  {
    static ATerm d_12 (ATerm t);
    static ATerm d_12 (ATerm t)
    {
      ATerm k_70 = NULL,l_70 = NULL;
      k_70 = t;
      t = term_g_16;
      t = table_destroy_0_0(t);
      t = term_g_16;
      l_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_g_16, d_69);
      t = m_7(l_70, d_69, t);
      t = k_70;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(d_12, t);
  }
  i_69 = t;
  t = term_g_16;
  t = table_destroy_0_0(t);
  t = term_g_16;
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, d_69);
  t = m_7(k_69, d_69, t);
  t = h_69;
  t = mark_buv_0_0(t);
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, i_69, j_69);
  g_33 = t;
  t = SSLsetAnnotations(g_33, f_69);
  return(t);
}
static ATerm z_7 (ATerm e_104 (ATerm), ATerm b_26, ATerm z_25, ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL;
  p_70 = t;
  t = e_104(t);
  m_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_70, b_26, z_25);
  t = t_8(m_70, b_26, z_25, t);
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_70 = NULL;
        t = term_t_33;
        u_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_70, term_t_33);
        t = s_8(m_70, u_70, t);
        {
          ATerm u_33 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_33;
            }
        }
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_70 = ATgetFirst((ATermList) t);
      o_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_70, term_t_33, (ATerm) ATinsert(CheckATermList(o_70), (ATerm) ATinsert(CheckATermList(n_70), b_26)));
  t = lookup_table_0_1(m_70, t);
  t_70 = t;
  t = term_t_33;
  q_70 = t;
  t = (ATerm) ATinsert(CheckATermList(o_70), (ATerm) ATinsert(CheckATermList(n_70), b_26));
  r_70 = t;
  t = t_70;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(q_70, r_70, s_70, t);
  t = p_70;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  v_70 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_70);
  w_70 = t;
  t = term_d_34;
  x_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_70), term_d_34);
  t = z_7(f_12, w_70, x_70, t);
  t = v_70;
  return(t);
}
static ATerm a_8 (ATerm k_27, ATerm l_27, ATerm t)
{
  ATerm y_70 = NULL,z_70 = NULL;
  z_70 = t;
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_27, l_27);
        t = s_8(k_27, l_27, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_34 = ATgetFirst((ATermList) t);
            y_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_34);
        {
          ATerm a_71 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, k_27, l_27, y_70);
          t = lookup_table_0_1(k_27, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              a_71 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_8(l_27, y_70, a_71, t);
          t = (ATerm) ATmakeAppl(sym__3, k_27, l_27, y_70);
        }
      }
    else
      {
        t = e_34;
        {
          ATerm c_71 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, k_27, l_27);
          t = lookup_table_0_1(k_27, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              c_71 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_8(l_27, c_71, t);
          t = (ATerm) ATmakeAppl(sym__2, k_27, l_27);
        }
      }
  }
  t = z_70;
  return(t);
}
ATerm end_scope_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL;
  h_71 = t;
  t = b_104(t);
  g_71 = t;
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_71 = NULL;
        t = term_t_33;
        l_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_71, term_t_33);
        t = s_8(g_71, l_71, t);
        {
          ATerm m_34 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_34;
            }
        }
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_71 = ATgetFirst((ATermList) t);
      e_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_71, term_t_33, e_71);
  t = lookup_table_0_1(g_71, t);
  k_71 = t;
  t = term_t_33;
  i_71 = t;
  t = k_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(i_71, e_71, j_71, t);
  t = f_71;
  {
    static ATerm j_12 (ATerm t);
    static ATerm j_12 (ATerm t)
    {
      ATerm m_71 = NULL;
      m_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_71, m_71);
      t = a_8(g_71, m_71, t);
      return(t);
    }
    t = map_1_0(j_12, t);
  }
  t = h_71;
  return(t);
}
ATerm restore_always_2_0 (ATerm t_123 (ATerm), ATerm u_123 (ATerm), ATerm t)
{
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_123(t);
      t = u_123(t);
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
      t = u_123(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL;
  p_71 = t;
  t = a_104(t);
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_71, term_t_33);
  {
    ATerm s_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_71 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_34 = ATgetArgument(t, 0);
            ATerm z_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_33;
        y_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_71, term_t_33);
        t = s_8(o_71, y_71, t);
        LocalPopChoice(x_34);
      }
    else
      {
        t = s_34;
        t = (ATerm) ATempty;
      }
  }
  q_71 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_71, term_t_33, (ATerm) ATinsert(CheckATermList(q_71), (ATerm) ATempty));
  t = lookup_table_0_1(o_71, t);
  u_71 = t;
  t = term_t_33;
  r_71 = t;
  t = (ATerm) ATinsert(CheckATermList(q_71), (ATerm) ATempty);
  s_71 = t;
  t = u_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(r_71, s_71, t_71, t);
  t = p_71;
  return(t);
}
ATerm scope_2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t)
{
  static ATerm k_12 (ATerm t);
  static ATerm k_12 (ATerm t)
  {
    t = end_scope_1_0(c_104, t);
    return(t);
  }
  t = begin_scope_1_0(c_104, t);
  t = restore_always_2_0(d_104, k_12, t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,j_33 = NULL;
  d_72 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_72 = ATgetArgument(t, 0);
      b_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_72);
  z_71 = t;
  t = b_72;
  {
    static ATerm m_12 (ATerm t);
    static ATerm m_12 (ATerm t)
    {
      ATerm e_72 = NULL;
      e_72 = t;
      t = a_72;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = e_72;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(l_12, m_12, t);
  }
  c_72 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, a_72, c_72);
  j_33 = t;
  t = SSLsetAnnotations(j_33, z_71);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm a_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL,l_33 = NULL;
      h_72 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_72 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_72);
      f_72 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_72);
      l_33 = t;
      t = SSLsetAnnotations(l_33, f_72);
      LocalPopChoice(d_35);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = a_35;
      {
        ATerm e_35 = t;
        int h_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_33 = NULL;
            l_72 = t;
            if(match_cons(t, sym_App_2))
              {
                j_72 = ATgetArgument(t, 0);
                k_72 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_72);
            i_72 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, j_72, k_72);
            m_33 = t;
            t = SSLsetAnnotations(m_33, i_72);
            LocalPopChoice(h_35);
            {
              ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,n_33 = NULL;
              r_72 = t;
              if(match_cons(t, sym_App_2))
                {
                  n_72 = ATgetArgument(t, 0);
                  o_72 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(r_72);
              m_72 = t;
              t = n_72;
              t = mark_buv_0_0(t);
              p_72 = t;
              t = o_72;
              t = mark_build_vars_0_0(t);
              q_72 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, p_72, q_72);
              n_33 = t;
              t = SSLsetAnnotations(n_33, m_72);
            }
          }
        else
          {
            t = e_35;
            {
              ATerm i_35 = t;
              int k_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,o_33 = NULL;
                  u_72 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      t_72 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_72);
                  s_72 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, t_72);
                  o_33 = t;
                  t = SSLsetAnnotations(o_33, s_72);
                  LocalPopChoice(k_35);
                  {
                    ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,p_33 = NULL;
                    y_72 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        w_72 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(y_72);
                    v_72 = t;
                    t = w_72;
                    t = mark_buv_0_0(t);
                    x_72 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, x_72);
                    p_33 = t;
                    t = SSLsetAnnotations(p_33, v_72);
                  }
                }
              else
                {
                  t = i_35;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_8 (ATerm s_27, ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL;
  a_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
  t = s_8(s_27, t_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_35 = ATgetFirst((ATermList) t);
      z_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_27, t_27, (ATerm) ATinsert(CheckATermList(z_72), u_27));
  t = lookup_table_0_1(s_27, t);
  d_73 = t;
  t = (ATerm) ATinsert(CheckATermList(z_72), u_27);
  b_73 = t;
  t = d_73;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(t_27, b_73, c_73, t);
  t = a_73;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL;
  e_73 = t;
  t = term_g_16;
  f_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_73);
  g_73 = t;
  t = term_q_35;
  h_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_16, (ATerm)ATmakeAppl(sym_Var_1, e_73), term_q_35);
  t = b_8(f_73, g_73, h_73, t);
  t = e_73;
  return(t);
}
static ATerm e_8 (ATerm q_27, ATerm r_27, ATerm t)
{
  ATerm i_73 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
  t = s_8(q_27, r_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_73 = ATgetFirst((ATermList) t);
      {
        ATerm r_35 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_73;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL;
  r_74 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,m_23 = NULL;
        t = term_g_16;
        m_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_16, r_74);
        t = e_8(m_23, r_74, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm u_35 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_35) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            d_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, s_74);
        e_23 = t;
        t = (ATerm) ATinsert(ATempty, d_23);
        f_23 = t;
        t = SSLsetAnnotations(e_23, f_23);
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,g_24 = NULL;
              t = term_g_16;
              g_24 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_16, r_74);
              t = e_8(g_24, r_74, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm x_35 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_35) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  v_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, s_74);
              w_23 = t;
              t = (ATerm) ATinsert(ATempty, v_23);
              x_23 = t;
              t = SSLsetAnnotations(w_23, x_23);
              LocalPopChoice(w_35);
            }
          else
            {
              t = v_35;
              {
                ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,t_24 = NULL;
                t = term_g_16;
                t_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_16, r_74);
                t = e_8(t_24, r_74, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm y_35 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) y_35) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    m_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, s_74);
                n_24 = t;
                t = (ATerm) ATinsert(ATempty, m_24);
                o_24 = t;
                t = SSLsetAnnotations(n_24, o_24);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,v_33 = NULL;
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
    }
  c_75 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_75);
  z_74 = t;
  t = a_75;
  t = DeclareBound_0_0(t);
  b_75 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_75);
  v_33 = t;
  t = SSLsetAnnotations(v_33, z_74);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,x_33 = NULL;
      m_75 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_75);
      k_75 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_75);
      x_33 = t;
      t = SSLsetAnnotations(x_33, k_75);
      LocalPopChoice(c_36);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = b_36;
      {
        ATerm d_36 = t;
        int e_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,y_33 = NULL;
            q_75 = t;
            if(match_cons(t, sym_App_2))
              {
                o_75 = ATgetArgument(t, 0);
                p_75 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_75);
            n_75 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, o_75, p_75);
            y_33 = t;
            t = SSLsetAnnotations(y_33, n_75);
            LocalPopChoice(e_36);
            {
              ATerm r_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,z_33 = NULL;
              x_75 = t;
              if(match_cons(t, sym_App_2))
                {
                  t_75 = ATgetArgument(t, 0);
                  u_75 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_75);
              r_75 = t;
              t = t_75;
              t = mark_buv_0_0(t);
              v_75 = t;
              t = u_75;
              t = mark_build_vars_0_0(t);
              w_75 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, v_75, w_75);
              z_33 = t;
              t = SSLsetAnnotations(z_33, r_75);
            }
          }
        else
          {
            t = d_36;
            {
              ATerm f_36 = t;
              int g_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL,a_34 = NULL;
                  a_76 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      z_75 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_76);
                  y_75 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, z_75);
                  a_34 = t;
                  t = SSLsetAnnotations(a_34, y_75);
                  LocalPopChoice(g_36);
                  {
                    ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,b_34 = NULL;
                    e_76 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        c_76 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(e_76);
                    b_76 = t;
                    t = c_76;
                    t = mark_buv_0_0(t);
                    d_76 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, d_76);
                    b_34 = t;
                    t = SSLsetAnnotations(b_34, b_76);
                  }
                }
              else
                {
                  t = f_36;
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
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_76 = NULL,a_77 = NULL;
      z_76 = t;
      if(match_cons(t, sym_Match_1))
        {
          a_77 = ATgetArgument(t, 0);
          {
            ATerm x_24 = NULL,z_24 = NULL,h_34 = NULL;
            t = SSLgetAnnotations(z_76);
            x_24 = t;
            t = a_77;
            t = mark_match_vars_0_0(t);
            z_24 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, z_24);
            h_34 = t;
            t = SSLsetAnnotations(h_34, x_24);
          }
        }
      else
        {
          ATerm k_25 = NULL,q_25 = NULL,i_34 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              a_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_76);
          k_25 = t;
          t = a_77;
          t = mark_build_vars_0_0(t);
          q_25 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, q_25);
          i_34 = t;
          t = SSLsetAnnotations(i_34, k_25);
        }
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      {
        ATerm j_36 = t;
        int k_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(k_36);
          }
        else
          {
            t = j_36;
            {
              ATerm l_36 = t;
              int m_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(m_36);
                }
              else
                {
                  t = l_36;
                  {
                    ATerm n_36 = t;
                    int o_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(o_36);
                      }
                    else
                      {
                        t = n_36;
                        {
                          ATerm p_36 = t;
                          int q_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL;
                              b_77 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  c_77 = ATgetArgument(t, 0);
                                  d_77 = ATgetArgument(t, 1);
                                  e_77 = ATgetArgument(t, 2);
                                  f_77 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = b_77;
                              t = k_7(c_77, d_77, e_77, f_77, t);
                              LocalPopChoice(q_36);
                            }
                          else
                            {
                              t = p_36;
                              {
                                ATerm r_36 = t;
                                int s_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
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
                                          ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL;
                                          n_77 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              o_77 = ATgetArgument(t, 0);
                                              t = o_77;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  k_77 = ATgetArgument(t, 0);
                                                  l_77 = ATgetArgument(t, 1);
                                                  m_77 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = n_77;
                                              t = j_7(k_77, l_77, m_77, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  o_77 = ATgetArgument(t, 0);
                                                  t = o_77;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      k_77 = ATgetArgument(t, 0);
                                                      l_77 = ATgetArgument(t, 1);
                                                      m_77 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = n_77;
                                                  t = i_7(k_77, l_77, m_77, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      o_77 = ATgetArgument(t, 0);
                                                      p_77 = ATgetArgument(t, 1);
                                                      q_77 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = n_77;
                                                  t = h_7(o_77, p_77, q_77, t);
                                                }
                                            }
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
                                                t = mark_call_0_0(t);
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
                                                      t = mark_prim_0_0(t);
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
                                                            ATerm a_78 = NULL;
                                                            a_78 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm b_37 = ATgetArgument(t, 0);
                                                                ATerm c_37 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = a_78;
                                                            t = g_7(t);
                                                            LocalPopChoice(a_37);
                                                          }
                                                        else
                                                          {
                                                            t = z_36;
                                                            {
                                                              ATerm d_37 = t;
                                                              int e_37 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
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
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
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
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(i_37);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_37;
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
ATerm map_1_0 (ATerm v_113 (ATerm), ATerm t)
{
  static ATerm z_78 (ATerm t);
  static ATerm z_78 (ATerm t)
  {
    ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL;
    w_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_78;
      }
    else
      {
        ATerm x_25 = NULL,c_26 = NULL,d_26 = NULL,l_34 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_78 = ATgetFirst((ATermList) t);
            y_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_78);
        x_25 = t;
        t = x_78;
        t = v_113(t);
        c_26 = t;
        t = y_78;
        t = z_78(t);
        d_26 = t;
        t = (ATerm) ATinsert(CheckATermList(d_26), c_26);
        l_34 = t;
        t = SSLsetAnnotations(l_34, x_25);
      }
    return(t);
  }
  t = z_78(t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL,l_79 = NULL;
  j_79 = t;
  t = term_t_15;
  k_79 = t;
  t = (ATerm) ATinsert(ATempty, term_j_37);
  l_79 = t;
  t = SSL_printnl(k_79, l_79);
  t = j_79;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm m_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL,n_34 = NULL;
  p_79 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_79);
  m_79 = t;
  t = n_79;
  t = map_1_0(mark_buv_0_0, t);
  o_79 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_79);
  n_34 = t;
  t = SSLsetAnnotations(n_34, m_79);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL;
  q_79 = t;
  t = term_t_15;
  r_79 = t;
  t = (ATerm) ATinsert(ATempty, term_m_37);
  s_79 = t;
  t = SSL_printnl(r_79, s_79);
  t = q_79;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL,p_34 = NULL,o_34 = NULL;
  t = if_verbose4_1_0(n_12, t);
  i_79 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_79);
  b_79 = t;
  t = c_79;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_79 = ATgetFirst((ATermList) t);
      f_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_79);
  d_79 = t;
  t = f_79;
  t = Cons_2_0(o_12, q_12, t);
  g_79 = t;
  t = (ATerm) ATinsert(CheckATermList(g_79), e_79);
  o_34 = t;
  t = SSLsetAnnotations(o_34, d_79);
  h_79 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_79);
  p_34 = t;
  t = SSLsetAnnotations(p_34, b_79);
  t = if_verbose4_1_0(r_12, t);
  return(t);
}
static ATerm g_8 (ATerm g_39, ATerm h_39, ATerm t)
{
  ATerm t_79 = NULL;
  t = SSL_fputc(g_39, h_39);
  t_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_79);
  return(t);
}
static ATerm h_8 (ATerm x_44, ATerm y_44, ATerm t)
{
  ATerm u_79 = NULL;
  t = SSL_write_term_to_stream_text(x_44, y_44);
  u_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_79);
  return(t);
}
static ATerm j_8 (ATerm r_112 (ATerm), ATerm c_390, ATerm d_45, ATerm t)
{
  ATerm v_79 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_390, term_n_37);
  t = n_8(t);
  v_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_79, d_45);
  t = r_112(t);
  t = fclose_0_0(t);
  t = d_45;
  return(t);
}
static ATerm i_8 (ATerm t_44, ATerm u_44, ATerm t)
{
  ATerm w_79 = NULL;
  t = SSL_write_term_to_stream_baf(t_44, u_44);
  w_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_79);
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
  ATerm c_27 = NULL,h_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_37 = ATgetArgument(t, 0);
      if(match_cons(o_37, sym_Stream_1))
        {
          c_27 = ATgetArgument(o_37, 0);
        }
      else
        _fail(t);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(c_27, h_27, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_37 = ATgetArgument(t, 0);
      if(match_cons(p_37, sym_Stream_1))
        {
          k_28 = ATgetArgument(p_37, 0);
        }
      else
        _fail(t);
      l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8(k_28, l_28, t);
  f_28 = t;
  t = term_q_37;
  g_28 = t;
  t = f_28;
  if(match_cons(t, sym_Stream_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, f_28);
  t = g_8(g_28, j_28, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL,i_80 = NULL,j_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL,t_81 = NULL,u_81 = NULL,u_34 = NULL,t_34 = NULL;
  d_80 = t;
  if(match_cons(t, sym__2))
    {
      p_80 = ATgetArgument(t, 0);
      q_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_80);
  j_80 = t;
  t = p_80;
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_12 (ATerm t);
        static ATerm s_12 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((b_80 != NULL) && (b_80 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_80 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(s_12, t);
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
        t = term_t_37;
        b_80 = t;
      }
  }
  r_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_80, q_80);
  t_34 = t;
  t = SSLsetAnnotations(t_34, j_80);
  t = d_80;
  if(match_cons(t, sym__2))
    {
      f_80 = ATgetArgument(t, 0);
      g_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_80);
  e_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_80, (ATerm) ATmakeAppl(sym__2, not_null(b_80), g_80));
  u_34 = t;
  t = SSLsetAnnotations(u_34, e_80);
  i_80 = t;
  if(match_cons(t, sym__2))
    {
      t_81 = ATgetArgument(t, 0);
      u_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,v_34 = NULL;
        t = SSLgetAnnotations(i_80);
        u_26 = t;
        t = t_81;
        t = fetch_1_0(v_12, t);
        y_26 = t;
        t = u_81;
        if(match_cons(t, sym__2))
          {
            a_27 = ATgetArgument(t, 0);
            b_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_8(w_12, a_27, b_27, t);
        z_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_26, z_26);
        v_34 = t;
        t = SSLsetAnnotations(v_34, u_26);
        LocalPopChoice(v_37);
      }
    else
      {
        t = u_37;
        {
          ATerm v_27 = NULL,b_28 = NULL,c_28 = NULL,e_28 = NULL,w_34 = NULL;
          t = SSLgetAnnotations(i_80);
          v_27 = t;
          t = u_81;
          if(match_cons(t, sym__2))
            {
              c_28 = ATgetArgument(t, 0);
              e_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_8(z_12, c_28, e_28, t);
          b_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_81, b_28);
          w_34 = t;
          t = SSLsetAnnotations(w_34, v_27);
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
ATerm apply_strategy_1_0 (ATerm x_129 (ATerm), ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL;
  b_82 = t;
  t = dtime_0_0(t);
  t = b_82;
  t = x_129(t);
  a_82 = t;
  t = dtime_0_0(t);
  x_81 = t;
  t = a_82;
  if(match_cons(t, sym__2))
    {
      y_81 = ATgetArgument(t, 0);
      z_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_81), (ATerm) ATmakeAppl(sym_Runtime_1, x_81)), z_81);
  return(t);
}
static ATerm p_82 (ATerm j_82, ATerm t)
{
  t = SSL_fclose(j_82);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL;
  n_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_82 = ATgetArgument(t, 0);
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_82);
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            t = p_82(n_82, t);
          }
      }
    }
  else
    {
      t = p_82(n_82, t);
    }
  return(t);
}
static ATerm k_8 (ATerm z_44, ATerm t)
{
  t = SSL_read_term_from_stream(z_44);
  return(t);
}
static ATerm l_8 (ATerm k_37, ATerm l_37, ATerm t)
{
  t = SSL_strcat(k_37, l_37);
  return(t);
}
static ATerm m_8 (ATerm i_39, ATerm j_39, ATerm t)
{
  ATerm q_82 = NULL;
  t = SSL_fopen(i_39, j_39);
  q_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_82);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_82 = NULL;
  t = SSL_stdin_stream();
  r_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_82 = NULL;
  t = SSL_stdout_stream();
  s_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_82 = NULL;
  t = SSL_stderr_stream();
  t_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_82);
  return(t);
}
static ATerm a_84 (ATerm z_82, ATerm t)
{
  ATerm a_83 = NULL;
  t = SSL_explode_term(z_82);
  if(match_cons(t, sym__2))
    {
      ATerm y_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_37 = ATgetArgument(t, 1);
        if(((ATgetType(z_37) == AT_LIST) && !(ATisEmpty(z_37))))
          {
            a_83 = ATgetFirst((ATermList) z_37);
            {
              ATerm a_38 = (ATerm) ATgetNext((ATermList) z_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_83;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_83;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_83;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_83;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_84 (ATerm d_83, ATerm e_83, ATerm f_83, ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL,l_83 = NULL,b_35 = NULL;
  t = SSLgetAnnotations(f_83);
  i_83 = t;
  t = d_83;
  if(match_cons(t, sym_Path_1))
    {
      l_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_83, e_83);
  b_35 = t;
  t = SSLsetAnnotations(b_35, i_83);
  if(match_cons(t, sym__2))
    {
      g_83 = ATgetArgument(t, 0);
      h_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(g_83, h_83, t);
  return(t);
}
static ATerm c_84 (ATerm n_83, ATerm o_83, ATerm p_83, ATerm t)
{
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL,v_83 = NULL,c_35 = NULL;
  t = SSLgetAnnotations(p_83);
  s_83 = t;
  t = SSL_is_string(n_83);
  v_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_83, o_83);
  c_35 = t;
  t = SSLsetAnnotations(c_35, s_83);
  if(match_cons(t, sym__2))
    {
      q_83 = ATgetArgument(t, 0);
      r_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(q_83, r_83, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL;
  x_83 = t;
  if(match_cons(t, sym__2))
    {
      y_83 = ATgetArgument(t, 0);
      z_83 = ATgetArgument(t, 1);
      {
        ATerm b_38 = t;
        int c_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_84(x_83, t);
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
                  t = b_84(y_83, z_83, x_83, t);
                  LocalPopChoice(e_38);
                }
              else
                {
                  t = d_38;
                  t = c_84(y_83, z_83, x_83, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_84(x_83, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL,g_84 = NULL,l_84 = NULL;
  l_84 = t;
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_84, term_h_38);
        t = n_8(t);
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
        {
          ATerm l_29 = NULL,m_29 = NULL;
          t = term_i_38;
          m_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_38, l_84);
          t = l_8(m_29, l_84, t);
          l_29 = t;
          t = SSL_perror(l_29);
          _fail(t);
        }
      }
  }
  f_84 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(g_84, t);
  e_84 = t;
  t = f_84;
  t = fclose_0_0(t);
  t = e_84;
  return(t);
}
ATerm fetch_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  static ATerm k_85 (ATerm t);
  static ATerm k_85 (ATerm t)
  {
    ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL;
    h_85 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_85 = ATgetFirst((ATermList) t);
        j_85 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_38 = t;
      int k_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_29 = NULL,u_29 = NULL,f_35 = NULL;
          t = SSLgetAnnotations(h_85);
          r_29 = t;
          t = i_85;
          t = f_114(t);
          u_29 = t;
          t = (ATerm) ATinsert(CheckATermList(j_85), u_29);
          f_35 = t;
          t = SSLsetAnnotations(f_35, r_29);
          LocalPopChoice(k_38);
        }
      else
        {
          t = j_38;
          {
            ATerm c_30 = NULL,f_30 = NULL,g_35 = NULL;
            t = SSLgetAnnotations(h_85);
            c_30 = t;
            t = j_85;
            t = k_85(t);
            f_30 = t;
            t = (ATerm) ATinsert(CheckATermList(f_30), i_85);
            g_35 = t;
            t = SSLsetAnnotations(g_35, c_30);
          }
        }
    }
    return(t);
  }
  t = k_85(t);
  return(t);
}
static ATerm s_8 (ATerm y_28, ATerm z_28, ATerm t)
{
  ATerm n_85 = NULL;
  t = lookup_table_0_1(y_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_8(z_28, n_85, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_138 (ATerm), ATerm t)
{
  ATerm q_85 = NULL;
  q_85 = t;
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL;
        t = term_b_16;
        t_85 = t;
        t = term_c_16;
        u_85 = t;
        t = term_d_16;
        t = s_8(t_85, u_85, t);
        s_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_85, term_n_38);
        t = geq_0_0(t);
        t = q_85;
        t = s_138(t);
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        t = q_85;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
  x_85 = t;
  {
    ATerm o_38 = t;
    int p_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_85;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_38 = ATgetFirst((ATermList) t);
                ATerm r_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_85;
          }
        LocalPopChoice(p_38);
      }
    else
      {
        t = o_38;
        t = (ATerm) ATinsert(ATempty, x_85);
      }
  }
  y_85 = t;
  t = term_t_37;
  z_85 = t;
  t = SSL_printnl(z_85, y_85);
  t = x_85;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL;
  t = term_b_16;
  d_86 = t;
  t = term_s_38;
  e_86 = t;
  t = term_t_38;
  t = s_8(d_86, e_86, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm g_86 = NULL;
  g_86 = t;
  if(match_string(t, "-k"))
    {
      t = g_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_86;
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL;
  h_86 = t;
  t = SSL_string_to_int(h_86);
  i_86 = t;
  t = term_u_38;
  j_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_38, i_86);
  t = v_8(j_86, i_86, t);
  t = h_86;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_v_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_13, b_13, c_13, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm l_86 = NULL;
  l_86 = t;
  if(match_string(t, "-S"))
    {
      t = l_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_86;
    }
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm m_86 = NULL,n_86 = NULL;
  t = term_c_16;
  m_86 = t;
  t = term_w_38;
  n_86 = t;
  t = term_x_38;
  t = v_8(m_86, n_86, t);
  t = term_y_38;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_z_38;
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
  ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL;
  o_86 = t;
  t = SSL_string_to_int(o_86);
  p_86 = t;
  t = term_c_16;
  q_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_16, p_86);
  t = v_8(q_86, p_86, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_86);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_a_39;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm r_86 = NULL,s_86 = NULL;
  t = term_b_39;
  r_86 = t;
  t = term_s_15;
  s_86 = t;
  t = term_c_39;
  t = v_8(r_86, s_86, t);
  t = term_d_39;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_e_39;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_13, f_13, g_13, t);
      LocalPopChoice(k_39);
    }
  else
    {
      t = f_39;
      {
        ATerm l_39 = t;
        int m_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_13, i_13, j_13, t);
            LocalPopChoice(m_39);
          }
        else
          {
            t = l_39;
            t = Option_3_0(k_13, l_13, m_13, t);
          }
      }
    }
  return(t);
}
static ATerm v_8 (ATerm u_74, ATerm v_74, ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL;
  t = term_b_16;
  t_86 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_16, u_74, v_74);
  t = lookup_table_0_1(t_86, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(u_74, v_74, u_86, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_16, u_74, v_74);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL;
      t = term_s_15;
      t = g_0(t);
      a_87 = t;
      t = term_n_39;
      b_87 = t;
      t = term_o_39;
      c_87 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_39, term_o_39, a_87);
      t = t_8(b_87, c_87, a_87, t);
      _fail(t);
    }
  else
    {
      ATerm f_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_86 = ATgetFirst((ATermList) t);
          z_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_86;
      t = d_0(t);
      t = term_s_15;
      t = f_0(t);
      f_87 = t;
      t = (ATerm) ATinsert(CheckATermList(z_86), f_87);
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm h_87 = NULL;
  h_87 = t;
  if(match_string(t, "-o"))
    {
      t = h_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_87;
    }
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL;
  i_87 = t;
  t = term_p_39;
  j_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_39, i_87);
  t = v_8(j_87, i_87, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_87);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_q_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_13, p_13, s_13, t);
  return(t);
}
static ATerm t_8 (ATerm f_27, ATerm g_27, ATerm e_27, ATerm t)
{
  ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL;
  l_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_27, g_27);
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_39 = ATgetArgument(t, 0);
            ATerm u_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_27, g_27);
        t = s_8(f_27, g_27, t);
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        t = (ATerm) ATempty;
      }
  }
  m_87 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_27, g_27, (ATerm) ATinsert(CheckATermList(m_87), e_27));
  t = lookup_table_0_1(f_27, t);
  p_87 = t;
  t = (ATerm) ATinsert(CheckATermList(m_87), e_27);
  n_87 = t;
  t = p_87;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(g_27, n_87, o_87, t);
  t = l_87;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL;
      t = term_s_15;
      t = o_0(t);
      a_88 = t;
      t = term_n_39;
      b_88 = t;
      t = term_o_39;
      c_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_39, term_o_39, a_88);
      t = t_8(b_88, c_88, a_88, t);
      _fail(t);
    }
  else
    {
      ATerm g_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_87 = ATgetFirst((ATermList) t);
          x_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_87;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_87 = ATgetFirst((ATermList) t);
          z_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_87;
      t = j_0(t);
      t = y_87;
      t = l_0(t);
      g_88 = t;
      t = (ATerm) ATinsert(CheckATermList(z_87), g_88);
    }
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm i_88 = NULL;
  i_88 = t;
  if(match_string(t, "-i"))
    {
      t = i_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_88;
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL;
  j_88 = t;
  t = term_v_39;
  k_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_39, j_88);
  t = v_8(k_88, j_88, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_88);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = term_w_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_13, u_13, v_13, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_15;
  t = whoami_0_0(t);
  l_88 = t;
  t = term_t_15;
  n_88 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_39), l_88);
  o_88 = t;
  t = SSL_printnl(n_88, o_88);
  t = term_x_15;
  m_88 = t;
  t = SSL_exit(m_88);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_88 = NULL,q_88 = NULL;
  t = term_b_16;
  p_88 = t;
  t = term_s_38;
  q_88 = t;
  t = term_t_38;
  t = s_8(p_88, q_88, t);
  return(t);
}
static ATerm o_8 (ATerm d_46, ATerm e_46, ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_46, e_46);
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      t = SSL_addr(d_46, e_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL;
  s_88 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_88;
      t = j_121(t);
    }
  else
    {
      ATerm x_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_88 = ATgetFirst((ATermList) t);
          u_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_88;
      t = foldr_2_0(j_121, k_121, t);
      x_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_88, x_88);
      t = k_121(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_w_38;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL;
  if(match_cons(t, sym__2))
    {
      a_31 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(a_31, b_31, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_89 = NULL,s_30 = NULL,x_30 = NULL;
  t = times_0_0(t);
  x_30 = t;
  t = SSL_explode_term(x_30);
  if(match_cons(t, sym__2))
    {
      ATerm a_40 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_30;
  t = foldr_2_0(w_13, x_13, t);
  a_89 = t;
  t = SSL_TicksToSeconds(a_89);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
  l_89 = t;
  if(match_cons(t, sym__2))
    {
      m_89 = ATgetArgument(t, 0);
      n_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_89;
        if((m_89 != t))
          {
            _fail(t);
          }
        t = l_89;
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        t = (ATerm) ATmakeAppl(sym__2, m_89, n_89);
        {
          ATerm d_40 = t;
          int e_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_89, n_89);
              LocalPopChoice(e_40);
            }
          else
            {
              t = d_40;
              t = SSL_gtr(m_89, n_89);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_89, n_89);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_138 (ATerm), ATerm t)
{
  ATerm r_89 = NULL;
  r_89 = t;
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL;
        t = term_b_16;
        u_89 = t;
        t = term_c_16;
        v_89 = t;
        t = term_d_16;
        t = s_8(u_89, v_89, t);
        t_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_89, term_x_15);
        t = geq_0_0(t);
        t = r_89;
        t = r_138(t);
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = r_89;
      }
  }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm x_89 = NULL,y_89 = NULL,a_90 = NULL,b_90 = NULL;
  t = run_time_0_0(t);
  x_89 = t;
  t = term_s_15;
  t = whoami_0_0(t);
  y_89 = t;
  t = term_t_15;
  a_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_40), x_89), term_h_40), y_89);
  b_90 = t;
  t = SSL_printnl(a_90, b_90);
  t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_40), x_89), term_h_40), y_89));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_90 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_38;
  c_90 = t;
  t = SSL_exit(c_90);
  return(t);
}
static ATerm w_8 (ATerm x_31, ATerm y_31, ATerm z_31, ATerm t)
{
  ATerm d_90 = NULL;
  t = SSL_hashtable_put(z_31, x_31, y_31);
  d_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_90);
  return(t);
}
static ATerm x_8 (ATerm a_32, ATerm b_32, ATerm t)
{
  t = SSL_hashtable_get(b_32, a_32);
  return(t);
}
ATerm lookup_table_0_1 (ATerm r_28, ATerm t)
{
  ATerm m_90 = NULL;
  t = table_hashtable_0_0(t);
  m_90 = t;
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_31 = NULL;
        t = m_90;
        if(match_cons(t, sym_Hashtable_1))
          {
            p_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_8(r_28, p_31, t);
        LocalPopChoice(k_40);
      }
    else
      {
        t = j_40;
        {
          ATerm u_31 = NULL;
          t = r_28;
          t = table_create_0_0(t);
          t = m_90;
          if(match_cons(t, sym_Hashtable_1))
            {
              u_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_8(r_28, u_31, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm f_32, ATerm g_32, ATerm t)
{
  ATerm p_90 = NULL;
  t = SSL_hashtable_create(f_32, g_32);
  p_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_90);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL,u_90 = NULL,v_90 = NULL;
  q_90 = t;
  t = term_l_40;
  u_90 = t;
  t = term_m_40;
  v_90 = t;
  t = q_90;
  t = new_hashtable_0_2(u_90, v_90, t);
  r_90 = t;
  t = q_90;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(q_90, r_90, s_90, t);
  t = q_90;
  return(t);
}
static ATerm q_8 (ATerm c_32, ATerm d_32, ATerm t)
{
  ATerm w_90 = NULL;
  t = SSL_hashtable_remove(d_32, c_32);
  w_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_90);
  return(t);
}
static ATerm r_8 (ATerm h_32, ATerm t)
{
  ATerm x_90 = NULL;
  t = SSL_hashtable_destroy(h_32);
  x_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_90);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm y_90 = NULL;
  t = SSL_table_hashtable();
  y_90 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_90);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
  b_91 = t;
  t = table_hashtable_0_0(t);
  c_91 = t;
  t = lookup_table_0_1(b_91, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_8(e_91, t);
  t = c_91;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(b_91, d_91, t);
  t = b_91;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm f_91 = NULL,g_91 = NULL;
  t = term_n_40;
  f_91 = t;
  t = term_s_15;
  g_91 = t;
  t = term_o_40;
  t = v_8(f_91, g_91, t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_p_40;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm h_91 = NULL,i_91 = NULL,j_91 = NULL,k_91 = NULL;
  t = term_n_40;
  j_91 = t;
  t = term_s_15;
  k_91 = t;
  t = term_o_40;
  t = v_8(j_91, k_91, t);
  t = term_q_40;
  h_91 = t;
  t = term_s_15;
  i_91 = t;
  t = term_r_40;
  t = v_8(h_91, i_91, t);
  t = term_s_40;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_t_40;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_40 = t;
  int v_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_14, h_14, i_14, t);
      LocalPopChoice(v_40);
    }
  else
    {
      t = u_40;
      t = Option_3_0(l_14, m_14, n_14, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm t)
{
  ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL,q_91 = NULL,j_35 = NULL;
  q_91 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_91 = ATgetFirst((ATermList) t);
      n_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_91);
  l_91 = t;
  t = m_91;
  t = z_90(t);
  o_91 = t;
  t = n_91;
  t = a_91(t);
  p_91 = t;
  t = (ATerm) ATinsert(CheckATermList(p_91), o_91);
  j_35 = t;
  t = SSLsetAnnotations(j_35, l_91);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_134 (ATerm), ATerm t)
{
  ATerm v_91 = NULL,w_91 = NULL,x_91 = NULL,y_91 = NULL,a_92 = NULL,b_92 = NULL,l_35 = NULL;
  v_91 = t;
  {
    ATerm w_40 = t;
    int x_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_40;
        t = f_134(t);
        LocalPopChoice(x_40);
      }
    else
      {
        t = w_40;
      }
  }
  t = v_91;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_91 = ATgetFirst((ATermList) t);
      y_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_91);
  w_91 = t;
  t = term_s_38;
  b_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_38, x_91);
  t = v_8(b_92, x_91, t);
  t = y_91;
  {
    static ATerm l_92 (ATerm t);
    static ATerm l_92 (ATerm t)
    {
      ATerm z_40 = t;
      int a_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_41 = t;
          int c_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_92 = NULL;
              e_92 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_92;
              LocalPopChoice(c_41);
            }
          else
            {
              t = b_41;
              t = f_134(t);
              t = Cons_2_0(_id, l_92, t);
            }
          LocalPopChoice(a_41);
        }
      else
        {
          t = z_40;
          {
            ATerm h_92 = NULL,i_92 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_92 = ATgetFirst((ATermList) t);
                i_92 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_92), (ATerm) ATmakeAppl(sym_Undefined_1, h_92));
          }
        }
      return(t);
    }
    t = l_92(t);
  }
  a_92 = t;
  t = (ATerm) ATinsert(CheckATermList(a_92), (ATerm) ATmakeAppl(sym_Program_1, x_91));
  l_35 = t;
  t = SSLsetAnnotations(l_35, w_91);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm y_92 = NULL;
  y_92 = t;
  if(match_string(t, "--help"))
    {
      t = y_92;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_92;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_92;
        }
    }
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL;
  t = term_d_41;
  z_92 = t;
  t = term_s_15;
  a_93 = t;
  t = term_e_41;
  t = v_8(z_92, a_93, t);
  t = term_f_41;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_g_41;
  return(t);
}
static ATerm w_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL,x_92 = NULL;
  s_92 = t;
  t = term_n_39;
  t_92 = t;
  t = term_h_41;
  t = lookup_table_0_1(t_92, t);
  x_92 = t;
  t = term_o_39;
  u_92 = t;
  t = (ATerm) ATempty;
  v_92 = t;
  t = x_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(u_92, v_92, w_92, t);
  t = s_92;
  {
    static ATerm o_14 (ATerm t);
    static ATerm o_14 (ATerm t)
    {
      ATerm i_41 = t;
      int j_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_134(t);
          LocalPopChoice(j_41);
        }
      else
        {
          t = i_41;
          {
            ATerm k_41 = t;
            int l_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_14, s_14, t_14, t);
                LocalPopChoice(l_41);
              }
            else
              {
                t = k_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_14, t);
  }
  {
    ATerm m_41 = t;
    int n_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_93 = NULL;
        l_93 = t;
        {
          ATerm o_41 = t;
          int p_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_32 = NULL;
              t = l_93;
              {
                ATerm q_41 = t;
                int r_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_32 = NULL,l_32 = NULL;
                    t = term_b_16;
                    k_32 = t;
                    t = term_d_41;
                    l_32 = t;
                    t = term_s_41;
                    t = s_8(k_32, l_32, t);
                    LocalPopChoice(r_41);
                  }
                else
                  {
                    t = q_41;
                    t = fetch_1_0(w_14, t);
                  }
              }
              t = l_93;
              t = d_134(t);
              t = term_w_38;
              j_32 = t;
              t = SSL_exit(j_32);
              LocalPopChoice(p_41);
            }
          else
            {
              t = o_41;
              {
                ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
                t = term_b_16;
                q_32 = t;
                t = term_n_40;
                r_32 = t;
                t = term_t_41;
                t = s_8(q_32, r_32, t);
                t = l_93;
                t = e_134(t);
                t = term_w_38;
                p_32 = t;
                t = SSL_exit(p_32);
              }
            }
        }
        LocalPopChoice(n_41);
      }
    else
      {
        t = m_41;
        {
          ATerm u_41 = t;
          int v_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL;
              static ATerm y_14 (ATerm t);
              static ATerm y_14 (ATerm t)
              {
                ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL,n_35 = NULL;
                r_93 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_93 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_93);
                p_93 = t;
                t = q_93;
                if(((q_92 != NULL) && (q_92 != t)))
                  _fail(t);
                else
                  q_92 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_93);
                n_35 = t;
                t = SSLsetAnnotations(n_35, p_93);
                return(t);
              }
              t = fetch_1_0(y_14, t);
              t = term_t_15;
              n_93 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_92)), term_w_41);
              o_93 = t;
              t = SSL_printnl(n_93, o_93);
              t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_92)), term_w_41));
              t = d_134(t);
              t = term_x_15;
              m_93 = t;
              t = SSL_exit(m_93);
              LocalPopChoice(v_41);
            }
          else
            {
              t = u_41;
            }
        }
      }
  }
  r_92 = t;
  t = term_n_39;
  t = table_destroy_0_0(t);
  t = r_92;
  return(t);
}
ATerm option_wrap_5_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL;
  t = parse_options_3_0(d_131, e_131, f_131, t);
  w_93 = t;
  t = term_x_41;
  t = table_create_0_0(t);
  t = term_x_41;
  x_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_41, term_y_41, w_93);
  t = lookup_table_0_1(x_93, t);
  a_94 = t;
  t = term_y_41;
  y_93 = t;
  t = a_94;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(y_93, w_93, z_93, t);
  t = w_93;
  t = g_131(t);
  {
    ATerm z_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_131(t);
        t = report_success_0_0(t);
        LocalPopChoice(a_42);
      }
    else
      {
        t = z_41;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = if_verbose2_1_0(m_15, t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL;
  t = term_b_42;
  b_94 = t;
  t = term_s_15;
  c_94 = t;
  t = term_c_42;
  t = v_8(b_94, c_94, t);
  t = term_d_42;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = term_e_42;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL;
  d_94 = t;
  t = term_b_16;
  h_94 = t;
  t = term_s_38;
  i_94 = t;
  t = term_t_38;
  t = s_8(h_94, i_94, t);
  e_94 = t;
  t = term_t_15;
  f_94 = t;
  t = (ATerm) ATinsert(ATempty, e_94);
  g_94 = t;
  t = SSL_printnl(f_94, g_94);
  t = d_94;
  return(t);
}
ATerm iowrap_3_0 (ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm i_130 (ATerm), ATerm t)
{
  static ATerm z_14 (ATerm t);
  static ATerm c_15 (ATerm t);
  static ATerm z_14 (ATerm t)
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_130(t);
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
        {
          ATerm h_42 = t;
          int i_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(i_42);
            }
          else
            {
              t = h_42;
              {
                ATerm j_42 = t;
                int k_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(k_42);
                  }
                else
                  {
                    t = j_42;
                    {
                      ATerm l_42 = t;
                      int m_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(e_15, g_15, i_15, t);
                          LocalPopChoice(m_42);
                        }
                      else
                        {
                          t = l_42;
                          {
                            ATerm n_42 = t;
                            int r_42 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(r_42);
                              }
                            else
                              {
                                t = n_42;
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
  static ATerm c_15 (ATerm t)
  {
    ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL;
    k_94 = t;
    {
      ATerm s_42 = t;
      int v_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm q_15 (ATerm t);
          static ATerm q_15 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_94 != NULL) && (j_94 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_94 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_15, t);
          LocalPopChoice(v_42);
        }
      else
        {
          t = s_42;
          t = term_w_42;
          j_94 = t;
        }
    }
    t = not_null(j_94);
    t = ReadFromFile_0_0(t);
    l_94 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_94, l_94);
    t = apply_strategy_1_0(g_130, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(z_14, i_130, default_system_about_0_0, a_15, c_15, t);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,p_35 = NULL;
  q_94 = t;
  if(match_cons(t, sym__2))
    {
      n_94 = ATgetArgument(t, 0);
      o_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_94);
  m_94 = t;
  t = o_94;
  t = mark_bound_unbound_vars_0_0(t);
  p_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_94, p_94);
  p_35 = t;
  t = SSLsetAnnotations(p_35, m_94);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_15, _fail, default_usage_0_0, t);
  return(t);
}
