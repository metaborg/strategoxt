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
Symbol sym_Prefix_2;
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
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_m_37;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_q_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_b_33;
ATerm term_u_32;
ATerm term_l_32;
ATerm term_i_32;
ATerm term_h_31;
ATerm term_c_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_m_30;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_o_18;
ATerm term_d_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Defined_2, term_w_17, term_y_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Defined_2, term_w_25, term_x_25);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_e_27, term_y_17);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_j_33);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_33);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_o_33, term_c_14);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_w_33, term_x_33);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_c_14);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym__2, term_i_35, term_c_14);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym__2, term_v_34, term_c_14);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__2, term_r_36, term_c_14);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm g_112 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm z_80 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm y_80 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm x_80 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm e_83 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm h_7 (ATerm p_23, ATerm q_23, ATerm r_23, ATerm t);
static ATerm e_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm i_7 (ATerm j_23, ATerm n_23, ATerm l_23, ATerm t);
static ATerm e_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm j_7 (ATerm d_23, ATerm h_23, ATerm f_23, ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm k_7 (ATerm b_22, ATerm c_22, ATerm d_22, ATerm f_22, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm l_7 (ATerm m_20, ATerm n_20, ATerm l_20, ATerm t);
static ATerm u_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm m_7 (ATerm o_25, ATerm n_25, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm z_20 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm q_7 (ATerm s_94 (ATerm), ATerm q_46, ATerm p_46, ATerm t);
ATerm foldr_3_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm t);
static ATerm r_7 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm u_46, ATerm t_46, ATerm t);
static ATerm s_7 (ATerm n_94 (ATerm), ATerm o_46, ATerm n_46, ATerm t);
ATerm at_end_1_0 (ATerm e_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_50 (ATerm k_50, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm x_7 (ATerm s_600, ATerm x_600, ATerm k_58, ATerm t);
ATerm while_not_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t);
ATerm for_3_0 (ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm e_56 (ATerm u_53, ATerm v_53, ATerm w_53, ATerm t);
static ATerm l_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm free_vars_3_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm g_10 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm z_7 (ATerm i_81 (ATerm), ATerm d_24, ATerm b_24, ATerm t);
static ATerm l_10 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm a_8 (ATerm q_24, ATerm r_24, ATerm t);
ATerm end_scope_1_0 (ATerm f_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_81 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t);
static ATerm o_10 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm b_8 (ATerm y_24, ATerm z_24, ATerm a_25, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm e_8 (ATerm w_24, ATerm x_24, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm h_8 (ATerm q_32, ATerm r_32, ATerm t);
static ATerm i_8 (ATerm b_38, ATerm c_38, ATerm t);
static ATerm k_8 (ATerm l_89 (ATerm), ATerm y_313, ATerm f_38, ATerm t);
static ATerm j_8 (ATerm x_37, ATerm y_37, ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm z_103 (ATerm), ATerm t);
static ATerm p_72 (ATerm j_72, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_8 (ATerm d_38, ATerm t);
static ATerm m_8 (ATerm s_32, ATerm t_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_74 (ATerm z_72, ATerm t);
static ATerm b_74 (ATerm d_73, ATerm e_73, ATerm f_73, ATerm t);
static ATerm c_74 (ATerm n_73, ATerm o_73, ATerm p_73, ATerm t);
static ATerm n_8 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_90 (ATerm), ATerm t);
static ATerm g_8 (ATerm k_31, ATerm l_31, ATerm t);
ATerm debug_1_0 (ATerm j_89 (ATerm), ATerm t);
static ATerm m_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm e_112 (ATerm), ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_8 (ATerm j_52, ATerm k_52, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_8 (ATerm l_24, ATerm m_24, ATerm k_24, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm k_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_8 (ATerm f_39, ATerm g_39, ATerm t);
ATerm foldr_2_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_112 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_12 (ATerm t);
ATerm need_help_1_0 (ATerm x_104 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_90 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm q_8 (ATerm c_26, ATerm d_26, ATerm t);
static ATerm q_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_108 (ATerm), ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
ATerm parse_options_1_0 (ATerm b_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm t);
static ATerm r_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm y_13 (ATerm t);
ATerm iowrap_3_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm t);
static ATerm b_14 (ATerm t);
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
  t = term_c_14;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_d_14;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_14), b_0), term_e_14);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_g_14;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL;
        t = term_j_14;
        t = get_config_0_0(t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_k_14);
        t = geq_0_0(t);
        t = x_0;
        t = g_112(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = x_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,n_6 = NULL;
  static ATerm j_0 (ATerm t)
  {
    ATerm g_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,q_6 = NULL,p_6 = NULL;
    w_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        q_1 = ATgetArgument(t, 0);
        s_1 = ATgetArgument(t, 1);
        t_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_1);
    m_1 = t;
    t = q_1;
    t = z_80(t);
    u_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, u_1, s_1, t_1);
    p_6 = t;
    t = SSLsetAnnotations(p_6, m_1);
    v_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        h_1 = ATgetArgument(t, 0);
        j_1 = ATgetArgument(t, 1);
        k_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_1);
    g_1 = t;
    t = j_1;
    t = z_80(t);
    l_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_1, l_1, k_1);
    q_6 = t;
    t = SSLsetAnnotations(q_6, g_1);
    return(t);
  }
  static ATerm l_0 (ATerm t)
  {
    ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,t_6 = NULL;
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
    t = z_80(t);
    b_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_1, z_1, b_2);
    t_6 = t;
    t = SSLsetAnnotations(t_6, x_1);
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
  n_6 = t;
  t = SSLsetAnnotations(n_6, b_1);
  t = abstract_choice_2_0(j_0, l_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,n_7 = NULL;
  static ATerm m_0 (ATerm t)
  {
    ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,l_2 = NULL,m_2 = NULL,o_7 = NULL;
    m_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        i_2 = ATgetArgument(t, 0);
        j_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_2);
    h_2 = t;
    t = i_2;
    t = y_80(t);
    l_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, l_2, j_2);
    o_7 = t;
    t = SSLsetAnnotations(o_7, h_2);
    return(t);
  }
  static ATerm q_0 (ATerm t)
  {
    ATerm n_2 = NULL,p_2 = NULL,q_2 = NULL,u_2 = NULL,v_2 = NULL,p_7 = NULL;
    v_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        p_2 = ATgetArgument(t, 0);
        q_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_2);
    n_2 = t;
    t = q_2;
    t = y_80(t);
    u_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, p_2, u_2);
    p_7 = t;
    t = SSLsetAnnotations(p_7, n_2);
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
  n_7 = t;
  t = SSLsetAnnotations(n_7, d_2);
  t = abstract_choice_2_0(m_0, q_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm t)
{
  ATerm x_2 = NULL,z_2 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,k_3 = NULL;
  h_3 = t;
  t = save_MarkVar_0_0(t);
  x_2 = t;
  t = h_3;
  t = a_81(t);
  g_3 = t;
  t = save_MarkVar_0_0(t);
  z_2 = t;
  t = term_m_14;
  k_3 = t;
  t = SSL_table_destroy(k_3);
  t = term_m_14;
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_14, x_2);
  t = m_7(i_3, x_2, t);
  t = g_3;
  t = b_81(t);
  f_3 = t;
  t = z_2;
  t = isect_MarkVar_0_0(t);
  t = f_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,p_3 = NULL,w_7 = NULL;
  static ATerm y_0 (ATerm t)
  {
    ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,u_3 = NULL,v_3 = NULL,y_7 = NULL;
    v_3 = t;
    if(match_cons(t, sym_Choice_2))
      {
        r_3 = ATgetArgument(t, 0);
        s_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_3);
    q_3 = t;
    t = r_3;
    t = x_80(t);
    u_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, u_3, s_3);
    y_7 = t;
    t = SSLsetAnnotations(y_7, q_3);
    return(t);
  }
  static ATerm a_1 (ATerm t)
  {
    ATerm w_3 = NULL,x_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,c_8 = NULL;
    c_4 = t;
    if(match_cons(t, sym_Choice_2))
      {
        x_3 = ATgetArgument(t, 0);
        a_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_4);
    w_3 = t;
    t = a_4;
    t = x_80(t);
    b_4 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, x_3, b_4);
    c_8 = t;
    t = SSLsetAnnotations(c_8, w_3);
    return(t);
  }
  p_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      m_3 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_3);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, m_3, n_3);
  w_7 = t;
  t = SSLsetAnnotations(w_7, l_3);
  t = abstract_choice_2_0(y_0, a_1, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm d_4 = NULL,g_4 = NULL,h_4 = NULL,m_4 = NULL,r_4 = NULL,s_4 = NULL,e_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL,y_8 = NULL,w_8 = NULL;
  g_4 = t;
  t = save_MarkVar_0_0(t);
  d_4 = t;
  t = g_4;
  if(match_cons(t, sym_Rec_2))
    {
      g_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_4);
  e_5 = t;
  t = h_5;
  t = mark_buv_0_0(t);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, g_5, j_5);
  w_8 = t;
  t = SSLsetAnnotations(w_8, e_5);
  t = d_4;
  t = isect_MarkVar_0_0(t);
  t = g_4;
  if(match_cons(t, sym_Rec_2))
    {
      m_4 = ATgetArgument(t, 0);
      r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_4);
  h_4 = t;
  t = r_4;
  t = mark_buv_0_0(t);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, m_4, s_4);
  y_8 = t;
  t = SSLsetAnnotations(y_8, h_4);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,n_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,b_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,p_9 = NULL,o_9 = NULL,j_9 = NULL;
  h_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      d_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
      f_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_6);
  b_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, d_6, e_6, f_6);
  j_9 = t;
  t = SSLsetAnnotations(j_9, b_6);
  g_6 = t;
  t = save_MarkVar_0_0(t);
  k_5 = t;
  t = g_6;
  if(match_cons(t, sym_PrimT_3))
    {
      v_5 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
      x_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_6);
  u_5 = t;
  t = x_5;
  t = map_1_0(y_2, t);
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, v_5, w_5, y_5);
  o_9 = t;
  t = SSLsetAnnotations(o_9, u_5);
  z_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
      q_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_5);
  l_5 = t;
  t = p_5;
  t = mark_buv_0_0(t);
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, n_5, r_5, q_5);
  p_9 = t;
  t = SSLsetAnnotations(p_9, l_5);
  t_5 = t;
  t = k_5;
  t = isect_MarkVar_0_0(t);
  t = t_5;
  return(t);
}
ATerm alltd_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  static ATerm i_6 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_83(t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = SRTS_all(i_6, t);
      }
    return(t);
  }
  t = i_6(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm d_10 = NULL,f_10 = NULL,h_10 = NULL,i_10 = NULL;
  f_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      h_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
      d_10 = ATgetArgument(t, 2);
      {
        ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL,i_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,k_2 = NULL,o_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,w_2 = NULL,c_3 = NULL,v_9 = NULL,u_9 = NULL,t_9 = NULL;
        t = SSLgetAnnotations(f_10);
        w_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, h_10, i_10, d_10);
        t_9 = t;
        t = SSLsetAnnotations(t_9, w_2);
        c_3 = t;
        t = save_MarkVar_0_0(t);
        s_0 = t;
        t = c_3;
        if(match_cons(t, sym_CallT_3))
          {
            k_2 = ATgetArgument(t, 0);
            o_2 = ATgetArgument(t, 1);
            r_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_3);
        r_1 = t;
        t = r_2;
        t = map_1_0(a_3, t);
        s_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, k_2, o_2, s_2);
        u_9 = t;
        t = SSLsetAnnotations(u_9, r_1);
        t_2 = t;
        if(match_cons(t, sym_CallT_3))
          {
            w_0 = ATgetArgument(t, 0);
            i_1 = ATgetArgument(t, 1);
            n_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_2);
        t_0 = t;
        t = i_1;
        t = mark_buv_0_0(t);
        o_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, w_0, o_1, n_1);
        v_9 = t;
        t = SSLsetAnnotations(v_9, t_0);
        p_1 = t;
        t = s_0;
        t = isect_MarkVar_0_0(t);
        t = p_1;
      }
    }
  else
    {
      ATerm f_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL,t_4 = NULL,x_9 = NULL,w_9 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          h_10 = ATgetArgument(t, 0);
          i_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_10);
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, h_10, i_10);
      w_9 = t;
      t = SSLsetAnnotations(w_9, o_4);
      t_4 = t;
      t = save_MarkVar_0_0(t);
      f_4 = t;
      t = t_4;
      if(match_cons(t, sym_Call_2))
        {
          j_4 = ATgetArgument(t, 0);
          k_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_4);
      i_4 = t;
      t = k_4;
      t = mark_buv_0_0(t);
      l_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, j_4, l_4);
      x_9 = t;
      t = SSLsetAnnotations(x_9, i_4);
      n_4 = t;
      t = f_4;
      t = isect_MarkVar_0_0(t);
      t = n_4;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_m_14;
  return(t);
}
static ATerm h_7 (ATerm p_23, ATerm q_23, ATerm r_23, ATerm t)
{
  ATerm r_10 = NULL;
  static ATerm d_3 (ATerm t)
  {
    t = q_23;
    t = map_1_0(IntroduceBound_0_0, t);
    t = r_23;
    t = mark_build_vars_0_0(t);
    if(((r_10 != NULL) && (r_10 != t)))
      _fail(t);
    else
      r_10 = t;
    return(t);
  }
  t = scope_2_0(b_3, d_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, p_23, q_23, not_null(r_10));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_m_14;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm d_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_11);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      {
        ATerm r_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_14);
          }
        else
          {
            t = r_14;
            {
              ATerm i_11 = NULL,k_11 = NULL,l_11 = NULL,p_11 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_11 = ATgetArgument(t, 0);
                  k_11 = ATgetArgument(t, 1);
                  l_11 = ATgetArgument(t, 2);
                  p_11 = ATgetArgument(t, 3);
                  t = l_11;
                  t = map_1_0(y_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_11 = ATgetArgument(t, 0);
                      k_11 = ATgetArgument(t, 1);
                      l_11 = ATgetArgument(t, 2);
                      p_11 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_11;
                  t = map_1_0(z_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm c_12 = NULL;
  ATerm u_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_12 = ATgetArgument(t, 0);
          {
            ATerm x_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_14);
      t = c_12;
    }
  else
    {
      t = u_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_12;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm r_12 = NULL;
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_12 = ATgetArgument(t, 0);
          {
            ATerm c_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_14);
      t = r_12;
    }
  else
    {
      t = y_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_12;
    }
  return(t);
}
static ATerm i_7 (ATerm j_23, ATerm n_23, ATerm l_23, ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
  static ATerm j_3 (ATerm t)
  {
    t = j_23;
    t = free_vars_3_0(o_3, t_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = j_23;
    t = mark_match_vars_0_0(t);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    t = l_23;
    t = mark_buv_0_0(t);
    if(((b_11 != NULL) && (b_11 != t)))
      _fail(t);
    else
      b_11 = t;
    t = n_23;
    t = mark_build_vars_0_0(t);
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    return(t);
  }
  t = scope_2_0(e_3, j_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_11), not_null(c_11), not_null(b_11)));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_m_14;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm d_13 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_13);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm l_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_15);
    }
  else
    {
      t = l_15;
      {
        ATerm a_16 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_16);
          }
        else
          {
            t = a_16;
            {
              ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_13 = ATgetArgument(t, 0);
                  k_13 = ATgetArgument(t, 1);
                  l_13 = ATgetArgument(t, 2);
                  m_13 = ATgetArgument(t, 3);
                  t = l_13;
                  t = map_1_0(v_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_13 = ATgetArgument(t, 0);
                      k_13 = ATgetArgument(t, 1);
                      l_13 = ATgetArgument(t, 2);
                      m_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_13;
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
  ATerm z_13 = NULL;
  ATerm c_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_13 = ATgetArgument(t, 0);
          {
            ATerm g_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_16);
      t = z_13;
    }
  else
    {
      t = c_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_13;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm l_14 = NULL;
  ATerm i_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_14 = ATgetArgument(t, 0);
          {
            ATerm n_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_16);
      t = l_14;
    }
  else
    {
      t = i_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_14;
    }
  return(t);
}
static ATerm j_7 (ATerm d_23, ATerm h_23, ATerm f_23, ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,c_13 = NULL;
  static ATerm p_4 (ATerm t)
  {
    t = d_23;
    t = free_vars_3_0(q_4, u_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = d_23;
    t = mark_match_vars_0_0(t);
    if(((x_12 != NULL) && (x_12 != t)))
      _fail(t);
    else
      x_12 = t;
    t = f_23;
    t = mark_buv_0_0(t);
    if(((y_12 != NULL) && (y_12 != t)))
      _fail(t);
    else
      y_12 = t;
    t = h_23;
    t = mark_build_vars_0_0(t);
    if(((c_13 != NULL) && (c_13 != t)))
      _fail(t);
    else
      c_13 = t;
    return(t);
  }
  t = scope_2_0(e_4, p_4, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_12), not_null(c_13), not_null(y_12)));
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm q_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_16);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      {
        ATerm r_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_16);
          }
        else
          {
            t = r_16;
            {
              ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_16 = ATgetArgument(t, 0);
                  t_16 = ATgetArgument(t, 1);
                  u_16 = ATgetArgument(t, 2);
                  v_16 = ATgetArgument(t, 3);
                  t = u_16;
                  t = map_1_0(z_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_16 = ATgetArgument(t, 0);
                      t_16 = ATgetArgument(t, 1);
                      u_16 = ATgetArgument(t, 2);
                      v_16 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_16;
                  t = map_1_0(a_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm i_17 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_17 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_16);
      t = i_17;
    }
  else
    {
      t = x_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_17;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm x_17 = NULL;
  ATerm a_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_17 = ATgetArgument(t, 0);
          {
            ATerm e_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_17);
      t = x_17;
    }
  else
    {
      t = a_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_17;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_m_14;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm o_19 = NULL;
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_19 = ATgetArgument(t, 0);
          {
            ATerm h_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_17);
      t = o_19;
    }
  else
    {
      t = f_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_19;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm s_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_19);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_17);
    }
  else
    {
      t = j_17;
      {
        ATerm l_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_17);
          }
        else
          {
            t = l_17;
            {
              ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_19 = ATgetArgument(t, 0);
                  v_19 = ATgetArgument(t, 1);
                  w_19 = ATgetArgument(t, 2);
                  x_19 = ATgetArgument(t, 3);
                  t = w_19;
                  t = map_1_0(o_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_19 = ATgetArgument(t, 0);
                      v_19 = ATgetArgument(t, 1);
                      w_19 = ATgetArgument(t, 2);
                      x_19 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_19;
                  t = map_1_0(s_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm r_20 = NULL;
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_20 = ATgetArgument(t, 0);
          {
            ATerm s_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_17);
      t = r_20;
    }
  else
    {
      t = q_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_20;
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_21 = NULL;
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_21 = ATgetArgument(t, 0);
          {
            ATerm v_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_17);
      t = l_21;
    }
  else
    {
      t = t_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_21;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      m_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
      o_15 = ATgetArgument(t, 2);
      {
        ATerm d_16 = NULL,f_16 = NULL,h_16 = NULL,j_16 = NULL;
        t = o_15;
        if(match_cons(t, sym_Rule_3))
          {
            i_15 = ATgetArgument(t, 0);
            j_15 = ATgetArgument(t, 1);
            k_15 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = o_15;
        t = free_vars_3_0(x_4, y_4, tboundin_3_0, t);
        d_16 = t;
        {
          static ATerm c_5 (ATerm t)
          {
            t = d_16;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = i_15;
            t = mark_match_vars_0_0(t);
            if(((f_16 != NULL) && (f_16 != t)))
              _fail(t);
            else
              f_16 = t;
            t = k_15;
            t = mark_buv_0_0(t);
            if(((h_16 != NULL) && (h_16 != t)))
              _fail(t);
            else
              h_16 = t;
            t = j_15;
            t = mark_build_vars_0_0(t);
            if(((j_16 != NULL) && (j_16 != t)))
              _fail(t);
            else
              j_16 = t;
            return(t);
          }
          t = scope_2_0(b_5, c_5, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, m_15, n_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_16), not_null(j_16), not_null(h_16)));
      }
    }
  else
    {
      ATerm k_18 = NULL,n_18 = NULL,p_18 = NULL,v_18 = NULL,d_19 = NULL,e_19 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          m_15 = ATgetArgument(t, 0);
          n_15 = ATgetArgument(t, 1);
          o_15 = ATgetArgument(t, 2);
          p_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = p_15;
      if(match_cons(t, sym_Rule_3))
        {
          q_15 = ATgetArgument(t, 0);
          u_15 = ATgetArgument(t, 1);
          v_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_15;
      t = map_1_0(d_5, t);
      k_18 = t;
      t = p_15;
      t = free_vars_3_0(f_5, m_5, tboundin_3_0, t);
      e_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_19, k_18);
      t = diff_0_0(t);
      n_18 = t;
      {
        static ATerm c_6 (ATerm t)
        {
          t = k_18;
          t = map_1_0(IntroduceBound_0_0, t);
          t = n_18;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = q_15;
          t = mark_match_vars_0_0(t);
          if(((p_18 != NULL) && (p_18 != t)))
            _fail(t);
          else
            p_18 = t;
          t = v_15;
          t = mark_buv_0_0(t);
          if(((v_18 != NULL) && (v_18 != t)))
            _fail(t);
          else
            v_18 = t;
          t = u_15;
          t = mark_build_vars_0_0(t);
          if(((d_19 != NULL) && (d_19 != t)))
            _fail(t);
          else
            d_19 = t;
          return(t);
        }
        t = scope_2_0(a_6, c_6, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, m_15, n_15, o_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_18), not_null(d_19), not_null(v_18)));
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm u_21 = NULL,n_24 = NULL,o_24 = NULL;
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_21);
  n_24 = t;
  t = term_z_17;
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, u_21), term_z_17);
  t = z_7(j_6, n_24, o_24, t);
  t = u_21;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm f_25 = NULL;
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_25 = ATgetArgument(t, 0);
          {
            ATerm c_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_18);
      t = f_25;
    }
  else
    {
      t = a_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_25;
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_m_14;
  return(t);
}
static ATerm k_7 (ATerm b_22, ATerm c_22, ATerm d_22, ATerm f_22, ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  t = d_22;
  t = map_1_0(k_6, t);
  t_24 = t;
  {
    static ATerm o_6 (ATerm t)
    {
      t = t_24;
      t = map_1_0(IntroduceBound_0_0, t);
      t = f_22;
      t = mark_buv_0_0(t);
      if(((u_24 != NULL) && (u_24 != t)))
        _fail(t);
      else
        u_24 = t;
      return(t);
    }
    t = scope_2_0(m_6, o_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, b_22, c_22, d_22, not_null(u_24));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,c_27 = NULL;
  u_26 = t;
  if(match_cons(t, sym__2))
    {
      v_26 = ATgetArgument(t, 0);
      y_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_26;
  if(match_cons(t, sym_Undefined_0))
    {
      t = v_26;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_d_18;
        }
      else
        {
          t = term_d_18;
        }
    }
  else
    {
      ATerm e_18 = t;
      int f_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm g_18 = ATgetArgument(t, 0);
              c_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(f_18);
          t = v_26;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_d_18;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  w_26 = ATgetArgument(t, 0);
                  x_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm h_18 = t;
                int l_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, x_26, c_27);
                    {
                      ATerm m_18 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm i_5 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              i_5 = ATgetArgument(t, 0);
                              if((i_5 != ATgetArgument(t, 1)))
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
                          t = m_18;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, w_26, term_o_18);
                    LocalPopChoice(l_18);
                  }
                else
                  {
                    t = h_18;
                    t = c_27;
                    if((x_26 != t))
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
          t = e_18;
          t = v_26;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_d_18;
        }
    }
  return(t);
}
static ATerm l_7 (ATerm m_20, ATerm n_20, ATerm l_20, ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  t = term_m_14;
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_14, m_20);
  t = q_8(m_27, m_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_27 = ATgetFirst((ATermList) t);
      {
        ATerm q_18 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_20, k_27);
  t = CompareEntries_0_0(t);
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATinsert(CheckATermList(l_20), l_27));
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,l_28 = NULL,m_28 = NULL;
  m_28 = t;
  if(match_cons(t, sym__2))
    {
      e_28 = ATgetArgument(t, 0);
      f_28 = ATgetArgument(t, 1);
      t = f_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_28 = ATgetFirst((ATermList) t);
          l_28 = (ATerm) ATgetNext((ATermList) t);
          t = g_28;
          {
            ATerm r_18 = t;
            int u_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm w_18 = ATgetArgument(t, 0);
                    ATerm y_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(u_18);
                t = e_28;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = m_28;
                  }
                else
                  {
                    ATerm z_18 = t;
                    int a_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_28;
                        t = l_7(e_28, g_28, l_28, t);
                        LocalPopChoice(a_19);
                      }
                    else
                      {
                        t = z_18;
                        t = m_28;
                      }
                  }
              }
            else
              {
                t = r_18;
                t = e_28;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = m_28;
                  }
                else
                  {
                    t = m_28;
                  }
              }
          }
        }
      else
        {
          t = e_28;
          if(match_cons(t, sym_Scopes_0))
            {
              t = m_28;
            }
          else
            {
              t = m_28;
            }
        }
    }
  else
    {
      t = m_28;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,d_28 = NULL;
  t = map_1_0(u_6, t);
  x_27 = t;
  t = term_m_14;
  d_28 = t;
  t = SSL_table_destroy(d_28);
  t = term_m_14;
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_14, x_27);
  t = m_7(y_27, x_27, t);
  t = x_27;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm n_29 = NULL,p_29 = NULL,t_29 = NULL;
  t_29 = t;
  {
    ATerm b_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm g_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_19);
        t = t_29;
      }
    else
      {
        t = b_19;
        {
          ATerm h_19 = t;
          int i_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm j_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(i_19);
              t = t_29;
            }
          else
            {
              t = h_19;
              {
                ATerm k_19 = t;
                int m_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm p_19 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(m_19);
                    t = t_29;
                  }
                else
                  {
                    t = k_19;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm r_19 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = t_29;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  n_29 = t;
  t = t_29;
  t = SRTS_one(mark_buv_0_0, t);
  p_29 = t;
  t = n_29;
  t = isect_MarkVar_0_0(t);
  t = p_29;
  return(t);
}
static ATerm m_7 (ATerm o_25, ATerm n_25, ATerm t)
{
  static ATerm v_6 (ATerm t)
  {
    ATerm y_29 = NULL,e_30 = NULL;
    if(match_cons(t, sym__2))
      {
        y_29 = ATgetArgument(t, 0);
        e_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(o_25, y_29, e_30);
    t = (ATerm) ATmakeAppl(sym__3, o_25, y_29, e_30);
    return(t);
  }
  t = n_25;
  t = map_1_0(v_6, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_30 = NULL;
  static ATerm w_6 (ATerm t)
  {
    ATerm i_30 = NULL,j_30 = NULL;
    i_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_30), i_30);
    t = q_8(not_null(g_30), i_30, t);
    j_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_30, j_30);
    return(t);
  }
  if(((g_30 != NULL) && (g_30 != t)))
    _fail(t);
  else
    g_30 = t;
  t = SSL_table_keys(g_30);
  t = map_1_0(w_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_m_14;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm z_20 (ATerm), ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm x_6 (ATerm t)
    {
      static ATerm e_32 (ATerm r_30, ATerm t)
      {
        ATerm y_30 = NULL,j_31 = NULL,t_31 = NULL,u_31 = NULL;
        t = r_30;
        if(match_cons(t, sym__2))
          {
            ATerm t_19 = ATgetArgument(t, 0);
            y_30 = t_19;
            if(match_cons(t_19, sym_Var_1))
              {
                j_31 = ATgetArgument(t_19, 0);
              }
            else
              _fail(t);
            {
              ATerm y_19 = ATgetArgument(t, 1);
              if(((ATgetType(y_19) == AT_LIST) && !(ATisEmpty(y_19))))
                {
                  ATerm z_19 = ATgetFirst((ATermList) y_19);
                  if(match_cons(z_19, sym_Defined_2))
                    {
                      t_31 = ATgetArgument(z_19, 0);
                      {
                        ATerm a_20 = ATgetArgument(z_19, 1);
                        if((ATgetSymbol((ATermAppl) a_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  u_31 = (ATerm) ATgetNext((ATermList) y_19);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_20;
        {
          static ATerm y_6 (ATerm t)
          {
            if((j_31 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(y_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, y_30, (ATerm) ATinsert(CheckATermList(u_31), (ATerm) ATmakeAppl(sym_Defined_2, t_31, term_o_18)));
        return(t);
      }
      ATerm w_31 = NULL,y_31 = NULL;
      y_31 = t;
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                w_31 = ATgetArgument(t, 0);
                {
                  ATerm d_20 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(c_20);
            t = w_31;
            if(match_cons(t, sym_Scopes_0))
              {
                t = y_31;
              }
            else
              {
                ATerm e_20 = t;
                int f_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = e_32(y_31, t);
                    LocalPopChoice(f_20);
                  }
                else
                  {
                    t = e_20;
                    t = y_31;
                  }
              }
          }
        else
          {
            t = b_20;
            {
              ATerm i_20 = t;
              int j_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_32(y_31, t);
                  LocalPopChoice(j_20);
                }
              else
                {
                  t = i_20;
                  t = y_31;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(x_6, t);
  }
  o_30 = t;
  t = term_m_14;
  q_30 = t;
  t = SSL_table_destroy(q_30);
  t = term_m_14;
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_14, o_30);
  t = m_7(p_30, o_30, t);
  t = o_30;
  return(t);
}
ATerm tboundin_3_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm t)
{
  ATerm y_36 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,g_37 = NULL;
  d_37 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_37 = ATgetArgument(t, 0);
      y_36 = ATgetArgument(t, 1);
      {
        ATerm l_6 = NULL,r_6 = NULL,s_6 = NULL,d_15 = NULL;
        t = SSLgetAnnotations(d_37);
        l_6 = t;
        t = g_37;
        t = f_113(t);
        r_6 = t;
        t = y_36;
        t = d_113(t);
        s_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, r_6, s_6);
        d_15 = t;
        t = SSLsetAnnotations(d_15, l_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          g_37 = ATgetArgument(t, 0);
          y_36 = ATgetArgument(t, 1);
          b_37 = ATgetArgument(t, 2);
          c_37 = ATgetArgument(t, 3);
          {
            ATerm s_8 = NULL,b_9 = NULL,c_9 = NULL,e_9 = NULL,g_9 = NULL,e_15 = NULL;
            t = SSLgetAnnotations(d_37);
            s_8 = t;
            t = g_37;
            t = f_113(t);
            b_9 = t;
            t = y_36;
            t = f_113(t);
            c_9 = t;
            t = b_37;
            t = f_113(t);
            e_9 = t;
            t = c_37;
            t = d_113(t);
            g_9 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, b_9, c_9, e_9, g_9);
            e_15 = t;
            t = SSLsetAnnotations(e_15, s_8);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              g_37 = ATgetArgument(t, 0);
              y_36 = ATgetArgument(t, 1);
              b_37 = ATgetArgument(t, 2);
              c_37 = ATgetArgument(t, 3);
              {
                ATerm j_10 = NULL,q_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,w_15 = NULL;
                t = SSLgetAnnotations(d_37);
                j_10 = t;
                t = g_37;
                t = f_113(t);
                q_10 = t;
                t = y_36;
                t = f_113(t);
                s_10 = t;
                t = b_37;
                t = f_113(t);
                t_10 = t;
                t = c_37;
                t = d_113(t);
                u_10 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, q_10, s_10, t_10, u_10);
                w_15 = t;
                t = SSLsetAnnotations(w_15, j_10);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  g_37 = ATgetArgument(t, 0);
                  {
                    ATerm j_11 = NULL,n_11 = NULL,x_15 = NULL;
                    t = SSLgetAnnotations(d_37);
                    j_11 = t;
                    t = g_37;
                    t = d_113(t);
                    n_11 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, n_11);
                    x_15 = t;
                    t = SSLsetAnnotations(x_15, j_11);
                  }
                }
              else
                {
                  ATerm x_11 = NULL,j_12 = NULL,y_15 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      g_37 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_37);
                  x_11 = t;
                  t = g_37;
                  t = d_113(t);
                  j_12 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, j_12);
                  y_15 = t;
                  t = SSLsetAnnotations(y_15, x_11);
                }
            }
        }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm l_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_38);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm k_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_20);
    }
  else
    {
      t = k_20;
      {
        ATerm q_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_20);
          }
        else
          {
            t = q_20;
            {
              ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  n_38 = ATgetArgument(t, 0);
                  o_38 = ATgetArgument(t, 1);
                  p_38 = ATgetArgument(t, 2);
                  q_38 = ATgetArgument(t, 3);
                  t = p_38;
                  t = map_1_0(b_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_38 = ATgetArgument(t, 0);
                      o_38 = ATgetArgument(t, 1);
                      p_38 = ATgetArgument(t, 2);
                      q_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_38;
                  t = map_1_0(c_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm a_39 = NULL;
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_39 = ATgetArgument(t, 0);
          {
            ATerm w_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_20);
      t = a_39;
    }
  else
    {
      t = u_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_39;
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm u_39 = NULL;
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_39 = ATgetArgument(t, 0);
          {
            ATerm a_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_20);
      t = u_39;
    }
  else
    {
      t = x_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_39;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm z_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_39);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm d_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_21);
          }
        else
          {
            t = d_21;
            {
              ATerm e_40 = NULL,g_40 = NULL,k_40 = NULL,o_40 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_40 = ATgetArgument(t, 0);
                  g_40 = ATgetArgument(t, 1);
                  k_40 = ATgetArgument(t, 2);
                  o_40 = ATgetArgument(t, 3);
                  t = k_40;
                  t = map_1_0(f_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_40 = ATgetArgument(t, 0);
                      g_40 = ATgetArgument(t, 1);
                      k_40 = ATgetArgument(t, 2);
                      o_40 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_40;
                  t = map_1_0(t_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm v_40 = NULL;
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_40 = ATgetArgument(t, 0);
          {
            ATerm j_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_21);
      t = v_40;
    }
  else
    {
      t = g_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_40;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm i_41 = NULL;
  ATerm k_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_41 = ATgetArgument(t, 0);
          {
            ATerm n_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_21);
      t = i_41;
    }
  else
    {
      t = k_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_41;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm j_38 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      j_38 = ATgetArgument(t, 0);
      t = j_38;
      t = free_vars_3_0(z_6, a_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          j_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_38;
      t = free_vars_3_0(d_7, e_7, tboundin_3_0, t);
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm c_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_43);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            {
              ATerm g_43 = NULL,h_43 = NULL,j_43 = NULL,k_43 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_43 = ATgetArgument(t, 0);
                  h_43 = ATgetArgument(t, 1);
                  j_43 = ATgetArgument(t, 2);
                  k_43 = ATgetArgument(t, 3);
                  t = j_43;
                  t = map_1_0(d_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_43 = ATgetArgument(t, 0);
                      h_43 = ATgetArgument(t, 1);
                      j_43 = ATgetArgument(t, 2);
                      k_43 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_43;
                  t = map_1_0(f_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm t_43 = NULL;
  ATerm t_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_43 = ATgetArgument(t, 0);
          {
            ATerm g_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_21);
      t = t_43;
    }
  else
    {
      t = t_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_43;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm i_44 = NULL;
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_44 = ATgetArgument(t, 0);
          {
            ATerm j_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_22);
      t = i_44;
    }
  else
    {
      t = h_22;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm e_42 = NULL,x_42 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      x_42 = ATgetArgument(t, 0);
      t = x_42;
      if(match_cons(t, sym_Rule_3))
        {
          e_42 = ATgetArgument(t, 0);
          {
            ATerm l_22 = ATgetArgument(t, 1);
          }
          {
            ATerm m_22 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_42;
      t = free_vars_3_0(u_7, v_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          x_42 = ATgetArgument(t, 0);
          {
            ATerm v_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_42;
    }
  return(t);
}
static ATerm q_7 (ATerm s_94 (ATerm), ATerm q_46, ATerm p_46, ATerm t)
{
  static ATerm m_45 (ATerm t)
  {
    ATerm c_45 = NULL,g_45 = NULL,i_45 = NULL;
    c_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_46;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_45 = ATgetFirst((ATermList) t);
            i_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_22 = t;
          int x_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_45;
              {
                static ATerm p_8 (ATerm t)
                {
                  t = p_46;
                  return(t);
                }
                t = r_7(s_94, p_8, g_45, i_45, t);
              }
              t = m_45(t);
              LocalPopChoice(x_22);
            }
          else
            {
              t = w_22;
              {
                ATerm v_12 = NULL,a_13 = NULL,b_17 = NULL;
                t = SSLgetAnnotations(c_45);
                v_12 = t;
                t = i_45;
                t = m_45(t);
                a_13 = t;
                t = (ATerm) ATinsert(CheckATermList(a_13), g_45);
                b_17 = t;
                t = SSLsetAnnotations(b_17, v_12);
              }
            }
        }
      }
    return(t);
  }
  t = q_46;
  t = m_45(t);
  return(t);
}
ATerm foldr_3_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm t)
{
  ATerm s_45 = NULL,u_45 = NULL,a_46 = NULL;
  s_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_45;
      t = i_97(t);
    }
  else
    {
      ATerm d_46 = NULL,f_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_45 = ATgetFirst((ATermList) t);
          a_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_45;
      t = k_97(t);
      d_46 = t;
      t = a_46;
      t = foldr_3_0(i_97, j_97, k_97, t);
      f_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_46, f_46);
      t = j_97(t);
    }
  return(t);
}
static ATerm r_7 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm u_46, ATerm t_46, ATerm t)
{
  t = w_94(t);
  {
    static ATerm u_8 (ATerm t)
    {
      ATerm i_46 = NULL;
      i_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_46, i_46);
      t = v_94(t);
      return(t);
    }
    t = fetch_1_0(u_8, t);
  }
  t = t_46;
  return(t);
}
static ATerm s_7 (ATerm n_94 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  static ATerm n_48 (ATerm t)
  {
    ATerm u_47 = NULL,g_48 = NULL,k_48 = NULL;
    u_47 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_47;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_48 = ATgetFirst((ATermList) t);
            k_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_47;
              {
                static ATerm v_8 (ATerm t)
                {
                  t = n_46;
                  return(t);
                }
                t = r_7(n_94, v_8, g_48, k_48, t);
              }
              t = n_48(t);
              LocalPopChoice(z_22);
            }
          else
            {
              t = y_22;
              {
                ATerm u_13 = NULL,x_13 = NULL,d_17 = NULL;
                t = SSLgetAnnotations(u_47);
                u_13 = t;
                t = k_48;
                t = n_48(t);
                x_13 = t;
                t = (ATerm) ATinsert(CheckATermList(x_13), g_48);
                d_17 = t;
                t = SSLsetAnnotations(d_17, u_13);
              }
            }
        }
      }
    return(t);
  }
  t = o_46;
  t = n_48(t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_91 (ATerm), ATerm t)
{
  static ATerm e_50 (ATerm t)
  {
    ATerm w_49 = NULL,x_49 = NULL,d_50 = NULL;
    d_50 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_49 = ATgetFirst((ATermList) t);
        x_49 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_14 = NULL,v_14 = NULL,j_18 = NULL;
          t = SSLgetAnnotations(d_50);
          s_14 = t;
          t = x_49;
          t = e_50(t);
          v_14 = t;
          t = (ATerm) ATinsert(CheckATermList(v_14), w_49);
          j_18 = t;
          t = SSLsetAnnotations(j_18, s_14);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_50;
        t = e_91(t);
      }
    return(t);
  }
  t = e_50(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,t_48 = NULL;
  q_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_48;
    }
  else
    {
      static ATerm x_8 (ATerm t)
      {
        t = not_null(t_48);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_48 = ATgetFirst((ATermList) t);
          if(((t_48 != NULL) && (t_48 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_48;
      t = at_end_1_0(x_8, t);
    }
  return(t);
}
static ATerm w_50 (ATerm k_50, ATerm t)
{
  ATerm l_50 = NULL;
  t = SSL_explode_term(k_50);
  if(match_cons(t, sym__2))
    {
      ATerm a_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_50;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,r_50 = NULL;
  r_50 = t;
  if(match_cons(t, sym__2))
    {
      n_50 = ATgetArgument(t, 0);
      o_50 = ATgetArgument(t, 1);
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm z_8 (ATerm t)
            {
              t = o_50;
              return(t);
            }
            t = n_50;
            t = at_end_1_0(z_8, t);
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            t = w_50(r_50, t);
          }
      }
    }
  else
    {
      t = w_50(r_50, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t)
{
  static ATerm h_51 (ATerm t)
  {
    ATerm e_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_92(t);
        LocalPopChoice(g_23);
      }
    else
      {
        t = e_23;
        {
          ATerm x_50 = NULL,y_50 = NULL,a_51 = NULL,d_51 = NULL,f_51 = NULL,g_51 = NULL,h_20 = NULL;
          t = s_92(t);
          g_51 = t;
          if(match_cons(t, sym__2))
            {
              y_50 = ATgetArgument(t, 0);
              a_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_51);
          x_50 = t;
          t = y_50;
          t = u_92(t);
          d_51 = t;
          t = a_51;
          t = h_51(t);
          f_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_51, f_51);
          h_20 = t;
          t = SSLsetAnnotations(h_20, x_50);
          t = t_92(t);
        }
      }
    return(t);
  }
  t = h_51(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_23 = ATgetArgument(t, 0);
      if(((ATgetType(i_23) != AT_LIST) || !(ATisEmpty(i_23))))
        _fail(t);
      {
        ATerm m_23 = ATgetArgument(t, 1);
        if(((ATgetType(m_23) != AT_LIST) || !(ATisEmpty(m_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,g_52 = NULL,h_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_23 = ATgetArgument(t, 0);
      if(((ATgetType(o_23) == AT_LIST) && !(ATisEmpty(o_23))))
        {
          x_51 = ATgetFirst((ATermList) o_23);
          y_51 = (ATerm) ATgetNext((ATermList) o_23);
        }
      else
        _fail(t);
      {
        ATerm t_23 = ATgetArgument(t, 1);
        if(((ATgetType(t_23) == AT_LIST) && !(ATisEmpty(t_23))))
          {
            g_52 = ATgetFirst((ATermList) t_23);
            h_52 = (ATerm) ATgetNext((ATermList) t_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_51, g_52), (ATerm) ATmakeAppl(sym__2, y_51, h_52));
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm i_52 = NULL,l_52 = NULL;
  if(match_cons(t, sym__2))
    {
      i_52 = ATgetArgument(t, 0);
      l_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_52), i_52);
  return(t);
}
static ATerm x_7 (ATerm s_600, ATerm x_600, ATerm k_58, ATerm t)
{
  ATerm m_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
  t = SSL_explode_term(x_600);
  if(match_cons(t, sym__2))
    {
      m_51 = ATgetArgument(t, 0);
      q_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_600);
  if(match_cons(t, sym__2))
    {
      if((m_51 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_51, q_51);
  t = genzip_4_0(a_9, d_9, f_9, _id, t);
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_51, k_58);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  static ATerm z_52 (ATerm t)
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_88(t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = o_88(t);
        t = z_52(t);
      }
    return(t);
  }
  t = z_52(t);
  return(t);
}
ATerm for_3_0 (ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t)
{
  t = q_88(t);
  t = while_not_2_0(r_88, s_88, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm i_53 = NULL;
  i_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_53);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm j_53 = NULL,m_53 = NULL,p_53 = NULL,r_53 = NULL,p_25 = NULL;
  r_53 = t;
  if(match_cons(t, sym__2))
    {
      m_53 = ATgetArgument(t, 0);
      p_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_53);
  j_53 = t;
  t = p_53;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_53, p_53);
  p_25 = t;
  t = SSLsetAnnotations(p_25, j_53);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL;
  c_55 = t;
  if(match_cons(t, sym__2))
    {
      d_55 = ATgetArgument(t, 0);
      l_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_55;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_55 = ATgetFirst((ATermList) t);
      n_55 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_56(d_55, l_55, c_55, t);
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_55), m_55), n_55);
          }
      }
    }
  else
    {
      t = e_56(d_55, l_55, c_55, t);
    }
  return(t);
}
static ATerm e_56 (ATerm u_53, ATerm v_53, ATerm w_53, ATerm t)
{
  ATerm a_54 = NULL,d_54 = NULL,a_26 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
  t = SSLgetAnnotations(w_53);
  a_54 = t;
  t = v_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_54 = ATgetFirst((ATermList) t);
      n_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_54;
  if(match_cons(t, sym__2))
    {
      l_54 = ATgetArgument(t, 0);
      m_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_54;
        if((l_54 != t))
          {
            _fail(t);
          }
        t = n_54;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = v_53;
        t = x_7(l_54, m_54, n_54, t);
      }
  }
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_53, d_54);
  a_26 = t;
  t = SSLsetAnnotations(a_26, a_54);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm d_56 = NULL;
  if(match_cons(t, sym__2))
    {
      d_56 = ATgetArgument(t, 0);
      if((d_56 != ATgetArgument(t, 1)))
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
  ATerm c_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(h_9, i_9, k_9, t);
      LocalPopChoice(e_24);
    }
  else
    {
      t = c_24;
      {
        ATerm v_55 = NULL,z_55 = NULL,a_56 = NULL;
        v_55 = t;
        if(match_cons(t, sym__2))
          {
            z_55 = ATgetArgument(t, 0);
            a_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_55;
        t = s_7(l_9, z_55, a_56, t);
      }
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  if(match_cons(t, sym__2))
    {
      f_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(s_9, f_15, g_15, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      h_15 = ATgetArgument(t, 0);
      if((h_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm z_15 = NULL,k_16 = NULL;
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(a_10, z_15, k_16, t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm l_16 = NULL;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      if((l_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm j_57 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_110(t);
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
              ATerm k_56 = NULL,p_56 = NULL,a_15 = NULL,b_15 = NULL;
              k_56 = t;
              t = n_110(t);
              p_56 = t;
              t = k_56;
              {
                static ATerm m_9 (ATerm t)
                {
                  ATerm t_56 = NULL;
                  t = j_57(t);
                  t_56 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_56, p_56);
                  t = diff_0_0(t);
                  return(t);
                }
                t = o_110(m_9, j_57, n_9, t);
              }
              b_15 = t;
              t = SSL_explode_term(b_15);
              if(match_cons(t, sym__2))
                {
                  ATerm p_24 = ATgetArgument(t, 0);
                  a_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_15;
              t = foldr_3_0(q_9, r_9, _id, t);
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
              {
                ATerm s_15 = NULL,t_15 = NULL;
                t_15 = t;
                t = SSL_explode_term(t_15);
                if(match_cons(t, sym__2))
                  {
                    ATerm s_24 = ATgetArgument(t, 0);
                    s_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_15;
                t = foldr_3_0(y_9, z_9, j_57, t);
              }
            }
        }
      }
    return(t);
  }
  t = j_57(t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm c_59 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_59);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm v_24 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_25);
    }
  else
    {
      t = v_24;
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            {
              ATerm l_59 = NULL,m_59 = NULL,o_59 = NULL,p_59 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  l_59 = ATgetArgument(t, 0);
                  m_59 = ATgetArgument(t, 1);
                  o_59 = ATgetArgument(t, 2);
                  p_59 = ATgetArgument(t, 3);
                  t = o_59;
                  t = map_1_0(e_10, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_59 = ATgetArgument(t, 0);
                      m_59 = ATgetArgument(t, 1);
                      o_59 = ATgetArgument(t, 2);
                      p_59 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_59;
                  t = map_1_0(g_10, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm c_60 = NULL;
  ATerm e_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_60 = ATgetArgument(t, 0);
          {
            ATerm h_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_25);
      t = c_60;
    }
  else
    {
      t = e_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_60;
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm u_60 = NULL;
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_60 = ATgetArgument(t, 0);
          {
            ATerm m_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_25);
      t = u_60;
    }
  else
    {
      t = i_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_60;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm r_57 = NULL,v_57 = NULL,x_57 = NULL,b_58 = NULL,d_58 = NULL,f_58 = NULL,g_58 = NULL,l_58 = NULL,m_58 = NULL,o_58 = NULL,p_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,a_59 = NULL,l_26 = NULL,k_26 = NULL;
  a_59 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_58 = ATgetArgument(t, 0);
      v_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_59);
  p_58 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, u_58, v_58);
  k_26 = t;
  t = SSLsetAnnotations(k_26, p_58);
  w_58 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_57 = ATgetArgument(t, 0);
      {
        ATerm r_25 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_57;
  t = free_vars_3_0(b_10, c_10, tboundin_3_0, t);
  r_57 = t;
  t = undefine_unbound_MarkVar_0_1(r_57, t);
  v_57 = t;
  t = w_58;
  if(match_cons(t, sym_Let_2))
    {
      d_58 = ATgetArgument(t, 0);
      f_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_58);
  b_58 = t;
  t = d_58;
  {
    static ATerm k_10 (ATerm t)
    {
      ATerm x_60 = NULL,y_60 = NULL,d_61 = NULL;
      x_60 = t;
      t = term_m_14;
      d_61 = t;
      t = SSL_table_destroy(d_61);
      t = term_m_14;
      y_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_m_14, v_57);
      t = m_7(y_60, v_57, t);
      t = x_60;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(k_10, t);
  }
  g_58 = t;
  t = term_m_14;
  o_58 = t;
  t = SSL_table_destroy(o_58);
  t = term_m_14;
  m_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_14, v_57);
  t = m_7(m_58, v_57, t);
  t = f_58;
  t = mark_buv_0_0(t);
  l_58 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, g_58, l_58);
  l_26 = t;
  t = SSLsetAnnotations(l_26, b_58);
  return(t);
}
static ATerm z_7 (ATerm i_81 (ATerm), ATerm d_24, ATerm b_24, ATerm t)
{
  ATerm f_61 = NULL,j_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  n_61 = t;
  t = i_81(t);
  f_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_61, d_24, b_24);
  t = r_8(f_61, d_24, b_24, t);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_61 = NULL;
        t = term_v_25;
        q_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_61, term_v_25);
        t = q_8(f_61, q_61, t);
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_61 = ATgetFirst((ATermList) t);
      m_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_25;
  o_61 = t;
  t = (ATerm) ATinsert(CheckATermList(m_61), (ATerm) ATinsert(CheckATermList(j_61), d_24));
  p_61 = t;
  t = SSL_table_put(f_61, o_61, p_61);
  t = n_61;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL;
  r_61 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_61);
  s_61 = t;
  t = term_y_25;
  t_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_61), term_y_25);
  t = z_7(l_10, s_61, t_61, t);
  t = r_61;
  return(t);
}
static ATerm a_8 (ATerm q_24, ATerm r_24, ATerm t)
{
  ATerm w_61 = NULL,y_61 = NULL;
  y_61 = t;
  {
    ATerm z_25 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_24, r_24);
        t = q_8(q_24, r_24, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_26 = ATgetFirst((ATermList) t);
            w_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_26);
        t = SSL_table_put(q_24, r_24, w_61);
        t = (ATerm) ATmakeAppl(sym__3, q_24, r_24, w_61);
      }
    else
      {
        t = z_25;
        t = SSL_table_remove(q_24, r_24);
        t = (ATerm) ATmakeAppl(sym__2, q_24, r_24);
      }
  }
  t = y_61;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL;
  i_62 = t;
  t = f_81(t);
  h_62 = t;
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_62 = NULL;
        t = term_v_25;
        k_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_62, term_v_25);
        t = q_8(h_62, k_62, t);
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_62 = ATgetFirst((ATermList) t);
      z_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_25;
  j_62 = t;
  t = SSL_table_put(h_62, j_62, z_61);
  t = a_62;
  {
    static ATerm m_10 (ATerm t)
    {
      ATerm l_62 = NULL;
      l_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_62, l_62);
      t = a_8(h_62, l_62, t);
      return(t);
    }
    t = map_1_0(m_10, t);
  }
  t = i_62;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm t)
{
  ATerm h_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_99(t);
      t = m_99(t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = h_26;
      t = m_99(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm p_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,a_63 = NULL;
  r_62 = t;
  t = e_81(t);
  p_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_62, term_v_25);
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_63 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_26 = ATgetArgument(t, 0);
            ATerm q_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_25;
        j_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_62, term_v_25);
        t = q_8(p_62, j_63, t);
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        t = (ATerm) ATempty;
      }
  }
  s_62 = t;
  t = term_v_25;
  t_62 = t;
  t = (ATerm) ATinsert(CheckATermList(s_62), (ATerm) ATempty);
  a_63 = t;
  t = SSL_table_put(p_62, t_62, a_63);
  t = r_62;
  return(t);
}
ATerm scope_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t)
{
  static ATerm n_10 (ATerm t)
  {
    t = end_scope_1_0(g_81, t);
    return(t);
  }
  t = begin_scope_1_0(g_81, t);
  t = restore_always_2_0(h_81, n_10, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_m_14;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_26 = NULL;
  o_63 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_63 = ATgetArgument(t, 0);
      m_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_63);
  k_63 = t;
  t = m_63;
  {
    static ATerm p_10 (ATerm t)
    {
      ATerm r_63 = NULL;
      r_63 = t;
      t = l_63;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = r_63;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(o_10, p_10, t);
  }
  n_63 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, l_63, n_63);
  p_26 = t;
  t = SSLsetAnnotations(p_26, k_63);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL,c_28 = NULL;
      v_63 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_63);
      t_63 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_63);
      c_28 = t;
      t = SSLsetAnnotations(c_28, t_63);
      LocalPopChoice(s_26);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = r_26;
      {
        ATerm t_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_63 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,j_28 = NULL;
            e_64 = t;
            if(match_cons(t, sym_App_2))
              {
                c_64 = ATgetArgument(t, 0);
                d_64 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_64);
            z_63 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, c_64, d_64);
            j_28 = t;
            t = SSLsetAnnotations(j_28, z_63);
            LocalPopChoice(z_26);
            {
              ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,k_28 = NULL;
              k_64 = t;
              if(match_cons(t, sym_App_2))
                {
                  g_64 = ATgetArgument(t, 0);
                  h_64 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_64);
              f_64 = t;
              t = g_64;
              t = mark_buv_0_0(t);
              i_64 = t;
              t = h_64;
              t = mark_build_vars_0_0(t);
              j_64 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, i_64, j_64);
              k_28 = t;
              t = SSLsetAnnotations(k_28, f_64);
            }
          }
        else
          {
            t = t_26;
            {
              ATerm a_27 = t;
              int b_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,p_28 = NULL;
                  n_64 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      m_64 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_64);
                  l_64 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, m_64);
                  p_28 = t;
                  t = SSLsetAnnotations(p_28, l_64);
                  LocalPopChoice(b_27);
                  {
                    ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,q_28 = NULL;
                    r_64 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        p_64 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(r_64);
                    o_64 = t;
                    t = p_64;
                    t = mark_buv_0_0(t);
                    q_64 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, q_64);
                    q_28 = t;
                    t = SSLsetAnnotations(q_28, o_64);
                  }
                }
              else
                {
                  t = a_27;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_8 (ATerm y_24, ATerm z_24, ATerm a_25, ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL;
  t_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_24, z_24);
  t = q_8(y_24, z_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_27 = ATgetFirst((ATermList) t);
      s_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_64), a_25);
  u_64 = t;
  t = SSL_table_put(y_24, z_24, u_64);
  t = t_64;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL;
  v_64 = t;
  t = term_m_14;
  w_64 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_64);
  x_64 = t;
  t = term_f_27;
  y_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_14, (ATerm)ATmakeAppl(sym_Var_1, v_64), term_f_27);
  t = b_8(w_64, x_64, y_64, t);
  t = v_64;
  return(t);
}
static ATerm e_8 (ATerm w_24, ATerm x_24, ATerm t)
{
  ATerm z_64 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_24, x_24);
  t = q_8(w_24, x_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_64 = ATgetFirst((ATermList) t);
      {
        ATerm h_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_64;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL;
  e_66 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_17 = NULL,o_17 = NULL,p_17 = NULL,i_18 = NULL;
        t = term_m_14;
        i_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_14, e_66);
        t = e_8(i_18, e_66, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_27) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            m_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, f_66);
        o_17 = t;
        t = (ATerm) ATinsert(ATempty, m_17);
        p_17 = t;
        t = SSLsetAnnotations(o_17, p_17);
        LocalPopChoice(o_27);
      }
    else
      {
        t = i_27;
        {
          ATerm q_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_18 = NULL,t_18 = NULL,x_18 = NULL,c_19 = NULL;
              t = term_m_14;
              c_19 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_m_14, e_66);
              t = e_8(c_19, e_66, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm s_27 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_27) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  s_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, f_66);
              t_18 = t;
              t = (ATerm) ATinsert(ATempty, s_18);
              x_18 = t;
              t = SSLsetAnnotations(t_18, x_18);
              LocalPopChoice(r_27);
            }
          else
            {
              t = q_27;
              {
                ATerm l_19 = NULL,n_19 = NULL,q_19 = NULL,g_20 = NULL;
                t = term_m_14;
                g_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_14, e_66);
                t = e_8(g_20, e_66, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm t_27 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) t_27) != ATmakeSymbol("c_0", 0, ATtrue)))
                      _fail(t);
                    l_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, f_66);
                n_19 = t;
                t = (ATerm) ATinsert(ATempty, l_19);
                q_19 = t;
                t = SSLsetAnnotations(n_19, q_19);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,g_29 = NULL;
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
    }
  n_66 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_66);
  k_66 = t;
  t = l_66;
  t = DeclareBound_0_0(t);
  m_66 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_66);
  g_29 = t;
  t = SSLsetAnnotations(g_29, k_66);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm z_27 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL,i_29 = NULL;
      s_66 = t;
      if(match_cons(t, sym_Var_1))
        {
          r_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_66);
      q_66 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, r_66);
      i_29 = t;
      t = SSLsetAnnotations(i_29, q_66);
      LocalPopChoice(b_28);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = z_27;
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,j_29 = NULL;
            w_66 = t;
            if(match_cons(t, sym_App_2))
              {
                u_66 = ATgetArgument(t, 0);
                v_66 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_66);
            t_66 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, u_66, v_66);
            j_29 = t;
            t = SSLsetAnnotations(j_29, t_66);
            LocalPopChoice(i_28);
            {
              ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,l_29 = NULL;
              c_67 = t;
              if(match_cons(t, sym_App_2))
                {
                  y_66 = ATgetArgument(t, 0);
                  z_66 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_67);
              x_66 = t;
              t = y_66;
              t = mark_buv_0_0(t);
              a_67 = t;
              t = z_66;
              t = mark_build_vars_0_0(t);
              b_67 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, a_67, b_67);
              l_29 = t;
              t = SSLsetAnnotations(l_29, x_66);
            }
          }
        else
          {
            t = h_28;
            {
              ATerm n_28 = t;
              int o_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,m_29 = NULL;
                  f_67 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      e_67 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_67);
                  d_67 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, e_67);
                  m_29 = t;
                  t = SSLsetAnnotations(m_29, d_67);
                  LocalPopChoice(o_28);
                  {
                    ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,o_29 = NULL;
                    j_67 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        h_67 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(j_67);
                    g_67 = t;
                    t = h_67;
                    t = mark_buv_0_0(t);
                    i_67 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, i_67);
                    o_29 = t;
                    t = SSLsetAnnotations(o_29, g_67);
                  }
                }
              else
                {
                  t = n_28;
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
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_68 = NULL,f_68 = NULL;
      e_68 = t;
      if(match_cons(t, sym_Match_1))
        {
          f_68 = ATgetArgument(t, 0);
          {
            ATerm o_20 = NULL,s_20 = NULL,z_29 = NULL;
            t = SSLgetAnnotations(e_68);
            o_20 = t;
            t = f_68;
            t = mark_match_vars_0_0(t);
            s_20 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, s_20);
            z_29 = t;
            t = SSLsetAnnotations(z_29, o_20);
          }
        }
      else
        {
          ATerm e_21 = NULL,i_21 = NULL,a_30 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              f_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_68);
          e_21 = t;
          t = f_68;
          t = mark_build_vars_0_0(t);
          i_21 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, i_21);
          a_30 = t;
          t = SSLsetAnnotations(a_30, e_21);
        }
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            {
              ATerm v_28 = t;
              int w_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(w_28);
                }
              else
                {
                  t = v_28;
                  {
                    ATerm x_28 = t;
                    int y_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(y_28);
                      }
                    else
                      {
                        t = x_28;
                        {
                          ATerm z_28 = t;
                          int a_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL;
                              g_68 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  h_68 = ATgetArgument(t, 0);
                                  i_68 = ATgetArgument(t, 1);
                                  j_68 = ATgetArgument(t, 2);
                                  k_68 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = g_68;
                              t = k_7(h_68, i_68, j_68, k_68, t);
                              LocalPopChoice(a_29);
                            }
                          else
                            {
                              t = z_28;
                              {
                                ATerm b_29 = t;
                                int c_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(c_29);
                                  }
                                else
                                  {
                                    t = b_29;
                                    {
                                      ATerm d_29 = t;
                                      int e_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
                                          s_68 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              t_68 = ATgetArgument(t, 0);
                                              t = t_68;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  p_68 = ATgetArgument(t, 0);
                                                  q_68 = ATgetArgument(t, 1);
                                                  r_68 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = s_68;
                                              t = j_7(p_68, q_68, r_68, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  t_68 = ATgetArgument(t, 0);
                                                  t = t_68;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      p_68 = ATgetArgument(t, 0);
                                                      q_68 = ATgetArgument(t, 1);
                                                      r_68 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_68;
                                                  t = i_7(p_68, q_68, r_68, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      t_68 = ATgetArgument(t, 0);
                                                      u_68 = ATgetArgument(t, 1);
                                                      v_68 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_68;
                                                  t = h_7(t_68, u_68, v_68, t);
                                                }
                                            }
                                          LocalPopChoice(e_29);
                                        }
                                      else
                                        {
                                          t = d_29;
                                          {
                                            ATerm f_29 = t;
                                            int h_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(h_29);
                                              }
                                            else
                                              {
                                                t = f_29;
                                                {
                                                  ATerm k_29 = t;
                                                  int q_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(q_29);
                                                    }
                                                  else
                                                    {
                                                      t = k_29;
                                                      {
                                                        ATerm r_29 = t;
                                                        int s_29 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm f_69 = NULL;
                                                            f_69 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm u_29 = ATgetArgument(t, 0);
                                                                ATerm v_29 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = f_69;
                                                            t = g_7(t);
                                                            LocalPopChoice(s_29);
                                                          }
                                                        else
                                                          {
                                                            t = r_29;
                                                            {
                                                              ATerm w_29 = t;
                                                              int x_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(x_29);
                                                                }
                                                              else
                                                                {
                                                                  t = w_29;
                                                                  {
                                                                    ATerm b_30 = t;
                                                                    int c_30 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(c_30);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_30;
                                                                        {
                                                                          ATerm k_30 = t;
                                                                          int l_30 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(l_30);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = k_30;
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
static ATerm v_10 (ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL;
  s_69 = t;
  t = term_d_14;
  t_69 = t;
  t = (ATerm) ATinsert(ATempty, term_m_30);
  u_69 = t;
  t = SSL_printnl(t_69, u_69);
  t = s_69;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,d_30 = NULL;
  y_69 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_69);
  v_69 = t;
  t = w_69;
  t = map_1_0(mark_buv_0_0, t);
  x_69 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_69);
  d_30 = t;
  t = SSLsetAnnotations(d_30, v_69);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL;
  z_69 = t;
  t = term_d_14;
  a_70 = t;
  t = (ATerm) ATinsert(ATempty, term_v_30);
  b_70 = t;
  t = SSL_printnl(a_70, b_70);
  t = z_69;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,h_30 = NULL,f_30 = NULL;
  t = if_verbose4_1_0(v_10, t);
  r_69 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_69);
  k_69 = t;
  t = l_69;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_69 = ATgetFirst((ATermList) t);
      o_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_69);
  m_69 = t;
  t = o_69;
  t = Cons_2_0(w_10, x_10, t);
  p_69 = t;
  t = (ATerm) ATinsert(CheckATermList(p_69), n_69);
  f_30 = t;
  t = SSLsetAnnotations(f_30, m_69);
  q_69 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_69);
  h_30 = t;
  t = SSLsetAnnotations(h_30, k_69);
  t = if_verbose4_1_0(y_10, t);
  return(t);
}
static ATerm h_8 (ATerm q_32, ATerm r_32, ATerm t)
{
  ATerm c_70 = NULL;
  t = SSL_fputc(q_32, r_32);
  c_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_70);
  return(t);
}
static ATerm i_8 (ATerm b_38, ATerm c_38, ATerm t)
{
  ATerm d_70 = NULL;
  t = SSL_write_term_to_stream_text(b_38, c_38);
  d_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_70);
  return(t);
}
static ATerm k_8 (ATerm l_89 (ATerm), ATerm y_313, ATerm f_38, ATerm t)
{
  ATerm e_70 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_313, term_w_30);
  t = n_8(t);
  e_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_70, f_38);
  t = l_89(t);
  t = fclose_0_0(t);
  t = f_38;
  return(t);
}
static ATerm j_8 (ATerm x_37, ATerm y_37, ATerm t)
{
  ATerm f_70 = NULL;
  t = SSL_write_term_to_stream_baf(x_37, y_37);
  f_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_70);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm a_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_30 = ATgetArgument(t, 0);
      if(match_cons(x_30, sym_Stream_1))
        {
          a_22 = ATgetArgument(x_30, 0);
        }
      else
        _fail(t);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(a_22, e_22, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_30 = ATgetArgument(t, 0);
      if(match_cons(z_30, sym_Stream_1))
        {
          t_22 = ATgetArgument(z_30, 0);
        }
      else
        _fail(t);
      u_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(t_22, u_22, t);
  q_22 = t;
  t = term_c_31;
  r_22 = t;
  t = q_22;
  if(match_cons(t, sym_Stream_1))
    {
      s_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_31, q_22);
  t = h_8(r_22, s_22, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,t_71 = NULL,u_71 = NULL,s_30 = NULL,n_30 = NULL;
  k_70 = t;
  if(match_cons(t, sym__2))
    {
      r_70 = ATgetArgument(t, 0);
      s_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_70);
  q_70 = t;
  t = r_70;
  {
    ATerm d_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_10 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((j_70 != NULL) && (j_70 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_70 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_10, t);
        LocalPopChoice(g_31);
      }
    else
      {
        t = d_31;
        t = term_h_31;
        j_70 = t;
      }
  }
  t_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_70, s_70);
  n_30 = t;
  t = SSLsetAnnotations(n_30, q_70);
  t = k_70;
  if(match_cons(t, sym__2))
    {
      m_70 = ATgetArgument(t, 0);
      n_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_70);
  l_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_70, (ATerm) ATmakeAppl(sym__2, not_null(j_70), n_70));
  s_30 = t;
  t = SSLsetAnnotations(s_30, l_70);
  p_70 = t;
  if(match_cons(t, sym__2))
    {
      t_71 = ATgetArgument(t, 0);
      u_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,t_30 = NULL;
        t = SSLgetAnnotations(p_70);
        s_21 = t;
        t = t_71;
        t = fetch_1_0(e_11, t);
        w_21 = t;
        t = u_71;
        if(match_cons(t, sym__2))
          {
            y_21 = ATgetArgument(t, 0);
            z_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_8(f_11, y_21, z_21, t);
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
        t_30 = t;
        t = SSLsetAnnotations(t_30, s_21);
        LocalPopChoice(o_31);
      }
    else
      {
        t = m_31;
        {
          ATerm k_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,u_30 = NULL;
          t = SSLgetAnnotations(p_70);
          k_22 = t;
          t = u_71;
          if(match_cons(t, sym__2))
            {
              o_22 = ATgetArgument(t, 0);
              p_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_8(g_11, o_22, p_22, t);
          n_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_71, n_22);
          u_30 = t;
          t = SSLsetAnnotations(u_30, k_22);
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
ATerm apply_strategy_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL;
  b_72 = t;
  t = dtime_0_0(t);
  t = b_72;
  t = z_103(t);
  a_72 = t;
  t = dtime_0_0(t);
  x_71 = t;
  t = a_72;
  if(match_cons(t, sym__2))
    {
      y_71 = ATgetArgument(t, 0);
      z_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_71), (ATerm) ATmakeAppl(sym_Runtime_1, x_71)), z_71);
  return(t);
}
static ATerm p_72 (ATerm j_72, ATerm t)
{
  t = SSL_fclose(j_72);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL;
  n_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_72 = ATgetArgument(t, 0);
      {
        ATerm q_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_72);
            LocalPopChoice(s_31);
          }
        else
          {
            t = q_31;
            t = p_72(n_72, t);
          }
      }
    }
  else
    {
      t = p_72(n_72, t);
    }
  return(t);
}
static ATerm l_8 (ATerm d_38, ATerm t)
{
  t = SSL_read_term_from_stream(d_38);
  return(t);
}
static ATerm m_8 (ATerm s_32, ATerm t_32, ATerm t)
{
  ATerm q_72 = NULL;
  t = SSL_fopen(s_32, t_32);
  q_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_72);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_72 = NULL;
  t = SSL_stdin_stream();
  r_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_72);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_72 = NULL;
  t = SSL_stdout_stream();
  s_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_72);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_72 = NULL;
  t = SSL_stderr_stream();
  t_72 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_72);
  return(t);
}
static ATerm a_74 (ATerm z_72, ATerm t)
{
  ATerm a_73 = NULL;
  t = SSL_explode_term(z_72);
  if(match_cons(t, sym__2))
    {
      ATerm v_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_31 = ATgetArgument(t, 1);
        if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
          {
            a_73 = ATgetFirst((ATermList) x_31);
            {
              ATerm z_31 = (ATerm) ATgetNext((ATermList) x_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_73;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_73;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_73;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_73;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_74 (ATerm d_73, ATerm e_73, ATerm f_73, ATerm t)
{
  ATerm g_73 = NULL,h_73 = NULL,i_73 = NULL,l_73 = NULL,a_31 = NULL;
  t = SSLgetAnnotations(f_73);
  i_73 = t;
  t = d_73;
  if(match_cons(t, sym_Path_1))
    {
      l_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_73, e_73);
  a_31 = t;
  t = SSLsetAnnotations(a_31, i_73);
  if(match_cons(t, sym__2))
    {
      g_73 = ATgetArgument(t, 0);
      h_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(g_73, h_73, t);
  return(t);
}
static ATerm c_74 (ATerm n_73, ATerm o_73, ATerm p_73, ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,v_73 = NULL,b_31 = NULL;
  t = SSLgetAnnotations(p_73);
  s_73 = t;
  t = SSL_is_string(n_73);
  v_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_73, o_73);
  b_31 = t;
  t = SSLsetAnnotations(b_31, s_73);
  if(match_cons(t, sym__2))
    {
      q_73 = ATgetArgument(t, 0);
      r_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_8(q_73, r_73, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL;
  x_73 = t;
  if(match_cons(t, sym__2))
    {
      y_73 = ATgetArgument(t, 0);
      z_73 = ATgetArgument(t, 1);
      {
        ATerm a_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_74(x_73, t);
            LocalPopChoice(c_32);
          }
        else
          {
            t = a_32;
            {
              ATerm d_32 = t;
              int g_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_74(y_73, z_73, x_73, t);
                  LocalPopChoice(g_32);
                }
              else
                {
                  t = d_32;
                  t = c_74(y_73, z_73, x_73, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_74(x_73, t);
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_74 = NULL;
      g_74 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_74, term_l_32);
      t = n_8(t);
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      t = debug_1_0(h_11, t);
      _fail(t);
    }
  e_74 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_8(f_74, t);
  d_74 = t;
  t = e_74;
  t = fclose_0_0(t);
  t = d_74;
  return(t);
}
ATerm fetch_1_0 (ATerm y_90 (ATerm), ATerm t)
{
  static ATerm e_75 (ATerm t)
  {
    ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL;
    b_75 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_75 = ATgetFirst((ATermList) t);
        d_75 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_32 = t;
      int n_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_23 = NULL,s_23 = NULL,e_31 = NULL;
          t = SSLgetAnnotations(b_75);
          k_23 = t;
          t = c_75;
          t = y_90(t);
          s_23 = t;
          t = (ATerm) ATinsert(CheckATermList(d_75), s_23);
          e_31 = t;
          t = SSLsetAnnotations(e_31, k_23);
          LocalPopChoice(n_32);
        }
      else
        {
          t = m_32;
          {
            ATerm a_24 = NULL,f_24 = NULL,f_31 = NULL;
            t = SSLgetAnnotations(b_75);
            a_24 = t;
            t = d_75;
            t = e_75(t);
            f_24 = t;
            t = (ATerm) ATinsert(CheckATermList(f_24), c_75);
            f_31 = t;
            t = SSLsetAnnotations(f_31, a_24);
          }
        }
    }
    return(t);
  }
  t = e_75(t);
  return(t);
}
static ATerm g_8 (ATerm k_31, ATerm l_31, ATerm t)
{
  t = SSL_strcat(k_31, l_31);
  return(t);
}
ATerm debug_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL;
  h_75 = t;
  t = j_89(t);
  i_75 = t;
  t = term_d_14;
  j_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_75), i_75);
  k_75 = t;
  t = SSL_printnl(j_75, k_75);
  t = h_75;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
    }
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_75 = NULL;
      r_75 = t;
      t = SSL_is_string(r_75);
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
            t = map_1_0(m_11, t);
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            {
              ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL;
              x_75 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_75 = ATgetArgument(t, 0);
                  t = y_75;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_75 = ATgetArgument(t, 0);
                      t = y_75;
                      {
                        ATerm z_32 = t;
                        int a_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(a_33);
                          }
                        else
                          {
                            t = z_32;
                            t = debug_1_0(o_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_76 = NULL,e_76 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_75 = ATgetArgument(t, 0);
                          z_75 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_75;
                      t = eval_config_0_0(t);
                      d_76 = t;
                      t = z_75;
                      t = eval_config_0_0(t);
                      e_76 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_76, e_76);
                      t = g_8(d_76, e_76, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL;
  i_76 = t;
  t = term_b_33;
  j_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_33, i_76);
  t = q_8(j_76, i_76, t);
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_76 = NULL,l_76 = NULL;
        t = eval_config_0_0(t);
        k_76 = t;
        t = term_b_33;
        l_76 = t;
        t = SSL_table_put(l_76, i_76, k_76);
        t = k_76;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  ATerm p_76 = NULL;
  p_76 = t;
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_76 = NULL;
        t = term_j_14;
        t = get_config_0_0(t);
        r_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_76, term_g_33);
        t = geq_0_0(t);
        t = p_76;
        t = e_112(t);
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
        t = p_76;
      }
  }
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm u_76 = NULL;
  u_76 = t;
  if(match_string(t, "-k"))
    {
      t = u_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_76;
    }
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
  v_76 = t;
  t = SSL_string_to_int(v_76);
  w_76 = t;
  t = term_h_33;
  x_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_33, w_76);
  t = t_8(x_76, w_76, t);
  t = v_76;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_11, r_11, s_11, t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm z_76 = NULL;
  z_76 = t;
  if(match_string(t, "-S"))
    {
      t = z_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_76;
    }
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL;
  t = term_j_14;
  a_77 = t;
  t = term_j_33;
  b_77 = t;
  t = term_k_33;
  t = t_8(a_77, b_77, t);
  t = term_l_33;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_m_33;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL;
  c_77 = t;
  t = SSL_string_to_int(c_77);
  d_77 = t;
  t = term_j_14;
  e_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, d_77);
  t = t_8(e_77, d_77, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_77);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_n_33;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL;
  t = term_o_33;
  f_77 = t;
  t = term_c_14;
  g_77 = t;
  t = term_p_33;
  t = t_8(f_77, g_77, t);
  t = term_q_33;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_r_33;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_11, u_11, v_11, t);
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_11, y_11, z_11, t);
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
            t = Option_3_0(a_12, b_12, d_12, t);
          }
      }
    }
  return(t);
}
static ATerm t_8 (ATerm j_52, ATerm k_52, ATerm t)
{
  ATerm h_77 = NULL;
  t = term_b_33;
  h_77 = t;
  t = SSL_table_put(h_77, j_52, k_52);
  t = (ATerm) ATmakeAppl(sym__3, term_b_33, j_52, k_52);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_77 = NULL,n_77 = NULL,o_77 = NULL;
      t = term_c_14;
      t = i_0(t);
      m_77 = t;
      t = term_w_33;
      n_77 = t;
      t = term_x_33;
      o_77 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_33, term_x_33, m_77);
      t = r_8(n_77, o_77, m_77, t);
      _fail(t);
    }
  else
    {
      ATerm r_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_77 = ATgetFirst((ATermList) t);
          l_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_77;
      t = d_0(t);
      t = term_c_14;
      t = g_0(t);
      r_77 = t;
      t = (ATerm) ATinsert(CheckATermList(l_77), r_77);
    }
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm t_77 = NULL;
  t_77 = t;
  if(match_string(t, "-o"))
    {
      t = t_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_77;
    }
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL;
  u_77 = t;
  t = term_y_33;
  v_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_33, u_77);
  t = t_8(v_77, u_77, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_77);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_12, f_12, g_12, t);
  return(t);
}
static ATerm r_8 (ATerm l_24, ATerm m_24, ATerm k_24, ATerm t)
{
  ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL;
  x_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_24, m_24);
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_34 = ATgetArgument(t, 0);
            ATerm d_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_24, m_24);
        t = q_8(l_24, m_24, t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = (ATerm) ATempty;
      }
  }
  y_77 = t;
  t = (ATerm) ATinsert(CheckATermList(y_77), k_24);
  z_77 = t;
  t = SSL_table_put(l_24, m_24, z_77);
  t = x_77;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_78 = NULL,l_78 = NULL,m_78 = NULL;
      t = term_c_14;
      t = r_0(t);
      k_78 = t;
      t = term_w_33;
      l_78 = t;
      t = term_x_33;
      m_78 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_33, term_x_33, k_78);
      t = r_8(l_78, m_78, k_78, t);
      _fail(t);
    }
  else
    {
      ATerm q_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_78 = ATgetFirst((ATermList) t);
          h_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_78;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_78 = ATgetFirst((ATermList) t);
          j_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_78;
      t = o_0(t);
      t = i_78;
      t = p_0(t);
      q_78 = t;
      t = (ATerm) ATinsert(CheckATermList(j_78), q_78);
    }
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm s_78 = NULL;
  s_78 = t;
  if(match_string(t, "-i"))
    {
      t = s_78;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_78;
    }
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm t_78 = NULL,u_78 = NULL;
  t_78 = t;
  t = term_e_34;
  u_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_34, t_78);
  t = t_8(u_78, t_78, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_78);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_12, i_12, k_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_14;
  t = whoami_0_0(t);
  v_78 = t;
  t = term_d_14;
  x_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_34), v_78);
  y_78 = t;
  t = SSL_printnl(x_78, y_78);
  t = term_g_14;
  w_78 = t;
  t = SSL_exit(w_78);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_34;
  t = get_config_0_0(t);
  return(t);
}
static ATerm o_8 (ATerm f_39, ATerm g_39, ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_39, g_39);
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      t = SSL_addr(f_39, g_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
  a_79 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_79;
      t = g_97(t);
    }
  else
    {
      ATerm f_79 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_79 = ATgetFirst((ATermList) t);
          c_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_79;
      t = foldr_2_0(g_97, h_97, t);
      f_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_79, f_79);
      t = h_97(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_j_33;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm q_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(q_25, s_25, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_79 = NULL,k_25 = NULL,l_25 = NULL;
  t = times_0_0(t);
  l_25 = t;
  t = SSL_explode_term(l_25);
  if(match_cons(t, sym__2))
    {
      ATerm k_34 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_25;
  t = foldr_2_0(l_12, m_12, t);
  i_79 = t;
  t = SSL_TicksToSeconds(i_79);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_79 = NULL,w_79 = NULL,x_79 = NULL;
  t_79 = t;
  if(match_cons(t, sym__2))
    {
      w_79 = ATgetArgument(t, 0);
      x_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_79;
        if((w_79 != t))
          {
            _fail(t);
          }
        t = t_79;
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
        t = (ATerm) ATmakeAppl(sym__2, w_79, x_79);
        {
          ATerm n_34 = t;
          int o_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_79, x_79);
              LocalPopChoice(o_34);
            }
          else
            {
              t = n_34;
              t = SSL_gtr(w_79, x_79);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_79, x_79);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_112 (ATerm), ATerm t)
{
  ATerm b_80 = NULL;
  b_80 = t;
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_80 = NULL;
        t = term_j_14;
        t = get_config_0_0(t);
        d_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_80, term_g_14);
        t = geq_0_0(t);
        t = b_80;
        t = d_112(t);
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        t = b_80;
      }
  }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm f_80 = NULL,g_80 = NULL,i_80 = NULL,j_80 = NULL;
  t = run_time_0_0(t);
  f_80 = t;
  t = term_c_14;
  t = whoami_0_0(t);
  g_80 = t;
  t = term_d_14;
  i_80 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_34), f_80), term_r_34), g_80);
  j_80 = t;
  t = SSL_printnl(i_80, j_80);
  t = (ATerm) ATmakeAppl(sym__2, term_d_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_34), f_80), term_r_34), g_80));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_80 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_33;
  k_80 = t;
  t = SSL_exit(k_80);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL;
  t_80 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_80;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_80 = ATgetArgument(t, 0);
          {
            ATerm i_26 = NULL,i_31 = NULL;
            t = SSLgetAnnotations(t_80);
            i_26 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_80);
            i_31 = t;
            t = SSLsetAnnotations(i_31, i_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_80;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_34;
      t = get_config_0_0(t);
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      t = fetch_1_0(o_12, t);
    }
  t = x_104(t);
  return(t);
}
ATerm map_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  static ATerm u_81 (ATerm t)
  {
    ATerm r_81 = NULL,s_81 = NULL,t_81 = NULL;
    r_81 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_81;
      }
    else
      {
        ATerm g_27 = NULL,j_27 = NULL,n_27 = NULL,n_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_81 = ATgetFirst((ATermList) t);
            t_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_81);
        g_27 = t;
        t = s_81;
        t = o_90(t);
        j_27 = t;
        t = t_81;
        t = u_81(t);
        n_27 = t;
        t = (ATerm) ATinsert(CheckATermList(n_27), j_27);
        n_31 = t;
        t = SSLsetAnnotations(n_31, g_27);
      }
    return(t);
  }
  t = u_81(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_81 = ATgetFirst((ATermList) t);
      y_81 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_82 = NULL,d_82 = NULL;
        static ATerm p_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_82)), not_null(d_82));
          return(t);
        }
        t = y_81;
        t = n_0(t);
        if(((c_82 != NULL) && (c_82 != t)))
          _fail(t);
        else
          c_82 = t;
        t = x_81;
        t = k_0(t);
        if(((d_82 != NULL) && (d_82 != t)))
          _fail(t);
        else
          d_82 = t;
        t = y_81;
        t = reverse_acc_2_0(k_0, p_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_14;
      t = n_0(t);
    }
  return(t);
}
static ATerm q_8 (ATerm c_26, ATerm d_26, ATerm t)
{
  t = SSL_table_get(c_26, d_26);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL,p_31 = NULL;
  j_82 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_82);
  h_82 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_82);
  p_31 = t;
  t = SSLsetAnnotations(p_31, h_82);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm l_82 = NULL;
  l_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_82), term_w_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_82 = NULL,g_82 = NULL;
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_34;
      t = get_config_0_0(t);
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
      t = fetch_1_0(q_12, t);
    }
  t = term_z_34;
  t = echo_0_0(t);
  t = term_w_33;
  f_82 = t;
  t = term_x_33;
  g_82 = t;
  t = term_a_35;
  t = q_8(f_82, g_82, t);
  t = reverse_acc_2_0(_id, s_12, t);
  t = map_1_0(t_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL;
  n_82 = t;
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_82;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_35 = ATgetFirst((ATermList) t);
                ATerm e_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_82;
          }
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        t = (ATerm) ATinsert(ATempty, n_82);
      }
  }
  o_82 = t;
  t = term_h_31;
  p_82 = t;
  t = SSL_printnl(p_82, o_82);
  t = n_82;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_34;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm t_82 = NULL,u_82 = NULL;
  t = term_f_35;
  t_82 = t;
  t = term_c_14;
  u_82 = t;
  t = term_g_35;
  t = t_8(t_82, u_82, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_h_35;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL;
  t = term_f_35;
  x_82 = t;
  t = term_c_14;
  y_82 = t;
  t = term_g_35;
  t = t_8(x_82, y_82, t);
  t = term_i_35;
  v_82 = t;
  t = term_c_14;
  w_82 = t;
  t = term_j_35;
  t = t_8(v_82, w_82, t);
  t = term_k_35;
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_l_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_12, w_12, z_12, t);
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      t = Option_3_0(b_13, e_13, f_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_79 (ATerm), ATerm v_79 (ATerm), ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,g_83 = NULL,r_31 = NULL;
  g_83 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_83 = ATgetFirst((ATermList) t);
      b_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_83);
  z_82 = t;
  t = a_83;
  t = u_79(t);
  c_83 = t;
  t = b_83;
  t = v_79(t);
  d_83 = t;
  t = (ATerm) ATinsert(CheckATermList(d_83), c_83);
  r_31 = t;
  t = SSLsetAnnotations(r_31, z_82);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL,o_83 = NULL,q_83 = NULL,r_83 = NULL,b_32 = NULL;
  l_83 = t;
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_35;
        t = c_108(t);
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
      }
  }
  t = l_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_83 = ATgetFirst((ATermList) t);
      o_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_83);
  m_83 = t;
  t = term_h_34;
  r_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_34, n_83);
  t = t_8(r_83, n_83, t);
  t = o_83;
  {
    static ATerm b_84 (ATerm t)
    {
      ATerm r_35 = t;
      int s_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_83 = NULL;
              u_83 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_83;
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
              t = c_108(t);
              t = Cons_2_0(_id, b_84, t);
            }
          LocalPopChoice(s_35);
        }
      else
        {
          t = r_35;
          {
            ATerm x_83 = NULL,y_83 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_83 = ATgetFirst((ATermList) t);
                y_83 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_83), (ATerm) ATmakeAppl(sym_Undefined_1, x_83));
          }
        }
      return(t);
    }
    t = b_84(t);
  }
  q_83 = t;
  t = (ATerm) ATinsert(CheckATermList(q_83), (ATerm) ATmakeAppl(sym_Program_1, n_83));
  b_32 = t;
  t = SSLsetAnnotations(b_32, m_83);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm n_84 = NULL;
  n_84 = t;
  if(match_string(t, "--help"))
    {
      t = n_84;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_84;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_84;
        }
    }
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL;
  t = term_v_34;
  o_84 = t;
  t = term_c_14;
  p_84 = t;
  t = term_v_35;
  t = t_8(o_84, p_84, t);
  t = term_w_35;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = term_x_35;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL;
  i_84 = t;
  t = term_w_33;
  k_84 = t;
  t = term_x_33;
  l_84 = t;
  t = (ATerm) ATempty;
  m_84 = t;
  t = SSL_table_put(k_84, l_84, m_84);
  t = i_84;
  {
    static ATerm g_13 (ATerm t)
    {
      ATerm y_35 = t;
      int z_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_108(t);
          LocalPopChoice(z_35);
        }
      else
        {
          t = y_35;
          {
            ATerm a_36 = t;
            int b_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_13, i_13, n_13, t);
                LocalPopChoice(b_36);
              }
            else
              {
                t = a_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_13, t);
  }
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_84 = NULL;
        w_84 = t;
        {
          ATerm e_36 = t;
          int f_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_27 = NULL;
              t = w_84;
              {
                ATerm g_36 = t;
                int h_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_v_34;
                    t = get_config_0_0(t);
                    LocalPopChoice(h_36);
                  }
                else
                  {
                    t = g_36;
                    t = fetch_1_0(o_13, t);
                  }
              }
              t = w_84;
              t = default_system_usage_0_0(t);
              t = term_j_33;
              u_27 = t;
              t = SSL_exit(u_27);
              LocalPopChoice(f_36);
            }
          else
            {
              t = e_36;
              {
                ATerm a_28 = NULL;
                t = term_f_35;
                t = get_config_0_0(t);
                t = w_84;
                t = default_system_about_0_0(t);
                t = term_j_33;
                a_28 = t;
                t = SSL_exit(a_28);
              }
            }
        }
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        {
          ATerm i_36 = t;
          int j_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL;
              static ATerm p_13 (ATerm t)
              {
                ATerm a_85 = NULL,b_85 = NULL,c_85 = NULL,f_32 = NULL;
                c_85 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_85);
                a_85 = t;
                t = b_85;
                if(((g_84 != NULL) && (g_84 != t)))
                  _fail(t);
                else
                  g_84 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_85);
                f_32 = t;
                t = SSLsetAnnotations(f_32, a_85);
                return(t);
              }
              t = fetch_1_0(p_13, t);
              t = term_d_14;
              y_84 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_84)), term_k_36);
              z_84 = t;
              t = SSL_printnl(y_84, z_84);
              t = (ATerm) ATmakeAppl(sym__2, term_d_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_84)), term_k_36));
              t = default_system_usage_0_0(t);
              t = term_g_14;
              x_84 = t;
              t = SSL_exit(x_84);
              LocalPopChoice(j_36);
            }
          else
            {
              t = i_36;
            }
        }
      }
  }
  h_84 = t;
  t = term_w_33;
  j_84 = t;
  t = SSL_table_destroy(j_84);
  t = h_84;
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL;
  t = parse_options_1_0(z_104, t);
  h_85 = t;
  t = term_l_36;
  k_85 = t;
  t = SSL_table_create(k_85);
  t = term_l_36;
  i_85 = t;
  t = term_m_36;
  j_85 = t;
  t = SSL_table_put(i_85, j_85, h_85);
  t = h_85;
  t = b_105(t);
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_105, t);
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
              t = c_105(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_36);
            }
          else
            {
              t = p_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = if_verbose2_1_0(y_13, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL;
  t = term_r_36;
  l_85 = t;
  t = term_c_14;
  m_85 = t;
  t = term_s_36;
  t = t_8(l_85, m_85, t);
  t = term_t_36;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL,q_85 = NULL;
  n_85 = t;
  t = term_h_34;
  t = get_config_0_0(t);
  o_85 = t;
  t = term_d_14;
  p_85 = t;
  t = (ATerm) ATinsert(ATempty, o_85);
  q_85 = t;
  t = SSL_printnl(p_85, q_85);
  t = n_85;
  return(t);
}
ATerm iowrap_3_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm t)
{
  static ATerm q_13 (ATerm t)
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_104(t);
        LocalPopChoice(w_36);
      }
    else
      {
        t = v_36;
        {
          ATerm x_36 = t;
          int z_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(z_36);
            }
          else
            {
              t = x_36;
              {
                ATerm a_37 = t;
                int e_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(e_37);
                  }
                else
                  {
                    t = a_37;
                    {
                      ATerm f_37 = t;
                      int h_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_13, v_13, w_13, t);
                          LocalPopChoice(h_37);
                        }
                      else
                        {
                          t = f_37;
                          {
                            ATerm i_37 = t;
                            int j_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(j_37);
                              }
                            else
                              {
                                t = i_37;
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
  static ATerm s_13 (ATerm t)
  {
    ATerm r_85 = NULL,s_85 = NULL,t_85 = NULL;
    s_85 = t;
    {
      ATerm k_37 = t;
      int l_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm a_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_85 != NULL) && (r_85 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_85 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_14, t);
          LocalPopChoice(l_37);
        }
      else
        {
          t = k_37;
          t = term_m_37;
          r_85 = t;
        }
    }
    t = not_null(r_85);
    t = ReadFromFile_0_0(t);
    t_85 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_85, t_85);
    t = apply_strategy_1_0(i_104, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(q_13, k_104, r_13, s_13, t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL,y_85 = NULL,h_32 = NULL;
  y_85 = t;
  if(match_cons(t, sym__2))
    {
      v_85 = ATgetArgument(t, 0);
      w_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_85);
  u_85 = t;
  t = w_85;
  t = mark_bound_unbound_vars_0_0(t);
  x_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_85, x_85);
  h_32 = t;
  t = SSLsetAnnotations(h_32, u_85);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(b_14, _fail, default_usage_0_0, t);
  return(t);
}
