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
ATerm term_s_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_x_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_n_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_v_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_l_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_d_33;
ATerm term_b_33;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_z_18;
ATerm term_n_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Defined_2, term_h_18, term_i_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_w_27, term_x_27);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Defined_2, term_f_29, term_i_18);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_m_34);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_r_34, term_l_14);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_k_35);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_z_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_a_35);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym__2, term_k_36, term_l_14);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__2, term_n_36, term_l_14);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym__2, term_z_35, term_l_14);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_k_36);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym__2, term_x_37, term_l_14);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm t_115 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm m_83 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm l_83 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm k_83 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm w_85 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm c_7 (ATerm s_23, ATerm t_23, ATerm u_23, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_7 (ATerm m_23, ATerm q_23, ATerm o_23, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm e_7 (ATerm g_23, ATerm k_23, ATerm i_23, ATerm t);
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
static ATerm f_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm f_7 (ATerm e_22, ATerm f_22, ATerm g_22, ATerm i_22, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm g_7 (ATerm p_20, ATerm q_20, ATerm o_20, ATerm t);
static ATerm s_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm h_7 (ATerm n_26, ATerm m_26, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm c_21, ATerm t);
ATerm tboundin_3_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm s_116 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm l_7 (ATerm r_97 (ATerm), ATerm n_48, ATerm m_48, ATerm t);
ATerm foldr_3_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t);
static ATerm m_7 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm r_48, ATerm q_48, ATerm t);
static ATerm n_7 (ATerm m_97 (ATerm), ATerm l_48, ATerm k_48, ATerm t);
ATerm at_end_1_0 (ATerm x_93 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_56 (ATerm w_55, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_7 (ATerm h_615, ATerm m_615, ATerm c_60, ATerm t);
ATerm while_not_2_0 (ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t);
ATerm for_3_0 (ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm u_61 (ATerm h_59, ATerm m_59, ATerm n_59, ATerm t);
static ATerm z_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm free_vars_3_0 (ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm u_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm u_7 (ATerm v_83 (ATerm), ATerm g_24, ATerm e_24, ATerm t);
static ATerm z_10 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm v_7 (ATerm p_25, ATerm q_25, ATerm t);
ATerm end_scope_1_0 (ATerm s_83 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm r_83 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm t);
static ATerm d_11 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm w_7 (ATerm x_25, ATerm y_25, ATerm z_25, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm z_7 (ATerm v_25, ATerm w_25, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm b_8 (ATerm b_34, ATerm c_34, ATerm t);
static ATerm c_8 (ATerm n_39, ATerm o_39, ATerm t);
static ATerm e_8 (ATerm d_92 (ATerm), ATerm q_327, ATerm t_39, ATerm t);
static ATerm d_8 (ATerm j_39, ATerm k_39, ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm f_107 (ATerm), ATerm t);
static ATerm g_77 (ATerm a_77, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_8 (ATerm p_39, ATerm t);
static ATerm g_8 (ATerm u_32, ATerm v_32, ATerm t);
static ATerm h_8 (ATerm d_34, ATerm e_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_78 (ATerm q_77, ATerm t);
static ATerm s_78 (ATerm u_77, ATerm v_77, ATerm w_77, ATerm t);
static ATerm t_78 (ATerm e_78, ATerm f_78, ATerm g_78, ATerm t);
static ATerm i_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_93 (ATerm), ATerm t);
static ATerm l_8 (ATerm b_27, ATerm c_27, ATerm t);
ATerm if_verbose2_1_0 (ATerm r_115 (ATerm), ATerm t);
static ATerm x_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_8 (ATerm g_54, ATerm h_54, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_8 (ATerm k_25, ATerm l_25, ATerm j_25, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_8 (ATerm t_40, ATerm u_40, ATerm t);
ATerm foldr_2_0 (ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_115 (ATerm), ATerm t);
static ATerm w_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm need_help_1_0 (ATerm d_108 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_111 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
ATerm parse_options_1_0 (ATerm h_111 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm t);
static ATerm b_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
ATerm iowrap_3_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm t);
static ATerm k_14 (ATerm t);
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
  t = term_l_14;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_m_14;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_14), j_0), term_n_14);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_p_14;
  m_0 = t;
  t = SSL_exit(m_0);
  t = a_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm t_115 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL;
        t = term_s_14;
        a_1 = t;
        t = term_u_14;
        b_1 = t;
        t = term_v_14;
        t = l_8(a_1, b_1, t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_w_14);
        t = geq_0_0(t);
        t = x_0;
        t = t_115(t);
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = x_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm m_83 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,x_6 = NULL;
  static ATerm o_0 (ATerm t)
  {
    ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,j_7 = NULL,i_7 = NULL;
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
    t = m_83(t);
    w_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_1, u_1, v_1);
    i_7 = t;
    t = SSLsetAnnotations(i_7, s_1);
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
    t = m_83(t);
    q_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_1, q_1, m_1);
    j_7 = t;
    t = SSLsetAnnotations(j_7, j_1);
    return(t);
  }
  static ATerm p_0 (ATerm t)
  {
    ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,k_7 = NULL;
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
    t = m_83(t);
    d_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, a_2, b_2, d_2);
    k_7 = t;
    t = SSLsetAnnotations(k_7, z_1);
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
  x_6 = t;
  t = SSLsetAnnotations(x_6, d_1);
  t = abstract_choice_2_0(o_0, p_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,t_7 = NULL;
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
    t = l_83(t);
    n_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, n_2, l_2);
    x_7 = t;
    t = SSLsetAnnotations(x_7, j_2);
    return(t);
  }
  static ATerm r_0 (ATerm t)
  {
    ATerm p_2 = NULL,r_2 = NULL,s_2 = NULL,w_2 = NULL,x_2 = NULL,y_7 = NULL;
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
    t = l_83(t);
    w_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, r_2, w_2);
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
  t_7 = t;
  t = SSLsetAnnotations(t_7, f_2);
  t = abstract_choice_2_0(q_0, r_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm t)
{
  ATerm z_2 = NULL,b_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL;
  j_3 = t;
  t = save_MarkVar_0_0(t);
  z_2 = t;
  t = j_3;
  t = n_83(t);
  i_3 = t;
  t = save_MarkVar_0_0(t);
  b_3 = t;
  t = term_x_14;
  m_3 = t;
  t = SSL_table_destroy(m_3);
  t = term_x_14;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, z_2);
  t = h_7(k_3, z_2, t);
  t = i_3;
  t = o_83(t);
  h_3 = t;
  t = b_3;
  t = isect_MarkVar_0_0(t);
  t = h_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL,s_8 = NULL;
  static ATerm y_0 (ATerm t)
  {
    ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,u_8 = NULL;
    x_3 = t;
    if(match_cons(t, sym_Choice_2))
      {
        t_3 = ATgetArgument(t, 0);
        u_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_3);
    s_3 = t;
    t = t_3;
    t = k_83(t);
    w_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, w_3, u_3);
    u_8 = t;
    t = SSLsetAnnotations(u_8, s_3);
    return(t);
  }
  static ATerm c_1 (ATerm t)
  {
    ATerm y_3 = NULL,z_3 = NULL,e_4 = NULL,h_4 = NULL,j_4 = NULL,z_8 = NULL;
    j_4 = t;
    if(match_cons(t, sym_Choice_2))
      {
        z_3 = ATgetArgument(t, 0);
        e_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_4);
    y_3 = t;
    t = e_4;
    t = k_83(t);
    h_4 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, z_3, h_4);
    z_8 = t;
    t = SSLsetAnnotations(z_8, y_3);
    return(t);
  }
  r_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      o_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_3);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, o_3, p_3);
  s_8 = t;
  t = SSLsetAnnotations(s_8, n_3);
  t = abstract_choice_2_0(y_0, c_1, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm z_4 = NULL,b_5 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,i_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,l_9 = NULL,k_9 = NULL;
  b_5 = t;
  t = save_MarkVar_0_0(t);
  z_4 = t;
  t = b_5;
  if(match_cons(t, sym_Rec_2))
    {
      k_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_5);
  i_5 = t;
  t = l_5;
  t = mark_buv_0_0(t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, k_5, m_5);
  k_9 = t;
  t = SSLsetAnnotations(k_9, i_5);
  t = z_4;
  t = isect_MarkVar_0_0(t);
  t = b_5;
  if(match_cons(t, sym_Rec_2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_5);
  c_5 = t;
  t = f_5;
  t = mark_buv_0_0(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, e_5, g_5);
  l_9 = t;
  t = SSLsetAnnotations(l_9, c_5);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,k_6 = NULL,l_6 = NULL,t_9 = NULL,s_9 = NULL,r_9 = NULL;
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
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, g_6, h_6, i_6);
  r_9 = t;
  t = SSLsetAnnotations(r_9, e_6);
  k_6 = t;
  t = save_MarkVar_0_0(t);
  o_5 = t;
  t = k_6;
  if(match_cons(t, sym_PrimT_3))
    {
      z_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
      b_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_6);
  y_5 = t;
  t = b_6;
  t = map_1_0(a_3, t);
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, z_5, a_6, c_6);
  s_9 = t;
  t = SSLsetAnnotations(s_9, y_5);
  d_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      q_5 = ATgetArgument(t, 0);
      r_5 = ATgetArgument(t, 1);
      s_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_6);
  p_5 = t;
  t = r_5;
  t = mark_buv_0_0(t);
  t_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, q_5, t_5, s_5);
  t_9 = t;
  t = SSLsetAnnotations(t_9, p_5);
  v_5 = t;
  t = o_5;
  t = isect_MarkVar_0_0(t);
  t = v_5;
  return(t);
}
ATerm alltd_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t)
  {
    ATerm y_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_85(t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = y_14;
        t = SRTS_all(n_6, t);
      }
    return(t);
  }
  t = n_6(t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm k_10 = NULL,p_10 = NULL,r_10 = NULL,v_10 = NULL;
  p_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      r_10 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
      k_10 = ATgetArgument(t, 2);
      {
        ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL,i_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,m_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,y_2 = NULL,e_3 = NULL,c_10 = NULL,y_9 = NULL,x_9 = NULL;
        t = SSLgetAnnotations(p_10);
        y_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, r_10, v_10, k_10);
        x_9 = t;
        t = SSLsetAnnotations(x_9, y_2);
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
        y_9 = t;
        t = SSLsetAnnotations(y_9, r_1);
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
        c_10 = t;
        t = SSLsetAnnotations(c_10, t_0);
        p_1 = t;
        t = s_0;
        t = isect_MarkVar_0_0(t);
        t = p_1;
      }
    }
  else
    {
      ATerm d_4 = NULL,f_4 = NULL,g_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,p_4 = NULL,f_10 = NULL,d_10 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          r_10 = ATgetArgument(t, 0);
          v_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_10);
      m_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, r_10, v_10);
      d_10 = t;
      t = SSLsetAnnotations(d_10, m_4);
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
      f_10 = t;
      t = SSLsetAnnotations(f_10, f_4);
      l_4 = t;
      t = d_4;
      t = isect_MarkVar_0_0(t);
      t = l_4;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_x_14;
  return(t);
}
static ATerm c_7 (ATerm s_23, ATerm t_23, ATerm u_23, ATerm t)
{
  ATerm a_11 = NULL;
  static ATerm f_3 (ATerm t)
  {
    t = t_23;
    t = map_1_0(IntroduceBound_0_0, t);
    t = u_23;
    t = mark_build_vars_0_0(t);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    return(t);
  }
  t = scope_2_0(d_3, f_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, s_23, t_23, not_null(a_11));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_x_14;
  return(t);
}
static ATerm q_3 (ATerm t)
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
static ATerm v_3 (ATerm t)
{
  ATerm b_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_15);
    }
  else
    {
      t = b_15;
      {
        ATerm e_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_15);
          }
        else
          {
            t = e_15;
            {
              ATerm s_11 = NULL,t_11 = NULL,y_11 = NULL,z_11 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_11 = ATgetArgument(t, 0);
                  t_11 = ATgetArgument(t, 1);
                  y_11 = ATgetArgument(t, 2);
                  z_11 = ATgetArgument(t, 3);
                  t = y_11;
                  t = map_1_0(a_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_11 = ATgetArgument(t, 0);
                      t_11 = ATgetArgument(t, 1);
                      y_11 = ATgetArgument(t, 2);
                      z_11 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_11;
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
  ATerm g_12 = NULL;
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_12 = ATgetArgument(t, 0);
          {
            ATerm i_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_15);
      t = g_12;
    }
  else
    {
      t = g_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_12;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm v_12 = NULL;
  ATerm j_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_12 = ATgetArgument(t, 0);
          {
            ATerm p_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_15);
      t = v_12;
    }
  else
    {
      t = j_15;
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
static ATerm d_7 (ATerm m_23, ATerm q_23, ATerm o_23, ATerm t)
{
  ATerm e_11 = NULL,i_11 = NULL,k_11 = NULL;
  static ATerm l_3 (ATerm t)
  {
    t = m_23;
    t = free_vars_3_0(q_3, v_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = m_23;
    t = mark_match_vars_0_0(t);
    if(((e_11 != NULL) && (e_11 != t)))
      _fail(t);
    else
      e_11 = t;
    t = o_23;
    t = mark_buv_0_0(t);
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = q_23;
    t = mark_build_vars_0_0(t);
    if(((k_11 != NULL) && (k_11 != t)))
      _fail(t);
    else
      k_11 = t;
    return(t);
  }
  t = scope_2_0(g_3, l_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_11), not_null(k_11), not_null(i_11)));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_x_14;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm l_13 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_13);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm q_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_15);
    }
  else
    {
      t = q_15;
      {
        ATerm v_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_15);
          }
        else
          {
            t = v_15;
            {
              ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  n_13 = ATgetArgument(t, 0);
                  o_13 = ATgetArgument(t, 1);
                  p_13 = ATgetArgument(t, 2);
                  q_13 = ATgetArgument(t, 3);
                  t = p_13;
                  t = map_1_0(r_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_13 = ATgetArgument(t, 0);
                      o_13 = ATgetArgument(t, 1);
                      p_13 = ATgetArgument(t, 2);
                      q_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_13;
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
  ATerm d_14 = NULL;
  ATerm x_15 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_14 = ATgetArgument(t, 0);
          {
            ATerm f_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_16);
      t = d_14;
    }
  else
    {
      t = x_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_14;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm t_14 = NULL;
  ATerm g_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_14 = ATgetArgument(t, 0);
          {
            ATerm k_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_16);
      t = t_14;
    }
  else
    {
      t = g_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_14;
    }
  return(t);
}
static ATerm e_7 (ATerm g_23, ATerm k_23, ATerm i_23, ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  static ATerm n_4 (ATerm t)
  {
    t = g_23;
    t = free_vars_3_0(o_4, q_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = g_23;
    t = mark_match_vars_0_0(t);
    if(((i_13 != NULL) && (i_13 != t)))
      _fail(t);
    else
      i_13 = t;
    t = i_23;
    t = mark_buv_0_0(t);
    if(((j_13 != NULL) && (j_13 != t)))
      _fail(t);
    else
      j_13 = t;
    t = k_23;
    t = mark_build_vars_0_0(t);
    if(((k_13 != NULL) && (k_13 != t)))
      _fail(t);
    else
      k_13 = t;
    return(t);
  }
  t = scope_2_0(c_4, n_4, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_13), not_null(k_13), not_null(j_13)));
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm u_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_16);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm q_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_16);
    }
  else
    {
      t = q_16;
      {
        ATerm v_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_17);
          }
        else
          {
            t = v_16;
            {
              ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,d_17 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_16 = ATgetArgument(t, 0);
                  x_16 = ATgetArgument(t, 1);
                  y_16 = ATgetArgument(t, 2);
                  d_17 = ATgetArgument(t, 3);
                  t = y_16;
                  t = map_1_0(v_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_16 = ATgetArgument(t, 0);
                      x_16 = ATgetArgument(t, 1);
                      y_16 = ATgetArgument(t, 2);
                      d_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_16;
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
  ATerm s_17 = NULL;
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_17 = ATgetArgument(t, 0);
          {
            ATerm m_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_17);
      t = s_17;
    }
  else
    {
      t = g_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_17;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm b_18 = NULL;
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_18 = ATgetArgument(t, 0);
          {
            ATerm r_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_17);
      t = b_18;
    }
  else
    {
      t = p_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_18;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_x_14;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm t_19 = NULL;
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_19 = ATgetArgument(t, 0);
          {
            ATerm v_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_17);
      t = t_19;
    }
  else
    {
      t = t_17;
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
static ATerm d_5 (ATerm t)
{
  ATerm w_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_19);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
            {
              ATerm y_19 = NULL,z_19 = NULL,e_20 = NULL,f_20 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_19 = ATgetArgument(t, 0);
                  z_19 = ATgetArgument(t, 1);
                  e_20 = ATgetArgument(t, 2);
                  f_20 = ATgetArgument(t, 3);
                  t = e_20;
                  t = map_1_0(n_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_19 = ATgetArgument(t, 0);
                      z_19 = ATgetArgument(t, 1);
                      e_20 = ATgetArgument(t, 2);
                      f_20 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_20;
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
  ATerm y_20 = NULL;
  ATerm a_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_20 = ATgetArgument(t, 0);
          {
            ATerm d_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_18);
      t = y_20;
    }
  else
    {
      t = a_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_20;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm t_21 = NULL;
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_21 = ATgetArgument(t, 0);
          {
            ATerm g_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_18);
      t = t_21;
    }
  else
    {
      t = e_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_21;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,t_15 = NULL,u_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      t_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
      z_15 = ATgetArgument(t, 2);
      {
        ATerm h_16 = NULL,p_16 = NULL,r_16 = NULL,t_16 = NULL;
        t = z_15;
        if(match_cons(t, sym_Rule_3))
          {
            m_15 = ATgetArgument(t, 0);
            n_15 = ATgetArgument(t, 1);
            o_15 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = z_15;
        t = free_vars_3_0(t_4, u_4, tboundin_3_0, t);
        h_16 = t;
        {
          static ATerm y_4 (ATerm t)
          {
            t = h_16;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = m_15;
            t = mark_match_vars_0_0(t);
            if(((p_16 != NULL) && (p_16 != t)))
              _fail(t);
            else
              p_16 = t;
            t = o_15;
            t = mark_buv_0_0(t);
            if(((r_16 != NULL) && (r_16 != t)))
              _fail(t);
            else
              r_16 = t;
            t = n_15;
            t = mark_build_vars_0_0(t);
            if(((t_16 != NULL) && (t_16 != t)))
              _fail(t);
            else
              t_16 = t;
            return(t);
          }
          t = scope_2_0(x_4, y_4, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, t_15, u_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_16), not_null(t_16), not_null(r_16)));
      }
    }
  else
    {
      ATerm u_18 = NULL,v_18 = NULL,d_19 = NULL,g_19 = NULL,o_19 = NULL,p_19 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          t_15 = ATgetArgument(t, 0);
          u_15 = ATgetArgument(t, 1);
          z_15 = ATgetArgument(t, 2);
          a_16 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = a_16;
      if(match_cons(t, sym_Rule_3))
        {
          b_16 = ATgetArgument(t, 0);
          c_16 = ATgetArgument(t, 1);
          d_16 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_15;
      t = map_1_0(a_5, t);
      u_18 = t;
      t = a_16;
      t = free_vars_3_0(d_5, j_5, tboundin_3_0, t);
      p_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_19, u_18);
      t = diff_0_0(t);
      v_18 = t;
      {
        static ATerm x_5 (ATerm t)
        {
          t = u_18;
          t = map_1_0(IntroduceBound_0_0, t);
          t = v_18;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = b_16;
          t = mark_match_vars_0_0(t);
          if(((d_19 != NULL) && (d_19 != t)))
            _fail(t);
          else
            d_19 = t;
          t = d_16;
          t = mark_buv_0_0(t);
          if(((g_19 != NULL) && (g_19 != t)))
            _fail(t);
          else
            g_19 = t;
          t = c_16;
          t = mark_build_vars_0_0(t);
          if(((o_19 != NULL) && (o_19 != t)))
            _fail(t);
          else
            o_19 = t;
          return(t);
        }
        t = scope_2_0(w_5, x_5, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, t_15, u_15, z_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_19), not_null(o_19), not_null(g_19)));
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,s_24 = NULL;
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_24);
  p_24 = t;
  t = term_j_18;
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_24), term_j_18);
  t = u_7(f_6, p_24, s_24, t);
  t = o_24;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm c_25 = NULL;
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_25 = ATgetArgument(t, 0);
          {
            ATerm m_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_18);
      t = c_25;
    }
  else
    {
      t = k_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_25;
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_x_14;
  return(t);
}
static ATerm f_7 (ATerm e_22, ATerm f_22, ATerm g_22, ATerm i_22, ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  t = g_22;
  t = map_1_0(j_6, t);
  u_24 = t;
  {
    static ATerm p_6 (ATerm t)
    {
      t = u_24;
      t = map_1_0(IntroduceBound_0_0, t);
      t = i_22;
      t = mark_buv_0_0(t);
      if(((v_24 != NULL) && (v_24 != t)))
        _fail(t);
      else
        v_24 = t;
      return(t);
    }
    t = scope_2_0(o_6, p_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, e_22, f_22, g_22, not_null(v_24));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,x_26 = NULL,y_26 = NULL,a_27 = NULL,l_27 = NULL;
  u_26 = t;
  if(match_cons(t, sym__2))
    {
      v_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27;
  if(match_cons(t, sym_Undefined_0))
    {
      t = v_26;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_n_18;
        }
      else
        {
          t = term_n_18;
        }
    }
  else
    {
      ATerm o_18 = t;
      int p_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm q_18 = ATgetArgument(t, 0);
              l_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(p_18);
          t = v_26;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_n_18;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  x_26 = ATgetArgument(t, 0);
                  y_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm r_18 = t;
                int s_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, y_26, l_27);
                    {
                      ATerm w_18 = t;
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
                          t = w_18;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, x_26, term_z_18);
                    LocalPopChoice(s_18);
                  }
                else
                  {
                    t = r_18;
                    t = l_27;
                    if((y_26 != t))
                      {
                        _fail(t);
                      }
                    t = v_26;
                  }
              }
            }
        }
      else
        {
          t = o_18;
          t = v_26;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_n_18;
        }
    }
  return(t);
}
static ATerm g_7 (ATerm p_20, ATerm q_20, ATerm o_20, ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,t_27 = NULL;
  t = term_x_14;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, p_20);
  t = l_8(t_27, p_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_27 = ATgetFirst((ATermList) t);
      {
        ATerm a_19 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_20, p_27);
  t = CompareEntries_0_0(t);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_20, (ATerm) ATinsert(CheckATermList(o_20), q_27));
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm j_28 = NULL,m_28 = NULL,n_28 = NULL,u_28 = NULL,v_28 = NULL;
  v_28 = t;
  if(match_cons(t, sym__2))
    {
      j_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
      t = m_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_28 = ATgetFirst((ATermList) t);
          u_28 = (ATerm) ATgetNext((ATermList) t);
          t = n_28;
          {
            ATerm b_19 = t;
            int c_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm e_19 = ATgetArgument(t, 0);
                    ATerm i_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(c_19);
                t = j_28;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = v_28;
                  }
                else
                  {
                    ATerm j_19 = t;
                    int k_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = v_28;
                        t = g_7(j_28, n_28, u_28, t);
                        LocalPopChoice(k_19);
                      }
                    else
                      {
                        t = j_19;
                        t = v_28;
                      }
                  }
              }
            else
              {
                t = b_19;
                t = j_28;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = v_28;
                  }
                else
                  {
                    t = v_28;
                  }
              }
          }
        }
      else
        {
          t = j_28;
          if(match_cons(t, sym_Scopes_0))
            {
              t = v_28;
            }
          else
            {
              t = v_28;
            }
        }
    }
  else
    {
      t = v_28;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  t = map_1_0(s_6, t);
  g_28 = t;
  t = term_x_14;
  i_28 = t;
  t = SSL_table_destroy(i_28);
  t = term_x_14;
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, g_28);
  t = h_7(h_28, g_28, t);
  t = g_28;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,w_29 = NULL;
  w_29 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm r_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_19);
        t = w_29;
      }
    else
      {
        t = l_19;
        {
          ATerm s_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm v_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(u_19);
              t = w_29;
            }
          else
            {
              t = s_19;
              {
                ATerm x_19 = t;
                int b_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm c_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(b_20);
                    t = w_29;
                  }
                else
                  {
                    t = x_19;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm d_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = w_29;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  r_29 = t;
  t = w_29;
  t = SRTS_one(mark_buv_0_0, t);
  s_29 = t;
  t = r_29;
  t = isect_MarkVar_0_0(t);
  t = s_29;
  return(t);
}
static ATerm h_7 (ATerm n_26, ATerm m_26, ATerm t)
{
  static ATerm t_6 (ATerm t)
  {
    ATerm y_29 = NULL,d_30 = NULL;
    if(match_cons(t, sym__2))
      {
        y_29 = ATgetArgument(t, 0);
        d_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(n_26, y_29, d_30);
    t = (ATerm) ATmakeAppl(sym__3, n_26, y_29, d_30);
    return(t);
  }
  t = m_26;
  t = map_1_0(t_6, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_30 = NULL;
  static ATerm u_6 (ATerm t)
  {
    ATerm f_30 = NULL,g_30 = NULL;
    f_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_30), f_30);
    t = l_8(not_null(e_30), f_30, t);
    g_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_30, g_30);
    return(t);
  }
  if(((e_30 != NULL) && (e_30 != t)))
    _fail(t);
  else
    e_30 = t;
  t = SSL_table_keys(e_30);
  t = map_1_0(u_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_x_14;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm c_21, ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,q_30 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm v_6 (ATerm t)
    {
      static ATerm n_31 (ATerm r_30, ATerm t)
      {
        ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
        t = r_30;
        if(match_cons(t, sym__2))
          {
            ATerm g_20 = ATgetArgument(t, 0);
            w_30 = g_20;
            if(match_cons(g_20, sym_Var_1))
              {
                x_30 = ATgetArgument(g_20, 0);
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
                      y_30 = ATgetArgument(j_20, 0);
                      {
                        ATerm k_20 = ATgetArgument(j_20, 1);
                        if((ATgetSymbol((ATermAppl) k_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  z_30 = (ATerm) ATgetNext((ATermList) i_20);
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
            if((x_30 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(w_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, w_30, (ATerm) ATinsert(CheckATermList(z_30), (ATerm) ATmakeAppl(sym_Defined_2, y_30, term_z_18)));
        return(t);
      }
      ATerm b_31 = NULL,f_31 = NULL;
      f_31 = t;
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                b_31 = ATgetArgument(t, 0);
                {
                  ATerm n_20 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(m_20);
            t = b_31;
            if(match_cons(t, sym_Scopes_0))
              {
                t = f_31;
              }
            else
              {
                ATerm r_20 = t;
                int s_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = n_31(f_31, t);
                    LocalPopChoice(s_20);
                  }
                else
                  {
                    t = r_20;
                    t = f_31;
                  }
              }
          }
        else
          {
            t = l_20;
            {
              ATerm t_20 = t;
              int u_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_31(f_31, t);
                  LocalPopChoice(u_20);
                }
              else
                {
                  t = t_20;
                  t = f_31;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(v_6, t);
  }
  n_30 = t;
  t = term_x_14;
  q_30 = t;
  t = SSL_table_destroy(q_30);
  t = term_x_14;
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, n_30);
  t = h_7(o_30, n_30, t);
  t = n_30;
  return(t);
}
ATerm tboundin_3_0 (ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm s_116 (ATerm), ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,d_38 = NULL,g_38 = NULL,h_38 = NULL;
  g_38 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_38 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
      {
        ATerm m_6 = NULL,q_6 = NULL,r_6 = NULL,l_16 = NULL;
        t = SSLgetAnnotations(g_38);
        m_6 = t;
        t = h_38;
        t = s_116(t);
        q_6 = t;
        t = y_37;
        t = q_116(t);
        r_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, q_6, r_6);
        l_16 = t;
        t = SSLsetAnnotations(l_16, m_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          h_38 = ATgetArgument(t, 0);
          y_37 = ATgetArgument(t, 1);
          z_37 = ATgetArgument(t, 2);
          d_38 = ATgetArgument(t, 3);
          {
            ATerm p_8 = NULL,x_8 = NULL,y_8 = NULL,a_9 = NULL,c_9 = NULL,m_16 = NULL;
            t = SSLgetAnnotations(g_38);
            p_8 = t;
            t = h_38;
            t = s_116(t);
            x_8 = t;
            t = y_37;
            t = s_116(t);
            y_8 = t;
            t = z_37;
            t = s_116(t);
            a_9 = t;
            t = d_38;
            t = q_116(t);
            c_9 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, x_8, y_8, a_9, c_9);
            m_16 = t;
            t = SSLsetAnnotations(m_16, p_8);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              h_38 = ATgetArgument(t, 0);
              y_37 = ATgetArgument(t, 1);
              z_37 = ATgetArgument(t, 2);
              d_38 = ATgetArgument(t, 3);
              {
                ATerm e_10 = NULL,n_10 = NULL,o_10 = NULL,q_10 = NULL,s_10 = NULL,e_17 = NULL;
                t = SSLgetAnnotations(g_38);
                e_10 = t;
                t = h_38;
                t = s_116(t);
                n_10 = t;
                t = y_37;
                t = s_116(t);
                o_10 = t;
                t = z_37;
                t = s_116(t);
                q_10 = t;
                t = d_38;
                t = q_116(t);
                s_10 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, n_10, o_10, q_10, s_10);
                e_17 = t;
                t = SSLsetAnnotations(e_17, e_10);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  h_38 = ATgetArgument(t, 0);
                  {
                    ATerm g_11 = NULL,j_11 = NULL,f_17 = NULL;
                    t = SSLgetAnnotations(g_38);
                    g_11 = t;
                    t = h_38;
                    t = q_116(t);
                    j_11 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, j_11);
                    f_17 = t;
                    t = SSLsetAnnotations(f_17, g_11);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      h_38 = ATgetArgument(t, 0);
                      {
                        ATerm u_11 = NULL,w_11 = NULL,i_17 = NULL;
                        t = SSLgetAnnotations(g_38);
                        u_11 = t;
                        t = h_38;
                        t = q_116(t);
                        w_11 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, w_11);
                        i_17 = t;
                        t = SSLsetAnnotations(i_17, u_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          h_38 = ATgetArgument(t, 0);
                          {
                            ATerm m_12 = NULL,y_12 = NULL,n_17 = NULL;
                            t = SSLgetAnnotations(g_38);
                            m_12 = t;
                            t = h_38;
                            t = q_116(t);
                            y_12 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, y_12);
                            n_17 = t;
                            t = SSLsetAnnotations(n_17, m_12);
                          }
                        }
                      else
                        {
                          ATerm e_13 = NULL,g_13 = NULL,o_17 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              h_38 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(g_38);
                          e_13 = t;
                          t = h_38;
                          t = q_116(t);
                          g_13 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, g_13);
                          o_17 = t;
                          t = SSLsetAnnotations(o_17, e_13);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm c_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_40);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm x_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = x_20;
      {
        ATerm b_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_21);
          }
        else
          {
            t = b_21;
            {
              ATerm f_40 = NULL,g_40 = NULL,j_40 = NULL,k_40 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_40 = ATgetArgument(t, 0);
                  g_40 = ATgetArgument(t, 1);
                  j_40 = ATgetArgument(t, 2);
                  k_40 = ATgetArgument(t, 3);
                  t = j_40;
                  t = map_1_0(a_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_40 = ATgetArgument(t, 0);
                      g_40 = ATgetArgument(t, 1);
                      j_40 = ATgetArgument(t, 2);
                      k_40 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_40;
                  t = map_1_0(o_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm x_40 = NULL;
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_40 = ATgetArgument(t, 0);
          {
            ATerm g_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_21);
      t = x_40;
    }
  else
    {
      t = e_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_40;
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm l_41 = NULL;
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_41 = ATgetArgument(t, 0);
          {
            ATerm j_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_21);
      t = l_41;
    }
  else
    {
      t = h_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_41;
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm r_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_41);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            {
              ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  t_41 = ATgetArgument(t, 0);
                  u_41 = ATgetArgument(t, 1);
                  v_41 = ATgetArgument(t, 2);
                  w_41 = ATgetArgument(t, 3);
                  t = v_41;
                  t = map_1_0(r_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_41 = ATgetArgument(t, 0);
                      u_41 = ATgetArgument(t, 1);
                      v_41 = ATgetArgument(t, 2);
                      w_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_41;
                  t = map_1_0(a_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm n_42 = NULL;
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_42 = ATgetArgument(t, 0);
          {
            ATerm v_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_21);
      t = n_42;
    }
  else
    {
      t = r_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_42;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm i_43 = NULL;
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_43 = ATgetArgument(t, 0);
          {
            ATerm y_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_21);
      t = i_43;
    }
  else
    {
      t = w_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_43;
    }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm p_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_43);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      {
        ATerm c_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_22);
          }
        else
          {
            t = c_22;
            {
              ATerm r_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_43 = ATgetArgument(t, 0);
                  u_43 = ATgetArgument(t, 1);
                  v_43 = ATgetArgument(t, 2);
                  w_43 = ATgetArgument(t, 3);
                  t = v_43;
                  t = map_1_0(q_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_43 = ATgetArgument(t, 0);
                      u_43 = ATgetArgument(t, 1);
                      v_43 = ATgetArgument(t, 2);
                      w_43 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_43;
                  t = map_1_0(r_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm i_44 = NULL;
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_44 = ATgetArgument(t, 0);
          {
            ATerm l_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_22);
      t = i_44;
    }
  else
    {
      t = j_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_44;
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm w_44 = NULL;
  ATerm m_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_44 = ATgetArgument(t, 0);
          {
            ATerm p_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_22);
      t = w_44;
    }
  else
    {
      t = m_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_44;
    }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm o_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_45);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            {
              ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL,v_45 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_45 = ATgetArgument(t, 0);
                  r_45 = ATgetArgument(t, 1);
                  s_45 = ATgetArgument(t, 2);
                  v_45 = ATgetArgument(t, 3);
                  t = s_45;
                  t = map_1_0(w_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_45 = ATgetArgument(t, 0);
                      r_45 = ATgetArgument(t, 1);
                      s_45 = ATgetArgument(t, 2);
                      v_45 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_45;
                  t = map_1_0(b_9, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm k_46 = NULL;
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_46 = ATgetArgument(t, 0);
          {
            ATerm r_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_23);
      t = k_46;
    }
  else
    {
      t = b_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_46;
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm v_46 = NULL;
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_46 = ATgetArgument(t, 0);
          {
            ATerm x_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_23);
      t = v_46;
    }
  else
    {
      t = v_23;
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
ATerm Bind4_0_0 (ATerm t)
{
  ATerm z_39 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      z_39 = ATgetArgument(t, 0);
      t = z_39;
      t = free_vars_3_0(y_6, z_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          z_39 = ATgetArgument(t, 0);
          t = z_39;
          t = free_vars_3_0(p_7, q_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              z_39 = ATgetArgument(t, 0);
              t = z_39;
              t = free_vars_3_0(k_8, n_8, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  z_39 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_39;
              t = free_vars_3_0(t_8, v_8, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm z_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_47);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            {
              ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL,g_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_48 = ATgetArgument(t, 0);
                  c_48 = ATgetArgument(t, 1);
                  d_48 = ATgetArgument(t, 2);
                  g_48 = ATgetArgument(t, 3);
                  t = d_48;
                  t = map_1_0(f_9, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_48 = ATgetArgument(t, 0);
                      c_48 = ATgetArgument(t, 1);
                      d_48 = ATgetArgument(t, 2);
                      g_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_48;
                  t = map_1_0(g_9, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm x_48 = NULL;
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_48 = ATgetArgument(t, 0);
          {
            ATerm i_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_24);
      t = x_48;
    }
  else
    {
      t = c_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_48;
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm k_50 = NULL;
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_50 = ATgetArgument(t, 0);
          {
            ATerm l_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_24);
      t = k_50;
    }
  else
    {
      t = j_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_50;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm j_47 = NULL,r_47 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      r_47 = ATgetArgument(t, 0);
      t = r_47;
      if(match_cons(t, sym_Rule_3))
        {
          j_47 = ATgetArgument(t, 0);
          {
            ATerm n_24 = ATgetArgument(t, 1);
          }
          {
            ATerm q_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = j_47;
      t = free_vars_3_0(d_9, e_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          r_47 = ATgetArgument(t, 0);
          {
            ATerm r_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_47;
    }
  return(t);
}
static ATerm l_7 (ATerm r_97 (ATerm), ATerm n_48, ATerm m_48, ATerm t)
{
  static ATerm a_52 (ATerm t)
  {
    ATerm t_51 = NULL,v_51 = NULL,x_51 = NULL;
    t_51 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_48;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_51 = ATgetFirst((ATermList) t);
            x_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_24 = t;
          int x_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_51;
              {
                static ATerm h_9 (ATerm t)
                {
                  t = m_48;
                  return(t);
                }
                t = m_7(r_97, h_9, v_51, x_51, t);
              }
              t = a_52(t);
              LocalPopChoice(x_24);
            }
          else
            {
              t = w_24;
              {
                ATerm w_13 = NULL,j_14 = NULL,h_19 = NULL;
                t = SSLgetAnnotations(t_51);
                w_13 = t;
                t = x_51;
                t = a_52(t);
                j_14 = t;
                t = (ATerm) ATinsert(CheckATermList(j_14), v_51);
                h_19 = t;
                t = SSLsetAnnotations(h_19, w_13);
              }
            }
        }
      }
    return(t);
  }
  t = n_48;
  t = a_52(t);
  return(t);
}
ATerm foldr_3_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t)
{
  ATerm f_52 = NULL,h_52 = NULL,i_52 = NULL;
  f_52 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_52;
      t = o_100(t);
    }
  else
    {
      ATerm q_52 = NULL,r_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_52 = ATgetFirst((ATermList) t);
          i_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_52;
      t = q_100(t);
      q_52 = t;
      t = i_52;
      t = foldr_3_0(o_100, p_100, q_100, t);
      r_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_52, r_52);
      t = p_100(t);
    }
  return(t);
}
static ATerm m_7 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm r_48, ATerm q_48, ATerm t)
{
  t = v_97(t);
  {
    static ATerm i_9 (ATerm t)
    {
      ATerm w_52 = NULL;
      w_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_48, w_52);
      t = u_97(t);
      return(t);
    }
    t = fetch_1_0(i_9, t);
  }
  t = q_48;
  return(t);
}
static ATerm n_7 (ATerm m_97 (ATerm), ATerm l_48, ATerm k_48, ATerm t)
{
  static ATerm v_53 (ATerm t)
  {
    ATerm n_53 = NULL,o_53 = NULL,q_53 = NULL;
    n_53 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_53;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_53 = ATgetFirst((ATermList) t);
            q_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_24 = t;
          int z_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_53;
              {
                static ATerm j_9 (ATerm t)
                {
                  t = k_48;
                  return(t);
                }
                t = m_7(m_97, j_9, o_53, q_53, t);
              }
              t = v_53(t);
              LocalPopChoice(z_24);
            }
          else
            {
              t = y_24;
              {
                ATerm z_14 = NULL,c_15 = NULL,l_21 = NULL;
                t = SSLgetAnnotations(n_53);
                z_14 = t;
                t = q_53;
                t = v_53(t);
                c_15 = t;
                t = (ATerm) ATinsert(CheckATermList(c_15), o_53);
                l_21 = t;
                t = SSLsetAnnotations(l_21, z_14);
              }
            }
        }
      }
    return(t);
  }
  t = l_48;
  t = v_53(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  static ATerm k_55 (ATerm t)
  {
    ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
    j_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_55 = ATgetFirst((ATermList) t);
        i_55 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_15 = NULL,r_15 = NULL,d_26 = NULL;
          t = SSLgetAnnotations(j_55);
          k_15 = t;
          t = i_55;
          t = k_55(t);
          r_15 = t;
          t = (ATerm) ATinsert(CheckATermList(r_15), h_55);
          d_26 = t;
          t = SSLsetAnnotations(d_26, k_15);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_55;
        t = x_93(t);
      }
    return(t);
  }
  t = k_55(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL;
  i_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_54;
    }
  else
    {
      static ATerm m_9 (ATerm t)
      {
        t = not_null(k_54);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_54 = ATgetFirst((ATermList) t);
          if(((k_54 != NULL) && (k_54 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_54;
      t = at_end_1_0(m_9, t);
    }
  return(t);
}
static ATerm l_56 (ATerm w_55, ATerm t)
{
  ATerm x_55 = NULL;
  t = SSL_explode_term(w_55);
  if(match_cons(t, sym__2))
    {
      ATerm a_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_55;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_56 = NULL,d_56 = NULL,f_56 = NULL;
  f_56 = t;
  if(match_cons(t, sym__2))
    {
      a_56 = ATgetArgument(t, 0);
      d_56 = ATgetArgument(t, 1);
      {
        ATerm b_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_9 (ATerm t)
            {
              t = d_56;
              return(t);
            }
            t = a_56;
            t = at_end_1_0(n_9, t);
            LocalPopChoice(d_25);
          }
        else
          {
            t = b_25;
            t = l_56(f_56, t);
          }
      }
    }
  else
    {
      t = l_56(f_56, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm t)
{
  static ATerm e_57 (ATerm t)
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_95(t);
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        {
          ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,w_56 = NULL,c_57 = NULL,d_57 = NULL,f_26 = NULL;
          t = l_95(t);
          d_57 = t;
          if(match_cons(t, sym__2))
            {
              s_56 = ATgetArgument(t, 0);
              t_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_57);
          r_56 = t;
          t = s_56;
          t = n_95(t);
          w_56 = t;
          t = t_56;
          t = e_57(t);
          c_57 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_56, c_57);
          f_26 = t;
          t = SSLsetAnnotations(f_26, r_56);
          t = m_95(t);
        }
      }
    return(t);
  }
  t = e_57(t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_25 = ATgetArgument(t, 0);
      if(((ATgetType(g_25) != AT_LIST) || !(ATisEmpty(g_25))))
        _fail(t);
      {
        ATerm h_25 = ATgetArgument(t, 1);
        if(((ATgetType(h_25) != AT_LIST) || !(ATisEmpty(h_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_25 = ATgetArgument(t, 0);
      if(((ATgetType(m_25) == AT_LIST) && !(ATisEmpty(m_25))))
        {
          q_57 = ATgetFirst((ATermList) m_25);
          r_57 = (ATerm) ATgetNext((ATermList) m_25);
        }
      else
        _fail(t);
      {
        ATerm n_25 = ATgetArgument(t, 1);
        if(((ATgetType(n_25) == AT_LIST) && !(ATisEmpty(n_25))))
          {
            s_57 = ATgetFirst((ATermList) n_25);
            t_57 = (ATerm) ATgetNext((ATermList) n_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_57, s_57), (ATerm) ATmakeAppl(sym__2, r_57, t_57));
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm x_57 = NULL,a_58 = NULL;
  if(match_cons(t, sym__2))
    {
      x_57 = ATgetArgument(t, 0);
      a_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_58), x_57);
  return(t);
}
static ATerm s_7 (ATerm h_615, ATerm m_615, ATerm c_60, ATerm t)
{
  ATerm g_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL;
  t = SSL_explode_term(m_615);
  if(match_cons(t, sym__2))
    {
      g_57 = ATgetArgument(t, 0);
      k_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_615);
  if(match_cons(t, sym__2))
    {
      if((g_57 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_57, k_57);
  t = genzip_4_0(o_9, p_9, q_9, _id, t);
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_57, c_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t)
{
  static ATerm e_58 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_91(t);
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = g_91(t);
        t = e_58(t);
      }
    return(t);
  }
  t = e_58(t);
  return(t);
}
ATerm for_3_0 (ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm t)
{
  t = i_91(t);
  t = while_not_2_0(j_91, k_91, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm v_58 = NULL;
  v_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_58);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm w_58 = NULL,a_59 = NULL,e_59 = NULL,f_59 = NULL,h_26 = NULL;
  f_59 = t;
  if(match_cons(t, sym__2))
    {
      a_59 = ATgetArgument(t, 0);
      e_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_59);
  w_58 = t;
  t = e_59;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_59, e_59);
  h_26 = t;
  t = SSLsetAnnotations(h_26, w_58);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,a_61 = NULL,b_61 = NULL;
  v_60 = t;
  if(match_cons(t, sym__2))
    {
      w_60 = ATgetArgument(t, 0);
      x_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_61 = ATgetFirst((ATermList) t);
      b_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_61(w_60, x_60, v_60, t);
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_60), a_61), b_61);
          }
      }
    }
  else
    {
      t = u_61(w_60, x_60, v_60, t);
    }
  return(t);
}
static ATerm u_61 (ATerm h_59, ATerm m_59, ATerm n_59, ATerm t)
{
  ATerm o_59 = NULL,r_59 = NULL,i_26 = NULL,u_59 = NULL,v_59 = NULL,x_59 = NULL,j_60 = NULL;
  t = SSLgetAnnotations(n_59);
  o_59 = t;
  t = m_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_59 = ATgetFirst((ATermList) t);
      j_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_59;
  if(match_cons(t, sym__2))
    {
      v_59 = ATgetArgument(t, 0);
      x_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_59;
        if((v_59 != t))
          {
            _fail(t);
          }
        t = j_60;
        LocalPopChoice(e_26);
      }
    else
      {
        t = a_26;
        t = m_59;
        t = s_7(v_59, x_59, j_60, t);
      }
  }
  r_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_59, r_59);
  i_26 = t;
  t = SSLsetAnnotations(i_26, o_59);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm t_61 = NULL;
  if(match_cons(t, sym__2))
    {
      t_61 = ATgetArgument(t, 0);
      if((t_61 != ATgetArgument(t, 1)))
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
  ATerm g_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(u_9, v_9, w_9, t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = g_26;
      {
        ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL;
        k_61 = t;
        if(match_cons(t, sym__2))
          {
            l_61 = ATgetArgument(t, 0);
            m_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_61;
        t = n_7(z_9, l_61, m_61, t);
      }
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(i_10, n_16, o_16, t);
  return(t);
}
static ATerm i_10 (ATerm t)
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
static ATerm j_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(m_10, j_17, k_17, t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm l_17 = NULL;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      if((l_17 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm u_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm a_63 (ATerm t)
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_113(t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        {
          ATerm q_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_62 = NULL,h_62 = NULL,y_15 = NULL,j_16 = NULL;
              b_62 = t;
              t = t_113(t);
              h_62 = t;
              t = b_62;
              {
                static ATerm a_10 (ATerm t)
                {
                  ATerm n_62 = NULL;
                  t = a_63(t);
                  n_62 = t;
                  t = (ATerm) ATmakeAppl(sym__2, n_62, h_62);
                  t = diff_0_0(t);
                  return(t);
                }
                t = u_113(a_10, a_63, b_10, t);
              }
              j_16 = t;
              t = SSL_explode_term(j_16);
              if(match_cons(t, sym__2))
                {
                  ATerm s_26 = ATgetArgument(t, 0);
                  y_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_15;
              t = foldr_3_0(g_10, h_10, _id, t);
              LocalPopChoice(r_26);
            }
          else
            {
              t = q_26;
              {
                ATerm b_17 = NULL,c_17 = NULL;
                c_17 = t;
                t = SSL_explode_term(c_17);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_26 = ATgetArgument(t, 0);
                    b_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_17;
                t = foldr_3_0(j_10, l_10, a_63, t);
              }
            }
        }
      }
    return(t);
  }
  t = a_63(t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm p_64 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_64);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm z_26 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_27);
    }
  else
    {
      t = z_26;
      {
        ATerm e_27 = t;
        int f_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_27);
          }
        else
          {
            t = e_27;
            {
              ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_64 = ATgetArgument(t, 0);
                  t_64 = ATgetArgument(t, 1);
                  u_64 = ATgetArgument(t, 2);
                  v_64 = ATgetArgument(t, 3);
                  t = u_64;
                  t = map_1_0(w_10, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_64 = ATgetArgument(t, 0);
                      t_64 = ATgetArgument(t, 1);
                      u_64 = ATgetArgument(t, 2);
                      v_64 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_64;
                  t = map_1_0(x_10, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm m_65 = NULL;
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_65 = ATgetArgument(t, 0);
          {
            ATerm i_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_27);
      t = m_65;
    }
  else
    {
      t = g_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_65;
    }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm e_66 = NULL;
  ATerm k_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_66 = ATgetArgument(t, 0);
          {
            ATerm n_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_27);
      t = e_66;
    }
  else
    {
      t = k_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_66;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm o_63 = NULL,s_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,h_64 = NULL,i_64 = NULL,k_64 = NULL,o_27 = NULL,t_26 = NULL;
  k_64 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_64 = ATgetArgument(t, 0);
      h_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_64);
  c_64 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, d_64, h_64);
  t_26 = t;
  t = SSLsetAnnotations(t_26, c_64);
  i_64 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_63 = ATgetArgument(t, 0);
      {
        ATerm r_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_63;
  t = free_vars_3_0(t_10, u_10, tboundin_3_0, t);
  o_63 = t;
  t = undefine_unbound_MarkVar_0_1(o_63, t);
  s_63 = t;
  t = i_64;
  if(match_cons(t, sym_Let_2))
    {
      w_63 = ATgetArgument(t, 0);
      x_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_64);
  v_63 = t;
  t = w_63;
  {
    static ATerm y_10 (ATerm t)
    {
      ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL;
      h_66 = t;
      t = term_x_14;
      j_66 = t;
      t = SSL_table_destroy(j_66);
      t = term_x_14;
      i_66 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_x_14, s_63);
      t = h_7(i_66, s_63, t);
      t = h_66;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(y_10, t);
  }
  y_63 = t;
  t = term_x_14;
  b_64 = t;
  t = SSL_table_destroy(b_64);
  t = term_x_14;
  a_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, s_63);
  t = h_7(a_64, s_63, t);
  t = x_63;
  t = mark_buv_0_0(t);
  z_63 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, y_63, z_63);
  o_27 = t;
  t = SSLsetAnnotations(o_27, v_63);
  return(t);
}
static ATerm u_7 (ATerm v_83 (ATerm), ATerm g_24, ATerm e_24, ATerm t)
{
  ATerm m_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,x_66 = NULL,y_66 = NULL;
  q_66 = t;
  t = v_83(t);
  m_66 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_66, g_24, e_24);
  t = m_8(m_66, g_24, e_24, t);
  {
    ATerm s_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_66 = NULL;
        t = term_v_27;
        z_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_66, term_v_27);
        t = l_8(m_66, z_66, t);
        LocalPopChoice(u_27);
      }
    else
      {
        t = s_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_66 = ATgetFirst((ATermList) t);
      p_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_27;
  x_66 = t;
  t = (ATerm) ATinsert(CheckATermList(p_66), (ATerm) ATinsert(CheckATermList(o_66), g_24));
  y_66 = t;
  t = SSL_table_put(m_66, x_66, y_66);
  t = q_66;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL;
  f_67 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_67);
  g_67 = t;
  t = term_z_27;
  h_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_67), term_z_27);
  t = u_7(z_10, g_67, h_67, t);
  t = f_67;
  return(t);
}
static ATerm v_7 (ATerm p_25, ATerm q_25, ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL;
  j_67 = t;
  {
    ATerm a_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_25, q_25);
        t = l_8(p_25, q_25, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_28 = ATgetFirst((ATermList) t);
            i_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_28);
        t = SSL_table_put(p_25, q_25, i_67);
        t = (ATerm) ATmakeAppl(sym__3, p_25, q_25, i_67);
      }
    else
      {
        t = a_28;
        t = SSL_table_remove(p_25, q_25);
        t = (ATerm) ATmakeAppl(sym__2, p_25, q_25);
      }
  }
  t = j_67;
  return(t);
}
ATerm end_scope_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL,o_67 = NULL,q_67 = NULL,r_67 = NULL;
  q_67 = t;
  t = s_83(t);
  o_67 = t;
  {
    ATerm f_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_67 = NULL;
        t = term_v_27;
        s_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_67, term_v_27);
        t = l_8(o_67, s_67, t);
        LocalPopChoice(k_28);
      }
    else
      {
        t = f_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_67 = ATgetFirst((ATermList) t);
      k_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_27;
  r_67 = t;
  t = SSL_table_put(o_67, r_67, k_67);
  t = l_67;
  {
    static ATerm b_11 (ATerm t)
    {
      ATerm w_67 = NULL;
      w_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_67, w_67);
      t = v_7(o_67, w_67, t);
      return(t);
    }
    t = map_1_0(b_11, t);
  }
  t = q_67;
  return(t);
}
ATerm restore_always_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t)
{
  ATerm l_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_102(t);
      t = s_102(t);
      LocalPopChoice(o_28);
    }
  else
    {
      t = l_28;
      t = s_102(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL;
  b_68 = t;
  t = r_83(t);
  a_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_68, term_v_27);
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_68 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_28 = ATgetArgument(t, 0);
            ATerm x_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_27;
        i_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_68, term_v_27);
        t = l_8(a_68, i_68, t);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = (ATerm) ATempty;
      }
  }
  c_68 = t;
  t = term_v_27;
  d_68 = t;
  t = (ATerm) ATinsert(CheckATermList(c_68), (ATerm) ATempty);
  e_68 = t;
  t = SSL_table_put(a_68, d_68, e_68);
  t = b_68;
  return(t);
}
ATerm scope_2_0 (ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm t)
{
  static ATerm c_11 (ATerm t)
  {
    t = end_scope_1_0(t_83, t);
    return(t);
  }
  t = begin_scope_1_0(t_83, t);
  t = restore_always_2_0(u_83, c_11, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,u_29 = NULL;
  n_68 = t;
  if(match_cons(t, sym_Scope_2))
    {
      k_68 = ATgetArgument(t, 0);
      l_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_68);
  j_68 = t;
  t = l_68;
  {
    static ATerm f_11 (ATerm t)
    {
      ATerm o_68 = NULL;
      o_68 = t;
      t = k_68;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = o_68;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(d_11, f_11, t);
  }
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, k_68, m_68);
  u_29 = t;
  t = SSLsetAnnotations(u_29, j_68);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,a_30 = NULL;
      r_68 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_68);
      p_68 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_68);
      a_30 = t;
      t = SSLsetAnnotations(a_30, p_68);
      LocalPopChoice(z_28);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = y_28;
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,b_30 = NULL;
            v_68 = t;
            if(match_cons(t, sym_App_2))
              {
                t_68 = ATgetArgument(t, 0);
                u_68 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_68);
            s_68 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, t_68, u_68);
            b_30 = t;
            t = SSLsetAnnotations(b_30, s_68);
            LocalPopChoice(b_29);
            {
              ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_30 = NULL;
              b_69 = t;
              if(match_cons(t, sym_App_2))
                {
                  x_68 = ATgetArgument(t, 0);
                  y_68 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_69);
              w_68 = t;
              t = x_68;
              t = mark_buv_0_0(t);
              z_68 = t;
              t = y_68;
              t = mark_build_vars_0_0(t);
              a_69 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, z_68, a_69);
              c_30 = t;
              t = SSLsetAnnotations(c_30, w_68);
            }
          }
        else
          {
            t = a_29;
            {
              ATerm c_29 = t;
              int d_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL,h_30 = NULL;
                  e_69 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      d_69 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_69);
                  c_69 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, d_69);
                  h_30 = t;
                  t = SSLsetAnnotations(h_30, c_69);
                  LocalPopChoice(d_29);
                  {
                    ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,i_30 = NULL;
                    i_69 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        g_69 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(i_69);
                    f_69 = t;
                    t = g_69;
                    t = mark_buv_0_0(t);
                    h_69 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, h_69);
                    i_30 = t;
                    t = SSLsetAnnotations(i_30, f_69);
                  }
                }
              else
                {
                  t = c_29;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_7 (ATerm x_25, ATerm y_25, ATerm z_25, ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_25, y_25);
  t = l_8(x_25, y_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_29 = ATgetFirst((ATermList) t);
      j_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_69), z_25);
  l_69 = t;
  t = SSL_table_put(x_25, y_25, l_69);
  t = k_69;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL;
  m_69 = t;
  t = term_x_14;
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_69);
  o_69 = t;
  t = term_g_29;
  p_69 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_14, (ATerm)ATmakeAppl(sym_Var_1, m_69), term_g_29);
  t = w_7(n_69, o_69, p_69, t);
  t = m_69;
  return(t);
}
static ATerm z_7 (ATerm v_25, ATerm w_25, ATerm t)
{
  ATerm q_69 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_25, w_25);
  t = l_8(v_25, w_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_69 = ATgetFirst((ATermList) t);
      {
        ATerm h_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_69;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL;
  v_70 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_18 = NULL,x_18 = NULL,y_18 = NULL,f_19 = NULL;
        t = term_x_14;
        f_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_14, v_70);
        t = z_7(f_19, v_70, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm n_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_29) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            t_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, w_70);
        x_18 = t;
        t = (ATerm) ATinsert(ATempty, t_18);
        y_18 = t;
        t = SSLsetAnnotations(x_18, y_18);
        LocalPopChoice(m_29);
      }
    else
      {
        t = i_29;
        {
          ATerm o_29 = t;
          int p_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_19 = NULL,q_19 = NULL,a_20 = NULL,h_20 = NULL;
              t = term_x_14;
              h_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_14, v_70);
              t = z_7(h_20, v_70, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_29 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_29) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  n_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, w_70);
              q_19 = t;
              t = (ATerm) ATinsert(ATempty, n_19);
              a_20 = t;
              t = SSLsetAnnotations(q_19, a_20);
              LocalPopChoice(p_29);
            }
          else
            {
              t = o_29;
              {
                ATerm v_20 = NULL,w_20 = NULL,z_20 = NULL,k_21 = NULL;
                t = term_x_14;
                k_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_14, v_70);
                t = z_7(k_21, v_70, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm t_29 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) t_29) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    v_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, w_70);
                w_20 = t;
                t = (ATerm) ATinsert(ATempty, v_20);
                z_20 = t;
                t = SSLsetAnnotations(w_20, z_20);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,s_30 = NULL;
  ATerm v_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(x_29);
    }
  else
    {
      t = v_29;
    }
  e_71 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_71);
  b_71 = t;
  t = c_71;
  t = DeclareBound_0_0(t);
  d_71 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_71);
  s_30 = t;
  t = SSLsetAnnotations(s_30, b_71);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm z_29 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL,u_30 = NULL;
      j_71 = t;
      if(match_cons(t, sym_Var_1))
        {
          i_71 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_71);
      h_71 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, i_71);
      u_30 = t;
      t = SSLsetAnnotations(u_30, h_71);
      LocalPopChoice(j_30);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = z_29;
      {
        ATerm k_30 = t;
        int l_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,v_30 = NULL;
            n_71 = t;
            if(match_cons(t, sym_App_2))
              {
                l_71 = ATgetArgument(t, 0);
                m_71 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_71);
            k_71 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, l_71, m_71);
            v_30 = t;
            t = SSLsetAnnotations(v_30, k_71);
            LocalPopChoice(l_30);
            {
              ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,c_31 = NULL;
              t_71 = t;
              if(match_cons(t, sym_App_2))
                {
                  p_71 = ATgetArgument(t, 0);
                  q_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_71);
              o_71 = t;
              t = p_71;
              t = mark_buv_0_0(t);
              r_71 = t;
              t = q_71;
              t = mark_build_vars_0_0(t);
              s_71 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, r_71, s_71);
              c_31 = t;
              t = SSLsetAnnotations(c_31, o_71);
            }
          }
        else
          {
            t = k_30;
            {
              ATerm m_30 = t;
              int p_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL,d_31 = NULL;
                  w_71 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      v_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_71);
                  u_71 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, v_71);
                  d_31 = t;
                  t = SSLsetAnnotations(d_31, u_71);
                  LocalPopChoice(p_30);
                  {
                    ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,i_31 = NULL;
                    a_72 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        y_71 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(a_72);
                    x_71 = t;
                    t = y_71;
                    t = mark_buv_0_0(t);
                    z_71 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, z_71);
                    i_31 = t;
                    t = SSLsetAnnotations(i_31, x_71);
                  }
                }
              else
                {
                  t = m_30;
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
  ATerm t_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_72 = NULL,w_72 = NULL;
      v_72 = t;
      if(match_cons(t, sym_Match_1))
        {
          w_72 = ATgetArgument(t, 0);
          {
            ATerm q_21 = NULL,u_21 = NULL,q_31 = NULL;
            t = SSLgetAnnotations(v_72);
            q_21 = t;
            t = w_72;
            t = mark_match_vars_0_0(t);
            u_21 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, u_21);
            q_31 = t;
            t = SSLsetAnnotations(q_31, q_21);
          }
        }
      else
        {
          ATerm b_22 = NULL,d_22 = NULL,r_31 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              w_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_72);
          b_22 = t;
          t = w_72;
          t = mark_build_vars_0_0(t);
          d_22 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, d_22);
          r_31 = t;
          t = SSLsetAnnotations(r_31, b_22);
        }
      LocalPopChoice(a_31);
    }
  else
    {
      t = t_30;
      {
        ATerm e_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(g_31);
          }
        else
          {
            t = e_31;
            {
              ATerm h_31 = t;
              int j_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(j_31);
                }
              else
                {
                  t = h_31;
                  {
                    ATerm k_31 = t;
                    int l_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(l_31);
                      }
                    else
                      {
                        t = k_31;
                        {
                          ATerm m_31 = t;
                          int o_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL;
                              x_72 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  y_72 = ATgetArgument(t, 0);
                                  z_72 = ATgetArgument(t, 1);
                                  a_73 = ATgetArgument(t, 2);
                                  b_73 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = x_72;
                              t = f_7(y_72, z_72, a_73, b_73, t);
                              LocalPopChoice(o_31);
                            }
                          else
                            {
                              t = m_31;
                              {
                                ATerm p_31 = t;
                                int s_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(s_31);
                                  }
                                else
                                  {
                                    t = p_31;
                                    {
                                      ATerm t_31 = t;
                                      int x_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL;
                                          j_73 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              k_73 = ATgetArgument(t, 0);
                                              t = k_73;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  g_73 = ATgetArgument(t, 0);
                                                  h_73 = ATgetArgument(t, 1);
                                                  i_73 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = j_73;
                                              t = e_7(g_73, h_73, i_73, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  k_73 = ATgetArgument(t, 0);
                                                  t = k_73;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      g_73 = ATgetArgument(t, 0);
                                                      h_73 = ATgetArgument(t, 1);
                                                      i_73 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = j_73;
                                                  t = d_7(g_73, h_73, i_73, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      k_73 = ATgetArgument(t, 0);
                                                      l_73 = ATgetArgument(t, 1);
                                                      m_73 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = j_73;
                                                  t = c_7(k_73, l_73, m_73, t);
                                                }
                                            }
                                          LocalPopChoice(x_31);
                                        }
                                      else
                                        {
                                          t = t_31;
                                          {
                                            ATerm y_31 = t;
                                            int z_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(z_31);
                                              }
                                            else
                                              {
                                                t = y_31;
                                                {
                                                  ATerm e_32 = t;
                                                  int f_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(f_32);
                                                    }
                                                  else
                                                    {
                                                      t = e_32;
                                                      {
                                                        ATerm g_32 = t;
                                                        int h_32 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm w_73 = NULL;
                                                            w_73 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm k_32 = ATgetArgument(t, 0);
                                                                ATerm l_32 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = w_73;
                                                            t = b_7(t);
                                                            LocalPopChoice(h_32);
                                                          }
                                                        else
                                                          {
                                                            t = g_32;
                                                            {
                                                              ATerm o_32 = t;
                                                              int p_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(p_32);
                                                                }
                                                              else
                                                                {
                                                                  t = o_32;
                                                                  {
                                                                    ATerm r_32 = t;
                                                                    int t_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(t_32);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_32;
                                                                        {
                                                                          ATerm x_32 = t;
                                                                          int z_32 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(z_32);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_32;
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
static ATerm h_11 (ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL,l_74 = NULL;
  j_74 = t;
  t = term_m_14;
  k_74 = t;
  t = (ATerm) ATinsert(ATempty, term_b_33);
  l_74 = t;
  t = SSL_printnl(k_74, l_74);
  t = j_74;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,u_31 = NULL;
  p_74 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_74);
  m_74 = t;
  t = n_74;
  t = map_1_0(mark_buv_0_0, t);
  o_74 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_74);
  u_31 = t;
  t = SSLsetAnnotations(u_31, m_74);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL;
  q_74 = t;
  t = term_m_14;
  r_74 = t;
  t = (ATerm) ATinsert(ATempty, term_d_33);
  s_74 = t;
  t = SSL_printnl(r_74, s_74);
  t = q_74;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,w_31 = NULL,v_31 = NULL;
  t = if_verbose4_1_0(h_11, t);
  i_74 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_74);
  b_74 = t;
  t = c_74;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_74 = ATgetFirst((ATermList) t);
      f_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_74);
  d_74 = t;
  t = f_74;
  t = Cons_2_0(m_11, n_11, t);
  g_74 = t;
  t = (ATerm) ATinsert(CheckATermList(g_74), e_74);
  v_31 = t;
  t = SSLsetAnnotations(v_31, d_74);
  h_74 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_74);
  w_31 = t;
  t = SSLsetAnnotations(w_31, b_74);
  t = if_verbose4_1_0(o_11, t);
  return(t);
}
static ATerm b_8 (ATerm b_34, ATerm c_34, ATerm t)
{
  ATerm t_74 = NULL;
  t = SSL_fputc(b_34, c_34);
  t_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_74);
  return(t);
}
static ATerm c_8 (ATerm n_39, ATerm o_39, ATerm t)
{
  ATerm u_74 = NULL;
  t = SSL_write_term_to_stream_text(n_39, o_39);
  u_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_74);
  return(t);
}
static ATerm e_8 (ATerm d_92 (ATerm), ATerm q_327, ATerm t_39, ATerm t)
{
  ATerm v_74 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_327, term_f_33);
  t = i_8(t);
  v_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_74, t_39);
  t = d_92(t);
  t = fclose_0_0(t);
  t = t_39;
  return(t);
}
static ATerm d_8 (ATerm j_39, ATerm k_39, ATerm t)
{
  ATerm w_74 = NULL;
  t = SSL_write_term_to_stream_baf(j_39, k_39);
  w_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_74);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_33 = ATgetArgument(t, 0);
      if(match_cons(g_33, sym_Stream_1))
        {
          u_22 = ATgetArgument(g_33, 0);
        }
      else
        _fail(t);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8(u_22, v_22, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm h_23 = NULL,j_23 = NULL,l_23 = NULL,n_23 = NULL,p_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_33 = ATgetArgument(t, 0);
      if(match_cons(h_33, sym_Stream_1))
        {
          n_23 = ATgetArgument(h_33, 0);
        }
      else
        _fail(t);
      p_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(n_23, p_23, t);
  h_23 = t;
  t = term_i_33;
  j_23 = t;
  t = h_23;
  if(match_cons(t, sym_Stream_1))
    {
      l_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_33, h_23);
  t = b_8(j_23, l_23, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,k_76 = NULL,l_76 = NULL,b_32 = NULL,a_32 = NULL;
  b_75 = t;
  if(match_cons(t, sym__2))
    {
      i_75 = ATgetArgument(t, 0);
      j_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_75);
  h_75 = t;
  t = i_75;
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_11 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((a_75 != NULL) && (a_75 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_75 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(p_11, t);
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = term_l_33;
        a_75 = t;
      }
  }
  k_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_75, j_75);
  a_32 = t;
  t = SSLsetAnnotations(a_32, h_75);
  t = b_75;
  if(match_cons(t, sym__2))
    {
      d_75 = ATgetArgument(t, 0);
      e_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_75);
  c_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_75, (ATerm) ATmakeAppl(sym__2, not_null(a_75), e_75));
  b_32 = t;
  t = SSLsetAnnotations(b_32, c_75);
  g_75 = t;
  if(match_cons(t, sym__2))
    {
      k_76 = ATgetArgument(t, 0);
      l_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,c_32 = NULL;
        t = SSLgetAnnotations(g_75);
        n_22 = t;
        t = k_76;
        t = fetch_1_0(q_11, t);
        q_22 = t;
        t = l_76;
        if(match_cons(t, sym__2))
          {
            s_22 = ATgetArgument(t, 0);
            t_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_8(r_11, s_22, t_22, t);
        r_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_22, r_22);
        c_32 = t;
        t = SSLsetAnnotations(c_32, n_22);
        LocalPopChoice(n_33);
      }
    else
      {
        t = m_33;
        {
          ATerm a_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,d_32 = NULL;
          t = SSLgetAnnotations(g_75);
          a_23 = t;
          t = l_76;
          if(match_cons(t, sym__2))
            {
              e_23 = ATgetArgument(t, 0);
              f_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_8(v_11, e_23, f_23, t);
          d_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_76, d_23);
          d_32 = t;
          t = SSLsetAnnotations(d_32, a_23);
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
ATerm apply_strategy_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL;
  s_76 = t;
  t = dtime_0_0(t);
  t = s_76;
  t = f_107(t);
  r_76 = t;
  t = dtime_0_0(t);
  o_76 = t;
  t = r_76;
  if(match_cons(t, sym__2))
    {
      p_76 = ATgetArgument(t, 0);
      q_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_76), (ATerm) ATmakeAppl(sym_Runtime_1, o_76)), q_76);
  return(t);
}
static ATerm g_77 (ATerm a_77, ATerm t)
{
  t = SSL_fclose(a_77);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_77 = NULL,e_77 = NULL;
  e_77 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_77 = ATgetArgument(t, 0);
      {
        ATerm o_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_77);
            LocalPopChoice(p_33);
          }
        else
          {
            t = o_33;
            t = g_77(e_77, t);
          }
      }
    }
  else
    {
      t = g_77(e_77, t);
    }
  return(t);
}
static ATerm f_8 (ATerm p_39, ATerm t)
{
  t = SSL_read_term_from_stream(p_39);
  return(t);
}
static ATerm g_8 (ATerm u_32, ATerm v_32, ATerm t)
{
  t = SSL_strcat(u_32, v_32);
  return(t);
}
static ATerm h_8 (ATerm d_34, ATerm e_34, ATerm t)
{
  ATerm h_77 = NULL;
  t = SSL_fopen(d_34, e_34);
  h_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_77);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_77 = NULL;
  t = SSL_stdin_stream();
  i_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_77);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_77 = NULL;
  t = SSL_stdout_stream();
  j_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_77);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_77 = NULL;
  t = SSL_stderr_stream();
  k_77 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_77);
  return(t);
}
static ATerm r_78 (ATerm q_77, ATerm t)
{
  ATerm r_77 = NULL;
  t = SSL_explode_term(q_77);
  if(match_cons(t, sym__2))
    {
      ATerm q_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_33 = ATgetArgument(t, 1);
        if(((ATgetType(r_33) == AT_LIST) && !(ATisEmpty(r_33))))
          {
            r_77 = ATgetFirst((ATermList) r_33);
            {
              ATerm s_33 = (ATerm) ATgetNext((ATermList) r_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_77;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_77;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_77;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_77;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_78 (ATerm u_77, ATerm v_77, ATerm w_77, ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,c_78 = NULL,i_32 = NULL;
  t = SSLgetAnnotations(w_77);
  z_77 = t;
  t = u_77;
  if(match_cons(t, sym_Path_1))
    {
      c_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_78, v_77);
  i_32 = t;
  t = SSLsetAnnotations(i_32, z_77);
  if(match_cons(t, sym__2))
    {
      x_77 = ATgetArgument(t, 0);
      y_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8(x_77, y_77, t);
  return(t);
}
static ATerm t_78 (ATerm e_78, ATerm f_78, ATerm g_78, ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL,m_78 = NULL,j_32 = NULL;
  t = SSLgetAnnotations(g_78);
  j_78 = t;
  t = SSL_is_string(e_78);
  m_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_78, f_78);
  j_32 = t;
  t = SSLsetAnnotations(j_32, j_78);
  if(match_cons(t, sym__2))
    {
      h_78 = ATgetArgument(t, 0);
      i_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8(h_78, i_78, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  o_78 = t;
  if(match_cons(t, sym__2))
    {
      p_78 = ATgetArgument(t, 0);
      q_78 = ATgetArgument(t, 1);
      {
        ATerm t_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_78(o_78, t);
            LocalPopChoice(u_33);
          }
        else
          {
            t = t_33;
            {
              ATerm v_33 = t;
              int w_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_78(p_78, q_78, o_78, t);
                  LocalPopChoice(w_33);
                }
              else
                {
                  t = v_33;
                  t = t_78(p_78, q_78, o_78, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_78(o_78, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,c_79 = NULL;
  c_79 = t;
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_79, term_z_33);
        t = i_8(t);
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        {
          ATerm f_24 = NULL,h_24 = NULL;
          t = term_a_34;
          h_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_34, c_79);
          t = g_8(h_24, c_79, t);
          f_24 = t;
          t = SSL_perror(f_24);
          _fail(t);
        }
      }
  }
  w_78 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(x_78, t);
  v_78 = t;
  t = w_78;
  t = fclose_0_0(t);
  t = v_78;
  return(t);
}
ATerm fetch_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  static ATerm b_80 (ATerm t)
  {
    ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL;
    y_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_79 = ATgetFirst((ATermList) t);
        a_80 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_34 = t;
      int g_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_24 = NULL,t_24 = NULL,m_32 = NULL;
          t = SSLgetAnnotations(y_79);
          m_24 = t;
          t = z_79;
          t = q_93(t);
          t_24 = t;
          t = (ATerm) ATinsert(CheckATermList(a_80), t_24);
          m_32 = t;
          t = SSLsetAnnotations(m_32, m_24);
          LocalPopChoice(g_34);
        }
      else
        {
          t = f_34;
          {
            ATerm i_25 = NULL,o_25 = NULL,n_32 = NULL;
            t = SSLgetAnnotations(y_79);
            i_25 = t;
            t = a_80;
            t = b_80(t);
            o_25 = t;
            t = (ATerm) ATinsert(CheckATermList(o_25), z_79);
            n_32 = t;
            t = SSLsetAnnotations(n_32, i_25);
          }
        }
    }
    return(t);
  }
  t = b_80(t);
  return(t);
}
static ATerm l_8 (ATerm b_27, ATerm c_27, ATerm t)
{
  t = SSL_table_get(b_27, c_27);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_115 (ATerm), ATerm t)
{
  ATerm f_80 = NULL;
  f_80 = t;
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
        t = term_s_14;
        i_80 = t;
        t = term_u_14;
        j_80 = t;
        t = term_v_14;
        t = l_8(i_80, j_80, t);
        h_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_80, term_j_34);
        t = geq_0_0(t);
        t = f_80;
        t = r_115(t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        t = f_80;
      }
  }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm m_80 = NULL;
  m_80 = t;
  if(match_string(t, "-k"))
    {
      t = m_80;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_80;
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL;
  n_80 = t;
  t = SSL_string_to_int(n_80);
  o_80 = t;
  t = term_k_34;
  p_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_34, o_80);
  t = o_8(p_80, o_80, t);
  t = n_80;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_l_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_11, a_12, b_12, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm r_80 = NULL;
  r_80 = t;
  if(match_string(t, "-S"))
    {
      t = r_80;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_80;
    }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL;
  t = term_u_14;
  s_80 = t;
  t = term_m_34;
  t_80 = t;
  t = term_n_34;
  t = o_8(s_80, t_80, t);
  t = term_o_34;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_p_34;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL;
  u_80 = t;
  t = SSL_string_to_int(u_80);
  v_80 = t;
  t = term_u_14;
  w_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_14, v_80);
  t = o_8(w_80, v_80, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_80);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_q_34;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm x_80 = NULL,y_80 = NULL;
  t = term_r_34;
  x_80 = t;
  t = term_l_14;
  y_80 = t;
  t = term_s_34;
  t = o_8(x_80, y_80, t);
  t = term_t_34;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_12, d_12, e_12, t);
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      {
        ATerm x_34 = t;
        int y_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_12, h_12, i_12, t);
            LocalPopChoice(y_34);
          }
        else
          {
            t = x_34;
            t = Option_3_0(j_12, k_12, l_12, t);
          }
      }
    }
  return(t);
}
static ATerm o_8 (ATerm g_54, ATerm h_54, ATerm t)
{
  ATerm z_80 = NULL;
  t = term_s_14;
  z_80 = t;
  t = SSL_table_put(z_80, g_54, h_54);
  t = (ATerm) ATmakeAppl(sym__3, term_s_14, g_54, h_54);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL;
      t = term_l_14;
      t = e_0(t);
      e_81 = t;
      t = term_z_34;
      f_81 = t;
      t = term_a_35;
      g_81 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_34, term_a_35, e_81);
      t = m_8(f_81, g_81, e_81, t);
      _fail(t);
    }
  else
    {
      ATerm j_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_81 = ATgetFirst((ATermList) t);
          d_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_81;
      t = c_0(t);
      t = term_l_14;
      t = d_0(t);
      j_81 = t;
      t = (ATerm) ATinsert(CheckATermList(d_81), j_81);
    }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm l_81 = NULL;
  l_81 = t;
  if(match_string(t, "-o"))
    {
      t = l_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_81;
    }
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL;
  m_81 = t;
  t = term_b_35;
  n_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_35, m_81);
  t = o_8(n_81, m_81, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_81);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_c_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_12, o_12, p_12, t);
  return(t);
}
static ATerm m_8 (ATerm k_25, ATerm l_25, ATerm j_25, ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL;
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_25, l_25);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_35 = ATgetArgument(t, 0);
            ATerm g_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_25, l_25);
        t = l_8(k_25, l_25, t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = (ATerm) ATempty;
      }
  }
  q_81 = t;
  t = (ATerm) ATinsert(CheckATermList(q_81), j_25);
  r_81 = t;
  t = SSL_table_put(k_25, l_25, r_81);
  t = p_81;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
      t = term_l_14;
      t = n_0(t);
      c_82 = t;
      t = term_z_34;
      d_82 = t;
      t = term_a_35;
      e_82 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_34, term_a_35, c_82);
      t = m_8(d_82, e_82, c_82, t);
      _fail(t);
    }
  else
    {
      ATerm k_82 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_81 = ATgetFirst((ATermList) t);
          z_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_81;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_82 = ATgetFirst((ATermList) t);
          b_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_81;
      t = k_0(t);
      t = a_82;
      t = l_0(t);
      k_82 = t;
      t = (ATerm) ATinsert(CheckATermList(b_82), k_82);
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm m_82 = NULL;
  m_82 = t;
  if(match_string(t, "-i"))
    {
      t = m_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_82;
    }
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL;
  n_82 = t;
  t = term_h_35;
  o_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_35, n_82);
  t = o_8(o_82, n_82, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_82);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_12, r_12, s_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_14;
  t = whoami_0_0(t);
  p_82 = t;
  t = term_m_14;
  r_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_35), p_82);
  s_82 = t;
  t = SSL_printnl(r_82, s_82);
  t = term_p_14;
  q_82 = t;
  t = SSL_exit(q_82);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_82 = NULL,u_82 = NULL;
  t = term_s_14;
  t_82 = t;
  t = term_k_35;
  u_82 = t;
  t = term_l_35;
  t = l_8(t_82, u_82, t);
  return(t);
}
static ATerm j_8 (ATerm t_40, ATerm u_40, ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_40, u_40);
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      t = SSL_addr(t_40, u_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL;
  w_82 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_82;
      t = m_100(t);
    }
  else
    {
      ATerm b_83 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_82 = ATgetFirst((ATermList) t);
          y_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_82;
      t = foldr_2_0(m_100, n_100, t);
      b_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_82, b_83);
      t = n_100(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL;
  if(match_cons(t, sym__2))
    {
      k_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(k_26, l_26, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_83 = NULL,b_26 = NULL,c_26 = NULL;
  t = times_0_0(t);
  c_26 = t;
  t = SSL_explode_term(c_26);
  if(match_cons(t, sym__2))
    {
      ATerm o_35 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_26;
  t = foldr_2_0(t_12, u_12, t);
  e_83 = t;
  t = SSL_TicksToSeconds(e_83);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL;
  a_84 = t;
  if(match_cons(t, sym__2))
    {
      b_84 = ATgetArgument(t, 0);
      c_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_84;
        if((b_84 != t))
          {
            _fail(t);
          }
        t = a_84;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = (ATerm) ATmakeAppl(sym__2, b_84, c_84);
        {
          ATerm r_35 = t;
          int s_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_84, c_84);
              LocalPopChoice(s_35);
            }
          else
            {
              t = r_35;
              t = SSL_gtr(b_84, c_84);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_84, c_84);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_115 (ATerm), ATerm t)
{
  ATerm g_84 = NULL;
  g_84 = t;
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_84 = NULL,j_84 = NULL,k_84 = NULL;
        t = term_s_14;
        j_84 = t;
        t = term_u_14;
        k_84 = t;
        t = term_v_14;
        t = l_8(j_84, k_84, t);
        i_84 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_84, term_p_14);
        t = geq_0_0(t);
        t = g_84;
        t = q_115(t);
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        t = g_84;
      }
  }
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL,p_84 = NULL,q_84 = NULL;
  t = run_time_0_0(t);
  m_84 = t;
  t = term_l_14;
  t = whoami_0_0(t);
  n_84 = t;
  t = term_m_14;
  p_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_35), m_84), term_v_35), n_84);
  q_84 = t;
  t = SSL_printnl(p_84, q_84);
  t = (ATerm) ATmakeAppl(sym__2, term_m_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_35), m_84), term_v_35), n_84));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_84 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_34;
  r_84 = t;
  t = SSL_exit(r_84);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm b_85 = NULL,c_85 = NULL;
  c_85 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_85;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_85 = ATgetArgument(t, 0);
          {
            ATerm j_27 = NULL,q_32 = NULL;
            t = SSLgetAnnotations(c_85);
            j_27 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_85);
            q_32 = t;
            t = SSLsetAnnotations(q_32, j_27);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_85;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_84 = NULL,v_84 = NULL;
      t = term_s_14;
      u_84 = t;
      t = term_z_35;
      v_84 = t;
      t = term_a_36;
      t = l_8(u_84, v_84, t);
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
      t = fetch_1_0(x_12, t);
    }
  t = d_108(t);
  return(t);
}
ATerm map_1_0 (ATerm g_93 (ATerm), ATerm t)
{
  static ATerm s_85 (ATerm t)
  {
    ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
    p_85 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_85;
      }
    else
      {
        ATerm y_27 = NULL,b_28 = NULL,c_28 = NULL,s_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_85 = ATgetFirst((ATermList) t);
            r_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_85);
        y_27 = t;
        t = q_85;
        t = g_93(t);
        b_28 = t;
        t = r_85;
        t = s_85(t);
        c_28 = t;
        t = (ATerm) ATinsert(CheckATermList(c_28), b_28);
        s_32 = t;
        t = SSLsetAnnotations(s_32, y_27);
      }
    return(t);
  }
  t = s_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_85 = NULL,y_85 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_85 = ATgetFirst((ATermList) t);
      y_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_86 = NULL,d_86 = NULL;
        static ATerm z_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_86)), not_null(d_86));
          return(t);
        }
        t = y_85;
        t = i_0(t);
        if(((c_86 != NULL) && (c_86 != t)))
          _fail(t);
        else
          c_86 = t;
        t = v_85;
        t = g_0(t);
        if(((d_86 != NULL) && (d_86 != t)))
          _fail(t);
        else
          d_86 = t;
        t = y_85;
        t = reverse_acc_2_0(g_0, z_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_14;
      t = i_0(t);
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL,l_86 = NULL,w_32 = NULL;
  l_86 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_86);
  j_86 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_86);
  w_32 = t;
  t = SSLsetAnnotations(w_32, j_86);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm n_86 = NULL;
  n_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_86), term_b_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL;
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_86 = NULL,i_86 = NULL;
      t = term_s_14;
      h_86 = t;
      t = term_k_35;
      i_86 = t;
      t = term_l_35;
      t = l_8(h_86, i_86, t);
      LocalPopChoice(d_36);
    }
  else
    {
      t = c_36;
      t = fetch_1_0(a_13, t);
    }
  t = term_e_36;
  t = echo_0_0(t);
  t = term_z_34;
  f_86 = t;
  t = term_a_35;
  g_86 = t;
  t = term_f_36;
  t = l_8(f_86, g_86, t);
  t = reverse_acc_2_0(_id, b_13, t);
  t = map_1_0(c_13, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL;
  p_86 = t;
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_86;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_36 = ATgetFirst((ATermList) t);
                ATerm j_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_86;
          }
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = (ATerm) ATinsert(ATempty, p_86);
      }
  }
  q_86 = t;
  t = term_l_33;
  r_86 = t;
  t = SSL_printnl(r_86, q_86);
  t = p_86;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL;
  t = term_s_14;
  v_86 = t;
  t = term_k_35;
  w_86 = t;
  t = term_l_35;
  t = l_8(v_86, w_86, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL;
  t = term_k_36;
  x_86 = t;
  t = term_l_14;
  y_86 = t;
  t = term_l_36;
  t = o_8(x_86, y_86, t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_m_36;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL;
  t = term_k_36;
  b_87 = t;
  t = term_l_14;
  c_87 = t;
  t = term_l_36;
  t = o_8(b_87, c_87, t);
  t = term_n_36;
  z_86 = t;
  t = term_l_14;
  a_87 = t;
  t = term_o_36;
  t = o_8(z_86, a_87, t);
  t = term_p_36;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_13, f_13, h_13, t);
      LocalPopChoice(s_36);
    }
  else
    {
      t = r_36;
      t = Option_3_0(m_13, r_13, s_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm t)
{
  ATerm d_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,y_32 = NULL;
  i_87 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_87 = ATgetFirst((ATermList) t);
      f_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_87);
  d_87 = t;
  t = e_87;
  t = h_82(t);
  g_87 = t;
  t = f_87;
  t = i_82(t);
  h_87 = t;
  t = (ATerm) ATinsert(CheckATermList(h_87), g_87);
  y_32 = t;
  t = SSLsetAnnotations(y_32, d_87);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_111 (ATerm), ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL,s_87 = NULL,t_87 = NULL,a_33 = NULL;
  n_87 = t;
  {
    ATerm t_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_36;
        t = i_111(t);
        LocalPopChoice(u_36);
      }
    else
      {
        t = t_36;
      }
  }
  t = n_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_87 = ATgetFirst((ATermList) t);
      q_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_87);
  o_87 = t;
  t = term_k_35;
  t_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_35, p_87);
  t = o_8(t_87, p_87, t);
  t = q_87;
  {
    static ATerm d_88 (ATerm t)
    {
      ATerm w_36 = t;
      int x_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_36 = t;
          int z_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_87 = NULL;
              w_87 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_87;
              LocalPopChoice(z_36);
            }
          else
            {
              t = y_36;
              t = i_111(t);
              t = Cons_2_0(_id, d_88, t);
            }
          LocalPopChoice(x_36);
        }
      else
        {
          t = w_36;
          {
            ATerm z_87 = NULL,a_88 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_87 = ATgetFirst((ATermList) t);
                a_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_88), (ATerm) ATmakeAppl(sym_Undefined_1, z_87));
          }
        }
      return(t);
    }
    t = d_88(t);
  }
  s_87 = t;
  t = (ATerm) ATinsert(CheckATermList(s_87), (ATerm) ATmakeAppl(sym_Program_1, p_87));
  a_33 = t;
  t = SSLsetAnnotations(a_33, o_87);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm p_88 = NULL;
  p_88 = t;
  if(match_string(t, "--help"))
    {
      t = p_88;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_88;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_88;
        }
    }
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm q_88 = NULL,r_88 = NULL;
  t = term_z_35;
  q_88 = t;
  t = term_l_14;
  r_88 = t;
  t = term_a_37;
  t = o_8(q_88, r_88, t);
  t = term_b_37;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  t = term_c_37;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_111 (ATerm), ATerm t)
{
  ATerm i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL;
  k_88 = t;
  t = term_z_34;
  m_88 = t;
  t = term_a_35;
  n_88 = t;
  t = (ATerm) ATempty;
  o_88 = t;
  t = SSL_table_put(m_88, n_88, o_88);
  t = k_88;
  {
    static ATerm t_13 (ATerm t)
    {
      ATerm d_37 = t;
      int e_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_111(t);
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
                t = Option_3_0(u_13, v_13, x_13, t);
                LocalPopChoice(g_37);
              }
            else
              {
                t = f_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_13, t);
  }
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_89 = NULL;
        c_89 = t;
        {
          ATerm j_37 = t;
          int k_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_28 = NULL;
              t = c_89;
              {
                ATerm l_37 = t;
                int m_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_28 = NULL,t_28 = NULL;
                    t = term_s_14;
                    s_28 = t;
                    t = term_z_35;
                    t_28 = t;
                    t = term_a_36;
                    t = l_8(s_28, t_28, t);
                    LocalPopChoice(m_37);
                  }
                else
                  {
                    t = l_37;
                    t = fetch_1_0(y_13, t);
                  }
              }
              t = c_89;
              t = default_system_usage_0_0(t);
              t = term_m_34;
              r_28 = t;
              t = SSL_exit(r_28);
              LocalPopChoice(k_37);
            }
          else
            {
              t = j_37;
              {
                ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
                t = term_s_14;
                k_29 = t;
                t = term_k_36;
                l_29 = t;
                t = term_n_37;
                t = l_8(k_29, l_29, t);
                t = c_89;
                t = default_system_about_0_0(t);
                t = term_m_34;
                j_29 = t;
                t = SSL_exit(j_29);
              }
            }
        }
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        {
          ATerm o_37 = t;
          int p_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_89 = NULL,e_89 = NULL,f_89 = NULL;
              static ATerm z_13 (ATerm t)
              {
                ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL,c_33 = NULL;
                i_89 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_89 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_89);
                g_89 = t;
                t = h_89;
                if(((i_88 != NULL) && (i_88 != t)))
                  _fail(t);
                else
                  i_88 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_89);
                c_33 = t;
                t = SSLsetAnnotations(c_33, g_89);
                return(t);
              }
              t = fetch_1_0(z_13, t);
              t = term_m_14;
              e_89 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_88)), term_q_37);
              f_89 = t;
              t = SSL_printnl(e_89, f_89);
              t = (ATerm) ATmakeAppl(sym__2, term_m_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_88)), term_q_37));
              t = default_system_usage_0_0(t);
              t = term_p_14;
              d_89 = t;
              t = SSL_exit(d_89);
              LocalPopChoice(p_37);
            }
          else
            {
              t = o_37;
            }
        }
      }
  }
  j_88 = t;
  t = term_z_34;
  l_88 = t;
  t = SSL_table_destroy(l_88);
  t = j_88;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm t)
{
  ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL;
  t = parse_options_1_0(f_108, t);
  n_89 = t;
  t = term_r_37;
  q_89 = t;
  t = SSL_table_create(q_89);
  t = term_r_37;
  o_89 = t;
  t = term_s_37;
  p_89 = t;
  t = SSL_table_put(o_89, p_89, n_89);
  t = n_89;
  t = h_108(t);
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_108, t);
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
        {
          ATerm v_37 = t;
          int w_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_108(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_37);
            }
          else
            {
              t = v_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = if_verbose2_1_0(h_14, t);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm r_89 = NULL,s_89 = NULL;
  t = term_x_37;
  r_89 = t;
  t = term_l_14;
  s_89 = t;
  t = term_a_38;
  t = o_8(r_89, s_89, t);
  t = term_b_38;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_c_38;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL,y_89 = NULL;
  t_89 = t;
  t = term_s_14;
  x_89 = t;
  t = term_k_35;
  y_89 = t;
  t = term_l_35;
  t = l_8(x_89, y_89, t);
  u_89 = t;
  t = term_m_14;
  v_89 = t;
  t = (ATerm) ATinsert(ATempty, u_89);
  w_89 = t;
  t = SSL_printnl(v_89, w_89);
  t = t_89;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm t)
{
  static ATerm a_14 (ATerm t)
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_107(t);
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        {
          ATerm i_38 = t;
          int j_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    LocalPopChoice(l_38);
                  }
                else
                  {
                    t = k_38;
                    {
                      ATerm m_38 = t;
                      int n_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(e_14, f_14, g_14, t);
                          LocalPopChoice(n_38);
                        }
                      else
                        {
                          t = m_38;
                          {
                            ATerm o_38 = t;
                            int p_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(p_38);
                              }
                            else
                              {
                                t = o_38;
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
    ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL;
    a_90 = t;
    {
      ATerm q_38 = t;
      int r_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm i_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((z_89 != NULL) && (z_89 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_89 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_14, t);
          LocalPopChoice(r_38);
        }
      else
        {
          t = q_38;
          t = term_s_38;
          z_89 = t;
        }
    }
    t = not_null(z_89);
    t = ReadFromFile_0_0(t);
    b_90 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_90, b_90);
    t = apply_strategy_1_0(o_107, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(a_14, q_107, b_14, c_14, t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL,g_90 = NULL,e_33 = NULL;
  g_90 = t;
  if(match_cons(t, sym__2))
    {
      d_90 = ATgetArgument(t, 0);
      e_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_90);
  c_90 = t;
  t = e_90;
  t = mark_bound_unbound_vars_0_0(t);
  f_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_90, f_90);
  e_33 = t;
  t = SSLsetAnnotations(e_33, c_90);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_14, _fail, default_usage_0_0, t);
  return(t);
}
