#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_Overlay_3;
static Symbol sym_RootApp_1;
static Symbol sym_App_2;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_ExtendOverrideDynamicRules_1;
static Symbol sym_ExtendDynamicRules_1;
static Symbol sym_OverrideDynamicRules_1;
static Symbol sym_GenDynRules_1;
static Symbol sym_Choice_2;
static Symbol sym_SRule_1;
static Symbol sym_LRule_1;
static Symbol sym_Thread_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Rec_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LChoice_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Call_2;
static Symbol sym_Let_2;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_SDefT_4;
static Symbol sym_Rule_3;
static Symbol sym_RDefT_4;
static Symbol sym_RDef_3;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Some_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_DynamicRules_1;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
static ATerm term_j_42;
static ATerm term_i_42;
static ATerm term_h_42;
static ATerm term_w_41;
static ATerm term_v_41;
static ATerm term_u_41;
static ATerm term_r_41;
static ATerm term_q_41;
static ATerm term_f_41;
static ATerm term_e_41;
static ATerm term_d_41;
static ATerm term_c_41;
static ATerm term_b_41;
static ATerm term_w_40;
static ATerm term_r_40;
static ATerm term_q_40;
static ATerm term_p_40;
static ATerm term_o_40;
static ATerm term_n_40;
static ATerm term_m_40;
static ATerm term_l_40;
static ATerm term_e_40;
static ATerm term_d_40;
static ATerm term_a_40;
static ATerm term_z_39;
static ATerm term_p_39;
static ATerm term_o_39;
static ATerm term_n_39;
static ATerm term_i_39;
static ATerm term_d_39;
static ATerm term_c_39;
static ATerm term_b_39;
static ATerm term_a_39;
static ATerm term_z_38;
static ATerm term_y_38;
static ATerm term_x_38;
static ATerm term_w_38;
static ATerm term_v_38;
static ATerm term_u_38;
static ATerm term_t_38;
static ATerm term_k_38;
static ATerm term_j_38;
static ATerm term_i_38;
static ATerm term_h_38;
static ATerm term_g_38;
static ATerm term_b_38;
static ATerm term_a_38;
static ATerm term_v_37;
static ATerm term_u_37;
static ATerm term_t_37;
static ATerm term_s_37;
static ATerm term_r_37;
static ATerm term_o_37;
static ATerm term_n_37;
static ATerm term_x_36;
static ATerm term_w_36;
static ATerm term_t_36;
static ATerm term_s_36;
static ATerm term_r_36;
static ATerm term_o_36;
static ATerm term_l_36;
static ATerm term_k_36;
static ATerm term_j_36;
static ATerm term_i_36;
static ATerm term_p_34;
static ATerm term_o_34;
static ATerm term_k_33;
static ATerm term_j_33;
static ATerm term_f_33;
static ATerm term_q_32;
static ATerm term_f_19;
static ATerm term_w_18;
static ATerm term_q_18;
static ATerm term_p_18;
static ATerm term_o_18;
static ATerm term_x_15;
static ATerm term_w_15;
static ATerm term_v_15;
static ATerm term_s_15;
static ATerm term_r_15;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_s_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Defined_2, term_o_18, term_p_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_Scopes_0);
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
  term_s_36 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_r_36);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_w_36);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_r_37);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_u_37);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_h_38, term_i_38);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym__2, term_s_15, term_v_38);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_38);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_a_38);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym__2, term_l_40, term_a_38);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym__2, term_o_40, term_a_38);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(sym__2, term_b_41, term_a_38);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym__3, term_h_38, term_i_38, (ATerm) ATempty);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_b_41);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym__2, term_r_15, term_l_40);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym__2, term_w_36, term_a_38);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm if_verbose4_1_0 (ATerm y_154 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm s_115 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm r_115 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm q_115 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm t_118 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm l_7 (ATerm l_26, ATerm m_26, ATerm n_26, ATerm t);
static ATerm j_3 (ATerm t);
static ATerm m_7 (ATerm f_26, ATerm j_26, ATerm h_26, ATerm t);
static ATerm p_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm n_7 (ATerm z_25, ATerm d_26, ATerm b_26, ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm o_7 (ATerm x_24, ATerm y_24, ATerm z_24, ATerm b_25, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm p_7 (ATerm i_23, ATerm j_23, ATerm h_23, ATerm t);
static ATerm l_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm q_7 (ATerm g_29, ATerm f_29, ATerm t);
static ATerm r_7 (ATerm z_32, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm v_23, ATerm t);
ATerm tboundin_3_0 (ATerm v_155 (ATerm), ATerm w_155 (ATerm), ATerm x_155 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm e_156 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm u_7 (ATerm w_130 (ATerm), ATerm d_55, ATerm c_55, ATerm t);
ATerm foldr_3_0 (ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm t);
static ATerm v_7 (ATerm z_130 (ATerm), ATerm a_131 (ATerm), ATerm h_55, ATerm g_55, ATerm t);
static ATerm w_7 (ATerm r_130 (ATerm), ATerm b_55, ATerm a_55, ATerm t);
ATerm at_end_1_0 (ATerm c_127 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_64 (ATerm a_64, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm b_8 (ATerm x_869, ATerm c_870, ATerm m_86, ATerm t);
ATerm while_not_2_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm l_67 (ATerm f_66, ATerm g_66, ATerm h_66, ATerm t);
static ATerm e_11 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
ATerm free_vars_3_0 (ATerm t_151 (ATerm), ATerm u_151 (ATerm), ATerm v_151 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm d_8 (ATerm b_116 (ATerm), ATerm z_26, ATerm x_26, ATerm t);
static ATerm e_12 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm e_8 (ATerm i_28, ATerm j_28, ATerm t);
ATerm end_scope_1_0 (ATerm y_115 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm x_115 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm f_8 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm i_8 (ATerm o_28, ATerm p_28, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm j_8 (ATerm f_40, ATerm g_40, ATerm t);
static ATerm k_8 (ATerm b_46, ATerm c_46, ATerm t);
static ATerm m_8 (ATerm j_125 (ATerm), ATerm r_414, ATerm h_46, ATerm t);
static ATerm l_8 (ATerm x_45, ATerm y_45, ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
ATerm output_1_0 (ATerm f_146 (ATerm), ATerm t);
static ATerm q_78 (ATerm k_78, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_8 (ATerm d_46, ATerm t);
static ATerm o_8 (ATerm l_38, ATerm m_38, ATerm t);
static ATerm p_8 (ATerm h_40, ATerm i_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_80 (ATerm a_79, ATerm t);
static ATerm c_80 (ATerm e_79, ATerm f_79, ATerm g_79, ATerm t);
static ATerm d_80 (ATerm o_79, ATerm p_79, ATerm q_79, ATerm t);
static ATerm q_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm g_146 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm n_126 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
ATerm default_system_usage_2_0 (ATerm g_149 (ATerm), ATerm h_149 (ATerm), ATerm t);
static ATerm w_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_8 (ATerm m_82, ATerm n_82, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_8 (ATerm d_28, ATerm e_28, ATerm c_28, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm z_13 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_8 (ATerm k_47, ATerm l_47, ATerm t);
ATerm foldr_2_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm i_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_154 (ATerm), ATerm t);
static ATerm k_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_9 (ATerm s_32, ATerm t_32, ATerm u_32, ATerm t);
ATerm lookup_table_0_1 (ATerm p_29, ATerm t);
ATerm new_hashtable_0_2 (ATerm a_33, ATerm b_33, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_8 (ATerm x_32, ATerm y_32, ATerm t);
static ATerm u_8 (ATerm c_33, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_126 (ATerm), ATerm t);
static ATerm b_9 (ATerm v_32, ATerm w_32, ATerm t);
static ATerm w_8 (ATerm w_29, ATerm x_29, ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_149 (ATerm), ATerm t);
static ATerm v_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
ATerm parse_options_3_0 (ATerm y_148 (ATerm), ATerm z_148 (ATerm), ATerm a_149 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm z_145 (ATerm), ATerm a_146 (ATerm), ATerm b_146 (ATerm), ATerm c_146 (ATerm), ATerm d_146 (ATerm), ATerm t);
static ATerm b_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm j_15 (ATerm t);
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
ATerm if_verbose4_1_0 (ATerm y_154 (ATerm), ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  {
    ATerm o_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL;
        t = term_r_15;
        v_0 = t;
        t = term_s_15;
        w_0 = t;
        t = term_v_15;
        t = w_8(v_0, w_0, t);
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_0, term_w_15);
        t = geq_0_0(t);
        t = c_0;
        t = y_154(t);
        LocalPopChoice(q_15);
      }
    else
      {
        t = o_15;
        t = c_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm s_115 (ATerm), ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL,c_1 = NULL,f_6 = NULL;
  static ATerm a_0 (ATerm t);
  static ATerm i_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,m_6 = NULL,k_6 = NULL;
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
    t = s_115(t);
    q_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, q_1, l_1, m_1);
    k_6 = t;
    t = SSLsetAnnotations(k_6, j_1);
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
    t = s_115(t);
    h_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_1, h_1, g_1);
    m_6 = t;
    t = SSLsetAnnotations(m_6, d_1);
    return(t);
  }
  static ATerm i_0 (ATerm t)
  {
    ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,n_6 = NULL;
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
    t = s_115(t);
    y_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, v_1, w_1, y_1);
    n_6 = t;
    t = SSLsetAnnotations(n_6, u_1);
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
  f_6 = t;
  t = SSLsetAnnotations(f_6, y_0);
  t = abstract_choice_2_0(a_0, i_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm r_115 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,v_6 = NULL;
  static ATerm k_0 (ATerm t);
  static ATerm m_0 (ATerm t);
  static ATerm k_0 (ATerm t)
  {
    ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,w_6 = NULL;
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
    t = r_115(t);
    h_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, h_2, g_2);
    w_6 = t;
    t = SSLsetAnnotations(w_6, e_2);
    return(t);
  }
  static ATerm m_0 (ATerm t)
  {
    ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,b_7 = NULL;
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
    t = r_115(t);
    m_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, k_2, m_2);
    b_7 = t;
    t = SSLsetAnnotations(b_7, j_2);
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
  v_6 = t;
  t = SSLsetAnnotations(v_6, a_2);
  t = abstract_choice_2_0(k_0, m_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm t_115 (ATerm), ATerm u_115 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,v_2 = NULL;
  t_2 = t;
  t = save_MarkVar_0_0(t);
  p_2 = t;
  t = t_2;
  t = t_115(t);
  s_2 = t;
  t = save_MarkVar_0_0(t);
  q_2 = t;
  t = term_x_15;
  t = table_destroy_0_0(t);
  t = term_x_15;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_15, p_2);
  t = q_7(v_2, p_2, t);
  t = s_2;
  t = u_115(t);
  r_2 = t;
  t = q_2;
  t = isect_MarkVar_0_0(t);
  t = r_2;
  return(t);
}
ATerm mark_choice_1_0 (ATerm q_115 (ATerm), ATerm t)
{
  ATerm x_2 = NULL,a_3 = NULL,d_3 = NULL,f_3 = NULL,y_7 = NULL;
  static ATerm o_0 (ATerm t);
  static ATerm x_0 (ATerm t);
  static ATerm o_0 (ATerm t)
  {
    ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL,z_7 = NULL;
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
    t = q_115(t);
    o_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, o_3, n_3);
    z_7 = t;
    t = SSLsetAnnotations(z_7, l_3);
    return(t);
  }
  static ATerm x_0 (ATerm t)
  {
    ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,v_3 = NULL,w_3 = NULL,a_8 = NULL;
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
    t = q_115(t);
    v_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, s_3, v_3);
    a_8 = t;
    t = SSLsetAnnotations(a_8, r_3);
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
  y_7 = t;
  t = SSLsetAnnotations(y_7, x_2);
  t = abstract_choice_2_0(o_0, x_0, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,v_8 = NULL,s_8 = NULL;
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
  s_8 = t;
  t = SSLsetAnnotations(s_8, e_4);
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
  v_8 = t;
  t = SSLsetAnnotations(v_8, a_4);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,r_4 = NULL,t_4 = NULL,w_4 = NULL,x_4 = NULL,c_5 = NULL,g_5 = NULL,i_5 = NULL,j_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL,w_5 = NULL,i_9 = NULL,e_9 = NULL,d_9 = NULL;
  w_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
      t_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_5);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, r_5, s_5, t_5);
  d_9 = t;
  t = SSLsetAnnotations(d_9, p_5);
  v_5 = t;
  t = save_MarkVar_0_0(t);
  j_4 = t;
  t = v_5;
  if(match_cons(t, sym_PrimT_3))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
      l_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_5);
  g_5 = t;
  t = l_5;
  t = map_1_0(c_3, t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, i_5, j_5, m_5);
  e_9 = t;
  t = SSLsetAnnotations(e_9, g_5);
  n_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      r_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
      w_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_5);
  k_4 = t;
  t = t_4;
  t = mark_buv_0_0(t);
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, r_4, x_4, w_4);
  i_9 = t;
  t = SSLsetAnnotations(i_9, k_4);
  c_5 = t;
  t = j_4;
  t = isect_MarkVar_0_0(t);
  t = c_5;
  return(t);
}
ATerm alltd_1_0 (ATerm t_118 (ATerm), ATerm t)
{
  static ATerm x_5 (ATerm t);
  static ATerm x_5 (ATerm t)
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_118(t);
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        t = SRTS_all(x_5, t);
      }
    return(t);
  }
  t = x_5(t);
  return(t);
}
static ATerm e_3 (ATerm t)
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
        ATerm q_0 = NULL,s_0 = NULL,t_0 = NULL,i_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,o_2 = NULL,u_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL,b_3 = NULL,h_3 = NULL,x_9 = NULL,w_9 = NULL,s_9 = NULL;
        t = SSLgetAnnotations(j_10);
        b_3 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, k_10, l_10, i_10);
        s_9 = t;
        t = SSLsetAnnotations(s_9, b_3);
        h_3 = t;
        t = save_MarkVar_0_0(t);
        q_0 = t;
        t = h_3;
        if(match_cons(t, sym_CallT_3))
          {
            o_2 = ATgetArgument(t, 0);
            u_2 = ATgetArgument(t, 1);
            w_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_3);
        r_1 = t;
        t = w_2;
        t = map_1_0(e_3, t);
        y_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, o_2, u_2, y_2);
        w_9 = t;
        t = SSLsetAnnotations(w_9, r_1);
        z_2 = t;
        if(match_cons(t, sym_CallT_3))
          {
            t_0 = ATgetArgument(t, 0);
            i_1 = ATgetArgument(t, 1);
            n_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_2);
        s_0 = t;
        t = i_1;
        t = mark_buv_0_0(t);
        o_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, t_0, o_1, n_1);
        x_9 = t;
        t = SSLsetAnnotations(x_9, s_0);
        p_1 = t;
        t = q_0;
        t = isect_MarkVar_0_0(t);
        t = p_1;
      }
    }
  else
    {
      ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL,u_4 = NULL,z_4 = NULL,d_10 = NULL,y_9 = NULL;
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
      y_9 = t;
      t = SSLsetAnnotations(y_9, u_4);
      z_4 = t;
      t = save_MarkVar_0_0(t);
      m_4 = t;
      t = z_4;
      if(match_cons(t, sym_Call_2))
        {
          o_4 = ATgetArgument(t, 0);
          p_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_4);
      n_4 = t;
      t = p_4;
      t = mark_buv_0_0(t);
      q_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, o_4, q_4);
      d_10 = t;
      t = SSLsetAnnotations(d_10, n_4);
      s_4 = t;
      t = m_4;
      t = isect_MarkVar_0_0(t);
      t = s_4;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_x_15;
  return(t);
}
static ATerm l_7 (ATerm l_26, ATerm m_26, ATerm n_26, ATerm t)
{
  ATerm o_10 = NULL;
  static ATerm i_3 (ATerm t);
  static ATerm i_3 (ATerm t)
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
  t = scope_2_0(g_3, i_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, l_26, m_26, not_null(o_10));
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_x_15;
  return(t);
}
static ATerm m_7 (ATerm f_26, ATerm j_26, ATerm h_26, ATerm t)
{
  ATerm p_10 = NULL,t_10 = NULL,u_10 = NULL;
  static ATerm k_3 (ATerm t);
  static ATerm k_3 (ATerm t)
  {
    t = f_26;
    t = mark_match_vars_0_0(t);
    if(((p_10 != NULL) && (p_10 != t)))
      _fail(t);
    else
      p_10 = t;
    t = h_26;
    t = mark_buv_0_0(t);
    if(((t_10 != NULL) && (t_10 != t)))
      _fail(t);
    else
      t_10 = t;
    t = j_26;
    t = mark_build_vars_0_0(t);
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    return(t);
  }
  t = scope_2_0(j_3, k_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_10), not_null(u_10), not_null(t_10)));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_x_15;
  return(t);
}
static ATerm z_3 (ATerm t)
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
static ATerm f_4 (ATerm t)
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
                  t = map_1_0(l_4, t);
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
static ATerm l_4 (ATerm t)
{
  ATerm f_12 = NULL;
  ATerm j_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_12 = ATgetArgument(t, 0);
          {
            ATerm m_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_16);
      t = f_12;
    }
  else
    {
      t = j_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_12;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = map_1_0(y_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm o_12 = NULL;
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_12 = ATgetArgument(t, 0);
          {
            ATerm s_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_16);
      t = o_12;
    }
  else
    {
      t = o_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_12;
    }
  return(t);
}
static ATerm n_7 (ATerm z_25, ATerm d_26, ATerm b_26, ATerm t)
{
  ATerm a_11 = NULL,f_11 = NULL,h_11 = NULL;
  static ATerm u_3 (ATerm t);
  static ATerm u_3 (ATerm t)
  {
    t = z_25;
    t = free_vars_3_0(z_3, f_4, tboundin_3_0, t);
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
  t = scope_2_0(p_3, u_3, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_11), not_null(h_11), not_null(f_11)));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm d_15 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_15);
  return(t);
}
static ATerm b_5 (ATerm t)
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
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_16);
          }
        else
          {
            t = v_16;
            {
              ATerm y_16 = t;
              int b_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,k_15 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_15 = ATgetArgument(t, 0);
                      g_15 = ATgetArgument(t, 1);
                      h_15 = ATgetArgument(t, 2);
                      k_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_15;
                  t = map_1_0(d_5, t);
                  LocalPopChoice(b_17);
                }
              else
                {
                  t = y_16;
                  {
                    ATerm c_17 = t;
                    int d_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_17);
                      }
                    else
                      {
                        t = c_17;
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
  ATerm t_15 = NULL;
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_15 = ATgetArgument(t, 0);
          {
            ATerm g_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_17);
      t = t_15;
    }
  else
    {
      t = e_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_15;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = map_1_0(f_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm f_16 = NULL;
  ATerm j_17 = t;
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
      t = j_17;
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
static ATerm h_5 (ATerm t)
{
  t = term_x_15;
  return(t);
}
static ATerm o_5 (ATerm t)
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
static ATerm q_5 (ATerm t)
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
static ATerm u_5 (ATerm t)
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
                  ATerm y_17 = NULL,d_18 = NULL,e_18 = NULL,j_18 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_17 = ATgetArgument(t, 0);
                      d_18 = ATgetArgument(t, 1);
                      e_18 = ATgetArgument(t, 2);
                      j_18 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_18;
                  t = map_1_0(y_5, t);
                  LocalPopChoice(a_18);
                }
              else
                {
                  t = z_17;
                  {
                    ATerm c_18 = t;
                    int g_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(g_18);
                      }
                    else
                      {
                        t = c_18;
                        t = dynrule_targs_1_0(a_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm s_18 = NULL;
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_18 = ATgetArgument(t, 0);
          {
            ATerm k_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_18);
      t = s_18;
    }
  else
    {
      t = h_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_18;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = map_1_0(b_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm e_19 = NULL;
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_19 = ATgetArgument(t, 0);
          {
            ATerm n_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_18);
      t = e_19;
    }
  else
    {
      t = l_18;
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
static ATerm c_6 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,o_13 = NULL,u_13 = NULL,v_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      o_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
      v_13 = ATgetArgument(t, 2);
      {
        ATerm h_14 = NULL,j_14 = NULL,z_14 = NULL,c_15 = NULL;
        t = v_13;
        if(match_cons(t, sym_Rule_3))
          {
            k_13 = ATgetArgument(t, 0);
            l_13 = ATgetArgument(t, 1);
            m_13 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = v_13;
        t = free_vars_3_0(a_5, b_5, tboundin_3_0, t);
        h_14 = t;
        {
          static ATerm k_5 (ATerm t);
          static ATerm k_5 (ATerm t)
          {
            t = h_14;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = k_13;
            t = mark_match_vars_0_0(t);
            if(((j_14 != NULL) && (j_14 != t)))
              _fail(t);
            else
              j_14 = t;
            t = m_13;
            t = mark_buv_0_0(t);
            if(((z_14 != NULL) && (z_14 != t)))
              _fail(t);
            else
              z_14 = t;
            t = l_13;
            t = mark_build_vars_0_0(t);
            if(((c_15 != NULL) && (c_15 != t)))
              _fail(t);
            else
              c_15 = t;
            return(t);
          }
          t = scope_2_0(h_5, k_5, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, o_13, u_13, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_14), not_null(c_15), not_null(z_14)));
      }
    }
  else
    {
      ATerm q_16 = NULL,r_16 = NULL,z_16 = NULL,h_17 = NULL,o_17 = NULL,q_17 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          o_13 = ATgetArgument(t, 0);
          u_13 = ATgetArgument(t, 1);
          v_13 = ATgetArgument(t, 2);
          a_14 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = a_14;
      if(match_cons(t, sym_Rule_3))
        {
          b_14 = ATgetArgument(t, 0);
          c_14 = ATgetArgument(t, 1);
          d_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_13;
      t = map_1_0(o_5, t);
      q_16 = t;
      t = a_14;
      t = free_vars_3_0(q_5, u_5, tboundin_3_0, t);
      q_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_17, q_16);
      t = diff_0_0(t);
      r_16 = t;
      {
        static ATerm d_6 (ATerm t);
        static ATerm d_6 (ATerm t)
        {
          t = q_16;
          t = map_1_0(IntroduceBound_0_0, t);
          t = r_16;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = b_14;
          t = mark_match_vars_0_0(t);
          if(((z_16 != NULL) && (z_16 != t)))
            _fail(t);
          else
            z_16 = t;
          t = d_14;
          t = mark_buv_0_0(t);
          if(((h_17 != NULL) && (h_17 != t)))
            _fail(t);
          else
            h_17 = t;
          t = c_14;
          t = mark_build_vars_0_0(t);
          if(((o_17 != NULL) && (o_17 != t)))
            _fail(t);
          else
            o_17 = t;
          return(t);
        }
        t = scope_2_0(c_6, d_6, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, o_13, u_13, v_13, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_16), not_null(o_17), not_null(h_17)));
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_19);
  i_19 = t;
  t = term_q_18;
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, h_19), term_q_18);
  t = d_8(e_6, i_19, j_19, t);
  t = h_19;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm u_19 = NULL;
  ATerm r_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_19 = ATgetArgument(t, 0);
          {
            ATerm u_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_18);
      t = u_19;
    }
  else
    {
      t = r_18;
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
static ATerm h_6 (ATerm t)
{
  t = term_x_15;
  return(t);
}
static ATerm o_7 (ATerm x_24, ATerm y_24, ATerm z_24, ATerm b_25, ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  t = z_24;
  t = map_1_0(g_6, t);
  n_19 = t;
  {
    static ATerm j_6 (ATerm t);
    static ATerm j_6 (ATerm t)
    {
      t = n_19;
      t = map_1_0(IntroduceBound_0_0, t);
      t = b_25;
      t = mark_buv_0_0(t);
      if(((o_19 != NULL) && (o_19 != t)))
        _fail(t);
      else
        o_19 = t;
      return(t);
    }
    t = scope_2_0(h_6, j_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_24, y_24, z_24, not_null(o_19));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,j_21 = NULL;
  y_20 = t;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      e_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_21;
  if(match_cons(t, sym_Undefined_0))
    {
      t = z_20;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_w_18;
        }
      else
        {
          t = term_w_18;
        }
    }
  else
    {
      ATerm y_18 = t;
      int z_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm a_19 = ATgetArgument(t, 0);
              j_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(z_18);
          t = z_20;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_w_18;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  c_21 = ATgetArgument(t, 0);
                  d_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm b_19 = t;
                int c_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, d_21, j_21);
                    {
                      ATerm d_19 = t;
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
                          t = d_19;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, c_21, term_f_19);
                    LocalPopChoice(c_19);
                  }
                else
                  {
                    t = b_19;
                    t = j_21;
                    if((d_21 != t))
                      {
                        _fail(t);
                      }
                    t = z_20;
                  }
              }
            }
        }
      else
        {
          t = y_18;
          t = z_20;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_w_18;
        }
    }
  return(t);
}
static ATerm p_7 (ATerm i_23, ATerm j_23, ATerm h_23, ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  t = term_x_15;
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_15, i_23);
  t = w_8(t_21, i_23, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_21 = ATgetFirst((ATermList) t);
      {
        ATerm g_19 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_23, r_21);
  t = CompareEntries_0_0(t);
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_23, (ATerm) ATinsert(CheckATermList(h_23), s_21));
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,t_22 = NULL,u_22 = NULL;
  u_22 = t;
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
      t = n_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_22 = ATgetFirst((ATermList) t);
          t_22 = (ATerm) ATgetNext((ATermList) t);
          t = o_22;
          {
            ATerm k_19 = t;
            int l_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm p_19 = ATgetArgument(t, 0);
                    ATerm q_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(l_19);
                t = m_22;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = u_22;
                  }
                else
                  {
                    ATerm r_19 = t;
                    int t_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = u_22;
                        t = p_7(m_22, o_22, t_22, t);
                        LocalPopChoice(t_19);
                      }
                    else
                      {
                        t = r_19;
                        t = u_22;
                      }
                  }
              }
            else
              {
                t = k_19;
                t = m_22;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = u_22;
                  }
                else
                  {
                    t = u_22;
                  }
              }
          }
        }
      else
        {
          t = m_22;
          if(match_cons(t, sym_Scopes_0))
            {
              t = u_22;
            }
          else
            {
              t = u_22;
            }
        }
    }
  else
    {
      t = u_22;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL;
  t = map_1_0(l_6, t);
  k_22 = t;
  t = term_x_15;
  t = table_destroy_0_0(t);
  t = term_x_15;
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_15, k_22);
  t = q_7(l_22, k_22, t);
  t = k_22;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,d_27 = NULL;
  d_27 = t;
  {
    ATerm v_19 = t;
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
        t = v_19;
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
                        ATerm f_20 = ATgetArgument(t, 0);
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
static ATerm q_7 (ATerm g_29, ATerm f_29, ATerm t)
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
    t = a_9(o_27, p_27, r_27, t);
    t = (ATerm) ATmakeAppl(sym__3, g_29, o_27, p_27);
    return(t);
  }
  t = f_29;
  t = map_1_0(o_6, t);
  return(t);
}
static ATerm r_7 (ATerm z_32, ATerm t)
{
  t = SSL_hashtable_keys(z_32);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_27 = NULL,x_27 = NULL;
  static ATerm r_6 (ATerm t);
  static ATerm r_6 (ATerm t)
  {
    ATerm y_27 = NULL,k_28 = NULL;
    y_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), y_27);
    t = w_8(not_null(t_27), y_27, t);
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
  t = r_7(x_27, t);
  t = map_1_0(r_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_x_15;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm v_23, ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm s_6 (ATerm t);
    static ATerm s_6 (ATerm t)
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
              ATerm i_20 = ATgetArgument(t, 1);
              if(((ATgetType(i_20) == AT_LIST) && !(ATisEmpty(i_20))))
                {
                  ATerm j_20 = ATgetFirst((ATermList) i_20);
                  if(match_cons(j_20, sym_Defined_2))
                    {
                      c_29 = ATgetArgument(j_20, 0);
                      {
                        ATerm l_20 = ATgetArgument(j_20, 1);
                        if((ATgetSymbol((ATermAppl) l_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  j_29 = (ATerm) ATgetNext((ATermList) i_20);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_23;
        {
          static ATerm t_6 (ATerm t);
          static ATerm t_6 (ATerm t)
          {
            if((b_29 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(t_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, a_29, (ATerm) ATinsert(CheckATermList(j_29), (ATerm) ATmakeAppl(sym_Defined_2, c_29, term_f_19)));
        return(t);
      }
      ATerm e_30 = NULL,n_30 = NULL;
      n_30 = t;
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                e_30 = ATgetArgument(t, 0);
                {
                  ATerm q_20 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(n_20);
            t = e_30;
            if(match_cons(t, sym_Scopes_0))
              {
                t = n_30;
              }
            else
              {
                ATerm r_20 = t;
                int s_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = r_30(n_30, t);
                    LocalPopChoice(s_20);
                  }
                else
                  {
                    t = r_20;
                    t = n_30;
                  }
              }
          }
        else
          {
            t = m_20;
            {
              ATerm a_21 = t;
              int b_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_30(n_30, t);
                  LocalPopChoice(b_21);
                }
              else
                {
                  t = a_21;
                  t = n_30;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(s_6, t);
  }
  x_28 = t;
  t = term_x_15;
  t = table_destroy_0_0(t);
  t = term_x_15;
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_15, x_28);
  t = q_7(y_28, x_28, t);
  t = x_28;
  return(t);
}
ATerm tboundin_3_0 (ATerm v_155 (ATerm), ATerm w_155 (ATerm), ATerm x_155 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  n_42 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_42 = ATgetArgument(t, 0);
      m_42 = ATgetArgument(t, 1);
      {
        ATerm i_6 = NULL,p_6 = NULL,q_6 = NULL,k_20 = NULL;
        t = SSLgetAnnotations(n_42);
        i_6 = t;
        t = o_42;
        t = x_155(t);
        p_6 = t;
        t = m_42;
        t = v_155(t);
        q_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_6, q_6);
        k_20 = t;
        t = SSLsetAnnotations(k_20, i_6);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          o_42 = ATgetArgument(t, 0);
          {
            ATerm e_7 = NULL,g_7 = NULL,h_7 = NULL,j_7 = NULL,t_7 = NULL,x_7 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,p_20 = NULL,o_20 = NULL;
            t = SSLgetAnnotations(n_42);
            e_7 = t;
            t = o_42;
            if(match_cons(t, sym_Rule_3))
              {
                h_7 = ATgetArgument(t, 0);
                j_7 = ATgetArgument(t, 1);
                t_7 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_42);
            g_7 = t;
            t = h_7;
            t = v_155(t);
            x_7 = t;
            t = j_7;
            t = v_155(t);
            f_9 = t;
            t = t_7;
            t = v_155(t);
            g_9 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, x_7, f_9, g_9);
            o_20 = t;
            t = SSLsetAnnotations(o_20, g_7);
            h_9 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, h_9);
            p_20 = t;
            t = SSLsetAnnotations(p_20, e_7);
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
                ATerm u_9 = NULL,b_10 = NULL,c_10 = NULL,e_10 = NULL,u_20 = NULL;
                t = SSLgetAnnotations(n_42);
                u_9 = t;
                t = o_42;
                t = x_155(t);
                b_10 = t;
                t = m_42;
                t = x_155(t);
                c_10 = t;
                t = k_42;
                t = x_155(t);
                e_10 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, b_10, c_10, e_10);
                u_20 = t;
                t = SSLsetAnnotations(u_20, u_9);
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
                    ATerm c_11 = NULL,j_11 = NULL,k_11 = NULL,m_11 = NULL,n_11 = NULL,v_20 = NULL;
                    t = SSLgetAnnotations(n_42);
                    c_11 = t;
                    t = o_42;
                    t = x_155(t);
                    j_11 = t;
                    t = m_42;
                    t = x_155(t);
                    k_11 = t;
                    t = k_42;
                    t = x_155(t);
                    m_11 = t;
                    t = l_42;
                    t = v_155(t);
                    n_11 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, j_11, k_11, m_11, n_11);
                    v_20 = t;
                    t = SSLsetAnnotations(v_20, c_11);
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
                        ATerm s_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,w_20 = NULL;
                        t = SSLgetAnnotations(n_42);
                        s_12 = t;
                        t = o_42;
                        t = x_155(t);
                        x_12 = t;
                        t = m_42;
                        t = x_155(t);
                        y_12 = t;
                        t = k_42;
                        t = x_155(t);
                        z_12 = t;
                        t = l_42;
                        t = v_155(t);
                        a_13 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, x_12, y_12, z_12, a_13);
                        w_20 = t;
                        t = SSLsetAnnotations(w_20, s_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          o_42 = ATgetArgument(t, 0);
                          m_42 = ATgetArgument(t, 1);
                          {
                            ATerm p_13 = NULL,s_13 = NULL,t_13 = NULL,x_20 = NULL;
                            t = SSLgetAnnotations(n_42);
                            p_13 = t;
                            t = o_42;
                            t = x_155(t);
                            s_13 = t;
                            t = m_42;
                            t = v_155(t);
                            t_13 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, s_13, t_13);
                            x_20 = t;
                            t = SSLsetAnnotations(x_20, p_13);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              o_42 = ATgetArgument(t, 0);
                              m_42 = ATgetArgument(t, 1);
                              {
                                ATerm n_14 = NULL,q_14 = NULL,r_14 = NULL,q_21 = NULL;
                                t = SSLgetAnnotations(n_42);
                                n_14 = t;
                                t = o_42;
                                t = x_155(t);
                                q_14 = t;
                                t = m_42;
                                t = v_155(t);
                                r_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, q_14, r_14);
                                q_21 = t;
                                t = SSLsetAnnotations(q_21, n_14);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  o_42 = ATgetArgument(t, 0);
                                  m_42 = ATgetArgument(t, 1);
                                  {
                                    ATerm i_15 = NULL,p_15 = NULL,u_15 = NULL,u_21 = NULL;
                                    t = SSLgetAnnotations(n_42);
                                    i_15 = t;
                                    t = o_42;
                                    t = x_155(t);
                                    p_15 = t;
                                    t = m_42;
                                    t = v_155(t);
                                    u_15 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, p_15, u_15);
                                    u_21 = t;
                                    t = SSLsetAnnotations(u_21, i_15);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      o_42 = ATgetArgument(t, 0);
                                      {
                                        ATerm l_16 = NULL,n_16 = NULL,v_21 = NULL;
                                        t = SSLgetAnnotations(n_42);
                                        l_16 = t;
                                        t = o_42;
                                        t = v_155(t);
                                        n_16 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, n_16);
                                        v_21 = t;
                                        t = SSLsetAnnotations(v_21, l_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          o_42 = ATgetArgument(t, 0);
                                          {
                                            ATerm w_16 = NULL,a_17 = NULL,w_21 = NULL;
                                            t = SSLgetAnnotations(n_42);
                                            w_16 = t;
                                            t = o_42;
                                            t = v_155(t);
                                            a_17 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, a_17);
                                            w_21 = t;
                                            t = SSLsetAnnotations(w_21, w_16);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              o_42 = ATgetArgument(t, 0);
                                              {
                                                ATerm i_17 = NULL,l_17 = NULL,d_22 = NULL;
                                                t = SSLgetAnnotations(n_42);
                                                i_17 = t;
                                                t = o_42;
                                                t = v_155(t);
                                                l_17 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, l_17);
                                                d_22 = t;
                                                t = SSLsetAnnotations(d_22, i_17);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  o_42 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm b_18 = NULL,f_18 = NULL,e_22 = NULL;
                                                    t = SSLgetAnnotations(n_42);
                                                    b_18 = t;
                                                    t = o_42;
                                                    t = v_155(t);
                                                    f_18 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, f_18);
                                                    e_22 = t;
                                                    t = SSLsetAnnotations(e_22, b_18);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm v_18 = NULL,x_18 = NULL,f_22 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      o_42 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(n_42);
                                                  v_18 = t;
                                                  t = o_42;
                                                  t = v_155(t);
                                                  x_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, x_18);
                                                  f_22 = t;
                                                  t = SSLsetAnnotations(f_22, v_18);
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
ATerm dynrule_targs_1_0 (ATerm e_156 (ATerm), ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,w_43 = NULL;
  ATerm f_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          s_43 = ATgetArgument(t, 0);
          {
            ATerm i_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_21);
      t = s_43;
      if(match_cons(t, sym_DynRuleId_1))
        {
          t_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_43;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm k_21 = ATgetArgument(t, 0);
          ATerm l_21 = ATgetArgument(t, 1);
          w_43 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_43;
    }
  else
    {
      t = f_21;
      {
        ATerm m_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                s_43 = ATgetArgument(t, 0);
                {
                  ATerm a_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(p_21);
            t = s_43;
            if(match_cons(t, sym_DynRuleId_1))
              {
                t_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_43;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm j_22 = ATgetArgument(t, 0);
                ATerm p_22 = ATgetArgument(t, 1);
                w_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_43;
          }
        else
          {
            t = m_21;
            if(match_cons(t, sym_AddDynRule_2))
              {
                s_43 = ATgetArgument(t, 0);
                {
                  ATerm q_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = s_43;
            if(match_cons(t, sym_DynRuleId_1))
              {
                t_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_43;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm r_22 = ATgetArgument(t, 0);
                ATerm s_22 = ATgetArgument(t, 1);
                w_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_43;
          }
      }
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm e_45 = NULL;
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_45 = ATgetArgument(t, 0);
          {
            ATerm x_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_22);
      t = e_45;
    }
  else
    {
      t = v_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_45;
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm v_45 = NULL;
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_45 = ATgetArgument(t, 0);
          {
            ATerm a_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_22);
      t = v_45;
    }
  else
    {
      t = y_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_45;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm s_44 = NULL;
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm d_23 = ATgetArgument(t, 0);
          ATerm e_23 = ATgetArgument(t, 1);
          s_44 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(c_23);
      t = s_44;
      t = map_1_0(u_6, t);
    }
  else
    {
      t = b_23;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm f_23 = ATgetArgument(t, 0);
          ATerm g_23 = ATgetArgument(t, 1);
          s_44 = ATgetArgument(t, 2);
          {
            ATerm k_23 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = s_44;
      t = map_1_0(x_6, t);
    }
  return(t);
}
static ATerm y_6 (ATerm t)
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
static ATerm z_6 (ATerm t)
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
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_23);
          }
        else
          {
            t = n_23;
            {
              ATerm r_23 = t;
              int t_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_48 = ATgetArgument(t, 0);
                      h_48 = ATgetArgument(t, 1);
                      i_48 = ATgetArgument(t, 2);
                      j_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_48;
                  t = map_1_0(a_7, t);
                  LocalPopChoice(t_23);
                }
              else
                {
                  t = r_23;
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
static ATerm a_7 (ATerm t)
{
  ATerm b_49 = NULL;
  ATerm x_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_49 = ATgetArgument(t, 0);
          {
            ATerm a_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_23);
      t = b_49;
    }
  else
    {
      t = x_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_49;
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
  ATerm j_49 = NULL;
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_49 = ATgetArgument(t, 0);
          {
            ATerm d_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_24);
      t = j_49;
    }
  else
    {
      t = b_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_49;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm v_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_49);
  return(t);
}
static ATerm i_7 (ATerm t)
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
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_49 = NULL,b_50 = NULL,f_50 = NULL,k_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_49 = ATgetArgument(t, 0);
                      b_50 = ATgetArgument(t, 1);
                      f_50 = ATgetArgument(t, 2);
                      k_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_50;
                  t = map_1_0(s_7, t);
                  LocalPopChoice(o_24);
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
                        t = dynrule_targs_1_0(c_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm z_50 = NULL;
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_50 = ATgetArgument(t, 0);
          {
            ATerm u_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_24);
      t = z_50;
    }
  else
    {
      t = r_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_50;
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = map_1_0(g_8, t);
  return(t);
}
static ATerm g_8 (ATerm t)
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
static ATerm h_8 (ATerm t)
{
  ATerm o_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_51);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm c_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_25);
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
              int l_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_51 = NULL,r_51 = NULL,v_51 = NULL,w_51 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_51 = ATgetArgument(t, 0);
                      r_51 = ATgetArgument(t, 1);
                      v_51 = ATgetArgument(t, 2);
                      w_51 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_51;
                  t = map_1_0(c_9, t);
                  LocalPopChoice(l_25);
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
                        t = dynrule_targs_1_0(j_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm g_52 = NULL;
  ATerm p_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_52 = ATgetArgument(t, 0);
          {
            ATerm s_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_25);
      t = g_52;
    }
  else
    {
      t = p_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_52;
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = map_1_0(k_9, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm r_52 = NULL;
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_52 = ATgetArgument(t, 0);
          {
            ATerm v_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_25);
      t = r_52;
    }
  else
    {
      t = t_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_52;
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
  ATerm x_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_26);
    }
  else
    {
      t = x_25;
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
                  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,i_53 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_53 = ATgetArgument(t, 0);
                      e_53 = ATgetArgument(t, 1);
                      f_53 = ATgetArgument(t, 2);
                      i_53 = ATgetArgument(t, 3);
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
  ATerm f_54 = NULL;
  ATerm s_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_54 = ATgetArgument(t, 0);
          {
            ATerm w_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_26);
      t = f_54;
    }
  else
    {
      t = s_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_54;
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm o_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_54);
  return(t);
}
static ATerm r_9 (ATerm t)
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
        ATerm c_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_27);
          }
        else
          {
            t = c_27;
            {
              ATerm h_27 = t;
              int i_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_54 = NULL,w_54 = NULL,z_54 = NULL,e_55 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_54 = ATgetArgument(t, 0);
                      w_54 = ATgetArgument(t, 1);
                      z_54 = ATgetArgument(t, 2);
                      e_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_54;
                  t = map_1_0(t_9, t);
                  LocalPopChoice(i_27);
                }
              else
                {
                  t = h_27;
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
  ATerm w_55 = NULL;
  ATerm m_27 = t;
  int q_27 = stack_ptr;
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
      LocalPopChoice(q_27);
      t = w_55;
    }
  else
    {
      t = m_27;
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
static ATerm v_9 (ATerm t)
{
  t = map_1_0(z_9, t);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm e_56 = NULL;
  ATerm u_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_56 = ATgetArgument(t, 0);
          {
            ATerm a_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_27);
      t = e_56;
    }
  else
    {
      t = u_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_56;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm a_48 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      a_48 = ATgetArgument(t, 0);
      t = a_48;
      t = free_vars_3_0(y_6, z_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          a_48 = ATgetArgument(t, 0);
          t = a_48;
          t = free_vars_3_0(f_7, i_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              a_48 = ATgetArgument(t, 0);
              t = a_48;
              t = free_vars_3_0(h_8, y_8, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  a_48 = ATgetArgument(t, 0);
                  t = a_48;
                  t = free_vars_3_0(l_9, m_9, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      a_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_48;
                  t = free_vars_3_0(q_9, r_9, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm a_10 (ATerm t)
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
static ATerm f_10 (ATerm t)
{
  ATerm b_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_28);
    }
  else
    {
      t = b_28;
      {
        ATerm g_28 = t;
        int h_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_28);
          }
        else
          {
            t = g_28;
            {
              ATerm l_28 = t;
              int m_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_57 = ATgetArgument(t, 0);
                      w_57 = ATgetArgument(t, 1);
                      x_57 = ATgetArgument(t, 2);
                      y_57 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_57;
                  t = map_1_0(g_10, t);
                  LocalPopChoice(m_28);
                }
              else
                {
                  t = l_28;
                  {
                    ATerm n_28 = t;
                    int t_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_28);
                      }
                    else
                      {
                        t = n_28;
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
  ATerm f_58 = NULL;
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_58 = ATgetArgument(t, 0);
          {
            ATerm d_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_28);
      t = f_58;
    }
  else
    {
      t = v_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_58;
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
  ATerm o_58 = NULL;
  ATerm e_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_58 = ATgetArgument(t, 0);
          {
            ATerm k_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_29);
      t = o_58;
    }
  else
    {
      t = e_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_58;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_56 = NULL,h_57 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      h_57 = ATgetArgument(t, 0);
      t = h_57;
      if(match_cons(t, sym_Rule_3))
        {
          w_56 = ATgetArgument(t, 0);
          {
            ATerm l_29 = ATgetArgument(t, 1);
          }
          {
            ATerm m_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_56;
      t = free_vars_3_0(a_10, f_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          h_57 = ATgetArgument(t, 0);
          {
            ATerm o_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_57;
    }
  return(t);
}
static ATerm u_7 (ATerm w_130 (ATerm), ATerm d_55, ATerm c_55, ATerm t)
{
  static ATerm b_60 (ATerm t);
  static ATerm b_60 (ATerm t)
  {
    ATerm p_59 = NULL,s_59 = NULL,u_59 = NULL;
    p_59 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_55;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_59 = ATgetFirst((ATermList) t);
            u_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_29 = t;
          int s_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_59;
              {
                static ATerm n_10 (ATerm t);
                static ATerm n_10 (ATerm t)
                {
                  t = c_55;
                  return(t);
                }
                t = v_7(w_130, n_10, s_59, u_59, t);
              }
              t = b_60(t);
              LocalPopChoice(s_29);
            }
          else
            {
              t = q_29;
              {
                ATerm m_19 = NULL,s_19 = NULL,d_31 = NULL;
                t = SSLgetAnnotations(p_59);
                m_19 = t;
                t = u_59;
                t = b_60(t);
                s_19 = t;
                t = (ATerm) ATinsert(CheckATermList(s_19), s_59);
                d_31 = t;
                t = SSLsetAnnotations(d_31, m_19);
              }
            }
        }
      }
    return(t);
  }
  t = d_55;
  t = b_60(t);
  return(t);
}
ATerm foldr_3_0 (ATerm b_134 (ATerm), ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL;
  e_60 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_60;
      t = b_134(t);
    }
  else
    {
      ATerm j_60 = NULL,o_60 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_60 = ATgetFirst((ATermList) t);
          g_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_60;
      t = d_134(t);
      j_60 = t;
      t = g_60;
      t = foldr_3_0(b_134, c_134, d_134, t);
      o_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_60, o_60);
      t = c_134(t);
    }
  return(t);
}
static ATerm v_7 (ATerm z_130 (ATerm), ATerm a_131 (ATerm), ATerm h_55, ATerm g_55, ATerm t)
{
  t = a_131(t);
  {
    static ATerm q_10 (ATerm t);
    static ATerm q_10 (ATerm t)
    {
      ATerm v_60 = NULL;
      v_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_55, v_60);
      t = z_130(t);
      return(t);
    }
    t = fetch_1_0(q_10, t);
  }
  t = g_55;
  return(t);
}
static ATerm w_7 (ATerm r_130 (ATerm), ATerm b_55, ATerm a_55, ATerm t)
{
  static ATerm b_62 (ATerm t);
  static ATerm b_62 (ATerm t)
  {
    ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
    s_61 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_61;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_61 = ATgetFirst((ATermList) t);
            u_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_29 = t;
          int u_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_61;
              {
                static ATerm r_10 (ATerm t);
                static ATerm r_10 (ATerm t)
                {
                  t = a_55;
                  return(t);
                }
                t = v_7(r_130, r_10, t_61, u_61, t);
              }
              t = b_62(t);
              LocalPopChoice(u_29);
            }
          else
            {
              t = t_29;
              {
                ATerm e_20 = NULL,h_20 = NULL,f_31 = NULL;
                t = SSLgetAnnotations(s_61);
                e_20 = t;
                t = u_61;
                t = b_62(t);
                h_20 = t;
                t = (ATerm) ATinsert(CheckATermList(h_20), t_61);
                f_31 = t;
                t = SSLsetAnnotations(f_31, e_20);
              }
            }
        }
      }
    return(t);
  }
  t = b_55;
  t = b_62(t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_127 (ATerm), ATerm t)
{
  static ATerm o_63 (ATerm t);
  static ATerm o_63 (ATerm t)
  {
    ATerm i_63 = NULL,l_63 = NULL,n_63 = NULL;
    n_63 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_63 = ATgetFirst((ATermList) t);
        l_63 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_20 = NULL,g_21 = NULL,h_31 = NULL;
          t = SSLgetAnnotations(n_63);
          t_20 = t;
          t = l_63;
          t = o_63(t);
          g_21 = t;
          t = (ATerm) ATinsert(CheckATermList(g_21), i_63);
          h_31 = t;
          t = SSLsetAnnotations(h_31, t_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_63;
        t = c_127(t);
      }
    return(t);
  }
  t = o_63(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL;
  j_62 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_62;
    }
  else
    {
      static ATerm s_10 (ATerm t);
      static ATerm s_10 (ATerm t)
      {
        t = not_null(l_62);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_62 = ATgetFirst((ATermList) t);
          if(((l_62 != NULL) && (l_62 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_62 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_62;
      t = at_end_1_0(s_10, t);
    }
  return(t);
}
static ATerm q_64 (ATerm a_64, ATerm t)
{
  ATerm d_64 = NULL;
  t = SSL_explode_term(a_64);
  if(match_cons(t, sym__2))
    {
      ATerm v_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_64;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL;
  h_64 = t;
  if(match_cons(t, sym__2))
    {
      f_64 = ATgetArgument(t, 0);
      g_64 = ATgetArgument(t, 1);
      {
        ATerm y_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_10 (ATerm t);
            static ATerm v_10 (ATerm t)
            {
              t = g_64;
              return(t);
            }
            t = f_64;
            t = at_end_1_0(v_10, t);
            LocalPopChoice(z_29);
          }
        else
          {
            t = y_29;
            t = q_64(h_64, t);
          }
      }
    }
  else
    {
      t = q_64(h_64, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t)
{
  static ATerm c_65 (ATerm t);
  static ATerm c_65 (ATerm t)
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_128(t);
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        {
          ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,j_31 = NULL;
          t = q_128(t);
          b_65 = t;
          if(match_cons(t, sym__2))
            {
              x_64 = ATgetArgument(t, 0);
              y_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_65);
          w_64 = t;
          t = x_64;
          t = s_128(t);
          z_64 = t;
          t = y_64;
          t = c_65(t);
          a_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_64, a_65);
          j_31 = t;
          t = SSLsetAnnotations(j_31, w_64);
          t = r_128(t);
        }
      }
    return(t);
  }
  t = c_65(t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_30 = ATgetArgument(t, 0);
      if(((ATgetType(d_30) != AT_LIST) || !(ATisEmpty(d_30))))
        _fail(t);
      {
        ATerm f_30 = ATgetArgument(t, 1);
        if(((ATgetType(f_30) != AT_LIST) || !(ATisEmpty(f_30))))
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
  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_30 = ATgetArgument(t, 0);
      if(((ATgetType(h_30) == AT_LIST) && !(ATisEmpty(h_30))))
        {
          m_65 = ATgetFirst((ATermList) h_30);
          n_65 = (ATerm) ATgetNext((ATermList) h_30);
        }
      else
        _fail(t);
      {
        ATerm i_30 = ATgetArgument(t, 1);
        if(((ATgetType(i_30) == AT_LIST) && !(ATisEmpty(i_30))))
          {
            o_65 = ATgetFirst((ATermList) i_30);
            p_65 = (ATerm) ATgetNext((ATermList) i_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_65, o_65), (ATerm) ATmakeAppl(sym__2, n_65, p_65));
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL;
  if(match_cons(t, sym__2))
    {
      q_65 = ATgetArgument(t, 0);
      r_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_65), q_65);
  return(t);
}
static ATerm b_8 (ATerm x_869, ATerm c_870, ATerm m_86, ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL;
  t = SSL_explode_term(c_870);
  if(match_cons(t, sym__2))
    {
      h_65 = ATgetArgument(t, 0);
      j_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_869);
  if(match_cons(t, sym__2))
    {
      if((h_65 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_65, j_65);
  t = genzip_4_0(w_10, x_10, y_10, _id, t);
  k_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_65, m_86);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm t)
{
  static ATerm t_65 (ATerm t);
  static ATerm t_65 (ATerm t)
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_124(t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = m_124(t);
        t = t_65(t);
      }
    return(t);
  }
  t = t_65(t);
  return(t);
}
ATerm for_3_0 (ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm t)
{
  t = o_124(t);
  t = while_not_2_0(p_124, q_124, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm a_66 = NULL;
  a_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_66);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,l_31 = NULL;
  e_66 = t;
  if(match_cons(t, sym__2))
    {
      c_66 = ATgetArgument(t, 0);
      d_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_66);
  b_66 = t;
  t = d_66;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_66, d_66);
  l_31 = t;
  t = SSLsetAnnotations(l_31, b_66);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL;
  x_66 = t;
  if(match_cons(t, sym__2))
    {
      y_66 = ATgetArgument(t, 0);
      z_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_67 = ATgetFirst((ATermList) t);
      b_67 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_67(y_66, z_66, x_66, t);
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_66), a_67), b_67);
          }
      }
    }
  else
    {
      t = l_67(y_66, z_66, x_66, t);
    }
  return(t);
}
static ATerm l_67 (ATerm f_66, ATerm g_66, ATerm h_66, ATerm t)
{
  ATerm i_66 = NULL,l_66 = NULL,m_31 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
  t = SSLgetAnnotations(h_66);
  i_66 = t;
  t = g_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_66 = ATgetFirst((ATermList) t);
      r_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_66;
  if(match_cons(t, sym__2))
    {
      p_66 = ATgetArgument(t, 0);
      q_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_66;
        if((p_66 != t))
          {
            _fail(t);
          }
        t = r_66;
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = g_66;
        t = b_8(p_66, q_66, r_66, t);
      }
  }
  l_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_66, l_66);
  m_31 = t;
  t = SSLsetAnnotations(m_31, i_66);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm k_67 = NULL;
  if(match_cons(t, sym__2))
    {
      k_67 = ATgetArgument(t, 0);
      if((k_67 != ATgetArgument(t, 1)))
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
  ATerm q_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(z_10, b_11, d_11, t);
      LocalPopChoice(s_30);
    }
  else
    {
      t = q_30;
      {
        ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL;
        f_67 = t;
        if(match_cons(t, sym__2))
          {
            g_67 = ATgetArgument(t, 0);
            h_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_67;
        t = w_7(e_11, g_67, h_67, t);
      }
    }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(u_11, x_21, y_21, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      z_21 = ATgetArgument(t, 0);
      if((z_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL;
  if(match_cons(t, sym__2))
    {
      g_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(x_11, g_22, h_22, t);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      if((i_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm t_151 (ATerm), ATerm u_151 (ATerm), ATerm v_151 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm z_67 (ATerm t);
  static ATerm z_67 (ATerm t)
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_151(t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
          ATerm y_30 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_67 = NULL,o_67 = NULL,n_21 = NULL,o_21 = NULL;
              n_67 = t;
              t = u_151(t);
              o_67 = t;
              t = n_67;
              {
                static ATerm g_11 (ATerm t);
                static ATerm g_11 (ATerm t)
                {
                  ATerm q_67 = NULL;
                  t = z_67(t);
                  q_67 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_67, o_67);
                  t = diff_0_0(t);
                  return(t);
                }
                t = v_151(g_11, z_67, i_11, t);
              }
              o_21 = t;
              t = SSL_explode_term(o_21);
              if(match_cons(t, sym__2))
                {
                  ATerm e_31 = ATgetArgument(t, 0);
                  n_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_21;
              t = foldr_3_0(o_11, t_11, _id, t);
              LocalPopChoice(c_31);
            }
          else
            {
              t = y_30;
              {
                ATerm b_22 = NULL,c_22 = NULL;
                c_22 = t;
                t = SSL_explode_term(c_22);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_31 = ATgetArgument(t, 0);
                    b_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_22;
                t = foldr_3_0(v_11, w_11, z_67, t);
              }
            }
        }
      }
    return(t);
  }
  t = z_67(t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm r_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_68);
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
                  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_68 = ATgetArgument(t, 0);
                      u_68 = ATgetArgument(t, 1);
                      v_68 = ATgetArgument(t, 2);
                      w_68 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_68;
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
  ATerm d_69 = NULL;
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_69 = ATgetArgument(t, 0);
          {
            ATerm d_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_32);
      t = d_69;
    }
  else
    {
      t = b_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_69;
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
  ATerm i_69 = NULL;
  ATerm e_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_69 = ATgetArgument(t, 0);
          {
            ATerm m_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_32);
      t = i_69;
    }
  else
    {
      t = e_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_69;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,q_31 = NULL,p_31 = NULL;
  q_68 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_68 = ATgetArgument(t, 0);
      o_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_68);
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, n_68, o_68);
  p_31 = t;
  t = SSLsetAnnotations(p_31, m_68);
  p_68 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_68 = ATgetArgument(t, 0);
      {
        ATerm n_32 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_68;
  t = free_vars_3_0(y_11, z_11, tboundin_3_0, t);
  d_68 = t;
  t = undefine_unbound_MarkVar_0_1(d_68, t);
  e_68 = t;
  t = p_68;
  if(match_cons(t, sym_Let_2))
    {
      h_68 = ATgetArgument(t, 0);
      i_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_68);
  g_68 = t;
  t = h_68;
  {
    static ATerm d_12 (ATerm t);
    static ATerm d_12 (ATerm t)
    {
      ATerm l_69 = NULL,m_69 = NULL;
      l_69 = t;
      t = term_x_15;
      t = table_destroy_0_0(t);
      t = term_x_15;
      m_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_x_15, e_68);
      t = q_7(m_69, e_68, t);
      t = l_69;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(d_12, t);
  }
  j_68 = t;
  t = term_x_15;
  t = table_destroy_0_0(t);
  t = term_x_15;
  l_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_15, e_68);
  t = q_7(l_68, e_68, t);
  t = i_68;
  t = mark_buv_0_0(t);
  k_68 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, j_68, k_68);
  q_31 = t;
  t = SSLsetAnnotations(q_31, g_68);
  return(t);
}
static ATerm d_8 (ATerm b_116 (ATerm), ATerm z_26, ATerm x_26, ATerm t)
{
  ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL;
  q_69 = t;
  t = b_116(t);
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_69, z_26, x_26);
  t = x_8(n_69, z_26, x_26, t);
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_69 = NULL;
        t = term_q_32;
        v_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_69, term_q_32);
        t = w_8(n_69, v_69, t);
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
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_69 = ATgetFirst((ATermList) t);
      p_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_69, term_q_32, (ATerm) ATinsert(CheckATermList(p_69), (ATerm) ATinsert(CheckATermList(o_69), z_26)));
  t = lookup_table_0_1(n_69, t);
  u_69 = t;
  t = term_q_32;
  r_69 = t;
  t = (ATerm) ATinsert(CheckATermList(p_69), (ATerm) ATinsert(CheckATermList(o_69), z_26));
  s_69 = t;
  t = u_69;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(r_69, s_69, t_69, t);
  t = q_69;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
  w_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_69);
  x_69 = t;
  t = term_k_33;
  y_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_69), term_k_33);
  t = d_8(e_12, x_69, y_69, t);
  t = w_69;
  return(t);
}
static ATerm e_8 (ATerm i_28, ATerm j_28, ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL;
  a_70 = t;
  {
    ATerm l_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_28, j_28);
        t = w_8(i_28, j_28, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_33 = ATgetFirst((ATermList) t);
            z_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_33);
        {
          ATerm b_70 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, i_28, j_28, z_69);
          t = lookup_table_0_1(i_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              b_70 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_9(j_28, z_69, b_70, t);
          t = (ATerm) ATmakeAppl(sym__3, i_28, j_28, z_69);
        }
      }
    else
      {
        t = l_33;
        {
          ATerm d_70 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, i_28, j_28);
          t = lookup_table_0_1(i_28, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_70 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_8(j_28, d_70, t);
          t = (ATerm) ATmakeAppl(sym__2, i_28, j_28);
        }
      }
  }
  t = a_70;
  return(t);
}
ATerm end_scope_1_0 (ATerm y_115 (ATerm), ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL;
  i_70 = t;
  t = y_115(t);
  h_70 = t;
  {
    ATerm r_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_70 = NULL;
        t = term_q_32;
        m_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_70, term_q_32);
        t = w_8(h_70, m_70, t);
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
      g_70 = ATgetFirst((ATermList) t);
      f_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, h_70, term_q_32, f_70);
  t = lookup_table_0_1(h_70, t);
  l_70 = t;
  t = term_q_32;
  j_70 = t;
  t = l_70;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(j_70, f_70, k_70, t);
  t = g_70;
  {
    static ATerm g_12 (ATerm t);
    static ATerm g_12 (ATerm t)
    {
      ATerm n_70 = NULL;
      n_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_70, n_70);
      t = e_8(h_70, n_70, t);
      return(t);
    }
    t = map_1_0(g_12, t);
  }
  t = i_70;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_136 (ATerm), ATerm m_136 (ATerm), ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_136(t);
      t = m_136(t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      t = m_136(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL;
  q_70 = t;
  t = x_115(t);
  p_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_70, term_q_32);
  {
    ATerm b_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_70 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_34 = ATgetArgument(t, 0);
            ATerm g_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_32;
        z_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_70, term_q_32);
        t = w_8(p_70, z_70, t);
        LocalPopChoice(d_34);
      }
    else
      {
        t = b_34;
        t = (ATerm) ATempty;
      }
  }
  r_70 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_70, term_q_32, (ATerm) ATinsert(CheckATermList(r_70), (ATerm) ATempty));
  t = lookup_table_0_1(p_70, t);
  v_70 = t;
  t = term_q_32;
  s_70 = t;
  t = (ATerm) ATinsert(CheckATermList(r_70), (ATerm) ATempty);
  t_70 = t;
  t = v_70;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(s_70, t_70, u_70, t);
  t = q_70;
  return(t);
}
ATerm scope_2_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t)
{
  static ATerm h_12 (ATerm t);
  static ATerm h_12 (ATerm t)
  {
    t = end_scope_1_0(z_115, t);
    return(t);
  }
  t = begin_scope_1_0(z_115, t);
  t = restore_always_2_0(a_116, h_12, t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,t_31 = NULL;
  e_71 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_71 = ATgetArgument(t, 0);
      c_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_71);
  a_71 = t;
  t = c_71;
  {
    static ATerm j_12 (ATerm t);
    static ATerm j_12 (ATerm t)
    {
      ATerm f_71 = NULL;
      f_71 = t;
      t = b_71;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = f_71;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(i_12, j_12, t);
  }
  d_71 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, b_71, d_71);
  t_31 = t;
  t = SSLsetAnnotations(t_31, a_71);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL,v_31 = NULL;
      i_71 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_71 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_71);
      g_71 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_71);
      v_31 = t;
      t = SSLsetAnnotations(v_31, g_71);
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
            ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,w_31 = NULL;
            m_71 = t;
            if(match_cons(t, sym_App_2))
              {
                k_71 = ATgetArgument(t, 0);
                l_71 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_71);
            j_71 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, k_71, l_71);
            w_31 = t;
            t = SSLsetAnnotations(w_31, j_71);
            LocalPopChoice(k_34);
            {
              ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,x_31 = NULL;
              s_71 = t;
              if(match_cons(t, sym_App_2))
                {
                  o_71 = ATgetArgument(t, 0);
                  p_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_71);
              n_71 = t;
              t = o_71;
              t = mark_buv_0_0(t);
              q_71 = t;
              t = p_71;
              t = mark_build_vars_0_0(t);
              r_71 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, q_71, r_71);
              x_31 = t;
              t = SSLsetAnnotations(x_31, n_71);
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
                  ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL,y_31 = NULL;
                  v_71 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      u_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_71);
                  t_71 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, u_71);
                  y_31 = t;
                  t = SSLsetAnnotations(y_31, t_71);
                  LocalPopChoice(m_34);
                  {
                    ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,z_31 = NULL;
                    z_71 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        x_71 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(z_71);
                    w_71 = t;
                    t = x_71;
                    t = mark_buv_0_0(t);
                    y_71 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, y_71);
                    z_31 = t;
                    t = SSLsetAnnotations(z_31, w_71);
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
static ATerm f_8 (ATerm q_28, ATerm r_28, ATerm s_28, ATerm t)
{
  ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL;
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_28, r_28);
  t = w_8(q_28, r_28, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_34 = ATgetFirst((ATermList) t);
      a_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_28, r_28, (ATerm) ATinsert(CheckATermList(a_72), s_28));
  t = lookup_table_0_1(q_28, t);
  e_72 = t;
  t = (ATerm) ATinsert(CheckATermList(a_72), s_28);
  c_72 = t;
  t = e_72;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(r_28, c_72, d_72, t);
  t = b_72;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL;
  f_72 = t;
  t = term_x_15;
  g_72 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_72);
  h_72 = t;
  t = term_p_34;
  i_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_15, (ATerm)ATmakeAppl(sym_Var_1, f_72), term_p_34);
  t = f_8(g_72, h_72, i_72, t);
  t = f_72;
  return(t);
}
static ATerm i_8 (ATerm o_28, ATerm p_28, ATerm t)
{
  ATerm j_72 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
  t = w_8(o_28, p_28, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_72 = ATgetFirst((ATermList) t);
      {
        ATerm q_34 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_72;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL;
  o_73 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_23 = NULL,p_23 = NULL,s_23 = NULL,y_23 = NULL;
        t = term_x_15;
        y_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_15, o_73);
        t = i_8(y_23, o_73, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_34) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            o_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, p_73);
        p_23 = t;
        t = (ATerm) ATinsert(ATempty, o_23);
        s_23 = t;
        t = SSLsetAnnotations(p_23, s_23);
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
              ATerm j_24 = NULL,k_24 = NULL,n_24 = NULL,t_24 = NULL;
              t = term_x_15;
              t_24 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_15, o_73);
              t = i_8(t_24, o_73, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm w_34 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_34) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  j_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, p_73);
              k_24 = t;
              t = (ATerm) ATinsert(ATempty, j_24);
              n_24 = t;
              t = SSLsetAnnotations(k_24, n_24);
              LocalPopChoice(v_34);
            }
          else
            {
              t = u_34;
              {
                ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,k_25 = NULL;
                t = term_x_15;
                k_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_15, o_73);
                t = i_8(k_25, o_73, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm x_34 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) x_34) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    d_25 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, p_73);
                e_25 = t;
                t = (ATerm) ATinsert(ATempty, d_25);
                f_25 = t;
                t = SSLsetAnnotations(e_25, f_25);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,f_32 = NULL;
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
  x_73 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_73);
  u_73 = t;
  t = v_73;
  t = DeclareBound_0_0(t);
  w_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_73);
  f_32 = t;
  t = SSLsetAnnotations(f_32, u_73);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,h_32 = NULL;
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
      h_32 = t;
      t = SSLsetAnnotations(h_32, a_74);
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
            ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,i_32 = NULL;
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
            i_32 = t;
            t = SSLsetAnnotations(i_32, d_74);
            LocalPopChoice(d_35);
            {
              ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,j_32 = NULL;
              m_74 = t;
              if(match_cons(t, sym_App_2))
                {
                  i_74 = ATgetArgument(t, 0);
                  j_74 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_74);
              h_74 = t;
              t = i_74;
              t = mark_buv_0_0(t);
              k_74 = t;
              t = j_74;
              t = mark_build_vars_0_0(t);
              l_74 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, k_74, l_74);
              j_32 = t;
              t = SSLsetAnnotations(j_32, h_74);
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
                  ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL,k_32 = NULL;
                  p_74 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      o_74 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_74);
                  n_74 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, o_74);
                  k_32 = t;
                  t = SSLsetAnnotations(k_32, n_74);
                  LocalPopChoice(f_35);
                  {
                    ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,l_32 = NULL;
                    t_74 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        r_74 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(t_74);
                    q_74 = t;
                    t = r_74;
                    t = mark_buv_0_0(t);
                    s_74 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, s_74);
                    l_32 = t;
                    t = SSLsetAnnotations(l_32, q_74);
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
      ATerm o_75 = NULL,p_75 = NULL;
      o_75 = t;
      if(match_cons(t, sym_Match_1))
        {
          p_75 = ATgetArgument(t, 0);
          {
            ATerm o_25 = NULL,q_25 = NULL,r_32 = NULL;
            t = SSLgetAnnotations(o_75);
            o_25 = t;
            t = p_75;
            t = mark_match_vars_0_0(t);
            q_25 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, q_25);
            r_32 = t;
            t = SSLsetAnnotations(r_32, o_25);
          }
        }
      else
        {
          ATerm w_25 = NULL,y_25 = NULL,d_33 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              p_75 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_75);
          w_25 = t;
          t = p_75;
          t = mark_build_vars_0_0(t);
          y_25 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, y_25);
          d_33 = t;
          t = SSLsetAnnotations(d_33, w_25);
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
                              ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL;
                              q_75 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  r_75 = ATgetArgument(t, 0);
                                  s_75 = ATgetArgument(t, 1);
                                  t_75 = ATgetArgument(t, 2);
                                  u_75 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = q_75;
                              t = o_7(r_75, s_75, t_75, u_75, t);
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
                                          ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL;
                                          c_76 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              d_76 = ATgetArgument(t, 0);
                                              t = d_76;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  z_75 = ATgetArgument(t, 0);
                                                  a_76 = ATgetArgument(t, 1);
                                                  b_76 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = c_76;
                                              t = n_7(z_75, a_76, b_76, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  d_76 = ATgetArgument(t, 0);
                                                  t = d_76;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      z_75 = ATgetArgument(t, 0);
                                                      a_76 = ATgetArgument(t, 1);
                                                      b_76 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = c_76;
                                                  t = m_7(z_75, a_76, b_76, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      d_76 = ATgetArgument(t, 0);
                                                      e_76 = ATgetArgument(t, 1);
                                                      f_76 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = c_76;
                                                  t = l_7(d_76, e_76, f_76, t);
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
                                                            ATerm p_76 = NULL;
                                                            p_76 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm a_36 = ATgetArgument(t, 0);
                                                                ATerm b_36 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = p_76;
                                                            t = k_7(t);
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
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  c_77 = t;
  t = term_i_36;
  d_77 = t;
  t = (ATerm) ATinsert(ATempty, term_j_36);
  e_77 = t;
  t = SSL_printnl(d_77, e_77);
  t = c_77;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,g_33 = NULL;
  i_77 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      g_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_77);
  f_77 = t;
  t = g_77;
  t = map_1_0(mark_buv_0_0, t);
  h_77 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, h_77);
  g_33 = t;
  t = SSLsetAnnotations(g_33, f_77);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL;
  j_77 = t;
  t = term_i_36;
  k_77 = t;
  t = (ATerm) ATinsert(ATempty, term_k_36);
  l_77 = t;
  t = SSL_printnl(k_77, l_77);
  t = j_77;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,i_33 = NULL,h_33 = NULL;
  t = if_verbose4_1_0(k_12, t);
  b_77 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_77);
  u_76 = t;
  t = v_76;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_76 = ATgetFirst((ATermList) t);
      y_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_76);
  w_76 = t;
  t = y_76;
  t = Cons_2_0(l_12, m_12, t);
  z_76 = t;
  t = (ATerm) ATinsert(CheckATermList(z_76), x_76);
  h_33 = t;
  t = SSLsetAnnotations(h_33, w_76);
  a_77 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_77);
  i_33 = t;
  t = SSLsetAnnotations(i_33, u_76);
  t = if_verbose4_1_0(n_12, t);
  return(t);
}
static ATerm j_8 (ATerm f_40, ATerm g_40, ATerm t)
{
  ATerm m_77 = NULL;
  t = SSL_fputc(f_40, g_40);
  m_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_77);
  return(t);
}
static ATerm k_8 (ATerm b_46, ATerm c_46, ATerm t)
{
  ATerm n_77 = NULL;
  t = SSL_write_term_to_stream_text(b_46, c_46);
  n_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_77);
  return(t);
}
static ATerm m_8 (ATerm j_125 (ATerm), ATerm r_414, ATerm h_46, ATerm t)
{
  ATerm o_77 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_414, term_l_36);
  t = q_8(t);
  o_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_77, h_46);
  t = j_125(t);
  t = fclose_0_0(t);
  t = h_46;
  return(t);
}
static ATerm l_8 (ATerm x_45, ATerm y_45, ATerm t)
{
  ATerm p_77 = NULL;
  t = SSL_write_term_to_stream_baf(x_45, y_45);
  p_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_77);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_36 = ATgetArgument(t, 0);
      if(match_cons(m_36, sym_Stream_1))
        {
          w_77 = ATgetArgument(m_36, 0);
        }
      else
        _fail(t);
      x_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_8(w_77, x_77, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm y_77 = NULL,z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_36 = ATgetArgument(t, 0);
      if(match_cons(n_36, sym_Stream_1))
        {
          b_78 = ATgetArgument(n_36, 0);
        }
      else
        _fail(t);
      c_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(b_78, c_78, t);
  y_77 = t;
  t = term_o_36;
  z_77 = t;
  t = y_77;
  if(match_cons(t, sym_Stream_1))
    {
      a_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_36, y_77);
  t = j_8(z_77, a_78, t);
  return(t);
}
ATerm output_1_0 (ATerm f_146 (ATerm), ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL;
  t = f_146(t);
  r_77 = t;
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_77 = NULL,t_77 = NULL;
        t = term_r_15;
        s_77 = t;
        t = term_r_36;
        t_77 = t;
        t = term_s_36;
        t = w_8(s_77, t_77, t);
        LocalPopChoice(q_36);
      }
    else
      {
        t = p_36;
        t = term_t_36;
      }
  }
  q_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_77, r_77);
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_77 = NULL,v_77 = NULL;
        t = term_r_15;
        u_77 = t;
        t = term_w_36;
        v_77 = t;
        t = term_x_36;
        t = w_8(u_77, v_77, t);
        t = (ATerm) ATmakeAppl(sym__2, q_77, r_77);
        LocalPopChoice(v_36);
        if(match_cons(t, sym__2))
          {
            ATerm y_36 = ATgetArgument(t, 0);
            ATerm z_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_8(p_12, q_77, r_77, t);
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
        t = m_8(q_12, q_77, r_77, t);
      }
  }
  return(t);
}
static ATerm q_78 (ATerm k_78, ATerm t)
{
  t = SSL_fclose(k_78);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_78 = NULL,o_78 = NULL;
  o_78 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_78 = ATgetArgument(t, 0);
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_78);
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
            t = q_78(o_78, t);
          }
      }
    }
  else
    {
      t = q_78(o_78, t);
    }
  return(t);
}
static ATerm n_8 (ATerm d_46, ATerm t)
{
  t = SSL_read_term_from_stream(d_46);
  return(t);
}
static ATerm o_8 (ATerm l_38, ATerm m_38, ATerm t)
{
  t = SSL_strcat(l_38, m_38);
  return(t);
}
static ATerm p_8 (ATerm h_40, ATerm i_40, ATerm t)
{
  ATerm r_78 = NULL;
  t = SSL_fopen(h_40, i_40);
  r_78 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_78);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_78 = NULL;
  t = SSL_stdin_stream();
  s_78 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_78);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_78 = NULL;
  t = SSL_stdout_stream();
  t_78 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_78);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_78 = NULL;
  t = SSL_stderr_stream();
  u_78 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_78);
  return(t);
}
static ATerm b_80 (ATerm a_79, ATerm t)
{
  ATerm b_79 = NULL;
  t = SSL_explode_term(a_79);
  if(match_cons(t, sym__2))
    {
      ATerm e_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_37 = ATgetArgument(t, 1);
        if(((ATgetType(f_37) == AT_LIST) && !(ATisEmpty(f_37))))
          {
            b_79 = ATgetFirst((ATermList) f_37);
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
  t = b_79;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_79;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_79;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_79;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_80 (ATerm e_79, ATerm f_79, ATerm g_79, ATerm t)
{
  ATerm h_79 = NULL,i_79 = NULL,j_79 = NULL,m_79 = NULL,m_33 = NULL;
  t = SSLgetAnnotations(g_79);
  j_79 = t;
  t = e_79;
  if(match_cons(t, sym_Path_1))
    {
      m_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_79, f_79);
  m_33 = t;
  t = SSLsetAnnotations(m_33, j_79);
  if(match_cons(t, sym__2))
    {
      h_79 = ATgetArgument(t, 0);
      i_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_8(h_79, i_79, t);
  return(t);
}
static ATerm d_80 (ATerm o_79, ATerm p_79, ATerm q_79, ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL,w_79 = NULL,n_33 = NULL;
  t = SSLgetAnnotations(q_79);
  t_79 = t;
  t = SSL_is_string(o_79);
  w_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_79, p_79);
  n_33 = t;
  t = SSLsetAnnotations(n_33, t_79);
  if(match_cons(t, sym__2))
    {
      r_79 = ATgetArgument(t, 0);
      s_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_8(r_79, s_79, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL;
  y_79 = t;
  if(match_cons(t, sym__2))
    {
      z_79 = ATgetArgument(t, 0);
      a_80 = ATgetArgument(t, 1);
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_80(y_79, t);
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
                  t = c_80(z_79, a_80, y_79, t);
                  LocalPopChoice(k_37);
                }
              else
                {
                  t = j_37;
                  t = d_80(z_79, a_80, y_79, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_80(y_79, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL,m_80 = NULL;
  m_80 = t;
  {
    ATerm l_37 = t;
    int m_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_80, term_n_37);
        t = q_8(t);
        LocalPopChoice(m_37);
      }
    else
      {
        t = l_37;
        {
          ATerm t_26 = NULL,u_26 = NULL;
          t = term_o_37;
          u_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_37, m_80);
          t = o_8(u_26, m_80, t);
          t_26 = t;
          t = SSL_perror(t_26);
          _fail(t);
        }
      }
  }
  g_80 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(h_80, t);
  f_80 = t;
  t = g_80;
  t = fclose_0_0(t);
  t = f_80;
  return(t);
}
ATerm input_1_0 (ATerm g_146 (ATerm), ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_80 = NULL,q_80 = NULL;
      t = term_r_15;
      p_80 = t;
      t = term_r_37;
      q_80 = t;
      t = term_s_37;
      t = w_8(p_80, q_80, t);
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      t = term_t_37;
    }
  t = ReadFromFile_0_0(t);
  t = g_146(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL;
  t = term_r_15;
  r_80 = t;
  t = term_u_37;
  s_80 = t;
  t = term_v_37;
  t = w_8(r_80, s_80, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL;
  u_80 = t;
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_80;
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
            t = u_80;
          }
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
        t = (ATerm) ATinsert(ATempty, u_80);
      }
  }
  v_80 = t;
  t = term_t_36;
  w_80 = t;
  t = SSL_printnl(w_80, v_80);
  t = u_80;
  return(t);
}
ATerm map_1_0 (ATerm n_126 (ATerm), ATerm t)
{
  static ATerm o_81 (ATerm t);
  static ATerm o_81 (ATerm t)
  {
    ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL;
    l_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_81;
      }
    else
      {
        ATerm b_27 = NULL,f_27 = NULL,g_27 = NULL,q_33 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_81 = ATgetFirst((ATermList) t);
            n_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_81);
        b_27 = t;
        t = m_81;
        t = n_126(t);
        f_27 = t;
        t = n_81;
        t = o_81(t);
        g_27 = t;
        t = (ATerm) ATinsert(CheckATermList(g_27), f_27);
        q_33 = t;
        t = SSLsetAnnotations(q_33, b_27);
      }
    return(t);
  }
  t = o_81(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_81 = ATgetFirst((ATermList) t);
      s_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_81 = NULL,x_81 = NULL;
        static ATerm r_12 (ATerm t);
        static ATerm r_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_81)), not_null(x_81));
          return(t);
        }
        t = s_81;
        t = r_0(t);
        if(((w_81 != NULL) && (w_81 != t)))
          _fail(t);
        else
          w_81 = t;
        t = r_81;
        t = p_0(t);
        if(((x_81 != NULL) && (x_81 != t)))
          _fail(t);
        else
          x_81 = t;
        t = s_81;
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
static ATerm t_12 (ATerm t)
{
  ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL,s_33 = NULL;
  i_82 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_82);
  g_82 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_82);
  s_33 = t;
  t = SSLsetAnnotations(s_33, g_82);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm o_82 = NULL;
  o_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_82), term_b_38);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm g_149 (ATerm), ATerm h_149 (ATerm), ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL;
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_82 = NULL,f_82 = NULL;
      t = term_r_15;
      e_82 = t;
      t = term_u_37;
      f_82 = t;
      t = term_v_37;
      t = w_8(e_82, f_82, t);
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
      t = fetch_1_0(t_12, t);
    }
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_149(t);
        t = echo_0_0(t);
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
      }
  }
  t = term_g_38;
  t = echo_0_0(t);
  t = term_h_38;
  c_82 = t;
  t = term_i_38;
  d_82 = t;
  t = term_j_38;
  t = w_8(c_82, d_82, t);
  t = reverse_acc_2_0(_id, u_12, t);
  t = map_1_0(v_12, t);
  t = term_k_38;
  t = echo_0_0(t);
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_149(t);
        {
          ATerm p_38 = t;
          int q_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_82 = NULL;
              p_82 = t;
              t = SSL_is_string(p_82);
              t = p_82;
              LocalPopChoice(q_38);
              {
                ATerm q_82 = NULL;
                q_82 = t;
                t = (ATerm) ATinsert(ATempty, q_82);
              }
            }
          else
            {
              t = p_38;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
      }
  }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,u_33 = NULL;
  z_82 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_82);
  x_82 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_82);
  u_33 = t;
  t = SSLsetAnnotations(u_33, x_82);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_82 = NULL;
  u_82 = t;
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_82 = NULL,w_82 = NULL;
        t = term_r_15;
        v_82 = t;
        t = term_u_37;
        w_82 = t;
        t = term_v_37;
        t = w_8(v_82, w_82, t);
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        t = fetch_1_0(w_12, t);
      }
  }
  t = u_82;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm h_83 = NULL;
  h_83 = t;
  if(match_string(t, "-k"))
    {
      t = h_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_83;
    }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL;
  i_83 = t;
  t = SSL_string_to_int(i_83);
  j_83 = t;
  t = term_t_38;
  k_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_38, j_83);
  t = z_8(k_83, j_83, t);
  t = i_83;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_u_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_13, c_13, d_13, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm m_83 = NULL;
  m_83 = t;
  if(match_string(t, "-S"))
    {
      t = m_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_83;
    }
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm n_83 = NULL,o_83 = NULL;
  t = term_s_15;
  n_83 = t;
  t = term_v_38;
  o_83 = t;
  t = term_w_38;
  t = z_8(n_83, o_83, t);
  t = term_x_38;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_y_38;
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
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL;
  p_83 = t;
  t = SSL_string_to_int(p_83);
  q_83 = t;
  t = term_s_15;
  r_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_15, q_83);
  t = z_8(r_83, q_83, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_83);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_z_38;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL;
  t = term_a_39;
  s_83 = t;
  t = term_a_38;
  t_83 = t;
  t = term_b_39;
  t = z_8(s_83, t_83, t);
  t = term_c_39;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_13, f_13, g_13, t);
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
      {
        ATerm g_39 = t;
        int h_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_13, i_13, j_13, t);
            LocalPopChoice(h_39);
          }
        else
          {
            t = g_39;
            t = Option_3_0(n_13, q_13, r_13, t);
          }
      }
    }
  return(t);
}
static ATerm z_8 (ATerm m_82, ATerm n_82, ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL;
  t = term_r_15;
  u_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_15, m_82, n_82);
  t = lookup_table_0_1(u_83, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(m_82, n_82, v_83, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_15, m_82, n_82);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_83 = NULL,a_84 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL;
      t = term_a_38;
      t = g_0(t);
      b_84 = t;
      t = term_h_38;
      c_84 = t;
      t = term_i_38;
      d_84 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_38, term_i_38, b_84);
      t = x_8(c_84, d_84, b_84, t);
      _fail(t);
    }
  else
    {
      ATerm g_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_83 = ATgetFirst((ATermList) t);
          a_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_83;
      t = d_0(t);
      t = term_a_38;
      t = f_0(t);
      g_84 = t;
      t = (ATerm) ATinsert(CheckATermList(a_84), g_84);
    }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm i_84 = NULL;
  i_84 = t;
  if(match_string(t, "-o"))
    {
      t = i_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_84;
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm j_84 = NULL,k_84 = NULL;
  j_84 = t;
  t = term_r_36;
  k_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_36, j_84);
  t = z_8(k_84, j_84, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_84);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_i_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_13, x_13, y_13, t);
  return(t);
}
static ATerm x_8 (ATerm d_28, ATerm e_28, ATerm c_28, ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL;
  m_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_28, e_28);
  {
    ATerm j_39 = t;
    int k_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_39 = ATgetArgument(t, 0);
            ATerm m_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_28, e_28);
        t = w_8(d_28, e_28, t);
        LocalPopChoice(k_39);
      }
    else
      {
        t = j_39;
        t = (ATerm) ATempty;
      }
  }
  n_84 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_28, e_28, (ATerm) ATinsert(CheckATermList(n_84), c_28));
  t = lookup_table_0_1(d_28, t);
  q_84 = t;
  t = (ATerm) ATinsert(CheckATermList(n_84), c_28);
  o_84 = t;
  t = q_84;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(e_28, o_84, p_84, t);
  t = m_84;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_85 = NULL,c_85 = NULL,d_85 = NULL;
      t = term_a_38;
      t = n_0(t);
      b_85 = t;
      t = term_h_38;
      c_85 = t;
      t = term_i_38;
      d_85 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_38, term_i_38, b_85);
      t = x_8(c_85, d_85, b_85, t);
      _fail(t);
    }
  else
    {
      ATerm h_85 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_84 = ATgetFirst((ATermList) t);
          y_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_84;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_84 = ATgetFirst((ATermList) t);
          a_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_84;
      t = j_0(t);
      t = z_84;
      t = l_0(t);
      h_85 = t;
      t = (ATerm) ATinsert(CheckATermList(a_85), h_85);
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm j_85 = NULL;
  j_85 = t;
  if(match_string(t, "-i"))
    {
      t = j_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_85;
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm k_85 = NULL,l_85 = NULL;
  k_85 = t;
  t = term_r_37;
  l_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, k_85);
  t = z_8(l_85, k_85, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_85);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = term_n_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_13, e_14, f_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL,p_85 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_38;
  t = whoami_0_0(t);
  m_85 = t;
  t = term_i_36;
  o_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_39), m_85);
  p_85 = t;
  t = SSL_printnl(o_85, p_85);
  t = term_p_39;
  n_85 = t;
  t = SSL_exit(n_85);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL;
  t = term_r_15;
  q_85 = t;
  t = term_u_37;
  r_85 = t;
  t = term_v_37;
  t = w_8(q_85, r_85, t);
  return(t);
}
static ATerm r_8 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_47, l_47);
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
      t = SSL_addr(k_47, l_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL,v_85 = NULL;
  t_85 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_85;
      t = z_133(t);
    }
  else
    {
      ATerm y_85 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_85 = ATgetFirst((ATermList) t);
          v_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_85;
      t = foldr_2_0(z_133, a_134, t);
      y_85 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_85, y_85);
      t = a_134(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_v_38;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_8(v_27, w_27, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_86 = NULL,l_27 = NULL,n_27 = NULL;
  t = times_0_0(t);
  n_27 = t;
  t = SSL_explode_term(n_27);
  if(match_cons(t, sym__2))
    {
      ATerm s_39 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_27;
  t = foldr_2_0(g_14, i_14, t);
  b_86 = t;
  t = SSL_TicksToSeconds(b_86);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL;
  s_86 = t;
  if(match_cons(t, sym__2))
    {
      t_86 = ATgetArgument(t, 0);
      u_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_86;
        if((t_86 != t))
          {
            _fail(t);
          }
        t = s_86;
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        t = (ATerm) ATmakeAppl(sym__2, t_86, u_86);
        {
          ATerm v_39 = t;
          int w_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_86, u_86);
              LocalPopChoice(w_39);
            }
          else
            {
              t = v_39;
              t = SSL_gtr(t_86, u_86);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_86, u_86);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_154 (ATerm), ATerm t)
{
  ATerm y_86 = NULL;
  y_86 = t;
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL;
        t = term_r_15;
        b_87 = t;
        t = term_s_15;
        c_87 = t;
        t = term_v_15;
        t = w_8(b_87, c_87, t);
        a_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_87, term_p_39);
        t = geq_0_0(t);
        t = y_86;
        t = v_154(t);
        LocalPopChoice(y_39);
      }
    else
      {
        t = x_39;
        t = y_86;
      }
  }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL,h_87 = NULL,i_87 = NULL;
  t = run_time_0_0(t);
  e_87 = t;
  t = term_a_38;
  t = whoami_0_0(t);
  f_87 = t;
  t = term_i_36;
  h_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_40), e_87), term_z_39), f_87);
  i_87 = t;
  t = SSL_printnl(h_87, i_87);
  t = (ATerm) ATmakeAppl(sym__2, term_i_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_40), e_87), term_z_39), f_87));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_87 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_38;
  j_87 = t;
  t = SSL_exit(j_87);
  return(t);
}
static ATerm a_9 (ATerm s_32, ATerm t_32, ATerm u_32, ATerm t)
{
  ATerm k_87 = NULL;
  t = SSL_hashtable_put(u_32, s_32, t_32);
  k_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_87);
  return(t);
}
ATerm lookup_table_0_1 (ATerm p_29, ATerm t)
{
  ATerm t_87 = NULL;
  t = table_hashtable_0_0(t);
  t_87 = t;
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_28 = NULL;
        t = t_87;
        if(match_cons(t, sym_Hashtable_1))
          {
            u_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_9(p_29, u_28, t);
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        {
          ATerm h_29 = NULL;
          t = p_29;
          t = table_create_0_0(t);
          t = t_87;
          if(match_cons(t, sym_Hashtable_1))
            {
              h_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_9(p_29, h_29, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm a_33, ATerm b_33, ATerm t)
{
  ATerm w_87 = NULL;
  t = SSL_hashtable_create(a_33, b_33);
  w_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_87);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_87 = NULL,y_87 = NULL,z_87 = NULL,b_88 = NULL,c_88 = NULL;
  x_87 = t;
  t = term_d_40;
  b_88 = t;
  t = term_e_40;
  c_88 = t;
  t = x_87;
  t = new_hashtable_0_2(b_88, c_88, t);
  y_87 = t;
  t = x_87;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(x_87, y_87, z_87, t);
  t = x_87;
  return(t);
}
static ATerm t_8 (ATerm x_32, ATerm y_32, ATerm t)
{
  ATerm d_88 = NULL;
  t = SSL_hashtable_remove(y_32, x_32);
  d_88 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_88);
  return(t);
}
static ATerm u_8 (ATerm c_33, ATerm t)
{
  ATerm e_88 = NULL;
  t = SSL_hashtable_destroy(c_33);
  e_88 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_88);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_88 = NULL;
  t = SSL_table_hashtable();
  f_88 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_88);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL;
  g_88 = t;
  t = table_hashtable_0_0(t);
  h_88 = t;
  t = lookup_table_0_1(g_88, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_8(j_88, t);
  t = h_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_8(g_88, i_88, t);
  t = g_88;
  return(t);
}
ATerm fetch_1_0 (ATerm v_126 (ATerm), ATerm t)
{
  static ATerm g_89 (ATerm t);
  static ATerm g_89 (ATerm t)
  {
    ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
    d_89 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_89 = ATgetFirst((ATermList) t);
        f_89 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_40 = t;
      int k_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_29 = NULL,r_29 = NULL,w_33 = NULL;
          t = SSLgetAnnotations(d_89);
          n_29 = t;
          t = e_89;
          t = v_126(t);
          r_29 = t;
          t = (ATerm) ATinsert(CheckATermList(f_89), r_29);
          w_33 = t;
          t = SSLsetAnnotations(w_33, n_29);
          LocalPopChoice(k_40);
        }
      else
        {
          t = j_40;
          {
            ATerm c_30 = NULL,g_30 = NULL,x_33 = NULL;
            t = SSLgetAnnotations(d_89);
            c_30 = t;
            t = f_89;
            t = g_89(t);
            g_30 = t;
            t = (ATerm) ATinsert(CheckATermList(g_30), e_89);
            x_33 = t;
            t = SSLsetAnnotations(x_33, c_30);
          }
        }
    }
    return(t);
  }
  t = g_89(t);
  return(t);
}
static ATerm b_9 (ATerm v_32, ATerm w_32, ATerm t)
{
  t = SSL_hashtable_get(w_32, v_32);
  return(t);
}
static ATerm w_8 (ATerm w_29, ATerm x_29, ATerm t)
{
  ATerm j_89 = NULL;
  t = lookup_table_0_1(w_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_9(x_29, j_89, t);
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
  ATerm l_89 = NULL,m_89 = NULL;
  t = term_l_40;
  l_89 = t;
  t = term_a_38;
  m_89 = t;
  t = term_m_40;
  t = z_8(l_89, m_89, t);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_n_40;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL;
  t = term_l_40;
  p_89 = t;
  t = term_a_38;
  q_89 = t;
  t = term_m_40;
  t = z_8(p_89, q_89, t);
  t = term_o_40;
  n_89 = t;
  t = term_a_38;
  o_89 = t;
  t = term_p_40;
  t = z_8(n_89, o_89, t);
  t = term_q_40;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_r_40;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_14, m_14, o_14, t);
      LocalPopChoice(t_40);
    }
  else
    {
      t = s_40;
      t = Option_3_0(p_14, s_14, t_14, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm t)
{
  ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,a_34 = NULL;
  w_89 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_89 = ATgetFirst((ATermList) t);
      t_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_89);
  r_89 = t;
  t = s_89;
  t = y_92(t);
  u_89 = t;
  t = t_89;
  t = z_92(t);
  v_89 = t;
  t = (ATerm) ATinsert(CheckATermList(v_89), u_89);
  a_34 = t;
  t = SSLsetAnnotations(a_34, r_89);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_149 (ATerm), ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,g_90 = NULL,h_90 = NULL,c_34 = NULL;
  b_90 = t;
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_40;
        t = b_149(t);
        LocalPopChoice(v_40);
      }
    else
      {
        t = u_40;
      }
  }
  t = b_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_90 = ATgetFirst((ATermList) t);
      e_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_90);
  c_90 = t;
  t = term_u_37;
  h_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_37, d_90);
  t = z_8(h_90, d_90, t);
  t = e_90;
  {
    static ATerm r_90 (ATerm t);
    static ATerm r_90 (ATerm t)
    {
      ATerm x_40 = t;
      int y_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_40 = t;
          int a_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_90 = NULL;
              k_90 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_90;
              LocalPopChoice(a_41);
            }
          else
            {
              t = z_40;
              t = b_149(t);
              t = Cons_2_0(_id, r_90, t);
            }
          LocalPopChoice(y_40);
        }
      else
        {
          t = x_40;
          {
            ATerm n_90 = NULL,o_90 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_90 = ATgetFirst((ATermList) t);
                o_90 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_90), (ATerm) ATmakeAppl(sym_Undefined_1, n_90));
          }
        }
      return(t);
    }
    t = r_90(t);
  }
  g_90 = t;
  t = (ATerm) ATinsert(CheckATermList(g_90), (ATerm) ATmakeAppl(sym_Program_1, d_90));
  c_34 = t;
  t = SSLsetAnnotations(c_34, c_90);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm f_91 = NULL;
  f_91 = t;
  if(match_string(t, "--help"))
    {
      t = f_91;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_91;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_91;
        }
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  ATerm g_91 = NULL,i_91 = NULL;
  t = term_b_41;
  g_91 = t;
  t = term_a_38;
  i_91 = t;
  t = term_c_41;
  t = z_8(g_91, i_91, t);
  t = term_d_41;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_e_41;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm y_148 (ATerm), ATerm z_148 (ATerm), ATerm a_149 (ATerm), ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL;
  y_90 = t;
  t = term_h_38;
  z_90 = t;
  t = term_f_41;
  t = lookup_table_0_1(z_90, t);
  d_91 = t;
  t = term_i_38;
  a_91 = t;
  t = (ATerm) ATempty;
  b_91 = t;
  t = d_91;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(a_91, b_91, c_91, t);
  t = y_90;
  {
    static ATerm u_14 (ATerm t);
    static ATerm u_14 (ATerm t)
    {
      ATerm g_41 = t;
      int h_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_148(t);
          LocalPopChoice(h_41);
        }
      else
        {
          t = g_41;
          {
            ATerm i_41 = t;
            int j_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_14, w_14, x_14, t);
                LocalPopChoice(j_41);
              }
            else
              {
                t = i_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_14, t);
  }
  {
    ATerm k_41 = t;
    int l_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_91 = NULL;
        y_91 = t;
        {
          ATerm m_41 = t;
          int n_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_30 = NULL;
              t = y_91;
              {
                ATerm o_41 = t;
                int p_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_30 = NULL,v_30 = NULL;
                    t = term_r_15;
                    u_30 = t;
                    t = term_b_41;
                    v_30 = t;
                    t = term_q_41;
                    t = w_8(u_30, v_30, t);
                    LocalPopChoice(p_41);
                  }
                else
                  {
                    t = o_41;
                    t = fetch_1_0(y_14, t);
                  }
              }
              t = y_91;
              t = z_148(t);
              t = term_v_38;
              t_30 = t;
              t = SSL_exit(t_30);
              LocalPopChoice(n_41);
            }
          else
            {
              t = m_41;
              {
                ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
                t = term_r_15;
                a_31 = t;
                t = term_l_40;
                b_31 = t;
                t = term_r_41;
                t = w_8(a_31, b_31, t);
                t = y_91;
                t = a_149(t);
                t = term_v_38;
                z_30 = t;
                t = SSL_exit(z_30);
              }
            }
        }
        LocalPopChoice(l_41);
      }
    else
      {
        t = k_41;
        {
          ATerm s_41 = t;
          int t_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_91 = NULL,a_92 = NULL,b_92 = NULL;
              static ATerm a_15 (ATerm t);
              static ATerm a_15 (ATerm t)
              {
                ATerm c_92 = NULL,d_92 = NULL,e_92 = NULL,e_34 = NULL;
                e_92 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_92 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_92);
                c_92 = t;
                t = d_92;
                if(((w_90 != NULL) && (w_90 != t)))
                  _fail(t);
                else
                  w_90 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_92);
                e_34 = t;
                t = SSLsetAnnotations(e_34, c_92);
                return(t);
              }
              t = fetch_1_0(a_15, t);
              t = term_i_36;
              a_92 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_90)), term_u_41);
              b_92 = t;
              t = SSL_printnl(a_92, b_92);
              t = (ATerm) ATmakeAppl(sym__2, term_i_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_90)), term_u_41));
              t = z_148(t);
              t = term_p_39;
              z_91 = t;
              t = SSL_exit(z_91);
              LocalPopChoice(t_41);
            }
          else
            {
              t = s_41;
            }
        }
      }
  }
  x_90 = t;
  t = term_h_38;
  t = table_destroy_0_0(t);
  t = x_90;
  return(t);
}
ATerm option_wrap_5_0 (ATerm z_145 (ATerm), ATerm a_146 (ATerm), ATerm b_146 (ATerm), ATerm c_146 (ATerm), ATerm d_146 (ATerm), ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL,n_92 = NULL,o_92 = NULL;
  t = parse_options_3_0(z_145, a_146, b_146, t);
  j_92 = t;
  t = term_v_41;
  t = table_create_0_0(t);
  t = term_v_41;
  k_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_41, term_w_41, j_92);
  t = lookup_table_0_1(k_92, t);
  o_92 = t;
  t = term_w_41;
  l_92 = t;
  t = o_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_9(l_92, j_92, n_92, t);
  t = j_92;
  t = c_146(t);
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_146(t);
        t = report_success_0_0(t);
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm z_41 = t;
  int a_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
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
                  t = Option_3_0(j_15, l_15, m_15, t);
                  LocalPopChoice(e_42);
                }
              else
                {
                  t = d_42;
                  {
                    ATerm f_42 = t;
                    int g_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(g_42);
                      }
                    else
                      {
                        t = f_42;
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
static ATerm e_15 (ATerm t)
{
  t = input_1_0(n_15, t);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm r_92 = NULL,s_92 = NULL;
  t = term_w_36;
  r_92 = t;
  t = term_a_38;
  s_92 = t;
  t = term_h_42;
  t = z_8(r_92, s_92, t);
  t = term_i_42;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  t = term_j_42;
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = output_1_0(mark_bound_unbound_vars_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(b_15, default_system_usage_0_0, default_system_about_0_0, _id, e_15, t);
  return(t);
}
