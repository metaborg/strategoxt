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
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_u_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_z_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_y_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_j_34;
ATerm term_c_34;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_e_33;
ATerm term_a_33;
ATerm term_u_32;
ATerm term_s_32;
ATerm term_q_32;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_z_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Defined_2, term_h_18, term_i_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_t_27, term_u_27);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Defined_2, term_z_28, term_i_18);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_r_34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_34);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, term_w_34, term_m_14);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_e_35, term_f_35);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__2, term_n_36, term_m_14);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_m_14);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym__2, term_d_36, term_m_14);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym__2, term_e_38, term_m_14);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm n_113 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm b_82 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm a_82 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm z_81 (ATerm), ATerm t);
static ATerm i_7 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm l_84 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm j_7 (ATerm r_23, ATerm s_23, ATerm t_23, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm k_7 (ATerm l_23, ATerm p_23, ATerm n_23, ATerm t);
static ATerm g_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm l_7 (ATerm f_23, ATerm j_23, ATerm h_23, ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm m_7 (ATerm d_22, ATerm e_22, ATerm f_22, ATerm h_22, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm n_7 (ATerm o_20, ATerm p_20, ATerm n_20, ATerm t);
static ATerm s_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm o_7 (ATerm m_26, ATerm l_26, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm b_21 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm s_7 (ATerm z_95 (ATerm), ATerm o_47, ATerm n_47, ATerm t);
ATerm foldr_3_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm t);
static ATerm t_7 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm s_47, ATerm r_47, ATerm t);
static ATerm u_7 (ATerm u_95 (ATerm), ATerm m_47, ATerm l_47, ATerm t);
ATerm at_end_1_0 (ATerm l_92 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_55 (ATerm i_55, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm z_7 (ATerm j_607, ATerm o_607, ATerm i_59, ATerm t);
ATerm while_not_2_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t);
ATerm for_3_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm t);
static ATerm s_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm j_61 (ATerm v_58, ATerm w_58, ATerm y_58, ATerm t);
static ATerm b_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm o_10 (ATerm t);
ATerm free_vars_3_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm v_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm b_8 (ATerm k_82 (ATerm), ATerm f_24, ATerm d_24, ATerm t);
static ATerm y_10 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm c_8 (ATerm o_25, ATerm p_25, ATerm t);
ATerm end_scope_1_0 (ATerm h_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_82 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm i_82 (ATerm), ATerm j_82 (ATerm), ATerm t);
static ATerm h_11 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm d_8 (ATerm w_25, ATerm x_25, ATerm y_25, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm g_8 (ATerm u_25, ATerm v_25, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm q_11 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm j_8 (ATerm o_33, ATerm p_33, ATerm t);
static ATerm k_8 (ATerm z_38, ATerm a_39, ATerm t);
static ATerm m_8 (ATerm s_90 (ATerm), ATerm p_320, ATerm d_39, ATerm t);
static ATerm l_8 (ATerm v_38, ATerm w_38, ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm g_105 (ATerm), ATerm t);
static ATerm t_76 (ATerm n_76, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_8 (ATerm b_39, ATerm t);
static ATerm o_8 (ATerm q_33, ATerm r_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_78 (ATerm d_77, ATerm t);
static ATerm f_78 (ATerm h_77, ATerm i_77, ATerm j_77, ATerm t);
static ATerm g_78 (ATerm r_77, ATerm s_77, ATerm t_77, ATerm t);
static ATerm p_8 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_92 (ATerm), ATerm t);
static ATerm i_8 (ATerm i_32, ATerm j_32, ATerm t);
ATerm debug_1_0 (ATerm q_90 (ATerm), ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm l_113 (ATerm), ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm m_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_8 (ATerm h_53, ATerm i_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_8 (ATerm j_25, ATerm k_25, ATerm i_25, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm q_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_8 (ATerm d_40, ATerm e_40, ATerm t);
ATerm foldr_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm b_13 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_113 (ATerm), ATerm t);
static ATerm c_13 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_13 (ATerm t);
ATerm need_help_1_0 (ATerm e_106 (ATerm), ATerm t);
ATerm map_1_0 (ATerm v_91 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm s_8 (ATerm a_27, ATerm b_27, ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_109 (ATerm), ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
ATerm parse_options_1_0 (ATerm i_109 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm t);
static ATerm c_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
ATerm iowrap_3_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,u_0 = NULL,v_0 = NULL;
  a_0 = t;
  t = term_m_14;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_n_14;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_14), b_0), term_o_14);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_r_14;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm n_113 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL;
        t = term_u_14;
        t = get_config_0_0(t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_v_14);
        t = geq_0_0(t);
        t = x_0;
        t = n_113(t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = x_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,n_6 = NULL;
  static ATerm j_0 (ATerm t)
  {
    ATerm g_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,p_6 = NULL,o_6 = NULL;
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
    t = b_82(t);
    u_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, u_1, s_1, t_1);
    o_6 = t;
    t = SSLsetAnnotations(o_6, m_1);
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
    t = b_82(t);
    l_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_1, l_1, k_1);
    p_6 = t;
    t = SSLsetAnnotations(p_6, g_1);
    return(t);
  }
  static ATerm l_0 (ATerm t)
  {
    ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,r_6 = NULL;
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
    t = b_82(t);
    b_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_1, z_1, b_2);
    r_6 = t;
    t = SSLsetAnnotations(r_6, x_1);
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
ATerm mark_lchoice_1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,d_7 = NULL;
  static ATerm m_0 (ATerm t)
  {
    ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,h_7 = NULL;
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
    t = a_82(t);
    k_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, k_2, j_2);
    h_7 = t;
    t = SSLsetAnnotations(h_7, h_2);
    return(t);
  }
  static ATerm q_0 (ATerm t)
  {
    ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,r_2 = NULL,s_2 = NULL,p_7 = NULL;
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
    t = a_82(t);
    r_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, o_2, r_2);
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
  d_7 = t;
  t = SSLsetAnnotations(d_7, d_2);
  t = abstract_choice_2_0(m_0, q_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,z_2 = NULL,b_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL;
  h_3 = t;
  t = save_MarkVar_0_0(t);
  w_2 = t;
  t = h_3;
  t = c_82(t);
  b_3 = t;
  t = save_MarkVar_0_0(t);
  x_2 = t;
  t = term_w_14;
  j_3 = t;
  t = SSL_table_destroy(j_3);
  t = term_w_14;
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_14, w_2);
  t = o_7(i_3, w_2, t);
  t = b_3;
  t = d_82(t);
  z_2 = t;
  t = x_2;
  t = isect_MarkVar_0_0(t);
  t = z_2;
  return(t);
}
ATerm mark_choice_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm k_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,w_7 = NULL;
  static ATerm y_0 (ATerm t)
  {
    ATerm p_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,x_7 = NULL;
    u_3 = t;
    if(match_cons(t, sym_Choice_2))
      {
        r_3 = ATgetArgument(t, 0);
        s_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_3);
    p_3 = t;
    t = r_3;
    t = z_81(t);
    t_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, t_3, s_3);
    x_7 = t;
    t = SSLsetAnnotations(x_7, p_3);
    return(t);
  }
  static ATerm a_1 (ATerm t)
  {
    ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,c_4 = NULL,y_7 = NULL;
    c_4 = t;
    if(match_cons(t, sym_Choice_2))
      {
        x_3 = ATgetArgument(t, 0);
        y_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_4);
    w_3 = t;
    t = y_3;
    t = z_81(t);
    z_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, x_3, z_3);
    y_7 = t;
    t = SSLsetAnnotations(y_7, w_3);
    return(t);
  }
  o_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      m_3 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_3);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, m_3, n_3);
  w_7 = t;
  t = SSLsetAnnotations(w_7, k_3);
  t = abstract_choice_2_0(y_0, a_1, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,i_4 = NULL,j_4 = NULL,o_4 = NULL,t_4 = NULL,u_4 = NULL,g_5 = NULL,i_5 = NULL,x_8 = NULL,h_8 = NULL;
  e_4 = t;
  t = save_MarkVar_0_0(t);
  d_4 = t;
  t = e_4;
  if(match_cons(t, sym_Rec_2))
    {
      u_4 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_4);
  t_4 = t;
  t = g_5;
  t = mark_buv_0_0(t);
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, u_4, i_5);
  h_8 = t;
  t = SSLsetAnnotations(h_8, t_4);
  t = d_4;
  t = isect_MarkVar_0_0(t);
  t = e_4;
  if(match_cons(t, sym_Rec_2))
    {
      i_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_4);
  f_4 = t;
  t = j_4;
  t = mark_buv_0_0(t);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, i_4, o_4);
  x_8 = t;
  t = SSLsetAnnotations(x_8, f_4);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm j_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,d_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,l_9 = NULL,h_9 = NULL,f_9 = NULL;
  h_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      b_6 = ATgetArgument(t, 0);
      d_6 = ATgetArgument(t, 1);
      f_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_6);
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, b_6, d_6, f_6);
  f_9 = t;
  t = SSLsetAnnotations(f_9, a_6);
  g_6 = t;
  t = save_MarkVar_0_0(t);
  j_5 = t;
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
  t_5 = t;
  t = x_5;
  t = map_1_0(a_3, t);
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, v_5, w_5, y_5);
  h_9 = t;
  t = SSLsetAnnotations(h_9, t_5);
  z_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
      p_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_5);
  l_5 = t;
  t = n_5;
  t = mark_buv_0_0(t);
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, m_5, r_5, p_5);
  l_9 = t;
  t = SSLsetAnnotations(l_9, l_5);
  s_5 = t;
  t = j_5;
  t = isect_MarkVar_0_0(t);
  t = s_5;
  return(t);
}
ATerm alltd_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  static ATerm i_6 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_84(t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = SRTS_all(i_6, t);
      }
    return(t);
  }
  t = i_6(t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm a_10 = NULL,e_10 = NULL,f_10 = NULL,h_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      f_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      a_10 = ATgetArgument(t, 2);
      {
        ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL,i_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,m_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,y_2 = NULL,e_3 = NULL,v_9 = NULL,u_9 = NULL,t_9 = NULL;
        t = SSLgetAnnotations(e_10);
        y_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, f_10, h_10, a_10);
        t_9 = t;
        t = SSLsetAnnotations(t_9, y_2);
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
        u_9 = t;
        t = SSLsetAnnotations(u_9, r_1);
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
      ATerm h_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,p_4 = NULL,q_4 = NULL,v_4 = NULL,x_9 = NULL,w_9 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          f_10 = ATgetArgument(t, 0);
          h_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_10);
      q_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, f_10, h_10);
      w_9 = t;
      t = SSLsetAnnotations(w_9, q_4);
      v_4 = t;
      t = save_MarkVar_0_0(t);
      h_4 = t;
      t = v_4;
      if(match_cons(t, sym_Call_2))
        {
          l_4 = ATgetArgument(t, 0);
          m_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_4);
      k_4 = t;
      t = m_4;
      t = mark_buv_0_0(t);
      n_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, l_4, n_4);
      x_9 = t;
      t = SSLsetAnnotations(x_9, k_4);
      p_4 = t;
      t = h_4;
      t = isect_MarkVar_0_0(t);
      t = p_4;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_w_14;
  return(t);
}
static ATerm j_7 (ATerm r_23, ATerm s_23, ATerm t_23, ATerm t)
{
  ATerm n_10 = NULL;
  static ATerm f_3 (ATerm t)
  {
    t = s_23;
    t = map_1_0(IntroduceBound_0_0, t);
    t = t_23;
    t = mark_build_vars_0_0(t);
    if(((n_10 != NULL) && (n_10 != t)))
      _fail(t);
    else
      n_10 = t;
    return(t);
  }
  t = scope_2_0(d_3, f_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, r_23, s_23, not_null(n_10));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_w_14;
  return(t);
}
static ATerm q_3 (ATerm t)
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
              ATerm f_11 = NULL,g_11 = NULL,k_11 = NULL,m_11 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_11 = ATgetArgument(t, 0);
                  g_11 = ATgetArgument(t, 1);
                  k_11 = ATgetArgument(t, 2);
                  m_11 = ATgetArgument(t, 3);
                  t = k_11;
                  t = map_1_0(a_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_11 = ATgetArgument(t, 0);
                      g_11 = ATgetArgument(t, 1);
                      k_11 = ATgetArgument(t, 2);
                      m_11 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_11;
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
  ATerm c_12 = NULL;
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_12 = ATgetArgument(t, 0);
          {
            ATerm i_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_15);
      t = c_12;
    }
  else
    {
      t = g_15;
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
static ATerm b_4 (ATerm t)
{
  ATerm r_12 = NULL;
  ATerm l_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_12 = ATgetArgument(t, 0);
          {
            ATerm v_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_15);
      t = r_12;
    }
  else
    {
      t = l_15;
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
static ATerm k_7 (ATerm l_23, ATerm p_23, ATerm n_23, ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
  static ATerm l_3 (ATerm t)
  {
    t = l_23;
    t = free_vars_3_0(q_3, v_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = l_23;
    t = mark_match_vars_0_0(t);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    t = n_23;
    t = mark_buv_0_0(t);
    if(((b_11 != NULL) && (b_11 != t)))
      _fail(t);
    else
      b_11 = t;
    t = p_23;
    t = mark_build_vars_0_0(t);
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    return(t);
  }
  t = scope_2_0(g_3, l_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(a_11), not_null(c_11), not_null(b_11)));
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_w_14;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm a_13 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_13);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      {
        ATerm z_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_16);
          }
        else
          {
            t = z_15;
            {
              ATerm f_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_13 = ATgetArgument(t, 0);
                  k_13 = ATgetArgument(t, 1);
                  l_13 = ATgetArgument(t, 2);
                  m_13 = ATgetArgument(t, 3);
                  t = l_13;
                  t = map_1_0(x_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_13 = ATgetArgument(t, 0);
                      k_13 = ATgetArgument(t, 1);
                      l_13 = ATgetArgument(t, 2);
                      m_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_13;
                  t = map_1_0(y_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm t_13 = NULL;
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_13 = ATgetArgument(t, 0);
          {
            ATerm e_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_16);
      t = t_13;
    }
  else
    {
      t = b_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_13;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm i_14 = NULL;
  ATerm g_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_14 = ATgetArgument(t, 0);
          {
            ATerm l_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_16);
      t = i_14;
    }
  else
    {
      t = g_16;
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
static ATerm l_7 (ATerm f_23, ATerm j_23, ATerm h_23, ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  static ATerm r_4 (ATerm t)
  {
    t = f_23;
    t = free_vars_3_0(s_4, w_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = f_23;
    t = mark_match_vars_0_0(t);
    if(((x_12 != NULL) && (x_12 != t)))
      _fail(t);
    else
      x_12 = t;
    t = h_23;
    t = mark_buv_0_0(t);
    if(((y_12 != NULL) && (y_12 != t)))
      _fail(t);
    else
      y_12 = t;
    t = j_23;
    t = mark_build_vars_0_0(t);
    if(((z_12 != NULL) && (z_12 != t)))
      _fail(t);
    else
      z_12 = t;
    return(t);
  }
  t = scope_2_0(g_4, r_4, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_12), not_null(z_12), not_null(y_12)));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm k_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_16);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm m_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = m_16;
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            {
              ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  s_16 = ATgetArgument(t, 0);
                  t_16 = ATgetArgument(t, 1);
                  u_16 = ATgetArgument(t, 2);
                  v_16 = ATgetArgument(t, 3);
                  t = u_16;
                  t = map_1_0(b_5, t);
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
                  t = map_1_0(c_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm g_17 = NULL;
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_17 = ATgetArgument(t, 0);
          {
            ATerm a_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_16);
      t = g_17;
    }
  else
    {
      t = y_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_17;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm x_17 = NULL;
  ATerm b_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_17 = ATgetArgument(t, 0);
          {
            ATerm j_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_17);
      t = x_17;
    }
  else
    {
      t = b_17;
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
static ATerm d_5 (ATerm t)
{
  t = term_w_14;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm i_19 = NULL;
  ATerm k_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_19 = ATgetArgument(t, 0);
          {
            ATerm s_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_17);
      t = i_19;
    }
  else
    {
      t = k_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_19;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm r_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_19);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            {
              ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_19 = ATgetArgument(t, 0);
                  v_19 = ATgetArgument(t, 1);
                  w_19 = ATgetArgument(t, 2);
                  x_19 = ATgetArgument(t, 3);
                  t = w_19;
                  t = map_1_0(q_5, t);
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
                  t = map_1_0(u_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm m_20 = NULL;
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_20 = ATgetArgument(t, 0);
          {
            ATerm a_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_17);
      t = m_20;
    }
  else
    {
      t = y_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_20;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm m_21 = NULL;
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_21 = ATgetArgument(t, 0);
          {
            ATerm d_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_18);
      t = m_21;
    }
  else
    {
      t = b_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_21;
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm c_15 = NULL,j_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
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
            c_15 = ATgetArgument(t, 0);
            j_15 = ATgetArgument(t, 1);
            k_15 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = o_15;
        t = free_vars_3_0(z_4, a_5, tboundin_3_0, t);
        d_16 = t;
        {
          static ATerm e_5 (ATerm t)
          {
            t = d_16;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = c_15;
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
          t = scope_2_0(d_5, e_5, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, m_15, n_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_16), not_null(j_16), not_null(h_16)));
      }
    }
  else
    {
      ATerm e_18 = NULL,j_18 = NULL,p_18 = NULL,r_18 = NULL,x_18 = NULL,y_18 = NULL;
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
          r_15 = ATgetArgument(t, 1);
          s_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_15;
      t = map_1_0(f_5, t);
      e_18 = t;
      t = p_15;
      t = free_vars_3_0(h_5, o_5, tboundin_3_0, t);
      y_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_18, e_18);
      t = diff_0_0(t);
      j_18 = t;
      {
        static ATerm e_6 (ATerm t)
        {
          t = e_18;
          t = map_1_0(IntroduceBound_0_0, t);
          t = j_18;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = q_15;
          t = mark_match_vars_0_0(t);
          if(((p_18 != NULL) && (p_18 != t)))
            _fail(t);
          else
            p_18 = t;
          t = s_15;
          t = mark_buv_0_0(t);
          if(((r_18 != NULL) && (r_18 != t)))
            _fail(t);
          else
            r_18 = t;
          t = r_15;
          t = mark_build_vars_0_0(t);
          if(((x_18 != NULL) && (x_18 != t)))
            _fail(t);
          else
            x_18 = t;
          return(t);
        }
        t = scope_2_0(c_6, e_6, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, m_15, n_15, o_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(p_18), not_null(x_18), not_null(r_18)));
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm s_21 = NULL,w_21 = NULL,n_24 = NULL;
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_21);
  w_21 = t;
  t = term_k_18;
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, s_21), term_k_18);
  t = b_8(j_6, w_21, n_24, t);
  t = s_21;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm v_24 = NULL;
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_24 = ATgetArgument(t, 0);
          {
            ATerm n_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_18);
      t = v_24;
    }
  else
    {
      t = l_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_24;
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_w_14;
  return(t);
}
static ATerm m_7 (ATerm d_22, ATerm e_22, ATerm f_22, ATerm h_22, ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL;
  t = f_22;
  t = map_1_0(k_6, t);
  p_24 = t;
  {
    static ATerm q_6 (ATerm t)
    {
      t = p_24;
      t = map_1_0(IntroduceBound_0_0, t);
      t = h_22;
      t = mark_buv_0_0(t);
      if(((q_24 != NULL) && (q_24 != t)))
        _fail(t);
      else
        q_24 = t;
      return(t);
    }
    t = scope_2_0(m_6, q_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_22, e_22, f_22, not_null(q_24));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,w_26 = NULL;
  p_26 = t;
  if(match_cons(t, sym__2))
    {
      q_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_26;
  if(match_cons(t, sym_Undefined_0))
    {
      t = q_26;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_o_18;
        }
      else
        {
          t = term_o_18;
        }
    }
  else
    {
      ATerm q_18 = t;
      int s_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm t_18 = ATgetArgument(t, 0);
              w_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(s_18);
          t = q_26;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_o_18;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  r_26 = ATgetArgument(t, 0);
                  s_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm u_18 = t;
                int v_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, s_26, w_26);
                    {
                      ATerm w_18 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm k_5 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              k_5 = ATgetArgument(t, 0);
                              if((k_5 != ATgetArgument(t, 1)))
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
                    t = (ATerm) ATmakeAppl(sym_Defined_2, r_26, term_z_18);
                    LocalPopChoice(v_18);
                  }
                else
                  {
                    t = u_18;
                    t = w_26;
                    if((s_26 != t))
                      {
                        _fail(t);
                      }
                    t = q_26;
                  }
              }
            }
        }
      else
        {
          t = q_18;
          t = q_26;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_o_18;
        }
    }
  return(t);
}
static ATerm n_7 (ATerm o_20, ATerm p_20, ATerm n_20, ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,o_27 = NULL;
  t = term_w_14;
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_14, o_20);
  t = s_8(o_27, o_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_27 = ATgetFirst((ATermList) t);
      {
        ATerm d_19 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_20, i_27);
  t = CompareEntries_0_0(t);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_20, (ATerm) ATinsert(CheckATermList(n_20), j_27));
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm c_28 = NULL,h_28 = NULL,i_28 = NULL,l_28 = NULL,m_28 = NULL;
  m_28 = t;
  if(match_cons(t, sym__2))
    {
      c_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
      t = h_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_28 = ATgetFirst((ATermList) t);
          l_28 = (ATerm) ATgetNext((ATermList) t);
          t = i_28;
          {
            ATerm e_19 = t;
            int f_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm g_19 = ATgetArgument(t, 0);
                    ATerm h_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(f_19);
                t = c_28;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = m_28;
                  }
                else
                  {
                    ATerm j_19 = t;
                    int m_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_28;
                        t = n_7(c_28, i_28, l_28, t);
                        LocalPopChoice(m_19);
                      }
                    else
                      {
                        t = j_19;
                        t = m_28;
                      }
                  }
              }
            else
              {
                t = e_19;
                t = c_28;
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
          t = c_28;
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
  ATerm y_27 = NULL,z_27 = NULL,b_28 = NULL;
  t = map_1_0(s_6, t);
  y_27 = t;
  t = term_w_14;
  b_28 = t;
  t = SSL_table_destroy(b_28);
  t = term_w_14;
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_14, y_27);
  t = o_7(z_27, y_27, t);
  t = y_27;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,r_29 = NULL;
  r_29 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm p_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_19);
        t = r_29;
      }
    else
      {
        t = n_19;
        {
          ATerm q_19 = t;
          int s_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm t_19 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(s_19);
              t = r_29;
            }
          else
            {
              t = q_19;
              {
                ATerm y_19 = t;
                int z_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm a_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(z_19);
                    t = r_29;
                  }
                else
                  {
                    t = y_19;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm b_20 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = r_29;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  k_29 = t;
  t = r_29;
  t = SRTS_one(mark_buv_0_0, t);
  l_29 = t;
  t = k_29;
  t = isect_MarkVar_0_0(t);
  t = l_29;
  return(t);
}
static ATerm o_7 (ATerm m_26, ATerm l_26, ATerm t)
{
  static ATerm v_6 (ATerm t)
  {
    ATerm t_29 = NULL,u_29 = NULL;
    if(match_cons(t, sym__2))
      {
        t_29 = ATgetArgument(t, 0);
        u_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(m_26, t_29, u_29);
    t = (ATerm) ATmakeAppl(sym__3, m_26, t_29, u_29);
    return(t);
  }
  t = l_26;
  t = map_1_0(v_6, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_29 = NULL;
  static ATerm w_6 (ATerm t)
  {
    ATerm y_29 = NULL,z_29 = NULL;
    y_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_29), y_29);
    t = s_8(not_null(v_29), y_29, t);
    z_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_29, z_29);
    return(t);
  }
  if(((v_29 != NULL) && (v_29 != t)))
    _fail(t);
  else
    v_29 = t;
  t = SSL_table_keys(v_29);
  t = map_1_0(w_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_w_14;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm b_21 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm x_6 (ATerm t)
    {
      static ATerm e_31 (ATerm l_30, ATerm t)
      {
        ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
        t = l_30;
        if(match_cons(t, sym__2))
          {
            ATerm f_20 = ATgetArgument(t, 0);
            o_30 = f_20;
            if(match_cons(f_20, sym_Var_1))
              {
                p_30 = ATgetArgument(f_20, 0);
              }
            else
              _fail(t);
            {
              ATerm g_20 = ATgetArgument(t, 1);
              if(((ATgetType(g_20) == AT_LIST) && !(ATisEmpty(g_20))))
                {
                  ATerm h_20 = ATgetFirst((ATermList) g_20);
                  if(match_cons(h_20, sym_Defined_2))
                    {
                      q_30 = ATgetArgument(h_20, 0);
                      {
                        ATerm i_20 = ATgetArgument(h_20, 1);
                        if((ATgetSymbol((ATermAppl) i_20) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  r_30 = (ATerm) ATgetNext((ATermList) g_20);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_21;
        {
          static ATerm y_6 (ATerm t)
          {
            if((p_30 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(y_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, o_30, (ATerm) ATinsert(CheckATermList(r_30), (ATerm) ATmakeAppl(sym_Defined_2, q_30, term_z_18)));
        return(t);
      }
      ATerm u_30 = NULL,a_31 = NULL;
      a_31 = t;
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                u_30 = ATgetArgument(t, 0);
                {
                  ATerm q_20 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(k_20);
            t = u_30;
            if(match_cons(t, sym_Scopes_0))
              {
                t = a_31;
              }
            else
              {
                ATerm r_20 = t;
                int s_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = e_31(a_31, t);
                    LocalPopChoice(s_20);
                  }
                else
                  {
                    t = r_20;
                    t = a_31;
                  }
              }
          }
        else
          {
            t = j_20;
            {
              ATerm t_20 = t;
              int u_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_31(a_31, t);
                  LocalPopChoice(u_20);
                }
              else
                {
                  t = t_20;
                  t = a_31;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(x_6, t);
  }
  i_30 = t;
  t = term_w_14;
  k_30 = t;
  t = SSL_table_destroy(k_30);
  t = term_w_14;
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_14, i_30);
  t = o_7(j_30, i_30, t);
  t = i_30;
  return(t);
}
ATerm tboundin_3_0 (ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  x_37 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_37 = ATgetArgument(t, 0);
      u_37 = ATgetArgument(t, 1);
      {
        ATerm l_6 = NULL,t_6 = NULL,u_6 = NULL,q_16 = NULL;
        t = SSLgetAnnotations(x_37);
        l_6 = t;
        t = y_37;
        t = m_114(t);
        t_6 = t;
        t = u_37;
        t = k_114(t);
        u_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, t_6, u_6);
        q_16 = t;
        t = SSLsetAnnotations(q_16, l_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          y_37 = ATgetArgument(t, 0);
          u_37 = ATgetArgument(t, 1);
          v_37 = ATgetArgument(t, 2);
          w_37 = ATgetArgument(t, 3);
          {
            ATerm u_8 = NULL,d_9 = NULL,e_9 = NULL,g_9 = NULL,i_9 = NULL,r_16 = NULL;
            t = SSLgetAnnotations(x_37);
            u_8 = t;
            t = y_37;
            t = m_114(t);
            d_9 = t;
            t = u_37;
            t = m_114(t);
            e_9 = t;
            t = v_37;
            t = m_114(t);
            g_9 = t;
            t = w_37;
            t = k_114(t);
            i_9 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, d_9, e_9, g_9, i_9);
            r_16 = t;
            t = SSLsetAnnotations(r_16, u_8);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              y_37 = ATgetArgument(t, 0);
              u_37 = ATgetArgument(t, 1);
              v_37 = ATgetArgument(t, 2);
              w_37 = ATgetArgument(t, 3);
              {
                ATerm l_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,l_17 = NULL;
                t = SSLgetAnnotations(x_37);
                l_10 = t;
                t = y_37;
                t = m_114(t);
                r_10 = t;
                t = u_37;
                t = m_114(t);
                s_10 = t;
                t = v_37;
                t = m_114(t);
                t_10 = t;
                t = w_37;
                t = k_114(t);
                u_10 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, r_10, s_10, t_10, u_10);
                l_17 = t;
                t = SSLsetAnnotations(l_17, l_10);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  y_37 = ATgetArgument(t, 0);
                  {
                    ATerm l_11 = NULL,p_11 = NULL,m_17 = NULL;
                    t = SSLgetAnnotations(x_37);
                    l_11 = t;
                    t = y_37;
                    t = k_114(t);
                    p_11 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, p_11);
                    m_17 = t;
                    t = SSLsetAnnotations(m_17, l_11);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      y_37 = ATgetArgument(t, 0);
                      {
                        ATerm z_11 = NULL,l_12 = NULL,n_17 = NULL;
                        t = SSLgetAnnotations(x_37);
                        z_11 = t;
                        t = y_37;
                        t = k_114(t);
                        l_12 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, l_12);
                        n_17 = t;
                        t = SSLsetAnnotations(n_17, z_11);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          y_37 = ATgetArgument(t, 0);
                          {
                            ATerm u_12 = NULL,w_12 = NULL,f_18 = NULL;
                            t = SSLgetAnnotations(x_37);
                            u_12 = t;
                            t = y_37;
                            t = k_114(t);
                            w_12 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, w_12);
                            f_18 = t;
                            t = SSLsetAnnotations(f_18, u_12);
                          }
                        }
                      else
                        {
                          ATerm i_13 = NULL,u_13 = NULL,g_18 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              y_37 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(x_37);
                          i_13 = t;
                          t = y_37;
                          t = k_114(t);
                          u_13 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, u_13);
                          g_18 = t;
                          t = SSLsetAnnotations(g_18, i_13);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm v_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_39);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_20);
          }
        else
          {
            t = x_20;
            {
              ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,f_40 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_40 = ATgetArgument(t, 0);
                  b_40 = ATgetArgument(t, 1);
                  c_40 = ATgetArgument(t, 2);
                  f_40 = ATgetArgument(t, 3);
                  t = c_40;
                  t = map_1_0(b_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_40 = ATgetArgument(t, 0);
                      b_40 = ATgetArgument(t, 1);
                      c_40 = ATgetArgument(t, 2);
                      f_40 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_40;
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
  ATerm q_40 = NULL;
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_40 = ATgetArgument(t, 0);
          {
            ATerm f_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_21);
      t = q_40;
    }
  else
    {
      t = c_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_40;
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm h_41 = NULL;
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_41 = ATgetArgument(t, 0);
          {
            ATerm i_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_21);
      t = h_41;
    }
  else
    {
      t = g_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_41;
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm m_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_41);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm n_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_21);
          }
        else
          {
            t = n_21;
            {
              ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_41 = ATgetArgument(t, 0);
                  q_41 = ATgetArgument(t, 1);
                  r_41 = ATgetArgument(t, 2);
                  s_41 = ATgetArgument(t, 3);
                  t = r_41;
                  t = map_1_0(g_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_41 = ATgetArgument(t, 0);
                      q_41 = ATgetArgument(t, 1);
                      r_41 = ATgetArgument(t, 2);
                      s_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_41;
                  t = map_1_0(q_7, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm b_42 = NULL;
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_42 = ATgetArgument(t, 0);
          {
            ATerm u_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_21);
      t = b_42;
    }
  else
    {
      t = q_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_42;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm z_42 = NULL;
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_42 = ATgetArgument(t, 0);
          {
            ATerm z_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_21);
      t = z_42;
    }
  else
    {
      t = x_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_42;
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm h_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_43);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm g_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_22);
          }
        else
          {
            t = g_22;
            {
              ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_43 = ATgetArgument(t, 0);
                  n_43 = ATgetArgument(t, 1);
                  o_43 = ATgetArgument(t, 2);
                  p_43 = ATgetArgument(t, 3);
                  t = o_43;
                  t = map_1_0(a_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_43 = ATgetArgument(t, 0);
                      n_43 = ATgetArgument(t, 1);
                      o_43 = ATgetArgument(t, 2);
                      p_43 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_43;
                  t = map_1_0(e_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm z_43 = NULL;
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_43 = ATgetArgument(t, 0);
          {
            ATerm m_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_22);
      t = z_43;
    }
  else
    {
      t = k_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_43;
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm o_44 = NULL;
  ATerm n_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_44 = ATgetArgument(t, 0);
          {
            ATerm q_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_22);
      t = o_44;
    }
  else
    {
      t = n_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_44;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm w_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_44);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            {
              ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,d_45 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  y_44 = ATgetArgument(t, 0);
                  z_44 = ATgetArgument(t, 1);
                  a_45 = ATgetArgument(t, 2);
                  d_45 = ATgetArgument(t, 3);
                  t = a_45;
                  t = map_1_0(w_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_44 = ATgetArgument(t, 0);
                      z_44 = ATgetArgument(t, 1);
                      a_45 = ATgetArgument(t, 2);
                      d_45 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_45;
                  t = map_1_0(y_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm z_45 = NULL;
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_45 = ATgetArgument(t, 0);
          {
            ATerm v_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_23);
      t = z_45;
    }
  else
    {
      t = c_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_45;
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm p_46 = NULL;
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_46 = ATgetArgument(t, 0);
          {
            ATerm y_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_23);
      t = p_46;
    }
  else
    {
      t = w_23;
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
ATerm Bind4_0_0 (ATerm t)
{
  ATerm t_39 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      t_39 = ATgetArgument(t, 0);
      t = t_39;
      t = free_vars_3_0(z_6, a_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          t_39 = ATgetArgument(t, 0);
          t = t_39;
          t = free_vars_3_0(e_7, f_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              t_39 = ATgetArgument(t, 0);
              t = t_39;
              t = free_vars_3_0(r_7, v_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  t_39 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = t_39;
              t = free_vars_3_0(f_8, r_8, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm u_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_47);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm b_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_24);
          }
        else
          {
            t = b_24;
            {
              ATerm z_47 = NULL,a_48 = NULL,c_48 = NULL,d_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  z_47 = ATgetArgument(t, 0);
                  a_48 = ATgetArgument(t, 1);
                  c_48 = ATgetArgument(t, 2);
                  d_48 = ATgetArgument(t, 3);
                  t = c_48;
                  t = map_1_0(b_9, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_47 = ATgetArgument(t, 0);
                      a_48 = ATgetArgument(t, 1);
                      c_48 = ATgetArgument(t, 2);
                      d_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_48;
                  t = map_1_0(c_9, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm s_48 = NULL;
  ATerm e_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_48 = ATgetArgument(t, 0);
          {
            ATerm h_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_24);
      t = s_48;
    }
  else
    {
      t = e_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_48;
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm i_49 = NULL;
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_49 = ATgetArgument(t, 0);
          {
            ATerm m_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_24);
      t = i_49;
    }
  else
    {
      t = j_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_49;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm b_47 = NULL,j_47 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_47 = ATgetArgument(t, 0);
      t = j_47;
      if(match_cons(t, sym_Rule_3))
        {
          b_47 = ATgetArgument(t, 0);
          {
            ATerm o_24 = ATgetArgument(t, 1);
          }
          {
            ATerm r_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = b_47;
      t = free_vars_3_0(z_8, a_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_47 = ATgetArgument(t, 0);
          {
            ATerm s_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_47;
    }
  return(t);
}
static ATerm s_7 (ATerm z_95 (ATerm), ATerm o_47, ATerm n_47, ATerm t)
{
  static ATerm d_51 (ATerm t)
  {
    ATerm r_50 = NULL,u_50 = NULL,v_50 = NULL;
    r_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_47;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_50 = ATgetFirst((ATermList) t);
            v_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_24 = t;
          int u_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_50;
              {
                static ATerm j_9 (ATerm t)
                {
                  t = n_47;
                  return(t);
                }
                t = t_7(z_95, j_9, u_50, v_50, t);
              }
              t = d_51(t);
              LocalPopChoice(u_24);
            }
          else
            {
              t = t_24;
              {
                ATerm l_14 = NULL,p_14 = NULL,l_19 = NULL;
                t = SSLgetAnnotations(r_50);
                l_14 = t;
                t = v_50;
                t = d_51(t);
                p_14 = t;
                t = (ATerm) ATinsert(CheckATermList(p_14), u_50);
                l_19 = t;
                t = SSLsetAnnotations(l_19, l_14);
              }
            }
        }
      }
    return(t);
  }
  t = o_47;
  t = d_51(t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,n_51 = NULL,o_51 = NULL;
  l_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_51;
      t = p_98(t);
    }
  else
    {
      ATerm v_51 = NULL,z_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_51 = ATgetFirst((ATermList) t);
          o_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_51;
      t = r_98(t);
      v_51 = t;
      t = o_51;
      t = foldr_3_0(p_98, q_98, r_98, t);
      z_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_51, z_51);
      t = q_98(t);
    }
  return(t);
}
static ATerm t_7 (ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm s_47, ATerm r_47, ATerm t)
{
  t = d_96(t);
  {
    static ATerm k_9 (ATerm t)
    {
      ATerm j_52 = NULL;
      j_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_47, j_52);
      t = c_96(t);
      return(t);
    }
    t = fetch_1_0(k_9, t);
  }
  t = r_47;
  return(t);
}
static ATerm u_7 (ATerm u_95 (ATerm), ATerm m_47, ATerm l_47, ATerm t)
{
  static ATerm o_53 (ATerm t)
  {
    ATerm f_53 = NULL,g_53 = NULL,j_53 = NULL;
    f_53 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_53;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_53 = ATgetFirst((ATermList) t);
            j_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_24 = t;
          int x_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_53;
              {
                static ATerm m_9 (ATerm t)
                {
                  t = l_47;
                  return(t);
                }
                t = t_7(u_95, m_9, g_53, j_53, t);
              }
              t = o_53(t);
              LocalPopChoice(x_24);
            }
          else
            {
              t = w_24;
              {
                ATerm x_14 = NULL,a_15 = NULL,o_21 = NULL;
                t = SSLgetAnnotations(f_53);
                x_14 = t;
                t = j_53;
                t = o_53(t);
                a_15 = t;
                t = (ATerm) ATinsert(CheckATermList(a_15), g_53);
                o_21 = t;
                t = SSLsetAnnotations(o_21, x_14);
              }
            }
        }
      }
    return(t);
  }
  t = m_47;
  t = o_53(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  static ATerm d_55 (ATerm t)
  {
    ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
    c_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_55 = ATgetFirst((ATermList) t);
        b_55 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_15 = NULL,y_15 = NULL,r_25 = NULL;
          t = SSLgetAnnotations(c_55);
          t_15 = t;
          t = b_55;
          t = d_55(t);
          y_15 = t;
          t = (ATerm) ATinsert(CheckATermList(y_15), a_55);
          r_25 = t;
          t = SSLsetAnnotations(r_25, t_15);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_55;
        t = l_92(t);
      }
    return(t);
  }
  t = d_55(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL;
  w_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_53;
    }
  else
    {
      static ATerm n_9 (ATerm t)
      {
        t = not_null(y_53);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_53 = ATgetFirst((ATermList) t);
          if(((y_53 != NULL) && (y_53 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_53;
      t = at_end_1_0(n_9, t);
    }
  return(t);
}
static ATerm x_55 (ATerm i_55, ATerm t)
{
  ATerm k_55 = NULL;
  t = SSL_explode_term(i_55);
  if(match_cons(t, sym__2))
    {
      ATerm y_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_55;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,u_55 = NULL;
  u_55 = t;
  if(match_cons(t, sym__2))
    {
      m_55 = ATgetArgument(t, 0);
      n_55 = ATgetArgument(t, 1);
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_9 (ATerm t)
            {
              t = n_55;
              return(t);
            }
            t = m_55;
            t = at_end_1_0(o_9, t);
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            t = x_55(u_55, t);
          }
      }
    }
  else
    {
      t = x_55(u_55, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t)
{
  static ATerm t_56 (ATerm t)
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_93(t);
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        {
          ATerm z_55 = NULL,c_56 = NULL,j_56 = NULL,k_56 = NULL,n_56 = NULL,p_56 = NULL,t_25 = NULL;
          t = z_93(t);
          p_56 = t;
          if(match_cons(t, sym__2))
            {
              c_56 = ATgetArgument(t, 0);
              j_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_56);
          z_55 = t;
          t = c_56;
          t = b_94(t);
          k_56 = t;
          t = j_56;
          t = t_56(t);
          n_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_56, n_56);
          t_25 = t;
          t = SSLsetAnnotations(t_25, z_55);
          t = a_94(t);
        }
      }
    return(t);
  }
  t = t_56(t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      if(((ATgetType(f_25) != AT_LIST) || !(ATisEmpty(f_25))))
        _fail(t);
      {
        ATerm g_25 = ATgetArgument(t, 1);
        if(((ATgetType(g_25) != AT_LIST) || !(ATisEmpty(g_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_25 = ATgetArgument(t, 0);
      if(((ATgetType(h_25) == AT_LIST) && !(ATisEmpty(h_25))))
        {
          f_57 = ATgetFirst((ATermList) h_25);
          g_57 = (ATerm) ATgetNext((ATermList) h_25);
        }
      else
        _fail(t);
      {
        ATerm l_25 = ATgetArgument(t, 1);
        if(((ATgetType(l_25) == AT_LIST) && !(ATisEmpty(l_25))))
          {
            h_57 = ATgetFirst((ATermList) l_25);
            i_57 = (ATerm) ATgetNext((ATermList) l_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_57, h_57), (ATerm) ATmakeAppl(sym__2, g_57, i_57));
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm j_57 = NULL,m_57 = NULL;
  if(match_cons(t, sym__2))
    {
      j_57 = ATgetArgument(t, 0);
      m_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_57), j_57);
  return(t);
}
static ATerm z_7 (ATerm j_607, ATerm o_607, ATerm i_59, ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL;
  t = SSL_explode_term(o_607);
  if(match_cons(t, sym__2))
    {
      a_57 = ATgetArgument(t, 0);
      c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_607);
  if(match_cons(t, sym__2))
    {
      if((a_57 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_57, c_57);
  t = genzip_4_0(p_9, q_9, r_9, _id, t);
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_57, i_59);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm t)
{
  static ATerm q_57 (ATerm t)
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_89(t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = v_89(t);
        t = q_57(t);
      }
    return(t);
  }
  t = q_57(t);
  return(t);
}
ATerm for_3_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm z_89 (ATerm), ATerm t)
{
  t = x_89(t);
  t = while_not_2_0(y_89, z_89, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm i_58 = NULL;
  i_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_58);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL,r_58 = NULL,c_26 = NULL;
  r_58 = t;
  if(match_cons(t, sym__2))
    {
      m_58 = ATgetArgument(t, 0);
      n_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_58);
  l_58 = t;
  t = n_58;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_58, n_58);
  c_26 = t;
  t = SSLsetAnnotations(c_26, l_58);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm h_60 = NULL,j_60 = NULL,k_60 = NULL,n_60 = NULL,o_60 = NULL;
  h_60 = t;
  if(match_cons(t, sym__2))
    {
      j_60 = ATgetArgument(t, 0);
      k_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_60 = ATgetFirst((ATermList) t);
      o_60 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_61(j_60, k_60, h_60, t);
            LocalPopChoice(s_25);
          }
        else
          {
            t = q_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_60), n_60), o_60);
          }
      }
    }
  else
    {
      t = j_61(j_60, k_60, h_60, t);
    }
  return(t);
}
static ATerm j_61 (ATerm v_58, ATerm w_58, ATerm y_58, ATerm t)
{
  ATerm e_59 = NULL,m_59 = NULL,d_26 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  t = SSLgetAnnotations(y_58);
  e_59 = t;
  t = w_58;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_59 = ATgetFirst((ATermList) t);
      s_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_59;
  if(match_cons(t, sym__2))
    {
      q_59 = ATgetArgument(t, 0);
      r_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_59;
        if((q_59 != t))
          {
            _fail(t);
          }
        t = s_59;
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        t = w_58;
        t = z_7(q_59, r_59, s_59, t);
      }
  }
  m_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_58, m_59);
  d_26 = t;
  t = SSLsetAnnotations(d_26, e_59);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm i_61 = NULL;
  if(match_cons(t, sym__2))
    {
      i_61 = ATgetArgument(t, 0);
      if((i_61 != ATgetArgument(t, 1)))
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
  ATerm b_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_9, y_9, z_9, t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = b_26;
      {
        ATerm z_60 = NULL,a_61 = NULL,f_61 = NULL;
        z_60 = t;
        if(match_cons(t, sym__2))
          {
            a_61 = ATgetArgument(t, 0);
            f_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_60;
        t = u_7(b_10, a_61, f_61, t);
      }
    }
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(j_10, c_17, d_17, t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm e_17 = NULL;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      if((e_17 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm o_17 = NULL,q_17 = NULL;
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(o_10, o_17, q_17, t);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      r_17 = ATgetArgument(t, 0);
      if((r_17 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm v_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm n_62 (ATerm t)
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_111(t);
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        {
          ATerm h_26 = t;
          int i_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_61 = NULL,u_61 = NULL,n_16 = NULL,o_16 = NULL;
              s_61 = t;
              t = u_111(t);
              u_61 = t;
              t = s_61;
              {
                static ATerm c_10 (ATerm t)
                {
                  ATerm a_62 = NULL;
                  t = n_62(t);
                  a_62 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_62, u_61);
                  t = diff_0_0(t);
                  return(t);
                }
                t = v_111(c_10, n_62, d_10, t);
              }
              o_16 = t;
              t = SSL_explode_term(o_16);
              if(match_cons(t, sym__2))
                {
                  ATerm n_26 = ATgetArgument(t, 0);
                  n_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_16;
              t = foldr_3_0(g_10, i_10, _id, t);
              LocalPopChoice(i_26);
            }
          else
            {
              t = h_26;
              {
                ATerm h_17 = NULL,i_17 = NULL;
                i_17 = t;
                t = SSL_explode_term(i_17);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_26 = ATgetArgument(t, 0);
                    h_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_17;
                t = foldr_3_0(k_10, m_10, n_62, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_62(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm c_64 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_64);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            {
              ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  f_64 = ATgetArgument(t, 0);
                  g_64 = ATgetArgument(t, 1);
                  h_64 = ATgetArgument(t, 2);
                  i_64 = ATgetArgument(t, 3);
                  t = h_64;
                  t = map_1_0(v_10, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_64 = ATgetArgument(t, 0);
                      g_64 = ATgetArgument(t, 1);
                      h_64 = ATgetArgument(t, 2);
                      i_64 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_64;
                  t = map_1_0(w_10, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm z_64 = NULL;
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_64 = ATgetArgument(t, 0);
          {
            ATerm g_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_27);
      t = z_64;
    }
  else
    {
      t = e_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_64;
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm r_65 = NULL;
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_65 = ATgetArgument(t, 0);
          {
            ATerm m_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_27);
      t = r_65;
    }
  else
    {
      t = k_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_65;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm b_63 = NULL,f_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,u_63 = NULL,v_63 = NULL,x_63 = NULL,h_27 = NULL,o_26 = NULL;
  x_63 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_63 = ATgetArgument(t, 0);
      u_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_63);
  p_63 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, q_63, u_63);
  o_26 = t;
  t = SSLsetAnnotations(o_26, p_63);
  v_63 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_63 = ATgetArgument(t, 0);
      {
        ATerm n_27 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_63;
  t = free_vars_3_0(p_10, q_10, tboundin_3_0, t);
  b_63 = t;
  t = undefine_unbound_MarkVar_0_1(b_63, t);
  f_63 = t;
  t = v_63;
  if(match_cons(t, sym_Let_2))
    {
      j_63 = ATgetArgument(t, 0);
      k_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_63);
  i_63 = t;
  t = j_63;
  {
    static ATerm x_10 (ATerm t)
    {
      ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL;
      u_65 = t;
      t = term_w_14;
      w_65 = t;
      t = SSL_table_destroy(w_65);
      t = term_w_14;
      v_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_14, f_63);
      t = o_7(v_65, f_63, t);
      t = u_65;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(x_10, t);
  }
  l_63 = t;
  t = term_w_14;
  o_63 = t;
  t = SSL_table_destroy(o_63);
  t = term_w_14;
  n_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_14, f_63);
  t = o_7(n_63, f_63, t);
  t = k_63;
  t = mark_buv_0_0(t);
  m_63 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, l_63, m_63);
  h_27 = t;
  t = SSLsetAnnotations(h_27, i_63);
  return(t);
}
static ATerm b_8 (ATerm k_82 (ATerm), ATerm f_24, ATerm d_24, ATerm t)
{
  ATerm z_65 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,k_66 = NULL,l_66 = NULL;
  d_66 = t;
  t = k_82(t);
  z_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_65, f_24, d_24);
  t = t_8(z_65, f_24, d_24, t);
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_66 = NULL;
        t = term_s_27;
        m_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_65, term_s_27);
        t = s_8(z_65, m_66, t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_66 = ATgetFirst((ATermList) t);
      c_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_s_27;
  k_66 = t;
  t = (ATerm) ATinsert(CheckATermList(c_66), (ATerm) ATinsert(CheckATermList(b_66), f_24));
  l_66 = t;
  t = SSL_table_put(z_65, k_66, l_66);
  t = d_66;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
  s_66 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_66);
  t_66 = t;
  t = term_v_27;
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, s_66), term_v_27);
  t = b_8(y_10, t_66, u_66, t);
  t = s_66;
  return(t);
}
static ATerm c_8 (ATerm o_25, ATerm p_25, ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL;
  w_66 = t;
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_25, p_25);
        t = s_8(o_25, p_25, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_28 = ATgetFirst((ATermList) t);
            v_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_27);
        t = SSL_table_put(o_25, p_25, v_66);
        t = (ATerm) ATmakeAppl(sym__3, o_25, p_25, v_66);
      }
    else
      {
        t = w_27;
        t = SSL_table_remove(o_25, p_25);
        t = (ATerm) ATmakeAppl(sym__2, o_25, p_25);
      }
  }
  t = w_66;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_82 (ATerm), ATerm t)
{
  ATerm x_66 = NULL,y_66 = NULL,b_67 = NULL,d_67 = NULL,e_67 = NULL;
  d_67 = t;
  t = h_82(t);
  b_67 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_67 = NULL;
        t = term_s_27;
        f_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_67, term_s_27);
        t = s_8(b_67, f_67, t);
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_66 = ATgetFirst((ATermList) t);
      x_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_s_27;
  e_67 = t;
  t = SSL_table_put(b_67, e_67, x_66);
  t = y_66;
  {
    static ATerm z_10 (ATerm t)
    {
      ATerm j_67 = NULL;
      j_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_67, j_67);
      t = c_8(b_67, j_67, t);
      return(t);
    }
    t = map_1_0(z_10, t);
  }
  t = d_67;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_100(t);
      t = t_100(t);
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      t = t_100(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL;
  o_67 = t;
  t = g_82(t);
  n_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_67, term_s_27);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_67 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_28 = ATgetArgument(t, 0);
            ATerm r_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_27;
        v_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_67, term_s_27);
        t = s_8(n_67, v_67, t);
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATempty;
      }
  }
  p_67 = t;
  t = term_s_27;
  q_67 = t;
  t = (ATerm) ATinsert(CheckATermList(p_67), (ATerm) ATempty);
  r_67 = t;
  t = SSL_table_put(n_67, q_67, r_67);
  t = o_67;
  return(t);
}
ATerm scope_2_0 (ATerm i_82 (ATerm), ATerm j_82 (ATerm), ATerm t)
{
  static ATerm e_11 (ATerm t)
  {
    t = end_scope_1_0(i_82, t);
    return(t);
  }
  t = begin_scope_1_0(i_82, t);
  t = restore_always_2_0(j_82, e_11, t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,x_29 = NULL;
  a_68 = t;
  if(match_cons(t, sym_Scope_2))
    {
      x_67 = ATgetArgument(t, 0);
      y_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_68);
  w_67 = t;
  t = y_67;
  {
    static ATerm i_11 (ATerm t)
    {
      ATerm b_68 = NULL;
      b_68 = t;
      t = x_67;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = b_68;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(h_11, i_11, t);
  }
  z_67 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, x_67, z_67);
  x_29 = t;
  t = SSLsetAnnotations(x_29, w_67);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,b_30 = NULL;
      e_68 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_68);
      c_68 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_68);
      b_30 = t;
      t = SSLsetAnnotations(b_30, c_68);
      LocalPopChoice(t_28);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = s_28;
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,c_30 = NULL;
            i_68 = t;
            if(match_cons(t, sym_App_2))
              {
                g_68 = ATgetArgument(t, 0);
                h_68 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_68);
            f_68 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, g_68, h_68);
            c_30 = t;
            t = SSLsetAnnotations(c_30, f_68);
            LocalPopChoice(v_28);
            {
              ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,d_30 = NULL;
              o_68 = t;
              if(match_cons(t, sym_App_2))
                {
                  k_68 = ATgetArgument(t, 0);
                  l_68 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_68);
              j_68 = t;
              t = k_68;
              t = mark_buv_0_0(t);
              m_68 = t;
              t = l_68;
              t = mark_build_vars_0_0(t);
              n_68 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, m_68, n_68);
              d_30 = t;
              t = SSLsetAnnotations(d_30, j_68);
            }
          }
        else
          {
            t = u_28;
            {
              ATerm w_28 = t;
              int x_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,e_30 = NULL;
                  r_68 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      q_68 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_68);
                  p_68 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, q_68);
                  e_30 = t;
                  t = SSLsetAnnotations(e_30, p_68);
                  LocalPopChoice(x_28);
                  {
                    ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,f_30 = NULL;
                    v_68 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        t_68 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(v_68);
                    s_68 = t;
                    t = t_68;
                    t = mark_buv_0_0(t);
                    u_68 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, u_68);
                    f_30 = t;
                    t = SSLsetAnnotations(f_30, s_68);
                  }
                }
              else
                {
                  t = w_28;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_8 (ATerm w_25, ATerm x_25, ATerm y_25, ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL;
  x_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_25, x_25);
  t = s_8(w_25, x_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_28 = ATgetFirst((ATermList) t);
      w_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_68), y_25);
  y_68 = t;
  t = SSL_table_put(w_25, x_25, y_68);
  t = x_68;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL;
  z_68 = t;
  t = term_w_14;
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_68);
  b_69 = t;
  t = term_a_29;
  c_69 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_14, (ATerm)ATmakeAppl(sym_Var_1, z_68), term_a_29);
  t = d_8(a_69, b_69, c_69, t);
  t = z_68;
  return(t);
}
static ATerm g_8 (ATerm u_25, ATerm v_25, ATerm t)
{
  ATerm d_69 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_25, v_25);
  t = s_8(u_25, v_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_69 = ATgetFirst((ATermList) t);
      {
        ATerm b_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_69;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL;
  i_70 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,k_19 = NULL;
        t = term_w_14;
        k_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_14, i_70);
        t = g_8(k_19, i_70, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_29) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            a_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, j_70);
        b_19 = t;
        t = (ATerm) ATinsert(ATempty, a_19);
        c_19 = t;
        t = SSLsetAnnotations(b_19, c_19);
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        {
          ATerm g_29 = t;
          int h_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,l_20 = NULL;
              t = term_w_14;
              l_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_w_14, i_70);
              t = g_8(l_20, i_70, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm i_29 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_29) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  c_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, j_70);
              d_20 = t;
              t = (ATerm) ATinsert(ATempty, c_20);
              e_20 = t;
              t = SSLsetAnnotations(d_20, e_20);
              LocalPopChoice(h_29);
            }
          else
            {
              t = g_29;
              {
                ATerm z_20 = NULL,a_21 = NULL,e_21 = NULL,l_21 = NULL;
                t = term_w_14;
                l_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_14, i_70);
                t = g_8(l_21, i_70, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm j_29 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_29) != ATmakeSymbol("c_0", 0, ATtrue)))
                      _fail(t);
                    z_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, j_70);
                a_21 = t;
                t = (ATerm) ATinsert(ATempty, z_20);
                e_21 = t;
                t = SSLsetAnnotations(a_21, e_21);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,v_30 = NULL;
  ATerm m_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(o_29);
    }
  else
    {
      t = m_29;
    }
  r_70 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_70);
  o_70 = t;
  t = p_70;
  t = DeclareBound_0_0(t);
  q_70 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_70);
  v_30 = t;
  t = SSLsetAnnotations(v_30, o_70);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL,x_30 = NULL;
      w_70 = t;
      if(match_cons(t, sym_Var_1))
        {
          v_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_70);
      u_70 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, v_70);
      x_30 = t;
      t = SSLsetAnnotations(x_30, u_70);
      LocalPopChoice(q_29);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = p_29;
      {
        ATerm s_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,y_30 = NULL;
            a_71 = t;
            if(match_cons(t, sym_App_2))
              {
                y_70 = ATgetArgument(t, 0);
                z_70 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_71);
            x_70 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, y_70, z_70);
            y_30 = t;
            t = SSLsetAnnotations(y_30, x_70);
            LocalPopChoice(w_29);
            {
              ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,f_31 = NULL;
              g_71 = t;
              if(match_cons(t, sym_App_2))
                {
                  c_71 = ATgetArgument(t, 0);
                  d_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_71);
              b_71 = t;
              t = c_71;
              t = mark_buv_0_0(t);
              e_71 = t;
              t = d_71;
              t = mark_build_vars_0_0(t);
              f_71 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, e_71, f_71);
              f_31 = t;
              t = SSLsetAnnotations(f_31, b_71);
            }
          }
        else
          {
            t = s_29;
            {
              ATerm a_30 = t;
              int g_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL,g_31 = NULL;
                  j_71 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      i_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_71);
                  h_71 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, i_71);
                  g_31 = t;
                  t = SSLsetAnnotations(g_31, h_71);
                  LocalPopChoice(g_30);
                  {
                    ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,h_31 = NULL;
                    n_71 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        l_71 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(n_71);
                    k_71 = t;
                    t = l_71;
                    t = mark_buv_0_0(t);
                    m_71 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, m_71);
                    h_31 = t;
                    t = SSLsetAnnotations(h_31, k_71);
                  }
                }
              else
                {
                  t = a_30;
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
  ATerm h_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_72 = NULL,j_72 = NULL;
      i_72 = t;
      if(match_cons(t, sym_Match_1))
        {
          j_72 = ATgetArgument(t, 0);
          {
            ATerm t_21 = NULL,v_21 = NULL,n_31 = NULL;
            t = SSLgetAnnotations(i_72);
            t_21 = t;
            t = j_72;
            t = mark_match_vars_0_0(t);
            v_21 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, v_21);
            n_31 = t;
            t = SSLsetAnnotations(n_31, t_21);
          }
        }
      else
        {
          ATerm c_22 = NULL,i_22 = NULL,o_31 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              j_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_72);
          c_22 = t;
          t = j_72;
          t = mark_build_vars_0_0(t);
          i_22 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, i_22);
          o_31 = t;
          t = SSLsetAnnotations(o_31, c_22);
        }
      LocalPopChoice(m_30);
    }
  else
    {
      t = h_30;
      {
        ATerm n_30 = t;
        int s_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(s_30);
          }
        else
          {
            t = n_30;
            {
              ATerm t_30 = t;
              int w_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(w_30);
                }
              else
                {
                  t = t_30;
                  {
                    ATerm z_30 = t;
                    int b_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(b_31);
                      }
                    else
                      {
                        t = z_30;
                        {
                          ATerm c_31 = t;
                          int d_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL;
                              k_72 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  l_72 = ATgetArgument(t, 0);
                                  m_72 = ATgetArgument(t, 1);
                                  n_72 = ATgetArgument(t, 2);
                                  o_72 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = k_72;
                              t = m_7(l_72, m_72, n_72, o_72, t);
                              LocalPopChoice(d_31);
                            }
                          else
                            {
                              t = c_31;
                              {
                                ATerm i_31 = t;
                                int j_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(j_31);
                                  }
                                else
                                  {
                                    t = i_31;
                                    {
                                      ATerm k_31 = t;
                                      int l_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL;
                                          w_72 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              x_72 = ATgetArgument(t, 0);
                                              t = x_72;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  t_72 = ATgetArgument(t, 0);
                                                  u_72 = ATgetArgument(t, 1);
                                                  v_72 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = w_72;
                                              t = l_7(t_72, u_72, v_72, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  x_72 = ATgetArgument(t, 0);
                                                  t = x_72;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      t_72 = ATgetArgument(t, 0);
                                                      u_72 = ATgetArgument(t, 1);
                                                      v_72 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = w_72;
                                                  t = k_7(t_72, u_72, v_72, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      x_72 = ATgetArgument(t, 0);
                                                      y_72 = ATgetArgument(t, 1);
                                                      z_72 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = w_72;
                                                  t = j_7(x_72, y_72, z_72, t);
                                                }
                                            }
                                          LocalPopChoice(l_31);
                                        }
                                      else
                                        {
                                          t = k_31;
                                          {
                                            ATerm m_31 = t;
                                            int p_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(p_31);
                                              }
                                            else
                                              {
                                                t = m_31;
                                                {
                                                  ATerm q_31 = t;
                                                  int u_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(u_31);
                                                    }
                                                  else
                                                    {
                                                      t = q_31;
                                                      {
                                                        ATerm v_31 = t;
                                                        int w_31 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm j_73 = NULL;
                                                            j_73 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm b_32 = ATgetArgument(t, 0);
                                                                ATerm c_32 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = j_73;
                                                            t = i_7(t);
                                                            LocalPopChoice(w_31);
                                                          }
                                                        else
                                                          {
                                                            t = v_31;
                                                            {
                                                              ATerm d_32 = t;
                                                              int e_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(e_32);
                                                                }
                                                              else
                                                                {
                                                                  t = d_32;
                                                                  {
                                                                    ATerm h_32 = t;
                                                                    int k_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(k_32);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_32;
                                                                        {
                                                                          ATerm n_32 = t;
                                                                          int o_32 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(o_32);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_32;
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
static ATerm j_11 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
  w_73 = t;
  t = term_n_14;
  x_73 = t;
  t = (ATerm) ATinsert(ATempty, term_q_32);
  y_73 = t;
  t = SSL_printnl(x_73, y_73);
  t = w_73;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,r_31 = NULL;
  c_74 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_74);
  z_73 = t;
  t = a_74;
  t = map_1_0(mark_buv_0_0, t);
  b_74 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_74);
  r_31 = t;
  t = SSLsetAnnotations(r_31, z_73);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
  d_74 = t;
  t = term_n_14;
  e_74 = t;
  t = (ATerm) ATinsert(ATempty, term_s_32);
  f_74 = t;
  t = SSL_printnl(e_74, f_74);
  t = d_74;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,v_73 = NULL,t_31 = NULL,s_31 = NULL;
  t = if_verbose4_1_0(j_11, t);
  v_73 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_73);
  o_73 = t;
  t = p_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_73 = ATgetFirst((ATermList) t);
      s_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_73);
  q_73 = t;
  t = s_73;
  t = Cons_2_0(n_11, o_11, t);
  t_73 = t;
  t = (ATerm) ATinsert(CheckATermList(t_73), r_73);
  s_31 = t;
  t = SSLsetAnnotations(s_31, q_73);
  u_73 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, u_73);
  t_31 = t;
  t = SSLsetAnnotations(t_31, o_73);
  t = if_verbose4_1_0(q_11, t);
  return(t);
}
static ATerm j_8 (ATerm o_33, ATerm p_33, ATerm t)
{
  ATerm g_74 = NULL;
  t = SSL_fputc(o_33, p_33);
  g_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_74);
  return(t);
}
static ATerm k_8 (ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm h_74 = NULL;
  t = SSL_write_term_to_stream_text(z_38, a_39);
  h_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_74);
  return(t);
}
static ATerm m_8 (ATerm s_90 (ATerm), ATerm p_320, ATerm d_39, ATerm t)
{
  ATerm i_74 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_320, term_u_32);
  t = p_8(t);
  i_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_74, d_39);
  t = s_90(t);
  t = fclose_0_0(t);
  t = d_39;
  return(t);
}
static ATerm l_8 (ATerm v_38, ATerm w_38, ATerm t)
{
  ATerm j_74 = NULL;
  t = SSL_write_term_to_stream_baf(v_38, w_38);
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_74);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_32 = ATgetArgument(t, 0);
      if(match_cons(w_32, sym_Stream_1))
        {
          v_22 = ATgetArgument(w_32, 0);
        }
      else
        _fail(t);
      w_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_8(v_22, w_22, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm k_23 = NULL,m_23 = NULL,o_23 = NULL,q_23 = NULL,u_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      if(match_cons(y_32, sym_Stream_1))
        {
          q_23 = ATgetArgument(y_32, 0);
        }
      else
        _fail(t);
      u_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8(q_23, u_23, t);
  k_23 = t;
  t = term_a_33;
  m_23 = t;
  t = k_23;
  if(match_cons(t, sym_Stream_1))
    {
      o_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_33, k_23);
  t = j_8(m_23, o_23, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,x_75 = NULL,y_75 = NULL,y_31 = NULL,x_31 = NULL;
  o_74 = t;
  if(match_cons(t, sym__2))
    {
      v_74 = ATgetArgument(t, 0);
      w_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_74);
  u_74 = t;
  t = v_74;
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_11 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((n_74 != NULL) && (n_74 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(r_11, t);
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = term_e_33;
        n_74 = t;
      }
  }
  x_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_74, w_74);
  x_31 = t;
  t = SSLsetAnnotations(x_31, u_74);
  t = o_74;
  if(match_cons(t, sym__2))
    {
      q_74 = ATgetArgument(t, 0);
      r_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_74);
  p_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_74, (ATerm) ATmakeAppl(sym__2, not_null(n_74), r_74));
  y_31 = t;
  t = SSLsetAnnotations(y_31, p_74);
  t_74 = t;
  if(match_cons(t, sym__2))
    {
      x_75 = ATgetArgument(t, 0);
      y_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,z_31 = NULL;
        t = SSLgetAnnotations(t_74);
        o_22 = t;
        t = x_75;
        t = fetch_1_0(s_11, t);
        r_22 = t;
        t = y_75;
        if(match_cons(t, sym__2))
          {
            t_22 = ATgetArgument(t, 0);
            u_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_8(t_11, t_22, u_22, t);
        s_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_22, s_22);
        z_31 = t;
        t = SSLsetAnnotations(z_31, o_22);
        LocalPopChoice(g_33);
      }
    else
      {
        t = f_33;
        {
          ATerm b_23 = NULL,e_23 = NULL,g_23 = NULL,i_23 = NULL,a_32 = NULL;
          t = SSLgetAnnotations(t_74);
          b_23 = t;
          t = y_75;
          if(match_cons(t, sym__2))
            {
              g_23 = ATgetArgument(t, 0);
              i_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_8(u_11, g_23, i_23, t);
          e_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_75, e_23);
          a_32 = t;
          t = SSLsetAnnotations(a_32, b_23);
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
ATerm apply_strategy_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL;
  f_76 = t;
  t = dtime_0_0(t);
  t = f_76;
  t = g_105(t);
  e_76 = t;
  t = dtime_0_0(t);
  b_76 = t;
  t = e_76;
  if(match_cons(t, sym__2))
    {
      c_76 = ATgetArgument(t, 0);
      d_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_76), (ATerm) ATmakeAppl(sym_Runtime_1, b_76)), d_76);
  return(t);
}
static ATerm t_76 (ATerm n_76, ATerm t)
{
  t = SSL_fclose(n_76);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL;
  r_76 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_76 = ATgetArgument(t, 0);
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_76);
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            t = t_76(r_76, t);
          }
      }
    }
  else
    {
      t = t_76(r_76, t);
    }
  return(t);
}
static ATerm n_8 (ATerm b_39, ATerm t)
{
  t = SSL_read_term_from_stream(b_39);
  return(t);
}
static ATerm o_8 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm u_76 = NULL;
  t = SSL_fopen(q_33, r_33);
  u_76 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_76);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_76 = NULL;
  t = SSL_stdin_stream();
  v_76 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_76);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_76 = NULL;
  t = SSL_stdout_stream();
  w_76 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_76);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_76 = NULL;
  t = SSL_stderr_stream();
  x_76 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_76);
  return(t);
}
static ATerm e_78 (ATerm d_77, ATerm t)
{
  ATerm e_77 = NULL;
  t = SSL_explode_term(d_77);
  if(match_cons(t, sym__2))
    {
      ATerm j_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_33 = ATgetArgument(t, 1);
        if(((ATgetType(k_33) == AT_LIST) && !(ATisEmpty(k_33))))
          {
            e_77 = ATgetFirst((ATermList) k_33);
            {
              ATerm l_33 = (ATerm) ATgetNext((ATermList) k_33);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_77;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_77;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_77;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_77;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_78 (ATerm h_77, ATerm i_77, ATerm j_77, ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL,p_77 = NULL,f_32 = NULL;
  t = SSLgetAnnotations(j_77);
  m_77 = t;
  t = h_77;
  if(match_cons(t, sym_Path_1))
    {
      p_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_77, i_77);
  f_32 = t;
  t = SSLsetAnnotations(f_32, m_77);
  if(match_cons(t, sym__2))
    {
      k_77 = ATgetArgument(t, 0);
      l_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(k_77, l_77, t);
  return(t);
}
static ATerm g_78 (ATerm r_77, ATerm s_77, ATerm t_77, ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL,z_77 = NULL,g_32 = NULL;
  t = SSLgetAnnotations(t_77);
  w_77 = t;
  t = SSL_is_string(r_77);
  z_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_77, s_77);
  g_32 = t;
  t = SSLsetAnnotations(g_32, w_77);
  if(match_cons(t, sym__2))
    {
      u_77 = ATgetArgument(t, 0);
      v_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_8(u_77, v_77, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
  b_78 = t;
  if(match_cons(t, sym__2))
    {
      c_78 = ATgetArgument(t, 0);
      d_78 = ATgetArgument(t, 1);
      {
        ATerm m_33 = t;
        int n_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_78(b_78, t);
            LocalPopChoice(n_33);
          }
        else
          {
            t = m_33;
            {
              ATerm s_33 = t;
              int t_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_78(c_78, d_78, b_78, t);
                  LocalPopChoice(t_33);
                }
              else
                {
                  t = s_33;
                  t = g_78(c_78, d_78, b_78, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_78(b_78, t);
    }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_u_33;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL;
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_78 = NULL;
      k_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_78, term_x_33);
      t = p_8(t);
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      t = debug_1_0(v_11, t);
      _fail(t);
    }
  i_78 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(j_78, t);
  h_78 = t;
  t = i_78;
  t = fclose_0_0(t);
  t = h_78;
  return(t);
}
ATerm fetch_1_0 (ATerm f_92 (ATerm), ATerm t)
{
  static ATerm i_79 (ATerm t)
  {
    ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL;
    f_79 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_79 = ATgetFirst((ATermList) t);
        h_79 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_33 = t;
      int z_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_24 = NULL,l_24 = NULL,l_32 = NULL;
          t = SSLgetAnnotations(f_79);
          i_24 = t;
          t = g_79;
          t = f_92(t);
          l_24 = t;
          t = (ATerm) ATinsert(CheckATermList(h_79), l_24);
          l_32 = t;
          t = SSLsetAnnotations(l_32, i_24);
          LocalPopChoice(z_33);
        }
      else
        {
          t = y_33;
          {
            ATerm b_25 = NULL,e_25 = NULL,m_32 = NULL;
            t = SSLgetAnnotations(f_79);
            b_25 = t;
            t = h_79;
            t = i_79(t);
            e_25 = t;
            t = (ATerm) ATinsert(CheckATermList(e_25), g_79);
            m_32 = t;
            t = SSLsetAnnotations(m_32, b_25);
          }
        }
    }
    return(t);
  }
  t = i_79(t);
  return(t);
}
static ATerm i_8 (ATerm i_32, ATerm j_32, ATerm t)
{
  t = SSL_strcat(i_32, j_32);
  return(t);
}
ATerm debug_1_0 (ATerm q_90 (ATerm), ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL;
  l_79 = t;
  t = q_90(t);
  m_79 = t;
  t = term_n_14;
  n_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_79), m_79);
  o_79 = t;
  t = SSL_printnl(n_79, o_79);
  t = l_79;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
    }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_c_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_79 = NULL;
      v_79 = t;
      t = SSL_is_string(v_79);
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(w_11, t);
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            {
              ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL;
              b_80 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_80 = ATgetArgument(t, 0);
                  t = c_80;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_80 = ATgetArgument(t, 0);
                      t = c_80;
                      {
                        ATerm h_34 = t;
                        int i_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(i_34);
                          }
                        else
                          {
                            t = h_34;
                            t = debug_1_0(x_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_80 = NULL,i_80 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_80 = ATgetArgument(t, 0);
                          d_80 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_80;
                      t = eval_config_0_0(t);
                      h_80 = t;
                      t = d_80;
                      t = eval_config_0_0(t);
                      i_80 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_80, i_80);
                      t = i_8(h_80, i_80, t);
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
  ATerm m_80 = NULL,n_80 = NULL;
  m_80 = t;
  t = term_j_34;
  n_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_34, m_80);
  t = s_8(n_80, m_80, t);
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_80 = NULL,p_80 = NULL;
        t = eval_config_0_0(t);
        o_80 = t;
        t = term_j_34;
        p_80 = t;
        t = SSL_table_put(p_80, m_80, o_80);
        t = o_80;
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_113 (ATerm), ATerm t)
{
  ATerm t_80 = NULL;
  t_80 = t;
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_80 = NULL;
        t = term_u_14;
        t = get_config_0_0(t);
        v_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_80, term_o_34);
        t = geq_0_0(t);
        t = t_80;
        t = l_113(t);
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
        t = t_80;
      }
  }
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm a_81 = NULL;
  a_81 = t;
  if(match_string(t, "-k"))
    {
      t = a_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_81;
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL;
  b_81 = t;
  t = SSL_string_to_int(b_81);
  c_81 = t;
  t = term_p_34;
  d_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_34, c_81);
  t = v_8(d_81, c_81, t);
  t = b_81;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_11, a_12, b_12, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm f_81 = NULL;
  f_81 = t;
  if(match_string(t, "-S"))
    {
      t = f_81;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_81;
    }
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm g_81 = NULL,h_81 = NULL;
  t = term_u_14;
  g_81 = t;
  t = term_r_34;
  h_81 = t;
  t = term_s_34;
  t = v_8(g_81, h_81, t);
  t = term_t_34;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_u_34;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL,k_81 = NULL;
  i_81 = t;
  t = SSL_string_to_int(i_81);
  j_81 = t;
  t = term_u_14;
  k_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_14, j_81);
  t = v_8(k_81, j_81, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_81);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_v_34;
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
  ATerm l_81 = NULL,m_81 = NULL;
  t = term_w_34;
  l_81 = t;
  t = term_m_14;
  m_81 = t;
  t = term_x_34;
  t = v_8(l_81, m_81, t);
  t = term_y_34;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_z_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_12, e_12, f_12, t);
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      {
        ATerm c_35 = t;
        int d_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_12, h_12, i_12, t);
            LocalPopChoice(d_35);
          }
        else
          {
            t = c_35;
            t = Option_3_0(j_12, k_12, m_12, t);
          }
      }
    }
  return(t);
}
static ATerm v_8 (ATerm h_53, ATerm i_53, ATerm t)
{
  ATerm n_81 = NULL;
  t = term_j_34;
  n_81 = t;
  t = SSL_table_put(n_81, h_53, i_53);
  t = (ATerm) ATmakeAppl(sym__3, term_j_34, h_53, i_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL;
      t = term_m_14;
      t = i_0(t);
      s_81 = t;
      t = term_e_35;
      t_81 = t;
      t = term_f_35;
      u_81 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_35, term_f_35, s_81);
      t = t_8(t_81, u_81, s_81, t);
      _fail(t);
    }
  else
    {
      ATerm x_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_81 = ATgetFirst((ATermList) t);
          r_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_81;
      t = d_0(t);
      t = term_m_14;
      t = g_0(t);
      x_81 = t;
      t = (ATerm) ATinsert(CheckATermList(r_81), x_81);
    }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm e_82 = NULL;
  e_82 = t;
  if(match_string(t, "-o"))
    {
      t = e_82;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_82;
    }
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm f_82 = NULL,l_82 = NULL;
  f_82 = t;
  t = term_g_35;
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_35, f_82);
  t = v_8(l_82, f_82, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_82);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_12, o_12, p_12, t);
  return(t);
}
static ATerm t_8 (ATerm j_25, ATerm k_25, ATerm i_25, ATerm t)
{
  ATerm o_82 = NULL,p_82 = NULL,q_82 = NULL;
  o_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_25, k_25);
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_35 = ATgetArgument(t, 0);
            ATerm l_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_25, k_25);
        t = s_8(j_25, k_25, t);
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        t = (ATerm) ATempty;
      }
  }
  p_82 = t;
  t = (ATerm) ATinsert(CheckATermList(p_82), i_25);
  q_82 = t;
  t = SSL_table_put(j_25, k_25, q_82);
  t = o_82;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
      t = term_m_14;
      t = r_0(t);
      b_83 = t;
      t = term_e_35;
      c_83 = t;
      t = term_f_35;
      d_83 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_35, term_f_35, b_83);
      t = t_8(c_83, d_83, b_83, t);
      _fail(t);
    }
  else
    {
      ATerm h_83 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_82 = ATgetFirst((ATermList) t);
          y_82 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_82;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_82 = ATgetFirst((ATermList) t);
          a_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_82;
      t = o_0(t);
      t = z_82;
      t = p_0(t);
      h_83 = t;
      t = (ATerm) ATinsert(CheckATermList(a_83), h_83);
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm j_83 = NULL;
  j_83 = t;
  if(match_string(t, "-i"))
    {
      t = j_83;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_83;
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL;
  k_83 = t;
  t = term_m_35;
  l_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_35, k_83);
  t = v_8(l_83, k_83, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_83);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = term_n_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_12, s_12, t_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_14;
  t = whoami_0_0(t);
  m_83 = t;
  t = term_n_14;
  o_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_35), m_83);
  p_83 = t;
  t = SSL_printnl(o_83, p_83);
  t = term_r_14;
  n_83 = t;
  t = SSL_exit(n_83);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_35;
  t = get_config_0_0(t);
  return(t);
}
static ATerm q_8 (ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_40, e_40);
      LocalPopChoice(r_35);
    }
  else
    {
      t = q_35;
      t = SSL_addr(d_40, e_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  ATerm r_83 = NULL,s_83 = NULL,t_83 = NULL;
  r_83 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_83;
      t = n_98(t);
    }
  else
    {
      ATerm w_83 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_83 = ATgetFirst((ATermList) t);
          t_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_83;
      t = foldr_2_0(n_98, o_98, t);
      w_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_83, w_83);
      t = o_98(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_r_34;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm u_26 = NULL,x_26 = NULL;
  if(match_cons(t, sym__2))
    {
      u_26 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_8(u_26, x_26, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_83 = NULL,j_26 = NULL,k_26 = NULL;
  t = times_0_0(t);
  k_26 = t;
  t = SSL_explode_term(k_26);
  if(match_cons(t, sym__2))
    {
      ATerm s_35 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_26;
  t = foldr_2_0(v_12, b_13, t);
  z_83 = t;
  t = SSL_TicksToSeconds(z_83);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_84 = NULL,n_84 = NULL,o_84 = NULL;
  k_84 = t;
  if(match_cons(t, sym__2))
    {
      n_84 = ATgetArgument(t, 0);
      o_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_84;
        if((n_84 != t))
          {
            _fail(t);
          }
        t = k_84;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        t = (ATerm) ATmakeAppl(sym__2, n_84, o_84);
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_84, o_84);
              LocalPopChoice(w_35);
            }
          else
            {
              t = v_35;
              t = SSL_gtr(n_84, o_84);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_84, o_84);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_113 (ATerm), ATerm t)
{
  ATerm s_84 = NULL;
  s_84 = t;
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_84 = NULL;
        t = term_u_14;
        t = get_config_0_0(t);
        u_84 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_84, term_r_14);
        t = geq_0_0(t);
        t = s_84;
        t = k_113(t);
        LocalPopChoice(y_35);
      }
    else
      {
        t = x_35;
        t = s_84;
      }
  }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL,z_84 = NULL,a_85 = NULL;
  t = run_time_0_0(t);
  w_84 = t;
  t = term_m_14;
  t = whoami_0_0(t);
  x_84 = t;
  t = term_n_14;
  z_84 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_36), w_84), term_z_35), x_84);
  a_85 = t;
  t = SSL_printnl(z_84, a_85);
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_36), w_84), term_z_35), x_84));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_85 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_34;
  b_85 = t;
  t = SSL_exit(b_85);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm j_85 = NULL,k_85 = NULL;
  k_85 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_85;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_85 = ATgetArgument(t, 0);
          {
            ATerm r_27 = NULL,p_32 = NULL;
            t = SSLgetAnnotations(k_85);
            r_27 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_85);
            p_32 = t;
            t = SSLsetAnnotations(p_32, r_27);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_85;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_106 (ATerm), ATerm t)
{
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_36;
      t = get_config_0_0(t);
      LocalPopChoice(c_36);
    }
  else
    {
      t = b_36;
      t = fetch_1_0(d_13, t);
    }
  t = e_106(t);
  return(t);
}
ATerm map_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  static ATerm a_86 (ATerm t)
  {
    ATerm x_85 = NULL,y_85 = NULL,z_85 = NULL;
    x_85 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_85;
      }
    else
      {
        ATerm d_28 = NULL,g_28 = NULL,n_28 = NULL,r_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_85 = ATgetFirst((ATermList) t);
            z_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_85);
        d_28 = t;
        t = y_85;
        t = v_91(t);
        g_28 = t;
        t = z_85;
        t = a_86(t);
        n_28 = t;
        t = (ATerm) ATinsert(CheckATermList(n_28), g_28);
        r_32 = t;
        t = SSLsetAnnotations(r_32, d_28);
      }
    return(t);
  }
  t = a_86(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_86 = NULL,e_86 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_86 = ATgetFirst((ATermList) t);
      e_86 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_86 = NULL,j_86 = NULL;
        static ATerm e_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_86)), not_null(j_86));
          return(t);
        }
        t = e_86;
        t = n_0(t);
        if(((i_86 != NULL) && (i_86 != t)))
          _fail(t);
        else
          i_86 = t;
        t = d_86;
        t = k_0(t);
        if(((j_86 != NULL) && (j_86 != t)))
          _fail(t);
        else
          j_86 = t;
        t = e_86;
        t = reverse_acc_2_0(k_0, e_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_14;
      t = n_0(t);
    }
  return(t);
}
static ATerm s_8 (ATerm a_27, ATerm b_27, ATerm t)
{
  t = SSL_table_get(a_27, b_27);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm n_86 = NULL,o_86 = NULL,p_86 = NULL,t_32 = NULL;
  p_86 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_86);
  n_86 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_86);
  t_32 = t;
  t = SSLsetAnnotations(t_32, n_86);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm r_86 = NULL;
  r_86 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_86), term_e_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL;
  ATerm f_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_35;
      t = get_config_0_0(t);
      LocalPopChoice(g_36);
    }
  else
    {
      t = f_36;
      t = fetch_1_0(g_13, t);
    }
  t = term_h_36;
  t = echo_0_0(t);
  t = term_e_35;
  l_86 = t;
  t = term_f_35;
  m_86 = t;
  t = term_i_36;
  t = s_8(l_86, m_86, t);
  t = reverse_acc_2_0(_id, h_13, t);
  t = map_1_0(j_13, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL;
  t_86 = t;
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_86;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_36 = ATgetFirst((ATermList) t);
                ATerm m_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_86;
          }
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
        t = (ATerm) ATinsert(ATempty, t_86);
      }
  }
  u_86 = t;
  t = term_e_33;
  v_86 = t;
  t = SSL_printnl(v_86, u_86);
  t = t_86;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_35;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL;
  t = term_n_36;
  z_86 = t;
  t = term_m_14;
  a_87 = t;
  t = term_o_36;
  t = v_8(z_86, a_87, t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_p_36;
  return(t);
}
static ATerm q_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL;
  t = term_n_36;
  d_87 = t;
  t = term_m_14;
  e_87 = t;
  t = term_o_36;
  t = v_8(d_87, e_87, t);
  t = term_q_36;
  b_87 = t;
  t = term_m_14;
  c_87 = t;
  t = term_r_36;
  t = v_8(b_87, c_87, t);
  t = term_s_36;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_13, o_13, p_13, t);
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
      t = Option_3_0(q_13, r_13, s_13, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,v_32 = NULL;
  k_87 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_87 = ATgetFirst((ATermList) t);
      h_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_87);
  f_87 = t;
  t = g_87;
  t = w_80(t);
  i_87 = t;
  t = h_87;
  t = x_80(t);
  j_87 = t;
  t = (ATerm) ATinsert(CheckATermList(j_87), i_87);
  v_32 = t;
  t = SSLsetAnnotations(v_32, f_87);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL,u_87 = NULL,v_87 = NULL,x_32 = NULL;
  p_87 = t;
  {
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_36;
        t = j_109(t);
        LocalPopChoice(x_36);
      }
    else
      {
        t = w_36;
      }
  }
  t = p_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_87 = ATgetFirst((ATermList) t);
      s_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_87);
  q_87 = t;
  t = term_p_35;
  v_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_35, r_87);
  t = v_8(v_87, r_87, t);
  t = s_87;
  {
    static ATerm f_88 (ATerm t)
    {
      ATerm z_36 = t;
      int a_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_37 = t;
          int c_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_87 = NULL;
              y_87 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_87;
              LocalPopChoice(c_37);
            }
          else
            {
              t = b_37;
              t = j_109(t);
              t = Cons_2_0(_id, f_88, t);
            }
          LocalPopChoice(a_37);
        }
      else
        {
          t = z_36;
          {
            ATerm b_88 = NULL,c_88 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_88 = ATgetFirst((ATermList) t);
                c_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_88), (ATerm) ATmakeAppl(sym_Undefined_1, b_88));
          }
        }
      return(t);
    }
    t = f_88(t);
  }
  u_87 = t;
  t = (ATerm) ATinsert(CheckATermList(u_87), (ATerm) ATmakeAppl(sym_Program_1, r_87));
  x_32 = t;
  t = SSLsetAnnotations(x_32, q_87);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm r_88 = NULL;
  r_88 = t;
  if(match_string(t, "--help"))
    {
      t = r_88;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_88;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_88;
        }
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL;
  t = term_d_36;
  s_88 = t;
  t = term_m_14;
  t_88 = t;
  t = term_d_37;
  t = v_8(s_88, t_88, t);
  t = term_e_37;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_f_37;
  return(t);
}
static ATerm z_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm k_88 = NULL,l_88 = NULL,m_88 = NULL,n_88 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL;
  m_88 = t;
  t = term_e_35;
  o_88 = t;
  t = term_f_35;
  p_88 = t;
  t = (ATerm) ATempty;
  q_88 = t;
  t = SSL_table_put(o_88, p_88, q_88);
  t = m_88;
  {
    static ATerm v_13 (ATerm t)
    {
      ATerm g_37 = t;
      int h_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_109(t);
          LocalPopChoice(h_37);
        }
      else
        {
          t = g_37;
          {
            ATerm i_37 = t;
            int j_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_13, x_13, y_13, t);
                LocalPopChoice(j_37);
              }
            else
              {
                t = i_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_13, t);
  }
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_89 = NULL;
        a_89 = t;
        {
          ATerm m_37 = t;
          int n_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_29 = NULL;
              t = a_89;
              {
                ATerm o_37 = t;
                int p_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_d_36;
                    t = get_config_0_0(t);
                    LocalPopChoice(p_37);
                  }
                else
                  {
                    t = o_37;
                    t = fetch_1_0(z_13, t);
                  }
              }
              t = a_89;
              t = default_system_usage_0_0(t);
              t = term_r_34;
              e_29 = t;
              t = SSL_exit(e_29);
              LocalPopChoice(n_37);
            }
          else
            {
              t = m_37;
              {
                ATerm n_29 = NULL;
                t = term_n_36;
                t = get_config_0_0(t);
                t = a_89;
                t = default_system_about_0_0(t);
                t = term_r_34;
                n_29 = t;
                t = SSL_exit(n_29);
              }
            }
        }
        LocalPopChoice(l_37);
      }
    else
      {
        t = k_37;
        {
          ATerm q_37 = t;
          int r_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL;
              static ATerm a_14 (ATerm t)
              {
                ATerm e_89 = NULL,f_89 = NULL,g_89 = NULL,z_32 = NULL;
                g_89 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_89 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_89);
                e_89 = t;
                t = f_89;
                if(((k_88 != NULL) && (k_88 != t)))
                  _fail(t);
                else
                  k_88 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_89);
                z_32 = t;
                t = SSLsetAnnotations(z_32, e_89);
                return(t);
              }
              t = fetch_1_0(a_14, t);
              t = term_n_14;
              c_89 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_88)), term_s_37);
              d_89 = t;
              t = SSL_printnl(c_89, d_89);
              t = (ATerm) ATmakeAppl(sym__2, term_n_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_88)), term_s_37));
              t = default_system_usage_0_0(t);
              t = term_r_14;
              b_89 = t;
              t = SSL_exit(b_89);
              LocalPopChoice(r_37);
            }
          else
            {
              t = q_37;
            }
        }
      }
  }
  l_88 = t;
  t = term_e_35;
  n_88 = t;
  t = SSL_table_destroy(n_88);
  t = l_88;
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm t)
{
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL;
  t = parse_options_1_0(g_106, t);
  l_89 = t;
  t = term_t_37;
  o_89 = t;
  t = SSL_table_create(o_89);
  t = term_t_37;
  m_89 = t;
  t = term_z_37;
  n_89 = t;
  t = SSL_table_put(m_89, n_89, l_89);
  t = l_89;
  t = i_106(t);
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_106, t);
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
              t = j_106(t);
              t = report_success_0_0(t);
              LocalPopChoice(d_38);
            }
          else
            {
              t = c_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm c_14 (ATerm t)
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
  ATerm p_89 = NULL,q_89 = NULL;
  t = term_e_38;
  p_89 = t;
  t = term_m_14;
  q_89 = t;
  t = term_f_38;
  t = v_8(p_89, q_89, t);
  t = term_g_38;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_h_38;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm r_89 = NULL,s_89 = NULL,t_89 = NULL,a_90 = NULL;
  r_89 = t;
  t = term_p_35;
  t = get_config_0_0(t);
  s_89 = t;
  t = term_n_14;
  t_89 = t;
  t = (ATerm) ATinsert(ATempty, s_89);
  a_90 = t;
  t = SSL_printnl(t_89, a_90);
  t = r_89;
  return(t);
}
ATerm iowrap_3_0 (ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t)
{
  static ATerm b_14 (ATerm t)
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_105(t);
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
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
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
                          t = Option_3_0(e_14, f_14, g_14, t);
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
                                t = verbose_option_0_0(t);
                                LocalPopChoice(r_38);
                              }
                            else
                              {
                                t = q_38;
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
  static ATerm d_14 (ATerm t)
  {
    ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL;
    c_90 = t;
    {
      ATerm s_38 = t;
      int t_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm j_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((b_90 != NULL) && (b_90 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_90 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_14, t);
          LocalPopChoice(t_38);
        }
      else
        {
          t = s_38;
          t = term_u_38;
          b_90 = t;
        }
    }
    t = not_null(b_90);
    t = ReadFromFile_0_0(t);
    d_90 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_90, d_90);
    t = apply_strategy_1_0(p_105, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(b_14, r_105, c_14, d_14, t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL,b_33 = NULL;
  i_90 = t;
  if(match_cons(t, sym__2))
    {
      f_90 = ATgetArgument(t, 0);
      g_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_90);
  e_90 = t;
  t = g_90;
  t = mark_bound_unbound_vars_0_0(t);
  h_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_90, h_90);
  b_33 = t;
  t = SSLsetAnnotations(b_33, e_90);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_14, _fail, default_usage_0_0, t);
  return(t);
}
