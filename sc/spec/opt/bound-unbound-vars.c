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
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_i_35;
ATerm term_q_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_g_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_b_30;
ATerm term_u_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_x_28;
ATerm term_r_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_h_28;
ATerm term_i_25;
ATerm term_d_25;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_x_21;
ATerm term_m_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
void init_constant_terms (void)
{
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Defined_2, term_o_20, term_p_20);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Defined_2, term_t_23, term_u_23);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Defined_2, term_d_25, term_p_20);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_d_14, term_j_30);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_u_30, term_r_13);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_d_31);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_v_32, term_r_13);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym__2, term_y_32, term_r_13);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_r_13);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_m_34, term_r_13);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose4_1_0 (ATerm l_104 (ATerm), ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm h_75 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm g_75 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm f_75 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm w_2 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm alltd_1_0 (ATerm m_77 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm c_7 (ATerm e_21, ATerm f_21, ATerm g_21, ATerm);
ATerm c_3 (ATerm);
ATerm k_3 (ATerm);
ATerm o_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm d_7 (ATerm y_20, ATerm c_21, ATerm a_21, ATerm);
ATerm z_3 (ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm e_7 (ATerm s_20, ATerm w_20, ATerm u_20, ATerm);
ATerm f_7 (ATerm j_83 (ATerm), ATerm m_30, ATerm l_30, ATerm);
ATerm at_end_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm j_18 (ATerm n_17, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm j_7 (ATerm k_576, ATerm p_576, ATerm f_55, ATerm);
ATerm while_not_2_0 (ATerm g_89 (ATerm), ATerm h_89 (ATerm), ATerm);
ATerm for_3_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm l_89 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm v_27 (ATerm f_24, ATerm j_24, ATerm m_24, ATerm);
ATerm n_5 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm f_6 (ATerm);
ATerm l_6 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm p_7 (ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm s_30, ATerm r_30, ATerm);
ATerm q_7 (ATerm o_83 (ATerm), ATerm o_30, ATerm n_30, ATerm);
ATerm foldr_3_0 (ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm free_vars_3_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm o_8 (ATerm);
ATerm r_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm mark_rdef_0_0 (ATerm);
ATerm b_9 (ATerm);
ATerm IntroduceBound_0_0 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm r_7 (ATerm q_19, ATerm r_19, ATerm s_19, ATerm u_19, ATerm);
ATerm CompareEntries_0_0 (ATerm);
ATerm s_7 (ATerm f_18, ATerm g_18, ATerm e_18, ATerm);
ATerm g_9 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm t_7 (ATerm d_23, ATerm c_23, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm l_9 (ATerm);
ATerm undefine_unbound_MarkVar_0_0 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm u_7 (ATerm q_75 (ATerm), ATerm s_21, ATerm q_21, ATerm);
ATerm q_9 (ATerm);
ATerm DeclareUnbound_0_0 (ATerm);
ATerm v_7 (ATerm f_22, ATerm g_22, ATerm);
ATerm end_scope_1_0 (ATerm n_75 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm m_75 (ATerm), ATerm);
ATerm scope_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm);
ATerm c_10 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm mark_build_vars_0_0 (ATerm);
ATerm w_7 (ATerm n_22, ATerm o_22, ATerm p_22, ATerm);
ATerm DeclareBound_0_0 (ATerm);
ATerm z_7 (ATerm l_22, ATerm m_22, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm MarkAndBind_0_0 (ATerm);
ATerm mark_match_vars_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm mark_bound_unbound_vars_0_0 (ATerm);
ATerm c_8 (ATerm d_43, ATerm e_43, ATerm);
ATerm d_8 (ATerm r_46, ATerm s_46, ATerm);
ATerm f_8 (ATerm t_95 (ATerm), ATerm r_446, ATerm v_46, ATerm);
ATerm e_8 (ATerm n_46, ATerm o_46, ATerm);
ATerm k_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_97 (ATerm), ATerm);
ATerm p_69 (ATerm j_69, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm g_8 (ATerm t_46, ATerm);
ATerm h_8 (ATerm f_43, ATerm g_43, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_71 (ATerm z_69, ATerm);
ATerm b_71 (ATerm d_70, ATerm e_70, ATerm f_70, ATerm);
ATerm c_71 (ATerm n_70, ATerm o_70, ATerm p_70, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm o_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_79 (ATerm), ATerm);
ATerm b_8 (ATerm v_40, ATerm w_40, ATerm);
ATerm debug_1_0 (ATerm r_95 (ATerm), ATerm);
ATerm q_10 (ATerm);
ATerm t_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm j_104 (ATerm), ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm h_11 (ATerm);
ATerm i_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm p_11 (ATerm);
ATerm s_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm n_8 (ATerm e_49, ATerm f_49, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm l_8 (ATerm a_22, ATerm b_22, ATerm z_21, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm w_11 (ATerm);
ATerm y_11 (ATerm);
ATerm z_11 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_8 (ATerm b_34, ATerm c_34, ATerm);
ATerm foldr_2_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_12 (ATerm);
ATerm b_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_104 (ATerm), ATerm);
ATerm c_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm e_12 (ATerm);
ATerm need_help_1_0 (ATerm d_98 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm k_8 (ATerm r_23, ATerm s_23, ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm k_12 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_62 (ATerm), ATerm c_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm i_101 (ATerm), ATerm);
ATerm r_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm parse_options_1_0 (ATerm h_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm);
ATerm z_12 (ATerm);
ATerm g_13 (ATerm);
ATerm i_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm iowrap_3_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm);
ATerm q_13 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,u_0 = NULL,v_0 = NULL;
  a_0 = t;
  t = term_r_13;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_s_13;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_13), b_0), term_t_13);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_v_13;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm x_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL;
        t = term_d_14;
        t = get_config_0_0(t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_e_14);
        t = geq_0_0(t);
        t = x_0;
        t = l_104(t);
        ;
        LocalPopChoice(z_13);
      }
    else
      {
        t = x_13;
        t = x_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm h_75 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,u_6 = NULL;
  ATerm j_0 (ATerm t)
  {
    ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,a_7 = NULL,w_6 = NULL;
    u_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        n_1 = ATgetArgument(t, 0);
        q_1 = ATgetArgument(t, 1);
        r_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_1);
    m_1 = t;
    t = n_1;
    t = h_75(t);
    s_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, s_1, q_1, r_1);
    w_6 = t;
    t = SSLsetAnnotations(w_6, m_1);
    t_1 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        h_1 = ATgetArgument(t, 0);
        i_1 = ATgetArgument(t, 1);
        j_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_1);
    g_1 = t;
    t = i_1;
    t = h_75(t);
    l_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_1, l_1, j_1);
    a_7 = t;
    t = SSLsetAnnotations(a_7, g_1);
    return(t);
  }
  ATerm l_0 (ATerm t)
  {
    ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,b_2 = NULL,g_7 = NULL;
    b_2 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        w_1 = ATgetArgument(t, 0);
        x_1 = ATgetArgument(t, 1);
        y_1 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_2);
    v_1 = t;
    t = y_1;
    t = h_75(t);
    z_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_1, x_1, z_1);
    g_7 = t;
    t = SSLsetAnnotations(g_7, v_1);
    return(t);
  }
  if(((f_1 != NULL) && (f_1 != t)))
    _fail(t);
  else
    f_1 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((c_1 != NULL) && (c_1 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_1 = ATgetArgument(t, 0);
      if(((d_1 != NULL) && (d_1 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_1 = ATgetArgument(t, 1);
      if(((e_1 != NULL) && (e_1 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        e_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_1);
  if(((b_1 != NULL) && (b_1 != t)))
    _fail(t);
  else
    b_1 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, c_1, d_1, e_1);
  if(((u_6 != NULL) && (u_6 != t)))
    _fail(t);
  else
    u_6 = t;
  t = SSLsetAnnotations(u_6, b_1);
  t = abstract_choice_2_0(j_0, l_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm g_75 (ATerm), ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,f_2 = NULL,g_2 = NULL,m_7 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm h_2 = NULL,i_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,n_7 = NULL;
    n_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        i_2 = ATgetArgument(t, 0);
        l_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_2);
    h_2 = t;
    t = i_2;
    t = g_75(t);
    m_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, m_2, l_2);
    n_7 = t;
    t = SSLsetAnnotations(n_7, h_2);
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    ATerm o_2 = NULL,s_2 = NULL,t_2 = NULL,v_2 = NULL,x_2 = NULL,o_7 = NULL;
    x_2 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        s_2 = ATgetArgument(t, 0);
        t_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_2);
    o_2 = t;
    t = t_2;
    t = g_75(t);
    v_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, s_2, v_2);
    o_7 = t;
    t = SSLsetAnnotations(o_7, o_2);
    return(t);
  }
  if(((g_2 != NULL) && (g_2 != t)))
    _fail(t);
  else
    g_2 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((d_2 != NULL) && (d_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_2 = ATgetArgument(t, 0);
      if(((f_2 != NULL) && (f_2 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_2);
  if(((c_2 != NULL) && (c_2 != t)))
    _fail(t);
  else
    c_2 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, d_2, f_2);
  if(((m_7 != NULL) && (m_7 != t)))
    _fail(t);
  else
    m_7 = t;
  t = SSLsetAnnotations(m_7, c_2);
  t = abstract_choice_2_0(o_0, q_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,l_3 = NULL;
  i_3 = t;
  t = save_MarkVar_0_0(t);
  d_3 = t;
  t = i_3;
  t = i_75(t);
  h_3 = t;
  t = save_MarkVar_0_0(t);
  e_3 = t;
  t = term_f_14;
  l_3 = t;
  t = SSL_table_destroy(l_3);
  t = term_f_14;
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, d_3);
  t = t_7(j_3, d_3, t);
  t = h_3;
  t = j_75(t);
  f_3 = t;
  t = e_3;
  t = isect_MarkVar_0_0(t);
  t = f_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm f_75 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,p_3 = NULL,q_3 = NULL,p_8 = NULL;
  ATerm y_0 (ATerm t)
  {
    ATerm r_3 = NULL,s_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,q_8 = NULL;
    x_3 = t;
    if(match_cons(t, sym_Choice_2))
      {
        s_3 = ATgetArgument(t, 0);
        v_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_3);
    r_3 = t;
    t = s_3;
    t = f_75(t);
    w_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, w_3, v_3);
    q_8 = t;
    t = SSLsetAnnotations(q_8, r_3);
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm y_3 = NULL,b_4 = NULL,c_4 = NULL,h_4 = NULL,m_4 = NULL,s_8 = NULL;
    m_4 = t;
    if(match_cons(t, sym_Choice_2))
      {
        b_4 = ATgetArgument(t, 0);
        c_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_4);
    y_3 = t;
    t = c_4;
    t = f_75(t);
    h_4 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, b_4, h_4);
    s_8 = t;
    t = SSLsetAnnotations(s_8, y_3);
    return(t);
  }
  if(((q_3 != NULL) && (q_3 != t)))
    _fail(t);
  else
    q_3 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((n_3 != NULL) && (n_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_3 = ATgetArgument(t, 0);
      if(((p_3 != NULL) && (p_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_3);
  if(((m_3 != NULL) && (m_3 != t)))
    _fail(t);
  else
    m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, n_3, p_3);
  if(((p_8 != NULL) && (p_8 != t)))
    _fail(t);
  else
    p_8 = t;
  t = SSLsetAnnotations(p_8, m_3);
  t = abstract_choice_2_0(y_0, a_1, t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm n_4 = NULL,z_4 = NULL,b_5 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,i_5 = NULL,k_5 = NULL,l_5 = NULL,j_9 = NULL,i_9 = NULL;
  z_4 = t;
  t = save_MarkVar_0_0(t);
  n_4 = t;
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
  i_9 = t;
  t = SSLsetAnnotations(i_9, g_5);
  t = n_4;
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
  j_9 = t;
  t = SSLsetAnnotations(j_9, b_5);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm m_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,w_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,o_9 = NULL,n_9 = NULL,m_9 = NULL;
  i_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      d_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
      g_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_6);
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, d_6, e_6, g_6);
  m_9 = t;
  t = SSLsetAnnotations(m_9, c_6);
  h_6 = t;
  t = save_MarkVar_0_0(t);
  m_5 = t;
  t = h_6;
  if(match_cons(t, sym_PrimT_3))
    {
      w_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
      z_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_6);
  u_5 = t;
  t = z_5;
  t = map_1_0(w_2, t);
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, w_5, y_5, a_6);
  n_9 = t;
  t = SSLsetAnnotations(n_9, u_5);
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
  o_5 = t;
  t = q_5;
  t = mark_buv_0_0(t);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, p_5, s_5, r_5);
  o_9 = t;
  t = SSLsetAnnotations(o_9, o_5);
  t_5 = t;
  t = m_5;
  t = isect_MarkVar_0_0(t);
  t = t_5;
  return(t);
}
ATerm alltd_1_0 (ATerm m_77 (ATerm), ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_77(t);
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        t = SRTS_all(k_6, t);
      }
    return(t);
  }
  t = k_6(t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm j_10 = NULL,l_10 = NULL,p_10 = NULL,s_10 = NULL;
  l_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      p_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
      j_10 = ATgetArgument(t, 2);
      {
        ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL,k_1 = NULL,o_1 = NULL,p_1 = NULL,a_2 = NULL,e_2 = NULL,j_2 = NULL,k_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,u_2 = NULL,a_3 = NULL,x_9 = NULL,w_9 = NULL,s_9 = NULL;
        t = SSLgetAnnotations(l_10);
        u_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, p_10, s_10, j_10);
        s_9 = t;
        t = SSLsetAnnotations(s_9, u_2);
        a_3 = t;
        t = save_MarkVar_0_0(t);
        s_0 = t;
        t = a_3;
        if(match_cons(t, sym_CallT_3))
          {
            j_2 = ATgetArgument(t, 0);
            k_2 = ATgetArgument(t, 1);
            p_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_3);
        e_2 = t;
        t = p_2;
        t = map_1_0(y_2, t);
        q_2 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, j_2, k_2, q_2);
        w_9 = t;
        t = SSLsetAnnotations(w_9, e_2);
        r_2 = t;
        if(match_cons(t, sym_CallT_3))
          {
            w_0 = ATgetArgument(t, 0);
            k_1 = ATgetArgument(t, 1);
            o_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_2);
        t_0 = t;
        t = k_1;
        t = mark_buv_0_0(t);
        p_1 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, w_0, p_1, o_1);
        x_9 = t;
        t = SSLsetAnnotations(x_9, t_0);
        a_2 = t;
        t = s_0;
        t = isect_MarkVar_0_0(t);
        t = a_2;
      }
    }
  else
    {
      ATerm a_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,i_4 = NULL,j_4 = NULL,o_4 = NULL,b_10 = NULL,z_9 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          p_10 = ATgetArgument(t, 0);
          s_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_10);
      j_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, p_10, s_10);
      z_9 = t;
      t = SSLsetAnnotations(z_9, j_4);
      o_4 = t;
      t = save_MarkVar_0_0(t);
      a_4 = t;
      t = o_4;
      if(match_cons(t, sym_Call_2))
        {
          e_4 = ATgetArgument(t, 0);
          f_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_4);
      d_4 = t;
      t = f_4;
      t = mark_buv_0_0(t);
      g_4 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, e_4, g_4);
      b_10 = t;
      t = SSLsetAnnotations(b_10, d_4);
      i_4 = t;
      t = a_4;
      t = isect_MarkVar_0_0(t);
      t = i_4;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm c_7 (ATerm e_21, ATerm f_21, ATerm g_21, ATerm t)
{
  ATerm v_10 = NULL;
  ATerm b_3 (ATerm t)
  {
    t = f_21;
    t = map_1_0(IntroduceBound_0_0, t);
    t = g_21;
    t = mark_build_vars_0_0(t);
    if(((v_10 != NULL) && (v_10 != t)))
      _fail(t);
    else
      v_10 = t;
    return(t);
  }
  t = scope_2_0(z_2, b_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, e_21, f_21, not_null(v_10));
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm j_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_11);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
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
                t = map_1_0(t_3, t);
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
ATerm t_3 (ATerm t)
{
  ATerm d_12 = NULL;
  ATerm k_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_12 = ATgetArgument(t, 0);
          {
            ATerm q_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_14);
      t = d_12;
    }
  else
    {
      t = k_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_12;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm s_12 = NULL;
  ATerm r_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_12 = ATgetArgument(t, 0);
          {
            ATerm v_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_14);
      t = s_12;
    }
  else
    {
      t = r_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_12;
    }
  return(t);
}
ATerm d_7 (ATerm y_20, ATerm c_21, ATerm a_21, ATerm t)
{
  ATerm c_11 = NULL,e_11 = NULL,f_11 = NULL;
  ATerm g_3 (ATerm t)
  {
    t = y_20;
    t = free_vars_3_0(k_3, o_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = y_20;
    t = mark_match_vars_0_0(t);
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    t = a_21;
    t = mark_buv_0_0(t);
    if(((e_11 != NULL) && (e_11 != t)))
      _fail(t);
    else
      e_11 = t;
    t = c_21;
    t = mark_build_vars_0_0(t);
    if(((f_11 != NULL) && (f_11 != t)))
      _fail(t);
    else
      f_11 = t;
    return(t);
  }
  t = scope_2_0(c_3, g_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_11), not_null(f_11), not_null(e_11)));
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_f_14;
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
  ATerm y_14 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_15);
    }
  else
    {
      t = y_14;
      {
        ATerm h_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_13 = ATgetArgument(t, 0);
            t = h_13;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_13 = ATgetArgument(t, 0);
                m_13 = ATgetArgument(t, 1);
                n_13 = ATgetArgument(t, 2);
                o_13 = ATgetArgument(t, 3);
                t = n_13;
                t = map_1_0(q_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_13 = ATgetArgument(t, 0);
                    m_13 = ATgetArgument(t, 1);
                    n_13 = ATgetArgument(t, 2);
                    o_13 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = n_13;
                t = map_1_0(r_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm c_14 = NULL;
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_14 = ATgetArgument(t, 0);
          {
            ATerm h_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_15);
      t = c_14;
    }
  else
    {
      t = f_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_14;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm l_14 = NULL;
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_14 = ATgetArgument(t, 0);
          {
            ATerm k_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_15);
      t = l_14;
    }
  else
    {
      t = i_15;
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
ATerm e_7 (ATerm s_20, ATerm w_20, ATerm u_20, ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,e_13 = NULL;
  ATerm k_4 (ATerm t)
  {
    t = s_20;
    t = free_vars_3_0(l_4, p_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = s_20;
    t = mark_match_vars_0_0(t);
    if(((b_13 != NULL) && (b_13 != t)))
      _fail(t);
    else
      b_13 = t;
    t = u_20;
    t = mark_buv_0_0(t);
    if(((c_13 != NULL) && (c_13 != t)))
      _fail(t);
    else
      c_13 = t;
    t = w_20;
    t = mark_build_vars_0_0(t);
    if(((e_13 != NULL) && (e_13 != t)))
      _fail(t);
    else
      e_13 = t;
    return(t);
  }
  t = scope_2_0(z_3, k_4, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_13), not_null(e_13), not_null(c_13)));
  return(t);
}
ATerm f_7 (ATerm j_83 (ATerm), ATerm m_30, ATerm l_30, ATerm t)
{
  ATerm z_15 (ATerm t)
  {
    ATerm m_15 = NULL,o_15 = NULL,u_15 = NULL;
    m_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_15;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_15 = ATgetFirst((ATermList) t);
            u_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_15;
              {
                ATerm s_4 (ATerm t)
                {
                  t = l_30;
                  return(t);
                }
                t = p_7(j_83, s_4, o_15, u_15, t);
                t = z_15(t);
              }
              ;
              LocalPopChoice(q_15);
            }
          else
            {
              t = n_15;
              {
                ATerm w_4 = NULL,a_5 = NULL,y_13 = NULL;
                t = SSLgetAnnotations(m_15);
                w_4 = t;
                t = u_15;
                t = z_15(t);
                a_5 = t;
                t = (ATerm) ATinsert(CheckATermList(a_5), o_15);
                y_13 = t;
                t = SSLsetAnnotations(y_13, w_4);
              }
            }
        }
      }
    return(t);
  }
  t = m_30;
  t = z_15(t);
  return(t);
}
ATerm at_end_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm f_17 (ATerm t)
  {
    ATerm z_16 = NULL,a_17 = NULL,e_17 = NULL;
    e_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_16 = ATgetFirst((ATermList) t);
        a_17 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_6 = NULL,n_6 = NULL,s_14 = NULL;
          t = SSLgetAnnotations(e_17);
          j_6 = t;
          t = a_17;
          t = f_17(t);
          n_6 = t;
          t = (ATerm) ATinsert(CheckATermList(n_6), z_16);
          s_14 = t;
          t = SSLsetAnnotations(s_14, j_6);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_17;
        t = a_80(t);
      }
    return(t);
  }
  t = f_17(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_16;
    }
  else
    {
      ATerm t_4 (ATerm t)
      {
        t = not_null(e_16);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((d_16 != NULL) && (d_16 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            d_16 = ATgetFirst((ATermList) t);
          if(((e_16 != NULL) && (e_16 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_16;
      t = at_end_1_0(t_4, t);
    }
  return(t);
}
ATerm j_18 (ATerm n_17, ATerm t)
{
  ATerm o_17 = NULL;
  t = SSL_explode_term(n_17);
  if(match_cons(t, sym__2))
    {
      ATerm r_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_17;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
  y_17 = t;
  if(match_cons(t, sym__2))
    {
      w_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_4 (ATerm t)
            {
              t = x_17;
              return(t);
            }
            t = w_17;
            t = at_end_1_0(u_4, t);
            ;
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
            t = j_18(y_17, t);
          }
      }
    }
  else
    {
      t = j_18(y_17, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm t)
{
  ATerm b_19 (ATerm t)
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_81(t);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        {
          ATerm k_18 = NULL,n_18 = NULL,o_18 = NULL,v_18 = NULL,w_18 = NULL,a_19 = NULL,u_14 = NULL;
          t = o_81(t);
          a_19 = t;
          if(match_cons(t, sym__2))
            {
              n_18 = ATgetArgument(t, 0);
              o_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_19);
          k_18 = t;
          t = n_18;
          t = q_81(t);
          v_18 = t;
          t = o_18;
          t = b_19(t);
          w_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_18, w_18);
          u_14 = t;
          t = SSLsetAnnotations(u_14, k_18);
          t = p_81(t);
        }
      }
    return(t);
  }
  t = b_19(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_15 = ATgetArgument(t, 0);
      if(((ATgetType(y_15) != AT_LIST) || !(ATisEmpty(y_15))))
        _fail(t);
      {
        ATerm a_16 = ATgetArgument(t, 1);
        if(((ATgetType(a_16) != AT_LIST) || !(ATisEmpty(a_16))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm s_22 = NULL,u_22 = NULL,v_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
        {
          s_22 = ATgetFirst((ATermList) b_16);
          u_22 = (ATerm) ATgetNext((ATermList) b_16);
        }
      else
        _fail(t);
      {
        ATerm f_16 = ATgetArgument(t, 1);
        if(((ATgetType(f_16) == AT_LIST) && !(ATisEmpty(f_16))))
          {
            v_22 = ATgetFirst((ATermList) f_16);
            x_22 = (ATerm) ATgetNext((ATermList) f_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_22, v_22), (ATerm) ATmakeAppl(sym__2, u_22, x_22));
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  if(match_cons(t, sym__2))
    {
      y_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_22), y_22);
  return(t);
}
ATerm j_7 (ATerm k_576, ATerm p_576, ATerm f_55, ATerm t)
{
  ATerm g_19 = NULL,k_19 = NULL,v_21 = NULL,w_21 = NULL;
  t = SSL_explode_term(p_576);
  if(match_cons(t, sym__2))
    {
      g_19 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_576);
  if(match_cons(t, sym__2))
    {
      if((g_19 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_19, v_21);
  t = genzip_4_0(v_4, x_4, y_4, _id, t);
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_21, f_55);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm g_89 (ATerm), ATerm h_89 (ATerm), ATerm t)
{
  ATerm k_23 (ATerm t)
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_89(t);
        ;
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        t = h_89(t);
        t = k_23(t);
      }
    return(t);
  }
  t = k_23(t);
  return(t);
}
ATerm for_3_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm l_89 (ATerm), ATerm t)
{
  t = j_89(t);
  t = while_not_2_0(k_89, l_89, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_24);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,w_14 = NULL;
  e_24 = t;
  if(match_cons(t, sym__2))
    {
      c_24 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_24);
  b_24 = t;
  t = d_24;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_24, d_24);
  w_14 = t;
  t = SSLsetAnnotations(w_14, b_24);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm z_25 = NULL,c_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  z_25 = t;
  if(match_cons(t, sym__2))
    {
      c_26 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_26 = ATgetFirst((ATermList) t);
      h_26 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_27(c_26, f_26, z_25, t);
            ;
            LocalPopChoice(k_16);
          }
        else
          {
            t = i_16;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_26), g_26), h_26);
          }
      }
    }
  else
    {
      t = v_27(c_26, f_26, z_25, t);
    }
  return(t);
}
ATerm v_27 (ATerm f_24, ATerm j_24, ATerm m_24, ATerm t)
{
  ATerm n_24 = NULL,v_24 = NULL,x_14 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,m_25 = NULL;
  t = SSLgetAnnotations(m_24);
  n_24 = t;
  t = j_24;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_25 = ATgetFirst((ATermList) t);
      m_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_25;
  if(match_cons(t, sym__2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_25;
        if((f_25 != t))
          {
            _fail(t);
          }
        t = m_25;
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        t = j_24;
        t = j_7(f_25, g_25, m_25, t);
      }
    v_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_24, v_24);
    x_14 = t;
    t = SSLsetAnnotations(x_14, n_24);
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm u_27 = NULL;
  if(match_cons(t, sym__2))
    {
      u_27 = ATgetArgument(t, 0);
      if((u_27 != ATgetArgument(t, 1)))
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
  ATerm p_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(d_5, h_5, j_5, t);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = p_16;
      {
        ATerm b_27 = NULL,m_27 = NULL,r_27 = NULL;
        b_27 = t;
        if(match_cons(t, sym__2))
          {
            m_27 = ATgetArgument(t, 0);
            r_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_27;
        t = f_7(n_5, m_27, r_27, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  t_31 = t;
  if(match_cons(t, sym_Scope_2))
    {
      u_31 = ATgetArgument(t, 0);
      q_31 = ATgetArgument(t, 1);
      {
        ATerm x_6 = NULL,j_8 = NULL,m_8 = NULL,d_15 = NULL;
        t = SSLgetAnnotations(t_31);
        x_6 = t;
        t = u_31;
        t = k_105(t);
        j_8 = t;
        t = q_31;
        t = i_105(t);
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_8, m_8);
        d_15 = t;
        t = SSLsetAnnotations(d_15, x_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          u_31 = ATgetArgument(t, 0);
          q_31 = ATgetArgument(t, 1);
          r_31 = ATgetArgument(t, 2);
          s_31 = ATgetArgument(t, 3);
          {
            ATerm c_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,y_9 = NULL,e_15 = NULL;
            t = SSLgetAnnotations(t_31);
            c_9 = t;
            t = u_31;
            t = k_105(t);
            t_9 = t;
            t = q_31;
            t = k_105(t);
            u_9 = t;
            t = r_31;
            t = k_105(t);
            v_9 = t;
            t = s_31;
            t = i_105(t);
            y_9 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, t_9, u_9, v_9, y_9);
            e_15 = t;
            t = SSLsetAnnotations(e_15, c_9);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              u_31 = ATgetArgument(t, 0);
              q_31 = ATgetArgument(t, 1);
              r_31 = ATgetArgument(t, 2);
              s_31 = ATgetArgument(t, 3);
              {
                ATerm r_10 = NULL,a_11 = NULL,b_11 = NULL,d_11 = NULL,g_11 = NULL,l_15 = NULL;
                t = SSLgetAnnotations(t_31);
                r_10 = t;
                t = u_31;
                t = k_105(t);
                a_11 = t;
                t = q_31;
                t = k_105(t);
                b_11 = t;
                t = r_31;
                t = k_105(t);
                d_11 = t;
                t = s_31;
                t = i_105(t);
                g_11 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, a_11, b_11, d_11, g_11);
                l_15 = t;
                t = SSLsetAnnotations(l_15, r_10);
              }
            }
          else
            {
              ATerm x_11 = NULL,j_12 = NULL,v_15 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  u_31 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_31);
              x_11 = t;
              t = u_31;
              t = i_105(t);
              j_12 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, j_12);
              v_15 = t;
              t = SSLsetAnnotations(v_15, x_11);
            }
        }
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm m_32 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_32);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,u_32 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_32 = ATgetArgument(t, 0);
            t = o_32;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_32 = ATgetArgument(t, 0);
                p_32 = ATgetArgument(t, 1);
                q_32 = ATgetArgument(t, 2);
                u_32 = ATgetArgument(t, 3);
                t = q_32;
                t = map_1_0(f_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_32 = ATgetArgument(t, 0);
                    p_32 = ATgetArgument(t, 1);
                    q_32 = ATgetArgument(t, 2);
                    u_32 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = q_32;
                t = map_1_0(l_6, t);
              }
          }
      }
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm h_33 = NULL;
  ATerm b_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_33 = ATgetArgument(t, 0);
          {
            ATerm i_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_17);
      t = h_33;
    }
  else
    {
      t = b_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_33;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm x_33 = NULL;
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_33 = ATgetArgument(t, 0);
          {
            ATerm l_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_17);
      t = x_33;
    }
  else
    {
      t = j_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_33;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(v_5, x_5, tboundin_3_0, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm w_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_34);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,d_35 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_34 = ATgetArgument(t, 0);
            t = y_34;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_34 = ATgetArgument(t, 0);
                z_34 = ATgetArgument(t, 1);
                a_35 = ATgetArgument(t, 2);
                d_35 = ATgetArgument(t, 3);
                t = a_35;
                t = map_1_0(p_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    y_34 = ATgetArgument(t, 0);
                    z_34 = ATgetArgument(t, 1);
                    a_35 = ATgetArgument(t, 2);
                    d_35 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_35;
                t = map_1_0(q_6, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm t_35 = NULL;
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_35 = ATgetArgument(t, 0);
          {
            ATerm t_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_17);
      t = t_35;
    }
  else
    {
      t = r_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_35;
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm q_36 = NULL;
  ATerm v_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_36 = ATgetArgument(t, 0);
          {
            ATerm a_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_17);
      t = q_36;
    }
  else
    {
      t = v_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_36;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm h_34 = NULL,p_34 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      p_34 = ATgetArgument(t, 0);
      t = p_34;
      if(match_cons(t, sym_Rule_3))
        {
          h_34 = ATgetArgument(t, 0);
          {
            ATerm d_18 = ATgetArgument(t, 1);
          }
          {
            ATerm h_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_34;
      t = free_vars_3_0(m_6, o_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          p_34 = ATgetArgument(t, 0);
          {
            ATerm i_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = p_34;
    }
  return(t);
}
ATerm p_7 (ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm s_30, ATerm r_30, ATerm t)
{
  t = s_83(t);
  {
    ATerm r_6 (ATerm t)
    {
      ATerm u_36 = NULL;
      u_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_30, u_36);
      t = r_83(t);
      return(t);
    }
    t = fetch_1_0(r_6, t);
    t = r_30;
  }
  return(t);
}
ATerm q_7 (ATerm o_83 (ATerm), ATerm o_30, ATerm n_30, ATerm t)
{
  ATerm v_37 (ATerm t)
  {
    ATerm l_37 = NULL,p_37 = NULL,q_37 = NULL;
    l_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_37 = ATgetFirst((ATermList) t);
            q_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_18 = t;
          int p_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_37;
              {
                ATerm s_6 (ATerm t)
                {
                  t = n_30;
                  return(t);
                }
                t = p_7(o_83, s_6, p_37, q_37, t);
                t = v_37(t);
              }
              ;
              LocalPopChoice(p_18);
            }
          else
            {
              t = l_18;
              {
                ATerm x_12 = NULL,a_13 = NULL,j_16 = NULL;
                t = SSLgetAnnotations(l_37);
                x_12 = t;
                t = q_37;
                t = v_37(t);
                a_13 = t;
                t = (ATerm) ATinsert(CheckATermList(a_13), p_37);
                j_16 = t;
                t = SSLsetAnnotations(j_16, x_12);
              }
            }
        }
      }
    return(t);
  }
  t = o_30;
  t = v_37(t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm g_86 (ATerm), ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
  a_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_38;
      t = e_86(t);
    }
  else
    {
      ATerm i_38 = NULL,m_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_38 = ATgetFirst((ATermList) t);
          c_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_38;
      t = g_86(t);
      i_38 = t;
      t = c_38;
      t = foldr_3_0(e_86, f_86, g_86, t);
      m_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_38, m_38);
      t = f_86(t);
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  if(match_cons(t, sym__2))
    {
      a_14 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(h_7, a_14, b_14, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm m_14 = NULL;
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      if((m_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(l_7, z_14, a_15, t);
  return(t);
}
ATerm l_7 (ATerm t)
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
ATerm free_vars_3_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm u_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_39 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_103(t);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm s_18 = t;
          int t_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_38 = NULL,r_38 = NULL,l_13 = NULL,w_13 = NULL;
              q_38 = t;
              t = t_103(t);
              r_38 = t;
              t = q_38;
              {
                ATerm t_6 (ATerm t)
                {
                  ATerm t_38 = NULL;
                  t = f_39(t);
                  t_38 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_38, r_38);
                  t = diff_0_0(t);
                  return(t);
                }
                t = u_103(t_6, f_39, v_6, t);
                if(((w_13 != NULL) && (w_13 != t)))
                  _fail(t);
                else
                  w_13 = t;
                t = SSL_explode_term(w_13);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_18 = ATgetArgument(t, 0);
                    if(((l_13 != NULL) && (l_13 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      l_13 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_13;
                t = foldr_3_0(y_6, z_6, _id, t);
              }
              ;
              LocalPopChoice(t_18);
            }
          else
            {
              t = s_18;
              {
                ATerm o_14 = NULL,p_14 = NULL;
                p_14 = t;
                t = SSL_explode_term(p_14);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_19 = ATgetArgument(t, 0);
                    o_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_14;
                t = foldr_3_0(i_7, k_7, f_39, t);
              }
            }
        }
      }
    return(t);
  }
  t = f_39(t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm i_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_41);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
      {
        ATerm k_41 = NULL,l_41 = NULL,o_41 = NULL,p_41 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_41 = ATgetArgument(t, 0);
            t = k_41;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_41 = ATgetArgument(t, 0);
                l_41 = ATgetArgument(t, 1);
                o_41 = ATgetArgument(t, 2);
                p_41 = ATgetArgument(t, 3);
                t = o_41;
                t = map_1_0(a_8, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    k_41 = ATgetArgument(t, 0);
                    l_41 = ATgetArgument(t, 1);
                    o_41 = ATgetArgument(t, 2);
                    p_41 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_41;
                t = map_1_0(o_8, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm q_42 = NULL;
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_42 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_19);
      t = q_42;
    }
  else
    {
      t = h_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_42;
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm k_43 = NULL;
  ATerm m_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_43 = ATgetArgument(t, 0);
          {
            ATerm p_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_19);
      t = k_43;
    }
  else
    {
      t = m_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_43;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm h_44 = NULL;
  ATerm t_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_44 = ATgetArgument(t, 0);
          {
            ATerm w_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_19);
      t = h_44;
    }
  else
    {
      t = t_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_44;
    }
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm l_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_44);
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm y_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = y_19;
      {
        ATerm q_44 = NULL,r_44 = NULL,t_44 = NULL,u_44 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_44 = ATgetArgument(t, 0);
            t = q_44;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                q_44 = ATgetArgument(t, 0);
                r_44 = ATgetArgument(t, 1);
                t_44 = ATgetArgument(t, 2);
                u_44 = ATgetArgument(t, 3);
                t = t_44;
                t = map_1_0(x_8, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    q_44 = ATgetArgument(t, 0);
                    r_44 = ATgetArgument(t, 1);
                    t_44 = ATgetArgument(t, 2);
                    u_44 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = t_44;
                t = map_1_0(y_8, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm h_45 = NULL;
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_45 = ATgetArgument(t, 0);
          {
            ATerm d_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_20);
      t = h_45;
    }
  else
    {
      t = b_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_45;
    }
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm w_45 = NULL;
  ATerm e_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_45 = ATgetArgument(t, 0);
          {
            ATerm h_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_20);
      t = w_45;
    }
  else
    {
      t = e_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_45;
    }
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,z_39 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,k_40 = NULL,l_40 = NULL,n_40 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      d_40 = ATgetArgument(t, 0);
      e_40 = ATgetArgument(t, 1);
      f_40 = ATgetArgument(t, 2);
      {
        ATerm r_40 = NULL,t_40 = NULL,z_40 = NULL,g_41 = NULL;
        t = f_40;
        if(match_cons(t, sym_Rule_3))
          {
            w_39 = ATgetArgument(t, 0);
            x_39 = ATgetArgument(t, 1);
            z_39 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = f_40;
        t = free_vars_3_0(x_7, y_7, tboundin_3_0, t);
        r_40 = t;
        {
          ATerm t_8 (ATerm t)
          {
            t = r_40;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = w_39;
            t = mark_match_vars_0_0(t);
            if(((t_40 != NULL) && (t_40 != t)))
              _fail(t);
            else
              t_40 = t;
            t = z_39;
            t = mark_buv_0_0(t);
            if(((z_40 != NULL) && (z_40 != t)))
              _fail(t);
            else
              z_40 = t;
            t = x_39;
            t = mark_build_vars_0_0(t);
            if(((g_41 != NULL) && (g_41 != t)))
              _fail(t);
            else
              g_41 = t;
            return(t);
          }
          t = scope_2_0(r_8, t_8, t);
          t = (ATerm) ATmakeAppl(sym_RDef_3, d_40, e_40, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_40), not_null(g_41), not_null(z_40)));
        }
      }
    }
  else
    {
      ATerm t_43 = NULL,u_43 = NULL,y_43 = NULL,b_44 = NULL,d_44 = NULL,e_44 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          d_40 = ATgetArgument(t, 0);
          e_40 = ATgetArgument(t, 1);
          f_40 = ATgetArgument(t, 2);
          g_40 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = g_40;
      if(match_cons(t, sym_Rule_3))
        {
          k_40 = ATgetArgument(t, 0);
          l_40 = ATgetArgument(t, 1);
          n_40 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_40;
      t = map_1_0(u_8, t);
      t_43 = t;
      t = g_40;
      t = free_vars_3_0(v_8, w_8, tboundin_3_0, t);
      e_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_44, t_43);
      t = diff_0_0(t);
      u_43 = t;
      {
        ATerm a_9 (ATerm t)
        {
          t = t_43;
          t = map_1_0(IntroduceBound_0_0, t);
          t = u_43;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = k_40;
          t = mark_match_vars_0_0(t);
          if(((y_43 != NULL) && (y_43 != t)))
            _fail(t);
          else
            y_43 = t;
          t = n_40;
          t = mark_buv_0_0(t);
          if(((b_44 != NULL) && (b_44 != t)))
            _fail(t);
          else
            b_44 = t;
          t = l_40;
          t = mark_build_vars_0_0(t);
          if(((d_44 != NULL) && (d_44 != t)))
            _fail(t);
          else
            d_44 = t;
          return(t);
        }
        t = scope_2_0(z_8, a_9, t);
        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_40, e_40, f_40, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_43), not_null(d_44), not_null(b_44)));
      }
    }
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm a_46 = NULL,l_46 = NULL,m_46 = NULL;
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_46);
  l_46 = t;
  t = term_q_20;
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_46), term_q_20);
  t = u_7(b_9, l_46, m_46, t);
  t = a_46;
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm i_47 = NULL;
  ATerm r_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_47 = ATgetArgument(t, 0);
          {
            ATerm x_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_20);
      t = i_47;
    }
  else
    {
      t = r_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_47;
    }
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm r_7 (ATerm q_19, ATerm r_19, ATerm s_19, ATerm u_19, ATerm t)
{
  ATerm x_46 = NULL,d_47 = NULL;
  t = s_19;
  t = map_1_0(d_9, t);
  x_46 = t;
  {
    ATerm f_9 (ATerm t)
    {
      t = x_46;
      t = map_1_0(IntroduceBound_0_0, t);
      t = u_19;
      t = mark_buv_0_0(t);
      if(((d_47 != NULL) && (d_47 != t)))
        _fail(t);
      else
        d_47 = t;
      return(t);
    }
    t = scope_2_0(e_9, f_9, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, q_19, r_19, s_19, not_null(d_47));
  }
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,d_49 = NULL,g_49 = NULL,l_49 = NULL;
  z_48 = t;
  if(match_cons(t, sym__2))
    {
      a_49 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_49;
  if(match_cons(t, sym_Undefined_0))
    {
      t = a_49;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_m_21;
        }
      else
        {
          t = term_m_21;
        }
    }
  else
    {
      ATerm n_21 = t;
      int o_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm p_21 = ATgetArgument(t, 0);
              l_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(o_21);
          t = a_49;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_m_21;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  b_49 = ATgetArgument(t, 0);
                  d_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm r_21 = t;
                int t_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, d_49, l_49);
                    {
                      ATerm u_21 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm p_15 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              p_15 = ATgetArgument(t, 0);
                              if((p_15 != ATgetArgument(t, 1)))
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
                          t = u_21;
                        }
                      t = (ATerm) ATmakeAppl(sym_Defined_2, b_49, term_x_21);
                    }
                    ;
                    LocalPopChoice(t_21);
                  }
                else
                  {
                    t = r_21;
                    t = l_49;
                    if((d_49 != t))
                      {
                        _fail(t);
                      }
                    t = a_49;
                  }
              }
            }
        }
      else
        {
          t = n_21;
          t = a_49;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_m_21;
        }
    }
  return(t);
}
ATerm s_7 (ATerm f_18, ATerm g_18, ATerm e_18, ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
  t = term_f_14;
  w_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, f_18);
  t = k_8(w_49, f_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_49 = ATgetFirst((ATermList) t);
      {
        ATerm y_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_18, u_49);
  t = CompareEntries_0_0(t);
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_18, (ATerm) ATinsert(CheckATermList(e_18), v_49));
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,a_51 = NULL,h_51 = NULL,i_51 = NULL;
  i_51 = t;
  if(match_cons(t, sym__2))
    {
      w_50 = ATgetArgument(t, 0);
      x_50 = ATgetArgument(t, 1);
      t = x_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_51 = ATgetFirst((ATermList) t);
          h_51 = (ATerm) ATgetNext((ATermList) t);
          t = a_51;
          {
            ATerm c_22 = t;
            int d_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm e_22 = ATgetArgument(t, 0);
                    ATerm i_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(d_22);
                t = w_50;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = i_51;
                  }
                else
                  {
                    ATerm j_22 = t;
                    int q_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_51;
                        t = s_7(w_50, a_51, h_51, t);
                        ;
                        LocalPopChoice(q_22);
                      }
                    else
                      {
                        t = j_22;
                        t = i_51;
                      }
                  }
              }
            else
              {
                t = c_22;
                t = w_50;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = i_51;
                  }
                else
                  {
                    t = i_51;
                  }
              }
          }
        }
      else
        {
          t = w_50;
          if(match_cons(t, sym_Scopes_0))
            {
              t = i_51;
            }
          else
            {
              t = i_51;
            }
        }
    }
  else
    {
      t = i_51;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,v_50 = NULL;
  t = map_1_0(g_9, t);
  q_50 = t;
  t = term_f_14;
  v_50 = t;
  t = SSL_table_destroy(v_50);
  t = term_f_14;
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, q_50);
  t = t_7(r_50, q_50, t);
  t = q_50;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm q_52 = NULL,x_52 = NULL,z_52 = NULL;
  z_52 = t;
  {
    ATerm r_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm w_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_22);
        t = z_52;
      }
    else
      {
        t = r_22;
        {
          ATerm a_23 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm e_23 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(b_23);
              t = z_52;
            }
          else
            {
              t = a_23;
              {
                ATerm g_23 = t;
                int h_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm j_23 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_23);
                    t = z_52;
                  }
                else
                  {
                    t = g_23;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm l_23 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = z_52;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    q_52 = t;
    t = z_52;
    t = SRTS_one(mark_buv_0_0, t);
    x_52 = t;
    t = q_52;
    t = isect_MarkVar_0_0(t);
    t = x_52;
  }
  return(t);
}
ATerm t_7 (ATerm d_23, ATerm c_23, ATerm t)
{
  ATerm h_9 (ATerm t)
  {
    ATerm c_53 = NULL,e_53 = NULL;
    if(match_cons(t, sym__2))
      {
        c_53 = ATgetArgument(t, 0);
        e_53 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(d_23, c_53, e_53);
    t = (ATerm) ATmakeAppl(sym__3, d_23, c_53, e_53);
    return(t);
  }
  t = c_23;
  t = map_1_0(h_9, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm h_53 = NULL;
  ATerm k_9 (ATerm t)
  {
    ATerm i_53 = NULL,l_53 = NULL;
    i_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_53), i_53);
    t = k_8(not_null(h_53), i_53, t);
    l_53 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_53, l_53);
    return(t);
  }
  if(((h_53 != NULL) && (h_53 != t)))
    _fail(t);
  else
    h_53 = t;
  t = SSL_table_keys(h_53);
  t = map_1_0(k_9, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_f_14;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,g_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
  m_54 = t;
  if(match_cons(t, sym__2))
    {
      c_54 = ATgetArgument(t, 0);
      d_54 = ATgetArgument(t, 1);
      t = d_54;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_54 = ATgetFirst((ATermList) t);
          l_54 = (ATerm) ATgetNext((ATermList) t);
          t = g_54;
          if(match_cons(t, sym_Defined_2))
            {
              j_54 = ATgetArgument(t, 0);
              k_54 = ATgetArgument(t, 1);
              t = k_54;
              if(match_string(t, "unbound"))
                {
                  t = c_54;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = m_54;
                    }
                  else
                    {
                      ATerm m_23 = t;
                      int n_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, c_54, (ATerm) ATinsert(CheckATermList(l_54), (ATerm) ATmakeAppl(sym_Defined_2, j_54, term_x_21)));
                          ;
                          LocalPopChoice(n_23);
                        }
                      else
                        {
                          t = m_23;
                          t = m_54;
                        }
                    }
                }
              else
                {
                  t = c_54;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = m_54;
                    }
                  else
                    {
                      t = m_54;
                    }
                }
            }
          else
            {
              t = c_54;
              if(match_cons(t, sym_Scopes_0))
                {
                  t = m_54;
                }
              else
                {
                  t = m_54;
                }
            }
        }
      else
        {
          t = c_54;
          if(match_cons(t, sym_Scopes_0))
            {
              t = m_54;
            }
          else
            {
              t = m_54;
            }
        }
    }
  else
    {
      t = m_54;
    }
  return(t);
}
ATerm undefine_unbound_MarkVar_0_0 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  t = save_MarkVar_0_0(t);
  t = map_1_0(l_9, t);
  z_53 = t;
  t = term_f_14;
  b_54 = t;
  t = SSL_table_destroy(b_54);
  t = term_f_14;
  a_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, z_53);
  t = t_7(a_54, z_53, t);
  t = z_53;
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,o_56 = NULL,p_56 = NULL,t_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,m_16 = NULL,l_16 = NULL;
  c_57 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_57);
  y_56 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, z_56, a_57);
  l_16 = t;
  t = SSLsetAnnotations(l_16, y_56);
  b_57 = t;
  t = undefine_unbound_MarkVar_0_0(t);
  g_56 = t;
  t = b_57;
  if(match_cons(t, sym_Let_2))
    {
      o_56 = ATgetArgument(t, 0);
      p_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_57);
  h_56 = t;
  t = o_56;
  {
    ATerm p_9 (ATerm t)
    {
      ATerm d_57 = NULL,e_57 = NULL,j_57 = NULL;
      d_57 = t;
      t = term_f_14;
      j_57 = t;
      t = SSL_table_destroy(j_57);
      t = term_f_14;
      e_57 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_14, g_56);
      t = t_7(e_57, g_56, t);
      t = d_57;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(p_9, t);
    if(((t_56 != NULL) && (t_56 != t)))
      _fail(t);
    else
      t_56 = t;
    t = term_f_14;
    if(((x_56 != NULL) && (x_56 != t)))
      _fail(t);
    else
      x_56 = t;
    t = SSL_table_destroy(x_56);
    t = term_f_14;
    if(((w_56 != NULL) && (w_56 != t)))
      _fail(t);
    else
      w_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_14, g_56);
    t = t_7(w_56, g_56, t);
    t = p_56;
    t = mark_buv_0_0(t);
    if(((v_56 != NULL) && (v_56 != t)))
      _fail(t);
    else
      v_56 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, t_56, v_56);
    if(((m_16 != NULL) && (m_16 != t)))
      _fail(t);
    else
      m_16 = t;
    t = SSLsetAnnotations(m_16, h_56);
  }
  return(t);
}
ATerm u_7 (ATerm q_75 (ATerm), ATerm s_21, ATerm q_21, ATerm t)
{
  ATerm k_57 = NULL,n_57 = NULL,p_57 = NULL,q_57 = NULL,t_57 = NULL,u_57 = NULL;
  q_57 = t;
  t = q_75(t);
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_57, s_21, q_21);
  t = l_8(k_57, s_21, q_21, t);
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_57 = NULL;
        t = term_q_23;
        v_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_57, term_q_23);
        t = k_8(k_57, v_57, t);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_57 = ATgetFirst((ATermList) t);
        p_57 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_23;
    t_57 = t;
    t = (ATerm) ATinsert(CheckATermList(p_57), (ATerm) ATinsert(CheckATermList(n_57), s_21));
    u_57 = t;
    t = SSL_table_put(k_57, t_57, u_57);
    t = q_57;
  }
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,b_58 = NULL;
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_57);
  z_57 = t;
  t = term_v_23;
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, y_57), term_v_23);
  t = u_7(q_9, z_57, b_58, t);
  t = y_57;
  return(t);
}
ATerm v_7 (ATerm f_22, ATerm g_22, ATerm t)
{
  ATerm c_58 = NULL,e_58 = NULL;
  e_58 = t;
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_22, g_22);
        t = k_8(f_22, g_22, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_23 = ATgetFirst((ATermList) t);
            c_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_23);
        t = SSL_table_put(f_22, g_22, c_58);
        t = (ATerm) ATmakeAppl(sym__3, f_22, g_22, c_58);
      }
    else
      {
        t = w_23;
        t = SSL_table_remove(f_22, g_22);
        t = (ATerm) ATmakeAppl(sym__2, f_22, g_22);
      }
    t = e_58;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm n_75 (ATerm), ATerm t)
{
  ATerm j_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL;
  n_58 = t;
  t = n_75(t);
  m_58 = t;
  {
    ATerm h_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_58 = NULL;
        t = term_q_23;
        p_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_58, term_q_23);
        t = k_8(m_58, p_58, t);
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = h_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_58 = ATgetFirst((ATermList) t);
        j_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_23;
    o_58 = t;
    t = SSL_table_put(m_58, o_58, j_58);
    t = l_58;
    {
      ATerm r_9 (ATerm t)
      {
        ATerm u_58 = NULL;
        u_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_58, u_58);
        t = v_7(m_58, u_58, t);
        return(t);
      }
      t = map_1_0(r_9, t);
      t = n_58;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_88(t);
      t = k_88(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      t = k_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_75 (ATerm), ATerm t)
{
  ATerm a_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  d_59 = t;
  t = m_75(t);
  a_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_59, term_q_23);
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_59 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_24 = ATgetArgument(t, 0);
            ATerm u_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_23;
        k_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_59, term_q_23);
        t = k_8(a_59, k_59, t);
        ;
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        t = (ATerm) ATempty;
      }
    e_59 = t;
    t = term_q_23;
    f_59 = t;
    t = (ATerm) ATinsert(CheckATermList(e_59), (ATerm) ATempty);
    g_59 = t;
    t = SSL_table_put(a_59, f_59, g_59);
    t = d_59;
  }
  return(t);
}
ATerm scope_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm t)
{
  ATerm a_10 (ATerm t)
  {
    t = end_scope_1_0(o_75, t);
    return(t);
  }
  t = begin_scope_1_0(o_75, t);
  t = restore_always_2_0(p_75, a_10, t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm n_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,y_59 = NULL,q_16 = NULL;
  y_59 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_59 = ATgetArgument(t, 0);
      q_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_59);
  n_59 = t;
  t = q_59;
  {
    ATerm d_10 (ATerm t)
    {
      ATerm z_59 = NULL;
      z_59 = t;
      t = p_59;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = z_59;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(c_10, d_10, t);
    if(((r_59 != NULL) && (r_59 != t)))
      _fail(t);
    else
      r_59 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, p_59, r_59);
    if(((q_16 != NULL) && (q_16 != t)))
      _fail(t);
    else
      q_16 = t;
    t = SSLsetAnnotations(q_16, n_59);
  }
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL,s_16 = NULL;
      c_60 = t;
      if(match_cons(t, sym_Var_1))
        {
          b_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_60);
      a_60 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, b_60);
      s_16 = t;
      t = SSLsetAnnotations(s_16, a_60);
      LocalPopChoice(x_24);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = w_24;
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_60 = NULL,g_60 = NULL,i_60 = NULL,j_60 = NULL,t_16 = NULL;
            j_60 = t;
            if(match_cons(t, sym_App_2))
              {
                g_60 = ATgetArgument(t, 0);
                i_60 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_60);
            d_60 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, g_60, i_60);
            t_16 = t;
            t = SSLsetAnnotations(t_16, d_60);
            LocalPopChoice(z_24);
            {
              ATerm k_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,z_60 = NULL,a_61 = NULL,u_16 = NULL;
              a_61 = t;
              if(match_cons(t, sym_App_2))
                {
                  r_60 = ATgetArgument(t, 0);
                  s_60 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_61);
              k_60 = t;
              t = r_60;
              t = mark_buv_0_0(t);
              t_60 = t;
              t = s_60;
              t = mark_build_vars_0_0(t);
              z_60 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, t_60, z_60);
              u_16 = t;
              t = SSLsetAnnotations(u_16, k_60);
            }
          }
        else
          {
            t = y_24;
            {
              ATerm a_25 = t;
              int b_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_61 = NULL,c_61 = NULL,d_61 = NULL,x_16 = NULL;
                  d_61 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      c_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_61);
                  b_61 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, c_61);
                  x_16 = t;
                  t = SSLsetAnnotations(x_16, b_61);
                  LocalPopChoice(b_25);
                  {
                    ATerm e_61 = NULL,f_61 = NULL,i_61 = NULL,k_61 = NULL,y_16 = NULL;
                    k_61 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        f_61 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(k_61);
                    e_61 = t;
                    t = f_61;
                    t = mark_buv_0_0(t);
                    i_61 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, i_61);
                    y_16 = t;
                    t = SSLsetAnnotations(y_16, e_61);
                  }
                }
              else
                {
                  t = a_25;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm w_7 (ATerm n_22, ATerm o_22, ATerm p_22, ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,q_61 = NULL;
  m_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_22, o_22);
  t = k_8(n_22, o_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_25 = ATgetFirst((ATermList) t);
      l_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_61), p_22);
  q_61 = t;
  t = SSL_table_put(n_22, o_22, q_61);
  t = m_61;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL;
  t_61 = t;
  t = term_f_14;
  u_61 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_61);
  v_61 = t;
  t = term_i_25;
  w_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_14, (ATerm)ATmakeAppl(sym_Var_1, t_61), term_i_25);
  t = w_7(u_61, v_61, w_61, t);
  t = t_61;
  return(t);
}
ATerm z_7 (ATerm l_22, ATerm m_22, ATerm t)
{
  ATerm x_61 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_22, m_22);
  t = k_8(l_22, m_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_61 = ATgetFirst((ATermList) t);
      {
        ATerm j_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_61;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL;
  e_63 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_17 = NULL,d_17 = NULL,h_17 = NULL,m_17 = NULL;
        t = term_f_14;
        m_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_14, e_63);
        t = z_7(m_17, e_63, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm n_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_25) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            c_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, f_63);
        d_17 = t;
        t = (ATerm) ATinsert(ATempty, c_17);
        h_17 = t;
        t = SSLsetAnnotations(d_17, h_17);
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        {
          ATerm o_25 = t;
          int p_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_17 = NULL,b_18 = NULL,c_18 = NULL,m_18 = NULL;
              t = term_f_14;
              m_18 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_f_14, e_63);
              t = z_7(m_18, e_63, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm q_25 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_25) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  u_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, f_63);
              b_18 = t;
              t = (ATerm) ATinsert(ATempty, u_17);
              c_18 = t;
              t = SSLsetAnnotations(b_18, c_18);
              ;
              LocalPopChoice(p_25);
            }
          else
            {
              t = o_25;
              {
                ATerm u_18 = NULL,x_18 = NULL,y_18 = NULL,f_19 = NULL;
                t = term_f_14;
                f_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_14, e_63);
                t = z_7(f_19, e_63, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm r_25 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_25) != ATmakeSymbol("c_0", 0, ATtrue)))
                      _fail(t);
                    u_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, f_63);
                x_18 = t;
                t = (ATerm) ATinsert(ATempty, u_18);
                y_18 = t;
                t = SSLsetAnnotations(x_18, y_18);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,i_24 = NULL;
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
    }
  n_63 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_63);
  k_63 = t;
  t = l_63;
  t = DeclareBound_0_0(t);
  m_63 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_63);
  i_24 = t;
  t = SSLsetAnnotations(i_24, k_63);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL,v_26 = NULL;
      s_63 = t;
      if(match_cons(t, sym_Var_1))
        {
          r_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_63);
      q_63 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, r_63);
      v_26 = t;
      t = SSLsetAnnotations(v_26, q_63);
      LocalPopChoice(w_25);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = v_25;
      {
        ATerm x_25 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,w_26 = NULL;
            w_63 = t;
            if(match_cons(t, sym_App_2))
              {
                u_63 = ATgetArgument(t, 0);
                v_63 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_63);
            t_63 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, u_63, v_63);
            w_26 = t;
            t = SSLsetAnnotations(w_26, t_63);
            LocalPopChoice(b_26);
            {
              ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,x_26 = NULL;
              c_64 = t;
              if(match_cons(t, sym_App_2))
                {
                  y_63 = ATgetArgument(t, 0);
                  z_63 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_64);
              x_63 = t;
              t = y_63;
              t = mark_buv_0_0(t);
              a_64 = t;
              t = z_63;
              t = mark_build_vars_0_0(t);
              b_64 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, a_64, b_64);
              x_26 = t;
              t = SSLsetAnnotations(x_26, x_63);
            }
          }
        else
          {
            t = x_25;
            {
              ATerm d_26 = t;
              int e_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL,y_26 = NULL;
                  f_64 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      e_64 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_64);
                  d_64 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, e_64);
                  y_26 = t;
                  t = SSLsetAnnotations(y_26, d_64);
                  LocalPopChoice(e_26);
                  {
                    ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,z_26 = NULL;
                    j_64 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        h_64 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(j_64);
                    g_64 = t;
                    t = h_64;
                    t = mark_buv_0_0(t);
                    i_64 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, i_64);
                    z_26 = t;
                    t = SSLsetAnnotations(z_26, g_64);
                  }
                }
              else
                {
                  t = d_26;
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
      ATerm e_65 = NULL,f_65 = NULL;
      e_65 = t;
      if(match_cons(t, sym_Match_1))
        {
          f_65 = ATgetArgument(t, 0);
          {
            ATerm l_19 = NULL,n_19 = NULL,g_27 = NULL;
            t = SSLgetAnnotations(e_65);
            l_19 = t;
            t = f_65;
            t = mark_match_vars_0_0(t);
            n_19 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, n_19);
            g_27 = t;
            t = SSLsetAnnotations(g_27, l_19);
          }
        }
      else
        {
          ATerm x_19 = NULL,z_19 = NULL,h_27 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              f_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_65);
          x_19 = t;
          t = f_65;
          t = mark_build_vars_0_0(t);
          z_19 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, z_19);
          h_27 = t;
          t = SSLsetAnnotations(h_27, x_19);
        }
      ;
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            ;
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
            {
              ATerm m_26 = t;
              int o_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  ;
                  LocalPopChoice(o_26);
                }
              else
                {
                  t = m_26;
                  {
                    ATerm p_26 = t;
                    int q_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
                        ;
                        LocalPopChoice(q_26);
                      }
                    else
                      {
                        t = p_26;
                        {
                          ATerm r_26 = t;
                          int t_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL;
                              g_65 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  h_65 = ATgetArgument(t, 0);
                                  i_65 = ATgetArgument(t, 1);
                                  j_65 = ATgetArgument(t, 2);
                                  k_65 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = g_65;
                              t = r_7(h_65, i_65, j_65, k_65, t);
                              ;
                              LocalPopChoice(t_26);
                            }
                          else
                            {
                              t = r_26;
                              {
                                ATerm u_26 = t;
                                int a_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    ;
                                    LocalPopChoice(a_27);
                                  }
                                else
                                  {
                                    t = u_26;
                                    {
                                      ATerm c_27 = t;
                                      int d_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL;
                                          s_65 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              t_65 = ATgetArgument(t, 0);
                                              t = t_65;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  p_65 = ATgetArgument(t, 0);
                                                  q_65 = ATgetArgument(t, 1);
                                                  r_65 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = s_65;
                                              t = e_7(p_65, q_65, r_65, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  t_65 = ATgetArgument(t, 0);
                                                  t = t_65;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      p_65 = ATgetArgument(t, 0);
                                                      q_65 = ATgetArgument(t, 1);
                                                      r_65 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_65;
                                                  t = d_7(p_65, q_65, r_65, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      t_65 = ATgetArgument(t, 0);
                                                      u_65 = ATgetArgument(t, 1);
                                                      v_65 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_65;
                                                  t = c_7(t_65, u_65, v_65, t);
                                                }
                                            }
                                          ;
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
                                                t = mark_call_0_0(t);
                                                ;
                                                LocalPopChoice(f_27);
                                              }
                                            else
                                              {
                                                t = e_27;
                                                {
                                                  ATerm i_27 = t;
                                                  int j_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      ;
                                                      LocalPopChoice(j_27);
                                                    }
                                                  else
                                                    {
                                                      t = i_27;
                                                      {
                                                        ATerm o_27 = t;
                                                        int p_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm f_66 = NULL;
                                                            f_66 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm q_27 = ATgetArgument(t, 0);
                                                                ATerm s_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = f_66;
                                                            t = b_7(t);
                                                            ;
                                                            LocalPopChoice(p_27);
                                                          }
                                                        else
                                                          {
                                                            t = o_27;
                                                            {
                                                              ATerm t_27 = t;
                                                              int a_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(a_28);
                                                                }
                                                              else
                                                                {
                                                                  t = t_27;
                                                                  {
                                                                    ATerm b_28 = t;
                                                                    int c_28 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(c_28);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_28;
                                                                        {
                                                                          ATerm d_28 = t;
                                                                          int g_28 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(g_28);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_28;
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
ATerm e_10 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL;
  s_66 = t;
  t = term_s_13;
  t_66 = t;
  t = (ATerm) ATinsert(ATempty, term_h_28);
  u_66 = t;
  t = SSL_printnl(t_66, u_66);
  t = s_66;
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,k_27 = NULL;
  y_66 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_66);
  v_66 = t;
  t = w_66;
  t = map_1_0(mark_buv_0_0, t);
  x_66 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_66);
  k_27 = t;
  t = SSLsetAnnotations(k_27, v_66);
  return(t);
}
ATerm g_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL;
  z_66 = t;
  t = term_s_13;
  a_67 = t;
  t = (ATerm) ATinsert(ATempty, term_k_28);
  b_67 = t;
  t = SSL_printnl(a_67, b_67);
  t = z_66;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,n_27 = NULL,l_27 = NULL;
  t = if_verbose4_1_0(e_10, t);
  r_66 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_66);
  k_66 = t;
  t = l_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_66 = ATgetFirst((ATermList) t);
      o_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_66);
  m_66 = t;
  t = o_66;
  t = Cons_2_0(f_10, g_10, t);
  p_66 = t;
  t = (ATerm) ATinsert(CheckATermList(p_66), n_66);
  l_27 = t;
  t = SSLsetAnnotations(l_27, m_66);
  q_66 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_66);
  n_27 = t;
  t = SSLsetAnnotations(n_27, k_66);
  t = if_verbose4_1_0(h_10, t);
  return(t);
}
ATerm c_8 (ATerm d_43, ATerm e_43, ATerm t)
{
  ATerm c_67 = NULL;
  t = SSL_fputc(d_43, e_43);
  c_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_67);
  return(t);
}
ATerm d_8 (ATerm r_46, ATerm s_46, ATerm t)
{
  ATerm d_67 = NULL;
  t = SSL_write_term_to_stream_text(r_46, s_46);
  d_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_67);
  return(t);
}
ATerm f_8 (ATerm t_95 (ATerm), ATerm r_446, ATerm v_46, ATerm t)
{
  ATerm e_67 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_446, term_l_28);
  t = open_stream_0_0(t);
  e_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_67, v_46);
  t = t_95(t);
  t = fclose_0_0(t);
  t = v_46;
  return(t);
}
ATerm e_8 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm f_67 = NULL;
  t = SSL_write_term_to_stream_baf(n_46, o_46);
  f_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_67);
  return(t);
}
ATerm k_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      if(match_cons(n_28, sym_Stream_1))
        {
          m_20 = ATgetArgument(n_28, 0);
        }
      else
        _fail(t);
      n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_8(m_20, n_20, t);
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_28 = ATgetArgument(t, 0);
      if(match_cons(p_28, sym_Stream_1))
        {
          k_21 = ATgetArgument(p_28, 0);
        }
      else
        _fail(t);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_8(k_21, l_21, t);
  h_21 = t;
  t = term_r_28;
  i_21 = t;
  t = h_21;
  if(match_cons(t, sym_Stream_1))
    {
      j_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_28, h_21);
  t = c_8(i_21, j_21, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,t_68 = NULL,u_68 = NULL,x_27 = NULL,w_27 = NULL;
  k_67 = t;
  if(match_cons(t, sym__2))
    {
      r_67 = ATgetArgument(t, 0);
      s_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_67);
  q_67 = t;
  t = r_67;
  {
    ATerm t_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_10 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((j_67 != NULL) && (j_67 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(i_10, t);
        ;
        LocalPopChoice(v_28);
      }
    else
      {
        t = t_28;
        t = term_x_28;
        j_67 = t;
      }
    if(((t_67 != NULL) && (t_67 != t)))
      _fail(t);
    else
      t_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_67, s_67);
    if(((w_27 != NULL) && (w_27 != t)))
      _fail(t);
    else
      w_27 = t;
    t = SSLsetAnnotations(w_27, q_67);
    t = k_67;
    if(match_cons(t, sym__2))
      {
        if(((m_67 != NULL) && (m_67 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          m_67 = ATgetArgument(t, 0);
        if(((n_67 != NULL) && (n_67 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          n_67 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_67);
    if(((l_67 != NULL) && (l_67 != t)))
      _fail(t);
    else
      l_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_67, (ATerm) ATmakeAppl(sym__2, not_null(j_67), n_67));
    if(((x_27 != NULL) && (x_27 != t)))
      _fail(t);
    else
      x_27 = t;
    t = SSLsetAnnotations(x_27, l_67);
    if(((p_67 != NULL) && (p_67 != t)))
      _fail(t);
    else
      p_67 = t;
    if(match_cons(t, sym__2))
      {
        if(((t_68 != NULL) && (t_68 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          t_68 = ATgetArgument(t, 0);
        if(((u_68 != NULL) && (u_68 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          u_68 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm z_28 = t;
      int a_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,y_27 = NULL;
          t = SSLgetAnnotations(p_67);
          f_20 = t;
          t = t_68;
          t = fetch_1_0(k_10, t);
          i_20 = t;
          t = u_68;
          if(match_cons(t, sym__2))
            {
              k_20 = ATgetArgument(t, 0);
              l_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_8(m_10, k_20, l_20, t);
          j_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_20, j_20);
          y_27 = t;
          t = SSLsetAnnotations(y_27, f_20);
          ;
          LocalPopChoice(a_29);
        }
      else
        {
          t = z_28;
          {
            ATerm t_20 = NULL,z_20 = NULL,b_21 = NULL,d_21 = NULL,z_27 = NULL;
            t = SSLgetAnnotations(p_67);
            t_20 = t;
            t = u_68;
            if(match_cons(t, sym__2))
              {
                b_21 = ATgetArgument(t, 0);
                d_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_8(n_10, b_21, d_21, t);
            z_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_68, z_20);
            z_27 = t;
            t = SSLsetAnnotations(z_27, t_20);
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
ATerm apply_strategy_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL;
  b_69 = t;
  t = dtime_0_0(t);
  t = b_69;
  t = f_97(t);
  a_69 = t;
  t = dtime_0_0(t);
  x_68 = t;
  t = a_69;
  if(match_cons(t, sym__2))
    {
      y_68 = ATgetArgument(t, 0);
      z_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_68), (ATerm) ATmakeAppl(sym_Runtime_1, x_68)), z_68);
  return(t);
}
ATerm p_69 (ATerm j_69, ATerm t)
{
  t = SSL_fclose(j_69);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL;
  n_69 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_69 = ATgetArgument(t, 0);
      {
        ATerm b_29 = t;
        int c_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_69);
            ;
            LocalPopChoice(c_29);
          }
        else
          {
            t = b_29;
            t = p_69(n_69, t);
          }
      }
    }
  else
    {
      t = p_69(n_69, t);
    }
  return(t);
}
ATerm g_8 (ATerm t_46, ATerm t)
{
  t = SSL_read_term_from_stream(t_46);
  return(t);
}
ATerm h_8 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm q_69 = NULL;
  t = SSL_fopen(f_43, g_43);
  q_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_69);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_69 = NULL;
  t = SSL_stdin_stream();
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_69);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_69 = NULL;
  t = SSL_stdout_stream();
  s_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_69);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_69 = NULL;
  t = SSL_stderr_stream();
  t_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_69);
  return(t);
}
ATerm a_71 (ATerm z_69, ATerm t)
{
  ATerm a_70 = NULL;
  t = SSL_explode_term(z_69);
  if(match_cons(t, sym__2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_29 = ATgetArgument(t, 1);
        if(((ATgetType(e_29) == AT_LIST) && !(ATisEmpty(e_29))))
          {
            a_70 = ATgetFirst((ATermList) e_29);
            {
              ATerm f_29 = (ATerm) ATgetNext((ATermList) e_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_70;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_70;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_70;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_70;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_71 (ATerm d_70, ATerm e_70, ATerm f_70, ATerm t)
{
  ATerm g_70 = NULL,h_70 = NULL,i_70 = NULL,l_70 = NULL,e_28 = NULL;
  t = SSLgetAnnotations(f_70);
  i_70 = t;
  t = d_70;
  if(match_cons(t, sym_Path_1))
    {
      l_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_70, e_70);
  e_28 = t;
  t = SSLsetAnnotations(e_28, i_70);
  if(match_cons(t, sym__2))
    {
      g_70 = ATgetArgument(t, 0);
      h_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8(g_70, h_70, t);
  return(t);
}
ATerm c_71 (ATerm n_70, ATerm o_70, ATerm p_70, ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL,v_70 = NULL,f_28 = NULL;
  t = SSLgetAnnotations(p_70);
  s_70 = t;
  t = SSL_is_string(n_70);
  v_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_70, o_70);
  f_28 = t;
  t = SSLsetAnnotations(f_28, s_70);
  if(match_cons(t, sym__2))
    {
      q_70 = ATgetArgument(t, 0);
      r_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8(q_70, r_70, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_29 = ATgetArgument(t, 0);
      ATerm h_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_70 = t;
  if(match_cons(t, sym__2))
    {
      y_70 = ATgetArgument(t, 0);
      z_70 = ATgetArgument(t, 1);
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_71(x_70, t);
            ;
            LocalPopChoice(j_29);
          }
        else
          {
            t = i_29;
            {
              ATerm k_29 = t;
              int l_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_71(y_70, z_70, x_70, t);
                  ;
                  LocalPopChoice(l_29);
                }
              else
                {
                  t = k_29;
                  t = c_71(y_70, z_70, x_70, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_71(x_70, t);
    }
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL;
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_71 = NULL;
      g_71 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_71, term_p_29);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
      t = debug_1_0(o_10, t);
      _fail(t);
    }
  e_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(f_71, t);
  d_71 = t;
  t = e_71;
  t = fclose_0_0(t);
  t = d_71;
  return(t);
}
ATerm fetch_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm e_72 (ATerm t)
  {
    ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
    b_72 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_72 = ATgetFirst((ATermList) t);
        d_72 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_29 = t;
      int r_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_22 = NULL,k_22 = NULL,i_28 = NULL;
          t = SSLgetAnnotations(b_72);
          h_22 = t;
          t = c_72;
          t = u_79(t);
          k_22 = t;
          t = (ATerm) ATinsert(CheckATermList(d_72), k_22);
          i_28 = t;
          t = SSLsetAnnotations(i_28, h_22);
          ;
          LocalPopChoice(r_29);
        }
      else
        {
          t = q_29;
          {
            ATerm f_23 = NULL,i_23 = NULL,j_28 = NULL;
            t = SSLgetAnnotations(b_72);
            f_23 = t;
            t = d_72;
            t = e_72(t);
            i_23 = t;
            t = (ATerm) ATinsert(CheckATermList(i_23), c_72);
            j_28 = t;
            t = SSLsetAnnotations(j_28, f_23);
          }
        }
    }
    return(t);
  }
  t = e_72(t);
  return(t);
}
ATerm b_8 (ATerm v_40, ATerm w_40, ATerm t)
{
  t = SSL_strcat(v_40, w_40);
  return(t);
}
ATerm debug_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL;
  h_72 = t;
  t = r_95(t);
  i_72 = t;
  t = term_s_13;
  j_72 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_72), i_72);
  k_72 = t;
  t = SSL_printnl(j_72, k_72);
  t = h_72;
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
    }
  return(t);
}
ATerm t_10 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_72 = NULL;
      r_72 = t;
      t = SSL_is_string(r_72);
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_10, t);
            ;
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            {
              ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL;
              x_72 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_72 = ATgetArgument(t, 0);
                  t = y_72;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_72 = ATgetArgument(t, 0);
                      t = y_72;
                      {
                        ATerm z_29 = t;
                        int a_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_30);
                          }
                        else
                          {
                            t = z_29;
                            t = debug_1_0(t_10, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_73 = NULL,e_73 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_72 = ATgetArgument(t, 0);
                          z_72 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_72;
                      t = eval_config_0_0(t);
                      d_73 = t;
                      t = z_72;
                      t = eval_config_0_0(t);
                      e_73 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_73, e_73);
                      t = b_8(d_73, e_73, t);
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
  ATerm i_73 = NULL,j_73 = NULL;
  i_73 = t;
  t = term_b_30;
  j_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_30, i_73);
  t = k_8(j_73, i_73, t);
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_73 = NULL,l_73 = NULL;
        t = eval_config_0_0(t);
        k_73 = t;
        t = term_b_30;
        l_73 = t;
        t = SSL_table_put(l_73, i_73, k_73);
        t = k_73;
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm p_73 = NULL;
  p_73 = t;
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_73 = NULL;
        t = term_d_14;
        t = get_config_0_0(t);
        r_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_73, term_g_30);
        t = geq_0_0(t);
        t = p_73;
        t = j_104(t);
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        t = p_73;
      }
  }
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm u_73 = NULL;
  u_73 = t;
  if(match_string(t, "-k"))
    {
      t = u_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_73;
    }
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL;
  v_73 = t;
  t = SSL_string_to_int(v_73);
  w_73 = t;
  t = term_h_30;
  x_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_30, w_73);
  t = n_8(x_73, w_73, t);
  t = v_73;
  return(t);
}
ATerm x_10 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_10, w_10, x_10, t);
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm z_73 = NULL;
  z_73 = t;
  if(match_string(t, "-S"))
    {
      t = z_73;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_73;
    }
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL;
  t = term_d_14;
  a_74 = t;
  t = term_j_30;
  b_74 = t;
  t = term_k_30;
  t = n_8(a_74, b_74, t);
  t = term_p_30;
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm i_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm c_74 = NULL,d_74 = NULL,e_74 = NULL;
  c_74 = t;
  t = SSL_string_to_int(c_74);
  d_74 = t;
  t = term_d_14;
  e_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_14, d_74);
  t = n_8(e_74, d_74, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_74);
  return(t);
}
ATerm l_11 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm m_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL;
  t = term_u_30;
  f_74 = t;
  t = term_r_13;
  g_74 = t;
  t = term_v_30;
  t = n_8(f_74, g_74, t);
  t = term_w_30;
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_10, z_10, h_11, t);
      ;
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      {
        ATerm a_31 = t;
        int b_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_11, k_11, l_11, t);
            ;
            LocalPopChoice(b_31);
          }
        else
          {
            t = a_31;
            t = Option_3_0(m_11, p_11, s_11, t);
          }
      }
    }
  return(t);
}
ATerm n_8 (ATerm e_49, ATerm f_49, ATerm t)
{
  ATerm h_74 = NULL;
  t = term_b_30;
  h_74 = t;
  t = SSL_table_put(h_74, e_49, f_49);
  t = (ATerm) ATmakeAppl(sym__3, term_b_30, e_49, f_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
      t = term_r_13;
      t = i_0(t);
      m_74 = t;
      t = term_c_31;
      n_74 = t;
      t = term_d_31;
      o_74 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_31, term_d_31, m_74);
      t = l_8(n_74, o_74, m_74, t);
      _fail(t);
    }
  else
    {
      ATerm r_74 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_74 = ATgetFirst((ATermList) t);
          l_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_74;
      t = d_0(t);
      t = term_r_13;
      t = g_0(t);
      r_74 = t;
      t = (ATerm) ATinsert(CheckATermList(l_74), r_74);
    }
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm t_74 = NULL;
  t_74 = t;
  if(match_string(t, "-o"))
    {
      t = t_74;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_74;
    }
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm u_74 = NULL,v_74 = NULL;
  u_74 = t;
  t = term_e_31;
  v_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_31, u_74);
  t = n_8(v_74, u_74, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_74);
  return(t);
}
ATerm v_11 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_11, u_11, v_11, t);
  return(t);
}
ATerm l_8 (ATerm a_22, ATerm b_22, ATerm z_21, ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL;
  x_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_31 = ATgetArgument(t, 0);
            ATerm j_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_22, b_22);
        t = k_8(a_22, b_22, t);
        ;
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        t = (ATerm) ATempty;
      }
    y_74 = t;
    t = (ATerm) ATinsert(CheckATermList(y_74), z_21);
    z_74 = t;
    t = SSL_table_put(a_22, b_22, z_74);
    t = x_74;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm l_75 = NULL,r_75 = NULL,t_75 = NULL,u_75 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL;
      t = term_r_13;
      t = r_0(t);
      v_75 = t;
      t = term_c_31;
      w_75 = t;
      t = term_d_31;
      x_75 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_31, term_d_31, v_75);
      t = l_8(w_75, x_75, v_75, t);
      _fail(t);
    }
  else
    {
      ATerm b_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_75 = ATgetFirst((ATermList) t);
          r_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_75;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_75 = ATgetFirst((ATermList) t);
          u_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_75;
      t = n_0(t);
      t = t_75;
      t = p_0(t);
      b_76 = t;
      t = (ATerm) ATinsert(CheckATermList(u_75), b_76);
    }
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm d_76 = NULL;
  d_76 = t;
  if(match_string(t, "-i"))
    {
      t = d_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_76;
    }
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm e_76 = NULL,f_76 = NULL;
  e_76 = t;
  t = term_k_31;
  f_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_31, e_76);
  t = n_8(f_76, e_76, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_76);
  return(t);
}
ATerm z_11 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_11, y_11, z_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_13;
  t = whoami_0_0(t);
  g_76 = t;
  t = term_s_13;
  i_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_31), g_76);
  j_76 = t;
  t = SSL_printnl(i_76, j_76);
  t = term_v_13;
  h_76 = t;
  t = SSL_exit(h_76);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_8 (ATerm b_34, ATerm c_34, ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_34, c_34);
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      t = SSL_addr(b_34, c_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL;
  l_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_76;
      t = c_86(t);
    }
  else
    {
      ATerm q_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_76 = ATgetFirst((ATermList) t);
          n_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_76;
      t = foldr_2_0(c_86, d_86, t);
      q_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_76, q_76);
      t = d_86(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  if(match_cons(t, sym__2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(k_24, l_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_76 = NULL,z_23 = NULL,g_24 = NULL;
  t = times_0_0(t);
  g_24 = t;
  t = SSL_explode_term(g_24);
  if(match_cons(t, sym__2))
    {
      ATerm v_31 = ATgetArgument(t, 0);
      z_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_23;
  t = foldr_2_0(a_12, b_12, t);
  t_76 = t;
  t = SSL_TicksToSeconds(t_76);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
  e_77 = t;
  if(match_cons(t, sym__2))
    {
      f_77 = ATgetArgument(t, 0);
      g_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_77;
        if((f_77 != t))
          {
            _fail(t);
          }
        t = e_77;
        ;
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = (ATerm) ATmakeAppl(sym__2, f_77, g_77);
        {
          ATerm y_31 = t;
          int z_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_77, g_77);
              ;
              LocalPopChoice(z_31);
            }
          else
            {
              t = y_31;
              t = SSL_gtr(f_77, g_77);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_77, g_77);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  ATerm k_77 = NULL;
  k_77 = t;
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_77 = NULL;
        t = term_d_14;
        t = get_config_0_0(t);
        o_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_77, term_v_13);
        t = geq_0_0(t);
        t = k_77;
        t = i_104(t);
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
        t = k_77;
      }
  }
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm q_77 = NULL,r_77 = NULL,t_77 = NULL,u_77 = NULL;
  t = run_time_0_0(t);
  q_77 = t;
  t = term_r_13;
  t = whoami_0_0(t);
  r_77 = t;
  t = term_s_13;
  t_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_32), q_77), term_c_32), r_77);
  u_77 = t;
  t = SSL_printnl(t_77, u_77);
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_32), q_77), term_c_32), r_77));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_30;
  v_77 = t;
  t = SSL_exit(v_77);
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm d_78 = NULL,e_78 = NULL;
  e_78 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_78;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_78 = ATgetArgument(t, 0);
          {
            ATerm h_25 = NULL,m_28 = NULL;
            t = SSLgetAnnotations(e_78);
            h_25 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_78);
            m_28 = t;
            t = SSLsetAnnotations(m_28, h_25);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_78;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      t = fetch_1_0(e_12, t);
    }
  t = d_98(t);
  return(t);
}
ATerm map_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm u_78 (ATerm t)
  {
    ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL;
    r_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_78;
      }
    else
      {
        ATerm u_25 = NULL,y_25 = NULL,a_26 = NULL,o_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_78 = ATgetFirst((ATermList) t);
            t_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_78);
        u_25 = t;
        t = s_78;
        t = k_79(t);
        y_25 = t;
        t = t_78;
        t = u_78(t);
        a_26 = t;
        t = (ATerm) ATinsert(CheckATermList(a_26), y_25);
        o_28 = t;
        t = SSLsetAnnotations(o_28, u_25);
      }
    return(t);
  }
  t = u_78(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_78 = ATgetFirst((ATermList) t);
      y_78 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_79 = NULL,d_79 = NULL;
        ATerm f_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_79)), not_null(d_79));
          return(t);
        }
        t = y_78;
        t = m_0(t);
        if(((c_79 != NULL) && (c_79 != t)))
          _fail(t);
        else
          c_79 = t;
        t = x_78;
        t = k_0(t);
        if(((d_79 != NULL) && (d_79 != t)))
          _fail(t);
        else
          d_79 = t;
        t = y_78;
        t = reverse_acc_2_0(k_0, f_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_13;
      t = m_0(t);
    }
  return(t);
}
ATerm k_8 (ATerm r_23, ATerm s_23, ATerm t)
{
  t = SSL_table_get(r_23, s_23);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm h_79 = NULL,j_79 = NULL,m_79 = NULL,q_28 = NULL;
  m_79 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_79);
  h_79 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_79);
  q_28 = t;
  t = SSLsetAnnotations(q_28, h_79);
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm o_79 = NULL;
  o_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_79), term_h_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL;
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      t = fetch_1_0(g_12, t);
    }
  t = term_k_32;
  t = echo_0_0(t);
  t = term_c_31;
  f_79 = t;
  t = term_d_31;
  g_79 = t;
  t = term_l_32;
  t = k_8(f_79, g_79, t);
  t = reverse_acc_2_0(_id, h_12, t);
  t = map_1_0(i_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL;
  q_79 = t;
  {
    ATerm n_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_79;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_32 = ATgetFirst((ATermList) t);
                ATerm t_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_79;
          }
        ;
        LocalPopChoice(r_32);
      }
    else
      {
        t = n_32;
        t = (ATerm) ATinsert(ATempty, q_79);
      }
    r_79 = t;
    t = term_x_28;
    s_79 = t;
    t = SSL_printnl(s_79, r_79);
    t = q_79;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm k_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm y_79 = NULL,z_79 = NULL;
  t = term_v_32;
  y_79 = t;
  t = term_r_13;
  z_79 = t;
  t = term_w_32;
  t = n_8(y_79, z_79, t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm n_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL;
  t = term_v_32;
  e_80 = t;
  t = term_r_13;
  f_80 = t;
  t = term_w_32;
  t = n_8(e_80, f_80, t);
  t = term_y_32;
  c_80 = t;
  t = term_r_13;
  d_80 = t;
  t = term_z_32;
  t = n_8(c_80, d_80, t);
  t = term_a_33;
  return(t);
}
ATerm p_12 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_12, l_12, m_12, t);
      ;
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      t = Option_3_0(n_12, o_12, p_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_62 (ATerm), ATerm c_62 (ATerm), ATerm t)
{
  ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL,s_28 = NULL;
  l_80 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_80 = ATgetFirst((ATermList) t);
      i_80 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_80);
  g_80 = t;
  t = h_80;
  t = b_62(t);
  j_80 = t;
  t = i_80;
  t = c_62(t);
  k_80 = t;
  t = (ATerm) ATinsert(CheckATermList(k_80), j_80);
  s_28 = t;
  t = SSLsetAnnotations(s_28, g_80);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_101 (ATerm), ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL,v_80 = NULL,w_80 = NULL,u_28 = NULL;
  q_80 = t;
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_33;
        t = i_101(t);
        ;
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
      }
    t = q_80;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_80 = ATgetFirst((ATermList) t);
        t_80 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_80);
    r_80 = t;
    t = term_n_31;
    w_80 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_31, s_80);
    t = n_8(w_80, s_80, t);
    t = t_80;
    {
      ATerm g_81 (ATerm t)
      {
        ATerm i_33 = t;
        int j_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_33 = t;
            int l_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_80 = NULL;
                z_80 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_80;
                ;
                LocalPopChoice(l_33);
              }
            else
              {
                t = k_33;
                t = i_101(t);
                t = Cons_2_0(_id, g_81, t);
              }
            ;
            LocalPopChoice(j_33);
          }
        else
          {
            t = i_33;
            {
              ATerm c_81 = NULL,d_81 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_81 = ATgetFirst((ATermList) t);
                  d_81 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_81), (ATerm) ATmakeAppl(sym_Undefined_1, c_81));
            }
          }
        return(t);
      }
      t = g_81(t);
      if(((v_80 != NULL) && (v_80 != t)))
        _fail(t);
      else
        v_80 = t;
      t = (ATerm) ATinsert(CheckATermList(v_80), (ATerm) ATmakeAppl(sym_Program_1, s_80));
      if(((u_28 != NULL) && (u_28 != t)))
        _fail(t);
      else
        u_28 = t;
      t = SSLsetAnnotations(u_28, r_80);
    }
  }
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm x_81 = NULL;
  x_81 = t;
  if(match_string(t, "--help"))
    {
      t = x_81;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_81;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_81;
        }
    }
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm y_81 = NULL,z_81 = NULL;
  t = term_g_32;
  y_81 = t;
  t = term_r_13;
  z_81 = t;
  t = term_m_33;
  t = n_8(y_81, z_81, t);
  t = term_n_33;
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm v_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL;
  s_81 = t;
  t = term_c_31;
  u_81 = t;
  t = term_d_31;
  v_81 = t;
  t = (ATerm) ATempty;
  w_81 = t;
  t = SSL_table_put(u_81, v_81, w_81);
  t = s_81;
  {
    ATerm q_12 (ATerm t)
    {
      ATerm p_33 = t;
      int q_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_101(t);
          ;
          LocalPopChoice(q_33);
        }
      else
        {
          t = p_33;
          {
            ATerm r_33 = t;
            int s_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_12, t_12, u_12, t);
                ;
                LocalPopChoice(s_33);
              }
            else
              {
                t = r_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_12, t);
    {
      ATerm t_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_82 = NULL;
          g_82 = t;
          {
            ATerm v_33 = t;
            int w_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_26 = NULL;
                t = g_82;
                {
                  ATerm y_33 = t;
                  int z_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_g_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(z_33);
                    }
                  else
                    {
                      t = y_33;
                      t = fetch_1_0(v_12, t);
                    }
                  t = g_82;
                  t = default_system_usage_0_0(t);
                  t = term_j_30;
                  n_26 = t;
                  t = SSL_exit(n_26);
                }
                ;
                LocalPopChoice(w_33);
              }
            else
              {
                t = v_33;
                {
                  ATerm s_26 = NULL;
                  t = term_v_32;
                  t = get_config_0_0(t);
                  t = g_82;
                  t = default_system_about_0_0(t);
                  t = term_j_30;
                  s_26 = t;
                  t = SSL_exit(s_26);
                }
              }
          }
          ;
          LocalPopChoice(u_33);
        }
      else
        {
          t = t_33;
          {
            ATerm a_34 = t;
            int d_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL;
                ATerm w_12 (ATerm t)
                {
                  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL,w_28 = NULL;
                  m_82 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      l_82 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_82);
                  k_82 = t;
                  t = l_82;
                  if(((l_81 != NULL) && (l_81 != t)))
                    _fail(t);
                  else
                    l_81 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, l_82);
                  w_28 = t;
                  t = SSLsetAnnotations(w_28, k_82);
                  return(t);
                }
                t = fetch_1_0(w_12, t);
                t = term_s_13;
                if(((i_82 != NULL) && (i_82 != t)))
                  _fail(t);
                else
                  i_82 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_81)), term_e_34);
                if(((j_82 != NULL) && (j_82 != t)))
                  _fail(t);
                else
                  j_82 = t;
                t = SSL_printnl(i_82, j_82);
                t = (ATerm) ATmakeAppl(sym__2, term_s_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_81)), term_e_34));
                t = default_system_usage_0_0(t);
                t = term_v_13;
                if(((h_82 != NULL) && (h_82 != t)))
                  _fail(t);
                else
                  h_82 = t;
                t = SSL_exit(h_82);
                ;
                LocalPopChoice(d_34);
              }
            else
              {
                t = a_34;
              }
          }
        }
      if(((m_81 != NULL) && (m_81 != t)))
        _fail(t);
      else
        m_81 = t;
      t = term_c_31;
      if(((t_81 != NULL) && (t_81 != t)))
        _fail(t);
      else
        t_81 = t;
      t = SSL_table_destroy(t_81);
      t = m_81;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL;
  t = parse_options_1_0(f_98, t);
  r_82 = t;
  t = term_f_34;
  u_82 = t;
  t = SSL_table_create(u_82);
  t = term_f_34;
  s_82 = t;
  t = term_g_34;
  t_82 = t;
  t = SSL_table_put(s_82, t_82, r_82);
  t = r_82;
  t = h_98(t);
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_98, t);
        ;
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        {
          ATerm k_34 = t;
          int l_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_34);
            }
          else
            {
              t = k_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm z_12 (ATerm t)
{
  t = if_verbose2_1_0(k_13, t);
  return(t);
}
ATerm g_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL;
  t = term_m_34;
  v_82 = t;
  t = term_r_13;
  w_82 = t;
  t = term_n_34;
  t = n_8(v_82, w_82, t);
  t = term_o_34;
  return(t);
}
ATerm j_13 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm x_82 = NULL,y_82 = NULL,z_82 = NULL,a_83 = NULL;
  x_82 = t;
  t = term_n_31;
  t = get_config_0_0(t);
  y_82 = t;
  t = term_s_13;
  z_82 = t;
  t = (ATerm) ATinsert(ATempty, y_82);
  a_83 = t;
  t = SSL_printnl(z_82, a_83);
  t = x_82;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
{
  ATerm y_12 (ATerm t)
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_97(t);
        ;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        {
          ATerm t_34 = t;
          int u_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(u_34);
            }
          else
            {
              t = t_34;
              {
                ATerm v_34 = t;
                int x_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(x_34);
                  }
                else
                  {
                    t = v_34;
                    {
                      ATerm b_35 = t;
                      int c_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(g_13, i_13, j_13, t);
                          ;
                          LocalPopChoice(c_35);
                        }
                      else
                        {
                          t = b_35;
                          {
                            ATerm e_35 = t;
                            int f_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(f_35);
                              }
                            else
                              {
                                t = e_35;
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
  ATerm d_13 (ATerm t)
  {
    ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
    c_83 = t;
    {
      ATerm g_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((b_83 != NULL) && (b_83 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_83 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_13, t);
          ;
          LocalPopChoice(h_35);
        }
      else
        {
          t = g_35;
          t = term_i_35;
          b_83 = t;
        }
      t = not_null(b_83);
      t = ReadFromFile_0_0(t);
      if(((d_83 != NULL) && (d_83 != t)))
        _fail(t);
      else
        d_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_83, d_83);
      t = apply_strategy_1_0(o_97, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(y_12, q_97, z_12, d_13, t);
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL,y_28 = NULL;
  i_83 = t;
  if(match_cons(t, sym__2))
    {
      f_83 = ATgetArgument(t, 0);
      g_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_83);
  e_83 = t;
  t = g_83;
  t = mark_bound_unbound_vars_0_0(t);
  h_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_83, h_83);
  y_28 = t;
  t = SSLsetAnnotations(y_28, e_83);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(q_13, _fail, default_usage_0_0, t);
  return(t);
}
