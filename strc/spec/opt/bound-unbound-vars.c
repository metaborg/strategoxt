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
Symbol sym_Overlay_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
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
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
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
}
ATerm term_p_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_k_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_r_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_a_34;
ATerm term_u_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_k_33;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_e_19;
ATerm term_r_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Defined_2, term_l_18, term_m_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Defined_2, term_y_27, term_d_28);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Defined_2, term_u_29, term_m_18);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__2, term_y_14, term_a_35);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_35);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_p_14);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_c_36);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_r_36);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym__2, term_r_35, term_s_35);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym__2, term_g_37, term_p_14);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__2, term_j_37, term_p_14);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym__2, term_r_36, term_p_14);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__3, term_r_35, term_s_35, (ATerm) ATempty);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_g_37);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym__2, term_u_38, term_p_14);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm c_117 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm v_84 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm u_84 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm t_84 (ATerm), ATerm t);
static ATerm n_7 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm f_87 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm o_7 (ATerm s_23, ATerm t_23, ATerm u_23, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm p_7 (ATerm m_23, ATerm q_23, ATerm o_23, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm q_7 (ATerm g_23, ATerm k_23, ATerm i_23, ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm r_7 (ATerm e_22, ATerm f_22, ATerm g_22, ATerm i_22, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm s_7 (ATerm p_20, ATerm q_20, ATerm o_20, ATerm t);
static ATerm r_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm t_7 (ATerm n_26, ATerm m_26, ATerm t);
static ATerm u_7 (ATerm y_28, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm c_21, ATerm t);
ATerm tboundin_3_0 (ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm y_7 (ATerm a_99 (ATerm), ATerm w_49, ATerm v_49, ATerm t);
ATerm foldr_3_0 (ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm t);
static ATerm z_7 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm a_50, ATerm z_49, ATerm t);
static ATerm a_8 (ATerm v_98 (ATerm), ATerm u_49, ATerm t_49, ATerm t);
ATerm at_end_1_0 (ATerm g_95 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_57 (ATerm q_56, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm f_8 (ATerm w_631, ATerm b_632, ATerm l_61, ATerm t);
ATerm while_not_2_0 (ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm t);
ATerm for_3_0 (ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm c_62 (ATerm v_59, ATerm y_59, ATerm a_60, ATerm t);
static ATerm z_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm r_10 (ATerm t);
ATerm free_vars_3_0 (ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm d_115 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm w_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm h_8 (ATerm e_85 (ATerm), ATerm g_24, ATerm e_24, ATerm t);
static ATerm d_11 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm i_8 (ATerm p_25, ATerm q_25, ATerm t);
ATerm end_scope_1_0 (ATerm b_85 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm a_85 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm t);
static ATerm h_11 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm j_8 (ATerm x_25, ATerm y_25, ATerm z_25, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm m_8 (ATerm v_25, ATerm w_25, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm o_8 (ATerm k_35, ATerm l_35, ATerm t);
static ATerm p_8 (ATerm w_40, ATerm x_40, ATerm t);
static ATerm r_8 (ATerm m_93 (ATerm), ATerm f_344, ATerm c_41, ATerm t);
static ATerm q_8 (ATerm s_40, ATerm t_40, ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_108 (ATerm), ATerm t);
static ATerm s_79 (ATerm m_79, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_8 (ATerm y_40, ATerm t);
static ATerm t_8 (ATerm d_34, ATerm e_34, ATerm t);
static ATerm u_8 (ATerm m_35, ATerm n_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_81 (ATerm c_80, ATerm t);
static ATerm e_81 (ATerm g_80, ATerm h_80, ATerm i_80, ATerm t);
static ATerm f_81 (ATerm q_80, ATerm r_80, ATerm s_80, ATerm t);
static ATerm v_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_94 (ATerm), ATerm t);
static ATerm a_9 (ATerm d_27, ATerm e_27, ATerm t);
ATerm if_verbose2_1_0 (ATerm a_117 (ATerm), ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_9 (ATerm p_55, ATerm q_55, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_9 (ATerm k_25, ATerm l_25, ATerm j_25, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_8 (ATerm c_42, ATerm d_42, ATerm t);
ATerm foldr_2_0 (ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm z_12 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_116 (ATerm), ATerm t);
static ATerm a_13 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_13 (ATerm t);
ATerm need_help_1_0 (ATerm m_109 (ATerm), ATerm t);
static ATerm e_9 (ATerm r_28, ATerm s_28, ATerm t_28, ATerm t);
static ATerm f_9 (ATerm u_28, ATerm v_28, ATerm t);
ATerm lookup_table_0_1 (ATerm w_26, ATerm t);
ATerm new_hashtable_0_2 (ATerm z_28, ATerm a_29, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_8 (ATerm w_28, ATerm x_28, ATerm t);
static ATerm z_8 (ATerm b_29, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm p_94 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm g_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_112 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
ATerm parse_options_1_0 (ATerm q_112 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm t);
static ATerm f_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
ATerm iowrap_3_0 (ATerm x_108 (ATerm), ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm t);
static ATerm o_14 (ATerm t);
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
  t = term_p_14;
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
ATerm if_verbose4_1_0 (ATerm c_117 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL;
        t = term_x_14;
        a_1 = t;
        t = term_y_14;
        b_1 = t;
        t = term_z_14;
        t = a_9(a_1, b_1, t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_a_15);
        t = geq_0_0(t);
        t = x_0;
        t = c_117(t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        t = x_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,t_6 = NULL;
  static ATerm o_0 (ATerm t)
  {
    ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,c_7 = NULL,b_7 = NULL;
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
    t = v_84(t);
    w_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_1, u_1, v_1);
    b_7 = t;
    t = SSLsetAnnotations(b_7, s_1);
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
    t = v_84(t);
    q_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_1, q_1, m_1);
    c_7 = t;
    t = SSLsetAnnotations(c_7, j_1);
    return(t);
  }
  static ATerm p_0 (ATerm t)
  {
    ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,d_7 = NULL;
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
    t = v_84(t);
    d_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, a_2, b_2, d_2);
    d_7 = t;
    t = SSLsetAnnotations(d_7, z_1);
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
ATerm mark_lchoice_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,w_7 = NULL;
  static ATerm q_0 (ATerm t)
  {
    ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,n_2 = NULL,o_2 = NULL,x_7 = NULL;
    o_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        k_2 = ATgetArgument(t, 0);
        l_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_2);
    j_2 = t;
    t = k_2;
    t = u_84(t);
    n_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, n_2, l_2);
    x_7 = t;
    t = SSLsetAnnotations(x_7, j_2);
    return(t);
  }
  static ATerm r_0 (ATerm t)
  {
    ATerm p_2 = NULL,r_2 = NULL,s_2 = NULL,w_2 = NULL,x_2 = NULL,b_8 = NULL;
    x_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        r_2 = ATgetArgument(t, 0);
        s_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_2);
    p_2 = t;
    t = s_2;
    t = u_84(t);
    w_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, r_2, w_2);
    b_8 = t;
    t = SSLsetAnnotations(b_8, p_2);
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
  w_7 = t;
  t = SSLsetAnnotations(w_7, f_2);
  t = abstract_choice_2_0(q_0, r_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  ATerm z_2 = NULL,b_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
  j_3 = t;
  t = save_MarkVar_0_0(t);
  z_2 = t;
  t = j_3;
  t = w_84(t);
  i_3 = t;
  t = save_MarkVar_0_0(t);
  b_3 = t;
  t = term_b_15;
  t = table_destroy_0_0(t);
  t = term_b_15;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_15, z_2);
  t = t_7(k_3, z_2, t);
  t = i_3;
  t = x_84(t);
  h_3 = t;
  t = b_3;
  t = isect_MarkVar_0_0(t);
  t = h_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,g_8 = NULL;
  static ATerm y_0 (ATerm t)
  {
    ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL,k_8 = NULL;
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
    t = s_3;
    t = t_84(t);
    u_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, u_3, t_3);
    k_8 = t;
    t = SSLsetAnnotations(k_8, r_3);
    return(t);
  }
  static ATerm c_1 (ATerm t)
  {
    ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,e_4 = NULL,h_4 = NULL,l_8 = NULL;
    h_4 = t;
    if(match_cons(t, sym_Choice_2))
      {
        y_3 = ATgetArgument(t, 0);
        z_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_4);
    x_3 = t;
    t = z_3;
    t = t_84(t);
    e_4 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, y_3, e_4);
    l_8 = t;
    t = SSLsetAnnotations(l_8, x_3);
    return(t);
  }
  p_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      n_3 = ATgetArgument(t, 0);
      o_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_3);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, n_3, o_3);
  g_8 = t;
  t = SSLsetAnnotations(g_8, m_3);
  t = abstract_choice_2_0(y_0, c_1, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm j_4 = NULL,z_4 = NULL,b_5 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,i_5 = NULL,k_5 = NULL,l_5 = NULL,q_9 = NULL,o_9 = NULL;
  z_4 = t;
  t = save_MarkVar_0_0(t);
  j_4 = t;
  t = z_4;
  if(match_cons(t, sym_Rec_2))
    {
      i_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_4);
  g_5 = t;
  t = k_5;
  t = mark_buv_0_0(t);
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, i_5, l_5);
  o_9 = t;
  t = SSLsetAnnotations(o_9, g_5);
  t = j_4;
  t = isect_MarkVar_0_0(t);
  t = z_4;
  if(match_cons(t, sym_Rec_2))
    {
      c_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_4);
  b_5 = t;
  t = e_5;
  t = mark_buv_0_0(t);
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, c_5, f_5);
  q_9 = t;
  t = SSLsetAnnotations(q_9, b_5);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm m_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL,y_5 = NULL,z_5 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,c_10 = NULL,b_10 = NULL,a_10 = NULL;
  m_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_6 = ATgetArgument(t, 0);
      i_6 = ATgetArgument(t, 1);
      k_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_6);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, h_6, i_6, k_6);
  a_10 = t;
  t = SSLsetAnnotations(a_10, g_6);
  l_6 = t;
  t = save_MarkVar_0_0(t);
  m_5 = t;
  t = l_6;
  if(match_cons(t, sym_PrimT_3))
    {
      y_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
      d_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_6);
  v_5 = t;
  t = d_6;
  t = map_1_0(a_3, t);
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, y_5, z_5, e_6);
  b_10 = t;
  t = SSLsetAnnotations(b_10, v_5);
  f_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
      r_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_6);
  o_5 = t;
  t = q_5;
  t = mark_buv_0_0(t);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, p_5, s_5, r_5);
  c_10 = t;
  t = SSLsetAnnotations(c_10, o_5);
  t_5 = t;
  t = m_5;
  t = isect_MarkVar_0_0(t);
  t = t_5;
  return(t);
}
ATerm alltd_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  static ATerm o_6 (ATerm t)
  {
    ATerm c_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_87(t);
        LocalPopChoice(e_15);
      }
    else
      {
        t = c_15;
        t = SRTS_all(o_6, t);
      }
    return(t);
  }
  t = o_6(t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm s_10 = NULL,u_10 = NULL,x_10 = NULL,y_10 = NULL;
  u_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      x_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
      s_10 = ATgetArgument(t, 2);
      {
        ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL,i_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,m_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,y_2 = NULL,e_3 = NULL,k_10 = NULL,j_10 = NULL,i_10 = NULL;
        t = SSLgetAnnotations(u_10);
        y_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, x_10, y_10, s_10);
        i_10 = t;
        t = SSLsetAnnotations(i_10, y_2);
        e_3 = t;
        t = save_MarkVar_0_0(t);
        s_0 = t;
        t = e_3;
        if(match_cons(t, sym_CallT_3))
          {
            m_2 = ATgetArgument(t, 0);
            q_2 = ATgetArgument(t, 1);
            t_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_3);
        r_1 = t;
        t = t_2;
        t = map_1_0(c_3, t);
        u_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, m_2, q_2, u_2);
        j_10 = t;
        t = SSLsetAnnotations(j_10, r_1);
        v_2 = t;
        if(match_cons(t, sym_CallT_3))
          {
            w_0 = ATgetArgument(t, 0);
            i_1 = ATgetArgument(t, 1);
            n_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_2);
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
      ATerm d_4 = NULL,f_4 = NULL,g_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,p_4 = NULL,m_10 = NULL,l_10 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          x_10 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_10);
      m_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, x_10, y_10);
      l_10 = t;
      t = SSLsetAnnotations(l_10, m_4);
      p_4 = t;
      t = save_MarkVar_0_0(t);
      d_4 = t;
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
      t = d_4;
      t = isect_MarkVar_0_0(t);
      t = l_4;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_b_15;
  return(t);
}
static ATerm o_7 (ATerm s_23, ATerm t_23, ATerm u_23, ATerm t)
{
  ATerm f_11 = NULL;
  static ATerm f_3 (ATerm t)
  {
    t = t_23;
    t = map_1_0(IntroduceBound_0_0, t);
    t = u_23;
    t = mark_build_vars_0_0(t);
    if(((f_11 != NULL) && (f_11 != t)))
      _fail(t);
    else
      f_11 = t;
    return(t);
  }
  t = scope_2_0(d_3, f_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, s_23, t_23, not_null(f_11));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_b_15;
  return(t);
}
static ATerm q_3 (ATerm t)
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
static ATerm v_3 (ATerm t)
{
  ATerm f_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = f_15;
      {
        ATerm i_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_15);
          }
        else
          {
            t = i_15;
            {
              ATerm w_11 = NULL,y_11 = NULL,z_11 = NULL,d_12 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_11 = ATgetArgument(t, 0);
                  y_11 = ATgetArgument(t, 1);
                  z_11 = ATgetArgument(t, 2);
                  d_12 = ATgetArgument(t, 3);
                  t = z_11;
                  t = map_1_0(a_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_11 = ATgetArgument(t, 0);
                      y_11 = ATgetArgument(t, 1);
                      z_11 = ATgetArgument(t, 2);
                      d_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_11;
                  t = map_1_0(b_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm q_12 = NULL;
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_12 = ATgetArgument(t, 0);
          {
            ATerm m_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_15);
      t = q_12;
    }
  else
    {
      t = k_15;
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
static ATerm b_4 (ATerm t)
{
  ATerm f_13 = NULL;
  ATerm n_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_13 = ATgetArgument(t, 0);
          {
            ATerm q_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_15);
      t = f_13;
    }
  else
    {
      t = n_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_13;
    }
  return(t);
}
static ATerm p_7 (ATerm m_23, ATerm q_23, ATerm o_23, ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
  static ATerm l_3 (ATerm t)
  {
    t = m_23;
    t = free_vars_3_0(q_3, v_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = m_23;
    t = mark_match_vars_0_0(t);
    if(((o_11 != NULL) && (o_11 != t)))
      _fail(t);
    else
      o_11 = t;
    t = o_23;
    t = mark_buv_0_0(t);
    if(((p_11 != NULL) && (p_11 != t)))
      _fail(t);
    else
      p_11 = t;
    t = q_23;
    t = mark_build_vars_0_0(t);
    if(((q_11 != NULL) && (q_11 != t)))
      _fail(t);
    else
      q_11 = t;
    return(t);
  }
  t = scope_2_0(g_3, l_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_11), not_null(q_11), not_null(p_11)));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_b_15;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm r_13 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_13);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            {
              ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_13 = ATgetArgument(t, 0);
                  y_13 = ATgetArgument(t, 1);
                  z_13 = ATgetArgument(t, 2);
                  a_14 = ATgetArgument(t, 3);
                  t = z_13;
                  t = map_1_0(r_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_13 = ATgetArgument(t, 0);
                      y_13 = ATgetArgument(t, 1);
                      z_13 = ATgetArgument(t, 2);
                      a_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_13;
                  t = map_1_0(s_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm n_14 = NULL;
  ATerm z_15 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_14 = ATgetArgument(t, 0);
          {
            ATerm k_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_16);
      t = n_14;
    }
  else
    {
      t = z_15;
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
static ATerm s_4 (ATerm t)
{
  ATerm w_14 = NULL;
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_14 = ATgetArgument(t, 0);
          {
            ATerm s_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_16);
      t = w_14;
    }
  else
    {
      t = p_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_14;
    }
  return(t);
}
static ATerm q_7 (ATerm g_23, ATerm k_23, ATerm i_23, ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  static ATerm n_4 (ATerm t)
  {
    t = g_23;
    t = free_vars_3_0(o_4, q_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = g_23;
    t = mark_match_vars_0_0(t);
    if(((l_13 != NULL) && (l_13 != t)))
      _fail(t);
    else
      l_13 = t;
    t = i_23;
    t = mark_buv_0_0(t);
    if(((m_13 != NULL) && (m_13 != t)))
      _fail(t);
    else
      m_13 = t;
    t = k_23;
    t = mark_build_vars_0_0(t);
    if(((n_13 != NULL) && (n_13 != t)))
      _fail(t);
    else
      n_13 = t;
    return(t);
  }
  t = scope_2_0(c_4, n_4, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_13), not_null(n_13), not_null(m_13)));
  return(t);
}
static ATerm t_4 (ATerm t)
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
static ATerm u_4 (ATerm t)
{
  ATerm u_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_16);
    }
  else
    {
      t = u_16;
      {
        ATerm a_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_17);
          }
        else
          {
            t = a_17;
            {
              ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_17 = ATgetArgument(t, 0);
                  h_17 = ATgetArgument(t, 1);
                  i_17 = ATgetArgument(t, 2);
                  j_17 = ATgetArgument(t, 3);
                  t = i_17;
                  t = map_1_0(v_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_17 = ATgetArgument(t, 0);
                      h_17 = ATgetArgument(t, 1);
                      i_17 = ATgetArgument(t, 2);
                      j_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_17;
                  t = map_1_0(w_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm w_17 = NULL;
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_17 = ATgetArgument(t, 0);
          {
            ATerm m_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_17);
      t = w_17;
    }
  else
    {
      t = k_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_17;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm k_18 = NULL;
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_18 = ATgetArgument(t, 0);
          {
            ATerm t_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_17);
      t = k_18;
    }
  else
    {
      t = n_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_18;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_b_15;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm w_19 = NULL;
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_19 = ATgetArgument(t, 0);
          {
            ATerm z_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_17);
      t = w_19;
    }
  else
    {
      t = x_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_19;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm g_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_20);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            {
              ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_20 = ATgetArgument(t, 0);
                  k_20 = ATgetArgument(t, 1);
                  l_20 = ATgetArgument(t, 2);
                  m_20 = ATgetArgument(t, 3);
                  t = l_20;
                  t = map_1_0(n_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_20 = ATgetArgument(t, 0);
                      k_20 = ATgetArgument(t, 1);
                      l_20 = ATgetArgument(t, 2);
                      m_20 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_20;
                  t = map_1_0(u_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm e_21 = NULL;
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_21 = ATgetArgument(t, 0);
          {
            ATerm g_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_18);
      t = e_21;
    }
  else
    {
      t = e_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_21;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm x_21 = NULL;
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_21 = ATgetArgument(t, 0);
          {
            ATerm j_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_18);
      t = x_21;
    }
  else
    {
      t = h_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_21;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_b_15;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
      c_16 = ATgetArgument(t, 2);
      {
        ATerm r_16 = NULL,t_16 = NULL,v_16 = NULL,x_16 = NULL;
        t = c_16;
        if(match_cons(t, sym_Rule_3))
          {
            w_15 = ATgetArgument(t, 0);
            x_15 = ATgetArgument(t, 1);
            y_15 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = c_16;
        t = free_vars_3_0(t_4, u_4, tboundin_3_0, t);
        r_16 = t;
        {
          static ATerm y_4 (ATerm t)
          {
            t = r_16;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = w_15;
            t = mark_match_vars_0_0(t);
            if(((t_16 != NULL) && (t_16 != t)))
              _fail(t);
            else
              t_16 = t;
            t = y_15;
            t = mark_buv_0_0(t);
            if(((v_16 != NULL) && (v_16 != t)))
              _fail(t);
            else
              v_16 = t;
            t = x_15;
            t = mark_build_vars_0_0(t);
            if(((x_16 != NULL) && (x_16 != t)))
              _fail(t);
            else
              x_16 = t;
            return(t);
          }
          t = scope_2_0(x_4, y_4, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, a_16, b_16, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_16), not_null(x_16), not_null(v_16)));
      }
    }
  else
    {
      ATerm u_18 = NULL,v_18 = NULL,b_19 = NULL,g_19 = NULL,m_19 = NULL,n_19 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          a_16 = ATgetArgument(t, 0);
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
          j_16 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_16;
      t = map_1_0(a_5, t);
      u_18 = t;
      t = d_16;
      t = free_vars_3_0(d_5, j_5, tboundin_3_0, t);
      n_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_19, u_18);
      t = diff_0_0(t);
      v_18 = t;
      {
        static ATerm x_5 (ATerm t)
        {
          t = u_18;
          t = map_1_0(IntroduceBound_0_0, t);
          t = v_18;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = e_16;
          t = mark_match_vars_0_0(t);
          if(((b_19 != NULL) && (b_19 != t)))
            _fail(t);
          else
            b_19 = t;
          t = j_16;
          t = mark_buv_0_0(t);
          if(((g_19 != NULL) && (g_19 != t)))
            _fail(t);
          else
            g_19 = t;
          t = f_16;
          t = mark_build_vars_0_0(t);
          if(((m_19 != NULL) && (m_19 != t)))
            _fail(t);
          else
            m_19 = t;
          return(t);
        }
        t = scope_2_0(w_5, x_5, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, a_16, b_16, c_16, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_19), not_null(m_19), not_null(g_19)));
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_b_15;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm p_24 = NULL,w_24 = NULL,y_24 = NULL;
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_24);
  w_24 = t;
  t = term_n_18;
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_24), term_n_18);
  t = h_8(a_6, w_24, y_24, t);
  t = p_24;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm i_25 = NULL;
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_25 = ATgetArgument(t, 0);
          {
            ATerm q_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_18);
      t = i_25;
    }
  else
    {
      t = o_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_25;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_b_15;
  return(t);
}
static ATerm r_7 (ATerm e_22, ATerm f_22, ATerm g_22, ATerm i_22, ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  t = g_22;
  t = map_1_0(b_6, t);
  e_25 = t;
  {
    static ATerm n_6 (ATerm t)
    {
      t = e_25;
      t = map_1_0(IntroduceBound_0_0, t);
      t = i_22;
      t = mark_buv_0_0(t);
      if(((f_25 != NULL) && (f_25 != t)))
        _fail(t);
      else
        f_25 = t;
      return(t);
    }
    t = scope_2_0(j_6, n_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, e_22, f_22, g_22, not_null(f_25));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm j_27 = NULL,l_27 = NULL,m_27 = NULL,r_27 = NULL,s_27 = NULL,u_27 = NULL;
  j_27 = t;
  if(match_cons(t, sym__2))
    {
      l_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_27;
  if(match_cons(t, sym_Undefined_0))
    {
      t = l_27;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_r_18;
        }
      else
        {
          t = term_r_18;
        }
    }
  else
    {
      ATerm s_18 = t;
      int t_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm w_18 = ATgetArgument(t, 0);
              u_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(t_18);
          t = l_27;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_r_18;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  m_27 = ATgetArgument(t, 0);
                  r_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm x_18 = t;
                int y_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, r_27, u_27);
                    {
                      ATerm z_18 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm h_5 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              h_5 = ATgetArgument(t, 0);
                              if((h_5 != ATgetArgument(t, 1)))
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
                          t = z_18;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, m_27, term_e_19);
                    LocalPopChoice(y_18);
                  }
                else
                  {
                    t = x_18;
                    t = u_27;
                    if((r_27 != t))
                      {
                        _fail(t);
                      }
                    t = l_27;
                  }
              }
            }
        }
      else
        {
          t = s_18;
          t = l_27;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_r_18;
        }
    }
  return(t);
}
static ATerm s_7 (ATerm p_20, ATerm q_20, ATerm o_20, ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  t = term_b_15;
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_15, p_20);
  t = a_9(c_28, p_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_28 = ATgetFirst((ATermList) t);
      {
        ATerm f_19 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_20, a_28);
  t = CompareEntries_0_0(t);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_20, (ATerm) ATinsert(CheckATermList(o_20), b_28));
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm d_29 = NULL,f_29 = NULL,g_29 = NULL,n_29 = NULL,o_29 = NULL;
  o_29 = t;
  if(match_cons(t, sym__2))
    {
      d_29 = ATgetArgument(t, 0);
      f_29 = ATgetArgument(t, 1);
      t = f_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_29 = ATgetFirst((ATermList) t);
          n_29 = (ATerm) ATgetNext((ATermList) t);
          t = g_29;
          {
            ATerm h_19 = t;
            int i_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm j_19 = ATgetArgument(t, 0);
                    ATerm k_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(i_19);
                t = d_29;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = o_29;
                  }
                else
                  {
                    ATerm o_19 = t;
                    int q_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = o_29;
                        t = s_7(d_29, g_29, n_29, t);
                        LocalPopChoice(q_19);
                      }
                    else
                      {
                        t = o_19;
                        t = o_29;
                      }
                  }
              }
            else
              {
                t = h_19;
                t = d_29;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = o_29;
                  }
                else
                  {
                    t = o_29;
                  }
              }
          }
        }
      else
        {
          t = d_29;
          if(match_cons(t, sym_Scopes_0))
            {
              t = o_29;
            }
          else
            {
              t = o_29;
            }
        }
    }
  else
    {
      t = o_29;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm q_28 = NULL,c_29 = NULL;
  t = map_1_0(r_6, t);
  q_28 = t;
  t = term_b_15;
  t = table_destroy_0_0(t);
  t = term_b_15;
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_15, q_28);
  t = t_7(c_29, q_28, t);
  t = q_28;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,p_30 = NULL;
  p_30 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm t_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_19);
        t = p_30;
      }
    else
      {
        t = r_19;
        {
          ATerm v_19 = t;
          int y_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm a_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(y_19);
              t = p_30;
            }
          else
            {
              t = v_19;
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
                    t = p_30;
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
                    t = p_30;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  l_30 = t;
  t = p_30;
  t = SRTS_one(mark_buv_0_0, t);
  m_30 = t;
  t = l_30;
  t = isect_MarkVar_0_0(t);
  t = m_30;
  return(t);
}
static ATerm t_7 (ATerm n_26, ATerm m_26, ATerm t)
{
  static ATerm s_6 (ATerm t)
  {
    ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
    if(match_cons(t, sym__2))
      {
        v_30 = ATgetArgument(t, 0);
        w_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, n_26, v_30, w_30);
    t = lookup_table_0_1(n_26, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        x_30 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = e_9(v_30, w_30, x_30, t);
    t = (ATerm) ATmakeAppl(sym__3, n_26, v_30, w_30);
    return(t);
  }
  t = m_26;
  t = map_1_0(s_6, t);
  return(t);
}
static ATerm u_7 (ATerm y_28, ATerm t)
{
  t = SSL_hashtable_keys(y_28);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_30 = NULL,c_31 = NULL;
  static ATerm u_6 (ATerm t)
  {
    ATerm d_31 = NULL,e_31 = NULL;
    d_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_30), d_31);
    t = a_9(not_null(z_30), d_31, t);
    e_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_31, e_31);
    return(t);
  }
  if(((z_30 != NULL) && (z_30 != t)))
    _fail(t);
  else
    z_30 = t;
  t = lookup_table_0_1(z_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(c_31, t);
  t = map_1_0(u_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_b_15;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm c_21, ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm v_6 (ATerm t)
    {
      static ATerm i_32 (ATerm p_31, ATerm t)
      {
        ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
        t = p_31;
        if(match_cons(t, sym__2))
          {
            ATerm h_20 = ATgetArgument(t, 0);
            s_31 = h_20;
            if(match_cons(h_20, sym_Var_1))
              {
                t_31 = ATgetArgument(h_20, 0);
              }
            else
              _fail(t);
            {
              ATerm i_20 = ATgetArgument(t, 1);
              if(((ATgetType(i_20) == AT_LIST) && !(ATisEmpty(i_20))))
                {
                  ATerm n_20 = ATgetFirst((ATermList) i_20);
                  if(match_cons(n_20, sym_Defined_2))
                    {
                      u_31 = ATgetArgument(n_20, 0);
                      {
                        ATerm r_20 = ATgetArgument(n_20, 1);
                        if((ATgetSymbol((ATermAppl) r_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  v_31 = (ATerm) ATgetNext((ATermList) i_20);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_21;
        {
          static ATerm w_6 (ATerm t)
          {
            if((t_31 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(w_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, s_31, (ATerm) ATinsert(CheckATermList(v_31), (ATerm) ATmakeAppl(sym_Defined_2, u_31, term_e_19)));
        return(t);
      }
      ATerm y_31 = NULL,e_32 = NULL;
      e_32 = t;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                y_31 = ATgetArgument(t, 0);
                {
                  ATerm u_20 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_20);
            t = y_31;
            if(match_cons(t, sym_Scopes_0))
              {
                t = e_32;
              }
            else
              {
                ATerm v_20 = t;
                int w_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_32(e_32, t);
                    LocalPopChoice(w_20);
                  }
                else
                  {
                    t = v_20;
                    t = e_32;
                  }
              }
          }
        else
          {
            t = s_20;
            {
              ATerm x_20 = t;
              int y_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_32(e_32, t);
                  LocalPopChoice(y_20);
                }
              else
                {
                  t = x_20;
                  t = e_32;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(v_6, t);
  }
  n_31 = t;
  t = term_b_15;
  t = table_destroy_0_0(t);
  t = term_b_15;
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_15, n_31);
  t = t_7(o_31, n_31, t);
  t = n_31;
  return(t);
}
ATerm tboundin_3_0 (ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  c_39 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_39 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
      {
        ATerm c_6 = NULL,p_6 = NULL,q_6 = NULL,l_16 = NULL;
        t = SSLgetAnnotations(c_39);
        c_6 = t;
        t = d_39;
        t = b_118(t);
        p_6 = t;
        t = z_38;
        t = z_117(t);
        q_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_6, q_6);
        l_16 = t;
        t = SSLsetAnnotations(l_16, c_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          d_39 = ATgetArgument(t, 0);
          z_38 = ATgetArgument(t, 1);
          a_39 = ATgetArgument(t, 2);
          b_39 = ATgetArgument(t, 3);
          {
            ATerm e_7 = NULL,k_7 = NULL,n_8 = NULL,x_8 = NULL,c_9 = NULL,m_16 = NULL;
            t = SSLgetAnnotations(c_39);
            e_7 = t;
            t = d_39;
            t = b_118(t);
            k_7 = t;
            t = z_38;
            t = b_118(t);
            n_8 = t;
            t = a_39;
            t = b_118(t);
            x_8 = t;
            t = b_39;
            t = z_117(t);
            c_9 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_7, n_8, x_8, c_9);
            m_16 = t;
            t = SSLsetAnnotations(m_16, e_7);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              d_39 = ATgetArgument(t, 0);
              z_38 = ATgetArgument(t, 1);
              a_39 = ATgetArgument(t, 2);
              b_39 = ATgetArgument(t, 3);
              {
                ATerm y_9 = NULL,p_10 = NULL,q_10 = NULL,t_10 = NULL,v_10 = NULL,d_17 = NULL;
                t = SSLgetAnnotations(c_39);
                y_9 = t;
                t = d_39;
                t = b_118(t);
                p_10 = t;
                t = z_38;
                t = b_118(t);
                q_10 = t;
                t = a_39;
                t = b_118(t);
                t_10 = t;
                t = b_39;
                t = z_117(t);
                v_10 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, p_10, q_10, t_10, v_10);
                d_17 = t;
                t = SSLsetAnnotations(d_17, y_9);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  d_39 = ATgetArgument(t, 0);
                  {
                    ATerm j_11 = NULL,l_11 = NULL,e_17 = NULL;
                    t = SSLgetAnnotations(c_39);
                    j_11 = t;
                    t = d_39;
                    t = z_117(t);
                    l_11 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, l_11);
                    e_17 = t;
                    t = SSLsetAnnotations(e_17, j_11);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      d_39 = ATgetArgument(t, 0);
                      {
                        ATerm x_11 = NULL,b_12 = NULL,p_17 = NULL;
                        t = SSLgetAnnotations(c_39);
                        x_11 = t;
                        t = d_39;
                        t = z_117(t);
                        b_12 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, b_12);
                        p_17 = t;
                        t = SSLsetAnnotations(p_17, x_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          d_39 = ATgetArgument(t, 0);
                          {
                            ATerm m_12 = NULL,y_12 = NULL,u_17 = NULL;
                            t = SSLgetAnnotations(c_39);
                            m_12 = t;
                            t = d_39;
                            t = z_117(t);
                            y_12 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, y_12);
                            u_17 = t;
                            t = SSLsetAnnotations(u_17, m_12);
                          }
                        }
                      else
                        {
                          ATerm i_13 = NULL,k_13 = NULL,v_17 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              d_39 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(c_39);
                          i_13 = t;
                          t = d_39;
                          t = z_117(t);
                          k_13 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, k_13);
                          v_17 = t;
                          t = SSLsetAnnotations(v_17, i_13);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm v_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_40);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm d_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_21);
    }
  else
    {
      t = d_21;
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            {
              ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_41 = ATgetArgument(t, 0);
                  f_41 = ATgetArgument(t, 1);
                  g_41 = ATgetArgument(t, 2);
                  h_41 = ATgetArgument(t, 3);
                  t = g_41;
                  t = map_1_0(z_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_41 = ATgetArgument(t, 0);
                      f_41 = ATgetArgument(t, 1);
                      g_41 = ATgetArgument(t, 2);
                      h_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_41;
                  t = map_1_0(a_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm r_41 = NULL;
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_41 = ATgetArgument(t, 0);
          {
            ATerm k_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_21);
      t = r_41;
    }
  else
    {
      t = i_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_41;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm f_42 = NULL;
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_42 = ATgetArgument(t, 0);
          {
            ATerm n_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_21);
      t = f_42;
    }
  else
    {
      t = l_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_42;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm q_42 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_42);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm o_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_21);
    }
  else
    {
      t = o_21;
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            {
              ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_42 = ATgetArgument(t, 0);
                  t_42 = ATgetArgument(t, 1);
                  u_42 = ATgetArgument(t, 2);
                  v_42 = ATgetArgument(t, 3);
                  t = u_42;
                  t = map_1_0(h_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_42 = ATgetArgument(t, 0);
                      t_42 = ATgetArgument(t, 1);
                      u_42 = ATgetArgument(t, 2);
                      v_42 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_42;
                  t = map_1_0(i_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm g_43 = NULL;
  ATerm u_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_43 = ATgetArgument(t, 0);
          {
            ATerm z_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_21);
      t = g_43;
    }
  else
    {
      t = u_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_43;
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm x_43 = NULL;
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_43 = ATgetArgument(t, 0);
          {
            ATerm c_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_22);
      t = x_43;
    }
  else
    {
      t = a_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_43;
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm c_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_44);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm d_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_22);
    }
  else
    {
      t = d_22;
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            {
              ATerm e_44 = NULL,f_44 = NULL,p_44 = NULL,t_44 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_44 = ATgetArgument(t, 0);
                  f_44 = ATgetArgument(t, 1);
                  p_44 = ATgetArgument(t, 2);
                  t_44 = ATgetArgument(t, 3);
                  t = p_44;
                  t = map_1_0(m_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_44 = ATgetArgument(t, 0);
                      f_44 = ATgetArgument(t, 1);
                      p_44 = ATgetArgument(t, 2);
                      t_44 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_44;
                  t = map_1_0(v_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm i_45 = NULL;
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_45 = ATgetArgument(t, 0);
          {
            ATerm p_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_22);
      t = i_45;
    }
  else
    {
      t = n_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_45;
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm u_45 = NULL;
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_45 = ATgetArgument(t, 0);
          {
            ATerm z_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_22);
      t = u_45;
    }
  else
    {
      t = r_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_45;
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm c_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_46);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm c_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_23);
          }
        else
          {
            t = c_23;
            {
              ATerm e_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_46 = ATgetArgument(t, 0);
                  g_46 = ATgetArgument(t, 1);
                  h_46 = ATgetArgument(t, 2);
                  i_46 = ATgetArgument(t, 3);
                  t = h_46;
                  t = map_1_0(e_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_46 = ATgetArgument(t, 0);
                      g_46 = ATgetArgument(t, 1);
                      h_46 = ATgetArgument(t, 2);
                      i_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_46;
                  t = map_1_0(g_9, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm v_46 = NULL;
  ATerm f_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_46 = ATgetArgument(t, 0);
          {
            ATerm y_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_23);
      t = v_46;
    }
  else
    {
      t = f_23;
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
static ATerm g_9 (ATerm t)
{
  ATerm g_47 = NULL;
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_47 = ATgetArgument(t, 0);
          {
            ATerm b_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_24);
      t = g_47;
    }
  else
    {
      t = z_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_47;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm p_40 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      p_40 = ATgetArgument(t, 0);
      t = p_40;
      t = free_vars_3_0(x_6, y_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          p_40 = ATgetArgument(t, 0);
          t = p_40;
          t = free_vars_3_0(f_7, g_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              p_40 = ATgetArgument(t, 0);
              t = p_40;
              t = free_vars_3_0(j_7, l_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  p_40 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = p_40;
              t = free_vars_3_0(c_8, d_8, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm w_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_48);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_24);
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
              ATerm y_48 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_48 = ATgetArgument(t, 0);
                  b_49 = ATgetArgument(t, 1);
                  c_49 = ATgetArgument(t, 2);
                  d_49 = ATgetArgument(t, 3);
                  t = c_49;
                  t = map_1_0(j_9, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_48 = ATgetArgument(t, 0);
                      b_49 = ATgetArgument(t, 1);
                      c_49 = ATgetArgument(t, 2);
                      d_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_49;
                  t = map_1_0(k_9, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm n_49 = NULL;
  ATerm i_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_49 = ATgetArgument(t, 0);
          {
            ATerm m_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_24);
      t = n_49;
    }
  else
    {
      t = i_24;
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
static ATerm k_9 (ATerm t)
{
  ATerm o_50 = NULL;
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_50 = ATgetArgument(t, 0);
          {
            ATerm q_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_24);
      t = o_50;
    }
  else
    {
      t = n_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_50;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm h_48 = NULL,n_48 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      n_48 = ATgetArgument(t, 0);
      t = n_48;
      if(match_cons(t, sym_Rule_3))
        {
          h_48 = ATgetArgument(t, 0);
          {
            ATerm r_24 = ATgetArgument(t, 1);
          }
          {
            ATerm t_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_48;
      t = free_vars_3_0(h_9, i_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          n_48 = ATgetArgument(t, 0);
          {
            ATerm u_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_48;
    }
  return(t);
}
static ATerm y_7 (ATerm a_99 (ATerm), ATerm w_49, ATerm v_49, ATerm t)
{
  static ATerm j_52 (ATerm t)
  {
    ATerm k_51 = NULL,n_51 = NULL,o_51 = NULL;
    k_51 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_49;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_51 = ATgetFirst((ATermList) t);
            o_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_24 = t;
          int z_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_51;
              {
                static ATerm l_9 (ATerm t)
                {
                  t = v_49;
                  return(t);
                }
                t = z_7(a_99, l_9, n_51, o_51, t);
              }
              t = j_52(t);
              LocalPopChoice(z_24);
            }
          else
            {
              t = x_24;
              {
                ATerm w_13 = NULL,j_14 = NULL,p_19 = NULL;
                t = SSLgetAnnotations(k_51);
                w_13 = t;
                t = o_51;
                t = j_52(t);
                j_14 = t;
                t = (ATerm) ATinsert(CheckATermList(j_14), n_51);
                p_19 = t;
                t = SSLsetAnnotations(p_19, w_13);
              }
            }
        }
      }
    return(t);
  }
  t = w_49;
  t = j_52(t);
  return(t);
}
ATerm foldr_3_0 (ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,t_52 = NULL;
  o_52 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_52;
      t = x_101(t);
    }
  else
    {
      ATerm a_53 = NULL,e_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_52 = ATgetFirst((ATermList) t);
          t_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_52;
      t = z_101(t);
      a_53 = t;
      t = t_52;
      t = foldr_3_0(x_101, y_101, z_101, t);
      e_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_53, e_53);
      t = y_101(t);
    }
  return(t);
}
static ATerm z_7 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm a_50, ATerm z_49, ATerm t)
{
  t = e_99(t);
  {
    static ATerm m_9 (ATerm t)
    {
      ATerm m_53 = NULL;
      m_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_50, m_53);
      t = d_99(t);
      return(t);
    }
    t = fetch_1_0(m_9, t);
  }
  t = z_49;
  return(t);
}
static ATerm a_8 (ATerm v_98 (ATerm), ATerm u_49, ATerm t_49, ATerm t)
{
  static ATerm p_54 (ATerm t)
  {
    ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL;
    i_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_54;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_54 = ATgetFirst((ATermList) t);
            k_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_25 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_54;
              {
                static ATerm n_9 (ATerm t)
                {
                  t = t_49;
                  return(t);
                }
                t = z_7(v_98, n_9, j_54, k_54, t);
              }
              t = p_54(t);
              LocalPopChoice(b_25);
            }
          else
            {
              t = a_25;
              {
                ATerm d_15 = NULL,g_15 = NULL,q_21 = NULL;
                t = SSLgetAnnotations(i_54);
                d_15 = t;
                t = k_54;
                t = p_54(t);
                g_15 = t;
                t = (ATerm) ATinsert(CheckATermList(g_15), j_54);
                q_21 = t;
                t = SSLsetAnnotations(q_21, d_15);
              }
            }
        }
      }
    return(t);
  }
  t = u_49;
  t = p_54(t);
  return(t);
}
ATerm at_end_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  static ATerm j_56 (ATerm t)
  {
    ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
    h_56 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_56 = ATgetFirst((ATermList) t);
        g_56 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_15 = NULL,r_15 = NULL,h_26 = NULL;
          t = SSLgetAnnotations(h_56);
          o_15 = t;
          t = g_56;
          t = j_56(t);
          r_15 = t;
          t = (ATerm) ATinsert(CheckATermList(r_15), f_56);
          h_26 = t;
          t = SSLsetAnnotations(h_26, o_15);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_56;
        t = g_95(t);
      }
    return(t);
  }
  t = j_56(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_54;
    }
  else
    {
      static ATerm p_9 (ATerm t)
      {
        t = not_null(a_55);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_54 = ATgetFirst((ATermList) t);
          if(((a_55 != NULL) && (a_55 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_54;
      t = at_end_1_0(p_9, t);
    }
  return(t);
}
static ATerm d_57 (ATerm q_56, ATerm t)
{
  ATerm r_56 = NULL;
  t = SSL_explode_term(q_56);
  if(match_cons(t, sym__2))
    {
      ATerm c_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_56;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_56 = NULL,w_56 = NULL,z_56 = NULL;
  z_56 = t;
  if(match_cons(t, sym__2))
    {
      t_56 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
      {
        ATerm d_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_9 (ATerm t)
            {
              t = w_56;
              return(t);
            }
            t = t_56;
            t = at_end_1_0(r_9, t);
            LocalPopChoice(g_25);
          }
        else
          {
            t = d_25;
            t = d_57(z_56, t);
          }
      }
    }
  else
    {
      t = d_57(z_56, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t)
{
  static ATerm r_57 (ATerm t)
  {
    ATerm h_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_96(t);
        LocalPopChoice(m_25);
      }
    else
      {
        t = h_25;
        {
          ATerm e_57 = NULL,f_57 = NULL,i_57 = NULL,j_57 = NULL,p_57 = NULL,q_57 = NULL,q_26 = NULL;
          t = u_96(t);
          q_57 = t;
          if(match_cons(t, sym__2))
            {
              f_57 = ATgetArgument(t, 0);
              i_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_57);
          e_57 = t;
          t = f_57;
          t = w_96(t);
          j_57 = t;
          t = i_57;
          t = r_57(t);
          p_57 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_57, p_57);
          q_26 = t;
          t = SSLsetAnnotations(q_26, e_57);
          t = v_96(t);
        }
      }
    return(t);
  }
  t = r_57(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      if(((ATgetType(n_25) != AT_LIST) || !(ATisEmpty(n_25))))
        _fail(t);
      {
        ATerm r_25 = ATgetArgument(t, 1);
        if(((ATgetType(r_25) != AT_LIST) || !(ATisEmpty(r_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_25 = ATgetArgument(t, 0);
      if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
        {
          b_58 = ATgetFirst((ATermList) s_25);
          c_58 = (ATerm) ATgetNext((ATermList) s_25);
        }
      else
        _fail(t);
      {
        ATerm t_25 = ATgetArgument(t, 1);
        if(((ATgetType(t_25) == AT_LIST) && !(ATisEmpty(t_25))))
          {
            d_58 = ATgetFirst((ATermList) t_25);
            e_58 = (ATerm) ATgetNext((ATermList) t_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_58, d_58), (ATerm) ATmakeAppl(sym__2, c_58, e_58));
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm s_58 = NULL,w_58 = NULL;
  if(match_cons(t, sym__2))
    {
      s_58 = ATgetArgument(t, 0);
      w_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_58), s_58);
  return(t);
}
static ATerm f_8 (ATerm w_631, ATerm b_632, ATerm l_61, ATerm t)
{
  ATerm u_57 = NULL,w_57 = NULL,x_57 = NULL,z_57 = NULL;
  t = SSL_explode_term(b_632);
  if(match_cons(t, sym__2))
    {
      u_57 = ATgetArgument(t, 0);
      x_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_631);
  if(match_cons(t, sym__2))
    {
      if((u_57 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_57, x_57);
  t = genzip_4_0(s_9, t_9, u_9, _id, t);
  z_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_57, l_61);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm o_92 (ATerm), ATerm p_92 (ATerm), ATerm t)
{
  static ATerm a_59 (ATerm t)
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_92(t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = p_92(t);
        t = a_59(t);
      }
    return(t);
  }
  t = a_59(t);
  return(t);
}
ATerm for_3_0 (ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm t)
{
  t = r_92(t);
  t = while_not_2_0(s_92, t_92, t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm o_59 = NULL;
  o_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_59);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm p_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,u_26 = NULL;
  u_59 = t;
  if(match_cons(t, sym__2))
    {
      s_59 = ATgetArgument(t, 0);
      t_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_59);
  p_59 = t;
  t = t_59;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_59, t_59);
  u_26 = t;
  t = SSLsetAnnotations(u_26, p_59);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm y_60 = NULL,b_61 = NULL,g_61 = NULL,h_61 = NULL,m_61 = NULL;
  y_60 = t;
  if(match_cons(t, sym__2))
    {
      b_61 = ATgetArgument(t, 0);
      g_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_61 = ATgetFirst((ATermList) t);
      m_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_26 = t;
        int d_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_62(b_61, g_61, y_60, t);
            LocalPopChoice(d_26);
          }
        else
          {
            t = c_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_61), h_61), m_61);
          }
      }
    }
  else
    {
      t = c_62(b_61, g_61, y_60, t);
    }
  return(t);
}
static ATerm c_62 (ATerm v_59, ATerm y_59, ATerm a_60, ATerm t)
{
  ATerm b_60 = NULL,e_60 = NULL,v_26 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
  t = SSLgetAnnotations(a_60);
  b_60 = t;
  t = y_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_60 = ATgetFirst((ATermList) t);
      o_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_60;
  if(match_cons(t, sym__2))
    {
      m_60 = ATgetArgument(t, 0);
      n_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_60;
        if((m_60 != t))
          {
            _fail(t);
          }
        t = o_60;
        LocalPopChoice(j_26);
      }
    else
      {
        t = g_26;
        t = y_59;
        t = f_8(m_60, n_60, o_60, t);
      }
  }
  e_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_59, e_60);
  v_26 = t;
  t = SSLsetAnnotations(v_26, b_60);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm b_62 = NULL;
  if(match_cons(t, sym__2))
    {
      b_62 = ATgetArgument(t, 0);
      if((b_62 != ATgetArgument(t, 1)))
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
  ATerm l_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(v_9, w_9, x_9, t);
      LocalPopChoice(o_26);
    }
  else
    {
      t = l_26;
      {
        ATerm t_61 = NULL,w_61 = NULL,y_61 = NULL;
        t_61 = t;
        if(match_cons(t, sym__2))
          {
            w_61 = ATgetArgument(t, 0);
            y_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_61;
        t = a_8(z_9, w_61, y_61, t);
      }
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(h_10, n_16, o_16, t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm z_16 = NULL;
  if(match_cons(t, sym__2))
    {
      z_16 = ATgetArgument(t, 0);
      if((z_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(r_10, q_17, r_17, t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm s_17 = NULL;
  if(match_cons(t, sym__2))
    {
      s_17 = ATgetArgument(t, 0);
      if((s_17 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm b_115 (ATerm), ATerm c_115 (ATerm), ATerm d_115 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm d_63 (ATerm t)
  {
    ATerm p_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_115(t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = p_26;
        {
          ATerm s_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_62 = NULL,g_62 = NULL,g_16 = NULL,h_16 = NULL;
              f_62 = t;
              t = c_115(t);
              g_62 = t;
              t = f_62;
              {
                static ATerm d_10 (ATerm t)
                {
                  ATerm m_62 = NULL;
                  t = d_63(t);
                  m_62 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_62, g_62);
                  t = diff_0_0(t);
                  return(t);
                }
                t = d_115(d_10, d_63, e_10, t);
              }
              h_16 = t;
              t = SSL_explode_term(h_16);
              if(match_cons(t, sym__2))
                {
                  ATerm x_26 = ATgetArgument(t, 0);
                  g_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_16;
              t = foldr_3_0(f_10, g_10, _id, t);
              LocalPopChoice(t_26);
            }
          else
            {
              t = s_26;
              {
                ATerm b_17 = NULL,c_17 = NULL;
                c_17 = t;
                t = SSL_explode_term(c_17);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_26 = ATgetArgument(t, 0);
                    b_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_17;
                t = foldr_3_0(n_10, o_10, d_63, t);
              }
            }
        }
      }
    return(t);
  }
  t = d_63(t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm t_64 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_64);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            {
              ATerm z_64 = NULL,d_65 = NULL,f_65 = NULL,k_65 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  z_64 = ATgetArgument(t, 0);
                  d_65 = ATgetArgument(t, 1);
                  f_65 = ATgetArgument(t, 2);
                  k_65 = ATgetArgument(t, 3);
                  t = f_65;
                  t = map_1_0(a_11, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_64 = ATgetArgument(t, 0);
                      d_65 = ATgetArgument(t, 1);
                      f_65 = ATgetArgument(t, 2);
                      k_65 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_65;
                  t = map_1_0(b_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm y_65 = NULL;
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_65 = ATgetArgument(t, 0);
          {
            ATerm k_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_27);
      t = y_65;
    }
  else
    {
      t = f_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_65;
    }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm l_66 = NULL;
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_66 = ATgetArgument(t, 0);
          {
            ATerm p_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_27);
      t = l_66;
    }
  else
    {
      t = n_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_66;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm l_63 = NULL,s_63 = NULL,t_63 = NULL,y_63 = NULL,b_64 = NULL,c_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,m_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,z_27 = NULL,i_27 = NULL;
  s_64 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_64 = ATgetArgument(t, 0);
      q_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_64);
  m_64 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, p_64, q_64);
  i_27 = t;
  t = SSLsetAnnotations(i_27, m_64);
  r_64 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_63 = ATgetArgument(t, 0);
      {
        ATerm q_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_63;
  t = free_vars_3_0(w_10, z_10, tboundin_3_0, t);
  l_63 = t;
  t = undefine_unbound_MarkVar_0_1(l_63, t);
  s_63 = t;
  t = r_64;
  if(match_cons(t, sym_Let_2))
    {
      b_64 = ATgetArgument(t, 0);
      c_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_64);
  y_63 = t;
  t = b_64;
  {
    static ATerm c_11 (ATerm t)
    {
      ATerm o_66 = NULL,t_66 = NULL;
      o_66 = t;
      t = term_b_15;
      t = table_destroy_0_0(t);
      t = term_b_15;
      t_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_b_15, s_63);
      t = t_7(t_66, s_63, t);
      t = o_66;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(c_11, t);
  }
  i_64 = t;
  t = term_b_15;
  t = table_destroy_0_0(t);
  t = term_b_15;
  k_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_15, s_63);
  t = t_7(k_64, s_63, t);
  t = c_64;
  t = mark_buv_0_0(t);
  j_64 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, i_64, j_64);
  z_27 = t;
  t = SSLsetAnnotations(z_27, y_63);
  return(t);
}
static ATerm h_8 (ATerm e_85 (ATerm), ATerm g_24, ATerm e_24, ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,z_66 = NULL,b_67 = NULL,i_67 = NULL,j_67 = NULL,n_67 = NULL,p_67 = NULL;
  b_67 = t;
  t = e_85(t);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_66, g_24, e_24);
  t = b_9(u_66, g_24, e_24, t);
  {
    ATerm t_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_67 = NULL;
        t = term_w_27;
        q_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_66, term_w_27);
        t = a_9(u_66, q_67, t);
        LocalPopChoice(v_27);
      }
    else
      {
        t = t_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_66 = ATgetFirst((ATermList) t);
      z_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_66, term_w_27, (ATerm) ATinsert(CheckATermList(z_66), (ATerm) ATinsert(CheckATermList(v_66), g_24)));
  t = lookup_table_0_1(u_66, t);
  p_67 = t;
  t = term_w_27;
  i_67 = t;
  t = (ATerm) ATinsert(CheckATermList(z_66), (ATerm) ATinsert(CheckATermList(v_66), g_24));
  j_67 = t;
  t = p_67;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(i_67, j_67, n_67, t);
  t = b_67;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_b_15;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL;
  r_67 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_67);
  s_67 = t;
  t = term_e_28;
  t_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_67), term_e_28);
  t = h_8(d_11, s_67, t_67, t);
  t = r_67;
  return(t);
}
static ATerm i_8 (ATerm p_25, ATerm q_25, ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL;
  v_67 = t;
  {
    ATerm f_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_25, q_25);
        t = a_9(p_25, q_25, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_28 = ATgetFirst((ATermList) t);
            u_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_28);
        {
          ATerm w_67 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, p_25, q_25, u_67);
          t = lookup_table_0_1(p_25, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              w_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_9(q_25, u_67, w_67, t);
          t = (ATerm) ATmakeAppl(sym__3, p_25, q_25, u_67);
        }
      }
    else
      {
        t = f_28;
        {
          ATerm y_67 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, p_25, q_25);
          t = lookup_table_0_1(p_25, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              y_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_8(q_25, y_67, t);
          t = (ATerm) ATmakeAppl(sym__2, p_25, q_25);
        }
      }
  }
  t = v_67;
  return(t);
}
ATerm end_scope_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  ATerm d_68 = NULL,f_68 = NULL,k_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL;
  m_68 = t;
  t = b_85(t);
  k_68 = t;
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_68 = NULL;
        t = term_w_27;
        q_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_68, term_w_27);
        t = a_9(k_68, q_68, t);
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_68 = ATgetFirst((ATermList) t);
      d_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_68, term_w_27, d_68);
  t = lookup_table_0_1(k_68, t);
  p_68 = t;
  t = term_w_27;
  n_68 = t;
  t = p_68;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(n_68, d_68, o_68, t);
  t = f_68;
  {
    static ATerm e_11 (ATerm t)
    {
      ATerm v_68 = NULL;
      v_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_68, v_68);
      t = i_8(k_68, v_68, t);
      return(t);
    }
    t = map_1_0(e_11, t);
  }
  t = m_68;
  return(t);
}
ATerm restore_always_2_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_104(t);
      t = b_104(t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      t = b_104(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_85 (ATerm), ATerm t)
{
  ATerm b_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL;
  e_69 = t;
  t = a_85(t);
  b_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_69, term_w_27);
  {
    ATerm e_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_69 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_29 = ATgetArgument(t, 0);
            ATerm j_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_27;
        q_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_69, term_w_27);
        t = a_9(b_69, q_69, t);
        LocalPopChoice(h_29);
      }
    else
      {
        t = e_29;
        t = (ATerm) ATempty;
      }
  }
  f_69 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_69, term_w_27, (ATerm) ATinsert(CheckATermList(f_69), (ATerm) ATempty));
  t = lookup_table_0_1(b_69, t);
  j_69 = t;
  t = term_w_27;
  g_69 = t;
  t = (ATerm) ATinsert(CheckATermList(f_69), (ATerm) ATempty);
  h_69 = t;
  t = j_69;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(g_69, h_69, i_69, t);
  t = e_69;
  return(t);
}
ATerm scope_2_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm t)
{
  static ATerm g_11 (ATerm t)
  {
    t = end_scope_1_0(c_85, t);
    return(t);
  }
  t = begin_scope_1_0(c_85, t);
  t = restore_always_2_0(d_85, g_11, t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_b_15;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,t_30 = NULL;
  b_70 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_69 = ATgetArgument(t, 0);
      z_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_70);
  r_69 = t;
  t = z_69;
  {
    static ATerm i_11 (ATerm t)
    {
      ATerm c_70 = NULL;
      c_70 = t;
      t = s_69;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = c_70;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(h_11, i_11, t);
  }
  a_70 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_69, a_70);
  t_30 = t;
  t = SSLsetAnnotations(t_30, r_69);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_70 = NULL,e_70 = NULL,h_70 = NULL,b_31 = NULL;
      h_70 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_70);
      d_70 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_70);
      b_31 = t;
      t = SSLsetAnnotations(b_31, d_70);
      LocalPopChoice(l_29);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = k_29;
      {
        ATerm m_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,s_70 = NULL,f_31 = NULL;
            s_70 = t;
            if(match_cons(t, sym_App_2))
              {
                k_70 = ATgetArgument(t, 0);
                l_70 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_70);
            j_70 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, k_70, l_70);
            f_31 = t;
            t = SSLsetAnnotations(f_31, j_70);
            LocalPopChoice(p_29);
            {
              ATerm t_70 = NULL,u_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,g_31 = NULL;
              d_71 = t;
              if(match_cons(t, sym_App_2))
                {
                  u_70 = ATgetArgument(t, 0);
                  a_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(d_71);
              t_70 = t;
              t = u_70;
              t = mark_buv_0_0(t);
              b_71 = t;
              t = a_71;
              t = mark_build_vars_0_0(t);
              c_71 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, b_71, c_71);
              g_31 = t;
              t = SSLsetAnnotations(g_31, t_70);
            }
          }
        else
          {
            t = m_29;
            {
              ATerm q_29 = t;
              int r_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL,h_31 = NULL;
                  g_71 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      f_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_71);
                  e_71 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, f_71);
                  h_31 = t;
                  t = SSLsetAnnotations(h_31, e_71);
                  LocalPopChoice(r_29);
                  {
                    ATerm j_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,i_31 = NULL;
                    n_71 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        l_71 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(n_71);
                    j_71 = t;
                    t = l_71;
                    t = mark_buv_0_0(t);
                    m_71 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, m_71);
                    i_31 = t;
                    t = SSLsetAnnotations(i_31, j_71);
                  }
                }
              else
                {
                  t = q_29;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_8 (ATerm x_25, ATerm y_25, ATerm z_25, ATerm t)
{
  ATerm r_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL;
  u_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_25, y_25);
  t = a_9(x_25, y_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_29 = ATgetFirst((ATermList) t);
      r_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_25, y_25, (ATerm) ATinsert(CheckATermList(r_71), z_25));
  t = lookup_table_0_1(x_25, t);
  x_71 = t;
  t = (ATerm) ATinsert(CheckATermList(r_71), z_25);
  v_71 = t;
  t = x_71;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(y_25, v_71, w_71, t);
  t = u_71;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL;
  y_71 = t;
  t = term_b_15;
  z_71 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_71);
  a_72 = t;
  t = term_v_29;
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_15, (ATerm)ATmakeAppl(sym_Var_1, y_71), term_v_29);
  t = j_8(z_71, a_72, b_72, t);
  t = y_71;
  return(t);
}
static ATerm m_8 (ATerm v_25, ATerm w_25, ATerm t)
{
  ATerm c_72 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_25, w_25);
  t = a_9(v_25, w_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_72 = ATgetFirst((ATermList) t);
      {
        ATerm w_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_72;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL;
  h_73 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL,c_19 = NULL,d_19 = NULL,l_19 = NULL;
        t = term_b_15;
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_15, h_73);
        t = m_8(l_19, h_73, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_30 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_30) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            a_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, i_73);
        c_19 = t;
        t = (ATerm) ATinsert(ATempty, a_19);
        d_19 = t;
        t = SSLsetAnnotations(c_19, d_19);
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        {
          ATerm c_30 = t;
          int d_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_19 = NULL,x_19 = NULL,z_19 = NULL,f_20 = NULL;
              t = term_b_15;
              f_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_b_15, h_73);
              t = m_8(f_20, h_73, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm e_30 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_30) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  u_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, i_73);
              x_19 = t;
              t = (ATerm) ATinsert(ATempty, u_19);
              z_19 = t;
              t = SSLsetAnnotations(x_19, z_19);
              LocalPopChoice(d_30);
            }
          else
            {
              t = c_30;
              {
                ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,p_21 = NULL;
                t = term_b_15;
                p_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_15, h_73);
                t = m_8(p_21, h_73, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm f_30 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_30) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    z_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, i_73);
                a_21 = t;
                t = (ATerm) ATinsert(ATempty, z_20);
                b_21 = t;
                t = SSLsetAnnotations(a_21, b_21);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_31 = NULL;
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(h_30);
    }
  else
    {
      t = g_30;
    }
  q_73 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_73);
  n_73 = t;
  t = o_73;
  t = DeclareBound_0_0(t);
  p_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_73);
  r_31 = t;
  t = SSLsetAnnotations(r_31, n_73);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm j_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL,z_31 = NULL;
      v_73 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_73);
      t_73 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_73);
      z_31 = t;
      t = SSLsetAnnotations(z_31, t_73);
      LocalPopChoice(o_30);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = j_30;
      {
        ATerm q_30 = t;
        int r_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_32 = NULL;
            z_73 = t;
            if(match_cons(t, sym_App_2))
              {
                x_73 = ATgetArgument(t, 0);
                y_73 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_73);
            w_73 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, x_73, y_73);
            a_32 = t;
            t = SSLsetAnnotations(a_32, w_73);
            LocalPopChoice(r_30);
            {
              ATerm a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,b_32 = NULL;
              f_74 = t;
              if(match_cons(t, sym_App_2))
                {
                  b_74 = ATgetArgument(t, 0);
                  c_74 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_74);
              a_74 = t;
              t = b_74;
              t = mark_buv_0_0(t);
              d_74 = t;
              t = c_74;
              t = mark_build_vars_0_0(t);
              e_74 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, d_74, e_74);
              b_32 = t;
              t = SSLsetAnnotations(b_32, a_74);
            }
          }
        else
          {
            t = q_30;
            {
              ATerm s_30 = t;
              int u_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,c_32 = NULL;
                  i_74 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      h_74 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_74);
                  g_74 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, h_74);
                  c_32 = t;
                  t = SSLsetAnnotations(c_32, g_74);
                  LocalPopChoice(u_30);
                  {
                    ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL,j_32 = NULL;
                    m_74 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        k_74 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(m_74);
                    j_74 = t;
                    t = k_74;
                    t = mark_buv_0_0(t);
                    l_74 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, l_74);
                    j_32 = t;
                    t = SSLsetAnnotations(j_32, j_74);
                  }
                }
              else
                {
                  t = s_30;
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
  ATerm y_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_75 = NULL,i_75 = NULL;
      h_75 = t;
      if(match_cons(t, sym_Match_1))
        {
          i_75 = ATgetArgument(t, 0);
          {
            ATerm v_21 = NULL,y_21 = NULL,p_32 = NULL;
            t = SSLgetAnnotations(h_75);
            v_21 = t;
            t = i_75;
            t = mark_match_vars_0_0(t);
            y_21 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, y_21);
            p_32 = t;
            t = SSLsetAnnotations(p_32, v_21);
          }
        }
      else
        {
          ATerm h_22 = NULL,k_22 = NULL,q_32 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              i_75 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_75);
          h_22 = t;
          t = i_75;
          t = mark_build_vars_0_0(t);
          k_22 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, k_22);
          q_32 = t;
          t = SSLsetAnnotations(q_32, h_22);
        }
      LocalPopChoice(a_31);
    }
  else
    {
      t = y_30;
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
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
                  t = mark_let_0_0(t);
                  LocalPopChoice(m_31);
                }
              else
                {
                  t = l_31;
                  {
                    ATerm q_31 = t;
                    int w_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(w_31);
                      }
                    else
                      {
                        t = q_31;
                        {
                          ATerm x_31 = t;
                          int d_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL;
                              j_75 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  k_75 = ATgetArgument(t, 0);
                                  l_75 = ATgetArgument(t, 1);
                                  m_75 = ATgetArgument(t, 2);
                                  n_75 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = j_75;
                              t = r_7(k_75, l_75, m_75, n_75, t);
                              LocalPopChoice(d_32);
                            }
                          else
                            {
                              t = x_31;
                              {
                                ATerm f_32 = t;
                                int g_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(g_32);
                                  }
                                else
                                  {
                                    t = f_32;
                                    {
                                      ATerm h_32 = t;
                                      int k_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL;
                                          v_75 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              w_75 = ATgetArgument(t, 0);
                                              t = w_75;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  s_75 = ATgetArgument(t, 0);
                                                  t_75 = ATgetArgument(t, 1);
                                                  u_75 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = v_75;
                                              t = q_7(s_75, t_75, u_75, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  w_75 = ATgetArgument(t, 0);
                                                  t = w_75;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      s_75 = ATgetArgument(t, 0);
                                                      t_75 = ATgetArgument(t, 1);
                                                      u_75 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = v_75;
                                                  t = p_7(s_75, t_75, u_75, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      w_75 = ATgetArgument(t, 0);
                                                      x_75 = ATgetArgument(t, 1);
                                                      y_75 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = v_75;
                                                  t = o_7(w_75, x_75, y_75, t);
                                                }
                                            }
                                          LocalPopChoice(k_32);
                                        }
                                      else
                                        {
                                          t = h_32;
                                          {
                                            ATerm l_32 = t;
                                            int m_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(m_32);
                                              }
                                            else
                                              {
                                                t = l_32;
                                                {
                                                  ATerm n_32 = t;
                                                  int o_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(o_32);
                                                    }
                                                  else
                                                    {
                                                      t = n_32;
                                                      {
                                                        ATerm r_32 = t;
                                                        int s_32 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm i_76 = NULL;
                                                            i_76 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm w_32 = ATgetArgument(t, 0);
                                                                ATerm x_32 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = i_76;
                                                            t = n_7(t);
                                                            LocalPopChoice(s_32);
                                                          }
                                                        else
                                                          {
                                                            t = r_32;
                                                            {
                                                              ATerm y_32 = t;
                                                              int d_33 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(d_33);
                                                                }
                                                              else
                                                                {
                                                                  t = y_32;
                                                                  {
                                                                    ATerm e_33 = t;
                                                                    int f_33 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(f_33);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_33;
                                                                        {
                                                                          ATerm g_33 = t;
                                                                          int j_33 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(j_33);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_33;
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
static ATerm k_11 (ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
  v_76 = t;
  t = term_q_14;
  w_76 = t;
  t = (ATerm) ATinsert(ATempty, term_k_33);
  x_76 = t;
  t = SSL_printnl(w_76, x_76);
  t = v_76;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,t_32 = NULL;
  b_77 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_77);
  y_76 = t;
  t = z_76;
  t = map_1_0(mark_buv_0_0, t);
  a_77 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_77);
  t_32 = t;
  t = SSLsetAnnotations(t_32, y_76);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  c_77 = t;
  t = term_q_14;
  d_77 = t;
  t = (ATerm) ATinsert(ATempty, term_n_33);
  e_77 = t;
  t = SSL_printnl(d_77, e_77);
  t = c_77;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_32 = NULL,u_32 = NULL;
  t = if_verbose4_1_0(k_11, t);
  u_76 = t;
  if(match_cons(t, sym_Specification_1))
    {
      o_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_76);
  n_76 = t;
  t = o_76;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_76 = ATgetFirst((ATermList) t);
      r_76 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_76);
  p_76 = t;
  t = r_76;
  t = Cons_2_0(m_11, n_11, t);
  s_76 = t;
  t = (ATerm) ATinsert(CheckATermList(s_76), q_76);
  u_32 = t;
  t = SSLsetAnnotations(u_32, p_76);
  t_76 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_76);
  v_32 = t;
  t = SSLsetAnnotations(v_32, n_76);
  t = if_verbose4_1_0(s_11, t);
  return(t);
}
static ATerm o_8 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm f_77 = NULL;
  t = SSL_fputc(k_35, l_35);
  f_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_77);
  return(t);
}
static ATerm p_8 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm g_77 = NULL;
  t = SSL_write_term_to_stream_text(w_40, x_40);
  g_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_77);
  return(t);
}
static ATerm r_8 (ATerm m_93 (ATerm), ATerm f_344, ATerm c_41, ATerm t)
{
  ATerm h_77 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_344, term_o_33);
  t = v_8(t);
  h_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_77, c_41);
  t = m_93(t);
  t = fclose_0_0(t);
  t = c_41;
  return(t);
}
static ATerm q_8 (ATerm s_40, ATerm t_40, ATerm t)
{
  ATerm i_77 = NULL;
  t = SSL_write_term_to_stream_baf(s_40, t_40);
  i_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_77);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_33 = ATgetArgument(t, 0);
      if(match_cons(q_33, sym_Stream_1))
        {
          x_22 = ATgetArgument(q_33, 0);
        }
      else
        _fail(t);
      y_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(x_22, y_22, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm n_23 = NULL,p_23 = NULL,r_23 = NULL,v_23 = NULL,w_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      if(match_cons(s_33, sym_Stream_1))
        {
          v_23 = ATgetArgument(s_33, 0);
        }
      else
        _fail(t);
      w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_8(v_23, w_23, t);
  n_23 = t;
  t = term_u_33;
  p_23 = t;
  t = n_23;
  if(match_cons(t, sym_Stream_1))
    {
      r_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_33, n_23);
  t = o_8(p_23, r_23, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,w_78 = NULL,x_78 = NULL,a_33 = NULL,z_32 = NULL;
  n_77 = t;
  if(match_cons(t, sym__2))
    {
      u_77 = ATgetArgument(t, 0);
      v_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_77);
  t_77 = t;
  t = u_77;
  {
    ATerm w_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_11 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((m_77 != NULL) && (m_77 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                m_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(t_11, t);
        LocalPopChoice(y_33);
      }
    else
      {
        t = w_33;
        t = term_a_34;
        m_77 = t;
      }
  }
  w_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_77, v_77);
  z_32 = t;
  t = SSLsetAnnotations(z_32, t_77);
  t = n_77;
  if(match_cons(t, sym__2))
    {
      p_77 = ATgetArgument(t, 0);
      q_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_77);
  o_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_77, (ATerm) ATmakeAppl(sym__2, not_null(m_77), q_77));
  a_33 = t;
  t = SSLsetAnnotations(a_33, o_77);
  s_77 = t;
  if(match_cons(t, sym__2))
    {
      w_78 = ATgetArgument(t, 0);
      x_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,b_33 = NULL;
        t = SSLgetAnnotations(s_77);
        q_22 = t;
        t = w_78;
        t = fetch_1_0(u_11, t);
        t_22 = t;
        t = x_78;
        if(match_cons(t, sym__2))
          {
            v_22 = ATgetArgument(t, 0);
            w_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_8(v_11, v_22, w_22, t);
        u_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_22, u_22);
        b_33 = t;
        t = SSLsetAnnotations(b_33, q_22);
        LocalPopChoice(f_34);
      }
    else
      {
        t = c_34;
        {
          ATerm d_23 = NULL,h_23 = NULL,j_23 = NULL,l_23 = NULL,c_33 = NULL;
          t = SSLgetAnnotations(s_77);
          d_23 = t;
          t = x_78;
          if(match_cons(t, sym__2))
            {
              j_23 = ATgetArgument(t, 0);
              l_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_8(a_12, j_23, l_23, t);
          h_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_78, h_23);
          c_33 = t;
          t = SSLsetAnnotations(c_33, d_23);
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
ATerm apply_strategy_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL;
  e_79 = t;
  t = dtime_0_0(t);
  t = e_79;
  t = o_108(t);
  d_79 = t;
  t = dtime_0_0(t);
  a_79 = t;
  t = d_79;
  if(match_cons(t, sym__2))
    {
      b_79 = ATgetArgument(t, 0);
      c_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_79), (ATerm) ATmakeAppl(sym_Runtime_1, a_79)), c_79);
  return(t);
}
static ATerm s_79 (ATerm m_79, ATerm t)
{
  t = SSL_fclose(m_79);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_79 = NULL,q_79 = NULL;
  q_79 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_79 = ATgetArgument(t, 0);
      {
        ATerm g_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_79);
            LocalPopChoice(h_34);
          }
        else
          {
            t = g_34;
            t = s_79(q_79, t);
          }
      }
    }
  else
    {
      t = s_79(q_79, t);
    }
  return(t);
}
static ATerm s_8 (ATerm y_40, ATerm t)
{
  t = SSL_read_term_from_stream(y_40);
  return(t);
}
static ATerm t_8 (ATerm d_34, ATerm e_34, ATerm t)
{
  t = SSL_strcat(d_34, e_34);
  return(t);
}
static ATerm u_8 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm t_79 = NULL;
  t = SSL_fopen(m_35, n_35);
  t_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_79);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_79 = NULL;
  t = SSL_stdin_stream();
  u_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_79);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_79 = NULL;
  t = SSL_stdout_stream();
  v_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_79);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_79 = NULL;
  t = SSL_stderr_stream();
  w_79 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_79);
  return(t);
}
static ATerm d_81 (ATerm c_80, ATerm t)
{
  ATerm d_80 = NULL;
  t = SSL_explode_term(c_80);
  if(match_cons(t, sym__2))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_34 = ATgetArgument(t, 1);
        if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
          {
            d_80 = ATgetFirst((ATermList) j_34);
            {
              ATerm k_34 = (ATerm) ATgetNext((ATermList) j_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_80;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_80;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_80;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_80;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_81 (ATerm g_80, ATerm h_80, ATerm i_80, ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL,o_80 = NULL,h_33 = NULL;
  t = SSLgetAnnotations(i_80);
  l_80 = t;
  t = g_80;
  if(match_cons(t, sym_Path_1))
    {
      o_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_80, h_80);
  h_33 = t;
  t = SSLsetAnnotations(h_33, l_80);
  if(match_cons(t, sym__2))
    {
      j_80 = ATgetArgument(t, 0);
      k_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(j_80, k_80, t);
  return(t);
}
static ATerm f_81 (ATerm q_80, ATerm r_80, ATerm s_80, ATerm t)
{
  ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL,y_80 = NULL,i_33 = NULL;
  t = SSLgetAnnotations(s_80);
  v_80 = t;
  t = SSL_is_string(q_80);
  y_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_80, r_80);
  i_33 = t;
  t = SSLsetAnnotations(i_33, v_80);
  if(match_cons(t, sym__2))
    {
      t_80 = ATgetArgument(t, 0);
      u_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8(t_80, u_80, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL;
  a_81 = t;
  if(match_cons(t, sym__2))
    {
      b_81 = ATgetArgument(t, 0);
      c_81 = ATgetArgument(t, 1);
      {
        ATerm l_34 = t;
        int m_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_81(a_81, t);
            LocalPopChoice(m_34);
          }
        else
          {
            t = l_34;
            {
              ATerm n_34 = t;
              int o_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_81(b_81, c_81, a_81, t);
                  LocalPopChoice(o_34);
                }
              else
                {
                  t = n_34;
                  t = f_81(b_81, c_81, a_81, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_81(a_81, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_81 = NULL,i_81 = NULL,j_81 = NULL,o_81 = NULL;
  o_81 = t;
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_81, term_r_34);
        t = v_8(t);
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        {
          ATerm j_24 = NULL,k_24 = NULL;
          t = term_s_34;
          k_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_34, o_81);
          t = t_8(k_24, o_81, t);
          j_24 = t;
          t = SSL_perror(j_24);
          _fail(t);
        }
      }
  }
  i_81 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_8(j_81, t);
  h_81 = t;
  t = i_81;
  t = fclose_0_0(t);
  t = h_81;
  return(t);
}
ATerm fetch_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  static ATerm n_82 (ATerm t)
  {
    ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
    k_82 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_82 = ATgetFirst((ATermList) t);
        m_82 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_24 = NULL,v_24 = NULL,l_33 = NULL;
          t = SSLgetAnnotations(k_82);
          s_24 = t;
          t = l_82;
          t = z_94(t);
          v_24 = t;
          t = (ATerm) ATinsert(CheckATermList(m_82), v_24);
          l_33 = t;
          t = SSLsetAnnotations(l_33, s_24);
          LocalPopChoice(u_34);
        }
      else
        {
          t = t_34;
          {
            ATerm o_25 = NULL,u_25 = NULL,m_33 = NULL;
            t = SSLgetAnnotations(k_82);
            o_25 = t;
            t = m_82;
            t = n_82(t);
            u_25 = t;
            t = (ATerm) ATinsert(CheckATermList(u_25), l_82);
            m_33 = t;
            t = SSLsetAnnotations(m_33, o_25);
          }
        }
    }
    return(t);
  }
  t = n_82(t);
  return(t);
}
static ATerm a_9 (ATerm d_27, ATerm e_27, ATerm t)
{
  ATerm q_82 = NULL;
  t = lookup_table_0_1(d_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_9(e_27, q_82, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  ATerm t_82 = NULL;
  t_82 = t;
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL;
        t = term_x_14;
        w_82 = t;
        t = term_y_14;
        x_82 = t;
        t = term_z_14;
        t = a_9(w_82, x_82, t);
        v_82 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_82, term_x_34);
        t = geq_0_0(t);
        t = t_82;
        t = a_117(t);
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
        t = t_82;
      }
  }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm a_83 = NULL;
  a_83 = t;
  if(match_string(t, "-k"))
    {
      t = a_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_83;
    }
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
  b_83 = t;
  t = SSL_string_to_int(b_83);
  c_83 = t;
  t = term_y_34;
  d_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_34, c_83);
  t = d_9(d_83, c_83, t);
  t = b_83;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_12, e_12, f_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm f_83 = NULL;
  f_83 = t;
  if(match_string(t, "-S"))
    {
      t = f_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_83;
    }
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL;
  t = term_y_14;
  g_83 = t;
  t = term_a_35;
  h_83 = t;
  t = term_b_35;
  t = d_9(g_83, h_83, t);
  t = term_c_35;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_d_35;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL;
  i_83 = t;
  t = SSL_string_to_int(i_83);
  j_83 = t;
  t = term_y_14;
  k_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, j_83);
  t = d_9(k_83, j_83, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_83);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_e_35;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL;
  t = term_f_35;
  l_83 = t;
  t = term_p_14;
  m_83 = t;
  t = term_g_35;
  t = d_9(l_83, m_83, t);
  t = term_h_35;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_12, h_12, i_12, t);
      LocalPopChoice(o_35);
    }
  else
    {
      t = j_35;
      {
        ATerm p_35 = t;
        int q_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_12, k_12, l_12, t);
            LocalPopChoice(q_35);
          }
        else
          {
            t = p_35;
            t = Option_3_0(n_12, o_12, p_12, t);
          }
      }
    }
  return(t);
}
static ATerm d_9 (ATerm p_55, ATerm q_55, ATerm t)
{
  ATerm n_83 = NULL,o_83 = NULL;
  t = term_x_14;
  n_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_14, p_55, q_55);
  t = lookup_table_0_1(n_83, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(p_55, q_55, o_83, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_14, p_55, q_55);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL;
      t = term_p_14;
      t = e_0(t);
      w_83 = t;
      t = term_r_35;
      x_83 = t;
      t = term_s_35;
      y_83 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_35, term_s_35, w_83);
      t = b_9(x_83, y_83, w_83, t);
      _fail(t);
    }
  else
    {
      ATerm b_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_83 = ATgetFirst((ATermList) t);
          v_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_83;
      t = c_0(t);
      t = term_p_14;
      t = d_0(t);
      b_84 = t;
      t = (ATerm) ATinsert(CheckATermList(v_83), b_84);
    }
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm d_84 = NULL;
  d_84 = t;
  if(match_string(t, "-o"))
    {
      t = d_84;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_84;
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL;
  e_84 = t;
  t = term_t_35;
  f_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_35, e_84);
  t = d_9(f_84, e_84, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_84);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_u_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_12, s_12, t_12, t);
  return(t);
}
static ATerm b_9 (ATerm k_25, ATerm l_25, ATerm j_25, ATerm t)
{
  ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL;
  h_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_25, l_25);
  {
    ATerm v_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_35 = ATgetArgument(t, 0);
            ATerm y_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_25, l_25);
        t = a_9(k_25, l_25, t);
        LocalPopChoice(w_35);
      }
    else
      {
        t = v_35;
        t = (ATerm) ATempty;
      }
  }
  i_84 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_25, l_25, (ATerm) ATinsert(CheckATermList(i_84), j_25));
  t = lookup_table_0_1(k_25, t);
  l_84 = t;
  t = (ATerm) ATinsert(CheckATermList(i_84), j_25);
  j_84 = t;
  t = l_84;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(l_25, j_84, k_84, t);
  t = h_84;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_84 = NULL,y_84 = NULL,z_84 = NULL,f_85 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL;
      t = term_p_14;
      t = n_0(t);
      h_85 = t;
      t = term_r_35;
      i_85 = t;
      t = term_s_35;
      j_85 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_35, term_s_35, h_85);
      t = b_9(i_85, j_85, h_85, t);
      _fail(t);
    }
  else
    {
      ATerm n_85 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_84 = ATgetFirst((ATermList) t);
          y_84 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_84;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_84 = ATgetFirst((ATermList) t);
          f_85 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_84;
      t = k_0(t);
      t = z_84;
      t = l_0(t);
      n_85 = t;
      t = (ATerm) ATinsert(CheckATermList(f_85), n_85);
    }
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm p_85 = NULL;
  p_85 = t;
  if(match_string(t, "-i"))
    {
      t = p_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_85;
    }
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL;
  q_85 = t;
  t = term_z_35;
  r_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_35, q_85);
  t = d_9(r_85, q_85, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_85);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_a_36;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_12, v_12, w_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_14;
  t = whoami_0_0(t);
  s_85 = t;
  t = term_q_14;
  u_85 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_36), s_85);
  v_85 = t;
  t = SSL_printnl(u_85, v_85);
  t = term_t_14;
  t_85 = t;
  t = SSL_exit(t_85);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL;
  t = term_x_14;
  w_85 = t;
  t = term_c_36;
  x_85 = t;
  t = term_d_36;
  t = a_9(w_85, x_85, t);
  return(t);
}
static ATerm w_8 (ATerm c_42, ATerm d_42, ATerm t)
{
  ATerm e_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_42, d_42);
      LocalPopChoice(f_36);
    }
  else
    {
      t = e_36;
      t = SSL_addr(c_42, d_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm t)
{
  ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL;
  z_85 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_85;
      t = v_101(t);
    }
  else
    {
      ATerm e_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_86 = ATgetFirst((ATermList) t);
          b_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_86;
      t = foldr_2_0(v_101, w_101, t);
      e_86 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_86, e_86);
      t = w_101(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_a_35;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm i_26 = NULL,k_26 = NULL;
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_8(i_26, k_26, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_86 = NULL,e_26 = NULL,f_26 = NULL;
  t = times_0_0(t);
  f_26 = t;
  t = SSL_explode_term(f_26);
  if(match_cons(t, sym__2))
    {
      ATerm g_36 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_26;
  t = foldr_2_0(x_12, z_12, t);
  h_86 = t;
  t = SSL_TicksToSeconds(h_86);
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
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_86;
        if((t_86 != t))
          {
            _fail(t);
          }
        t = s_86;
        LocalPopChoice(i_36);
      }
    else
      {
        t = h_36;
        t = (ATerm) ATmakeAppl(sym__2, t_86, u_86);
        {
          ATerm j_36 = t;
          int k_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_86, u_86);
              LocalPopChoice(k_36);
            }
          else
            {
              t = j_36;
              t = SSL_gtr(t_86, u_86);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_86, u_86);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_116 (ATerm), ATerm t)
{
  ATerm y_86 = NULL;
  y_86 = t;
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_87 = NULL,b_87 = NULL,c_87 = NULL;
        t = term_x_14;
        b_87 = t;
        t = term_y_14;
        c_87 = t;
        t = term_z_14;
        t = a_9(b_87, c_87, t);
        a_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_87, term_t_14);
        t = geq_0_0(t);
        t = y_86;
        t = z_116(t);
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        t = y_86;
      }
  }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm e_87 = NULL,h_87 = NULL,j_87 = NULL,k_87 = NULL;
  t = run_time_0_0(t);
  e_87 = t;
  t = term_p_14;
  t = whoami_0_0(t);
  h_87 = t;
  t = term_q_14;
  j_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_36), e_87), term_n_36), h_87);
  k_87 = t;
  t = SSL_printnl(j_87, k_87);
  t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_36), e_87), term_n_36), h_87));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_87 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_35;
  l_87 = t;
  t = SSL_exit(l_87);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm v_87 = NULL,w_87 = NULL;
  w_87 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_87;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_87 = ATgetArgument(t, 0);
          {
            ATerm h_27 = NULL,p_33 = NULL;
            t = SSLgetAnnotations(w_87);
            h_27 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_87);
            p_33 = t;
            t = SSLsetAnnotations(p_33, h_27);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_87;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_109 (ATerm), ATerm t)
{
  ATerm p_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_87 = NULL,p_87 = NULL;
      t = term_x_14;
      o_87 = t;
      t = term_r_36;
      p_87 = t;
      t = term_s_36;
      t = a_9(o_87, p_87, t);
      LocalPopChoice(q_36);
    }
  else
    {
      t = p_36;
      t = fetch_1_0(b_13, t);
    }
  t = m_109(t);
  return(t);
}
static ATerm e_9 (ATerm r_28, ATerm s_28, ATerm t_28, ATerm t)
{
  ATerm y_87 = NULL;
  t = SSL_hashtable_put(t_28, r_28, s_28);
  y_87 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_87);
  return(t);
}
static ATerm f_9 (ATerm u_28, ATerm v_28, ATerm t)
{
  t = SSL_hashtable_get(v_28, u_28);
  return(t);
}
ATerm lookup_table_0_1 (ATerm w_26, ATerm t)
{
  ATerm h_88 = NULL;
  t = table_hashtable_0_0(t);
  h_88 = t;
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_27 = NULL;
        t = h_88;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_9(w_26, x_27, t);
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
        {
          ATerm g_28 = NULL;
          t = w_26;
          t = table_create_0_0(t);
          t = h_88;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_9(w_26, g_28, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm z_28, ATerm a_29, ATerm t)
{
  ATerm k_88 = NULL;
  t = SSL_hashtable_create(z_28, a_29);
  k_88 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_88);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL,p_88 = NULL,q_88 = NULL;
  l_88 = t;
  t = term_v_36;
  p_88 = t;
  t = term_w_36;
  q_88 = t;
  t = l_88;
  t = new_hashtable_0_2(p_88, q_88, t);
  m_88 = t;
  t = l_88;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(l_88, m_88, n_88, t);
  t = l_88;
  return(t);
}
static ATerm y_8 (ATerm w_28, ATerm x_28, ATerm t)
{
  ATerm r_88 = NULL;
  t = SSL_hashtable_remove(x_28, w_28);
  r_88 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_88);
  return(t);
}
static ATerm z_8 (ATerm b_29, ATerm t)
{
  ATerm s_88 = NULL;
  t = SSL_hashtable_destroy(b_29);
  s_88 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_88);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm t_88 = NULL;
  t = SSL_table_hashtable();
  t_88 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_88);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL,x_88 = NULL;
  u_88 = t;
  t = table_hashtable_0_0(t);
  v_88 = t;
  t = lookup_table_0_1(u_88, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_8(x_88, t);
  t = v_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8(u_88, w_88, t);
  t = u_88;
  return(t);
}
ATerm map_1_0 (ATerm p_94 (ATerm), ATerm t)
{
  static ATerm m_89 (ATerm t)
  {
    ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL;
    j_89 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_89;
      }
    else
      {
        ATerm l_28 = NULL,o_28 = NULL,p_28 = NULL,r_33 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_89 = ATgetFirst((ATermList) t);
            l_89 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_89);
        l_28 = t;
        t = k_89;
        t = p_94(t);
        o_28 = t;
        t = l_89;
        t = m_89(t);
        p_28 = t;
        t = (ATerm) ATinsert(CheckATermList(p_28), o_28);
        r_33 = t;
        t = SSLsetAnnotations(r_33, l_28);
      }
    return(t);
  }
  t = m_89(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_89 = NULL,q_89 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_89 = ATgetFirst((ATermList) t);
      q_89 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_89 = NULL,v_89 = NULL;
        static ATerm c_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_89)), not_null(v_89));
          return(t);
        }
        t = q_89;
        t = i_0(t);
        if(((u_89 != NULL) && (u_89 != t)))
          _fail(t);
        else
          u_89 = t;
        t = p_89;
        t = g_0(t);
        if(((v_89 != NULL) && (v_89 != t)))
          _fail(t);
        else
          v_89 = t;
        t = q_89;
        t = reverse_acc_2_0(g_0, c_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_14;
      t = i_0(t);
    }
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL,t_33 = NULL;
  d_90 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_90);
  b_90 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_90);
  t_33 = t;
  t = SSLsetAnnotations(t_33, b_90);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm f_90 = NULL;
  f_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_90), term_x_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_89 = NULL,y_89 = NULL;
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_89 = NULL,a_90 = NULL;
      t = term_x_14;
      z_89 = t;
      t = term_c_36;
      a_90 = t;
      t = term_d_36;
      t = a_9(z_89, a_90, t);
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      t = fetch_1_0(d_13, t);
    }
  t = term_a_37;
  t = echo_0_0(t);
  t = term_r_35;
  x_89 = t;
  t = term_s_35;
  y_89 = t;
  t = term_b_37;
  t = a_9(x_89, y_89, t);
  t = reverse_acc_2_0(_id, e_13, t);
  t = map_1_0(g_13, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_90;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_37 = ATgetFirst((ATermList) t);
                ATerm f_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_90;
          }
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        t = (ATerm) ATinsert(ATempty, h_90);
      }
  }
  i_90 = t;
  t = term_a_34;
  j_90 = t;
  t = SSL_printnl(j_90, i_90);
  t = h_90;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_90 = NULL,o_90 = NULL;
  t = term_x_14;
  n_90 = t;
  t = term_c_36;
  o_90 = t;
  t = term_d_36;
  t = a_9(n_90, o_90, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm p_90 = NULL,q_90 = NULL;
  t = term_g_37;
  p_90 = t;
  t = term_p_14;
  q_90 = t;
  t = term_h_37;
  t = d_9(p_90, q_90, t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_i_37;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL;
  t = term_g_37;
  t_90 = t;
  t = term_p_14;
  u_90 = t;
  t = term_h_37;
  t = d_9(t_90, u_90, t);
  t = term_j_37;
  r_90 = t;
  t = term_p_14;
  s_90 = t;
  t = term_k_37;
  t = d_9(r_90, s_90, t);
  t = term_l_37;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_m_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_13, j_13, o_13, t);
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
      t = Option_3_0(p_13, q_13, s_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,v_33 = NULL;
  a_91 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_90 = ATgetFirst((ATermList) t);
      x_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_91);
  v_90 = t;
  t = w_90;
  t = q_83(t);
  y_90 = t;
  t = x_90;
  t = r_83(t);
  z_90 = t;
  t = (ATerm) ATinsert(CheckATermList(z_90), y_90);
  v_33 = t;
  t = SSLsetAnnotations(v_33, v_90);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm f_91 = NULL,g_91 = NULL,h_91 = NULL,i_91 = NULL,k_91 = NULL,l_91 = NULL,x_33 = NULL;
  f_91 = t;
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_37;
        t = r_112(t);
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
      }
  }
  t = f_91;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_91 = ATgetFirst((ATermList) t);
      i_91 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_91);
  g_91 = t;
  t = term_c_36;
  l_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, h_91);
  t = d_9(l_91, h_91, t);
  t = i_91;
  {
    static ATerm v_91 (ATerm t)
    {
      ATerm s_37 = t;
      int t_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_37 = t;
          int v_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_91 = NULL;
              o_91 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_91;
              LocalPopChoice(v_37);
            }
          else
            {
              t = u_37;
              t = r_112(t);
              t = Cons_2_0(_id, v_91, t);
            }
          LocalPopChoice(t_37);
        }
      else
        {
          t = s_37;
          {
            ATerm r_91 = NULL,s_91 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_91 = ATgetFirst((ATermList) t);
                s_91 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_91), (ATerm) ATmakeAppl(sym_Undefined_1, r_91));
          }
        }
      return(t);
    }
    t = v_91(t);
  }
  k_91 = t;
  t = (ATerm) ATinsert(CheckATermList(k_91), (ATerm) ATmakeAppl(sym_Program_1, h_91));
  x_33 = t;
  t = SSLsetAnnotations(x_33, g_91);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm i_92 = NULL;
  i_92 = t;
  if(match_string(t, "--help"))
    {
      t = i_92;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_92;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_92;
        }
    }
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL;
  t = term_r_36;
  j_92 = t;
  t = term_p_14;
  k_92 = t;
  t = term_w_37;
  t = d_9(j_92, k_92, t);
  t = term_x_37;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_y_37;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_112 (ATerm), ATerm t)
{
  ATerm a_92 = NULL,b_92 = NULL,c_92 = NULL,d_92 = NULL,e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL;
  c_92 = t;
  t = term_r_35;
  d_92 = t;
  t = term_z_37;
  t = lookup_table_0_1(d_92, t);
  h_92 = t;
  t = term_s_35;
  e_92 = t;
  t = (ATerm) ATempty;
  f_92 = t;
  t = h_92;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(e_92, f_92, g_92, t);
  t = c_92;
  {
    static ATerm t_13 (ATerm t)
    {
      ATerm a_38 = t;
      int b_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_112(t);
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
                t = Option_3_0(u_13, v_13, b_14, t);
                LocalPopChoice(d_38);
              }
            else
              {
                t = c_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_13, t);
  }
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_93 = NULL;
        b_93 = t;
        {
          ATerm g_38 = t;
          int h_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_29 = NULL;
              t = b_93;
              {
                ATerm i_38 = t;
                int j_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_29 = NULL,y_29 = NULL;
                    t = term_x_14;
                    x_29 = t;
                    t = term_r_36;
                    y_29 = t;
                    t = term_s_36;
                    t = a_9(x_29, y_29, t);
                    LocalPopChoice(j_38);
                  }
                else
                  {
                    t = i_38;
                    t = fetch_1_0(c_14, t);
                  }
              }
              t = b_93;
              t = default_system_usage_0_0(t);
              t = term_a_35;
              s_29 = t;
              t = SSL_exit(s_29);
              LocalPopChoice(h_38);
            }
          else
            {
              t = g_38;
              {
                ATerm i_30 = NULL,k_30 = NULL,n_30 = NULL;
                t = term_x_14;
                k_30 = t;
                t = term_g_37;
                n_30 = t;
                t = term_k_38;
                t = a_9(k_30, n_30, t);
                t = b_93;
                t = default_system_about_0_0(t);
                t = term_a_35;
                i_30 = t;
                t = SSL_exit(i_30);
              }
            }
        }
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        {
          ATerm l_38 = t;
          int m_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_93 = NULL,d_93 = NULL,e_93 = NULL;
              static ATerm d_14 (ATerm t)
              {
                ATerm f_93 = NULL,g_93 = NULL,h_93 = NULL,z_33 = NULL;
                h_93 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_93 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_93);
                f_93 = t;
                t = g_93;
                if(((a_92 != NULL) && (a_92 != t)))
                  _fail(t);
                else
                  a_92 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_93);
                z_33 = t;
                t = SSLsetAnnotations(z_33, f_93);
                return(t);
              }
              t = fetch_1_0(d_14, t);
              t = term_q_14;
              d_93 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_92)), term_n_38);
              e_93 = t;
              t = SSL_printnl(d_93, e_93);
              t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_92)), term_n_38));
              t = default_system_usage_0_0(t);
              t = term_t_14;
              c_93 = t;
              t = SSL_exit(c_93);
              LocalPopChoice(m_38);
            }
          else
            {
              t = l_38;
            }
        }
      }
  }
  b_92 = t;
  t = term_r_35;
  t = table_destroy_0_0(t);
  t = b_92;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm t)
{
  ATerm n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL;
  t = parse_options_1_0(o_109, t);
  n_93 = t;
  t = term_o_38;
  t = table_create_0_0(t);
  t = term_o_38;
  o_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_38, term_p_38, n_93);
  t = lookup_table_0_1(o_93, t);
  r_93 = t;
  t = term_p_38;
  p_93 = t;
  t = r_93;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_9(p_93, n_93, q_93, t);
  t = n_93;
  t = q_109(t);
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_109, t);
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
              t = r_109(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_38);
            }
          else
            {
              t = s_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = if_verbose2_1_0(l_14, t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm s_93 = NULL,t_93 = NULL;
  t = term_u_38;
  s_93 = t;
  t = term_p_14;
  t_93 = t;
  t = term_v_38;
  t = d_9(s_93, t_93, t);
  t = term_w_38;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_x_38;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL;
  u_93 = t;
  t = term_x_14;
  y_93 = t;
  t = term_c_36;
  z_93 = t;
  t = term_d_36;
  t = a_9(y_93, z_93, t);
  v_93 = t;
  t = term_q_14;
  w_93 = t;
  t = (ATerm) ATinsert(ATempty, v_93);
  x_93 = t;
  t = SSL_printnl(w_93, x_93);
  t = u_93;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_108 (ATerm), ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm t)
{
  static ATerm e_14 (ATerm t)
  {
    ATerm y_38 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_108(t);
        LocalPopChoice(e_39);
      }
    else
      {
        t = y_38;
        {
          ATerm f_39 = t;
          int g_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(g_39);
            }
          else
            {
              t = f_39;
              {
                ATerm h_39 = t;
                int i_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(i_39);
                  }
                else
                  {
                    t = h_39;
                    {
                      ATerm j_39 = t;
                      int k_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(h_14, i_14, k_14, t);
                          LocalPopChoice(k_39);
                        }
                      else
                        {
                          t = j_39;
                          {
                            ATerm l_39 = t;
                            int m_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(m_39);
                              }
                            else
                              {
                                t = l_39;
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
  static ATerm g_14 (ATerm t)
  {
    ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL;
    b_94 = t;
    {
      ATerm n_39 = t;
      int o_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm m_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_94 != NULL) && (a_94 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_94 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_14, t);
          LocalPopChoice(o_39);
        }
      else
        {
          t = n_39;
          t = term_p_39;
          a_94 = t;
        }
    }
    t = not_null(a_94);
    t = ReadFromFile_0_0(t);
    c_94 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_94, c_94);
    t = apply_strategy_1_0(x_108, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(e_14, z_108, f_14, g_14, t);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,b_34 = NULL;
  h_94 = t;
  if(match_cons(t, sym__2))
    {
      e_94 = ATgetArgument(t, 0);
      f_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_94);
  d_94 = t;
  t = f_94;
  t = mark_bound_unbound_vars_0_0(t);
  g_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_94, g_94);
  b_34 = t;
  t = SSLsetAnnotations(b_34, d_94);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(o_14, _fail, default_usage_0_0, t);
  return(t);
}
