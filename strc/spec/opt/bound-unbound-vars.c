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
ATerm term_c_36;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_l_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_k_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_v_30;
ATerm term_j_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_z_28;
ATerm term_t_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_i_28;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_v_17;
ATerm term_o_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Defined_2, term_h_17, term_i_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Defined_2, term_t_23, term_u_23);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Defined_2, term_k_25, term_i_17);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_o_31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_u_31, term_v_13);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_h_32);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_a_34, term_v_13);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym__2, term_d_34, term_v_13);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym__2, term_q_33, term_v_13);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym__2, term_m_35, term_v_13);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm e_112 (ATerm), ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm x_80 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm w_80 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm v_80 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm c_83 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm d_7 (ATerm p_23, ATerm q_23, ATerm r_23, ATerm t);
static ATerm c_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm e_7 (ATerm j_23, ATerm n_23, ATerm l_23, ATerm t);
static ATerm v_3 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm f_7 (ATerm d_23, ATerm h_23, ATerm f_23, ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm g_7 (ATerm b_22, ATerm c_22, ATerm d_22, ATerm f_22, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm h_7 (ATerm m_20, ATerm n_20, ATerm l_20, ATerm t);
static ATerm q_6 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm i_7 (ATerm o_25, ATerm n_25, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm z_20, ATerm t);
ATerm tboundin_3_0 (ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm tvars_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm n_7 (ATerm q_94 (ATerm), ATerm r_46, ATerm q_46, ATerm t);
ATerm foldr_3_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t);
static ATerm o_7 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_46, ATerm u_46, ATerm t);
static ATerm p_7 (ATerm l_94 (ATerm), ATerm p_46, ATerm o_46, ATerm t);
ATerm at_end_1_0 (ATerm c_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_47 (ATerm a_47, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm u_7 (ATerm r_600, ATerm w_600, ATerm j_58, ATerm t);
ATerm while_not_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_53 (ATerm p_50, ATerm r_50, ATerm s_50, ATerm t);
static ATerm e_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
ATerm free_vars_3_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
static ATerm w_7 (ATerm g_81 (ATerm), ATerm d_24, ATerm b_24, ATerm t);
static ATerm b_10 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm x_7 (ATerm q_24, ATerm r_24, ATerm t);
ATerm end_scope_1_0 (ATerm d_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm c_81 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t);
static ATerm g_10 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm y_7 (ATerm y_24, ATerm z_24, ATerm a_25, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm b_8 (ATerm w_24, ATerm x_24, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
ATerm mark_bound_unbound_vars_0_0 (ATerm t);
static ATerm e_8 (ATerm r_32, ATerm s_32, ATerm t);
static ATerm f_8 (ATerm c_38, ATerm d_38, ATerm t);
static ATerm h_8 (ATerm j_89 (ATerm), ATerm r_314, ATerm g_38, ATerm t);
static ATerm g_8 (ATerm y_37, ATerm z_37, ATerm t);
static ATerm v_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm x_103 (ATerm), ATerm t);
static ATerm w_70 (ATerm q_70, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_8 (ATerm e_38, ATerm t);
static ATerm j_8 (ATerm t_32, ATerm u_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_72 (ATerm g_71, ATerm t);
static ATerm i_72 (ATerm k_71, ATerm l_71, ATerm m_71, ATerm t);
static ATerm j_72 (ATerm u_71, ATerm v_71, ATerm w_71, ATerm t);
static ATerm k_8 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_90 (ATerm), ATerm t);
static ATerm d_8 (ATerm k_31, ATerm l_31, ATerm t);
ATerm debug_1_0 (ATerm h_89 (ATerm), ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm c_112 (ATerm), ATerm t);
static ATerm c_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm j_11 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_8 (ATerm i_52, ATerm j_52, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_8 (ATerm l_24, ATerm m_24, ATerm k_24, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm f_12 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_8 (ATerm g_39, ATerm h_39, ATerm t);
ATerm foldr_2_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_112 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm need_help_1_0 (ATerm v_104 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_90 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_8 (ATerm c_26, ATerm d_26, ATerm t);
static ATerm l_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm a_108 (ATerm), ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
ATerm parse_options_1_0 (ATerm z_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm t);
static ATerm m_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
ATerm iowrap_3_0 (ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
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
  t = term_v_13;
  t = whoami_0_0(t);
  j_0 = t;
  t = term_w_13;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_13), j_0), term_y_13);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_a_14;
  m_0 = t;
  t = SSL_exit(m_0);
  t = a_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_112 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm b_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL;
        t = term_e_14;
        t = get_config_0_0(t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_f_14);
        t = geq_0_0(t);
        t = x_0;
        t = e_112(t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = b_14;
        t = x_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,u_6 = NULL;
  static ATerm o_0 (ATerm t)
  {
    ATerm g_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,a_7 = NULL,v_6 = NULL;
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
    t = x_80(t);
    u_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, u_1, s_1, t_1);
    v_6 = t;
    t = SSLsetAnnotations(v_6, m_1);
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
    t = x_80(t);
    l_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_1, l_1, k_1);
    a_7 = t;
    t = SSLsetAnnotations(a_7, g_1);
    return(t);
  }
  static ATerm p_0 (ATerm t)
  {
    ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,b_7 = NULL;
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
    t = x_80(t);
    b_2 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_1, z_1, b_2);
    b_7 = t;
    t = SSLsetAnnotations(b_7, x_1);
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
  u_6 = t;
  t = SSLsetAnnotations(u_6, b_1);
  t = abstract_choice_2_0(o_0, p_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,q_7 = NULL;
  static ATerm q_0 (ATerm t)
  {
    ATerm h_2 = NULL,i_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,r_7 = NULL;
    m_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        i_2 = ATgetArgument(t, 0);
        k_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_2);
    h_2 = t;
    t = i_2;
    t = w_80(t);
    l_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, l_2, k_2);
    r_7 = t;
    t = SSLsetAnnotations(r_7, h_2);
    return(t);
  }
  static ATerm r_0 (ATerm t)
  {
    ATerm o_2 = NULL,q_2 = NULL,t_2 = NULL,w_2 = NULL,y_2 = NULL,s_7 = NULL;
    y_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        q_2 = ATgetArgument(t, 0);
        t_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_2);
    o_2 = t;
    t = t_2;
    t = w_80(t);
    w_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, q_2, w_2);
    s_7 = t;
    t = SSLsetAnnotations(s_7, o_2);
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
  q_7 = t;
  t = SSLsetAnnotations(q_7, d_2);
  t = abstract_choice_2_0(q_0, r_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL;
  j_3 = t;
  t = save_MarkVar_0_0(t);
  e_3 = t;
  t = j_3;
  t = y_80(t);
  i_3 = t;
  t = save_MarkVar_0_0(t);
  f_3 = t;
  t = term_g_14;
  m_3 = t;
  t = SSL_table_destroy(m_3);
  t = term_g_14;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_14, e_3);
  t = i_7(k_3, e_3, t);
  t = i_3;
  t = z_80(t);
  g_3 = t;
  t = f_3;
  t = isect_MarkVar_0_0(t);
  t = g_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL,p_8 = NULL;
  static ATerm y_0 (ATerm t)
  {
    ATerm s_3 = NULL,t_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,r_8 = NULL;
    y_3 = t;
    if(match_cons(t, sym_Choice_2))
      {
        t_3 = ATgetArgument(t, 0);
        w_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_3);
    s_3 = t;
    t = t_3;
    t = v_80(t);
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, x_3, w_3);
    r_8 = t;
    t = SSLsetAnnotations(r_8, s_3);
    return(t);
  }
  static ATerm a_1 (ATerm t)
  {
    ATerm z_3 = NULL,b_4 = NULL,c_4 = NULL,i_4 = NULL,n_4 = NULL,t_8 = NULL;
    n_4 = t;
    if(match_cons(t, sym_Choice_2))
      {
        b_4 = ATgetArgument(t, 0);
        c_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_4);
    z_3 = t;
    t = c_4;
    t = v_80(t);
    i_4 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, b_4, i_4);
    t_8 = t;
    t = SSLsetAnnotations(t_8, z_3);
    return(t);
  }
  r_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      o_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_3);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, o_3, q_3);
  p_8 = t;
  t = SSLsetAnnotations(p_8, n_3);
  t = abstract_choice_2_0(y_0, a_1, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm o_4 = NULL,a_5 = NULL,c_5 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,i_9 = NULL,h_9 = NULL;
  a_5 = t;
  t = save_MarkVar_0_0(t);
  o_4 = t;
  t = a_5;
  if(match_cons(t, sym_Rec_2))
    {
      j_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_5);
  h_5 = t;
  t = k_5;
  t = mark_buv_0_0(t);
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, j_5, l_5);
  h_9 = t;
  t = SSLsetAnnotations(h_9, h_5);
  t = o_4;
  t = isect_MarkVar_0_0(t);
  t = a_5;
  if(match_cons(t, sym_Rec_2))
    {
      d_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_5);
  c_5 = t;
  t = f_5;
  t = mark_buv_0_0(t);
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, d_5, g_5);
  i_9 = t;
  t = SSLsetAnnotations(i_9, c_5);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,w_5 = NULL,x_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,i_6 = NULL,j_6 = NULL,p_9 = NULL,o_9 = NULL,n_9 = NULL;
  j_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      d_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
      f_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_6);
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, d_6, e_6, f_6);
  n_9 = t;
  t = SSLsetAnnotations(n_9, c_6);
  i_6 = t;
  t = save_MarkVar_0_0(t);
  m_5 = t;
  t = i_6;
  if(match_cons(t, sym_PrimT_3))
    {
      w_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
      z_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_6);
  u_5 = t;
  t = z_5;
  t = map_1_0(v_2, t);
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, w_5, x_5, a_6);
  o_9 = t;
  t = SSLsetAnnotations(o_9, u_5);
  b_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
      r_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_6);
  n_5 = t;
  t = q_5;
  t = mark_buv_0_0(t);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, p_5, s_5, r_5);
  p_9 = t;
  t = SSLsetAnnotations(p_9, n_5);
  t_5 = t;
  t = m_5;
  t = isect_MarkVar_0_0(t);
  t = t_5;
  return(t);
}
ATerm alltd_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  static ATerm l_6 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_83(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = SRTS_all(l_6, t);
      }
    return(t);
  }
  t = l_6(t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm k_10 = NULL,m_10 = NULL,q_10 = NULL,t_10 = NULL;
  m_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      q_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
      k_10 = ATgetArgument(t, 2);
      {
        ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL,i_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,j_2 = NULL,n_2 = NULL,p_2 = NULL,r_2 = NULL,s_2 = NULL,u_2 = NULL,a_3 = NULL,y_9 = NULL,x_9 = NULL,t_9 = NULL;
        t = SSLgetAnnotations(m_10);
        u_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, q_10, t_10, k_10);
        t_9 = t;
        t = SSLsetAnnotations(t_9, u_2);
        a_3 = t;
        t = save_MarkVar_0_0(t);
        s_0 = t;
        t = a_3;
        if(match_cons(t, sym_CallT_3))
          {
            j_2 = ATgetArgument(t, 0);
            n_2 = ATgetArgument(t, 1);
            p_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_3);
        r_1 = t;
        t = p_2;
        t = map_1_0(x_2, t);
        r_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, j_2, n_2, r_2);
        x_9 = t;
        t = SSLsetAnnotations(x_9, r_1);
        s_2 = t;
        if(match_cons(t, sym_CallT_3))
          {
            w_0 = ATgetArgument(t, 0);
            i_1 = ATgetArgument(t, 1);
            n_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_2);
        t_0 = t;
        t = i_1;
        t = mark_buv_0_0(t);
        o_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, w_0, o_1, n_1);
        y_9 = t;
        t = SSLsetAnnotations(y_9, t_0);
        p_1 = t;
        t = s_0;
        t = isect_MarkVar_0_0(t);
        t = p_1;
      }
    }
  else
    {
      ATerm a_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,j_4 = NULL,m_4 = NULL,e_10 = NULL,a_10 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          q_10 = ATgetArgument(t, 0);
          t_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_10);
      j_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, q_10, t_10);
      a_10 = t;
      t = SSLsetAnnotations(a_10, j_4);
      m_4 = t;
      t = save_MarkVar_0_0(t);
      a_4 = t;
      t = m_4;
      if(match_cons(t, sym_Call_2))
        {
          e_4 = ATgetArgument(t, 0);
          f_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_4);
      d_4 = t;
      t = f_4;
      t = mark_buv_0_0(t);
      g_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, e_4, g_4);
      e_10 = t;
      t = SSLsetAnnotations(e_10, d_4);
      h_4 = t;
      t = a_4;
      t = isect_MarkVar_0_0(t);
      t = h_4;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_g_14;
  return(t);
}
static ATerm d_7 (ATerm p_23, ATerm q_23, ATerm r_23, ATerm t)
{
  ATerm w_10 = NULL;
  static ATerm b_3 (ATerm t)
  {
    t = q_23;
    t = map_1_0(IntroduceBound_0_0, t);
    t = r_23;
    t = mark_build_vars_0_0(t);
    if(((w_10 != NULL) && (w_10 != t)))
      _fail(t);
    else
      w_10 = t;
    return(t);
  }
  t = scope_2_0(z_2, b_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, p_23, q_23, not_null(w_10));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_g_14;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm k_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_11);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      {
        ATerm n_11 = NULL,o_11 = NULL,q_11 = NULL,r_11 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_11 = ATgetArgument(t, 0);
            t = n_11;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                n_11 = ATgetArgument(t, 0);
                o_11 = ATgetArgument(t, 1);
                q_11 = ATgetArgument(t, 2);
                r_11 = ATgetArgument(t, 3);
                t = q_11;
                t = map_1_0(p_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_11 = ATgetArgument(t, 0);
                    o_11 = ATgetArgument(t, 1);
                    q_11 = ATgetArgument(t, 2);
                    r_11 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_11;
                t = map_1_0(u_3, t);
              }
          }
      }
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm e_12 = NULL;
  ATerm l_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_12 = ATgetArgument(t, 0);
          {
            ATerm o_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_14);
      t = e_12;
    }
  else
    {
      t = l_14;
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
static ATerm u_3 (ATerm t)
{
  ATerm t_12 = NULL;
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_12 = ATgetArgument(t, 0);
          {
            ATerm s_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_14);
      t = t_12;
    }
  else
    {
      t = q_14;
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
static ATerm e_7 (ATerm j_23, ATerm n_23, ATerm l_23, ATerm t)
{
  ATerm d_11 = NULL,f_11 = NULL,g_11 = NULL;
  static ATerm d_3 (ATerm t)
  {
    t = j_23;
    t = free_vars_3_0(h_3, l_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = j_23;
    t = mark_match_vars_0_0(t);
    if(((d_11 != NULL) && (d_11 != t)))
      _fail(t);
    else
      d_11 = t;
    t = l_23;
    t = mark_buv_0_0(t);
    if(((f_11 != NULL) && (f_11 != t)))
      _fail(t);
    else
      f_11 = t;
    t = n_23;
    t = mark_build_vars_0_0(t);
    if(((g_11 != NULL) && (g_11 != t)))
      _fail(t);
    else
      g_11 = t;
    return(t);
  }
  t = scope_2_0(c_3, d_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_11), not_null(g_11), not_null(f_11)));
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_g_14;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm f_13 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_13);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm t_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_14);
    }
  else
    {
      t = t_14;
      {
        ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,p_13 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_13 = ATgetArgument(t, 0);
            t = i_13;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_13 = ATgetArgument(t, 0);
                j_13 = ATgetArgument(t, 1);
                k_13 = ATgetArgument(t, 2);
                p_13 = ATgetArgument(t, 3);
                t = k_13;
                t = map_1_0(q_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_13 = ATgetArgument(t, 0);
                    j_13 = ATgetArgument(t, 1);
                    k_13 = ATgetArgument(t, 2);
                    p_13 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = k_13;
                t = map_1_0(r_4, t);
              }
          }
      }
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm x_13 = NULL;
  ATerm c_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_13 = ATgetArgument(t, 0);
          {
            ATerm n_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_15);
      t = x_13;
    }
  else
    {
      t = c_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_13;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm m_14 = NULL;
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_14 = ATgetArgument(t, 0);
          {
            ATerm y_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_15);
      t = m_14;
    }
  else
    {
      t = r_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_14;
    }
  return(t);
}
static ATerm f_7 (ATerm d_23, ATerm h_23, ATerm f_23, ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,e_13 = NULL;
  static ATerm k_4 (ATerm t)
  {
    t = d_23;
    t = free_vars_3_0(l_4, p_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = d_23;
    t = mark_match_vars_0_0(t);
    if(((z_12 != NULL) && (z_12 != t)))
      _fail(t);
    else
      z_12 = t;
    t = f_23;
    t = mark_buv_0_0(t);
    if(((a_13 != NULL) && (a_13 != t)))
      _fail(t);
    else
      a_13 = t;
    t = h_23;
    t = mark_build_vars_0_0(t);
    if(((e_13 != NULL) && (e_13 != t)))
      _fail(t);
    else
      e_13 = t;
    return(t);
  }
  t = scope_2_0(v_3, k_4, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_12), not_null(e_13), not_null(a_13)));
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm m_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_16);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      {
        ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_16 = ATgetArgument(t, 0);
            t = s_16;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                s_16 = ATgetArgument(t, 0);
                t_16 = ATgetArgument(t, 1);
                u_16 = ATgetArgument(t, 2);
                v_16 = ATgetArgument(t, 3);
                t = u_16;
                t = map_1_0(u_4, t);
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
                t = map_1_0(v_4, t);
              }
          }
      }
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm j_17 = NULL;
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_17 = ATgetArgument(t, 0);
          {
            ATerm f_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_16);
      t = j_17;
    }
  else
    {
      t = c_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_17;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm y_17 = NULL;
  ATerm h_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_17 = ATgetArgument(t, 0);
          {
            ATerm n_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_16);
      t = y_17;
    }
  else
    {
      t = h_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_17;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_g_14;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm e_19 = NULL;
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_19 = ATgetArgument(t, 0);
          {
            ATerm r_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_16);
      t = e_19;
    }
  else
    {
      t = p_16;
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
static ATerm z_4 (ATerm t)
{
  ATerm l_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_19);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      {
        ATerm t_19 = NULL,v_19 = NULL,b_20 = NULL,d_20 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_19 = ATgetArgument(t, 0);
            t = t_19;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                t_19 = ATgetArgument(t, 0);
                v_19 = ATgetArgument(t, 1);
                b_20 = ATgetArgument(t, 2);
                d_20 = ATgetArgument(t, 3);
                t = b_20;
                t = map_1_0(i_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    t_19 = ATgetArgument(t, 0);
                    v_19 = ATgetArgument(t, 1);
                    b_20 = ATgetArgument(t, 2);
                    d_20 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_20;
                t = map_1_0(o_5, t);
              }
          }
      }
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm r_20 = NULL;
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_20 = ATgetArgument(t, 0);
          {
            ATerm a_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_16);
      t = r_20;
    }
  else
    {
      t = y_16;
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
static ATerm o_5 (ATerm t)
{
  ATerm k_21 = NULL;
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_21 = ATgetArgument(t, 0);
          {
            ATerm d_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_17);
      t = k_21;
    }
  else
    {
      t = b_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_21;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,l_15 = NULL,m_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      l_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
      t_15 = ATgetArgument(t, 2);
      {
        ATerm b_16 = NULL,g_16 = NULL,j_16 = NULL,l_16 = NULL;
        t = t_15;
        if(match_cons(t, sym_Rule_3))
          {
            h_15 = ATgetArgument(t, 0);
            i_15 = ATgetArgument(t, 1);
            j_15 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = t_15;
        t = free_vars_3_0(s_4, t_4, tboundin_3_0, t);
        b_16 = t;
        {
          static ATerm x_4 (ATerm t)
          {
            t = b_16;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = h_15;
            t = mark_match_vars_0_0(t);
            if(((g_16 != NULL) && (g_16 != t)))
              _fail(t);
            else
              g_16 = t;
            t = j_15;
            t = mark_buv_0_0(t);
            if(((j_16 != NULL) && (j_16 != t)))
              _fail(t);
            else
              j_16 = t;
            t = i_15;
            t = mark_build_vars_0_0(t);
            if(((l_16 != NULL) && (l_16 != t)))
              _fail(t);
            else
              l_16 = t;
            return(t);
          }
          t = scope_2_0(w_4, x_4, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, l_15, m_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_16), not_null(l_16), not_null(j_16)));
      }
    }
  else
    {
      ATerm l_18 = NULL,m_18 = NULL,o_18 = NULL,q_18 = NULL,s_18 = NULL,t_18 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          l_15 = ATgetArgument(t, 0);
          m_15 = ATgetArgument(t, 1);
          t_15 = ATgetArgument(t, 2);
          u_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_15;
      if(match_cons(t, sym_Rule_3))
        {
          v_15 = ATgetArgument(t, 0);
          w_15 = ATgetArgument(t, 1);
          x_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_15;
      t = map_1_0(y_4, t);
      l_18 = t;
      t = u_15;
      t = free_vars_3_0(z_4, e_5, tboundin_3_0, t);
      t_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_18, l_18);
      t = diff_0_0(t);
      m_18 = t;
      {
        static ATerm y_5 (ATerm t)
        {
          t = l_18;
          t = map_1_0(IntroduceBound_0_0, t);
          t = m_18;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = v_15;
          t = mark_match_vars_0_0(t);
          if(((o_18 != NULL) && (o_18 != t)))
            _fail(t);
          else
            o_18 = t;
          t = x_15;
          t = mark_buv_0_0(t);
          if(((q_18 != NULL) && (q_18 != t)))
            _fail(t);
          else
            q_18 = t;
          t = w_15;
          t = mark_build_vars_0_0(t);
          if(((s_18 != NULL) && (s_18 != t)))
            _fail(t);
          else
            s_18 = t;
          return(t);
        }
        t = scope_2_0(v_5, y_5, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, l_15, m_15, t_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_18), not_null(s_18), not_null(q_18)));
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm q_21 = NULL,u_21 = NULL,n_24 = NULL;
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_21);
  u_21 = t;
  t = term_k_17;
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_21), term_k_17);
  t = w_7(g_6, u_21, n_24, t);
  t = q_21;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm u_25 = NULL;
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_25 = ATgetArgument(t, 0);
          {
            ATerm n_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_17);
      t = u_25;
    }
  else
    {
      t = l_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_25;
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_g_14;
  return(t);
}
static ATerm g_7 (ATerm b_22, ATerm c_22, ATerm d_22, ATerm f_22, ATerm t)
{
  ATerm s_24 = NULL,f_25 = NULL;
  t = d_22;
  t = map_1_0(h_6, t);
  s_24 = t;
  {
    static ATerm n_6 (ATerm t)
    {
      t = s_24;
      t = map_1_0(IntroduceBound_0_0, t);
      t = f_22;
      t = mark_buv_0_0(t);
      if(((f_25 != NULL) && (f_25 != t)))
        _fail(t);
      else
        f_25 = t;
      return(t);
    }
    t = scope_2_0(m_6, n_6, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, b_22, c_22, d_22, not_null(f_25));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,i_27 = NULL,t_27 = NULL,j_28 = NULL;
  z_26 = t;
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      t_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_27;
  if(match_cons(t, sym_Undefined_0))
    {
      t = a_27;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_o_17;
        }
      else
        {
          t = term_o_17;
        }
    }
  else
    {
      ATerm p_17 = t;
      int q_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm r_17 = ATgetArgument(t, 0);
              j_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(q_17);
          t = a_27;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_o_17;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  b_27 = ATgetArgument(t, 0);
                  i_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm s_17 = t;
                int t_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, i_27, j_28);
                    {
                      ATerm u_17 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm b_5 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              b_5 = ATgetArgument(t, 0);
                              if((b_5 != ATgetArgument(t, 1)))
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
                          t = u_17;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, b_27, term_v_17);
                    LocalPopChoice(t_17);
                  }
                else
                  {
                    t = s_17;
                    t = j_28;
                    if((i_27 != t))
                      {
                        _fail(t);
                      }
                    t = a_27;
                  }
              }
            }
        }
      else
        {
          t = p_17;
          t = a_27;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_o_17;
        }
    }
  return(t);
}
static ATerm h_7 (ATerm m_20, ATerm n_20, ATerm l_20, ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
  t = term_g_14;
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_14, m_20);
  t = n_8(p_28, m_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_28 = ATgetFirst((ATermList) t);
      {
        ATerm z_17 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_20, n_28);
  t = CompareEntries_0_0(t);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATinsert(CheckATermList(l_20), o_28));
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,n_29 = NULL,o_29 = NULL;
  o_29 = t;
  if(match_cons(t, sym__2))
    {
      g_29 = ATgetArgument(t, 0);
      h_29 = ATgetArgument(t, 1);
      t = h_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_29 = ATgetFirst((ATermList) t);
          n_29 = (ATerm) ATgetNext((ATermList) t);
          t = i_29;
          {
            ATerm a_18 = t;
            int b_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm c_18 = ATgetArgument(t, 0);
                    ATerm d_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(b_18);
                t = g_29;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = o_29;
                  }
                else
                  {
                    ATerm e_18 = t;
                    int h_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = o_29;
                        t = h_7(g_29, i_29, n_29, t);
                        LocalPopChoice(h_18);
                      }
                    else
                      {
                        t = e_18;
                        t = o_29;
                      }
                  }
              }
            else
              {
                t = a_18;
                t = g_29;
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
          t = g_29;
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
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  t = map_1_0(q_6, t);
  d_29 = t;
  t = term_g_14;
  f_29 = t;
  t = SSL_table_destroy(f_29);
  t = term_g_14;
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_14, d_29);
  t = i_7(e_29, d_29, t);
  t = d_29;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm q_30 = NULL,w_30 = NULL,a_31 = NULL;
  a_31 = t;
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm k_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_18);
        t = a_31;
      }
    else
      {
        t = i_18;
        {
          ATerm n_18 = t;
          int p_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm r_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(p_18);
              t = a_31;
            }
          else
            {
              t = n_18;
              {
                ATerm v_18 = t;
                int w_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm x_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_18);
                    t = a_31;
                  }
                else
                  {
                    t = v_18;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm y_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = a_31;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  q_30 = t;
  t = a_31;
  t = SRTS_one(mark_buv_0_0, t);
  w_30 = t;
  t = q_30;
  t = isect_MarkVar_0_0(t);
  t = w_30;
  return(t);
}
static ATerm i_7 (ATerm o_25, ATerm n_25, ATerm t)
{
  static ATerm r_6 (ATerm t)
  {
    ATerm f_31 = NULL,i_31 = NULL;
    if(match_cons(t, sym__2))
      {
        f_31 = ATgetArgument(t, 0);
        i_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(o_25, f_31, i_31);
    t = (ATerm) ATmakeAppl(sym__3, o_25, f_31, i_31);
    return(t);
  }
  t = n_25;
  t = map_1_0(r_6, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_31 = NULL;
  static ATerm s_6 (ATerm t)
  {
    ATerm m_31 = NULL,t_31 = NULL;
    m_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), m_31);
    t = n_8(not_null(j_31), m_31, t);
    t_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_31, t_31);
    return(t);
  }
  if(((j_31 != NULL) && (j_31 != t)))
    _fail(t);
  else
    j_31 = t;
  t = SSL_table_keys(j_31);
  t = map_1_0(s_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_g_14;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm z_20, ATerm t)
{
  ATerm y_31 = NULL,c_32 = NULL,d_32 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm t_6 (ATerm t)
    {
      static ATerm g_33 (ATerm f_32, ATerm t)
      {
        ATerm j_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
        t = f_32;
        if(match_cons(t, sym__2))
          {
            ATerm z_18 = ATgetArgument(t, 0);
            j_32 = z_18;
            if(match_cons(z_18, sym_Var_1))
              {
                m_32 = ATgetArgument(z_18, 0);
              }
            else
              _fail(t);
            {
              ATerm b_19 = ATgetArgument(t, 1);
              if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
                {
                  ATerm c_19 = ATgetFirst((ATermList) b_19);
                  if(match_cons(c_19, sym_Defined_2))
                    {
                      n_32 = ATgetArgument(c_19, 0);
                      {
                        ATerm d_19 = ATgetArgument(c_19, 1);
                        if((ATgetSymbol((ATermAppl) d_19) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  o_32 = (ATerm) ATgetNext((ATermList) b_19);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_20;
        {
          static ATerm w_6 (ATerm t)
          {
            if((m_32 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(w_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, j_32, (ATerm) ATinsert(CheckATermList(o_32), (ATerm) ATmakeAppl(sym_Defined_2, n_32, term_v_17)));
        return(t);
      }
      ATerm a_33 = NULL,c_33 = NULL;
      c_33 = t;
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                a_33 = ATgetArgument(t, 0);
                {
                  ATerm h_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_19);
            t = a_33;
            if(match_cons(t, sym_Scopes_0))
              {
                t = c_33;
              }
            else
              {
                ATerm j_19 = t;
                int k_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = g_33(c_33, t);
                    LocalPopChoice(k_19);
                  }
                else
                  {
                    t = j_19;
                    t = c_33;
                  }
              }
          }
        else
          {
            t = f_19;
            {
              ATerm o_19 = t;
              int p_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_33(c_33, t);
                  LocalPopChoice(p_19);
                }
              else
                {
                  t = o_19;
                  t = c_33;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(t_6, t);
  }
  y_31 = t;
  t = term_g_14;
  d_32 = t;
  t = SSL_table_destroy(d_32);
  t = term_g_14;
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_14, y_31);
  t = i_7(c_32, y_31, t);
  t = y_31;
  return(t);
}
ATerm tboundin_3_0 (ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm t)
{
  ATerm w_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  a_37 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_37 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
      {
        ATerm k_6 = NULL,o_6 = NULL,p_6 = NULL,x_14 = NULL;
        t = SSLgetAnnotations(a_37);
        k_6 = t;
        t = b_37;
        t = d_113(t);
        o_6 = t;
        t = w_36;
        t = b_113(t);
        p_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_6, p_6);
        x_14 = t;
        t = SSLsetAnnotations(x_14, k_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          b_37 = ATgetArgument(t, 0);
          w_36 = ATgetArgument(t, 1);
          y_36 = ATgetArgument(t, 2);
          z_36 = ATgetArgument(t, 3);
          {
            ATerm c_8 = NULL,w_8 = NULL,x_8 = NULL,z_8 = NULL,b_9 = NULL,y_14 = NULL;
            t = SSLgetAnnotations(a_37);
            c_8 = t;
            t = b_37;
            t = d_113(t);
            w_8 = t;
            t = w_36;
            t = d_113(t);
            x_8 = t;
            t = y_36;
            t = d_113(t);
            z_8 = t;
            t = z_36;
            t = b_113(t);
            b_9 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_8, x_8, z_8, b_9);
            y_14 = t;
            t = SSLsetAnnotations(y_14, c_8);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              b_37 = ATgetArgument(t, 0);
              w_36 = ATgetArgument(t, 1);
              y_36 = ATgetArgument(t, 2);
              z_36 = ATgetArgument(t, 3);
              {
                ATerm c_10 = NULL,l_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,f_15 = NULL;
                t = SSLgetAnnotations(a_37);
                c_10 = t;
                t = b_37;
                t = d_113(t);
                l_10 = t;
                t = w_36;
                t = d_113(t);
                n_10 = t;
                t = y_36;
                t = d_113(t);
                o_10 = t;
                t = z_36;
                t = b_113(t);
                p_10 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, l_10, n_10, o_10, p_10);
                f_15 = t;
                t = SSLsetAnnotations(f_15, c_10);
              }
            }
          else
            {
              ATerm e_11 = NULL,i_11 = NULL,g_15 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_37 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_37);
              e_11 = t;
              t = b_37;
              t = b_113(t);
              i_11 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, i_11);
              g_15 = t;
              t = SSLsetAnnotations(g_15, e_11);
            }
        }
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm p_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_37);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      {
        ATerm r_37 = NULL,a_38 = NULL,b_38 = NULL,h_38 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_37 = ATgetArgument(t, 0);
            t = r_37;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                r_37 = ATgetArgument(t, 0);
                a_38 = ATgetArgument(t, 1);
                b_38 = ATgetArgument(t, 2);
                h_38 = ATgetArgument(t, 3);
                t = b_38;
                t = map_1_0(z_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    r_37 = ATgetArgument(t, 0);
                    a_38 = ATgetArgument(t, 1);
                    b_38 = ATgetArgument(t, 2);
                    h_38 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_38;
                t = map_1_0(j_7, t);
              }
          }
      }
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm s_38 = NULL;
  ATerm s_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_38 = ATgetArgument(t, 0);
          {
            ATerm y_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_19);
      t = s_38;
    }
  else
    {
      t = s_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_38;
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm i_39 = NULL;
  ATerm a_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_39 = ATgetArgument(t, 0);
          {
            ATerm f_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_20);
      t = i_39;
    }
  else
    {
      t = a_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_39;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(x_6, y_6, tboundin_3_0, t);
  return(t);
}
static ATerm k_7 (ATerm t)
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
static ATerm l_7 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      {
        ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,j_40 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_40 = ATgetArgument(t, 0);
            t = f_40;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                f_40 = ATgetArgument(t, 0);
                g_40 = ATgetArgument(t, 1);
                h_40 = ATgetArgument(t, 2);
                j_40 = ATgetArgument(t, 3);
                t = h_40;
                t = map_1_0(m_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    f_40 = ATgetArgument(t, 0);
                    g_40 = ATgetArgument(t, 1);
                    h_40 = ATgetArgument(t, 2);
                    j_40 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = h_40;
                t = map_1_0(t_7, t);
              }
          }
      }
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm z_40 = NULL;
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_40 = ATgetArgument(t, 0);
          {
            ATerm k_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_20);
      t = z_40;
    }
  else
    {
      t = i_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_40;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm p_41 = NULL;
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_41 = ATgetArgument(t, 0);
          {
            ATerm q_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_20);
      t = p_41;
    }
  else
    {
      t = o_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_41;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm v_39 = NULL,z_39 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      z_39 = ATgetArgument(t, 0);
      t = z_39;
      if(match_cons(t, sym_Rule_3))
        {
          v_39 = ATgetArgument(t, 0);
          {
            ATerm s_20 = ATgetArgument(t, 1);
          }
          {
            ATerm t_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_39;
      t = free_vars_3_0(k_7, l_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          z_39 = ATgetArgument(t, 0);
          {
            ATerm u_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_39;
    }
  return(t);
}
static ATerm n_7 (ATerm q_94 (ATerm), ATerm r_46, ATerm q_46, ATerm t)
{
  static ATerm s_42 (ATerm t)
  {
    ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
    n_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_46;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_42 = ATgetFirst((ATermList) t);
            p_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_20 = t;
          int x_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_42;
              {
                static ATerm v_7 (ATerm t)
                {
                  t = q_46;
                  return(t);
                }
                t = o_7(q_94, v_7, o_42, p_42, t);
              }
              t = s_42(t);
              LocalPopChoice(x_20);
            }
          else
            {
              t = v_20;
              {
                ATerm z_11 = NULL,m_12 = NULL,e_16 = NULL;
                t = SSLgetAnnotations(n_42);
                z_11 = t;
                t = p_42;
                t = s_42(t);
                m_12 = t;
                t = (ATerm) ATinsert(CheckATermList(m_12), o_42);
                e_16 = t;
                t = SSLsetAnnotations(e_16, z_11);
              }
            }
        }
      }
    return(t);
  }
  t = r_46;
  t = s_42(t);
  return(t);
}
ATerm foldr_3_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm i_97 (ATerm), ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
  b_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_43;
      t = g_97(t);
    }
  else
    {
      ATerm k_43 = NULL,l_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_43 = ATgetFirst((ATermList) t);
          d_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_43;
      t = i_97(t);
      k_43 = t;
      t = d_43;
      t = foldr_3_0(g_97, h_97, i_97, t);
      l_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_43, l_43);
      t = h_97(t);
    }
  return(t);
}
static ATerm o_7 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_46, ATerm u_46, ATerm t)
{
  t = u_94(t);
  {
    static ATerm z_7 (ATerm t)
    {
      ATerm e_44 = NULL;
      e_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_46, e_44);
      t = t_94(t);
      return(t);
    }
    t = fetch_1_0(z_7, t);
  }
  t = u_46;
  return(t);
}
static ATerm p_7 (ATerm l_94 (ATerm), ATerm p_46, ATerm o_46, ATerm t)
{
  static ATerm c_45 (ATerm t)
  {
    ATerm w_44 = NULL,x_44 = NULL,z_44 = NULL;
    w_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_44;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_44 = ATgetFirst((ATermList) t);
            z_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_21 = t;
          int b_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_44;
              {
                static ATerm a_8 (ATerm t)
                {
                  t = o_46;
                  return(t);
                }
                t = o_7(l_94, a_8, x_44, z_44, t);
              }
              t = c_45(t);
              LocalPopChoice(b_21);
            }
          else
            {
              t = a_21;
              {
                ATerm b_13 = NULL,g_13 = NULL,i_16 = NULL;
                t = SSLgetAnnotations(w_44);
                b_13 = t;
                t = z_44;
                t = c_45(t);
                g_13 = t;
                t = (ATerm) ATinsert(CheckATermList(g_13), x_44);
                i_16 = t;
                t = SSLsetAnnotations(i_16, b_13);
              }
            }
        }
      }
    return(t);
  }
  t = p_46;
  t = c_45(t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_91 (ATerm), ATerm t)
{
  static ATerm k_46 (ATerm t)
  {
    ATerm e_46 = NULL,h_46 = NULL,i_46 = NULL;
    i_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_46 = ATgetFirst((ATermList) t);
        h_46 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_14 = NULL,p_14 = NULL,o_16 = NULL;
          t = SSLgetAnnotations(i_46);
          c_14 = t;
          t = h_46;
          t = k_46(t);
          p_14 = t;
          t = (ATerm) ATinsert(CheckATermList(p_14), e_46);
          o_16 = t;
          t = SSLsetAnnotations(o_16, c_14);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_46;
        t = c_91(t);
      }
    return(t);
  }
  t = k_46(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
  h_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_45;
    }
  else
    {
      static ATerm m_8 (ATerm t)
      {
        t = not_null(j_45);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_45 = ATgetFirst((ATermList) t);
          if(((j_45 != NULL) && (j_45 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_45;
      t = at_end_1_0(m_8, t);
    }
  return(t);
}
static ATerm l_47 (ATerm a_47, ATerm t)
{
  ATerm b_47 = NULL;
  t = SSL_explode_term(a_47);
  if(match_cons(t, sym__2))
    {
      ATerm c_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_47;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL;
  f_47 = t;
  if(match_cons(t, sym__2))
    {
      d_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_8 (ATerm t)
            {
              t = e_47;
              return(t);
            }
            t = d_47;
            t = at_end_1_0(s_8, t);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = l_47(f_47, t);
          }
      }
    }
  else
    {
      t = l_47(f_47, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm p_92 (ATerm), ATerm q_92 (ATerm), ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t)
{
  static ATerm v_47 (ATerm t)
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_92(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        {
          ATerm m_47 = NULL,n_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,x_17 = NULL;
          t = q_92(t);
          u_47 = t;
          if(match_cons(t, sym__2))
            {
              n_47 = ATgetArgument(t, 0);
              r_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_47);
          m_47 = t;
          t = n_47;
          t = s_92(t);
          s_47 = t;
          t = r_47;
          t = v_47(t);
          t_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_47, t_47);
          x_17 = t;
          t = SSLsetAnnotations(x_17, m_47);
          t = r_92(t);
        }
      }
    return(t);
  }
  t = v_47(t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_21 = ATgetArgument(t, 0);
      if(((ATgetType(h_21) != AT_LIST) || !(ATisEmpty(h_21))))
        _fail(t);
      {
        ATerm i_21 = ATgetArgument(t, 1);
        if(((ATgetType(i_21) != AT_LIST) || !(ATisEmpty(i_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm y_48 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
        {
          y_48 = ATgetFirst((ATermList) j_21);
          b_49 = (ATerm) ATgetNext((ATermList) j_21);
        }
      else
        _fail(t);
      {
        ATerm l_21 = ATgetArgument(t, 1);
        if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
          {
            c_49 = ATgetFirst((ATermList) l_21);
            d_49 = (ATerm) ATgetNext((ATermList) l_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_48, c_49), (ATerm) ATmakeAppl(sym__2, b_49, d_49));
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm e_49 = NULL,h_49 = NULL;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      h_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_49), e_49);
  return(t);
}
static ATerm u_7 (ATerm r_600, ATerm w_600, ATerm j_58, ATerm t)
{
  ATerm y_47 = NULL,n_48 = NULL,q_48 = NULL,r_48 = NULL;
  t = SSL_explode_term(w_600);
  if(match_cons(t, sym__2))
    {
      y_47 = ATgetArgument(t, 0);
      q_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_600);
  if(match_cons(t, sym__2))
    {
      if((y_47 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_48, q_48);
  t = genzip_4_0(u_8, v_8, y_8, _id, t);
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_48, j_58);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t)
{
  static ATerm j_49 (ATerm t)
  {
    ATerm m_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_88(t);
        LocalPopChoice(o_21);
      }
    else
      {
        t = m_21;
        t = m_88(t);
        t = j_49(t);
      }
    return(t);
  }
  t = j_49(t);
  return(t);
}
ATerm for_3_0 (ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm t)
{
  t = o_88(t);
  t = while_not_2_0(p_88, q_88, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm e_50 = NULL;
  e_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_50);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm h_50 = NULL,j_50 = NULL,n_50 = NULL,o_50 = NULL,w_19 = NULL;
  o_50 = t;
  if(match_cons(t, sym__2))
    {
      j_50 = ATgetArgument(t, 0);
      n_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_50);
  h_50 = t;
  t = n_50;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_50, n_50);
  w_19 = t;
  t = SSLsetAnnotations(w_19, h_50);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,h_52 = NULL;
  u_51 = t;
  if(match_cons(t, sym__2))
    {
      v_51 = ATgetArgument(t, 0);
      w_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_51 = ATgetFirst((ATermList) t);
      h_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_53(v_51, w_51, u_51, t);
            LocalPopChoice(r_21);
          }
        else
          {
            t = p_21;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_51), x_51), h_52);
          }
      }
    }
  else
    {
      t = f_53(v_51, w_51, u_51, t);
    }
  return(t);
}
static ATerm f_53 (ATerm p_50, ATerm r_50, ATerm s_50, ATerm t)
{
  ATerm v_50 = NULL,z_50 = NULL,d_25 = NULL,c_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL;
  t = SSLgetAnnotations(s_50);
  v_50 = t;
  t = r_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_51 = ATgetFirst((ATermList) t);
      h_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_51;
  if(match_cons(t, sym__2))
    {
      f_51 = ATgetArgument(t, 0);
      g_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_51;
        if((f_51 != t))
          {
            _fail(t);
          }
        t = h_51;
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = r_50;
        t = u_7(f_51, g_51, h_51, t);
      }
  }
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_50, z_50);
  d_25 = t;
  t = SSLsetAnnotations(d_25, v_50);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm e_53 = NULL;
  if(match_cons(t, sym__2))
    {
      e_53 = ATgetArgument(t, 0);
      if((e_53 != ATgetArgument(t, 1)))
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
  ATerm e_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_9, c_9, d_9, t);
      LocalPopChoice(g_22);
    }
  else
    {
      t = e_22;
      {
        ATerm p_52 = NULL,q_52 = NULL,x_52 = NULL;
        p_52 = t;
        if(match_cons(t, sym__2))
          {
            q_52 = ATgetArgument(t, 0);
            x_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_52;
        t = p_7(e_9, q_52, x_52, t);
      }
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(l_9, z_14, a_15, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm b_15 = NULL;
  if(match_cons(t, sym__2))
    {
      b_15 = ATgetArgument(t, 0);
      if((b_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(r_9, o_15, p_15, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm q_15 = NULL;
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      if((q_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm k_54 (ATerm t)
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_110(t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        {
          ATerm s_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_53 = NULL,o_53 = NULL,u_14 = NULL,v_14 = NULL;
              n_53 = t;
              t = l_110(t);
              o_53 = t;
              t = n_53;
              {
                static ATerm f_9 (ATerm t)
                {
                  ATerm t_53 = NULL;
                  t = k_54(t);
                  t_53 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_53, o_53);
                  t = diff_0_0(t);
                  return(t);
                }
                t = m_110(f_9, k_54, g_9, t);
              }
              v_14 = t;
              t = SSL_explode_term(v_14);
              if(match_cons(t, sym__2))
                {
                  ATerm u_22 = ATgetArgument(t, 0);
                  u_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_14;
              t = foldr_3_0(j_9, k_9, _id, t);
              LocalPopChoice(t_22);
            }
          else
            {
              t = s_22;
              {
                ATerm d_15 = NULL,e_15 = NULL;
                e_15 = t;
                t = SSL_explode_term(e_15);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_22 = ATgetArgument(t, 0);
                    d_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_15;
                t = foldr_3_0(m_9, q_9, k_54, t);
              }
            }
        }
      }
    return(t);
  }
  t = k_54(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm u_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_55);
  return(t);
}
static ATerm u_9 (ATerm t)
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
        ATerm w_55 = NULL,x_55 = NULL,a_56 = NULL,d_56 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_55 = ATgetArgument(t, 0);
            t = w_55;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                w_55 = ATgetArgument(t, 0);
                x_55 = ATgetArgument(t, 1);
                a_56 = ATgetArgument(t, 2);
                d_56 = ATgetArgument(t, 3);
                t = a_56;
                t = map_1_0(v_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    w_55 = ATgetArgument(t, 0);
                    x_55 = ATgetArgument(t, 1);
                    a_56 = ATgetArgument(t, 2);
                    d_56 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_56;
                t = map_1_0(w_9, t);
              }
          }
      }
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm w_56 = NULL;
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_56 = ATgetArgument(t, 0);
          {
            ATerm a_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_22);
      t = w_56;
    }
  else
    {
      t = y_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_56;
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm r_57 = NULL;
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_57 = ATgetArgument(t, 0);
          {
            ATerm g_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_23);
      t = r_57;
    }
  else
    {
      t = b_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_57;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm s_54 = NULL,w_54 = NULL,x_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,t_26 = NULL,s_26 = NULL;
  q_55 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_55 = ATgetArgument(t, 0);
      o_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_55);
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, n_55, o_55);
  s_26 = t;
  t = SSLsetAnnotations(s_26, m_55);
  p_55 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_54 = ATgetArgument(t, 0);
      {
        ATerm i_23 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_54;
  t = free_vars_3_0(s_9, u_9, tboundin_3_0, t);
  s_54 = t;
  t = undefine_unbound_MarkVar_0_1(s_54, t);
  w_54 = t;
  t = p_55;
  if(match_cons(t, sym_Let_2))
    {
      a_55 = ATgetArgument(t, 0);
      b_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_55);
  z_54 = t;
  t = a_55;
  {
    static ATerm z_9 (ATerm t)
    {
      ATerm e_58 = NULL,k_58 = NULL,o_58 = NULL;
      e_58 = t;
      t = term_g_14;
      o_58 = t;
      t = SSL_table_destroy(o_58);
      t = term_g_14;
      k_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_g_14, w_54);
      t = i_7(k_58, w_54, t);
      t = e_58;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(z_9, t);
  }
  c_55 = t;
  t = term_g_14;
  l_55 = t;
  t = SSL_table_destroy(l_55);
  t = term_g_14;
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_14, w_54);
  t = i_7(k_55, w_54, t);
  t = b_55;
  t = mark_buv_0_0(t);
  j_55 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, c_55, j_55);
  t_26 = t;
  t = SSLsetAnnotations(t_26, z_54);
  return(t);
}
static ATerm w_7 (ATerm g_81 (ATerm), ATerm d_24, ATerm b_24, ATerm t)
{
  ATerm p_58 = NULL,s_58 = NULL,t_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
  w_58 = t;
  t = g_81(t);
  p_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_58, d_24, b_24);
  t = o_8(p_58, d_24, b_24, t);
  {
    ATerm m_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_59 = NULL;
        t = term_s_23;
        b_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_58, term_s_23);
        t = n_8(p_58, b_59, t);
        LocalPopChoice(o_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_58 = ATgetFirst((ATermList) t);
      t_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_s_23;
  x_58 = t;
  t = (ATerm) ATinsert(CheckATermList(t_58), (ATerm) ATinsert(CheckATermList(s_58), d_24));
  y_58 = t;
  t = SSL_table_put(p_58, x_58, y_58);
  t = w_58;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm c_59 = NULL,e_59 = NULL,f_59 = NULL;
  c_59 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_59);
  e_59 = t;
  t = term_v_23;
  f_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_59), term_v_23);
  t = w_7(b_10, e_59, f_59, t);
  t = c_59;
  return(t);
}
static ATerm x_7 (ATerm q_24, ATerm r_24, ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL;
  h_59 = t;
  {
    ATerm w_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_24, r_24);
        t = n_8(q_24, r_24, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_23 = ATgetFirst((ATermList) t);
            g_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_23);
        t = SSL_table_put(q_24, r_24, g_59);
        t = (ATerm) ATmakeAppl(sym__3, q_24, r_24, g_59);
      }
    else
      {
        t = w_23;
        t = SSL_table_remove(q_24, r_24);
        t = (ATerm) ATmakeAppl(sym__2, q_24, r_24);
      }
  }
  t = h_59;
  return(t);
}
ATerm end_scope_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm i_59 = NULL,k_59 = NULL,l_59 = NULL,n_59 = NULL,o_59 = NULL;
  n_59 = t;
  t = d_81(t);
  l_59 = t;
  {
    ATerm c_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_59 = NULL;
        t = term_s_23;
        p_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_59, term_s_23);
        t = n_8(l_59, p_59, t);
        LocalPopChoice(e_24);
      }
    else
      {
        t = c_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_59 = ATgetFirst((ATermList) t);
      i_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_s_23;
  o_59 = t;
  t = SSL_table_put(l_59, o_59, i_59);
  t = k_59;
  {
    static ATerm d_10 (ATerm t)
    {
      ATerm q_59 = NULL;
      q_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_59, q_59);
      t = x_7(l_59, q_59, t);
      return(t);
    }
    t = map_1_0(d_10, t);
  }
  t = n_59;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_99(t);
      t = k_99(t);
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      t = k_99(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm s_59 = NULL,w_59 = NULL,x_59 = NULL,z_59 = NULL,e_60 = NULL;
  w_59 = t;
  t = c_81(t);
  s_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_59, term_s_23);
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_60 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_24 = ATgetArgument(t, 0);
            ATerm o_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_23;
        j_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_59, term_s_23);
        t = n_8(s_59, j_60, t);
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = (ATerm) ATempty;
      }
  }
  x_59 = t;
  t = term_s_23;
  z_59 = t;
  t = (ATerm) ATinsert(CheckATermList(x_59), (ATerm) ATempty);
  e_60 = t;
  t = SSL_table_put(s_59, z_59, e_60);
  t = w_59;
  return(t);
}
ATerm scope_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  static ATerm f_10 (ATerm t)
  {
    t = end_scope_1_0(e_81, t);
    return(t);
  }
  t = begin_scope_1_0(e_81, t);
  t = restore_always_2_0(f_81, f_10, t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm k_60 = NULL,p_60 = NULL,r_60 = NULL,v_60 = NULL,y_60 = NULL,w_26 = NULL;
  y_60 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_60 = ATgetArgument(t, 0);
      r_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_60);
  k_60 = t;
  t = r_60;
  {
    static ATerm h_10 (ATerm t)
    {
      ATerm z_60 = NULL;
      z_60 = t;
      t = p_60;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = z_60;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(g_10, h_10, t);
  }
  v_60 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, p_60, v_60);
  w_26 = t;
  t = SSLsetAnnotations(w_26, k_60);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm p_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,y_26 = NULL;
      c_61 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_61);
      a_61 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, b_61);
      y_26 = t;
      t = SSLsetAnnotations(y_26, a_61);
      LocalPopChoice(t_24);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = p_24;
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,i_61 = NULL,n_27 = NULL;
            i_61 = t;
            if(match_cons(t, sym_App_2))
              {
                e_61 = ATgetArgument(t, 0);
                f_61 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_61);
            d_61 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, e_61, f_61);
            n_27 = t;
            t = SSLsetAnnotations(n_27, d_61);
            LocalPopChoice(v_24);
            {
              ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,o_27 = NULL;
              v_61 = t;
              if(match_cons(t, sym_App_2))
                {
                  l_61 = ATgetArgument(t, 0);
                  m_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_61);
              k_61 = t;
              t = l_61;
              t = mark_buv_0_0(t);
              t_61 = t;
              t = m_61;
              t = mark_build_vars_0_0(t);
              u_61 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, t_61, u_61);
              o_27 = t;
              t = SSLsetAnnotations(o_27, k_61);
            }
          }
        else
          {
            t = u_24;
            {
              ATerm e_25 = t;
              int g_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,p_27 = NULL;
                  y_61 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      x_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_61);
                  w_61 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, x_61);
                  p_27 = t;
                  t = SSLsetAnnotations(p_27, w_61);
                  LocalPopChoice(g_25);
                  {
                    ATerm b_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,q_27 = NULL;
                    f_62 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        d_62 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(f_62);
                    b_62 = t;
                    t = d_62;
                    t = mark_buv_0_0(t);
                    e_62 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, e_62);
                    q_27 = t;
                    t = SSLsetAnnotations(q_27, b_62);
                  }
                }
              else
                {
                  t = e_25;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_7 (ATerm y_24, ATerm z_24, ATerm a_25, ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
  n_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_24, z_24);
  t = n_8(y_24, z_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_25 = ATgetFirst((ATermList) t);
      m_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_62), a_25);
  o_62 = t;
  t = SSL_table_put(y_24, z_24, o_62);
  t = n_62;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL;
  u_62 = t;
  t = term_g_14;
  v_62 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_62);
  w_62 = t;
  t = term_l_25;
  x_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_14, (ATerm)ATmakeAppl(sym_Var_1, u_62), term_l_25);
  t = y_7(v_62, w_62, x_62, t);
  t = u_62;
  return(t);
}
static ATerm b_8 (ATerm w_24, ATerm x_24, ATerm t)
{
  ATerm y_62 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_24, x_24);
  t = n_8(w_24, x_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_62 = ATgetFirst((ATermList) t);
      {
        ATerm m_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_62;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL;
  l_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,w_17 = NULL;
        t = term_g_14;
        w_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_14, l_64);
        t = b_8(w_17, l_64, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_25) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            e_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, m_64);
        f_17 = t;
        t = (ATerm) ATinsert(ATempty, e_17);
        g_17 = t;
        t = SSLsetAnnotations(f_17, g_17);
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_18 = NULL,g_18 = NULL,u_18 = NULL,a_19 = NULL;
              t = term_g_14;
              a_19 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_14, l_64);
              t = b_8(a_19, l_64, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm v_25 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_25) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  f_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, m_64);
              g_18 = t;
              t = (ATerm) ATinsert(ATempty, f_18);
              u_18 = t;
              t = SSLsetAnnotations(g_18, u_18);
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
              {
                ATerm i_19 = NULL,m_19 = NULL,n_19 = NULL,u_19 = NULL;
                t = term_g_14;
                u_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_14, l_64);
                t = b_8(u_19, l_64, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm w_25 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    i_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, m_64);
                m_19 = t;
                t = (ATerm) ATinsert(ATempty, i_19);
                n_19 = t;
                t = SSLsetAnnotations(m_19, n_19);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,x_27 = NULL;
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
    }
  u_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_64);
  r_64 = t;
  t = s_64;
  t = DeclareBound_0_0(t);
  t_64 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_64);
  x_27 = t;
  t = SSLsetAnnotations(x_27, r_64);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm z_25 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,z_27 = NULL;
      z_64 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_64);
      x_64 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_64);
      z_27 = t;
      t = SSLsetAnnotations(z_27, x_64);
      LocalPopChoice(b_26);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = z_25;
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,a_28 = NULL;
            d_65 = t;
            if(match_cons(t, sym_App_2))
              {
                b_65 = ATgetArgument(t, 0);
                c_65 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_65);
            a_65 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, b_65, c_65);
            a_28 = t;
            t = SSLsetAnnotations(a_28, a_65);
            LocalPopChoice(f_26);
            {
              ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,b_28 = NULL;
              j_65 = t;
              if(match_cons(t, sym_App_2))
                {
                  f_65 = ATgetArgument(t, 0);
                  g_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_65);
              e_65 = t;
              t = f_65;
              t = mark_buv_0_0(t);
              h_65 = t;
              t = g_65;
              t = mark_build_vars_0_0(t);
              i_65 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, h_65, i_65);
              b_28 = t;
              t = SSLsetAnnotations(b_28, e_65);
            }
          }
        else
          {
            t = e_26;
            {
              ATerm g_26 = t;
              int h_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,c_28 = NULL;
                  m_65 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      l_65 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_65);
                  k_65 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, l_65);
                  c_28 = t;
                  t = SSLsetAnnotations(c_28, k_65);
                  LocalPopChoice(h_26);
                  {
                    ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,d_28 = NULL;
                    q_65 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        o_65 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(q_65);
                    n_65 = t;
                    t = o_65;
                    t = mark_buv_0_0(t);
                    p_65 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, p_65);
                    d_28 = t;
                    t = SSLsetAnnotations(d_28, n_65);
                  }
                }
              else
                {
                  t = g_26;
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
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_66 = NULL,m_66 = NULL;
      l_66 = t;
      if(match_cons(t, sym_Match_1))
        {
          m_66 = ATgetArgument(t, 0);
          {
            ATerm z_19 = NULL,c_20 = NULL,q_28 = NULL;
            t = SSLgetAnnotations(l_66);
            z_19 = t;
            t = m_66;
            t = mark_match_vars_0_0(t);
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, c_20);
            q_28 = t;
            t = SSLsetAnnotations(q_28, z_19);
          }
        }
      else
        {
          ATerm w_20 = NULL,y_20 = NULL,r_28 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              m_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_66);
          w_20 = t;
          t = m_66;
          t = mark_build_vars_0_0(t);
          y_20 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, y_20);
          r_28 = t;
          t = SSLsetAnnotations(r_28, w_20);
        }
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            {
              ATerm p_26 = t;
              int q_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  LocalPopChoice(q_26);
                }
              else
                {
                  t = p_26;
                  {
                    ATerm r_26 = t;
                    int u_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(u_26);
                      }
                    else
                      {
                        t = r_26;
                        {
                          ATerm v_26 = t;
                          int x_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL;
                              n_66 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  o_66 = ATgetArgument(t, 0);
                                  p_66 = ATgetArgument(t, 1);
                                  q_66 = ATgetArgument(t, 2);
                                  r_66 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = n_66;
                              t = g_7(o_66, p_66, q_66, r_66, t);
                              LocalPopChoice(x_26);
                            }
                          else
                            {
                              t = v_26;
                              {
                                ATerm c_27 = t;
                                int d_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(d_27);
                                  }
                                else
                                  {
                                    t = c_27;
                                    {
                                      ATerm e_27 = t;
                                      int f_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL;
                                          z_66 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              a_67 = ATgetArgument(t, 0);
                                              t = a_67;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  w_66 = ATgetArgument(t, 0);
                                                  x_66 = ATgetArgument(t, 1);
                                                  y_66 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = z_66;
                                              t = f_7(w_66, x_66, y_66, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  a_67 = ATgetArgument(t, 0);
                                                  t = a_67;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      w_66 = ATgetArgument(t, 0);
                                                      x_66 = ATgetArgument(t, 1);
                                                      y_66 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_66;
                                                  t = e_7(w_66, x_66, y_66, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      a_67 = ATgetArgument(t, 0);
                                                      b_67 = ATgetArgument(t, 1);
                                                      c_67 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_66;
                                                  t = d_7(a_67, b_67, c_67, t);
                                                }
                                            }
                                          LocalPopChoice(f_27);
                                        }
                                      else
                                        {
                                          t = e_27;
                                          {
                                            ATerm h_27 = t;
                                            int j_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                LocalPopChoice(j_27);
                                              }
                                            else
                                              {
                                                t = h_27;
                                                {
                                                  ATerm k_27 = t;
                                                  int m_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(m_27);
                                                    }
                                                  else
                                                    {
                                                      t = k_27;
                                                      {
                                                        ATerm r_27 = t;
                                                        int s_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm m_67 = NULL;
                                                            m_67 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm u_27 = ATgetArgument(t, 0);
                                                                ATerm v_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = m_67;
                                                            t = c_7(t);
                                                            LocalPopChoice(s_27);
                                                          }
                                                        else
                                                          {
                                                            t = r_27;
                                                            {
                                                              ATerm w_27 = t;
                                                              int y_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  LocalPopChoice(y_27);
                                                                }
                                                              else
                                                                {
                                                                  t = w_27;
                                                                  {
                                                                    ATerm e_28 = t;
                                                                    int f_28 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        LocalPopChoice(f_28);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_28;
                                                                        {
                                                                          ATerm g_28 = t;
                                                                          int h_28 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(h_28);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = g_28;
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
static ATerm i_10 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL;
  z_67 = t;
  t = term_w_13;
  a_68 = t;
  t = (ATerm) ATinsert(ATempty, term_i_28);
  b_68 = t;
  t = SSL_printnl(a_68, b_68);
  t = z_67;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,u_28 = NULL;
  f_68 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_68);
  c_68 = t;
  t = d_68;
  t = map_1_0(mark_buv_0_0, t);
  e_68 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_68);
  u_28 = t;
  t = SSLsetAnnotations(u_28, c_68);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
  g_68 = t;
  t = term_w_13;
  h_68 = t;
  t = (ATerm) ATinsert(ATempty, term_k_28);
  i_68 = t;
  t = SSL_printnl(h_68, i_68);
  t = g_68;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,w_28 = NULL,v_28 = NULL;
  t = if_verbose4_1_0(i_10, t);
  y_67 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_67);
  r_67 = t;
  t = s_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_67 = ATgetFirst((ATermList) t);
      v_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_67);
  t_67 = t;
  t = v_67;
  t = Cons_2_0(j_10, r_10, t);
  w_67 = t;
  t = (ATerm) ATinsert(CheckATermList(w_67), u_67);
  v_28 = t;
  t = SSLsetAnnotations(v_28, t_67);
  x_67 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_67);
  w_28 = t;
  t = SSLsetAnnotations(w_28, r_67);
  t = if_verbose4_1_0(s_10, t);
  return(t);
}
static ATerm e_8 (ATerm r_32, ATerm s_32, ATerm t)
{
  ATerm j_68 = NULL;
  t = SSL_fputc(r_32, s_32);
  j_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_68);
  return(t);
}
static ATerm f_8 (ATerm c_38, ATerm d_38, ATerm t)
{
  ATerm k_68 = NULL;
  t = SSL_write_term_to_stream_text(c_38, d_38);
  k_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_68);
  return(t);
}
static ATerm h_8 (ATerm j_89 (ATerm), ATerm r_314, ATerm g_38, ATerm t)
{
  ATerm l_68 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_314, term_l_28);
  t = k_8(t);
  l_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_68, g_38);
  t = j_89(t);
  t = fclose_0_0(t);
  t = g_38;
  return(t);
}
static ATerm g_8 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm m_68 = NULL;
  t = SSL_write_term_to_stream_baf(y_37, z_37);
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_68);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_28 = ATgetArgument(t, 0);
      if(match_cons(m_28, sym_Stream_1))
        {
          x_21 = ATgetArgument(m_28, 0);
        }
      else
        _fail(t);
      y_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8(x_21, y_21, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_28 = ATgetArgument(t, 0);
      if(match_cons(s_28, sym_Stream_1))
        {
          q_22 = ATgetArgument(s_28, 0);
        }
      else
        _fail(t);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(q_22, r_22, t);
  n_22 = t;
  t = term_t_28;
  o_22 = t;
  t = n_22;
  if(match_cons(t, sym_Stream_1))
    {
      p_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_28, n_22);
  t = e_8(o_22, p_22, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,a_70 = NULL,b_70 = NULL,b_29 = NULL,a_29 = NULL;
  r_68 = t;
  if(match_cons(t, sym__2))
    {
      y_68 = ATgetArgument(t, 0);
      z_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_68);
  x_68 = t;
  t = y_68;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_10 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_68 != NULL) && (q_68 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(u_10, t);
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = term_z_28;
        q_68 = t;
      }
  }
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_69, z_68);
  a_29 = t;
  t = SSLsetAnnotations(a_29, x_68);
  t = r_68;
  if(match_cons(t, sym__2))
    {
      t_68 = ATgetArgument(t, 0);
      u_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_68);
  s_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_68, (ATerm) ATmakeAppl(sym__2, not_null(q_68), u_68));
  b_29 = t;
  t = SSLsetAnnotations(b_29, s_68);
  w_68 = t;
  if(match_cons(t, sym__2))
    {
      a_70 = ATgetArgument(t, 0);
      b_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL,s_21 = NULL,t_21 = NULL,v_21 = NULL,w_21 = NULL,c_29 = NULL;
        t = SSLgetAnnotations(w_68);
        n_21 = t;
        t = a_70;
        t = fetch_1_0(v_10, t);
        s_21 = t;
        t = b_70;
        if(match_cons(t, sym__2))
          {
            v_21 = ATgetArgument(t, 0);
            w_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_8(x_10, v_21, w_21, t);
        t_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
        c_29 = t;
        t = SSLsetAnnotations(c_29, n_21);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        {
          ATerm h_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,j_29 = NULL;
          t = SSLgetAnnotations(w_68);
          h_22 = t;
          t = b_70;
          if(match_cons(t, sym__2))
            {
              l_22 = ATgetArgument(t, 0);
              m_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_8(y_10, l_22, m_22, t);
          k_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_70, k_22);
          j_29 = t;
          t = SSLsetAnnotations(j_29, h_22);
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
ATerm apply_strategy_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  i_70 = t;
  t = dtime_0_0(t);
  t = i_70;
  t = x_103(t);
  h_70 = t;
  t = dtime_0_0(t);
  e_70 = t;
  t = h_70;
  if(match_cons(t, sym__2))
    {
      f_70 = ATgetArgument(t, 0);
      g_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_70), (ATerm) ATmakeAppl(sym_Runtime_1, e_70)), g_70);
  return(t);
}
static ATerm w_70 (ATerm q_70, ATerm t)
{
  t = SSL_fclose(q_70);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL;
  u_70 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_70 = ATgetArgument(t, 0);
      {
        ATerm m_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_70);
            LocalPopChoice(p_29);
          }
        else
          {
            t = m_29;
            t = w_70(u_70, t);
          }
      }
    }
  else
    {
      t = w_70(u_70, t);
    }
  return(t);
}
static ATerm i_8 (ATerm e_38, ATerm t)
{
  t = SSL_read_term_from_stream(e_38);
  return(t);
}
static ATerm j_8 (ATerm t_32, ATerm u_32, ATerm t)
{
  ATerm x_70 = NULL;
  t = SSL_fopen(t_32, u_32);
  x_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_70);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_70 = NULL;
  t = SSL_stdin_stream();
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_70);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_70 = NULL;
  t = SSL_stdout_stream();
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_70);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_71 = NULL;
  t = SSL_stderr_stream();
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_71);
  return(t);
}
static ATerm h_72 (ATerm g_71, ATerm t)
{
  ATerm h_71 = NULL;
  t = SSL_explode_term(g_71);
  if(match_cons(t, sym__2))
    {
      ATerm q_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_29 = ATgetArgument(t, 1);
        if(((ATgetType(r_29) == AT_LIST) && !(ATisEmpty(r_29))))
          {
            h_71 = ATgetFirst((ATermList) r_29);
            {
              ATerm t_29 = (ATerm) ATgetNext((ATermList) r_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_71;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_71;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_71;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_71;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_72 (ATerm k_71, ATerm l_71, ATerm m_71, ATerm t)
{
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL,s_71 = NULL,s_29 = NULL;
  t = SSLgetAnnotations(m_71);
  p_71 = t;
  t = k_71;
  if(match_cons(t, sym_Path_1))
    {
      s_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_71, l_71);
  s_29 = t;
  t = SSLsetAnnotations(s_29, p_71);
  if(match_cons(t, sym__2))
    {
      n_71 = ATgetArgument(t, 0);
      o_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(n_71, o_71, t);
  return(t);
}
static ATerm j_72 (ATerm u_71, ATerm v_71, ATerm w_71, ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL,c_72 = NULL,z_29 = NULL;
  t = SSLgetAnnotations(w_71);
  z_71 = t;
  t = SSL_is_string(u_71);
  c_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_72, v_71);
  z_29 = t;
  t = SSLsetAnnotations(z_29, z_71);
  if(match_cons(t, sym__2))
    {
      x_71 = ATgetArgument(t, 0);
      y_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(x_71, y_71, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL;
  e_72 = t;
  if(match_cons(t, sym__2))
    {
      f_72 = ATgetArgument(t, 0);
      g_72 = ATgetArgument(t, 1);
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_72(e_72, t);
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            {
              ATerm w_29 = t;
              int x_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_72(f_72, g_72, e_72, t);
                  LocalPopChoice(x_29);
                }
              else
                {
                  t = w_29;
                  t = j_72(f_72, g_72, e_72, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_72(e_72, t);
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_72 = NULL;
      n_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_72, term_c_30);
      t = k_8(t);
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      t = debug_1_0(z_10, t);
      _fail(t);
    }
  l_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_8(m_72, t);
  k_72 = t;
  t = l_72;
  t = fclose_0_0(t);
  t = k_72;
  return(t);
}
ATerm fetch_1_0 (ATerm w_90 (ATerm), ATerm t)
{
  static ATerm l_73 (ATerm t)
  {
    ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL;
    i_73 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_73 = ATgetFirst((ATermList) t);
        k_73 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_30 = t;
      int e_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_23 = NULL,k_23 = NULL,h_30 = NULL;
          t = SSLgetAnnotations(i_73);
          e_23 = t;
          t = j_73;
          t = w_90(t);
          k_23 = t;
          t = (ATerm) ATinsert(CheckATermList(k_73), k_23);
          h_30 = t;
          t = SSLsetAnnotations(h_30, e_23);
          LocalPopChoice(e_30);
        }
      else
        {
          t = d_30;
          {
            ATerm x_23 = NULL,a_24 = NULL,i_30 = NULL;
            t = SSLgetAnnotations(i_73);
            x_23 = t;
            t = k_73;
            t = l_73(t);
            a_24 = t;
            t = (ATerm) ATinsert(CheckATermList(a_24), j_73);
            i_30 = t;
            t = SSLsetAnnotations(i_30, x_23);
          }
        }
    }
    return(t);
  }
  t = l_73(t);
  return(t);
}
static ATerm d_8 (ATerm k_31, ATerm l_31, ATerm t)
{
  t = SSL_strcat(k_31, l_31);
  return(t);
}
ATerm debug_1_0 (ATerm h_89 (ATerm), ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL;
  o_73 = t;
  t = h_89(t);
  p_73 = t;
  t = term_w_13;
  q_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_73), p_73);
  r_73 = t;
  t = SSL_printnl(q_73, r_73);
  t = o_73;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
    }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_73 = NULL;
      y_73 = t;
      t = SSL_is_string(y_73);
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_11, t);
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
            {
              ATerm e_74 = NULL,f_74 = NULL,g_74 = NULL;
              e_74 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_74 = ATgetArgument(t, 0);
                  t = f_74;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_74 = ATgetArgument(t, 0);
                      t = f_74;
                      {
                        ATerm r_30 = t;
                        int t_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(t_30);
                          }
                        else
                          {
                            t = r_30;
                            t = debug_1_0(b_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_74 = NULL,l_74 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_74 = ATgetArgument(t, 0);
                          g_74 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_74;
                      t = eval_config_0_0(t);
                      k_74 = t;
                      t = g_74;
                      t = eval_config_0_0(t);
                      l_74 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_74, l_74);
                      t = d_8(k_74, l_74, t);
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
  ATerm p_74 = NULL,q_74 = NULL;
  p_74 = t;
  t = term_v_30;
  q_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_30, p_74);
  t = n_8(q_74, p_74, t);
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_74 = NULL,s_74 = NULL;
        t = eval_config_0_0(t);
        r_74 = t;
        t = term_v_30;
        s_74 = t;
        t = SSL_table_put(s_74, p_74, r_74);
        t = r_74;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_112 (ATerm), ATerm t)
{
  ATerm w_74 = NULL;
  w_74 = t;
  {
    ATerm b_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_74 = NULL;
        t = term_e_14;
        t = get_config_0_0(t);
        y_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_74, term_g_31);
        t = geq_0_0(t);
        t = w_74;
        t = c_112(t);
        LocalPopChoice(d_31);
      }
    else
      {
        t = b_31;
        t = w_74;
      }
  }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm b_75 = NULL;
  b_75 = t;
  if(match_string(t, "-k"))
    {
      t = b_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_75;
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL;
  c_75 = t;
  t = SSL_string_to_int(c_75);
  d_75 = t;
  t = term_h_31;
  e_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_31, d_75);
  t = q_8(e_75, d_75, t);
  t = c_75;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_11, h_11, j_11, t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm g_75 = NULL;
  g_75 = t;
  if(match_string(t, "-S"))
    {
      t = g_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_75;
    }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL;
  t = term_e_14;
  h_75 = t;
  t = term_o_31;
  i_75 = t;
  t = term_p_31;
  t = q_8(h_75, i_75, t);
  t = term_q_31;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_r_31;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL;
  j_75 = t;
  t = SSL_string_to_int(j_75);
  k_75 = t;
  t = term_e_14;
  l_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_14, k_75);
  t = q_8(l_75, k_75, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_75);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL;
  t = term_u_31;
  m_75 = t;
  t = term_v_13;
  n_75 = t;
  t = term_v_31;
  t = q_8(m_75, n_75, t);
  t = term_w_31;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_11, m_11, p_11, t);
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
      {
        ATerm b_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_11, t_11, u_11, t);
            LocalPopChoice(e_32);
          }
        else
          {
            t = b_32;
            t = Option_3_0(v_11, w_11, x_11, t);
          }
      }
    }
  return(t);
}
static ATerm q_8 (ATerm i_52, ATerm j_52, ATerm t)
{
  ATerm o_75 = NULL;
  t = term_v_30;
  o_75 = t;
  t = SSL_table_put(o_75, i_52, j_52);
  t = (ATerm) ATmakeAppl(sym__3, term_v_30, i_52, j_52);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL;
      t = term_v_13;
      t = e_0(t);
      t_75 = t;
      t = term_g_32;
      u_75 = t;
      t = term_h_32;
      v_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_32, term_h_32, t_75);
      t = o_8(u_75, v_75, t_75, t);
      _fail(t);
    }
  else
    {
      ATerm y_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_75 = ATgetFirst((ATermList) t);
          s_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_75;
      t = c_0(t);
      t = term_v_13;
      t = d_0(t);
      y_75 = t;
      t = (ATerm) ATinsert(CheckATermList(s_75), y_75);
    }
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm a_76 = NULL;
  a_76 = t;
  if(match_string(t, "-o"))
    {
      t = a_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_76;
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm b_76 = NULL,c_76 = NULL;
  b_76 = t;
  t = term_i_32;
  c_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_32, b_76);
  t = q_8(c_76, b_76, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_76);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_11, a_12, b_12, t);
  return(t);
}
static ATerm o_8 (ATerm l_24, ATerm m_24, ATerm k_24, ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
  e_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_24, m_24);
  {
    ATerm l_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_32 = ATgetArgument(t, 0);
            ATerm v_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_24, m_24);
        t = n_8(l_24, m_24, t);
        LocalPopChoice(p_32);
      }
    else
      {
        t = l_32;
        t = (ATerm) ATempty;
      }
  }
  f_76 = t;
  t = (ATerm) ATinsert(CheckATermList(f_76), k_24);
  g_76 = t;
  t = SSL_table_put(l_24, m_24, g_76);
  t = e_76;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL;
      t = term_v_13;
      t = n_0(t);
      r_76 = t;
      t = term_g_32;
      s_76 = t;
      t = term_h_32;
      t_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_32, term_h_32, r_76);
      t = o_8(s_76, t_76, r_76, t);
      _fail(t);
    }
  else
    {
      ATerm x_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_76 = ATgetFirst((ATermList) t);
          o_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_76;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_76 = ATgetFirst((ATermList) t);
          q_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_76;
      t = k_0(t);
      t = p_76;
      t = l_0(t);
      x_76 = t;
      t = (ATerm) ATinsert(CheckATermList(q_76), x_76);
    }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm z_76 = NULL;
  z_76 = t;
  if(match_string(t, "-i"))
    {
      t = z_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_76;
    }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL;
  a_77 = t;
  t = term_w_32;
  b_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_32, a_77);
  t = q_8(b_77, a_77, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_77);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_12, d_12, f_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_13;
  t = whoami_0_0(t);
  c_77 = t;
  t = term_w_13;
  e_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_32), c_77);
  f_77 = t;
  t = SSL_printnl(e_77, f_77);
  t = term_a_14;
  d_77 = t;
  t = SSL_exit(d_77);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_32;
  t = get_config_0_0(t);
  return(t);
}
static ATerm l_8 (ATerm g_39, ATerm h_39, ATerm t)
{
  ATerm b_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_39, h_39);
      LocalPopChoice(d_33);
    }
  else
    {
      t = b_33;
      t = SSL_addr(g_39, h_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_97 (ATerm), ATerm f_97 (ATerm), ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
  h_77 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_77;
      t = e_97(t);
    }
  else
    {
      ATerm m_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_77 = ATgetFirst((ATermList) t);
          j_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_77;
      t = foldr_2_0(e_97, f_97, t);
      m_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_77, m_77);
      t = f_97(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_o_31;
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm h_25 = NULL,j_25 = NULL;
  if(match_cons(t, sym__2))
    {
      h_25 = ATgetArgument(t, 0);
      j_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_8(h_25, j_25, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_77 = NULL,b_25 = NULL,c_25 = NULL;
  t = times_0_0(t);
  c_25 = t;
  t = SSL_explode_term(c_25);
  if(match_cons(t, sym__2))
    {
      ATerm e_33 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_25;
  t = foldr_2_0(g_12, h_12, t);
  p_77 = t;
  t = SSL_TicksToSeconds(p_77);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_78 = NULL,b_78 = NULL,c_78 = NULL;
  a_78 = t;
  if(match_cons(t, sym__2))
    {
      b_78 = ATgetArgument(t, 0);
      c_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_78;
        if((b_78 != t))
          {
            _fail(t);
          }
        t = a_78;
        LocalPopChoice(h_33);
      }
    else
      {
        t = f_33;
        t = (ATerm) ATmakeAppl(sym__2, b_78, c_78);
        {
          ATerm i_33 = t;
          int j_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_78, c_78);
              LocalPopChoice(j_33);
            }
          else
            {
              t = i_33;
              t = SSL_gtr(b_78, c_78);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_78, c_78);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  ATerm g_78 = NULL;
  g_78 = t;
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_78 = NULL;
        t = term_e_14;
        t = get_config_0_0(t);
        i_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_78, term_a_14);
        t = geq_0_0(t);
        t = g_78;
        t = b_112(t);
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        t = g_78;
      }
  }
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL,n_78 = NULL,o_78 = NULL;
  t = run_time_0_0(t);
  k_78 = t;
  t = term_v_13;
  t = whoami_0_0(t);
  l_78 = t;
  t = term_w_13;
  n_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_33), k_78), term_m_33), l_78);
  o_78 = t;
  t = SSL_printnl(n_78, o_78);
  t = (ATerm) ATmakeAppl(sym__2, term_w_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_33), k_78), term_m_33), l_78));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_78 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_31;
  p_78 = t;
  t = SSL_exit(p_78);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL;
  y_78 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_78;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_78 = ATgetArgument(t, 0);
          {
            ATerm a_26 = NULL,m_30 = NULL;
            t = SSLgetAnnotations(y_78);
            a_26 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_78);
            m_30 = t;
            t = SSLsetAnnotations(m_30, a_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_78;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_33;
      t = get_config_0_0(t);
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
      t = fetch_1_0(j_12, t);
    }
  t = v_104(t);
  return(t);
}
ATerm map_1_0 (ATerm m_90 (ATerm), ATerm t)
{
  static ATerm o_79 (ATerm t)
  {
    ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL;
    l_79 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_79;
      }
    else
      {
        ATerm k_26 = NULL,n_26 = NULL,o_26 = NULL,p_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_79 = ATgetFirst((ATermList) t);
            n_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_79);
        k_26 = t;
        t = m_79;
        t = m_90(t);
        n_26 = t;
        t = n_79;
        t = o_79(t);
        o_26 = t;
        t = (ATerm) ATinsert(CheckATermList(o_26), n_26);
        p_30 = t;
        t = SSLsetAnnotations(p_30, k_26);
      }
    return(t);
  }
  t = o_79(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm r_79 = NULL,u_79 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_79 = ATgetFirst((ATermList) t);
      u_79 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_79 = NULL,z_79 = NULL;
        static ATerm k_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_79)), not_null(z_79));
          return(t);
        }
        t = u_79;
        t = i_0(t);
        if(((y_79 != NULL) && (y_79 != t)))
          _fail(t);
        else
          y_79 = t;
        t = r_79;
        t = g_0(t);
        if(((z_79 != NULL) && (z_79 != t)))
          _fail(t);
        else
          z_79 = t;
        t = u_79;
        t = reverse_acc_2_0(g_0, k_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_13;
      t = i_0(t);
    }
  return(t);
}
static ATerm n_8 (ATerm c_26, ATerm d_26, ATerm t)
{
  t = SSL_table_get(c_26, d_26);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL,s_30 = NULL;
  f_80 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_80);
  d_80 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_80);
  s_30 = t;
  t = SSLsetAnnotations(s_30, d_80);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm h_80 = NULL;
  h_80 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_80), term_r_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_80 = NULL,c_80 = NULL;
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_32;
      t = get_config_0_0(t);
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      t = fetch_1_0(l_12, t);
    }
  t = term_u_33;
  t = echo_0_0(t);
  t = term_g_32;
  b_80 = t;
  t = term_h_32;
  c_80 = t;
  t = term_v_33;
  t = n_8(b_80, c_80, t);
  t = reverse_acc_2_0(_id, n_12, t);
  t = map_1_0(o_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_80 = NULL,k_80 = NULL,l_80 = NULL;
  j_80 = t;
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_80;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_33 = ATgetFirst((ATermList) t);
                ATerm z_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_80;
          }
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = (ATerm) ATinsert(ATempty, j_80);
      }
  }
  k_80 = t;
  t = term_z_28;
  l_80 = t;
  t = SSL_printnl(l_80, k_80);
  t = j_80;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm p_80 = NULL,q_80 = NULL;
  t = term_a_34;
  p_80 = t;
  t = term_v_13;
  q_80 = t;
  t = term_b_34;
  t = q_8(p_80, q_80, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = term_c_34;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL;
  t = term_a_34;
  t_80 = t;
  t = term_v_13;
  u_80 = t;
  t = term_b_34;
  t = q_8(t_80, u_80, t);
  t = term_d_34;
  r_80 = t;
  t = term_v_13;
  s_80 = t;
  t = term_e_34;
  t = q_8(r_80, s_80, t);
  t = term_f_34;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_12, q_12, r_12, t);
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      t = Option_3_0(s_12, u_12, v_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm t)
{
  ATerm a_81 = NULL,b_81 = NULL,h_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL,u_30 = NULL;
  l_81 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_81 = ATgetFirst((ATermList) t);
      h_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_81);
  a_81 = t;
  t = b_81;
  t = s_79(t);
  j_81 = t;
  t = h_81;
  t = t_79(t);
  k_81 = t;
  t = (ATerm) ATinsert(CheckATermList(k_81), j_81);
  u_30 = t;
  t = SSLsetAnnotations(u_30, a_81);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,v_81 = NULL,w_81 = NULL,x_30 = NULL;
  q_81 = t;
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_34;
        t = a_108(t);
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
      }
  }
  t = q_81;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_81 = ATgetFirst((ATermList) t);
      t_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_81);
  r_81 = t;
  t = term_z_32;
  w_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, s_81);
  t = q_8(w_81, s_81, t);
  t = t_81;
  {
    static ATerm g_82 (ATerm t)
    {
      ATerm m_34 = t;
      int n_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_81 = NULL;
              z_81 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_81;
              LocalPopChoice(p_34);
            }
          else
            {
              t = o_34;
              t = a_108(t);
              t = Cons_2_0(_id, g_82, t);
            }
          LocalPopChoice(n_34);
        }
      else
        {
          t = m_34;
          {
            ATerm c_82 = NULL,d_82 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_82 = ATgetFirst((ATermList) t);
                d_82 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_82), (ATerm) ATmakeAppl(sym_Undefined_1, c_82));
          }
        }
      return(t);
    }
    t = g_82(t);
  }
  v_81 = t;
  t = (ATerm) ATinsert(CheckATermList(v_81), (ATerm) ATmakeAppl(sym_Program_1, s_81));
  x_30 = t;
  t = SSLsetAnnotations(x_30, r_81);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm s_82 = NULL;
  s_82 = t;
  if(match_string(t, "--help"))
    {
      t = s_82;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_82;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_82;
        }
    }
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm t_82 = NULL,u_82 = NULL;
  t = term_q_33;
  t_82 = t;
  t = term_v_13;
  u_82 = t;
  t = term_q_34;
  t = q_8(t_82, u_82, t);
  t = term_r_34;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_s_34;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL;
  n_82 = t;
  t = term_g_32;
  p_82 = t;
  t = term_h_32;
  q_82 = t;
  t = (ATerm) ATempty;
  r_82 = t;
  t = SSL_table_put(p_82, q_82, r_82);
  t = n_82;
  {
    static ATerm w_12 (ATerm t)
    {
      ATerm t_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_107(t);
          LocalPopChoice(u_34);
        }
      else
        {
          t = t_34;
          {
            ATerm v_34 = t;
            int w_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_12, y_12, c_13, t);
                LocalPopChoice(w_34);
              }
            else
              {
                t = v_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_12, t);
  }
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_83 = NULL;
        b_83 = t;
        {
          ATerm z_34 = t;
          int a_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_27 = NULL;
              t = b_83;
              {
                ATerm b_35 = t;
                int c_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_q_33;
                    t = get_config_0_0(t);
                    LocalPopChoice(c_35);
                  }
                else
                  {
                    t = b_35;
                    t = fetch_1_0(d_13, t);
                  }
              }
              t = b_83;
              t = default_system_usage_0_0(t);
              t = term_o_31;
              g_27 = t;
              t = SSL_exit(g_27);
              LocalPopChoice(a_35);
            }
          else
            {
              t = z_34;
              {
                ATerm l_27 = NULL;
                t = term_a_34;
                t = get_config_0_0(t);
                t = b_83;
                t = default_system_about_0_0(t);
                t = term_o_31;
                l_27 = t;
                t = SSL_exit(l_27);
              }
            }
        }
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL;
              static ATerm h_13 (ATerm t)
              {
                ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL,c_31 = NULL;
                j_83 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_83 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_83);
                h_83 = t;
                t = i_83;
                if(((l_82 != NULL) && (l_82 != t)))
                  _fail(t);
                else
                  l_82 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_83);
                c_31 = t;
                t = SSLsetAnnotations(c_31, h_83);
                return(t);
              }
              t = fetch_1_0(h_13, t);
              t = term_w_13;
              f_83 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_82)), term_f_35);
              g_83 = t;
              t = SSL_printnl(f_83, g_83);
              t = (ATerm) ATmakeAppl(sym__2, term_w_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_82)), term_f_35));
              t = default_system_usage_0_0(t);
              t = term_a_14;
              e_83 = t;
              t = SSL_exit(e_83);
              LocalPopChoice(e_35);
            }
          else
            {
              t = d_35;
            }
        }
      }
  }
  m_82 = t;
  t = term_g_32;
  o_82 = t;
  t = SSL_table_destroy(o_82);
  t = m_82;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm t)
{
  ATerm o_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL;
  t = parse_options_1_0(x_104, t);
  o_83 = t;
  t = term_g_35;
  r_83 = t;
  t = SSL_table_create(r_83);
  t = term_g_35;
  p_83 = t;
  t = term_h_35;
  q_83 = t;
  t = SSL_table_put(p_83, q_83, o_83);
  t = o_83;
  t = z_104(t);
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_104, t);
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
              t = a_105(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_35);
            }
          else
            {
              t = k_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = if_verbose2_1_0(s_13, t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm s_83 = NULL,t_83 = NULL;
  t = term_m_35;
  s_83 = t;
  t = term_v_13;
  t_83 = t;
  t = term_n_35;
  t = q_8(s_83, t_83, t);
  t = term_o_35;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_p_35;
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL;
  u_83 = t;
  t = term_z_32;
  t = get_config_0_0(t);
  v_83 = t;
  t = term_w_13;
  w_83 = t;
  t = (ATerm) ATinsert(ATempty, v_83);
  x_83 = t;
  t = SSL_printnl(w_83, x_83);
  t = u_83;
  return(t);
}
ATerm iowrap_3_0 (ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm t)
{
  static ATerm l_13 (ATerm t)
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_104(t);
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
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
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
                          t = Option_3_0(o_13, q_13, r_13, t);
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
                                t = verbose_option_0_0(t);
                                LocalPopChoice(z_35);
                              }
                            else
                              {
                                t = y_35;
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
  static ATerm n_13 (ATerm t)
  {
    ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL;
    z_83 = t;
    {
      ATerm a_36 = t;
      int b_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm t_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_83 != NULL) && (y_83 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_83 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_13, t);
          LocalPopChoice(b_36);
        }
      else
        {
          t = a_36;
          t = term_c_36;
          y_83 = t;
        }
    }
    t = not_null(y_83);
    t = ReadFromFile_0_0(t);
    a_84 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_83, a_84);
    t = apply_strategy_1_0(g_104, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(l_13, i_104, m_13, n_13, t);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,e_31 = NULL;
  f_84 = t;
  if(match_cons(t, sym__2))
    {
      c_84 = ATgetArgument(t, 0);
      d_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_84);
  b_84 = t;
  t = d_84;
  t = mark_bound_unbound_vars_0_0(t);
  e_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_84, e_84);
  e_31 = t;
  t = SSLsetAnnotations(e_31, b_84);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(u_13, _fail, default_usage_0_0, t);
  return(t);
}
