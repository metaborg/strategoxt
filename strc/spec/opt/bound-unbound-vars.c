#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Some_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  init_constant_terms();
}
ATerm term_e_36;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_l_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_p_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_u_30;
ATerm term_m_30;
ATerm term_f_30;
ATerm term_c_30;
ATerm term_z_28;
ATerm term_s_28;
ATerm term_n_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
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
void init_constant_terms (void)
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
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Defined_2, term_i_24, term_j_24);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Defined_2, term_o_25, term_i_17);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_n_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_31);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_u_31, term_v_13);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_h_32);
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
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_p_33, term_v_13);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym__2, term_o_35, term_v_13);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose4_1_0 (ATerm j_105 (ATerm), ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm f_76 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm e_76 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm v_2 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm alltd_1_0 (ATerm k_78 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm d_7 (ATerm q_21, ATerm r_21, ATerm s_21, ATerm);
ATerm c_3 (ATerm);
ATerm h_3 (ATerm);
ATerm l_3 (ATerm);
ATerm p_3 (ATerm);
ATerm u_3 (ATerm);
ATerm e_7 (ATerm k_21, ATerm o_21, ATerm m_21, ATerm);
ATerm v_3 (ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm f_7 (ATerm e_21, ATerm i_21, ATerm g_21, ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm e_5 (ATerm);
ATerm i_5 (ATerm);
ATerm o_5 (ATerm);
ATerm v_5 (ATerm);
ATerm mark_rdef_0_0 (ATerm);
ATerm g_6 (ATerm);
ATerm IntroduceBound_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm m_6 (ATerm);
ATerm g_7 (ATerm c_20, ATerm d_20, ATerm e_20, ATerm g_20, ATerm);
ATerm CompareEntries_0_0 (ATerm);
ATerm h_7 (ATerm n_18, ATerm o_18, ATerm m_18, ATerm);
ATerm q_6 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm i_7 (ATerm p_23, ATerm o_23, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm undefine_unbound_MarkVar_0_1 (ATerm a_19, ATerm);
ATerm tboundin_3_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm j_7 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm t_7 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm n_7 (ATerm m_84 (ATerm), ATerm a_31, ATerm z_30, ATerm);
ATerm foldr_3_0 (ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm);
ATerm o_7 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm e_31, ATerm d_31, ATerm);
ATerm p_7 (ATerm h_84 (ATerm), ATerm y_30, ATerm x_30, ATerm);
ATerm at_end_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm p_47 (ATerm x_46, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm y_8 (ATerm);
ATerm u_7 (ATerm b_582, ATerm g_582, ATerm u_55, ATerm);
ATerm while_not_2_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm);
ATerm for_3_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm);
ATerm a_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm l_53 (ATerm x_50, ATerm b_51, ATerm c_51, ATerm);
ATerm e_9 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm g_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm free_vars_3_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm s_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm w_9 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm w_7 (ATerm o_76 (ATerm), ATerm e_22, ATerm c_22, ATerm);
ATerm b_10 (ATerm);
ATerm DeclareUnbound_0_0 (ATerm);
ATerm x_7 (ATerm r_22, ATerm s_22, ATerm);
ATerm end_scope_1_0 (ATerm l_76 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm scope_2_0 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm);
ATerm g_10 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm mark_build_vars_0_0 (ATerm);
ATerm y_7 (ATerm z_22, ATerm a_23, ATerm b_23, ATerm);
ATerm DeclareBound_0_0 (ATerm);
ATerm b_8 (ATerm x_22, ATerm y_22, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm MarkAndBind_0_0 (ATerm);
ATerm mark_match_vars_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm mark_bound_unbound_vars_0_0 (ATerm);
ATerm e_8 (ATerm s_43, ATerm t_43, ATerm);
ATerm f_8 (ATerm g_47, ATerm h_47, ATerm);
ATerm h_8 (ATerm r_96 (ATerm), ATerm i_452, ATerm k_47, ATerm);
ATerm g_8 (ATerm c_47, ATerm d_47, ATerm);
ATerm v_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_98 (ATerm), ATerm);
ATerm y_70 (ATerm s_70, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm i_8 (ATerm i_47, ATerm);
ATerm j_8 (ATerm u_43, ATerm v_43, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_72 (ATerm i_71, ATerm);
ATerm k_72 (ATerm m_71, ATerm n_71, ATerm o_71, ATerm);
ATerm l_72 (ATerm w_71, ATerm x_71, ATerm y_71, ATerm);
ATerm k_8 (ATerm);
ATerm z_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_80 (ATerm), ATerm);
ATerm d_8 (ATerm k_41, ATerm l_41, ATerm);
ATerm debug_1_0 (ATerm p_96 (ATerm), ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_105 (ATerm), ATerm);
ATerm c_11 (ATerm);
ATerm h_11 (ATerm);
ATerm j_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm p_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm q_8 (ATerm t_49, ATerm u_49, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm y_11 (ATerm);
ATerm a_12 (ATerm);
ATerm b_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm o_8 (ATerm m_22, ATerm n_22, ATerm l_22, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm c_12 (ATerm);
ATerm d_12 (ATerm);
ATerm f_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm l_8 (ATerm p_34, ATerm q_34, ATerm);
ATerm foldr_2_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_105 (ATerm), ATerm);
ATerm i_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_12 (ATerm);
ATerm need_help_1_0 (ATerm b_99 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm n_8 (ATerm d_24, ATerm e_24, ATerm);
ATerm l_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm g_102 (ATerm), ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm parse_options_1_0 (ATerm f_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm);
ATerm m_13 (ATerm);
ATerm o_13 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm s_13 (ATerm);
ATerm iowrap_3_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm);
ATerm u_13 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
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
ATerm if_verbose4_1_0 (ATerm j_105 (ATerm), ATerm t)
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
        t = j_105(t);
        ;
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
ATerm mark_guardedlchoice_1_0 (ATerm f_76 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,u_6 = NULL;
  ATerm o_0 (ATerm t)
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
    t = f_76(t);
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
    t = f_76(t);
    l_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_1, l_1, k_1);
    a_7 = t;
    t = SSLsetAnnotations(a_7, g_1);
    return(t);
  }
  ATerm p_0 (ATerm t)
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
    t = f_76(t);
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
ATerm mark_lchoice_1_0 (ATerm e_76 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,q_7 = NULL;
  ATerm q_0 (ATerm t)
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
    t = e_76(t);
    l_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, l_2, k_2);
    r_7 = t;
    t = SSLsetAnnotations(r_7, h_2);
    return(t);
  }
  ATerm r_0 (ATerm t)
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
    t = e_76(t);
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
ATerm abstract_choice_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL;
  j_3 = t;
  t = save_MarkVar_0_0(t);
  e_3 = t;
  t = j_3;
  t = g_76(t);
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
  t = h_76(t);
  g_3 = t;
  t = f_3;
  t = isect_MarkVar_0_0(t);
  t = g_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL,p_8 = NULL;
  ATerm y_0 (ATerm t)
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
    t = d_76(t);
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, x_3, w_3);
    r_8 = t;
    t = SSLsetAnnotations(r_8, s_3);
    return(t);
  }
  ATerm a_1 (ATerm t)
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
    t = d_76(t);
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
ATerm c_7 (ATerm t)
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
ATerm v_2 (ATerm t)
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
ATerm alltd_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_78(t);
        ;
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
ATerm x_2 (ATerm t)
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
ATerm z_2 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm d_7 (ATerm q_21, ATerm r_21, ATerm s_21, ATerm t)
{
  ATerm w_10 = NULL;
  ATerm b_3 (ATerm t)
  {
    t = r_21;
    t = map_1_0(IntroduceBound_0_0, t);
    t = s_21;
    t = mark_build_vars_0_0(t);
    if(((w_10 != NULL) && (w_10 != t)))
      _fail(t);
    else
      w_10 = t;
    return(t);
  }
  t = scope_2_0(z_2, b_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, q_21, r_21, not_null(w_10));
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm h_3 (ATerm t)
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
ATerm l_3 (ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
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
ATerm p_3 (ATerm t)
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
ATerm u_3 (ATerm t)
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
ATerm e_7 (ATerm k_21, ATerm o_21, ATerm m_21, ATerm t)
{
  ATerm d_11 = NULL,f_11 = NULL,g_11 = NULL;
  ATerm d_3 (ATerm t)
  {
    t = k_21;
    t = free_vars_3_0(h_3, l_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = k_21;
    t = mark_match_vars_0_0(t);
    if(((d_11 != NULL) && (d_11 != t)))
      _fail(t);
    else
      d_11 = t;
    t = m_21;
    t = mark_buv_0_0(t);
    if(((f_11 != NULL) && (f_11 != t)))
      _fail(t);
    else
      f_11 = t;
    t = o_21;
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
ATerm v_3 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm l_4 (ATerm t)
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
ATerm p_4 (ATerm t)
{
  ATerm t_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
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
ATerm q_4 (ATerm t)
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
ATerm r_4 (ATerm t)
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
ATerm f_7 (ATerm e_21, ATerm i_21, ATerm g_21, ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,e_13 = NULL;
  ATerm k_4 (ATerm t)
  {
    t = e_21;
    t = free_vars_3_0(l_4, p_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = e_21;
    t = mark_match_vars_0_0(t);
    if(((z_12 != NULL) && (z_12 != t)))
      _fail(t);
    else
      z_12 = t;
    t = g_21;
    t = mark_buv_0_0(t);
    if(((a_13 != NULL) && (a_13 != t)))
      _fail(t);
    else
      a_13 = t;
    t = i_21;
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
ATerm s_4 (ATerm t)
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
ATerm t_4 (ATerm t)
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
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
ATerm u_4 (ATerm t)
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
ATerm v_4 (ATerm t)
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
ATerm w_4 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm m_19 = NULL;
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_19 = ATgetArgument(t, 0);
          {
            ATerm r_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_16);
      t = m_19;
    }
  else
    {
      t = p_16;
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
ATerm z_4 (ATerm t)
{
  ATerm v_19 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_19);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      {
        ATerm o_22 = NULL,p_22 = NULL,t_22 = NULL,v_22 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_22 = ATgetArgument(t, 0);
            t = o_22;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_22 = ATgetArgument(t, 0);
                p_22 = ATgetArgument(t, 1);
                t_22 = ATgetArgument(t, 2);
                v_22 = ATgetArgument(t, 3);
                t = t_22;
                t = map_1_0(i_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_22 = ATgetArgument(t, 0);
                    p_22 = ATgetArgument(t, 1);
                    t_22 = ATgetArgument(t, 2);
                    v_22 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = t_22;
                t = map_1_0(o_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm c_24 = NULL;
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_24 = ATgetArgument(t, 0);
          {
            ATerm a_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_16);
      t = c_24;
    }
  else
    {
      t = y_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_24;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm v_24 = NULL;
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_24 = ATgetArgument(t, 0);
          {
            ATerm d_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_17);
      t = v_24;
    }
  else
    {
      t = b_17;
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
ATerm v_5 (ATerm t)
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
          ATerm x_4 (ATerm t)
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
          t = (ATerm) ATmakeAppl(sym_RDef_3, l_15, m_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_16), not_null(l_16), not_null(j_16)));
        }
      }
    }
  else
    {
      ATerm l_18 = NULL,r_18 = NULL,v_18 = NULL,b_19 = NULL,d_19 = NULL,g_19 = NULL;
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
      g_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_19, l_18);
      t = diff_0_0(t);
      r_18 = t;
      {
        ATerm y_5 (ATerm t)
        {
          t = l_18;
          t = map_1_0(IntroduceBound_0_0, t);
          t = r_18;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = v_15;
          t = mark_match_vars_0_0(t);
          if(((v_18 != NULL) && (v_18 != t)))
            _fail(t);
          else
            v_18 = t;
          t = x_15;
          t = mark_buv_0_0(t);
          if(((b_19 != NULL) && (b_19 != t)))
            _fail(t);
          else
            b_19 = t;
          t = w_15;
          t = mark_build_vars_0_0(t);
          if(((d_19 != NULL) && (d_19 != t)))
            _fail(t);
          else
            d_19 = t;
          return(t);
        }
        t = scope_2_0(v_5, y_5, t);
        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_15, m_15, t_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(v_18), not_null(d_19), not_null(b_19)));
      }
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,e_25 = NULL;
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_24);
  z_24 = t;
  t = term_k_17;
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, y_24), term_k_17);
  t = w_7(g_6, z_24, e_25, t);
  t = y_24;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm b_26 = NULL;
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_26 = ATgetArgument(t, 0);
          {
            ATerm n_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_17);
      t = b_26;
    }
  else
    {
      t = l_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_26;
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm g_7 (ATerm c_20, ATerm d_20, ATerm e_20, ATerm g_20, ATerm t)
{
  ATerm g_25 = NULL,n_25 = NULL;
  t = e_20;
  t = map_1_0(h_6, t);
  g_25 = t;
  {
    ATerm n_6 (ATerm t)
    {
      t = g_25;
      t = map_1_0(IntroduceBound_0_0, t);
      t = g_20;
      t = mark_buv_0_0(t);
      if(((n_25 != NULL) && (n_25 != t)))
        _fail(t);
      else
        n_25 = t;
      return(t);
    }
    t = scope_2_0(m_6, n_6, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, c_20, d_20, e_20, not_null(n_25));
  }
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,q_27 = NULL,m_28 = NULL;
  g_27 = t;
  if(match_cons(t, sym__2))
    {
      h_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_27;
  if(match_cons(t, sym_Undefined_0))
    {
      t = h_27;
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
              m_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(q_17);
          t = h_27;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_o_17;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  i_27 = ATgetArgument(t, 0);
                  j_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm s_17 = t;
                int t_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, j_27, m_28);
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
                      t = (ATerm) ATmakeAppl(sym_Defined_2, i_27, term_v_17);
                    }
                    ;
                    LocalPopChoice(t_17);
                  }
                else
                  {
                    t = s_17;
                    t = m_28;
                    if((j_27 != t))
                      {
                        _fail(t);
                      }
                    t = h_27;
                  }
              }
            }
        }
      else
        {
          t = p_17;
          t = h_27;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_o_17;
        }
    }
  return(t);
}
ATerm h_7 (ATerm n_18, ATerm o_18, ATerm m_18, ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  t = term_g_14;
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_14, n_18);
  t = n_8(w_28, n_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_28 = ATgetFirst((ATermList) t);
      {
        ATerm z_17 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_18, u_28);
  t = CompareEntries_0_0(t);
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_18, (ATerm) ATinsert(CheckATermList(m_18), v_28));
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,u_29 = NULL,x_29 = NULL,y_29 = NULL;
  y_29 = t;
  if(match_cons(t, sym__2))
    {
      o_29 = ATgetArgument(t, 0);
      p_29 = ATgetArgument(t, 1);
      t = p_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_29 = ATgetFirst((ATermList) t);
          x_29 = (ATerm) ATgetNext((ATermList) t);
          t = u_29;
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
                t = o_29;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = y_29;
                  }
                else
                  {
                    ATerm e_18 = t;
                    int h_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_29;
                        t = h_7(o_29, u_29, x_29, t);
                        ;
                        LocalPopChoice(h_18);
                      }
                    else
                      {
                        t = e_18;
                        t = y_29;
                      }
                  }
              }
            else
              {
                t = a_18;
                t = o_29;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = y_29;
                  }
                else
                  {
                    t = y_29;
                  }
              }
          }
        }
      else
        {
          t = o_29;
          if(match_cons(t, sym_Scopes_0))
            {
              t = y_29;
            }
          else
            {
              t = y_29;
            }
        }
    }
  else
    {
      t = y_29;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm k_29 = NULL,m_29 = NULL,n_29 = NULL;
  t = map_1_0(q_6, t);
  k_29 = t;
  t = term_g_14;
  n_29 = t;
  t = SSL_table_destroy(n_29);
  t = term_g_14;
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_14, k_29);
  t = i_7(m_29, k_29, t);
  t = k_29;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,o_31 = NULL;
  o_31 = t;
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
        t = o_31;
      }
    else
      {
        t = i_18;
        {
          ATerm q_18 = t;
          int s_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm t_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(s_18);
              t = o_31;
            }
          else
            {
              t = q_18;
              {
                ATerm u_18 = t;
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
                    t = o_31;
                  }
                else
                  {
                    t = u_18;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm z_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = o_31;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    v_30 = t;
    t = o_31;
    t = SRTS_one(mark_buv_0_0, t);
    w_30 = t;
    t = v_30;
    t = isect_MarkVar_0_0(t);
    t = w_30;
  }
  return(t);
}
ATerm i_7 (ATerm p_23, ATerm o_23, ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm q_31 = NULL,w_31 = NULL;
    if(match_cons(t, sym__2))
      {
        q_31 = ATgetArgument(t, 0);
        w_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(p_23, q_31, w_31);
    t = (ATerm) ATmakeAppl(sym__3, p_23, q_31, w_31);
    return(t);
  }
  t = o_23;
  t = map_1_0(r_6, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_31 = NULL;
  ATerm s_6 (ATerm t)
  {
    ATerm a_32 = NULL,b_32 = NULL;
    a_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_31), a_32);
    t = n_8(not_null(z_31), a_32, t);
    b_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_32, b_32);
    return(t);
  }
  if(((z_31 != NULL) && (z_31 != t)))
    _fail(t);
  else
    z_31 = t;
  t = SSL_table_keys(z_31);
  t = map_1_0(s_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_g_14;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm a_19, ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,v_32 = NULL;
  t = save_MarkVar_0_0(t);
  {
    ATerm t_6 (ATerm t)
    {
      ATerm v_33 (ATerm w_32, ATerm t)
      {
        ATerm y_32 = NULL,c_33 = NULL,f_33 = NULL,g_33 = NULL;
        t = w_32;
        if(match_cons(t, sym__2))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            y_32 = c_19;
            if(match_cons(c_19, sym_Var_1))
              {
                c_33 = ATgetArgument(c_19, 0);
              }
            else
              _fail(t);
            {
              ATerm e_19 = ATgetArgument(t, 1);
              if(((ATgetType(e_19) == AT_LIST) && !(ATisEmpty(e_19))))
                {
                  ATerm f_19 = ATgetFirst((ATermList) e_19);
                  if(match_cons(f_19, sym_Defined_2))
                    {
                      f_33 = ATgetArgument(f_19, 0);
                      {
                        ATerm h_19 = ATgetArgument(f_19, 1);
                        if((ATgetSymbol((ATermAppl) h_19) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  g_33 = (ATerm) ATgetNext((ATermList) e_19);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_19;
        {
          ATerm w_6 (ATerm t)
          {
            if((c_33 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(w_6, t);
          t = (ATerm) ATmakeAppl(sym__2, y_32, (ATerm) ATinsert(CheckATermList(g_33), (ATerm) ATmakeAppl(sym_Defined_2, f_33, term_v_17)));
        }
        return(t);
      }
      ATerm i_33 = NULL,k_33 = NULL;
      k_33 = t;
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                i_33 = ATgetArgument(t, 0);
                {
                  ATerm l_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_19);
            t = i_33;
            if(match_cons(t, sym_Scopes_0))
              {
                t = k_33;
              }
            else
              {
                ATerm p_19 = t;
                int q_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_33(k_33, t);
                    ;
                    LocalPopChoice(q_19);
                  }
                else
                  {
                    t = p_19;
                    t = k_33;
                  }
              }
          }
        else
          {
            t = i_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_33(k_33, t);
                  ;
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  t = k_33;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(t_6, t);
    q_32 = t;
    t = term_g_14;
    v_32 = t;
    t = SSL_table_destroy(v_32);
    t = term_g_14;
    r_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_14, q_32);
    t = i_7(r_32, q_32, t);
    t = q_32;
  }
  return(t);
}
ATerm tboundin_3_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  q_37 = t;
  if(match_cons(t, sym_Scope_2))
    {
      r_37 = ATgetArgument(t, 0);
      l_37 = ATgetArgument(t, 1);
      {
        ATerm k_6 = NULL,o_6 = NULL,p_6 = NULL,x_14 = NULL;
        t = SSLgetAnnotations(q_37);
        k_6 = t;
        t = r_37;
        t = i_106(t);
        o_6 = t;
        t = l_37;
        t = g_106(t);
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
          r_37 = ATgetArgument(t, 0);
          l_37 = ATgetArgument(t, 1);
          m_37 = ATgetArgument(t, 2);
          p_37 = ATgetArgument(t, 3);
          {
            ATerm c_8 = NULL,w_8 = NULL,x_8 = NULL,z_8 = NULL,b_9 = NULL,y_14 = NULL;
            t = SSLgetAnnotations(q_37);
            c_8 = t;
            t = r_37;
            t = i_106(t);
            w_8 = t;
            t = l_37;
            t = i_106(t);
            x_8 = t;
            t = m_37;
            t = i_106(t);
            z_8 = t;
            t = p_37;
            t = g_106(t);
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
              r_37 = ATgetArgument(t, 0);
              l_37 = ATgetArgument(t, 1);
              m_37 = ATgetArgument(t, 2);
              p_37 = ATgetArgument(t, 3);
              {
                ATerm c_10 = NULL,l_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,f_15 = NULL;
                t = SSLgetAnnotations(q_37);
                c_10 = t;
                t = r_37;
                t = i_106(t);
                l_10 = t;
                t = l_37;
                t = i_106(t);
                n_10 = t;
                t = m_37;
                t = i_106(t);
                o_10 = t;
                t = p_37;
                t = g_106(t);
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
                  r_37 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_37);
              e_11 = t;
              t = r_37;
              t = g_106(t);
              i_11 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, i_11);
              g_15 = t;
              t = SSLsetAnnotations(g_15, e_11);
            }
        }
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm h_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_38);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      {
        ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_38 = ATgetArgument(t, 0);
            t = j_38;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                j_38 = ATgetArgument(t, 0);
                k_38 = ATgetArgument(t, 1);
                l_38 = ATgetArgument(t, 2);
                m_38 = ATgetArgument(t, 3);
                t = l_38;
                t = map_1_0(z_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    j_38 = ATgetArgument(t, 0);
                    k_38 = ATgetArgument(t, 1);
                    l_38 = ATgetArgument(t, 2);
                    m_38 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = l_38;
                t = map_1_0(j_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm a_39 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_39 = ATgetArgument(t, 0);
          {
            ATerm b_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_19);
      t = a_39;
    }
  else
    {
      t = y_19;
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
ATerm j_7 (ATerm t)
{
  ATerm n_39 = NULL;
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_39 = ATgetArgument(t, 0);
          {
            ATerm j_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_20);
      t = n_39;
    }
  else
    {
      t = h_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_39;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(x_6, y_6, tboundin_3_0, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm m_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_40);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      {
        ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_40 = ATgetArgument(t, 0);
            t = o_40;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_40 = ATgetArgument(t, 0);
                p_40 = ATgetArgument(t, 1);
                q_40 = ATgetArgument(t, 2);
                r_40 = ATgetArgument(t, 3);
                t = q_40;
                t = map_1_0(m_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_40 = ATgetArgument(t, 0);
                    p_40 = ATgetArgument(t, 1);
                    q_40 = ATgetArgument(t, 2);
                    r_40 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_40;
                t = map_1_0(t_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm c_41 = NULL;
  ATerm n_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_41 = ATgetArgument(t, 0);
          {
            ATerm q_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_20);
      t = c_41;
    }
  else
    {
      t = n_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_41;
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm u_41 = NULL;
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_41 = ATgetArgument(t, 0);
          {
            ATerm t_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_20);
      t = u_41;
    }
  else
    {
      t = r_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_41;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm z_39 = NULL,j_40 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_40 = ATgetArgument(t, 0);
      t = j_40;
      if(match_cons(t, sym_Rule_3))
        {
          z_39 = ATgetArgument(t, 0);
          {
            ATerm v_20 = ATgetArgument(t, 1);
          }
          {
            ATerm w_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_39;
      t = free_vars_3_0(k_7, l_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_40 = ATgetArgument(t, 0);
          {
            ATerm d_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_40;
    }
  return(t);
}
ATerm n_7 (ATerm m_84 (ATerm), ATerm a_31, ATerm z_30, ATerm t)
{
  ATerm w_42 (ATerm t)
  {
    ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
    q_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_42 = ATgetFirst((ATermList) t);
            s_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_21 = t;
          int h_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_42;
              {
                ATerm v_7 (ATerm t)
                {
                  t = z_30;
                  return(t);
                }
                t = o_7(m_84, v_7, r_42, s_42, t);
                t = w_42(t);
              }
              ;
              LocalPopChoice(h_21);
            }
          else
            {
              t = f_21;
              {
                ATerm z_11 = NULL,m_12 = NULL,e_16 = NULL;
                t = SSLgetAnnotations(q_42);
                z_11 = t;
                t = s_42;
                t = w_42(t);
                m_12 = t;
                t = (ATerm) ATinsert(CheckATermList(m_12), r_42);
                e_16 = t;
                t = SSLsetAnnotations(e_16, z_11);
              }
            }
        }
      }
    return(t);
  }
  t = a_31;
  t = w_42(t);
  return(t);
}
ATerm foldr_3_0 (ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_43;
      t = c_87(t);
    }
  else
    {
      ATerm k_43 = NULL,l_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_43 = ATgetFirst((ATermList) t);
          h_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_43;
      t = e_87(t);
      k_43 = t;
      t = h_43;
      t = foldr_3_0(c_87, d_87, e_87, t);
      l_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_43, l_43);
      t = d_87(t);
    }
  return(t);
}
ATerm o_7 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm e_31, ATerm d_31, ATerm t)
{
  t = q_84(t);
  {
    ATerm z_7 (ATerm t)
    {
      ATerm r_43 = NULL;
      r_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_31, r_43);
      t = p_84(t);
      return(t);
    }
    t = fetch_1_0(z_7, t);
    t = d_31;
  }
  return(t);
}
ATerm p_7 (ATerm h_84 (ATerm), ATerm y_30, ATerm x_30, ATerm t)
{
  ATerm i_45 (ATerm t)
  {
    ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
    d_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_45;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_45 = ATgetFirst((ATermList) t);
            f_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_45;
              {
                ATerm a_8 (ATerm t)
                {
                  t = x_30;
                  return(t);
                }
                t = o_7(h_84, a_8, e_45, f_45, t);
                t = i_45(t);
              }
              ;
              LocalPopChoice(n_21);
            }
          else
            {
              t = j_21;
              {
                ATerm b_13 = NULL,g_13 = NULL,i_16 = NULL;
                t = SSLgetAnnotations(d_45);
                b_13 = t;
                t = f_45;
                t = i_45(t);
                g_13 = t;
                t = (ATerm) ATinsert(CheckATermList(g_13), e_45);
                i_16 = t;
                t = SSLsetAnnotations(i_16, b_13);
              }
            }
        }
      }
    return(t);
  }
  t = y_30;
  t = i_45(t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm o_46 (ATerm t)
  {
    ATerm i_46 = NULL,l_46 = NULL,m_46 = NULL;
    m_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_46 = ATgetFirst((ATermList) t);
        l_46 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_14 = NULL,p_14 = NULL,o_16 = NULL;
          t = SSLgetAnnotations(m_46);
          c_14 = t;
          t = l_46;
          t = o_46(t);
          p_14 = t;
          t = (ATerm) ATinsert(CheckATermList(p_14), i_46);
          o_16 = t;
          t = SSLsetAnnotations(o_16, c_14);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_46;
        t = y_80(t);
      }
    return(t);
  }
  t = o_46(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_45;
    }
  else
    {
      ATerm m_8 (ATerm t)
      {
        t = not_null(p_45);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_45 = ATgetFirst((ATermList) t);
          if(((p_45 != NULL) && (p_45 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_45;
      t = at_end_1_0(m_8, t);
    }
  return(t);
}
ATerm p_47 (ATerm x_46, ATerm t)
{
  ATerm y_46 = NULL;
  t = SSL_explode_term(x_46);
  if(match_cons(t, sym__2))
    {
      ATerm p_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_46;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,e_47 = NULL;
  e_47 = t;
  if(match_cons(t, sym__2))
    {
      a_47 = ATgetArgument(t, 0);
      b_47 = ATgetArgument(t, 1);
      {
        ATerm b_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_8 (ATerm t)
            {
              t = b_47;
              return(t);
            }
            t = a_47;
            t = at_end_1_0(s_8, t);
            ;
            LocalPopChoice(d_22);
          }
        else
          {
            t = b_22;
            t = p_47(e_47, t);
          }
      }
    }
  else
    {
      t = p_47(e_47, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm t)
{
  ATerm z_47 (ATerm t)
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_82(t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        {
          ATerm q_47 = NULL,r_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,x_17 = NULL;
          t = m_82(t);
          y_47 = t;
          if(match_cons(t, sym__2))
            {
              r_47 = ATgetArgument(t, 0);
              v_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_47);
          q_47 = t;
          t = r_47;
          t = o_82(t);
          w_47 = t;
          t = v_47;
          t = z_47(t);
          x_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_47, x_47);
          x_17 = t;
          t = SSLsetAnnotations(x_17, q_47);
          t = n_82(t);
        }
      }
    return(t);
  }
  t = z_47(t);
  return(t);
}
ATerm u_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_22 = ATgetArgument(t, 0);
      if(((ATgetType(h_22) != AT_LIST) || !(ATisEmpty(h_22))))
        _fail(t);
      {
        ATerm i_22 = ATgetArgument(t, 1);
        if(((ATgetType(i_22) != AT_LIST) || !(ATisEmpty(i_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,c_49 = NULL,d_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_22 = ATgetArgument(t, 0);
      if(((ATgetType(j_22) == AT_LIST) && !(ATisEmpty(j_22))))
        {
          y_48 = ATgetFirst((ATermList) j_22);
          z_48 = (ATerm) ATgetNext((ATermList) j_22);
        }
      else
        _fail(t);
      {
        ATerm k_22 = ATgetArgument(t, 1);
        if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
          {
            c_49 = ATgetFirst((ATermList) k_22);
            d_49 = (ATerm) ATgetNext((ATermList) k_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_48, c_49), (ATerm) ATmakeAppl(sym__2, z_48, d_49));
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      f_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_49), e_49);
  return(t);
}
ATerm u_7 (ATerm b_582, ATerm g_582, ATerm u_55, ATerm t)
{
  ATerm c_48 = NULL,n_48 = NULL,q_48 = NULL,r_48 = NULL;
  t = SSL_explode_term(g_582);
  if(match_cons(t, sym__2))
    {
      c_48 = ATgetArgument(t, 0);
      q_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_582);
  if(match_cons(t, sym__2))
    {
      if((c_48 != ATgetArgument(t, 0)))
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
  t = (ATerm) ATmakeAppl(sym__2, r_48, u_55);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm t)
{
  ATerm j_49 (ATerm t)
  {
    ATerm q_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_90(t);
        ;
        LocalPopChoice(u_22);
      }
    else
      {
        t = q_22;
        t = f_90(t);
        t = j_49(t);
      }
    return(t);
  }
  t = j_49(t);
  return(t);
}
ATerm for_3_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm t)
{
  t = h_90(t);
  t = while_not_2_0(i_90, j_90, t);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm o_50 = NULL;
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_50);
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,s_50 = NULL,v_50 = NULL,x_19 = NULL;
  v_50 = t;
  if(match_cons(t, sym__2))
    {
      q_50 = ATgetArgument(t, 0);
      s_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_50);
  p_50 = t;
  t = s_50;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_50, s_50);
  x_19 = t;
  t = SSLsetAnnotations(x_19, p_50);
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL;
  i_52 = t;
  if(match_cons(t, sym__2))
    {
      j_52 = ATgetArgument(t, 0);
      k_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_52 = ATgetFirst((ATermList) t);
      m_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_22 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_53(j_52, k_52, i_52, t);
            ;
            LocalPopChoice(c_23);
          }
        else
          {
            t = w_22;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_52), l_52), m_52);
          }
      }
    }
  else
    {
      t = l_53(j_52, k_52, i_52, t);
    }
  return(t);
}
ATerm l_53 (ATerm x_50, ATerm b_51, ATerm c_51, ATerm t)
{
  ATerm d_51 = NULL,j_51 = NULL,h_25 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
  t = SSLgetAnnotations(c_51);
  d_51 = t;
  t = b_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_51 = ATgetFirst((ATermList) t);
      q_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_51;
  if(match_cons(t, sym__2))
    {
      o_51 = ATgetArgument(t, 0);
      p_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_51;
        if((o_51 != t))
          {
            _fail(t);
          }
        t = q_51;
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = b_51;
        t = u_7(o_51, p_51, q_51, t);
      }
    j_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_50, j_51);
    h_25 = t;
    t = SSLsetAnnotations(h_25, d_51);
  }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm k_53 = NULL;
  if(match_cons(t, sym__2))
    {
      k_53 = ATgetArgument(t, 0);
      if((k_53 != ATgetArgument(t, 1)))
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
  ATerm f_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_9, c_9, d_9, t);
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = f_23;
      {
        ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
        z_52 = t;
        if(match_cons(t, sym__2))
          {
            a_53 = ATgetArgument(t, 0);
            b_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_52;
        t = p_7(e_9, a_53, b_53, t);
      }
    }
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_9 (ATerm t)
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
ATerm l_9 (ATerm t)
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
ATerm m_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_9 (ATerm t)
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
ATerm r_9 (ATerm t)
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
ATerm free_vars_3_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm s_104 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm r_54 (ATerm t)
  {
    ATerm i_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_104(t);
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = i_23;
        {
          ATerm l_23 = t;
          int m_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_53 = NULL,s_53 = NULL,u_14 = NULL,v_14 = NULL;
              n_53 = t;
              t = r_104(t);
              s_53 = t;
              t = n_53;
              {
                ATerm f_9 (ATerm t)
                {
                  ATerm y_53 = NULL;
                  t = r_54(t);
                  y_53 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_53, s_53);
                  t = diff_0_0(t);
                  return(t);
                }
                t = s_104(f_9, r_54, g_9, t);
                v_14 = t;
                t = SSL_explode_term(v_14);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_23 = ATgetArgument(t, 0);
                    u_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_14;
                t = foldr_3_0(j_9, k_9, _id, t);
              }
              ;
              LocalPopChoice(m_23);
            }
          else
            {
              t = l_23;
              {
                ATerm d_15 = NULL,e_15 = NULL;
                e_15 = t;
                t = SSL_explode_term(e_15);
                if(match_cons(t, sym__2))
                  {
                    ATerm q_23 = ATgetArgument(t, 0);
                    d_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_15;
                t = foldr_3_0(m_9, q_9, r_54, t);
              }
            }
        }
      }
    return(t);
  }
  t = r_54(t);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm c_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_56);
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            e_56 = ATgetArgument(t, 0);
            t = e_56;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                e_56 = ATgetArgument(t, 0);
                f_56 = ATgetArgument(t, 1);
                g_56 = ATgetArgument(t, 2);
                h_56 = ATgetArgument(t, 3);
                t = g_56;
                t = map_1_0(v_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    e_56 = ATgetArgument(t, 0);
                    f_56 = ATgetArgument(t, 1);
                    g_56 = ATgetArgument(t, 2);
                    h_56 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = g_56;
                t = map_1_0(w_9, t);
              }
          }
      }
    }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm v_56 = NULL;
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_56 = ATgetArgument(t, 0);
          {
            ATerm w_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_23);
      t = v_56;
    }
  else
    {
      t = t_23;
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
ATerm w_9 (ATerm t)
{
  ATerm z_57 = NULL;
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_57 = ATgetArgument(t, 0);
          {
            ATerm a_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_23);
      t = z_57;
    }
  else
    {
      t = x_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_57;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm w_54 = NULL,z_54 = NULL,b_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,a_27 = NULL,y_26 = NULL;
  b_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_55 = ATgetArgument(t, 0);
      z_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_56);
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, y_55, z_55);
  y_26 = t;
  t = SSLsetAnnotations(y_26, m_55);
  a_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_55 = ATgetArgument(t, 0);
      {
        ATerm b_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_55;
  t = free_vars_3_0(s_9, u_9, tboundin_3_0, t);
  w_54 = t;
  t = undefine_unbound_MarkVar_0_1(w_54, t);
  z_54 = t;
  t = a_56;
  if(match_cons(t, sym_Let_2))
    {
      g_55 = ATgetArgument(t, 0);
      h_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_56);
  f_55 = t;
  t = g_55;
  {
    ATerm z_9 (ATerm t)
    {
      ATerm h_58 = NULL,l_58 = NULL,m_58 = NULL;
      h_58 = t;
      t = term_g_14;
      m_58 = t;
      t = SSL_table_destroy(m_58);
      t = term_g_14;
      l_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_g_14, z_54);
      t = i_7(l_58, z_54, t);
      t = h_58;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(z_9, t);
    i_55 = t;
    t = term_g_14;
    l_55 = t;
    t = SSL_table_destroy(l_55);
    t = term_g_14;
    k_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_14, z_54);
    t = i_7(k_55, z_54, t);
    t = h_55;
    t = mark_buv_0_0(t);
    j_55 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, i_55, j_55);
    a_27 = t;
    t = SSLsetAnnotations(a_27, f_55);
  }
  return(t);
}
ATerm w_7 (ATerm o_76 (ATerm), ATerm e_22, ATerm c_22, ATerm t)
{
  ATerm o_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL;
  s_58 = t;
  t = o_76(t);
  o_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_58, e_22, c_22);
  t = o_8(o_58, e_22, c_22, t);
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_58 = NULL;
        t = term_h_24;
        v_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_58, term_h_24);
        t = n_8(o_58, v_58, t);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_58 = ATgetFirst((ATermList) t);
        r_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_24;
    t_58 = t;
    t = (ATerm) ATinsert(CheckATermList(r_58), (ATerm) ATinsert(CheckATermList(q_58), e_22));
    u_58 = t;
    t = SSL_table_put(o_58, t_58, u_58);
    t = s_58;
  }
  return(t);
}
ATerm b_10 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_58);
  x_58 = t;
  t = term_k_24;
  y_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, w_58), term_k_24);
  t = w_7(b_10, x_58, y_58, t);
  t = w_58;
  return(t);
}
ATerm x_7 (ATerm r_22, ATerm s_22, ATerm t)
{
  ATerm z_58 = NULL,f_59 = NULL;
  f_59 = t;
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_22, s_22);
        t = n_8(r_22, s_22, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_24 = ATgetFirst((ATermList) t);
            z_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_24);
        t = SSL_table_put(r_22, s_22, z_58);
        t = (ATerm) ATmakeAppl(sym__3, r_22, s_22, z_58);
      }
    else
      {
        t = l_24;
        t = SSL_table_remove(r_22, s_22);
        t = (ATerm) ATmakeAppl(sym__2, r_22, s_22);
      }
    t = f_59;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm l_76 (ATerm), ATerm t)
{
  ATerm g_59 = NULL,j_59 = NULL,k_59 = NULL,n_59 = NULL,o_59 = NULL;
  n_59 = t;
  t = l_76(t);
  k_59 = t;
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_59 = NULL;
        t = term_h_24;
        p_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_59, term_h_24);
        t = n_8(k_59, p_59, t);
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_59 = ATgetFirst((ATermList) t);
        g_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_h_24;
    o_59 = t;
    t = SSL_table_put(k_59, o_59, g_59);
    t = j_59;
    {
      ATerm d_10 (ATerm t)
      {
        ATerm s_59 = NULL;
        s_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_59, s_59);
        t = x_7(k_59, s_59, t);
        return(t);
      }
      t = map_1_0(d_10, t);
      t = n_59;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_89 (ATerm), ATerm i_89 (ATerm), ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_89(t);
      t = i_89(t);
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      t = i_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL,z_59 = NULL,e_60 = NULL;
  w_59 = t;
  t = k_76(t);
  v_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_59, term_h_24);
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_60 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_24 = ATgetArgument(t, 0);
            ATerm w_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_h_24;
        j_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_59, term_h_24);
        t = n_8(v_59, j_60, t);
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = (ATerm) ATempty;
      }
    x_59 = t;
    t = term_h_24;
    z_59 = t;
    t = (ATerm) ATinsert(CheckATermList(x_59), (ATerm) ATempty);
    e_60 = t;
    t = SSL_table_put(v_59, z_59, e_60);
    t = w_59;
  }
  return(t);
}
ATerm scope_2_0 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm t)
{
  ATerm f_10 (ATerm t)
  {
    t = end_scope_1_0(m_76, t);
    return(t);
  }
  t = begin_scope_1_0(m_76, t);
  t = restore_always_2_0(n_76, f_10, t);
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm k_60 = NULL,p_60 = NULL,r_60 = NULL,v_60 = NULL,y_60 = NULL,d_27 = NULL;
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
    ATerm h_10 (ATerm t)
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
    v_60 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, p_60, v_60);
    d_27 = t;
    t = SSLsetAnnotations(d_27, k_60);
  }
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm x_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,f_27 = NULL;
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
      f_27 = t;
      t = SSLsetAnnotations(f_27, a_61);
      LocalPopChoice(a_25);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = x_24;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
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
            LocalPopChoice(c_25);
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
            t = b_25;
            {
              ATerm i_25 = t;
              int l_25 = stack_ptr;
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
                  LocalPopChoice(l_25);
                  {
                    ATerm b_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,r_27 = NULL;
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
                    r_27 = t;
                    t = SSLsetAnnotations(r_27, b_62);
                  }
                }
              else
                {
                  t = i_25;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_7 (ATerm z_22, ATerm a_23, ATerm b_23, ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
  n_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_22, a_23);
  t = n_8(z_22, a_23, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_25 = ATgetFirst((ATermList) t);
      m_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_62), b_23);
  o_62 = t;
  t = SSL_table_put(z_22, a_23, o_62);
  t = n_62;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  w_62 = t;
  t = term_g_14;
  x_62 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_62);
  y_62 = t;
  t = term_p_25;
  z_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_14, (ATerm)ATmakeAppl(sym_Var_1, w_62), term_p_25);
  t = y_7(x_62, y_62, z_62, t);
  t = w_62;
  return(t);
}
ATerm b_8 (ATerm x_22, ATerm y_22, ATerm t)
{
  ATerm a_63 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_22, y_22);
  t = n_8(x_22, y_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_63 = ATgetFirst((ATermList) t);
      {
        ATerm q_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_63;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL;
  n_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,w_17 = NULL;
        t = term_g_14;
        w_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_14, n_64);
        t = b_8(w_17, n_64, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_25) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            e_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, o_64);
        f_17 = t;
        t = (ATerm) ATinsert(ATempty, e_17);
        g_17 = t;
        t = SSLsetAnnotations(f_17, g_17);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_18 = NULL,g_18 = NULL,p_18 = NULL,y_18 = NULL;
              t = term_g_14;
              y_18 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_14, n_64);
              t = b_8(y_18, n_64, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm w_25 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  f_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, o_64);
              g_18 = t;
              t = (ATerm) ATinsert(ATempty, f_18);
              p_18 = t;
              t = SSLsetAnnotations(g_18, p_18);
              ;
              LocalPopChoice(v_25);
            }
          else
            {
              t = u_25;
              {
                ATerm k_19 = NULL,n_19 = NULL,o_19 = NULL,w_19 = NULL;
                t = term_g_14;
                w_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_14, n_64);
                t = b_8(w_19, n_64, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm x_25 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) x_25) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    k_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, o_64);
                n_19 = t;
                t = (ATerm) ATinsert(ATempty, k_19);
                o_19 = t;
                t = SSLsetAnnotations(n_19, o_19);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_27 = NULL;
  ATerm y_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = y_25;
    }
  w_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_64);
  t_64 = t;
  t = u_64;
  t = DeclareBound_0_0(t);
  v_64 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_64);
  x_27 = t;
  t = SSLsetAnnotations(x_27, t_64);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,z_27 = NULL;
      b_65 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_65);
      z_64 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_65);
      z_27 = t;
      t = SSLsetAnnotations(z_27, z_64);
      LocalPopChoice(d_26);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = c_26;
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,a_28 = NULL;
            f_65 = t;
            if(match_cons(t, sym_App_2))
              {
                d_65 = ATgetArgument(t, 0);
                e_65 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_65);
            c_65 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, d_65, e_65);
            a_28 = t;
            t = SSLsetAnnotations(a_28, c_65);
            LocalPopChoice(f_26);
            {
              ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,c_28 = NULL;
              l_65 = t;
              if(match_cons(t, sym_App_2))
                {
                  h_65 = ATgetArgument(t, 0);
                  i_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_65);
              g_65 = t;
              t = h_65;
              t = mark_buv_0_0(t);
              j_65 = t;
              t = i_65;
              t = mark_build_vars_0_0(t);
              k_65 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, j_65, k_65);
              c_28 = t;
              t = SSLsetAnnotations(c_28, g_65);
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
                  ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL,d_28 = NULL;
                  o_65 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      n_65 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_65);
                  m_65 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, n_65);
                  d_28 = t;
                  t = SSLsetAnnotations(d_28, m_65);
                  LocalPopChoice(h_26);
                  {
                    ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,e_28 = NULL;
                    s_65 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        q_65 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(s_65);
                    p_65 = t;
                    t = q_65;
                    t = mark_buv_0_0(t);
                    r_65 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, r_65);
                    e_28 = t;
                    t = SSLsetAnnotations(e_28, p_65);
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
      ATerm n_66 = NULL,o_66 = NULL;
      n_66 = t;
      if(match_cons(t, sym_Match_1))
        {
          o_66 = ATgetArgument(t, 0);
          {
            ATerm a_20 = NULL,f_20 = NULL,k_28 = NULL;
            t = SSLgetAnnotations(n_66);
            a_20 = t;
            t = o_66;
            t = mark_match_vars_0_0(t);
            f_20 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, f_20);
            k_28 = t;
            t = SSLsetAnnotations(k_28, a_20);
          }
        }
      else
        {
          ATerm m_20 = NULL,o_20 = NULL,l_28 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              o_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_66);
          m_20 = t;
          t = o_66;
          t = mark_build_vars_0_0(t);
          o_20 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, o_20);
          l_28 = t;
          t = SSLsetAnnotations(l_28, m_20);
        }
      ;
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
            ;
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
                  ;
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
                        t = mark_traversal_0_0(t);
                        ;
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
                              ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL;
                              p_66 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  q_66 = ATgetArgument(t, 0);
                                  r_66 = ATgetArgument(t, 1);
                                  s_66 = ATgetArgument(t, 2);
                                  t_66 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = p_66;
                              t = g_7(q_66, r_66, s_66, t_66, t);
                              ;
                              LocalPopChoice(u_26);
                            }
                          else
                            {
                              t = t_26;
                              {
                                ATerm w_26 = t;
                                int x_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    ;
                                    LocalPopChoice(x_26);
                                  }
                                else
                                  {
                                    t = w_26;
                                    {
                                      ATerm z_26 = t;
                                      int b_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL;
                                          b_67 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              c_67 = ATgetArgument(t, 0);
                                              t = c_67;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  y_66 = ATgetArgument(t, 0);
                                                  z_66 = ATgetArgument(t, 1);
                                                  a_67 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = b_67;
                                              t = f_7(y_66, z_66, a_67, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  c_67 = ATgetArgument(t, 0);
                                                  t = c_67;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      y_66 = ATgetArgument(t, 0);
                                                      z_66 = ATgetArgument(t, 1);
                                                      a_67 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = b_67;
                                                  t = e_7(y_66, z_66, a_67, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      c_67 = ATgetArgument(t, 0);
                                                      d_67 = ATgetArgument(t, 1);
                                                      e_67 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = b_67;
                                                  t = d_7(c_67, d_67, e_67, t);
                                                }
                                            }
                                          ;
                                          LocalPopChoice(b_27);
                                        }
                                      else
                                        {
                                          t = z_26;
                                          {
                                            ATerm c_27 = t;
                                            int e_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                ;
                                                LocalPopChoice(e_27);
                                              }
                                            else
                                              {
                                                t = c_27;
                                                {
                                                  ATerm k_27 = t;
                                                  int m_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      ;
                                                      LocalPopChoice(m_27);
                                                    }
                                                  else
                                                    {
                                                      t = k_27;
                                                      {
                                                        ATerm s_27 = t;
                                                        int t_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm o_67 = NULL;
                                                            o_67 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm u_27 = ATgetArgument(t, 0);
                                                                ATerm v_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = o_67;
                                                            t = c_7(t);
                                                            ;
                                                            LocalPopChoice(t_27);
                                                          }
                                                        else
                                                          {
                                                            t = s_27;
                                                            {
                                                              ATerm w_27 = t;
                                                              int y_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(y_27);
                                                                }
                                                              else
                                                                {
                                                                  t = w_27;
                                                                  {
                                                                    ATerm b_28 = t;
                                                                    int f_28 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        ;
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
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              ;
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
ATerm i_10 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL;
  b_68 = t;
  t = term_w_13;
  c_68 = t;
  t = (ATerm) ATinsert(ATempty, term_i_28);
  d_68 = t;
  t = SSL_printnl(c_68, d_68);
  t = b_68;
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,p_28 = NULL;
  h_68 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_68);
  e_68 = t;
  t = f_68;
  t = map_1_0(mark_buv_0_0, t);
  g_68 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_68);
  p_28 = t;
  t = SSLsetAnnotations(p_28, e_68);
  return(t);
}
ATerm r_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL;
  i_68 = t;
  t = term_w_13;
  j_68 = t;
  t = (ATerm) ATinsert(ATempty, term_j_28);
  k_68 = t;
  t = SSL_printnl(j_68, k_68);
  t = i_68;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,t_28 = NULL,q_28 = NULL;
  t = if_verbose4_1_0(i_10, t);
  a_68 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_68);
  t_67 = t;
  t = u_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_67 = ATgetFirst((ATermList) t);
      x_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_67);
  v_67 = t;
  t = x_67;
  t = Cons_2_0(j_10, r_10, t);
  y_67 = t;
  t = (ATerm) ATinsert(CheckATermList(y_67), w_67);
  q_28 = t;
  t = SSLsetAnnotations(q_28, v_67);
  z_67 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, z_67);
  t_28 = t;
  t = SSLsetAnnotations(t_28, t_67);
  t = if_verbose4_1_0(s_10, t);
  return(t);
}
ATerm e_8 (ATerm s_43, ATerm t_43, ATerm t)
{
  ATerm l_68 = NULL;
  t = SSL_fputc(s_43, t_43);
  l_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_68);
  return(t);
}
ATerm f_8 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm m_68 = NULL;
  t = SSL_write_term_to_stream_text(g_47, h_47);
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_68);
  return(t);
}
ATerm h_8 (ATerm r_96 (ATerm), ATerm i_452, ATerm k_47, ATerm t)
{
  ATerm n_68 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_452, term_n_28);
  t = k_8(t);
  n_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_68, k_47);
  t = r_96(t);
  t = fclose_0_0(t);
  t = k_47;
  return(t);
}
ATerm g_8 (ATerm c_47, ATerm d_47, ATerm t)
{
  ATerm o_68 = NULL;
  t = SSL_write_term_to_stream_baf(c_47, d_47);
  o_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_68);
  return(t);
}
ATerm v_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_28 = ATgetArgument(t, 0);
      if(match_cons(o_28, sym_Stream_1))
        {
          b_21 = ATgetArgument(o_28, 0);
        }
      else
        _fail(t);
      c_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8(b_21, c_21, t);
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_28 = ATgetArgument(t, 0);
      if(match_cons(r_28, sym_Stream_1))
        {
          z_21 = ATgetArgument(r_28, 0);
        }
      else
        _fail(t);
      a_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(z_21, a_22, t);
  w_21 = t;
  t = term_s_28;
  x_21 = t;
  t = w_21;
  if(match_cons(t, sym_Stream_1))
    {
      y_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_28, w_21);
  t = e_8(x_21, y_21, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,c_70 = NULL,d_70 = NULL,b_29 = NULL,a_29 = NULL;
  t_68 = t;
  if(match_cons(t, sym__2))
    {
      a_69 = ATgetArgument(t, 0);
      b_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_68);
  z_68 = t;
  t = a_69;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_10 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((s_68 != NULL) && (s_68 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(u_10, t);
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = term_z_28;
        s_68 = t;
      }
    c_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_69, b_69);
    a_29 = t;
    t = SSLsetAnnotations(a_29, z_68);
    t = t_68;
    if(match_cons(t, sym__2))
      {
        v_68 = ATgetArgument(t, 0);
        w_68 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_68);
    u_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_68, (ATerm) ATmakeAppl(sym__2, not_null(s_68), w_68));
    b_29 = t;
    t = SSLsetAnnotations(b_29, u_68);
    y_68 = t;
    if(match_cons(t, sym__2))
      {
        c_70 = ATgetArgument(t, 0);
        d_70 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm e_29 = t;
      int f_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,c_29 = NULL;
          t = SSLgetAnnotations(y_68);
          u_20 = t;
          t = c_70;
          t = fetch_1_0(v_10, t);
          x_20 = t;
          t = d_70;
          if(match_cons(t, sym__2))
            {
              z_20 = ATgetArgument(t, 0);
              a_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_8(x_10, z_20, a_21, t);
          y_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_20, y_20);
          c_29 = t;
          t = SSLsetAnnotations(c_29, u_20);
          ;
          LocalPopChoice(f_29);
        }
      else
        {
          t = e_29;
          {
            ATerm l_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,d_29 = NULL;
            t = SSLgetAnnotations(y_68);
            l_21 = t;
            t = d_70;
            if(match_cons(t, sym__2))
              {
                u_21 = ATgetArgument(t, 0);
                v_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_8(y_10, u_21, v_21, t);
            t_21 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_70, t_21);
            d_29 = t;
            t = SSLsetAnnotations(d_29, l_21);
          }
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
ATerm apply_strategy_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL;
  k_70 = t;
  t = dtime_0_0(t);
  t = k_70;
  t = d_98(t);
  j_70 = t;
  t = dtime_0_0(t);
  g_70 = t;
  t = j_70;
  if(match_cons(t, sym__2))
    {
      h_70 = ATgetArgument(t, 0);
      i_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_70), (ATerm) ATmakeAppl(sym_Runtime_1, g_70)), i_70);
  return(t);
}
ATerm y_70 (ATerm s_70, ATerm t)
{
  t = SSL_fclose(s_70);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL;
  w_70 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_70 = ATgetArgument(t, 0);
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_70);
            ;
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            t = y_70(w_70, t);
          }
      }
    }
  else
    {
      t = y_70(w_70, t);
    }
  return(t);
}
ATerm i_8 (ATerm i_47, ATerm t)
{
  t = SSL_read_term_from_stream(i_47);
  return(t);
}
ATerm j_8 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm z_70 = NULL;
  t = SSL_fopen(u_43, v_43);
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_70);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_71 = NULL;
  t = SSL_stdin_stream();
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_71);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_71 = NULL;
  t = SSL_stdout_stream();
  b_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_71);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_71 = NULL;
  t = SSL_stderr_stream();
  c_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_71);
  return(t);
}
ATerm j_72 (ATerm i_71, ATerm t)
{
  ATerm j_71 = NULL;
  t = SSL_explode_term(i_71);
  if(match_cons(t, sym__2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_29 = ATgetArgument(t, 1);
        if(((ATgetType(q_29) == AT_LIST) && !(ATisEmpty(q_29))))
          {
            j_71 = ATgetFirst((ATermList) q_29);
            {
              ATerm t_29 = (ATerm) ATgetNext((ATermList) q_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_71;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_71;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_71;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_71;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm k_72 (ATerm m_71, ATerm n_71, ATerm o_71, ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,u_71 = NULL,i_29 = NULL;
  t = SSLgetAnnotations(o_71);
  r_71 = t;
  t = m_71;
  if(match_cons(t, sym_Path_1))
    {
      u_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_71, n_71);
  i_29 = t;
  t = SSLsetAnnotations(i_29, r_71);
  if(match_cons(t, sym__2))
    {
      p_71 = ATgetArgument(t, 0);
      q_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(p_71, q_71, t);
  return(t);
}
ATerm l_72 (ATerm w_71, ATerm x_71, ATerm y_71, ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL,e_72 = NULL,j_29 = NULL;
  t = SSLgetAnnotations(y_71);
  b_72 = t;
  t = SSL_is_string(w_71);
  e_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_72, x_71);
  j_29 = t;
  t = SSLsetAnnotations(j_29, b_72);
  if(match_cons(t, sym__2))
    {
      z_71 = ATgetArgument(t, 0);
      a_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(z_71, a_72, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
  g_72 = t;
  if(match_cons(t, sym__2))
    {
      h_72 = ATgetArgument(t, 0);
      i_72 = ATgetArgument(t, 1);
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_72(g_72, t);
            ;
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
            {
              ATerm z_29 = t;
              int a_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_72(h_72, i_72, g_72, t);
                  ;
                  LocalPopChoice(a_30);
                }
              else
                {
                  t = z_29;
                  t = l_72(h_72, i_72, g_72, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_72(g_72, t);
    }
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL;
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_72 = NULL;
      p_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_72, term_f_30);
      t = k_8(t);
      ;
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      t = debug_1_0(z_10, t);
      _fail(t);
    }
  n_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_8(o_72, t);
  m_72 = t;
  t = n_72;
  t = fclose_0_0(t);
  t = m_72;
  return(t);
}
ATerm fetch_1_0 (ATerm s_80 (ATerm), ATerm t)
{
  ATerm n_73 (ATerm t)
  {
    ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL;
    k_73 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_73 = ATgetFirst((ATermList) t);
        m_73 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_23 = NULL,j_23 = NULL,r_29 = NULL;
          t = SSLgetAnnotations(k_73);
          g_23 = t;
          t = l_73;
          t = s_80(t);
          j_23 = t;
          t = (ATerm) ATinsert(CheckATermList(m_73), j_23);
          r_29 = t;
          t = SSLsetAnnotations(r_29, g_23);
          ;
          LocalPopChoice(i_30);
        }
      else
        {
          t = g_30;
          {
            ATerm v_23 = NULL,z_23 = NULL,s_29 = NULL;
            t = SSLgetAnnotations(k_73);
            v_23 = t;
            t = m_73;
            t = n_73(t);
            z_23 = t;
            t = (ATerm) ATinsert(CheckATermList(z_23), l_73);
            s_29 = t;
            t = SSLsetAnnotations(s_29, v_23);
          }
        }
    }
    return(t);
  }
  t = n_73(t);
  return(t);
}
ATerm d_8 (ATerm k_41, ATerm l_41, ATerm t)
{
  t = SSL_strcat(k_41, l_41);
  return(t);
}
ATerm debug_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  ATerm q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL;
  q_73 = t;
  t = p_96(t);
  r_73 = t;
  t = term_w_13;
  s_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_73), r_73);
  t_73 = t;
  t = SSL_printnl(s_73, t_73);
  t = q_73;
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
    }
  return(t);
}
ATerm b_11 (ATerm t)
{
  t = term_m_30;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_74 = NULL;
      a_74 = t;
      t = SSL_is_string(a_74);
      ;
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_11, t);
            ;
            LocalPopChoice(q_30);
          }
        else
          {
            t = p_30;
            {
              ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL;
              g_74 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_74 = ATgetArgument(t, 0);
                  t = h_74;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_74 = ATgetArgument(t, 0);
                      t = h_74;
                      {
                        ATerm s_30 = t;
                        int t_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(t_30);
                          }
                        else
                          {
                            t = s_30;
                            t = debug_1_0(b_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_74 = NULL,n_74 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_74 = ATgetArgument(t, 0);
                          i_74 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_74;
                      t = eval_config_0_0(t);
                      m_74 = t;
                      t = i_74;
                      t = eval_config_0_0(t);
                      n_74 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_74, n_74);
                      t = d_8(m_74, n_74, t);
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
  ATerm r_74 = NULL,s_74 = NULL;
  r_74 = t;
  t = term_u_30;
  s_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_30, r_74);
  t = n_8(s_74, r_74, t);
  {
    ATerm c_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_74 = NULL,u_74 = NULL;
        t = eval_config_0_0(t);
        t_74 = t;
        t = term_u_30;
        u_74 = t;
        t = SSL_table_put(u_74, r_74, t_74);
        t = t_74;
        ;
        LocalPopChoice(g_31);
      }
    else
      {
        t = c_31;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm y_74 = NULL;
  y_74 = t;
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_75 = NULL;
        t = term_e_14;
        t = get_config_0_0(t);
        a_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_75, term_k_31);
        t = geq_0_0(t);
        t = y_74;
        t = h_105(t);
        ;
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        t = y_74;
      }
  }
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm d_75 = NULL;
  d_75 = t;
  if(match_string(t, "-k"))
    {
      t = d_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_75;
    }
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm e_75 = NULL,f_75 = NULL,g_75 = NULL;
  e_75 = t;
  t = SSL_string_to_int(e_75);
  f_75 = t;
  t = term_l_31;
  g_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_31, f_75);
  t = q_8(g_75, f_75, t);
  t = e_75;
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_11, h_11, j_11, t);
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm i_75 = NULL;
  i_75 = t;
  if(match_string(t, "-S"))
    {
      t = i_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_75;
    }
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL;
  t = term_e_14;
  j_75 = t;
  t = term_n_31;
  k_75 = t;
  t = term_p_31;
  t = q_8(j_75, k_75, t);
  t = term_r_31;
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm s_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL;
  l_75 = t;
  t = SSL_string_to_int(l_75);
  m_75 = t;
  t = term_e_14;
  n_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_14, m_75);
  t = q_8(n_75, m_75, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_75);
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm v_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL;
  t = term_u_31;
  o_75 = t;
  t = term_v_13;
  p_75 = t;
  t = term_v_31;
  t = q_8(o_75, p_75, t);
  t = term_x_31;
  return(t);
}
ATerm x_11 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_11, m_11, p_11, t);
      ;
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
        ATerm e_32 = t;
        int f_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_11, t_11, u_11, t);
            ;
            LocalPopChoice(f_32);
          }
        else
          {
            t = e_32;
            t = Option_3_0(v_11, w_11, x_11, t);
          }
      }
    }
  return(t);
}
ATerm q_8 (ATerm t_49, ATerm u_49, ATerm t)
{
  ATerm q_75 = NULL;
  t = term_u_30;
  q_75 = t;
  t = SSL_table_put(q_75, t_49, u_49);
  t = (ATerm) ATmakeAppl(sym__3, term_u_30, t_49, u_49);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL;
      t = term_v_13;
      t = e_0(t);
      v_75 = t;
      t = term_g_32;
      w_75 = t;
      t = term_h_32;
      x_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_32, term_h_32, v_75);
      t = o_8(w_75, x_75, v_75, t);
      _fail(t);
    }
  else
    {
      ATerm a_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_75 = ATgetFirst((ATermList) t);
          u_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_75;
      t = c_0(t);
      t = term_v_13;
      t = d_0(t);
      a_76 = t;
      t = (ATerm) ATinsert(CheckATermList(u_75), a_76);
    }
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm c_76 = NULL;
  c_76 = t;
  if(match_string(t, "-o"))
    {
      t = c_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_76;
    }
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL;
  i_76 = t;
  t = term_i_32;
  j_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_32, i_76);
  t = q_8(j_76, i_76, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_76);
  return(t);
}
ATerm b_12 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_11, a_12, b_12, t);
  return(t);
}
ATerm o_8 (ATerm m_22, ATerm n_22, ATerm l_22, ATerm t)
{
  ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL;
  r_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, n_22);
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_32 = ATgetArgument(t, 0);
            ATerm n_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_22, n_22);
        t = n_8(m_22, n_22, t);
        ;
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        t = (ATerm) ATempty;
      }
    s_76 = t;
    t = (ATerm) ATinsert(CheckATermList(s_76), l_22);
    t_76 = t;
    t = SSL_table_put(m_22, n_22, t_76);
    t = r_76;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
      t = term_v_13;
      t = n_0(t);
      e_77 = t;
      t = term_g_32;
      f_77 = t;
      t = term_h_32;
      g_77 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_32, term_h_32, e_77);
      t = o_8(f_77, g_77, e_77, t);
      _fail(t);
    }
  else
    {
      ATerm k_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_77 = ATgetFirst((ATermList) t);
          b_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_77;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_77 = ATgetFirst((ATermList) t);
          d_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_77;
      t = k_0(t);
      t = c_77;
      t = l_0(t);
      k_77 = t;
      t = (ATerm) ATinsert(CheckATermList(d_77), k_77);
    }
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm m_77 = NULL;
  m_77 = t;
  if(match_string(t, "-i"))
    {
      t = m_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_77;
    }
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL;
  n_77 = t;
  t = term_o_32;
  o_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_32, n_77);
  t = q_8(o_77, n_77, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_77);
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_12, d_12, f_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_13;
  t = whoami_0_0(t);
  p_77 = t;
  t = term_w_13;
  r_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_32), p_77);
  s_77 = t;
  t = SSL_printnl(r_77, s_77);
  t = term_a_14;
  q_77 = t;
  t = SSL_exit(q_77);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm l_8 (ATerm p_34, ATerm q_34, ATerm t)
{
  ATerm u_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_34, q_34);
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = u_32;
      t = SSL_addr(p_34, q_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL,w_77 = NULL;
  u_77 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_77;
      t = a_87(t);
    }
  else
    {
      ATerm z_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_77 = ATgetFirst((ATermList) t);
          w_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_77;
      t = foldr_2_0(a_87, b_87, t);
      z_77 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_77, z_77);
      t = b_87(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  if(match_cons(t, sym__2))
    {
      j_25 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_8(j_25, k_25, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_78 = NULL,d_25 = NULL,f_25 = NULL;
  t = times_0_0(t);
  f_25 = t;
  t = SSL_explode_term(f_25);
  if(match_cons(t, sym__2))
    {
      ATerm z_32 = ATgetArgument(t, 0);
      d_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_25;
  t = foldr_2_0(g_12, h_12, t);
  c_78 = t;
  t = SSL_TicksToSeconds(c_78);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL;
  p_78 = t;
  if(match_cons(t, sym__2))
    {
      q_78 = ATgetArgument(t, 0);
      r_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_78;
        if((q_78 != t))
          {
            _fail(t);
          }
        t = p_78;
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = (ATerm) ATmakeAppl(sym__2, q_78, r_78);
        {
          ATerm d_33 = t;
          int e_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_78, r_78);
              ;
              LocalPopChoice(e_33);
            }
          else
            {
              t = d_33;
              t = SSL_gtr(q_78, r_78);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_78, r_78);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  ATerm v_78 = NULL;
  v_78 = t;
  {
    ATerm h_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_78 = NULL;
        t = term_e_14;
        t = get_config_0_0(t);
        x_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_78, term_a_14);
        t = geq_0_0(t);
        t = v_78;
        t = g_105(t);
        ;
        LocalPopChoice(j_33);
      }
    else
      {
        t = h_33;
        t = v_78;
      }
  }
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL,c_79 = NULL,d_79 = NULL;
  t = run_time_0_0(t);
  z_78 = t;
  t = term_v_13;
  t = whoami_0_0(t);
  a_79 = t;
  t = term_w_13;
  c_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_33), z_78), term_l_33), a_79);
  d_79 = t;
  t = SSL_printnl(c_79, d_79);
  t = (ATerm) ATmakeAppl(sym__2, term_w_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_33), z_78), term_l_33), a_79));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_31;
  e_79 = t;
  t = SSL_exit(e_79);
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm m_79 = NULL,n_79 = NULL;
  n_79 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_79;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_79 = ATgetArgument(t, 0);
          {
            ATerm z_25 = NULL,b_30 = NULL;
            t = SSLgetAnnotations(n_79);
            z_25 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_79);
            b_30 = t;
            t = SSLsetAnnotations(b_30, z_25);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_79;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      t = fetch_1_0(j_12, t);
    }
  t = b_99(t);
  return(t);
}
ATerm map_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm d_80 (ATerm t)
  {
    ATerm a_80 = NULL,b_80 = NULL,c_80 = NULL;
    a_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_80;
      }
    else
      {
        ATerm k_26 = NULL,n_26 = NULL,o_26 = NULL,h_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_80 = ATgetFirst((ATermList) t);
            c_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_80);
        k_26 = t;
        t = b_80;
        t = i_80(t);
        n_26 = t;
        t = c_80;
        t = d_80(t);
        o_26 = t;
        t = (ATerm) ATinsert(CheckATermList(o_26), n_26);
        h_30 = t;
        t = SSLsetAnnotations(h_30, k_26);
      }
    return(t);
  }
  t = d_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_80 = NULL,k_80 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_80 = ATgetFirst((ATermList) t);
      k_80 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_80 = NULL,p_80 = NULL;
        ATerm k_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_80)), not_null(p_80));
          return(t);
        }
        t = k_80;
        t = i_0(t);
        if(((o_80 != NULL) && (o_80 != t)))
          _fail(t);
        else
          o_80 = t;
        t = h_80;
        t = g_0(t);
        if(((p_80 != NULL) && (p_80 != t)))
          _fail(t);
        else
          p_80 = t;
        t = k_80;
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
ATerm n_8 (ATerm d_24, ATerm e_24, ATerm t)
{
  t = SSL_table_get(d_24, e_24);
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL,j_30 = NULL;
  x_80 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_80);
  v_80 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_80);
  j_30 = t;
  t = SSLsetAnnotations(j_30, v_80);
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm b_81 = NULL;
  b_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_81), term_q_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_80 = NULL,u_80 = NULL;
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      t = fetch_1_0(l_12, t);
    }
  t = term_t_33;
  t = echo_0_0(t);
  t = term_g_32;
  r_80 = t;
  t = term_h_32;
  u_80 = t;
  t = term_u_33;
  t = n_8(r_80, u_80, t);
  t = reverse_acc_2_0(_id, n_12, t);
  t = map_1_0(o_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL,f_81 = NULL;
  d_81 = t;
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_81;
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
            t = d_81;
          }
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = (ATerm) ATinsert(ATempty, d_81);
      }
    e_81 = t;
    t = term_z_28;
    f_81 = t;
    t = SSL_printnl(f_81, e_81);
    t = d_81;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm p_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm j_81 = NULL,k_81 = NULL;
  t = term_a_34;
  j_81 = t;
  t = term_v_13;
  k_81 = t;
  t = term_b_34;
  t = q_8(j_81, k_81, t);
  return(t);
}
ATerm r_12 (ATerm t)
{
  t = term_c_34;
  return(t);
}
ATerm s_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_12 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL;
  t = term_a_34;
  n_81 = t;
  t = term_v_13;
  o_81 = t;
  t = term_b_34;
  t = q_8(n_81, o_81, t);
  t = term_d_34;
  l_81 = t;
  t = term_v_13;
  m_81 = t;
  t = term_e_34;
  t = q_8(l_81, m_81, t);
  t = term_f_34;
  return(t);
}
ATerm v_12 (ATerm t)
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
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      t = Option_3_0(s_12, u_12, v_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm t)
{
  ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,r_30 = NULL;
  u_81 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_81 = ATgetFirst((ATermList) t);
      r_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_81);
  p_81 = t;
  t = q_81;
  t = q_62(t);
  s_81 = t;
  t = r_81;
  t = r_62(t);
  t_81 = t;
  t = (ATerm) ATinsert(CheckATermList(t_81), s_81);
  r_30 = t;
  t = SSLsetAnnotations(r_30, p_81);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_102 (ATerm), ATerm t)
{
  ATerm z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,e_82 = NULL,f_82 = NULL,b_31 = NULL;
  z_81 = t;
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_34;
        t = g_102(t);
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
      }
    t = z_81;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_82 = ATgetFirst((ATermList) t);
        c_82 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_81);
    a_82 = t;
    t = term_t_32;
    f_82 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_32, b_82);
    t = q_8(f_82, b_82, t);
    t = c_82;
    {
      ATerm u_82 (ATerm t)
      {
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_34 = t;
            int r_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_82 = NULL;
                i_82 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_82;
                ;
                LocalPopChoice(r_34);
              }
            else
              {
                t = o_34;
                t = g_102(t);
                t = Cons_2_0(_id, u_82, t);
              }
            ;
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            {
              ATerm q_82 = NULL,r_82 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_82 = ATgetFirst((ATermList) t);
                  r_82 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_82), (ATerm) ATmakeAppl(sym_Undefined_1, q_82));
            }
          }
        return(t);
      }
      t = u_82(t);
      e_82 = t;
      t = (ATerm) ATinsert(CheckATermList(e_82), (ATerm) ATmakeAppl(sym_Program_1, b_82));
      b_31 = t;
      t = SSLsetAnnotations(b_31, a_82);
    }
  }
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm g_83 = NULL;
  g_83 = t;
  if(match_string(t, "--help"))
    {
      t = g_83;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_83;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_83;
        }
    }
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL;
  t = term_p_33;
  h_83 = t;
  t = term_v_13;
  i_83 = t;
  t = term_s_34;
  t = q_8(h_83, i_83, t);
  t = term_t_34;
  return(t);
}
ATerm c_13 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm d_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL;
  b_83 = t;
  t = term_g_32;
  d_83 = t;
  t = term_h_32;
  e_83 = t;
  t = (ATerm) ATempty;
  f_83 = t;
  t = SSL_table_put(d_83, e_83, f_83);
  t = b_83;
  {
    ATerm w_12 (ATerm t)
    {
      ATerm v_34 = t;
      int w_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_102(t);
          ;
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
                t = Option_3_0(x_12, y_12, c_13, t);
                ;
                LocalPopChoice(y_34);
              }
            else
              {
                t = x_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_12, t);
    {
      ATerm z_34 = t;
      int a_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_83 = NULL;
          p_83 = t;
          {
            ATerm b_35 = t;
            int c_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_26 = NULL;
                t = p_83;
                {
                  ATerm d_35 = t;
                  int e_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_33;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_35);
                    }
                  else
                    {
                      t = d_35;
                      t = fetch_1_0(d_13, t);
                    }
                  t = p_83;
                  t = default_system_usage_0_0(t);
                  t = term_n_31;
                  v_26 = t;
                  t = SSL_exit(v_26);
                }
                ;
                LocalPopChoice(c_35);
              }
            else
              {
                t = b_35;
                {
                  ATerm l_27 = NULL;
                  t = term_a_34;
                  t = get_config_0_0(t);
                  t = p_83;
                  t = default_system_about_0_0(t);
                  t = term_n_31;
                  l_27 = t;
                  t = SSL_exit(l_27);
                }
              }
          }
          ;
          LocalPopChoice(a_35);
        }
      else
        {
          t = z_34;
          {
            ATerm f_35 = t;
            int g_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL;
                ATerm h_13 (ATerm t)
                {
                  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL,f_31 = NULL;
                  v_83 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_83 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_83);
                  t_83 = t;
                  t = u_83;
                  if(((z_82 != NULL) && (z_82 != t)))
                    _fail(t);
                  else
                    z_82 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_83);
                  f_31 = t;
                  t = SSLsetAnnotations(f_31, t_83);
                  return(t);
                }
                t = fetch_1_0(h_13, t);
                t = term_w_13;
                r_83 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_82)), term_h_35);
                s_83 = t;
                t = SSL_printnl(r_83, s_83);
                t = (ATerm) ATmakeAppl(sym__2, term_w_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_82)), term_h_35));
                t = default_system_usage_0_0(t);
                t = term_a_14;
                q_83 = t;
                t = SSL_exit(q_83);
                ;
                LocalPopChoice(g_35);
              }
            else
              {
                t = f_35;
              }
          }
        }
      a_83 = t;
      t = term_g_32;
      c_83 = t;
      t = SSL_table_destroy(c_83);
      t = a_83;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL;
  t = parse_options_1_0(d_99, t);
  a_84 = t;
  t = term_i_35;
  d_84 = t;
  t = SSL_table_create(d_84);
  t = term_i_35;
  b_84 = t;
  t = term_j_35;
  c_84 = t;
  t = SSL_table_put(b_84, c_84, a_84);
  t = a_84;
  t = f_99(t);
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_99, t);
        ;
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
              t = g_99(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_35);
            }
          else
            {
              t = m_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_13 (ATerm t)
{
  t = if_verbose2_1_0(s_13, t);
  return(t);
}
ATerm o_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL;
  t = term_o_35;
  e_84 = t;
  t = term_v_13;
  f_84 = t;
  t = term_p_35;
  t = q_8(e_84, f_84, t);
  t = term_q_35;
  return(t);
}
ATerm r_13 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm s_13 (ATerm t)
{
  ATerm g_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL;
  g_84 = t;
  t = term_t_32;
  t = get_config_0_0(t);
  j_84 = t;
  t = term_w_13;
  k_84 = t;
  t = (ATerm) ATinsert(ATempty, j_84);
  l_84 = t;
  t = SSL_printnl(k_84, l_84);
  t = g_84;
  return(t);
}
ATerm iowrap_3_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  ATerm l_13 (ATerm t)
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_98(t);
        ;
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
              t = input_option_0_0(t);
              ;
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
                    t = output_option_0_0(t);
                    ;
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
                          t = Option_3_0(o_13, q_13, r_13, t);
                          ;
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_36);
                              }
                            else
                              {
                                t = a_36;
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
  ATerm n_13 (ATerm t)
  {
    ATerm o_84 = NULL,r_84 = NULL,s_84 = NULL;
    r_84 = t;
    {
      ATerm c_36 = t;
      int d_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_84 != NULL) && (o_84 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_84 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_13, t);
          ;
          LocalPopChoice(d_36);
        }
      else
        {
          t = c_36;
          t = term_e_36;
          o_84 = t;
        }
      t = not_null(o_84);
      t = ReadFromFile_0_0(t);
      s_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_84, s_84);
      t = apply_strategy_1_0(m_98, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(l_13, o_98, m_13, n_13, t);
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL,b_85 = NULL,c_85 = NULL,h_31 = NULL;
  c_85 = t;
  if(match_cons(t, sym__2))
    {
      u_84 = ATgetArgument(t, 0);
      v_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_85);
  t_84 = t;
  t = v_84;
  t = mark_bound_unbound_vars_0_0(t);
  b_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_84, b_85);
  h_31 = t;
  t = SSLsetAnnotations(h_31, t_84);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(u_13, _fail, default_usage_0_0, t);
  return(t);
}
