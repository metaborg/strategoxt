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
ATerm term_f_36;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_o_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_f_31;
ATerm term_n_30;
ATerm term_i_30;
ATerm term_c_30;
ATerm term_y_28;
ATerm term_r_28;
ATerm term_m_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_w_17;
ATerm term_n_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
void init_constant_terms (void)
{
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Defined_2, term_g_17, term_h_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Defined_2, term_h_24, term_i_24);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Defined_2, term_m_25, term_h_17);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("marking bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("marked bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_d_14, term_p_31);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_31);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_w_31, term_u_13);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_i_32);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_b_34, term_u_13);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym__2, term_e_34, term_u_13);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__2, term_q_33, term_u_13);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_u_13);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose4_1_0 (ATerm q_104 (ATerm), ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm m_75 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm l_75 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm k_75 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm v_2 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm alltd_1_0 (ATerm r_77 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm d_7 (ATerm i_21, ATerm j_21, ATerm k_21, ATerm);
ATerm c_3 (ATerm);
ATerm h_3 (ATerm);
ATerm l_3 (ATerm);
ATerm p_3 (ATerm);
ATerm u_3 (ATerm);
ATerm e_7 (ATerm c_21, ATerm g_21, ATerm e_21, ATerm);
ATerm v_3 (ATerm);
ATerm l_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm f_7 (ATerm w_20, ATerm a_21, ATerm y_20, ATerm);
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
ATerm g_7 (ATerm u_19, ATerm v_19, ATerm w_19, ATerm y_19, ATerm);
ATerm CompareEntries_0_0 (ATerm);
ATerm h_7 (ATerm f_18, ATerm g_18, ATerm e_18, ATerm);
ATerm q_6 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm i_7 (ATerm h_23, ATerm g_23, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm undefine_unbound_MarkVar_0_1 (ATerm s_18, ATerm);
ATerm tboundin_3_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm j_7 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm u_7 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm n_7 (ATerm t_83 (ATerm), ATerm s_30, ATerm r_30, ATerm);
ATerm foldr_3_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm);
ATerm o_7 (ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm w_30, ATerm v_30, ATerm);
ATerm p_7 (ATerm o_83 (ATerm), ATerm q_30, ATerm p_30, ATerm);
ATerm at_end_1_0 (ATerm f_80 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm o_47 (ATerm b_47, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm x_8 (ATerm);
ATerm t_7 (ATerm o_577, ATerm t_577, ATerm j_55, ATerm);
ATerm while_not_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm);
ATerm z_8 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm k_53 (ATerm s_50, ATerm t_50, ATerm v_50, ATerm);
ATerm d_9 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm free_vars_3_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm r_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm v_7 (ATerm v_75 (ATerm), ATerm w_21, ATerm u_21, ATerm);
ATerm a_10 (ATerm);
ATerm DeclareUnbound_0_0 (ATerm);
ATerm w_7 (ATerm j_22, ATerm k_22, ATerm);
ATerm end_scope_1_0 (ATerm s_75 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_75 (ATerm), ATerm);
ATerm scope_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm);
ATerm f_10 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm mark_build_vars_0_0 (ATerm);
ATerm x_7 (ATerm r_22, ATerm s_22, ATerm t_22, ATerm);
ATerm DeclareBound_0_0 (ATerm);
ATerm a_8 (ATerm p_22, ATerm q_22, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm MarkAndBind_0_0 (ATerm);
ATerm mark_match_vars_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm mark_bound_unbound_vars_0_0 (ATerm);
ATerm d_8 (ATerm h_43, ATerm i_43, ATerm);
ATerm e_8 (ATerm v_46, ATerm w_46, ATerm);
ATerm g_8 (ATerm y_95 (ATerm), ATerm v_447, ATerm z_46, ATerm);
ATerm f_8 (ATerm r_46, ATerm s_46, ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_97 (ATerm), ATerm);
ATerm x_70 (ATerm r_70, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm h_8 (ATerm x_46, ATerm);
ATerm i_8 (ATerm j_43, ATerm k_43, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_72 (ATerm h_71, ATerm);
ATerm j_72 (ATerm l_71, ATerm m_71, ATerm n_71, ATerm);
ATerm k_72 (ATerm v_71, ATerm w_71, ATerm x_71, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm y_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm c_8 (ATerm z_40, ATerm a_41, ATerm);
ATerm debug_1_0 (ATerm w_95 (ATerm), ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_104 (ATerm), ATerm);
ATerm b_11 (ATerm);
ATerm g_11 (ATerm);
ATerm i_11 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm n_11 (ATerm);
ATerm q_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm o_8 (ATerm i_49, ATerm j_49, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm y_11 (ATerm);
ATerm z_11 (ATerm);
ATerm a_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm m_8 (ATerm e_22, ATerm f_22, ATerm d_22, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm e_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm j_8 (ATerm f_34, ATerm g_34, ATerm);
ATerm foldr_2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_104 (ATerm), ATerm);
ATerm h_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_12 (ATerm);
ATerm need_help_1_0 (ATerm i_98 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_79 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm l_8 (ATerm v_23, ATerm w_23, ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_62 (ATerm), ATerm g_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_101 (ATerm), ATerm);
ATerm w_12 (ATerm);
ATerm x_12 (ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm parse_options_1_0 (ATerm m_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm);
ATerm k_13 (ATerm);
ATerm m_13 (ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm iowrap_3_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm);
ATerm t_13 (ATerm);
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
  t = term_u_13;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_v_13;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_13), b_0), term_x_13);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_z_13;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm q_104 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL;
        t = term_d_14;
        t = get_config_0_0(t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_e_14);
        t = geq_0_0(t);
        t = x_0;
        t = q_104(t);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = x_0;
      }
  }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm m_75 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,f_1 = NULL,u_6 = NULL;
  ATerm j_0 (ATerm t)
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
    t = m_75(t);
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
    t = m_75(t);
    l_1 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_1, l_1, k_1);
    a_7 = t;
    t = SSLsetAnnotations(a_7, g_1);
    return(t);
  }
  ATerm l_0 (ATerm t)
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
    t = m_75(t);
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
  t = abstract_choice_2_0(j_0, l_0, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm l_75 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,q_7 = NULL;
  ATerm o_0 (ATerm t)
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
    t = l_75(t);
    l_2 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, l_2, k_2);
    r_7 = t;
    t = SSLsetAnnotations(r_7, h_2);
    return(t);
  }
  ATerm q_0 (ATerm t)
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
    t = l_75(t);
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
  t = abstract_choice_2_0(o_0, q_0, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL;
  j_3 = t;
  t = save_MarkVar_0_0(t);
  e_3 = t;
  t = j_3;
  t = n_75(t);
  i_3 = t;
  t = save_MarkVar_0_0(t);
  f_3 = t;
  t = term_f_14;
  m_3 = t;
  t = SSL_table_destroy(m_3);
  t = term_f_14;
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, e_3);
  t = i_7(k_3, e_3, t);
  t = i_3;
  t = o_75(t);
  g_3 = t;
  t = f_3;
  t = isect_MarkVar_0_0(t);
  t = g_3;
  return(t);
}
ATerm mark_choice_1_0 (ATerm k_75 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL,p_8 = NULL;
  ATerm y_0 (ATerm t)
  {
    ATerm s_3 = NULL,t_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,q_8 = NULL;
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
    t = k_75(t);
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, x_3, w_3);
    q_8 = t;
    t = SSLsetAnnotations(q_8, s_3);
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm z_3 = NULL,b_4 = NULL,c_4 = NULL,i_4 = NULL,n_4 = NULL,s_8 = NULL;
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
    t = k_75(t);
    i_4 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, b_4, i_4);
    s_8 = t;
    t = SSLsetAnnotations(s_8, z_3);
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
  ATerm o_4 = NULL,a_5 = NULL,c_5 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,j_9 = NULL,g_9 = NULL;
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
  g_9 = t;
  t = SSLsetAnnotations(g_9, h_5);
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
  j_9 = t;
  t = SSLsetAnnotations(j_9, c_5);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,w_5 = NULL,x_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,i_6 = NULL,j_6 = NULL,o_9 = NULL,n_9 = NULL,m_9 = NULL;
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
  m_9 = t;
  t = SSLsetAnnotations(m_9, c_6);
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
  n_5 = t;
  t = q_5;
  t = mark_buv_0_0(t);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, p_5, s_5, r_5);
  o_9 = t;
  t = SSLsetAnnotations(o_9, n_5);
  t_5 = t;
  t = m_5;
  t = isect_MarkVar_0_0(t);
  t = t_5;
  return(t);
}
ATerm alltd_1_0 (ATerm r_77 (ATerm), ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_77(t);
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
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
  ATerm j_10 = NULL,l_10 = NULL,p_10 = NULL,s_10 = NULL;
  l_10 = t;
  if(match_cons(t, sym_CallT_3))
    {
      p_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
      j_10 = ATgetArgument(t, 2);
      {
        ATerm s_0 = NULL,t_0 = NULL,w_0 = NULL,i_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL,j_2 = NULL,n_2 = NULL,p_2 = NULL,r_2 = NULL,s_2 = NULL,u_2 = NULL,a_3 = NULL,x_9 = NULL,w_9 = NULL,s_9 = NULL;
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
        w_9 = t;
        t = SSLsetAnnotations(w_9, r_1);
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
        x_9 = t;
        t = SSLsetAnnotations(x_9, t_0);
        p_1 = t;
        t = s_0;
        t = isect_MarkVar_0_0(t);
        t = p_1;
      }
    }
  else
    {
      ATerm a_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,j_4 = NULL,m_4 = NULL,c_10 = NULL,z_9 = NULL;
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
      c_10 = t;
      t = SSLsetAnnotations(c_10, d_4);
      h_4 = t;
      t = a_4;
      t = isect_MarkVar_0_0(t);
      t = h_4;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm d_7 (ATerm i_21, ATerm j_21, ATerm k_21, ATerm t)
{
  ATerm v_10 = NULL;
  ATerm b_3 (ATerm t)
  {
    t = j_21;
    t = map_1_0(IntroduceBound_0_0, t);
    t = k_21;
    t = mark_build_vars_0_0(t);
    if(((v_10 != NULL) && (v_10 != t)))
      _fail(t);
    else
      v_10 = t;
    return(t);
  }
  t = scope_2_0(z_2, b_3, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, i_21, j_21, not_null(v_10));
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm h_3 (ATerm t)
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
ATerm l_3 (ATerm t)
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
        ATerm m_11 = NULL,o_11 = NULL,p_11 = NULL,r_11 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_11 = ATgetArgument(t, 0);
            t = m_11;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_11 = ATgetArgument(t, 0);
                o_11 = ATgetArgument(t, 1);
                p_11 = ATgetArgument(t, 2);
                r_11 = ATgetArgument(t, 3);
                t = p_11;
                t = map_1_0(p_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_11 = ATgetArgument(t, 0);
                    o_11 = ATgetArgument(t, 1);
                    p_11 = ATgetArgument(t, 2);
                    r_11 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_11;
                t = map_1_0(u_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm d_12 = NULL;
  ATerm k_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_12 = ATgetArgument(t, 0);
          {
            ATerm o_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_14);
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
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_12 = ATgetArgument(t, 0);
          {
            ATerm r_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_14);
      t = s_12;
    }
  else
    {
      t = p_14;
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
ATerm e_7 (ATerm c_21, ATerm g_21, ATerm e_21, ATerm t)
{
  ATerm c_11 = NULL,e_11 = NULL,f_11 = NULL;
  ATerm d_3 (ATerm t)
  {
    t = c_21;
    t = free_vars_3_0(h_3, l_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = c_21;
    t = mark_match_vars_0_0(t);
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    t = e_21;
    t = mark_buv_0_0(t);
    if(((e_11 != NULL) && (e_11 != t)))
      _fail(t);
    else
      e_11 = t;
    t = g_21;
    t = mark_build_vars_0_0(t);
    if(((f_11 != NULL) && (f_11 != t)))
      _fail(t);
    else
      f_11 = t;
    return(t);
  }
  t = scope_2_0(c_3, d_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_11), not_null(f_11), not_null(e_11)));
  return(t);
}
ATerm v_3 (ATerm t)
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
  ATerm s_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = s_14;
      {
        ATerm h_13 = NULL,i_13 = NULL,n_13 = NULL,o_13 = NULL;
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
                i_13 = ATgetArgument(t, 1);
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
                    i_13 = ATgetArgument(t, 1);
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
  ATerm w_13 = NULL;
  ATerm b_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_13 = ATgetArgument(t, 0);
          {
            ATerm l_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_15);
      t = w_13;
    }
  else
    {
      t = b_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_13;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm l_14 = NULL;
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_14 = ATgetArgument(t, 0);
          {
            ATerm x_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_15);
      t = l_14;
    }
  else
    {
      t = p_15;
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
ATerm f_7 (ATerm w_20, ATerm a_21, ATerm y_20, ATerm t)
{
  ATerm y_12 = NULL,c_13 = NULL,d_13 = NULL;
  ATerm k_4 (ATerm t)
  {
    t = w_20;
    t = free_vars_3_0(l_4, p_4, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = w_20;
    t = mark_match_vars_0_0(t);
    if(((y_12 != NULL) && (y_12 != t)))
      _fail(t);
    else
      y_12 = t;
    t = y_20;
    t = mark_buv_0_0(t);
    if(((c_13 != NULL) && (c_13 != t)))
      _fail(t);
    else
      c_13 = t;
    t = a_21;
    t = mark_build_vars_0_0(t);
    if(((d_13 != NULL) && (d_13 != t)))
      _fail(t);
    else
      d_13 = t;
    return(t);
  }
  t = scope_2_0(v_3, k_4, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_12), not_null(d_13), not_null(c_13)));
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm p_16 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_16);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      {
        ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_16 = ATgetArgument(t, 0);
            t = r_16;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                r_16 = ATgetArgument(t, 0);
                s_16 = ATgetArgument(t, 1);
                t_16 = ATgetArgument(t, 2);
                u_16 = ATgetArgument(t, 3);
                t = t_16;
                t = map_1_0(u_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    r_16 = ATgetArgument(t, 0);
                    s_16 = ATgetArgument(t, 1);
                    t_16 = ATgetArgument(t, 2);
                    u_16 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = t_16;
                t = map_1_0(v_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm i_17 = NULL;
  ATerm b_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_17 = ATgetArgument(t, 0);
          {
            ATerm e_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_16);
      t = i_17;
    }
  else
    {
      t = b_16;
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
ATerm v_4 (ATerm t)
{
  ATerm x_17 = NULL;
  ATerm h_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_17 = ATgetArgument(t, 0);
          {
            ATerm l_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_16);
      t = x_17;
    }
  else
    {
      t = h_16;
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
ATerm w_4 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm l_22 = NULL;
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_22 = ATgetArgument(t, 0);
          {
            ATerm q_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_16);
      t = l_22;
    }
  else
    {
      t = n_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_22;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm o_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_22);
  return(t);
}
ATerm e_5 (ATerm t)
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
        ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_22 = ATgetArgument(t, 0);
            t = w_22;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                w_22 = ATgetArgument(t, 0);
                x_22 = ATgetArgument(t, 1);
                y_22 = ATgetArgument(t, 2);
                z_22 = ATgetArgument(t, 3);
                t = y_22;
                t = map_1_0(i_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    w_22 = ATgetArgument(t, 0);
                    x_22 = ATgetArgument(t, 1);
                    y_22 = ATgetArgument(t, 2);
                    z_22 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = y_22;
                t = map_1_0(o_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm e_24 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_24 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_16);
      t = e_24;
    }
  else
    {
      t = x_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_24;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm u_24 = NULL;
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_24 = ATgetArgument(t, 0);
          {
            ATerm f_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_17);
      t = u_24;
    }
  else
    {
      t = a_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_24;
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,k_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      k_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
      s_15 = ATgetArgument(t, 2);
      {
        ATerm a_16 = NULL,f_16 = NULL,i_16 = NULL,k_16 = NULL;
        t = s_15;
        if(match_cons(t, sym_Rule_3))
          {
            g_15 = ATgetArgument(t, 0);
            h_15 = ATgetArgument(t, 1);
            i_15 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = s_15;
        t = free_vars_3_0(s_4, t_4, tboundin_3_0, t);
        a_16 = t;
        {
          ATerm x_4 (ATerm t)
          {
            t = a_16;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = g_15;
            t = mark_match_vars_0_0(t);
            if(((f_16 != NULL) && (f_16 != t)))
              _fail(t);
            else
              f_16 = t;
            t = i_15;
            t = mark_buv_0_0(t);
            if(((i_16 != NULL) && (i_16 != t)))
              _fail(t);
            else
              i_16 = t;
            t = h_15;
            t = mark_build_vars_0_0(t);
            if(((k_16 != NULL) && (k_16 != t)))
              _fail(t);
            else
              k_16 = t;
            return(t);
          }
          t = scope_2_0(w_4, x_4, t);
          t = (ATerm) ATmakeAppl(sym_RDef_3, k_15, r_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_16), not_null(k_16), not_null(i_16)));
        }
      }
    }
  else
    {
      ATerm t_18 = NULL,u_18 = NULL,w_18 = NULL,z_18 = NULL,e_19 = NULL,i_19 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          k_15 = ATgetArgument(t, 0);
          r_15 = ATgetArgument(t, 1);
          s_15 = ATgetArgument(t, 2);
          t_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = t_15;
      if(match_cons(t, sym_Rule_3))
        {
          u_15 = ATgetArgument(t, 0);
          v_15 = ATgetArgument(t, 1);
          w_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_15;
      t = map_1_0(y_4, t);
      t_18 = t;
      t = t_15;
      t = free_vars_3_0(z_4, e_5, tboundin_3_0, t);
      i_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_19, t_18);
      t = diff_0_0(t);
      u_18 = t;
      {
        ATerm y_5 (ATerm t)
        {
          t = t_18;
          t = map_1_0(IntroduceBound_0_0, t);
          t = u_18;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = u_15;
          t = mark_match_vars_0_0(t);
          if(((w_18 != NULL) && (w_18 != t)))
            _fail(t);
          else
            w_18 = t;
          t = w_15;
          t = mark_buv_0_0(t);
          if(((z_18 != NULL) && (z_18 != t)))
            _fail(t);
          else
            z_18 = t;
          t = v_15;
          t = mark_build_vars_0_0(t);
          if(((e_19 != NULL) && (e_19 != t)))
            _fail(t);
          else
            e_19 = t;
          return(t);
        }
        t = scope_2_0(v_5, y_5, t);
        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_15, r_15, s_15, (ATerm) ATmakeAppl(sym_Rule_3, not_null(w_18), not_null(e_19), not_null(z_18)));
      }
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,d_25 = NULL;
  x_24 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_24);
  y_24 = t;
  t = term_j_17;
  d_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_24), term_j_17);
  t = v_7(g_6, y_24, d_25, t);
  t = x_24;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm a_26 = NULL;
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_26 = ATgetArgument(t, 0);
          {
            ATerm m_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_17);
      t = a_26;
    }
  else
    {
      t = k_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_26;
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm g_7 (ATerm u_19, ATerm v_19, ATerm w_19, ATerm y_19, ATerm t)
{
  ATerm f_25 = NULL,r_25 = NULL;
  t = w_19;
  t = map_1_0(h_6, t);
  f_25 = t;
  {
    ATerm n_6 (ATerm t)
    {
      t = f_25;
      t = map_1_0(IntroduceBound_0_0, t);
      t = y_19;
      t = mark_buv_0_0(t);
      if(((r_25 != NULL) && (r_25 != t)))
        _fail(t);
      else
        r_25 = t;
      return(t);
    }
    t = scope_2_0(m_6, n_6, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, u_19, v_19, w_19, not_null(r_25));
  }
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,p_27 = NULL,l_28 = NULL;
  f_27 = t;
  if(match_cons(t, sym__2))
    {
      g_27 = ATgetArgument(t, 0);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_27;
  if(match_cons(t, sym_Undefined_0))
    {
      t = g_27;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_n_17;
        }
      else
        {
          t = term_n_17;
        }
    }
  else
    {
      ATerm o_17 = t;
      int p_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm q_17 = ATgetArgument(t, 0);
              l_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(p_17);
          t = g_27;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_n_17;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  h_27 = ATgetArgument(t, 0);
                  i_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm r_17 = t;
                int s_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, i_27, l_28);
                    {
                      ATerm t_17 = t;
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
                          t = t_17;
                        }
                      t = (ATerm) ATmakeAppl(sym_Defined_2, h_27, term_w_17);
                    }
                    ;
                    LocalPopChoice(s_17);
                  }
                else
                  {
                    t = r_17;
                    t = l_28;
                    if((i_27 != t))
                      {
                        _fail(t);
                      }
                    t = g_27;
                  }
              }
            }
        }
      else
        {
          t = o_17;
          t = g_27;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_n_17;
        }
    }
  return(t);
}
ATerm h_7 (ATerm f_18, ATerm g_18, ATerm e_18, ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t = term_f_14;
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, f_18);
  t = l_8(v_28, f_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_28 = ATgetFirst((ATermList) t);
      {
        ATerm y_17 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_18, t_28);
  t = CompareEntries_0_0(t);
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_18, (ATerm) ATinsert(CheckATermList(e_18), u_28));
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm n_29 = NULL,s_29 = NULL,t_29 = NULL,w_29 = NULL,x_29 = NULL;
  x_29 = t;
  if(match_cons(t, sym__2))
    {
      n_29 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
      t = s_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_29 = ATgetFirst((ATermList) t);
          w_29 = (ATerm) ATgetNext((ATermList) t);
          t = t_29;
          {
            ATerm z_17 = t;
            int a_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm b_18 = ATgetArgument(t, 0);
                    ATerm c_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(a_18);
                t = n_29;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = x_29;
                  }
                else
                  {
                    ATerm d_18 = t;
                    int j_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = x_29;
                        t = h_7(n_29, t_29, w_29, t);
                        ;
                        LocalPopChoice(j_18);
                      }
                    else
                      {
                        t = d_18;
                        t = x_29;
                      }
                  }
              }
            else
              {
                t = z_17;
                t = n_29;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = x_29;
                  }
                else
                  {
                    t = x_29;
                  }
              }
          }
        }
      else
        {
          t = n_29;
          if(match_cons(t, sym_Scopes_0))
            {
              t = x_29;
            }
          else
            {
              t = x_29;
            }
        }
    }
  else
    {
      t = x_29;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  t = map_1_0(q_6, t);
  k_29 = t;
  t = term_f_14;
  m_29 = t;
  t = SSL_table_destroy(m_29);
  t = term_f_14;
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_14, k_29);
  t = i_7(l_29, k_29, t);
  t = k_29;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,n_31 = NULL;
  n_31 = t;
  {
    ATerm k_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm n_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_18);
        t = n_31;
      }
    else
      {
        t = k_18;
        {
          ATerm o_18 = t;
          int p_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm q_18 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(p_18);
              t = n_31;
            }
          else
            {
              t = o_18;
              {
                ATerm r_18 = t;
                int v_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm y_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(v_18);
                    t = n_31;
                  }
                else
                  {
                    t = r_18;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm a_19 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = n_31;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    d_31 = t;
    t = n_31;
    t = SRTS_one(mark_buv_0_0, t);
    e_31 = t;
    t = d_31;
    t = isect_MarkVar_0_0(t);
    t = e_31;
  }
  return(t);
}
ATerm i_7 (ATerm h_23, ATerm g_23, ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm r_31 = NULL,v_31 = NULL;
    if(match_cons(t, sym__2))
      {
        r_31 = ATgetArgument(t, 0);
        v_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(h_23, r_31, v_31);
    t = (ATerm) ATmakeAppl(sym__3, h_23, r_31, v_31);
    return(t);
  }
  t = g_23;
  t = map_1_0(r_6, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_31 = NULL;
  ATerm s_6 (ATerm t)
  {
    ATerm z_31 = NULL,a_32 = NULL;
    z_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_31), z_31);
    t = l_8(not_null(y_31), z_31, t);
    a_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_31, a_32);
    return(t);
  }
  if(((y_31 != NULL) && (y_31 != t)))
    _fail(t);
  else
    y_31 = t;
  t = SSL_table_keys(y_31);
  t = map_1_0(s_6, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_f_14;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm s_18, ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,u_32 = NULL;
  t = save_MarkVar_0_0(t);
  {
    ATerm t_6 (ATerm t)
    {
      ATerm t_33 (ATerm v_32, ATerm t)
      {
        ATerm x_32 = NULL,b_33 = NULL,e_33 = NULL,f_33 = NULL;
        t = v_32;
        if(match_cons(t, sym__2))
          {
            ATerm b_19 = ATgetArgument(t, 0);
            x_32 = b_19;
            if(match_cons(b_19, sym_Var_1))
              {
                b_33 = ATgetArgument(b_19, 0);
              }
            else
              _fail(t);
            {
              ATerm c_19 = ATgetArgument(t, 1);
              if(((ATgetType(c_19) == AT_LIST) && !(ATisEmpty(c_19))))
                {
                  ATerm d_19 = ATgetFirst((ATermList) c_19);
                  if(match_cons(d_19, sym_Defined_2))
                    {
                      e_33 = ATgetArgument(d_19, 0);
                      {
                        ATerm f_19 = ATgetArgument(d_19, 1);
                        if((ATgetSymbol((ATermAppl) f_19) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  f_33 = (ATerm) ATgetNext((ATermList) c_19);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_18;
        {
          ATerm w_6 (ATerm t)
          {
            if((b_33 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(w_6, t);
          t = (ATerm) ATmakeAppl(sym__2, x_32, (ATerm) ATinsert(CheckATermList(f_33), (ATerm) ATmakeAppl(sym_Defined_2, e_33, term_w_17)));
        }
        return(t);
      }
      ATerm h_33 = NULL,j_33 = NULL;
      j_33 = t;
      {
        ATerm g_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                h_33 = ATgetArgument(t, 0);
                {
                  ATerm m_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_19);
            t = h_33;
            if(match_cons(t, sym_Scopes_0))
              {
                t = j_33;
              }
            else
              {
                ATerm n_19 = t;
                int o_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = t_33(j_33, t);
                    ;
                    LocalPopChoice(o_19);
                  }
                else
                  {
                    t = n_19;
                    t = j_33;
                  }
              }
          }
        else
          {
            t = g_19;
            {
              ATerm p_19 = t;
              int q_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_33(j_33, t);
                  ;
                  LocalPopChoice(q_19);
                }
              else
                {
                  t = p_19;
                  t = j_33;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(t_6, t);
    p_32 = t;
    t = term_f_14;
    u_32 = t;
    t = SSL_table_destroy(u_32);
    t = term_f_14;
    q_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_14, p_32);
    t = i_7(q_32, p_32, t);
    t = p_32;
  }
  return(t);
}
ATerm tboundin_3_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
  o_37 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_37 = ATgetArgument(t, 0);
      l_37 = ATgetArgument(t, 1);
      {
        ATerm k_6 = NULL,o_6 = NULL,p_6 = NULL,w_14 = NULL;
        t = SSLgetAnnotations(o_37);
        k_6 = t;
        t = p_37;
        t = p_105(t);
        o_6 = t;
        t = l_37;
        t = n_105(t);
        p_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_6, p_6);
        w_14 = t;
        t = SSLsetAnnotations(w_14, k_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          p_37 = ATgetArgument(t, 0);
          l_37 = ATgetArgument(t, 1);
          m_37 = ATgetArgument(t, 2);
          n_37 = ATgetArgument(t, 3);
          {
            ATerm k_8 = NULL,v_8 = NULL,w_8 = NULL,y_8 = NULL,a_9 = NULL,x_14 = NULL;
            t = SSLgetAnnotations(o_37);
            k_8 = t;
            t = p_37;
            t = p_105(t);
            v_8 = t;
            t = l_37;
            t = p_105(t);
            w_8 = t;
            t = m_37;
            t = p_105(t);
            y_8 = t;
            t = n_37;
            t = n_105(t);
            a_9 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_8, w_8, y_8, a_9);
            x_14 = t;
            t = SSLsetAnnotations(x_14, k_8);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              p_37 = ATgetArgument(t, 0);
              l_37 = ATgetArgument(t, 1);
              m_37 = ATgetArgument(t, 2);
              n_37 = ATgetArgument(t, 3);
              {
                ATerm b_10 = NULL,k_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,e_15 = NULL;
                t = SSLgetAnnotations(o_37);
                b_10 = t;
                t = p_37;
                t = p_105(t);
                k_10 = t;
                t = l_37;
                t = p_105(t);
                m_10 = t;
                t = m_37;
                t = p_105(t);
                n_10 = t;
                t = n_37;
                t = n_105(t);
                o_10 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, k_10, m_10, n_10, o_10);
                e_15 = t;
                t = SSLsetAnnotations(e_15, b_10);
              }
            }
          else
            {
              ATerm d_11 = NULL,h_11 = NULL,f_15 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  p_37 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_37);
              d_11 = t;
              t = p_37;
              t = n_105(t);
              h_11 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_11);
              f_15 = t;
              t = SSLsetAnnotations(f_15, d_11);
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
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_19);
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
  ATerm a_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_39 = ATgetArgument(t, 0);
          {
            ATerm d_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_20);
      t = a_39;
    }
  else
    {
      t = a_20;
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
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_39 = ATgetArgument(t, 0);
          {
            ATerm g_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_20);
      t = n_39;
    }
  else
    {
      t = e_20;
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
  ATerm i_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = i_20;
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
                t = map_1_0(u_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm d_41 = NULL;
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_41 = ATgetArgument(t, 0);
          {
            ATerm n_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_20);
      t = d_41;
    }
  else
    {
      t = l_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_41;
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm t_41 = NULL;
  ATerm o_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_41 = ATgetArgument(t, 0);
          {
            ATerm r_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_20);
      t = t_41;
    }
  else
    {
      t = o_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_41;
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
            ATerm b_21 = ATgetArgument(t, 1);
          }
          {
            ATerm d_21 = ATgetArgument(t, 2);
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
            ATerm f_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_40;
    }
  return(t);
}
ATerm n_7 (ATerm t_83 (ATerm), ATerm s_30, ATerm r_30, ATerm t)
{
  ATerm w_42 (ATerm t)
  {
    ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
    q_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_30;
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
          ATerm h_21 = t;
          int m_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_42;
              {
                ATerm y_7 (ATerm t)
                {
                  t = r_30;
                  return(t);
                }
                t = o_7(t_83, y_7, r_42, s_42, t);
                t = w_42(t);
              }
              ;
              LocalPopChoice(m_21);
            }
          else
            {
              t = h_21;
              {
                ATerm x_11 = NULL,k_12 = NULL,c_16 = NULL;
                t = SSLgetAnnotations(q_42);
                x_11 = t;
                t = s_42;
                t = w_42(t);
                k_12 = t;
                t = (ATerm) ATinsert(CheckATermList(k_12), r_42);
                c_16 = t;
                t = SSLsetAnnotations(c_16, x_11);
              }
            }
        }
      }
    return(t);
  }
  t = s_30;
  t = w_42(t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm t)
{
  ATerm d_43 = NULL,f_43 = NULL,g_43 = NULL;
  d_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_43;
      t = j_86(t);
    }
  else
    {
      ATerm p_43 = NULL,q_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_43 = ATgetFirst((ATermList) t);
          g_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_43;
      t = l_86(t);
      p_43 = t;
      t = g_43;
      t = foldr_3_0(j_86, k_86, l_86, t);
      q_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_43, q_43);
      t = k_86(t);
    }
  return(t);
}
ATerm o_7 (ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm w_30, ATerm v_30, ATerm t)
{
  t = x_83(t);
  {
    ATerm z_7 (ATerm t)
    {
      ATerm w_43 = NULL;
      w_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_30, w_43);
      t = w_83(t);
      return(t);
    }
    t = fetch_1_0(z_7, t);
    t = v_30;
  }
  return(t);
}
ATerm p_7 (ATerm o_83 (ATerm), ATerm q_30, ATerm p_30, ATerm t)
{
  ATerm h_45 (ATerm t)
  {
    ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
    b_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_45;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_45 = ATgetFirst((ATermList) t);
            d_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_21 = t;
          int y_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_45;
              {
                ATerm b_8 (ATerm t)
                {
                  t = p_30;
                  return(t);
                }
                t = o_7(o_83, b_8, c_45, d_45, t);
                t = h_45(t);
              }
              ;
              LocalPopChoice(y_21);
            }
          else
            {
              t = n_21;
              {
                ATerm z_12 = NULL,e_13 = NULL,g_16 = NULL;
                t = SSLgetAnnotations(b_45);
                z_12 = t;
                t = d_45;
                t = h_45(t);
                e_13 = t;
                t = (ATerm) ATinsert(CheckATermList(e_13), c_45);
                g_16 = t;
                t = SSLsetAnnotations(g_16, z_12);
              }
            }
        }
      }
    return(t);
  }
  t = q_30;
  t = h_45(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm p_46 (ATerm t)
  {
    ATerm k_46 = NULL,n_46 = NULL,o_46 = NULL;
    o_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_46 = ATgetFirst((ATermList) t);
        n_46 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_14 = NULL,n_14 = NULL,m_16 = NULL;
          t = SSLgetAnnotations(o_46);
          a_14 = t;
          t = n_46;
          t = p_46(t);
          n_14 = t;
          t = (ATerm) ATinsert(CheckATermList(n_14), k_46);
          m_16 = t;
          t = SSLsetAnnotations(m_16, a_14);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_46;
        t = f_80(t);
      }
    return(t);
  }
  t = p_46(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_45 = NULL,n_45 = NULL,o_45 = NULL;
  k_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_45;
    }
  else
    {
      ATerm n_8 (ATerm t)
      {
        t = not_null(o_45);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_45 = ATgetFirst((ATermList) t);
          if(((o_45 != NULL) && (o_45 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_45;
      t = at_end_1_0(n_8, t);
    }
  return(t);
}
ATerm o_47 (ATerm b_47, ATerm t)
{
  ATerm c_47 = NULL;
  t = SSL_explode_term(b_47);
  if(match_cons(t, sym__2))
    {
      ATerm z_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_47;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
  i_47 = t;
  if(match_cons(t, sym__2))
    {
      g_47 = ATgetArgument(t, 0);
      h_47 = ATgetArgument(t, 1);
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_8 (ATerm t)
            {
              t = h_47;
              return(t);
            }
            t = g_47;
            t = at_end_1_0(r_8, t);
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            t = o_47(i_47, t);
          }
      }
    }
  else
    {
      t = o_47(i_47, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm t)
{
  ATerm a_48 (ATerm t)
  {
    ATerm c_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_81(t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = c_22;
        {
          ATerm p_47 = NULL,q_47 = NULL,u_47 = NULL,v_47 = NULL,x_47 = NULL,z_47 = NULL,v_17 = NULL;
          t = t_81(t);
          z_47 = t;
          if(match_cons(t, sym__2))
            {
              q_47 = ATgetArgument(t, 0);
              u_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_47);
          p_47 = t;
          t = q_47;
          t = v_81(t);
          v_47 = t;
          t = u_47;
          t = a_48(t);
          x_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_47, x_47);
          v_17 = t;
          t = SSLsetAnnotations(v_17, p_47);
          t = u_81(t);
        }
      }
    return(t);
  }
  t = a_48(t);
  return(t);
}
ATerm t_8 (ATerm t)
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
ATerm u_8 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,d_49 = NULL,h_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
        {
          u_48 = ATgetFirst((ATermList) m_22);
          v_48 = (ATerm) ATgetNext((ATermList) m_22);
        }
      else
        _fail(t);
      {
        ATerm n_22 = ATgetArgument(t, 1);
        if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
          {
            d_49 = ATgetFirst((ATermList) n_22);
            h_49 = (ATerm) ATgetNext((ATermList) n_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_48, d_49), (ATerm) ATmakeAppl(sym__2, v_48, h_49));
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm k_49 = NULL,n_49 = NULL;
  if(match_cons(t, sym__2))
    {
      k_49 = ATgetArgument(t, 0);
      n_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_49), k_49);
  return(t);
}
ATerm t_7 (ATerm o_577, ATerm t_577, ATerm j_55, ATerm t)
{
  ATerm c_48 = NULL,i_48 = NULL,l_48 = NULL,o_48 = NULL;
  t = SSL_explode_term(t_577);
  if(match_cons(t, sym__2))
    {
      c_48 = ATgetArgument(t, 0);
      l_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_577);
  if(match_cons(t, sym__2))
    {
      if((c_48 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_48, l_48);
  t = genzip_4_0(t_8, u_8, x_8, _id, t);
  o_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_48, j_55);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t)
{
  ATerm p_49 (ATerm t)
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_89(t);
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = m_89(t);
        t = p_49(t);
      }
    return(t);
  }
  t = p_49(t);
  return(t);
}
ATerm for_3_0 (ATerm o_89 (ATerm), ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm t)
{
  t = o_89(t);
  t = while_not_2_0(p_89, q_89, t);
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm n_50 = NULL;
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_50);
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_19 = NULL;
  r_50 = t;
  if(match_cons(t, sym__2))
    {
      p_50 = ATgetArgument(t, 0);
      q_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_50);
  o_50 = t;
  t = q_50;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_50, q_50);
  s_19 = t;
  t = SSLsetAnnotations(s_19, o_50);
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,s_52 = NULL,u_52 = NULL,v_52 = NULL;
  p_52 = t;
  if(match_cons(t, sym__2))
    {
      q_52 = ATgetArgument(t, 0);
      s_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_52 = ATgetFirst((ATermList) t);
      v_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_53(q_52, s_52, p_52, t);
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_52), u_52), v_52);
          }
      }
    }
  else
    {
      t = k_53(q_52, s_52, p_52, t);
    }
  return(t);
}
ATerm k_53 (ATerm s_50, ATerm t_50, ATerm v_50, ATerm t)
{
  ATerm y_50 = NULL,f_51 = NULL,g_25 = NULL,j_51 = NULL,m_51 = NULL,o_51 = NULL,s_51 = NULL;
  t = SSLgetAnnotations(v_50);
  y_50 = t;
  t = t_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_51 = ATgetFirst((ATermList) t);
      s_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_51;
  if(match_cons(t, sym__2))
    {
      m_51 = ATgetArgument(t, 0);
      o_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_51;
        if((m_51 != t))
          {
            _fail(t);
          }
        t = s_51;
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = t_50;
        t = t_7(m_51, o_51, s_51, t);
      }
    f_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_50, f_51);
    g_25 = t;
    t = SSLsetAnnotations(g_25, y_50);
  }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm i_53 = NULL;
  if(match_cons(t, sym__2))
    {
      i_53 = ATgetArgument(t, 0);
      if((i_53 != ATgetArgument(t, 1)))
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
  ATerm e_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(z_8, b_9, c_9, t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = e_23;
      {
        ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
        b_53 = t;
        if(match_cons(t, sym__2))
          {
            c_53 = ATgetArgument(t, 0);
            d_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_53;
        t = p_7(d_9, c_53, d_53, t);
      }
    }
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  if(match_cons(t, sym__2))
    {
      y_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(k_9, y_14, z_14, t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      a_15 = ATgetArgument(t, 0);
      if((a_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(q_9, m_15, n_15, t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm o_15 = NULL;
  if(match_cons(t, sym__2))
    {
      o_15 = ATgetArgument(t, 0);
      if((o_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm n_54 (ATerm t)
  {
    ATerm j_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_103(t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = j_23;
        {
          ATerm m_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_53 = NULL,r_53 = NULL,t_14 = NULL,u_14 = NULL;
              m_53 = t;
              t = y_103(t);
              r_53 = t;
              t = m_53;
              {
                ATerm e_9 (ATerm t)
                {
                  ATerm z_53 = NULL;
                  t = n_54(t);
                  z_53 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_53, r_53);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_103(e_9, n_54, f_9, t);
                u_14 = t;
                t = SSL_explode_term(u_14);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_23 = ATgetArgument(t, 0);
                    t_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_14;
                t = foldr_3_0(h_9, i_9, _id, t);
              }
              ;
              LocalPopChoice(n_23);
            }
          else
            {
              t = m_23;
              {
                ATerm c_15 = NULL,d_15 = NULL;
                d_15 = t;
                t = SSL_explode_term(d_15);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_23 = ATgetArgument(t, 0);
                    c_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_15;
                t = foldr_3_0(l_9, p_9, n_54, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_54(t);
  return(t);
}
ATerm r_9 (ATerm t)
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
ATerm t_9 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm e_56 = NULL,g_56 = NULL,h_56 = NULL,l_56 = NULL;
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
                g_56 = ATgetArgument(t, 1);
                h_56 = ATgetArgument(t, 2);
                l_56 = ATgetArgument(t, 3);
                t = h_56;
                t = map_1_0(u_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    e_56 = ATgetArgument(t, 0);
                    g_56 = ATgetArgument(t, 1);
                    h_56 = ATgetArgument(t, 2);
                    l_56 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = h_56;
                t = map_1_0(v_9, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm b_57 = NULL;
  ATerm s_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_57 = ATgetArgument(t, 0);
          {
            ATerm x_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_23);
      t = b_57;
    }
  else
    {
      t = s_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_57;
    }
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm a_58 = NULL;
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_58 = ATgetArgument(t, 0);
          {
            ATerm b_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_23);
      t = a_58;
    }
  else
    {
      t = y_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_58;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm x_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,e_55 = NULL,f_55 = NULL,k_55 = NULL,l_55 = NULL,p_55 = NULL,t_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,b_56 = NULL,z_26 = NULL,x_26 = NULL;
  b_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_55 = ATgetArgument(t, 0);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_56);
  t_55 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, w_55, x_55);
  x_26 = t;
  t = SSLsetAnnotations(x_26, t_55);
  y_55 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_55 = ATgetArgument(t, 0);
      {
        ATerm c_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_55;
  t = free_vars_3_0(r_9, t_9, tboundin_3_0, t);
  x_54 = t;
  t = undefine_unbound_MarkVar_0_1(x_54, t);
  z_54 = t;
  t = y_55;
  if(match_cons(t, sym_Let_2))
    {
      c_55 = ATgetArgument(t, 0);
      e_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_55);
  b_55 = t;
  t = c_55;
  {
    ATerm y_9 (ATerm t)
    {
      ATerm f_58 = NULL,g_58 = NULL,k_58 = NULL;
      f_58 = t;
      t = term_f_14;
      k_58 = t;
      t = SSL_table_destroy(k_58);
      t = term_f_14;
      g_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_14, z_54);
      t = i_7(g_58, z_54, t);
      t = f_58;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(y_9, t);
    f_55 = t;
    t = term_f_14;
    p_55 = t;
    t = SSL_table_destroy(p_55);
    t = term_f_14;
    l_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_14, z_54);
    t = i_7(l_55, z_54, t);
    t = e_55;
    t = mark_buv_0_0(t);
    k_55 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, f_55, k_55);
    z_26 = t;
    t = SSLsetAnnotations(z_26, b_55);
  }
  return(t);
}
ATerm v_7 (ATerm v_75 (ATerm), ATerm w_21, ATerm u_21, ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
  r_58 = t;
  t = v_75(t);
  o_58 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_58, w_21, u_21);
  t = m_8(o_58, w_21, u_21, t);
  {
    ATerm d_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_58 = NULL;
        t = term_g_24;
        u_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_58, term_g_24);
        t = l_8(o_58, u_58, t);
        ;
        LocalPopChoice(f_24);
      }
    else
      {
        t = d_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_58 = ATgetFirst((ATermList) t);
        q_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_24;
    s_58 = t;
    t = (ATerm) ATinsert(CheckATermList(q_58), (ATerm) ATinsert(CheckATermList(p_58), w_21));
    t_58 = t;
    t = SSL_table_put(o_58, s_58, t_58);
    t = r_58;
  }
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
  v_58 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_58);
  w_58 = t;
  t = term_j_24;
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, v_58), term_j_24);
  t = v_7(a_10, w_58, x_58, t);
  t = v_58;
  return(t);
}
ATerm w_7 (ATerm j_22, ATerm k_22, ATerm t)
{
  ATerm y_58 = NULL,c_59 = NULL;
  c_59 = t;
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
        t = l_8(j_22, k_22, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_24 = ATgetFirst((ATermList) t);
            y_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_24);
        t = SSL_table_put(j_22, k_22, y_58);
        t = (ATerm) ATmakeAppl(sym__3, j_22, k_22, y_58);
      }
    else
      {
        t = k_24;
        t = SSL_table_remove(j_22, k_22);
        t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
      }
    t = c_59;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_75 (ATerm), ATerm t)
{
  ATerm d_59 = NULL,f_59 = NULL,i_59 = NULL,j_59 = NULL,m_59 = NULL;
  j_59 = t;
  t = s_75(t);
  i_59 = t;
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_59 = NULL;
        t = term_g_24;
        n_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_59, term_g_24);
        t = l_8(i_59, n_59, t);
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_59 = ATgetFirst((ATermList) t);
        d_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_g_24;
    m_59 = t;
    t = SSL_table_put(i_59, m_59, d_59);
    t = f_59;
    {
      ATerm d_10 (ATerm t)
      {
        ATerm q_59 = NULL;
        q_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_59, q_59);
        t = w_7(i_59, q_59, t);
        return(t);
      }
      t = map_1_0(d_10, t);
      t = j_59;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm o_88 (ATerm), ATerm p_88 (ATerm), ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_88(t);
      t = p_88(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      t = p_88(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_75 (ATerm), ATerm t)
{
  ATerm s_59 = NULL,w_59 = NULL,y_59 = NULL,z_59 = NULL,d_60 = NULL;
  w_59 = t;
  t = r_75(t);
  s_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_59, term_g_24);
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_60 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_24 = ATgetArgument(t, 0);
            ATerm v_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_24;
        i_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_59, term_g_24);
        t = l_8(s_59, i_60, t);
        ;
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        t = (ATerm) ATempty;
      }
    y_59 = t;
    t = term_g_24;
    z_59 = t;
    t = (ATerm) ATinsert(CheckATermList(y_59), (ATerm) ATempty);
    d_60 = t;
    t = SSL_table_put(s_59, z_59, d_60);
    t = w_59;
  }
  return(t);
}
ATerm scope_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm e_10 (ATerm t)
  {
    t = end_scope_1_0(t_75, t);
    return(t);
  }
  t = begin_scope_1_0(t_75, t);
  t = restore_always_2_0(u_75, e_10, t);
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm j_60 = NULL,o_60 = NULL,q_60 = NULL,u_60 = NULL,x_60 = NULL,c_27 = NULL;
  x_60 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_60 = ATgetArgument(t, 0);
      q_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_60);
  j_60 = t;
  t = q_60;
  {
    ATerm g_10 (ATerm t)
    {
      ATerm y_60 = NULL;
      y_60 = t;
      t = o_60;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = y_60;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(f_10, g_10, t);
    u_60 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, o_60, u_60);
    c_27 = t;
    t = SSLsetAnnotations(c_27, j_60);
  }
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm w_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,e_27 = NULL;
      b_61 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_61);
      z_60 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_61);
      e_27 = t;
      t = SSLsetAnnotations(e_27, z_60);
      LocalPopChoice(z_24);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = w_24;
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,h_61 = NULL,m_27 = NULL;
            h_61 = t;
            if(match_cons(t, sym_App_2))
              {
                d_61 = ATgetArgument(t, 0);
                e_61 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_61);
            c_61 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, d_61, e_61);
            m_27 = t;
            t = SSLsetAnnotations(m_27, c_61);
            LocalPopChoice(b_25);
            {
              ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,n_27 = NULL;
              u_61 = t;
              if(match_cons(t, sym_App_2))
                {
                  k_61 = ATgetArgument(t, 0);
                  l_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_61);
              j_61 = t;
              t = k_61;
              t = mark_buv_0_0(t);
              s_61 = t;
              t = l_61;
              t = mark_build_vars_0_0(t);
              t_61 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, s_61, t_61);
              n_27 = t;
              t = SSLsetAnnotations(n_27, j_61);
            }
          }
        else
          {
            t = a_25;
            {
              ATerm h_25 = t;
              int k_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,o_27 = NULL;
                  x_61 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      w_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_61);
                  v_61 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, w_61);
                  o_27 = t;
                  t = SSLsetAnnotations(o_27, v_61);
                  LocalPopChoice(k_25);
                  {
                    ATerm a_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,q_27 = NULL;
                    e_62 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        c_62 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(e_62);
                    a_62 = t;
                    t = c_62;
                    t = mark_buv_0_0(t);
                    d_62 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, d_62);
                    q_27 = t;
                    t = SSLsetAnnotations(q_27, a_62);
                  }
                }
              else
                {
                  t = h_25;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm x_7 (ATerm r_22, ATerm s_22, ATerm t_22, ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
  o_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_22, s_22);
  t = l_8(r_22, s_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_25 = ATgetFirst((ATermList) t);
      n_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_62), t_22);
  p_62 = t;
  t = SSL_table_put(r_22, s_22, p_62);
  t = o_62;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  v_62 = t;
  t = term_f_14;
  w_62 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_62);
  x_62 = t;
  t = term_n_25;
  y_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_14, (ATerm)ATmakeAppl(sym_Var_1, v_62), term_n_25);
  t = x_7(w_62, x_62, y_62, t);
  t = v_62;
  return(t);
}
ATerm a_8 (ATerm p_22, ATerm q_22, ATerm t)
{
  ATerm z_62 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_22, q_22);
  t = l_8(p_22, q_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_62 = ATgetFirst((ATermList) t);
      {
        ATerm o_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_62;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm m_64 = NULL,n_64 = NULL;
  m_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,u_17 = NULL;
        t = term_f_14;
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_14, m_64);
        t = a_8(u_17, m_64, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm s_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_25) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            c_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, n_64);
        d_17 = t;
        t = (ATerm) ATinsert(ATempty, c_17);
        e_17 = t;
        t = SSLsetAnnotations(d_17, e_17);
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        {
          ATerm t_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_18 = NULL,i_18 = NULL,l_18 = NULL,x_18 = NULL;
              t = term_f_14;
              x_18 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_f_14, m_64);
              t = a_8(x_18, m_64, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm v_25 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_25) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  h_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, n_64);
              i_18 = t;
              t = (ATerm) ATinsert(ATempty, h_18);
              l_18 = t;
              t = SSLsetAnnotations(i_18, l_18);
              ;
              LocalPopChoice(u_25);
            }
          else
            {
              t = t_25;
              {
                ATerm h_19 = NULL,k_19 = NULL,l_19 = NULL,r_19 = NULL;
                t = term_f_14;
                r_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_14, m_64);
                t = a_8(r_19, m_64, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm w_25 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("c_0", 0, ATtrue)))
                      _fail(t);
                    h_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, n_64);
                k_19 = t;
                t = (ATerm) ATinsert(ATempty, h_19);
                l_19 = t;
                t = SSLsetAnnotations(k_19, l_19);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_27 = NULL;
  ATerm x_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = x_25;
    }
  v_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_64);
  s_64 = t;
  t = t_64;
  t = DeclareBound_0_0(t);
  u_64 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_64);
  w_27 = t;
  t = SSLsetAnnotations(w_27, s_64);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,y_27 = NULL;
      a_65 = t;
      if(match_cons(t, sym_Var_1))
        {
          z_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_65);
      y_64 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, z_64);
      y_27 = t;
      t = SSLsetAnnotations(y_27, y_64);
      LocalPopChoice(c_26);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = b_26;
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,z_27 = NULL;
            e_65 = t;
            if(match_cons(t, sym_App_2))
              {
                c_65 = ATgetArgument(t, 0);
                d_65 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_65);
            b_65 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, c_65, d_65);
            z_27 = t;
            t = SSLsetAnnotations(z_27, b_65);
            LocalPopChoice(e_26);
            {
              ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,b_28 = NULL;
              k_65 = t;
              if(match_cons(t, sym_App_2))
                {
                  g_65 = ATgetArgument(t, 0);
                  h_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_65);
              f_65 = t;
              t = g_65;
              t = mark_buv_0_0(t);
              i_65 = t;
              t = h_65;
              t = mark_build_vars_0_0(t);
              j_65 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, i_65, j_65);
              b_28 = t;
              t = SSLsetAnnotations(b_28, f_65);
            }
          }
        else
          {
            t = d_26;
            {
              ATerm f_26 = t;
              int g_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,c_28 = NULL;
                  n_65 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      m_65 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_65);
                  l_65 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, m_65);
                  c_28 = t;
                  t = SSLsetAnnotations(c_28, l_65);
                  LocalPopChoice(g_26);
                  {
                    ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,d_28 = NULL;
                    r_65 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        p_65 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(r_65);
                    o_65 = t;
                    t = p_65;
                    t = mark_buv_0_0(t);
                    q_65 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, q_65);
                    d_28 = t;
                    t = SSLsetAnnotations(d_28, o_65);
                  }
                }
              else
                {
                  t = f_26;
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
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_66 = NULL,n_66 = NULL;
      m_66 = t;
      if(match_cons(t, sym_Match_1))
        {
          n_66 = ATgetArgument(t, 0);
          {
            ATerm z_19 = NULL,b_20 = NULL,j_28 = NULL;
            t = SSLgetAnnotations(m_66);
            z_19 = t;
            t = n_66;
            t = mark_match_vars_0_0(t);
            b_20 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, b_20);
            j_28 = t;
            t = SSLsetAnnotations(j_28, z_19);
          }
        }
      else
        {
          ATerm h_20 = NULL,j_20 = NULL,k_28 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              n_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_66);
          h_20 = t;
          t = n_66;
          t = mark_build_vars_0_0(t);
          j_20 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, j_20);
          k_28 = t;
          t = SSLsetAnnotations(k_28, h_20);
        }
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
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
              ATerm o_26 = t;
              int p_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  ;
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
                        t = mark_traversal_0_0(t);
                        ;
                        LocalPopChoice(r_26);
                      }
                    else
                      {
                        t = q_26;
                        {
                          ATerm s_26 = t;
                          int t_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL;
                              o_66 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  p_66 = ATgetArgument(t, 0);
                                  q_66 = ATgetArgument(t, 1);
                                  r_66 = ATgetArgument(t, 2);
                                  s_66 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = o_66;
                              t = g_7(p_66, q_66, r_66, s_66, t);
                              ;
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
                                    t = mark_rdef_0_0(t);
                                    ;
                                    LocalPopChoice(w_26);
                                  }
                                else
                                  {
                                    t = v_26;
                                    {
                                      ATerm y_26 = t;
                                      int a_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL;
                                          a_67 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              b_67 = ATgetArgument(t, 0);
                                              t = b_67;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  x_66 = ATgetArgument(t, 0);
                                                  y_66 = ATgetArgument(t, 1);
                                                  z_66 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = a_67;
                                              t = f_7(x_66, y_66, z_66, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  b_67 = ATgetArgument(t, 0);
                                                  t = b_67;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      x_66 = ATgetArgument(t, 0);
                                                      y_66 = ATgetArgument(t, 1);
                                                      z_66 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = a_67;
                                                  t = e_7(x_66, y_66, z_66, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      b_67 = ATgetArgument(t, 0);
                                                      c_67 = ATgetArgument(t, 1);
                                                      d_67 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = a_67;
                                                  t = d_7(b_67, c_67, d_67, t);
                                                }
                                            }
                                          ;
                                          LocalPopChoice(a_27);
                                        }
                                      else
                                        {
                                          t = y_26;
                                          {
                                            ATerm b_27 = t;
                                            int d_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                ;
                                                LocalPopChoice(d_27);
                                              }
                                            else
                                              {
                                                t = b_27;
                                                {
                                                  ATerm j_27 = t;
                                                  int l_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
                                                      ;
                                                      LocalPopChoice(l_27);
                                                    }
                                                  else
                                                    {
                                                      t = j_27;
                                                      {
                                                        ATerm r_27 = t;
                                                        int s_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm n_67 = NULL;
                                                            n_67 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm t_27 = ATgetArgument(t, 0);
                                                                ATerm u_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = n_67;
                                                            t = c_7(t);
                                                            ;
                                                            LocalPopChoice(s_27);
                                                          }
                                                        else
                                                          {
                                                            t = r_27;
                                                            {
                                                              ATerm v_27 = t;
                                                              int x_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(x_27);
                                                                }
                                                              else
                                                                {
                                                                  t = v_27;
                                                                  {
                                                                    ATerm a_28 = t;
                                                                    int e_28 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(e_28);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_28;
                                                                        {
                                                                          ATerm f_28 = t;
                                                                          int g_28 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(g_28);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_28;
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
ATerm h_10 (ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
  a_68 = t;
  t = term_v_13;
  b_68 = t;
  t = (ATerm) ATinsert(ATempty, term_h_28);
  c_68 = t;
  t = SSL_printnl(b_68, c_68);
  t = a_68;
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,o_28 = NULL;
  g_68 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      e_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_68);
  d_68 = t;
  t = e_68;
  t = map_1_0(mark_buv_0_0, t);
  f_68 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, f_68);
  o_28 = t;
  t = SSLsetAnnotations(o_28, d_68);
  return(t);
}
ATerm q_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
  h_68 = t;
  t = term_v_13;
  i_68 = t;
  t = (ATerm) ATinsert(ATempty, term_i_28);
  j_68 = t;
  t = SSL_printnl(i_68, j_68);
  t = h_68;
  return(t);
}
ATerm mark_bound_unbound_vars_0_0 (ATerm t)
{
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,s_28 = NULL,p_28 = NULL;
  t = if_verbose4_1_0(h_10, t);
  z_67 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_67);
  s_67 = t;
  t = t_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_67 = ATgetFirst((ATermList) t);
      w_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_67);
  u_67 = t;
  t = w_67;
  t = Cons_2_0(i_10, q_10, t);
  x_67 = t;
  t = (ATerm) ATinsert(CheckATermList(x_67), v_67);
  p_28 = t;
  t = SSLsetAnnotations(p_28, u_67);
  y_67 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_67);
  s_28 = t;
  t = SSLsetAnnotations(s_28, s_67);
  t = if_verbose4_1_0(r_10, t);
  return(t);
}
ATerm d_8 (ATerm h_43, ATerm i_43, ATerm t)
{
  ATerm k_68 = NULL;
  t = SSL_fputc(h_43, i_43);
  k_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_68);
  return(t);
}
ATerm e_8 (ATerm v_46, ATerm w_46, ATerm t)
{
  ATerm l_68 = NULL;
  t = SSL_write_term_to_stream_text(v_46, w_46);
  l_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_68);
  return(t);
}
ATerm g_8 (ATerm y_95 (ATerm), ATerm v_447, ATerm z_46, ATerm t)
{
  ATerm m_68 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_447, term_m_28);
  t = open_stream_0_0(t);
  m_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_68, z_46);
  t = y_95(t);
  t = fclose_0_0(t);
  t = z_46;
  return(t);
}
ATerm f_8 (ATerm r_46, ATerm s_46, ATerm t)
{
  ATerm n_68 = NULL;
  t = SSL_write_term_to_stream_baf(r_46, s_46);
  n_68 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_68);
  return(t);
}
ATerm u_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm x_20 = NULL,z_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_28 = ATgetArgument(t, 0);
      if(match_cons(n_28, sym_Stream_1))
        {
          x_20 = ATgetArgument(n_28, 0);
        }
      else
        _fail(t);
      z_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(x_20, z_20, t);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,v_21 = NULL,x_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_28 = ATgetArgument(t, 0);
      if(match_cons(q_28, sym_Stream_1))
        {
          v_21 = ATgetArgument(q_28, 0);
        }
      else
        _fail(t);
      x_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_8(v_21, x_21, t);
  r_21 = t;
  t = term_r_28;
  s_21 = t;
  t = r_21;
  if(match_cons(t, sym_Stream_1))
    {
      t_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_28, r_21);
  t = d_8(s_21, t_21, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,b_70 = NULL,c_70 = NULL,a_29 = NULL,z_28 = NULL;
  s_68 = t;
  if(match_cons(t, sym__2))
    {
      z_68 = ATgetArgument(t, 0);
      a_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_68);
  y_68 = t;
  t = z_68;
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_10 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((r_68 != NULL) && (r_68 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(t_10, t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        t = term_y_28;
        r_68 = t;
      }
    b_69 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_69, a_69);
    z_28 = t;
    t = SSLsetAnnotations(z_28, y_68);
    t = s_68;
    if(match_cons(t, sym__2))
      {
        u_68 = ATgetArgument(t, 0);
        v_68 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_68);
    t_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_68, (ATerm) ATmakeAppl(sym__2, not_null(r_68), v_68));
    a_29 = t;
    t = SSLsetAnnotations(a_29, t_68);
    x_68 = t;
    if(match_cons(t, sym__2))
      {
        b_70 = ATgetArgument(t, 0);
        c_70 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm d_29 = t;
      int e_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,b_29 = NULL;
          t = SSLgetAnnotations(x_68);
          p_20 = t;
          t = b_70;
          t = fetch_1_0(u_10, t);
          s_20 = t;
          t = c_70;
          if(match_cons(t, sym__2))
            {
              u_20 = ATgetArgument(t, 0);
              v_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_8(w_10, u_20, v_20, t);
          t_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_20, t_20);
          b_29 = t;
          t = SSLsetAnnotations(b_29, p_20);
          ;
          LocalPopChoice(e_29);
        }
      else
        {
          t = d_29;
          {
            ATerm l_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,c_29 = NULL;
            t = SSLgetAnnotations(x_68);
            l_21 = t;
            t = c_70;
            if(match_cons(t, sym__2))
              {
                p_21 = ATgetArgument(t, 0);
                q_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_8(x_10, p_21, q_21, t);
            o_21 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_70, o_21);
            c_29 = t;
            t = SSLsetAnnotations(c_29, l_21);
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
ATerm apply_strategy_1_0 (ATerm k_97 (ATerm), ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL;
  j_70 = t;
  t = dtime_0_0(t);
  t = j_70;
  t = k_97(t);
  i_70 = t;
  t = dtime_0_0(t);
  f_70 = t;
  t = i_70;
  if(match_cons(t, sym__2))
    {
      g_70 = ATgetArgument(t, 0);
      h_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_70), (ATerm) ATmakeAppl(sym_Runtime_1, f_70)), h_70);
  return(t);
}
ATerm x_70 (ATerm r_70, ATerm t)
{
  t = SSL_fclose(r_70);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL;
  v_70 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_70 = ATgetArgument(t, 0);
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_70);
            ;
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            t = x_70(v_70, t);
          }
      }
    }
  else
    {
      t = x_70(v_70, t);
    }
  return(t);
}
ATerm h_8 (ATerm x_46, ATerm t)
{
  t = SSL_read_term_from_stream(x_46);
  return(t);
}
ATerm i_8 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm y_70 = NULL;
  t = SSL_fopen(j_43, k_43);
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_70);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_70 = NULL;
  t = SSL_stdin_stream();
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_70);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_71 = NULL;
  t = SSL_stdout_stream();
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_71);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_71 = NULL;
  t = SSL_stderr_stream();
  b_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_71);
  return(t);
}
ATerm i_72 (ATerm h_71, ATerm t)
{
  ATerm i_71 = NULL;
  t = SSL_explode_term(h_71);
  if(match_cons(t, sym__2))
    {
      ATerm j_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_29 = ATgetArgument(t, 1);
        if(((ATgetType(o_29) == AT_LIST) && !(ATisEmpty(o_29))))
          {
            i_71 = ATgetFirst((ATermList) o_29);
            {
              ATerm r_29 = (ATerm) ATgetNext((ATermList) o_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_71;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_71;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_71;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_71;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm j_72 (ATerm l_71, ATerm m_71, ATerm n_71, ATerm t)
{
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,t_71 = NULL,h_29 = NULL;
  t = SSLgetAnnotations(n_71);
  q_71 = t;
  t = l_71;
  if(match_cons(t, sym_Path_1))
    {
      t_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_71, m_71);
  h_29 = t;
  t = SSLsetAnnotations(h_29, q_71);
  if(match_cons(t, sym__2))
    {
      o_71 = ATgetArgument(t, 0);
      p_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(o_71, p_71, t);
  return(t);
}
ATerm k_72 (ATerm v_71, ATerm w_71, ATerm x_71, ATerm t)
{
  ATerm y_71 = NULL,z_71 = NULL,a_72 = NULL,d_72 = NULL,i_29 = NULL;
  t = SSLgetAnnotations(x_71);
  a_72 = t;
  t = SSL_is_string(v_71);
  d_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_72, w_71);
  i_29 = t;
  t = SSLsetAnnotations(i_29, a_72);
  if(match_cons(t, sym__2))
    {
      y_71 = ATgetArgument(t, 0);
      z_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_8(y_71, z_71, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      ATerm v_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  f_72 = t;
  if(match_cons(t, sym__2))
    {
      g_72 = ATgetArgument(t, 0);
      h_72 = ATgetArgument(t, 1);
      {
        ATerm y_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_72(f_72, t);
            ;
            LocalPopChoice(z_29);
          }
        else
          {
            t = y_29;
            {
              ATerm a_30 = t;
              int b_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_72(g_72, h_72, f_72, t);
                  ;
                  LocalPopChoice(b_30);
                }
              else
                {
                  t = a_30;
                  t = k_72(g_72, h_72, f_72, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_72(f_72, t);
    }
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL;
  ATerm e_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_72 = NULL;
      o_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_72, term_i_30);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = e_30;
      t = debug_1_0(y_10, t);
      _fail(t);
    }
  m_72 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(n_72, t);
  l_72 = t;
  t = m_72;
  t = fclose_0_0(t);
  t = l_72;
  return(t);
}
ATerm fetch_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm m_73 (ATerm t)
  {
    ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL;
    j_73 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_73 = ATgetFirst((ATermList) t);
        l_73 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_30 = t;
      int k_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_23 = NULL,k_23 = NULL,p_29 = NULL;
          t = SSLgetAnnotations(j_73);
          f_23 = t;
          t = k_73;
          t = z_79(t);
          k_23 = t;
          t = (ATerm) ATinsert(CheckATermList(l_73), k_23);
          p_29 = t;
          t = SSLsetAnnotations(p_29, f_23);
          ;
          LocalPopChoice(k_30);
        }
      else
        {
          t = j_30;
          {
            ATerm t_23 = NULL,a_24 = NULL,q_29 = NULL;
            t = SSLgetAnnotations(j_73);
            t_23 = t;
            t = l_73;
            t = m_73(t);
            a_24 = t;
            t = (ATerm) ATinsert(CheckATermList(a_24), k_73);
            q_29 = t;
            t = SSLsetAnnotations(q_29, t_23);
          }
        }
    }
    return(t);
  }
  t = m_73(t);
  return(t);
}
ATerm c_8 (ATerm z_40, ATerm a_41, ATerm t)
{
  t = SSL_strcat(z_40, a_41);
  return(t);
}
ATerm debug_1_0 (ATerm w_95 (ATerm), ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL;
  p_73 = t;
  t = w_95(t);
  q_73 = t;
  t = term_v_13;
  r_73 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_73), q_73);
  s_73 = t;
  t = SSL_printnl(r_73, s_73);
  t = p_73;
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
    }
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_73 = NULL;
      z_73 = t;
      t = SSL_is_string(z_73);
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = o_30;
      {
        ATerm u_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_10, t);
            ;
            LocalPopChoice(x_30);
          }
        else
          {
            t = u_30;
            {
              ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
              f_74 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_74 = ATgetArgument(t, 0);
                  t = g_74;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_74 = ATgetArgument(t, 0);
                      t = g_74;
                      {
                        ATerm z_30 = t;
                        int b_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_31);
                          }
                        else
                          {
                            t = z_30;
                            t = debug_1_0(a_11, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_74 = NULL,m_74 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_74 = ATgetArgument(t, 0);
                          h_74 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_74;
                      t = eval_config_0_0(t);
                      l_74 = t;
                      t = h_74;
                      t = eval_config_0_0(t);
                      m_74 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_74, m_74);
                      t = c_8(l_74, m_74, t);
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
  ATerm q_74 = NULL,r_74 = NULL;
  q_74 = t;
  t = term_f_31;
  r_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, q_74);
  t = l_8(r_74, q_74, t);
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_74 = NULL,t_74 = NULL;
        t = eval_config_0_0(t);
        s_74 = t;
        t = term_f_31;
        t_74 = t;
        t = SSL_table_put(t_74, q_74, s_74);
        t = s_74;
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  ATerm x_74 = NULL;
  x_74 = t;
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_74 = NULL;
        t = term_d_14;
        t = get_config_0_0(t);
        z_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_74, term_l_31);
        t = geq_0_0(t);
        t = x_74;
        t = o_104(t);
        ;
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        t = x_74;
      }
  }
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm c_75 = NULL;
  c_75 = t;
  if(match_string(t, "-k"))
    {
      t = c_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_75;
    }
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL;
  d_75 = t;
  t = SSL_string_to_int(d_75);
  e_75 = t;
  t = term_m_31;
  f_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_31, e_75);
  t = o_8(f_75, e_75, t);
  t = d_75;
  return(t);
}
ATerm i_11 (ATerm t)
{
  t = term_o_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_11, g_11, i_11, t);
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm h_75 = NULL;
  h_75 = t;
  if(match_string(t, "-S"))
    {
      t = h_75;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_75;
    }
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL;
  t = term_d_14;
  i_75 = t;
  t = term_p_31;
  j_75 = t;
  t = term_q_31;
  t = o_8(i_75, j_75, t);
  t = term_s_31;
  return(t);
}
ATerm n_11 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm q_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL,w_75 = NULL;
  p_75 = t;
  t = SSL_string_to_int(p_75);
  q_75 = t;
  t = term_d_14;
  w_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_14, q_75);
  t = o_8(w_75, q_75, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_75);
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_u_31;
  return(t);
}
ATerm u_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL;
  t = term_w_31;
  y_75 = t;
  t = term_u_13;
  z_75 = t;
  t = term_x_31;
  t = o_8(y_75, z_75, t);
  t = term_b_32;
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_11, l_11, n_11, t);
      ;
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      {
        ATerm f_32 = t;
        int g_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_11, s_11, t_11, t);
            ;
            LocalPopChoice(g_32);
          }
        else
          {
            t = f_32;
            t = Option_3_0(u_11, v_11, w_11, t);
          }
      }
    }
  return(t);
}
ATerm o_8 (ATerm i_49, ATerm j_49, ATerm t)
{
  ATerm a_76 = NULL;
  t = term_f_31;
  a_76 = t;
  t = SSL_table_put(a_76, i_49, j_49);
  t = (ATerm) ATmakeAppl(sym__3, term_f_31, i_49, j_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_76 = NULL,g_76 = NULL,h_76 = NULL;
      t = term_u_13;
      t = i_0(t);
      f_76 = t;
      t = term_h_32;
      g_76 = t;
      t = term_i_32;
      h_76 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_32, term_i_32, f_76);
      t = m_8(g_76, h_76, f_76, t);
      _fail(t);
    }
  else
    {
      ATerm k_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_76 = ATgetFirst((ATermList) t);
          e_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_76;
      t = d_0(t);
      t = term_u_13;
      t = g_0(t);
      k_76 = t;
      t = (ATerm) ATinsert(CheckATermList(e_76), k_76);
    }
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm m_76 = NULL;
  m_76 = t;
  if(match_string(t, "-o"))
    {
      t = m_76;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_76;
    }
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL;
  n_76 = t;
  t = term_j_32;
  o_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_32, n_76);
  t = o_8(o_76, n_76, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_76);
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_11, z_11, a_12, t);
  return(t);
}
ATerm m_8 (ATerm e_22, ATerm f_22, ATerm d_22, ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL;
  q_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_22, f_22);
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_32 = ATgetArgument(t, 0);
            ATerm o_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_22, f_22);
        t = l_8(e_22, f_22, t);
        ;
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        t = (ATerm) ATempty;
      }
    r_76 = t;
    t = (ATerm) ATinsert(CheckATermList(r_76), d_22);
    s_76 = t;
    t = SSL_table_put(e_22, f_22, s_76);
    t = q_76;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL;
      t = term_u_13;
      t = r_0(t);
      d_77 = t;
      t = term_h_32;
      e_77 = t;
      t = term_i_32;
      f_77 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_32, term_i_32, d_77);
      t = m_8(e_77, f_77, d_77, t);
      _fail(t);
    }
  else
    {
      ATerm j_77 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_76 = ATgetFirst((ATermList) t);
          a_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_77;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_77 = ATgetFirst((ATermList) t);
          c_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_76;
      t = n_0(t);
      t = b_77;
      t = p_0(t);
      j_77 = t;
      t = (ATerm) ATinsert(CheckATermList(c_77), j_77);
    }
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm l_77 = NULL;
  l_77 = t;
  if(match_string(t, "-i"))
    {
      t = l_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_77;
    }
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm m_77 = NULL,n_77 = NULL;
  m_77 = t;
  t = term_r_32;
  n_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_32, m_77);
  t = o_8(n_77, m_77, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_77);
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_12, c_12, e_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_77 = NULL,p_77 = NULL,q_77 = NULL,t_77 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_13;
  t = whoami_0_0(t);
  o_77 = t;
  t = term_v_13;
  q_77 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_32), o_77);
  t_77 = t;
  t = SSL_printnl(q_77, t_77);
  t = term_z_13;
  p_77 = t;
  t = SSL_exit(p_77);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm j_8 (ATerm f_34, ATerm g_34, ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_34, g_34);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      t = SSL_addr(f_34, g_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL;
  v_77 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_77;
      t = h_86(t);
    }
  else
    {
      ATerm a_78 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_77 = ATgetFirst((ATermList) t);
          x_77 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_77;
      t = foldr_2_0(h_86, i_86, t);
      a_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_77, a_78);
      t = i_86(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = term_p_31;
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL;
  if(match_cons(t, sym__2))
    {
      i_25 = ATgetArgument(t, 0);
      j_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8(i_25, j_25, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_78 = NULL,c_25 = NULL,e_25 = NULL;
  t = times_0_0(t);
  e_25 = t;
  t = SSL_explode_term(e_25);
  if(match_cons(t, sym__2))
    {
      ATerm a_33 = ATgetArgument(t, 0);
      c_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_25;
  t = foldr_2_0(f_12, g_12, t);
  d_78 = t;
  t = SSL_TicksToSeconds(d_78);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  o_78 = t;
  if(match_cons(t, sym__2))
    {
      p_78 = ATgetArgument(t, 0);
      q_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_78;
        if((p_78 != t))
          {
            _fail(t);
          }
        t = o_78;
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = (ATerm) ATmakeAppl(sym__2, p_78, q_78);
        {
          ATerm g_33 = t;
          int i_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_78, q_78);
              ;
              LocalPopChoice(i_33);
            }
          else
            {
              t = g_33;
              t = SSL_gtr(p_78, q_78);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_78, q_78);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_104 (ATerm), ATerm t)
{
  ATerm u_78 = NULL;
  u_78 = t;
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_78 = NULL;
        t = term_d_14;
        t = get_config_0_0(t);
        w_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_78, term_z_13);
        t = geq_0_0(t);
        t = u_78;
        t = n_104(t);
        ;
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
        t = u_78;
      }
  }
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL,b_79 = NULL,c_79 = NULL;
  t = run_time_0_0(t);
  y_78 = t;
  t = term_u_13;
  t = whoami_0_0(t);
  z_78 = t;
  t = term_v_13;
  b_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_33), y_78), term_m_33), z_78);
  c_79 = t;
  t = SSL_printnl(b_79, c_79);
  t = (ATerm) ATmakeAppl(sym__2, term_v_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_33), y_78), term_m_33), z_78));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_79 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_31;
  d_79 = t;
  t = SSL_exit(d_79);
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL;
  m_79 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_79;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_79 = ATgetArgument(t, 0);
          {
            ATerm y_25 = NULL,d_30 = NULL;
            t = SSLgetAnnotations(m_79);
            y_25 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_79);
            d_30 = t;
            t = SSLsetAnnotations(d_30, y_25);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_79;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_98 (ATerm), ATerm t)
{
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
      t = fetch_1_0(i_12, t);
    }
  t = i_98(t);
  return(t);
}
ATerm map_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm j_80 (ATerm t)
  {
    ATerm e_80 = NULL,h_80 = NULL,i_80 = NULL;
    e_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_80;
      }
    else
      {
        ATerm j_26 = NULL,m_26 = NULL,n_26 = NULL,f_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_80 = ATgetFirst((ATermList) t);
            i_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_80);
        j_26 = t;
        t = h_80;
        t = p_79(t);
        m_26 = t;
        t = i_80;
        t = j_80(t);
        n_26 = t;
        t = (ATerm) ATinsert(CheckATermList(n_26), m_26);
        f_30 = t;
        t = SSLsetAnnotations(f_30, j_26);
      }
    return(t);
  }
  t = j_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm m_80 = NULL,n_80 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_80 = ATgetFirst((ATermList) t);
      n_80 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_80 = NULL,s_80 = NULL;
        ATerm j_12 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_80)), not_null(s_80));
          return(t);
        }
        t = n_80;
        t = m_0(t);
        if(((r_80 != NULL) && (r_80 != t)))
          _fail(t);
        else
          r_80 = t;
        t = m_80;
        t = k_0(t);
        if(((s_80 != NULL) && (s_80 != t)))
          _fail(t);
        else
          s_80 = t;
        t = n_80;
        t = reverse_acc_2_0(k_0, j_12, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_13;
      t = m_0(t);
    }
  return(t);
}
ATerm l_8 (ATerm v_23, ATerm w_23, ATerm t)
{
  t = SSL_table_get(v_23, w_23);
  return(t);
}
ATerm l_12 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,h_30 = NULL;
  y_80 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_80);
  w_80 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_80);
  h_30 = t;
  t = SSLsetAnnotations(h_30, w_80);
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm a_81 = NULL;
  a_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_81), term_r_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL;
  ATerm s_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_33);
    }
  else
    {
      t = s_33;
      t = fetch_1_0(l_12, t);
    }
  t = term_v_33;
  t = echo_0_0(t);
  t = term_h_32;
  u_80 = t;
  t = term_i_32;
  v_80 = t;
  t = term_w_33;
  t = l_8(u_80, v_80, t);
  t = reverse_acc_2_0(_id, m_12, t);
  t = map_1_0(n_12, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL;
  c_81 = t;
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_81;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_33 = ATgetFirst((ATermList) t);
                ATerm a_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_81;
          }
        ;
        LocalPopChoice(y_33);
      }
    else
      {
        t = x_33;
        t = (ATerm) ATinsert(ATempty, c_81);
      }
    d_81 = t;
    t = term_y_28;
    e_81 = t;
    t = SSL_printnl(e_81, d_81);
    t = c_81;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm o_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL;
  t = term_b_34;
  i_81 = t;
  t = term_u_13;
  j_81 = t;
  t = term_c_34;
  t = o_8(i_81, j_81, t);
  return(t);
}
ATerm q_12 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm r_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL;
  t = term_b_34;
  m_81 = t;
  t = term_u_13;
  n_81 = t;
  t = term_c_34;
  t = o_8(m_81, n_81, t);
  t = term_e_34;
  k_81 = t;
  t = term_u_13;
  l_81 = t;
  t = term_h_34;
  t = o_8(k_81, l_81, t);
  t = term_i_34;
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = term_j_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_12, p_12, q_12, t);
      ;
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      t = Option_3_0(r_12, t_12, u_12, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_62 (ATerm), ATerm g_62 (ATerm), ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,x_81 = NULL,y_81 = NULL,y_30 = NULL;
  y_81 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_81 = ATgetFirst((ATermList) t);
      q_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_81);
  o_81 = t;
  t = p_81;
  t = f_62(t);
  r_81 = t;
  t = q_81;
  t = g_62(t);
  x_81 = t;
  t = (ATerm) ATinsert(CheckATermList(x_81), r_81);
  y_30 = t;
  t = SSLsetAnnotations(y_30, o_81);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,i_82 = NULL,j_82 = NULL,a_31 = NULL;
  d_82 = t;
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_34;
        t = n_101(t);
        ;
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
      }
    t = d_82;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_82 = ATgetFirst((ATermList) t);
        g_82 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_82);
    e_82 = t;
    t = term_w_32;
    j_82 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_32, f_82);
    t = o_8(j_82, f_82, t);
    t = g_82;
    {
      ATerm t_82 (ATerm t)
      {
        ATerm p_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_34 = t;
            int s_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_82 = NULL;
                m_82 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_82;
                ;
                LocalPopChoice(s_34);
              }
            else
              {
                t = r_34;
                t = n_101(t);
                t = Cons_2_0(_id, t_82, t);
              }
            ;
            LocalPopChoice(q_34);
          }
        else
          {
            t = p_34;
            {
              ATerm p_82 = NULL,q_82 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_82 = ATgetFirst((ATermList) t);
                  q_82 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_82), (ATerm) ATmakeAppl(sym_Undefined_1, p_82));
            }
          }
        return(t);
      }
      t = t_82(t);
      i_82 = t;
      t = (ATerm) ATinsert(CheckATermList(i_82), (ATerm) ATmakeAppl(sym_Program_1, f_82));
      a_31 = t;
      t = SSLsetAnnotations(a_31, e_82);
    }
  }
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm f_83 = NULL;
  f_83 = t;
  if(match_string(t, "--help"))
    {
      t = f_83;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_83;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_83;
        }
    }
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm g_83 = NULL,h_83 = NULL;
  t = term_q_33;
  g_83 = t;
  t = term_u_13;
  h_83 = t;
  t = term_t_34;
  t = o_8(g_83, h_83, t);
  t = term_u_34;
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm b_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL,a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL;
  a_83 = t;
  t = term_h_32;
  c_83 = t;
  t = term_i_32;
  d_83 = t;
  t = (ATerm) ATempty;
  e_83 = t;
  t = SSL_table_put(c_83, d_83, e_83);
  t = a_83;
  {
    ATerm v_12 (ATerm t)
    {
      ATerm w_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_101(t);
          ;
          LocalPopChoice(x_34);
        }
      else
        {
          t = w_34;
          {
            ATerm y_34 = t;
            int z_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_12, x_12, a_13, t);
                ;
                LocalPopChoice(z_34);
              }
            else
              {
                t = y_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_12, t);
    {
      ATerm a_35 = t;
      int b_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_83 = NULL;
          q_83 = t;
          {
            ATerm c_35 = t;
            int d_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_26 = NULL;
                t = q_83;
                {
                  ATerm e_35 = t;
                  int f_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_33;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_35);
                    }
                  else
                    {
                      t = e_35;
                      t = fetch_1_0(b_13, t);
                    }
                  t = q_83;
                  t = default_system_usage_0_0(t);
                  t = term_p_31;
                  u_26 = t;
                  t = SSL_exit(u_26);
                }
                ;
                LocalPopChoice(d_35);
              }
            else
              {
                t = c_35;
                {
                  ATerm k_27 = NULL;
                  t = term_b_34;
                  t = get_config_0_0(t);
                  t = q_83;
                  t = default_system_about_0_0(t);
                  t = term_p_31;
                  k_27 = t;
                  t = SSL_exit(k_27);
                }
              }
          }
          ;
          LocalPopChoice(b_35);
        }
      else
        {
          t = a_35;
          {
            ATerm g_35 = t;
            int h_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_83 = NULL,s_83 = NULL,v_83 = NULL;
                ATerm g_13 (ATerm t)
                {
                  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL,c_31 = NULL;
                  a_84 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      z_83 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_84);
                  y_83 = t;
                  t = z_83;
                  if(((y_82 != NULL) && (y_82 != t)))
                    _fail(t);
                  else
                    y_82 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_83);
                  c_31 = t;
                  t = SSLsetAnnotations(c_31, y_83);
                  return(t);
                }
                t = fetch_1_0(g_13, t);
                t = term_v_13;
                s_83 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_82)), term_i_35);
                v_83 = t;
                t = SSL_printnl(s_83, v_83);
                t = (ATerm) ATmakeAppl(sym__2, term_v_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_82)), term_i_35));
                t = default_system_usage_0_0(t);
                t = term_z_13;
                r_83 = t;
                t = SSL_exit(r_83);
                ;
                LocalPopChoice(h_35);
              }
            else
              {
                t = g_35;
              }
          }
        }
      z_82 = t;
      t = term_h_32;
      b_83 = t;
      t = SSL_table_destroy(b_83);
      t = z_82;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm t)
{
  ATerm k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL;
  t = parse_options_1_0(k_98, t);
  k_84 = t;
  t = term_j_35;
  n_84 = t;
  t = SSL_table_create(n_84);
  t = term_j_35;
  l_84 = t;
  t = term_k_35;
  m_84 = t;
  t = SSL_table_put(l_84, m_84, k_84);
  t = k_84;
  t = m_98(t);
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_98, t);
        ;
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        {
          ATerm n_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_35);
            }
          else
            {
              t = n_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = if_verbose2_1_0(r_13, t);
  return(t);
}
ATerm m_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL;
  t = term_p_35;
  o_84 = t;
  t = term_u_13;
  p_84 = t;
  t = term_q_35;
  t = o_8(o_84, p_84, t);
  t = term_r_35;
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = term_s_35;
  return(t);
}
ATerm r_13 (ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL;
  q_84 = t;
  t = term_w_32;
  t = get_config_0_0(t);
  r_84 = t;
  t = term_v_13;
  s_84 = t;
  t = (ATerm) ATinsert(ATempty, r_84);
  t_84 = t;
  t = SSL_printnl(s_84, t_84);
  t = q_84;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm t)
{
  ATerm j_13 (ATerm t)
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_97(t);
        ;
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(w_35);
            }
          else
            {
              t = v_35;
              {
                ATerm x_35 = t;
                int y_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(y_35);
                  }
                else
                  {
                    t = x_35;
                    {
                      ATerm z_35 = t;
                      int a_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(m_13, p_13, q_13, t);
                          ;
                          LocalPopChoice(a_36);
                        }
                      else
                        {
                          t = z_35;
                          {
                            ATerm b_36 = t;
                            int c_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_36);
                              }
                            else
                              {
                                t = b_36;
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
  ATerm l_13 (ATerm t)
  {
    ATerm u_84 = NULL,v_84 = NULL,w_84 = NULL;
    v_84 = t;
    {
      ATerm d_36 = t;
      int e_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_84 != NULL) && (u_84 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_84 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_13, t);
          ;
          LocalPopChoice(e_36);
        }
      else
        {
          t = d_36;
          t = term_f_36;
          u_84 = t;
        }
      t = not_null(u_84);
      t = ReadFromFile_0_0(t);
      w_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_84, w_84);
      t = apply_strategy_1_0(t_97, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(j_13, v_97, k_13, l_13, t);
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,g_31 = NULL;
  b_85 = t;
  if(match_cons(t, sym__2))
    {
      y_84 = ATgetArgument(t, 0);
      z_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_85);
  x_84 = t;
  t = z_84;
  t = mark_bound_unbound_vars_0_0(t);
  a_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_84, a_85);
  g_31 = t;
  t = SSLsetAnnotations(g_31, x_84);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(t_13, _fail, default_usage_0_0, t);
  return(t);
}
