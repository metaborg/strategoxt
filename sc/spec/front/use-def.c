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
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_StratRule_3;
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
Symbol sym_SDef_3;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
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
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
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
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
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
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_h_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_j_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_f_42;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_n_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_p_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_k_38;
ATerm term_d_38;
ATerm term_k_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_d_37;
ATerm term_y_36;
ATerm term_m_36;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_o_31;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_l_27;
ATerm term_z_26;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_l_19;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_g_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
void init_constant_terms (void)
{
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("e_1", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("h_1", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("b_1", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_s_15, (ATerm) ATempty);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATempty);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("s_1", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Defined_2, term_r_26, term_s_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("v_1", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Defined_2, term_b_29, term_s_26);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("p_1", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Defined_2, term_t_31, term_u_31);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Error: ", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym__2, term_z_38, term_d_39);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_39);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym__2, term_i_39, term_p_38);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym__2, term_x_39, term_z_39);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(sym__2, term_w_42, term_p_38);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym__2, term_z_42, term_p_38);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym__2, term_g_41, term_p_38);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_p_38);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm q_0 (ATerm);
ATerm w_0 (ATerm);
ATerm q_8 (ATerm q_34, ATerm p_34, ATerm r_34, ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm c_1 (ATerm);
ATerm f_1 (ATerm);
ATerm k_1 (ATerm);
ATerm rdef_ud_0_0 (ATerm);
ATerm Context_0_0 (ATerm);
ATerm r_8 (ATerm a_35, ATerm);
ATerm Warning_0_0 (ATerm);
ATerm s_8 (ATerm b_35, ATerm);
ATerm use_vars_0_0 (ATerm);
ATerm bind_vars_0_0 (ATerm);
ATerm unbound_vars_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm w_1 (ATerm);
ATerm sdef_ud_0_0 (ATerm);
ATerm mark_guardedlchoice_1_0 (ATerm l_122 (ATerm), ATerm);
ATerm mark_lchoice_1_0 (ATerm k_122 (ATerm), ATerm);
ATerm abstract_choice_2_0 (ATerm m_122 (ATerm), ATerm n_122 (ATerm), ATerm);
ATerm mark_choice_1_0 (ATerm j_122 (ATerm), ATerm);
ATerm t_8 (ATerm);
ATerm f_2 (ATerm);
ATerm mark_prim_0_0 (ATerm);
ATerm alltd_1_0 (ATerm c_98 (ATerm), ATerm);
ATerm g_2 (ATerm);
ATerm mark_call_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm u_8 (ATerm d_74, ATerm e_74, ATerm f_74, ATerm);
ATerm p_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_8 (ATerm x_73, ATerm b_74, ATerm z_73, ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm w_8 (ATerm r_73, ATerm v_73, ATerm t_73, ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm x_3 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm mark_rdef_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm IntroduceBound_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm x_8 (ATerm p_72, ATerm q_72, ATerm r_72, ATerm t_72, ATerm);
ATerm CompareEntries_0_0 (ATerm);
ATerm y_8 (ATerm e_71, ATerm f_71, ATerm d_71, ATerm);
ATerm l_4 (ATerm);
ATerm isect_MarkVar_0_0 (ATerm);
ATerm mark_traversal_0_0 (ATerm);
ATerm z_8 (ATerm a_42, ATerm z_41, ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_MarkVar_0_0 (ATerm);
ATerm s_4 (ATerm);
ATerm undefine_unbound_MarkVar_0_0 (ATerm);
ATerm mark_let_0_0 (ATerm);
ATerm mark_build_vars_0_0 (ATerm);
ATerm a_9 (ATerm k_41, ATerm l_41, ATerm m_41, ATerm);
ATerm DeclareBound_0_0 (ATerm);
ATerm d_9 (ATerm i_41, ATerm j_41, ATerm);
ATerm MarkVar_0_0 (ATerm);
ATerm MarkAndBind_0_0 (ATerm);
ATerm mark_match_vars_0_0 (ATerm);
ATerm mark_buv_0_0 (ATerm);
ATerm e_9 (ATerm g_96 (ATerm), ATerm p_40, ATerm n_40, ATerm);
ATerm w_4 (ATerm);
ATerm DeclareUnbound_0_0 (ATerm);
ATerm y_4 (ATerm);
ATerm mark_scope_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm j_9 (ATerm k_92 (ATerm), ATerm h_35, ATerm g_35, ATerm);
ATerm foldr_3_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm);
ATerm k_9 (ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm l_35, ATerm k_35, ATerm);
ATerm l_9 (ATerm f_92 (ATerm), ATerm f_35, ATerm e_35, ATerm);
ATerm at_end_1_0 (ATerm l_93 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm y_77 (ATerm q_77, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm p_9 (ATerm k_631, ATerm p_631, ATerm b_71, ATerm);
ATerm while_not_2_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm);
ATerm for_3_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm n_80 (ATerm h_79, ATerm i_79, ATerm j_79, ATerm);
ATerm l_6 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm free_vars_3_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm r_9 (ATerm c_41, ATerm d_41, ATerm);
ATerm end_scope_1_0 (ATerm d_96 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_96 (ATerm), ATerm);
ATerm scope_2_0 (ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm def_use_def_0_0 (ATerm);
ATerm filter_1_0 (ATerm c_102 (ATerm), ATerm);
ATerm a_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm j_8 (ATerm);
ATerm spec_use_def_0_0 (ATerm);
ATerm s_9 (ATerm j_60, ATerm k_60, ATerm);
ATerm t_9 (ATerm x_63, ATerm y_63, ATerm);
ATerm v_9 (ATerm u_115 (ATerm), ATerm m_504, ATerm b_64, ATerm);
ATerm u_9 (ATerm t_63, ATerm u_63, ATerm);
ATerm o_9 (ATerm);
ATerm q_9 (ATerm);
ATerm output_1_0 (ATerm d_120 (ATerm), ATerm);
ATerm u_85 (ATerm o_85, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm w_9 (ATerm z_63, ATerm);
ATerm x_9 (ATerm l_60, ATerm m_60, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_87 (ATerm e_86, ATerm);
ATerm g_87 (ATerm i_86, ATerm j_86, ATerm k_86, ATerm);
ATerm h_87 (ATerm s_86, ATerm t_86, ATerm u_86, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm a_10 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm e_120 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm h_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm p_10 (ATerm);
ATerm r_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm y_10 (ATerm);
ATerm c_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_10 (ATerm a_65, ATerm b_65, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_11 (ATerm);
ATerm a_12 (ATerm);
ATerm m_12 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_10 (ATerm x_40, ATerm y_40, ATerm w_40, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm o_12 (ATerm);
ATerm q_12 (ATerm);
ATerm t_12 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm y_9 (ATerm b_39, ATerm c_39, ATerm);
ATerm foldr_2_0 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_12 (ATerm);
ATerm w_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_117 (ATerm), ATerm);
ATerm m_13 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_13 (ATerm);
ATerm need_help_1_0 (ATerm u_119 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm r_13 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_10 (ATerm z_57, ATerm a_58, ATerm);
ATerm debug_1_0 (ATerm s_115 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_92 (ATerm), ATerm);
ATerm x_13 (ATerm);
ATerm z_13 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm c_10 (ATerm o_42, ATerm p_42, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm h_14 (ATerm);
ATerm i_14 (ATerm);
ATerm k_14 (ATerm);
ATerm m_14 (ATerm);
ATerm t_14 (ATerm);
ATerm u_14 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm x_121 (ATerm), ATerm);
ATerm w_14 (ATerm);
ATerm x_14 (ATerm);
ATerm y_14 (ATerm);
ATerm a_15 (ATerm);
ATerm parse_options_1_0 (ATerm w_121 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm);
ATerm f_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm r_15 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm q_8 (ATerm q_34, ATerm p_34, ATerm r_34, ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,r_0 = NULL,t_0 = NULL,u_0 = NULL;
  n_0 = t;
  t = (ATerm) ATempty;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_15, q_34);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_15, q_34));
  t = e_9(q_0, t_0, u_0, t);
  t = (ATerm) ATempty;
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_15, q_34);
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_15, q_34));
  t = e_9(w_0, o_0, r_0, t);
  t = r_34;
  t = use_vars_0_0(t);
  t = n_0;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,m_3 = NULL,n_3 = NULL;
  a_3 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      b_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
      f_3 = ATgetArgument(t, 2);
      v_2 = ATgetArgument(t, 3);
      t = v_2;
      if(match_cons(t, sym_StratRule_3))
        {
          w_2 = ATgetArgument(t, 0);
          y_2 = ATgetArgument(t, 1);
          z_2 = ATgetArgument(t, 2);
          {
            ATerm w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
            t = (ATerm) ATempty;
            z_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_15, b_3);
            a_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_15, b_3));
            t = e_9(x_0, z_3, a_4, t);
            t = (ATerm) ATempty;
            w_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_16, b_3);
            y_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_16, b_3));
            t = e_9(z_0, w_3, y_3, t);
            t = (ATerm) ATmakeAppl(sym__3, w_2, y_2, z_2);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, b_3, e_3, f_3, (ATerm) ATmakeAppl(sym_StratRule_3, w_2, y_2, z_2));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              w_2 = ATgetArgument(t, 0);
              y_2 = ATgetArgument(t, 1);
              z_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = a_3;
          {
            ATerm b_16 = t;
            int d_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_2 = NULL,c_3 = NULL,d_3 = NULL,h_3 = NULL;
                t = (ATerm) ATempty;
                d_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_16, b_3);
                h_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_e_16, b_3));
                t = e_9(a_1, d_3, h_3, t);
                t = (ATerm) ATempty;
                x_2 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_16, b_3);
                c_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_16, b_3));
                t = e_9(c_1, x_2, c_3, t);
                t = w_2;
                t = bind_vars_0_0(t);
                ;
                LocalPopChoice(d_16);
              }
            else
              {
                t = b_16;
                {
                  ATerm i_16 = t;
                  int k_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = z_2;
                      t = unbound_vars_0_0(t);
                      ;
                      LocalPopChoice(k_16);
                    }
                  else
                    {
                      t = i_16;
                      t = y_2;
                      t = use_vars_0_0(t);
                    }
                }
              }
            t = (ATerm) ATmakeAppl(sym_RDefT_4, b_3, e_3, f_3, (ATerm) ATmakeAppl(sym_Rule_3, w_2, y_2, z_2));
          }
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          b_3 = ATgetArgument(t, 0);
          e_3 = ATgetArgument(t, 1);
          f_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_3;
      if(match_cons(t, sym_Rule_3))
        {
          g_3 = ATgetArgument(t, 0);
          m_3 = ATgetArgument(t, 1);
          n_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_3;
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL;
            t = (ATerm) ATempty;
            d_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_16, b_3);
            e_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_16, b_3));
            t = e_9(f_1, d_5, e_5, t);
            t = (ATerm) ATempty;
            b_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_16, b_3);
            c_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_16, b_3));
            t = e_9(k_1, b_5, c_5, t);
            t = g_3;
            t = bind_vars_0_0(t);
            ;
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            {
              ATerm q_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_3;
                  t = unbound_vars_0_0(t);
                  ;
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = q_16;
                  t = m_3;
                  t = use_vars_0_0(t);
                }
            }
          }
        t = (ATerm) ATmakeAppl(sym_RDef_3, b_3, e_3, (ATerm) ATmakeAppl(sym_Rule_3, g_3, m_3, n_3));
      }
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_6 = NULL,v_6 = NULL,d_7 = NULL;
        t = (ATerm) ATempty;
        v_6 = t;
        t = term_s_15;
        d_7 = t;
        t = term_y_16;
        t = d_9(d_7, v_6, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm z_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_16) != ATmakeSymbol("e_1", 0, ATtrue)))
              _fail(t);
            t_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_5), term_b_17), t_6), term_a_17);
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        {
          ATerm c_17 = t;
          int d_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_7 = NULL,y_7 = NULL,c_8 = NULL;
              t = (ATerm) ATempty;
              y_7 = t;
              t = term_s_15;
              c_8 = t;
              t = term_y_16;
              t = d_9(c_8, y_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm e_17 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_17) != ATmakeSymbol("y_0", 0, ATtrue)))
                    _fail(t);
                  q_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_5), term_b_17), q_7), term_g_17);
              ;
              LocalPopChoice(d_17);
            }
          else
            {
              t = c_17;
              {
                ATerm k_17 = t;
                int l_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_8 = NULL,l_8 = NULL,o_8 = NULL;
                    t = (ATerm) ATempty;
                    l_8 = t;
                    t = term_s_15;
                    o_8 = t;
                    t = term_y_16;
                    t = d_9(o_8, l_8, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm n_17 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) n_17) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        i_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_5), term_b_17), i_8), term_g_17);
                    ;
                    LocalPopChoice(l_17);
                  }
                else
                  {
                    t = k_17;
                    {
                      ATerm o_17 = t;
                      int p_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_10 = NULL,j_10 = NULL,k_10 = NULL;
                          t = (ATerm) ATempty;
                          j_10 = t;
                          t = term_s_15;
                          k_10 = t;
                          t = term_y_16;
                          t = d_9(k_10, j_10, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm q_17 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) q_17) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              g_10 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_5), term_b_17), g_10), term_g_17);
                          ;
                          LocalPopChoice(p_17);
                        }
                      else
                        {
                          t = o_17;
                          {
                            ATerm r_17 = t;
                            int x_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm q_10 = NULL,s_10 = NULL,t_10 = NULL;
                                t = (ATerm) ATempty;
                                s_10 = t;
                                t = term_s_15;
                                t_10 = t;
                                t = term_y_16;
                                t = d_9(t_10, s_10, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm y_17 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) y_17) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    q_10 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_5), term_b_17), q_10), term_z_17);
                                ;
                                LocalPopChoice(x_17);
                              }
                            else
                              {
                                t = r_17;
                                {
                                  ATerm x_10 = NULL,z_10 = NULL,b_11 = NULL;
                                  t = (ATerm) ATempty;
                                  z_10 = t;
                                  t = term_s_15;
                                  b_11 = t;
                                  t = term_y_16;
                                  t = d_9(b_11, z_10, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm a_18 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) a_18) != ATmakeSymbol("b_0", 0, ATtrue)))
                                        _fail(t);
                                      x_10 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(v_5), term_b_17), x_10), term_z_17);
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
ATerm r_8 (ATerm a_35, ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_18), a_35), term_b_18);
  t = Context_0_0(t);
  m_6 = t;
  t = term_k_18;
  n_6 = t;
  t = SSL_printnl(n_6, m_6);
  t = m_6;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm u_7 = NULL;
  u_7 = t;
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_12 = NULL,k_13 = NULL,l_13 = NULL;
        t = (ATerm) ATempty;
        k_13 = t;
        t = term_v_15;
        l_13 = t;
        t = term_n_18;
        t = d_9(l_13, k_13, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm o_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_18) != ATmakeSymbol("h_1", 0, ATtrue)))
              _fail(t);
            v_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_7), term_b_17), v_12), term_p_18);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        {
          ATerm b_19 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_13 = NULL,s_13 = NULL,t_13 = NULL;
              t = (ATerm) ATempty;
              s_13 = t;
              t = term_v_15;
              t_13 = t;
              t = term_n_18;
              t = d_9(t_13, s_13, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm f_19 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) f_19) != ATmakeSymbol("b_1", 0, ATtrue)))
                    _fail(t);
                  p_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_7), term_b_17), p_13), term_l_19);
              ;
              LocalPopChoice(c_19);
            }
          else
            {
              t = b_19;
              {
                ATerm m_19 = t;
                int n_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_13 = NULL,a_14 = NULL,f_14 = NULL;
                    t = (ATerm) ATempty;
                    a_14 = t;
                    t = term_v_15;
                    f_14 = t;
                    t = term_n_18;
                    t = d_9(f_14, a_14, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm y_19 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) y_19) != ATmakeSymbol("v_0", 0, ATtrue)))
                          _fail(t);
                        y_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_7), term_b_17), y_13), term_l_19);
                    ;
                    LocalPopChoice(n_19);
                  }
                else
                  {
                    t = m_19;
                    {
                      ATerm z_19 = t;
                      int a_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_14 = NULL,n_14 = NULL,r_14 = NULL;
                          t = (ATerm) ATempty;
                          n_14 = t;
                          t = term_v_15;
                          r_14 = t;
                          t = term_n_18;
                          t = d_9(r_14, n_14, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm b_20 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) b_20) != ATmakeSymbol("p_0", 0, ATtrue)))
                                _fail(t);
                              l_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_7), term_b_17), l_14), term_l_19);
                          ;
                          LocalPopChoice(a_20);
                        }
                      else
                        {
                          t = z_19;
                          {
                            ATerm c_20 = t;
                            int d_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_14 = NULL,e_15 = NULL,g_15 = NULL;
                                t = (ATerm) ATempty;
                                e_15 = t;
                                t = term_v_15;
                                g_15 = t;
                                t = term_n_18;
                                t = d_9(g_15, e_15, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm c_22 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) c_22) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    z_14 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_7), term_b_17), z_14), term_d_22);
                                ;
                                LocalPopChoice(d_20);
                              }
                            else
                              {
                                t = c_20;
                                {
                                  ATerm k_15 = NULL,p_15 = NULL,q_15 = NULL;
                                  t = (ATerm) ATempty;
                                  p_15 = t;
                                  t = term_v_15;
                                  q_15 = t;
                                  t = term_n_18;
                                  t = d_9(q_15, p_15, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm e_22 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) e_22) != ATmakeSymbol("f_0", 0, ATtrue)))
                                        _fail(t);
                                      k_15 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_7), term_b_17), k_15), term_d_22);
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
ATerm s_8 (ATerm b_35, ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_22), b_35), term_b_18);
  t = Warning_0_0(t);
  e_8 = t;
  t = term_k_18;
  f_8 = t;
  t = SSL_printnl(f_8, e_8);
  t = e_8;
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm k_8 = NULL,m_8 = NULL;
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_8 = NULL,p_8 = NULL;
      n_8 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      p_8 = t;
      t = SSLgetAnnotations(n_8);
      k_8 = t;
      t = p_8;
      LocalPopChoice(i_22);
      {
        ATerm b_9 = NULL;
        b_9 = t;
        t = k_8;
        {
          ATerm k_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm m_22 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) m_22) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm n_22 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(n_22) != AT_LIST) || !(ATisEmpty(n_22))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(l_22);
              _fail(t);
            }
          else
            {
              t = k_22;
              {
                ATerm o_22 = t;
                int h_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm j_23 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) j_23) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm q_23 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(q_23) != AT_LIST) || !(ATisEmpty(q_23))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_23);
                    t = (ATerm) ATmakeAppl(sym_Var_1, m_8);
                    t = s_8(m_8, t);
                    _fail(t);
                  }
                else
                  {
                    t = o_22;
                    {
                      ATerm u_23 = t;
                      int v_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm y_23 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) y_23) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm z_23 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(z_23) != AT_LIST) || !(ATisEmpty(z_23))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(v_23);
                          t = (ATerm) ATmakeAppl(sym_Var_1, m_8);
                          t = r_8(m_8, t);
                        }
                      else
                        {
                          t = u_23;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, m_8);
                          t = r_8(m_8, t);
                        }
                    }
                  }
              }
            }
          t = b_9;
        }
      }
    }
  else
    {
      t = h_22;
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,d_1 = NULL;
            h_9 = t;
            if(match_cons(t, sym_App_2))
              {
                f_9 = ATgetArgument(t, 0);
                g_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_9);
            c_9 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, f_9, g_9);
            d_1 = t;
            t = SSLsetAnnotations(d_1, c_9);
            LocalPopChoice(b_24);
            {
              ATerm i_9 = NULL,m_9 = NULL,n_9 = NULL,z_9 = NULL,e_10 = NULL,i_10 = NULL,g_1 = NULL;
              i_10 = t;
              if(match_cons(t, sym_App_2))
                {
                  m_9 = ATgetArgument(t, 0);
                  n_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_10);
              i_9 = t;
              t = m_9;
              t = unbound_vars_0_0(t);
              z_9 = t;
              t = n_9;
              t = use_vars_0_0(t);
              e_10 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, z_9, e_10);
              g_1 = t;
              t = SSLsetAnnotations(g_1, i_9);
            }
          }
        else
          {
            t = a_24;
            {
              ATerm c_24 = t;
              int d_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_10 = NULL,o_10 = NULL,a_11 = NULL,i_1 = NULL;
                  a_11 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      o_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_11);
                  l_10 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, o_10);
                  i_1 = t;
                  t = SSLsetAnnotations(i_1, l_10);
                  LocalPopChoice(d_24);
                  {
                    ATerm d_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,j_1 = NULL;
                    h_11 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        f_11 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(h_11);
                    d_11 = t;
                    t = f_11;
                    t = unbound_vars_0_0(t);
                    g_11 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, g_11);
                    j_1 = t;
                    t = SSLsetAnnotations(j_1, d_11);
                  }
                }
              else
                {
                  t = c_24;
                  t = SRTS_some(use_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm bind_vars_0_0 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL,k_11 = NULL,l_11 = NULL,o_1 = NULL;
      l_11 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_11);
      i_11 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_11);
      o_1 = t;
      t = SSLsetAnnotations(o_1, i_11);
      LocalPopChoice(f_24);
      _fail(t);
    }
  else
    {
      t = e_24;
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_11 = NULL,n_11 = NULL,p_11 = NULL,w_11 = NULL,q_1 = NULL;
            w_11 = t;
            if(match_cons(t, sym_App_2))
              {
                n_11 = ATgetArgument(t, 0);
                p_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_11);
            m_11 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, n_11, p_11);
            q_1 = t;
            t = SSLsetAnnotations(q_1, m_11);
            LocalPopChoice(h_24);
            {
              ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,r_1 = NULL;
              d_12 = t;
              if(match_cons(t, sym_App_2))
                {
                  y_11 = ATgetArgument(t, 0);
                  z_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(d_12);
              x_11 = t;
              t = y_11;
              t = unbound_vars_0_0(t);
              b_12 = t;
              t = z_11;
              t = use_vars_0_0(t);
              c_12 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, b_12, c_12);
              r_1 = t;
              t = SSLsetAnnotations(r_1, x_11);
            }
          }
        else
          {
            t = g_24;
            {
              ATerm i_24 = t;
              int j_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,t_1 = NULL;
                  g_12 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      f_12 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_12);
                  e_12 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, f_12);
                  t_1 = t;
                  t = SSLsetAnnotations(t_1, e_12);
                  LocalPopChoice(j_24);
                  {
                    ATerm h_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,u_1 = NULL;
                    l_12 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        j_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(l_12);
                    h_12 = t;
                    t = j_12;
                    t = unbound_vars_0_0(t);
                    k_12 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, k_12);
                    u_1 = t;
                    t = SSLsetAnnotations(u_1, h_12);
                  }
                }
              else
                {
                  t = i_24;
                  t = SRTS_some(bind_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm unbound_vars_0_0 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,d_2 = NULL;
      z_12 = t;
      if(match_cons(t, sym_Build_1))
        {
          y_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_12);
      x_12 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, y_12);
      d_2 = t;
      t = SSLsetAnnotations(d_2, x_12);
      LocalPopChoice(l_24);
      {
        ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_2 = NULL;
        d_13 = t;
        if(match_cons(t, sym_Build_1))
          {
            b_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_13);
        a_13 = t;
        t = b_13;
        t = use_vars_0_0(t);
        c_13 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, c_13);
        e_2 = t;
        t = SSLsetAnnotations(e_2, a_13);
      }
    }
  else
    {
      t = k_24;
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,j_2 = NULL;
            g_13 = t;
            if(match_cons(t, sym_Match_1))
              {
                f_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_13);
            e_13 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, f_13);
            j_2 = t;
            t = SSLsetAnnotations(j_2, e_13);
            LocalPopChoice(n_24);
            {
              ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,q_13 = NULL,k_2 = NULL;
              q_13 = t;
              if(match_cons(t, sym_Match_1))
                {
                  i_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_13);
              h_13 = t;
              t = i_13;
              t = bind_vars_0_0(t);
              j_13 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, j_13);
              k_2 = t;
              t = SSLsetAnnotations(k_2, h_13);
            }
          }
        else
          {
            t = m_24;
            {
              ATerm o_24 = t;
              int p_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_13 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,l_2 = NULL;
                  e_14 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      b_14 = ATgetArgument(t, 0);
                      c_14 = ATgetArgument(t, 1);
                      d_14 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_14);
                  w_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, b_14, c_14, d_14);
                  l_2 = t;
                  t = SSLsetAnnotations(l_2, w_13);
                  LocalPopChoice(p_24);
                  {
                    ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
                    r_16 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        s_16 = ATgetArgument(t, 0);
                        t_16 = ATgetArgument(t, 1);
                        u_16 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm q_24 = t;
                      int r_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_15 = NULL,j_16 = NULL,m_2 = NULL;
                          t = SSLgetAnnotations(r_16);
                          z_15 = t;
                          t = s_16;
                          t = bind_vars_0_0(t);
                          j_16 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, j_16, t_16, u_16);
                          m_2 = t;
                          t = SSLsetAnnotations(m_2, z_15);
                          ;
                          LocalPopChoice(r_24);
                        }
                      else
                        {
                          t = q_24;
                          {
                            ATerm s_24 = t;
                            int t_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm m_17 = NULL,w_17 = NULL,n_2 = NULL;
                                t = SSLgetAnnotations(r_16);
                                m_17 = t;
                                t = u_16;
                                t = unbound_vars_0_0(t);
                                w_17 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, s_16, t_16, w_17);
                                n_2 = t;
                                t = SSLsetAnnotations(n_2, m_17);
                                ;
                                LocalPopChoice(t_24);
                              }
                            else
                              {
                                t = s_24;
                                {
                                  ATerm a_19 = NULL,k_19 = NULL,o_2 = NULL;
                                  t = SSLgetAnnotations(r_16);
                                  a_19 = t;
                                  t = t_16;
                                  t = use_vars_0_0(t);
                                  k_19 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, s_16, k_19, u_16);
                                  o_2 = t;
                                  t = SSLsetAnnotations(o_2, a_19);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = o_24;
                  t = SRTS_some(unbound_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm f_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      h_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
      j_17 = ATgetArgument(t, 2);
      f_17 = ATgetArgument(t, 3);
      {
        ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
        t = (ATerm) ATempty;
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_24, h_17);
        v_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_24, h_17));
        t = e_9(l_1, u_17, v_17, t);
        t = (ATerm) ATempty;
        s_17 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_24, h_17);
        t_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_24, h_17));
        t = e_9(m_1, s_17, t_17, t);
        t = f_17;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, h_17, i_17, j_17, f_17);
      }
    }
  else
    {
      ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          h_17 = ATgetArgument(t, 0);
          i_17 = ATgetArgument(t, 1);
          j_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      f_18 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_24, h_17);
      g_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_w_24, h_17));
      t = e_9(n_1, f_18, g_18, t);
      t = (ATerm) ATempty;
      d_18 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_24, h_17);
      e_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_24, h_17));
      t = e_9(w_1, d_18, e_18, t);
      t = j_17;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, h_17, i_17, j_17);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm l_122 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,q_18 = NULL,r_18 = NULL,m_4 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,d_19 = NULL,e_19 = NULL,g_19 = NULL,h_19 = NULL,o_4 = NULL,n_4 = NULL;
    h_19 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        y_18 = ATgetArgument(t, 0);
        z_18 = ATgetArgument(t, 1);
        d_19 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_19);
    x_18 = t;
    t = y_18;
    t = l_122(t);
    e_19 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_19, z_18, d_19);
    n_4 = t;
    t = SSLsetAnnotations(n_4, x_18);
    g_19 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        t_18 = ATgetArgument(t, 0);
        u_18 = ATgetArgument(t, 1);
        v_18 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_19);
    s_18 = t;
    t = u_18;
    t = l_122(t);
    w_18 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, t_18, w_18, v_18);
    o_4 = t;
    t = SSLsetAnnotations(o_4, s_18);
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm i_19 = NULL,j_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,p_4 = NULL;
    r_19 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        j_19 = ATgetArgument(t, 0);
        o_19 = ATgetArgument(t, 1);
        p_19 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_19);
    i_19 = t;
    t = p_19;
    t = l_122(t);
    q_19 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_19, o_19, q_19);
    p_4 = t;
    t = SSLsetAnnotations(p_4, i_19);
    return(t);
  }
  if(((r_18 != NULL) && (r_18 != t)))
    _fail(t);
  else
    r_18 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((i_18 != NULL) && (i_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_18 = ATgetArgument(t, 0);
      if(((j_18 != NULL) && (j_18 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_18 = ATgetArgument(t, 1);
      if(((q_18 != NULL) && (q_18 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        q_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(r_18));
  if(((h_18 != NULL) && (h_18 != t)))
    _fail(t);
  else
    h_18 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, not_null(i_18), not_null(j_18), not_null(q_18));
  if(((m_4 != NULL) && (m_4 != t)))
    _fail(t);
  else
    m_4 = t;
  t = SSLsetAnnotations(not_null(m_4), not_null(h_18));
  t = abstract_choice_2_0(x_1, y_1, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm k_122 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,u_4 = NULL;
  ATerm z_1 (ATerm t)
  {
    ATerm w_19 = NULL,x_19 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,v_4 = NULL;
    g_20 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        x_19 = ATgetArgument(t, 0);
        e_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_20);
    w_19 = t;
    t = x_19;
    t = k_122(t);
    f_20 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, f_20, e_20);
    v_4 = t;
    t = SSLsetAnnotations(v_4, w_19);
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,x_4 = NULL;
    l_20 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        i_20 = ATgetArgument(t, 0);
        j_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_20);
    h_20 = t;
    t = j_20;
    t = k_122(t);
    k_20 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, i_20, k_20);
    x_4 = t;
    t = SSLsetAnnotations(x_4, h_20);
    return(t);
  }
  if(((v_19 != NULL) && (v_19 != t)))
    _fail(t);
  else
    v_19 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((t_19 != NULL) && (t_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_19 = ATgetArgument(t, 0);
      if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(v_19));
  if(((s_19 != NULL) && (s_19 != t)))
    _fail(t);
  else
    s_19 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(t_19), not_null(u_19));
  if(((u_4 != NULL) && (u_4 != t)))
    _fail(t);
  else
    u_4 = t;
  t = SSLsetAnnotations(not_null(u_4), not_null(s_19));
  t = abstract_choice_2_0(z_1, a_2, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm m_122 (ATerm), ATerm n_122 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,r_20 = NULL,s_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
  u_20 = t;
  t = save_MarkVar_0_0(t);
  m_20 = t;
  t = u_20;
  t = m_122(t);
  s_20 = t;
  t = save_MarkVar_0_0(t);
  n_20 = t;
  t = term_y_24;
  w_20 = t;
  t = SSL_table_destroy(w_20);
  t = term_y_24;
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, m_20);
  t = z_8(v_20, m_20, t);
  t = s_20;
  t = n_122(t);
  r_20 = t;
  t = n_20;
  t = isect_MarkVar_0_0(t);
  t = r_20;
  return(t);
}
ATerm mark_choice_1_0 (ATerm j_122 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,h_5 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_5 = NULL;
    j_21 = t;
    if(match_cons(t, sym_Choice_2))
      {
        g_21 = ATgetArgument(t, 0);
        h_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_21);
    f_21 = t;
    t = g_21;
    t = j_122(t);
    i_21 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, i_21, h_21);
    k_5 = t;
    t = SSLsetAnnotations(k_5, f_21);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm k_21 = NULL,l_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,o_5 = NULL;
    u_21 = t;
    if(match_cons(t, sym_Choice_2))
      {
        l_21 = ATgetArgument(t, 0);
        s_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_21);
    k_21 = t;
    t = s_21;
    t = j_122(t);
    t_21 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, l_21, t_21);
    o_5 = t;
    t = SSLsetAnnotations(o_5, k_21);
    return(t);
  }
  if(((e_21 != NULL) && (e_21 != t)))
    _fail(t);
  else
    e_21 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((c_21 != NULL) && (c_21 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_21 = ATgetArgument(t, 0);
      if(((d_21 != NULL) && (d_21 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(e_21));
  if(((x_20 != NULL) && (x_20 != t)))
    _fail(t);
  else
    x_20 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(c_21), not_null(d_21));
  if(((h_5 != NULL) && (h_5 != t)))
    _fail(t);
  else
    h_5 = t;
  t = SSLsetAnnotations(not_null(h_5), not_null(x_20));
  t = abstract_choice_2_0(b_2, c_2, t);
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,j_22 = NULL,p_22 = NULL,s_22 = NULL,t_5 = NULL,s_5 = NULL;
  w_21 = t;
  t = save_MarkVar_0_0(t);
  v_21 = t;
  t = w_21;
  if(match_cons(t, sym_Rec_2))
    {
      j_22 = ATgetArgument(t, 0);
      p_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_21);
  b_22 = t;
  t = p_22;
  t = mark_buv_0_0(t);
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, j_22, s_22);
  s_5 = t;
  t = SSLsetAnnotations(s_5, b_22);
  t = v_21;
  t = isect_MarkVar_0_0(t);
  t = w_21;
  if(match_cons(t, sym_Rec_2))
    {
      y_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_21);
  x_21 = t;
  t = z_21;
  t = mark_buv_0_0(t);
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, y_21, a_22);
  t_5 = t;
  t = SSLsetAnnotations(t_5, x_21);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,i_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,w_23 = NULL,z_5 = NULL,y_5 = NULL,x_5 = NULL;
  w_23 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      p_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
      s_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_23);
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, p_23, r_23, s_23);
  x_5 = t;
  t = SSLsetAnnotations(x_5, o_23);
  t_23 = t;
  t = save_MarkVar_0_0(t);
  t_22 = t;
  t = t_23;
  if(match_cons(t, sym_PrimT_3))
    {
      c_23 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
      l_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_23);
  b_23 = t;
  t = l_23;
  t = map_1_0(f_2, t);
  m_23 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, c_23, i_23, m_23);
  y_5 = t;
  t = SSLsetAnnotations(y_5, b_23);
  n_23 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      v_22 = ATgetArgument(t, 0);
      w_22 = ATgetArgument(t, 1);
      x_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_23);
  u_22 = t;
  t = w_22;
  t = mark_buv_0_0(t);
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, v_22, z_22, x_22);
  z_5 = t;
  t = SSLsetAnnotations(z_5, u_22);
  a_23 = t;
  t = t_22;
  t = isect_MarkVar_0_0(t);
  t = a_23;
  return(t);
}
ATerm alltd_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm x_23 (ATerm t)
  {
    ATerm z_24 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_98(t);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = z_24;
        t = SRTS_all(x_23, t);
      }
    return(t);
  }
  t = x_23(t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm y_25 = NULL,e_26 = NULL,f_26 = NULL,y_26 = NULL;
  e_26 = t;
  if(match_cons(t, sym_CallT_3))
    {
      f_26 = ATgetArgument(t, 0);
      y_26 = ATgetArgument(t, 1);
      y_25 = ATgetArgument(t, 2);
      {
        ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,t_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,f_22 = NULL,f_6 = NULL,e_6 = NULL,d_6 = NULL;
        t = SSLgetAnnotations(e_26);
        r_21 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, f_26, y_26, y_25);
        d_6 = t;
        t = SSLsetAnnotations(d_6, r_21);
        f_22 = t;
        t = save_MarkVar_0_0(t);
        o_20 = t;
        t = f_22;
        if(match_cons(t, sym_CallT_3))
          {
            m_21 = ATgetArgument(t, 0);
            n_21 = ATgetArgument(t, 1);
            o_21 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_22);
        b_21 = t;
        t = o_21;
        t = map_1_0(g_2, t);
        p_21 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, m_21, n_21, p_21);
        e_6 = t;
        t = SSLsetAnnotations(e_6, b_21);
        q_21 = t;
        if(match_cons(t, sym_CallT_3))
          {
            q_20 = ATgetArgument(t, 0);
            t_20 = ATgetArgument(t, 1);
            y_20 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_21);
        p_20 = t;
        t = t_20;
        t = mark_buv_0_0(t);
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, q_20, z_20, y_20);
        f_6 = t;
        t = SSLsetAnnotations(f_6, p_20);
        a_21 = t;
        t = o_20;
        t = isect_MarkVar_0_0(t);
        t = a_21;
      }
    }
  else
    {
      ATerm q_22 = NULL,r_22 = NULL,y_22 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,k_23 = NULL,h_6 = NULL,g_6 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          f_26 = ATgetArgument(t, 0);
          y_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_26);
      g_23 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, f_26, y_26);
      g_6 = t;
      t = SSLsetAnnotations(g_6, g_23);
      k_23 = t;
      t = save_MarkVar_0_0(t);
      q_22 = t;
      t = k_23;
      if(match_cons(t, sym_Call_2))
        {
          y_22 = ATgetArgument(t, 0);
          d_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_23);
      r_22 = t;
      t = d_23;
      t = mark_buv_0_0(t);
      e_23 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, y_22, e_23);
      h_6 = t;
      t = SSLsetAnnotations(h_6, r_22);
      f_23 = t;
      t = q_22;
      t = isect_MarkVar_0_0(t);
      t = f_23;
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm u_8 (ATerm d_74, ATerm e_74, ATerm f_74, ATerm t)
{
  ATerm b_27 = NULL;
  ATerm i_2 (ATerm t)
  {
    t = not_null(e_74);
    t = map_1_0(IntroduceBound_0_0, t);
    t = not_null(f_74);
    t = mark_build_vars_0_0(t);
    if(((b_27 != NULL) && (b_27 != t)))
      _fail(t);
    else
      b_27 = t;
    return(t);
  }
  t = scope_2_0(h_2, i_2, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, not_null(d_74), not_null(e_74), not_null(b_27));
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm u_27 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_27);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_27 = ATgetArgument(t, 0);
            t = y_27;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_27 = ATgetArgument(t, 0);
                z_27 = ATgetArgument(t, 1);
                a_28 = ATgetArgument(t, 2);
                b_28 = ATgetArgument(t, 3);
                t = a_28;
                t = map_1_0(t_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    y_27 = ATgetArgument(t, 0);
                    z_27 = ATgetArgument(t, 1);
                    a_28 = ATgetArgument(t, 2);
                    b_28 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_28;
                t = map_1_0(u_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm j_28 = NULL;
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_28 = ATgetArgument(t, 0);
          {
            ATerm g_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_25);
      t = j_28;
    }
  else
    {
      t = e_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_28;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm g_29 = NULL;
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_29 = ATgetArgument(t, 0);
          {
            ATerm j_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_25);
      t = g_29;
    }
  else
    {
      t = h_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_29;
    }
  return(t);
}
ATerm v_8 (ATerm x_73, ATerm b_74, ATerm z_73, ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  ATerm q_2 (ATerm t)
  {
    t = not_null(x_73);
    t = free_vars_3_0(r_2, s_2, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = not_null(x_73);
    t = mark_match_vars_0_0(t);
    if(((n_27 != NULL) && (n_27 != t)))
      _fail(t);
    else
      n_27 = t;
    t = not_null(z_73);
    t = mark_buv_0_0(t);
    if(((o_27 != NULL) && (o_27 != t)))
      _fail(t);
    else
      o_27 = t;
    t = not_null(b_74);
    t = mark_build_vars_0_0(t);
    if(((p_27 != NULL) && (p_27 != t)))
      _fail(t);
    else
      p_27 = t;
    return(t);
  }
  t = scope_2_0(p_2, q_2, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_27), not_null(p_27), not_null(o_27)));
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm s_29 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_29);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      {
        ATerm z_29 = NULL,b_30 = NULL,f_30 = NULL,i_30 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_29 = ATgetArgument(t, 0);
            t = z_29;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                z_29 = ATgetArgument(t, 0);
                b_30 = ATgetArgument(t, 1);
                f_30 = ATgetArgument(t, 2);
                i_30 = ATgetArgument(t, 3);
                t = f_30;
                t = map_1_0(o_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    z_29 = ATgetArgument(t, 0);
                    b_30 = ATgetArgument(t, 1);
                    f_30 = ATgetArgument(t, 2);
                    i_30 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_30;
                t = map_1_0(p_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm u_30 = NULL;
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_30 = ATgetArgument(t, 0);
          {
            ATerm o_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_25);
      t = u_30;
    }
  else
    {
      t = m_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_30;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm h_31 = NULL;
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_31 = ATgetArgument(t, 0);
          {
            ATerm r_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_25);
      t = h_31;
    }
  else
    {
      t = p_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_31;
    }
  return(t);
}
ATerm w_8 (ATerm r_73, ATerm v_73, ATerm t_73, ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,r_29 = NULL;
  ATerm j_3 (ATerm t)
  {
    t = not_null(r_73);
    t = free_vars_3_0(k_3, l_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = not_null(r_73);
    t = mark_match_vars_0_0(t);
    if(((m_29 != NULL) && (m_29 != t)))
      _fail(t);
    else
      m_29 = t;
    t = not_null(t_73);
    t = mark_buv_0_0(t);
    if(((n_29 != NULL) && (n_29 != t)))
      _fail(t);
    else
      n_29 = t;
    t = not_null(v_73);
    t = mark_build_vars_0_0(t);
    if(((r_29 != NULL) && (r_29 != t)))
      _fail(t);
    else
      r_29 = t;
    return(t);
  }
  t = scope_2_0(i_3, j_3, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(m_29), not_null(r_29), not_null(n_29)));
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm a_36 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_36);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_36 = ATgetArgument(t, 0);
            t = c_36;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_36 = ATgetArgument(t, 0);
                d_36 = ATgetArgument(t, 1);
                e_36 = ATgetArgument(t, 2);
                f_36 = ATgetArgument(t, 3);
                t = e_36;
                t = map_1_0(s_3, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_36 = ATgetArgument(t, 0);
                    d_36 = ATgetArgument(t, 1);
                    e_36 = ATgetArgument(t, 2);
                    f_36 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_36;
                t = map_1_0(t_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm u_36 = NULL;
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_36 = ATgetArgument(t, 0);
          {
            ATerm w_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_25);
      t = u_36;
    }
  else
    {
      t = u_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_36;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm q_37 = NULL;
  ATerm x_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_37 = ATgetArgument(t, 0);
          {
            ATerm a_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_25);
      t = q_37;
    }
  else
    {
      t = x_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_37;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm j_39 = NULL;
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_39 = ATgetArgument(t, 0);
          {
            ATerm d_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_26);
      t = j_39;
    }
  else
    {
      t = b_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_39;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm m_39 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_39);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      {
        ATerm o_39 = NULL,p_39 = NULL,s_39 = NULL,t_39 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_39 = ATgetArgument(t, 0);
            t = o_39;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_39 = ATgetArgument(t, 0);
                p_39 = ATgetArgument(t, 1);
                s_39 = ATgetArgument(t, 2);
                t_39 = ATgetArgument(t, 3);
                t = s_39;
                t = map_1_0(d_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_39 = ATgetArgument(t, 0);
                    p_39 = ATgetArgument(t, 1);
                    s_39 = ATgetArgument(t, 2);
                    t_39 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_39;
                t = map_1_0(e_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm u_40 = NULL;
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_40 = ATgetArgument(t, 0);
          {
            ATerm k_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_26);
      t = u_40;
    }
  else
    {
      t = i_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_40;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm d_42 = NULL;
  ATerm l_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_42 = ATgetArgument(t, 0);
          {
            ATerm q_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_26);
      t = d_42;
    }
  else
    {
      t = l_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_42;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,t_32 = NULL,a_33 = NULL,d_33 = NULL,l_33 = NULL,o_33 = NULL,x_33 = NULL,a_34 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      t_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
      d_33 = ATgetArgument(t, 2);
      {
        ATerm v_34 = NULL,d_35 = NULL,j_35 = NULL,o_35 = NULL;
        t = not_null(d_33);
        if(match_cons(t, sym_Rule_3))
          {
            if(((k_32 != NULL) && (k_32 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              k_32 = ATgetArgument(t, 0);
            if(((l_32 != NULL) && (l_32 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_32 = ATgetArgument(t, 1);
            if(((m_32 != NULL) && (m_32 != ATgetArgument(t, 2))))
              _fail(ATgetArgument(t, 2));
            else
              m_32 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = not_null(d_33);
        t = free_vars_3_0(q_3, r_3, tboundin_3_0, t);
        if(((v_34 != NULL) && (v_34 != t)))
          _fail(t);
        else
          v_34 = t;
        {
          ATerm v_3 (ATerm t)
          {
            t = not_null(v_34);
            t = map_1_0(DeclareUnbound_0_0, t);
            t = not_null(k_32);
            t = mark_match_vars_0_0(t);
            if(((d_35 != NULL) && (d_35 != t)))
              _fail(t);
            else
              d_35 = t;
            t = not_null(m_32);
            t = mark_buv_0_0(t);
            if(((j_35 != NULL) && (j_35 != t)))
              _fail(t);
            else
              j_35 = t;
            t = not_null(l_32);
            t = mark_build_vars_0_0(t);
            if(((o_35 != NULL) && (o_35 != t)))
              _fail(t);
            else
              o_35 = t;
            return(t);
          }
          t = scope_2_0(u_3, v_3, t);
          t = (ATerm) ATmakeAppl(sym_RDef_3, not_null(t_32), not_null(a_33), (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_35), not_null(o_35), not_null(j_35)));
        }
      }
    }
  else
    {
      ATerm h_38 = NULL,i_38 = NULL,q_38 = NULL,t_38 = NULL,w_38 = NULL,x_38 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          if(((t_32 != NULL) && (t_32 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_32 = ATgetArgument(t, 0);
          if(((a_33 != NULL) && (a_33 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_33 = ATgetArgument(t, 1);
          if(((d_33 != NULL) && (d_33 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            d_33 = ATgetArgument(t, 2);
          if(((l_33 != NULL) && (l_33 != ATgetArgument(t, 3))))
            _fail(ATgetArgument(t, 3));
          else
            l_33 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = not_null(l_33);
      if(match_cons(t, sym_Rule_3))
        {
          if(((o_33 != NULL) && (o_33 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_33 = ATgetArgument(t, 0);
          if(((x_33 != NULL) && (x_33 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_33 = ATgetArgument(t, 1);
          if(((a_34 != NULL) && (a_34 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            a_34 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(d_33);
      t = map_1_0(x_3, t);
      if(((h_38 != NULL) && (h_38 != t)))
        _fail(t);
      else
        h_38 = t;
      t = not_null(l_33);
      t = free_vars_3_0(b_4, c_4, tboundin_3_0, t);
      if(((x_38 != NULL) && (x_38 != t)))
        _fail(t);
      else
        x_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_38), not_null(h_38));
      t = diff_0_0(t);
      if(((i_38 != NULL) && (i_38 != t)))
        _fail(t);
      else
        i_38 = t;
      {
        ATerm g_4 (ATerm t)
        {
          t = not_null(h_38);
          t = map_1_0(IntroduceBound_0_0, t);
          t = not_null(i_38);
          t = map_1_0(DeclareUnbound_0_0, t);
          t = not_null(o_33);
          t = mark_match_vars_0_0(t);
          if(((q_38 != NULL) && (q_38 != t)))
            _fail(t);
          else
            q_38 = t;
          t = not_null(a_34);
          t = mark_buv_0_0(t);
          if(((t_38 != NULL) && (t_38 != t)))
            _fail(t);
          else
            t_38 = t;
          t = not_null(x_33);
          t = mark_build_vars_0_0(t);
          if(((w_38 != NULL) && (w_38 != t)))
            _fail(t);
          else
            w_38 = t;
          return(t);
        }
        t = scope_2_0(f_4, g_4, t);
        t = (ATerm) ATmakeAppl(sym_RDefT_4, not_null(t_32), not_null(a_33), not_null(d_33), (ATerm) ATmakeAppl(sym_Rule_3, not_null(q_38), not_null(w_38), not_null(t_38)));
      }
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
  j_42 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_42);
  k_42 = t;
  t = term_u_26;
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_42), term_u_26);
  t = e_9(h_4, k_42, l_42, t);
  t = j_42;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm u_42 = NULL;
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_42 = ATgetArgument(t, 0);
          {
            ATerm x_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_26);
      t = u_42;
    }
  else
    {
      t = v_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_42;
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm x_8 (ATerm p_72, ATerm q_72, ATerm r_72, ATerm t_72, ATerm t)
{
  ATerm n_42 = NULL,q_42 = NULL;
  t = not_null(r_72);
  t = map_1_0(i_4, t);
  if(((n_42 != NULL) && (n_42 != t)))
    _fail(t);
  else
    n_42 = t;
  {
    ATerm k_4 (ATerm t)
    {
      t = not_null(n_42);
      t = map_1_0(IntroduceBound_0_0, t);
      t = not_null(t_72);
      t = mark_buv_0_0(t);
      if(((q_42 != NULL) && (q_42 != t)))
        _fail(t);
      else
        q_42 = t;
      return(t);
    }
    t = scope_2_0(j_4, k_4, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, not_null(p_72), not_null(q_72), not_null(r_72), not_null(q_42));
  }
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,l_44 = NULL,n_44 = NULL;
  b_44 = t;
  if(match_cons(t, sym__2))
    {
      c_44 = ATgetArgument(t, 0);
      l_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_44;
  if(match_cons(t, sym_Undefined_0))
    {
      t = c_44;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_z_26;
        }
      else
        {
          t = term_z_26;
        }
    }
  else
    {
      ATerm a_27 = t;
      int c_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm g_27 = ATgetArgument(t, 0);
              n_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(c_27);
          t = c_44;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_z_26;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  d_44 = ATgetArgument(t, 0);
                  e_44 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm h_27 = t;
                int i_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, e_44, n_44);
                    {
                      ATerm j_27 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm a_25 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              a_25 = ATgetArgument(t, 0);
                              if((a_25 != ATgetArgument(t, 1)))
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
                          t = j_27;
                        }
                      t = (ATerm) ATmakeAppl(sym_Defined_2, d_44, term_l_27);
                    }
                    ;
                    LocalPopChoice(i_27);
                  }
                else
                  {
                    t = h_27;
                    t = n_44;
                    if((e_44 != t))
                      {
                        _fail(t);
                      }
                    t = c_44;
                  }
              }
            }
        }
      else
        {
          t = a_27;
          t = c_44;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_z_26;
        }
    }
  return(t);
}
ATerm y_8 (ATerm e_71, ATerm f_71, ATerm d_71, ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL;
  t = term_y_24;
  t_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, e_71);
  t = c_10(t_44, e_71, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_44 = ATgetFirst((ATermList) t);
      {
        ATerm m_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_71, r_44);
  t = CompareEntries_0_0(t);
  s_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_71, (ATerm) ATinsert(CheckATermList(d_71), s_44));
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm g_45 = NULL,i_45 = NULL,k_45 = NULL,n_45 = NULL,o_45 = NULL;
  o_45 = t;
  if(match_cons(t, sym__2))
    {
      g_45 = ATgetArgument(t, 0);
      i_45 = ATgetArgument(t, 1);
      t = i_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_45 = ATgetFirst((ATermList) t);
          n_45 = (ATerm) ATgetNext((ATermList) t);
          t = k_45;
          {
            ATerm q_27 = t;
            int r_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm s_27 = ATgetArgument(t, 0);
                    ATerm v_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(r_27);
                t = g_45;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = o_45;
                  }
                else
                  {
                    ATerm c_28 = t;
                    int d_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = o_45;
                        t = y_8(g_45, k_45, n_45, t);
                        ;
                        LocalPopChoice(d_28);
                      }
                    else
                      {
                        t = c_28;
                        t = o_45;
                      }
                  }
              }
            else
              {
                t = q_27;
                t = g_45;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = o_45;
                  }
                else
                  {
                    t = o_45;
                  }
              }
          }
        }
      else
        {
          t = g_45;
          if(match_cons(t, sym_Scopes_0))
            {
              t = o_45;
            }
          else
            {
              t = o_45;
            }
        }
    }
  else
    {
      t = o_45;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  t = map_1_0(l_4, t);
  d_45 = t;
  t = term_y_24;
  f_45 = t;
  t = SSL_table_destroy(f_45);
  t = term_y_24;
  e_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, d_45);
  t = z_8(e_45, d_45, t);
  t = d_45;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,v_46 = NULL;
  v_46 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm g_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_28);
        t = v_46;
      }
    else
      {
        t = e_28;
        {
          ATerm h_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm k_28 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(i_28);
              t = v_46;
            }
          else
            {
              t = h_28;
              {
                ATerm l_28 = t;
                int m_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm n_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(m_28);
                    t = v_46;
                  }
                else
                  {
                    t = l_28;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm o_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_46;
                  }
              }
            }
        }
      }
    t = save_MarkVar_0_0(t);
    s_46 = t;
    t = v_46;
    t = SRTS_one(mark_buv_0_0, t);
    t_46 = t;
    t = s_46;
    t = isect_MarkVar_0_0(t);
    t = t_46;
  }
  return(t);
}
ATerm z_8 (ATerm a_42, ATerm z_41, ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm d_47 = NULL,e_47 = NULL;
    if(match_cons(t, sym__2))
      {
        d_47 = ATgetArgument(t, 0);
        e_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(not_null(a_42), d_47, e_47);
    t = (ATerm) ATmakeAppl(sym__3, not_null(a_42), d_47, e_47);
    return(t);
  }
  t = not_null(z_41);
  t = map_1_0(q_4, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_47 = NULL;
  ATerm r_4 (ATerm t)
  {
    ATerm g_47 = NULL,h_47 = NULL;
    g_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_47), g_47);
    t = c_10(not_null(f_47), g_47, t);
    h_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_47, h_47);
    return(t);
  }
  if(((f_47 != NULL) && (f_47 != t)))
    _fail(t);
  else
    f_47 = t;
  t = SSL_table_keys(not_null(f_47));
  t = map_1_0(r_4, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_y_24;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,f_48 = NULL,h_48 = NULL,i_48 = NULL,j_48 = NULL;
  j_48 = t;
  if(match_cons(t, sym__2))
    {
      a_48 = ATgetArgument(t, 0);
      b_48 = ATgetArgument(t, 1);
      t = b_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_48 = ATgetFirst((ATermList) t);
          i_48 = (ATerm) ATgetNext((ATermList) t);
          t = c_48;
          if(match_cons(t, sym_Defined_2))
            {
              f_48 = ATgetArgument(t, 0);
              h_48 = ATgetArgument(t, 1);
              t = h_48;
              if(match_string(t, "unbound"))
                {
                  t = a_48;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = j_48;
                    }
                  else
                    {
                      ATerm p_28 = t;
                      int q_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, a_48, (ATerm) ATinsert(CheckATermList(i_48), (ATerm) ATmakeAppl(sym_Defined_2, f_48, term_l_27)));
                          ;
                          LocalPopChoice(q_28);
                        }
                      else
                        {
                          t = p_28;
                          t = j_48;
                        }
                    }
                }
              else
                {
                  t = a_48;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = j_48;
                    }
                  else
                    {
                      t = j_48;
                    }
                }
            }
          else
            {
              t = a_48;
              if(match_cons(t, sym_Scopes_0))
                {
                  t = j_48;
                }
              else
                {
                  t = j_48;
                }
            }
        }
      else
        {
          t = a_48;
          if(match_cons(t, sym_Scopes_0))
            {
              t = j_48;
            }
          else
            {
              t = j_48;
            }
        }
    }
  else
    {
      t = j_48;
    }
  return(t);
}
ATerm undefine_unbound_MarkVar_0_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  t = save_MarkVar_0_0(t);
  t = map_1_0(s_4, t);
  x_47 = t;
  t = term_y_24;
  z_47 = t;
  t = SSL_table_destroy(z_47);
  t = term_y_24;
  y_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, x_47);
  t = z_8(y_47, x_47, t);
  t = x_47;
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm a_50 = NULL,d_50 = NULL,f_50 = NULL,i_50 = NULL,j_50 = NULL,l_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,t_50 = NULL,v_50 = NULL,x_50 = NULL,c_51 = NULL,q_6 = NULL,p_6 = NULL;
  if(((c_51 != NULL) && (c_51 != t)))
    _fail(t);
  else
    c_51 = t;
  if(match_cons(t, sym_Let_2))
    {
      if(((t_50 != NULL) && (t_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_50 = ATgetArgument(t, 0);
      if(((v_50 != NULL) && (v_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(c_51));
  if(((q_50 != NULL) && (q_50 != t)))
    _fail(t);
  else
    q_50 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(t_50), not_null(v_50));
  if(((p_6 != NULL) && (p_6 != t)))
    _fail(t);
  else
    p_6 = t;
  t = SSLsetAnnotations(not_null(p_6), not_null(q_50));
  if(((x_50 != NULL) && (x_50 != t)))
    _fail(t);
  else
    x_50 = t;
  t = undefine_unbound_MarkVar_0_0(t);
  if(((a_50 != NULL) && (a_50 != t)))
    _fail(t);
  else
    a_50 = t;
  t = not_null(x_50);
  if(match_cons(t, sym_Let_2))
    {
      if(((f_50 != NULL) && (f_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_50 = ATgetArgument(t, 0);
      if(((i_50 != NULL) && (i_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(x_50));
  if(((d_50 != NULL) && (d_50 != t)))
    _fail(t);
  else
    d_50 = t;
  t = not_null(f_50);
  {
    ATerm t_4 (ATerm t)
    {
      ATerm g_51 = NULL,i_51 = NULL,j_51 = NULL;
      g_51 = t;
      t = term_y_24;
      j_51 = t;
      t = SSL_table_destroy(j_51);
      t = term_y_24;
      i_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_24, not_null(a_50));
      t = z_8(i_51, not_null(a_50), t);
      t = g_51;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(t_4, t);
    if(((j_50 != NULL) && (j_50 != t)))
      _fail(t);
    else
      j_50 = t;
    t = term_y_24;
    if(((p_50 != NULL) && (p_50 != t)))
      _fail(t);
    else
      p_50 = t;
    t = SSL_table_destroy(not_null(p_50));
    t = term_y_24;
    if(((o_50 != NULL) && (o_50 != t)))
      _fail(t);
    else
      o_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_24, not_null(a_50));
    t = z_8(not_null(o_50), not_null(a_50), t);
    t = not_null(i_50);
    t = mark_buv_0_0(t);
    if(((l_50 != NULL) && (l_50 != t)))
      _fail(t);
    else
      l_50 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(j_50), not_null(l_50));
    if(((q_6 != NULL) && (q_6 != t)))
      _fail(t);
    else
      q_6 = t;
    t = SSLsetAnnotations(not_null(q_6), not_null(d_50));
  }
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL,y_6 = NULL;
      m_51 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_51);
      k_51 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_51);
      y_6 = t;
      t = SSLsetAnnotations(y_6, k_51);
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
            ATerm n_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,z_6 = NULL;
            s_51 = t;
            if(match_cons(t, sym_App_2))
              {
                q_51 = ATgetArgument(t, 0);
                r_51 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_51);
            n_51 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, q_51, r_51);
            z_6 = t;
            t = SSLsetAnnotations(z_6, n_51);
            LocalPopChoice(v_28);
            {
              ATerm u_51 = NULL,v_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,f_52 = NULL,a_7 = NULL;
              f_52 = t;
              if(match_cons(t, sym_App_2))
                {
                  v_51 = ATgetArgument(t, 0);
                  y_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_52);
              u_51 = t;
              t = v_51;
              t = mark_buv_0_0(t);
              z_51 = t;
              t = y_51;
              t = mark_build_vars_0_0(t);
              a_52 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, z_51, a_52);
              a_7 = t;
              t = SSLsetAnnotations(a_7, u_51);
            }
          }
        else
          {
            t = u_28;
            {
              ATerm x_28 = t;
              int y_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,b_7 = NULL;
                  i_52 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      h_52 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_52);
                  g_52 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, h_52);
                  b_7 = t;
                  t = SSLsetAnnotations(b_7, g_52);
                  LocalPopChoice(y_28);
                  {
                    ATerm j_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,c_7 = NULL;
                    o_52 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        m_52 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(o_52);
                    j_52 = t;
                    t = m_52;
                    t = mark_buv_0_0(t);
                    n_52 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, n_52);
                    c_7 = t;
                    t = SSLsetAnnotations(c_7, j_52);
                  }
                }
              else
                {
                  t = x_28;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_9 (ATerm k_41, ATerm l_41, ATerm m_41, ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
  q_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_41, l_41);
  t = c_10(k_41, l_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_29 = ATgetFirst((ATermList) t);
      p_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_52), m_41);
  r_52 = t;
  t = SSL_table_put(k_41, l_41, r_52);
  t = q_52;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,z_52 = NULL;
  u_52 = t;
  t = term_y_24;
  v_52 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_52);
  w_52 = t;
  t = term_c_29;
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_24, (ATerm)ATmakeAppl(sym_Var_1, u_52), term_c_29);
  t = a_9(v_52, w_52, z_52, t);
  t = u_52;
  return(t);
}
ATerm d_9 (ATerm i_41, ATerm j_41, ATerm t)
{
  ATerm a_53 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_41, j_41);
  t = c_10(i_41, j_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_53 = ATgetFirst((ATermList) t);
      {
        ATerm d_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_53;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  y_54 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,t_26 = NULL;
        t = term_y_24;
        t_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_24, y_54);
        t = d_9(t_26, y_54, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm h_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_29) != ATmakeSymbol("v_1", 0, ATtrue)))
              _fail(t);
            m_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, z_54);
        n_26 = t;
        t = (ATerm) ATinsert(ATempty, m_26);
        o_26 = t;
        t = SSLsetAnnotations(n_26, o_26);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        {
          ATerm i_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,k_27 = NULL;
              t = term_y_24;
              k_27 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_y_24, y_54);
              t = d_9(k_27, y_54, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm k_29 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_29) != ATmakeSymbol("s_1", 0, ATtrue)))
                    _fail(t);
                  d_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, z_54);
              e_27 = t;
              t = (ATerm) ATinsert(ATempty, d_27);
              f_27 = t;
              t = SSLsetAnnotations(e_27, f_27);
              ;
              LocalPopChoice(j_29);
            }
          else
            {
              t = i_29;
              {
                ATerm t_27 = NULL,w_27 = NULL,x_27 = NULL,r_28 = NULL;
                t = term_y_24;
                r_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_24, y_54);
                t = d_9(r_28, y_54, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm o_29 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_29) != ATmakeSymbol("p_1", 0, ATtrue)))
                      _fail(t);
                    t_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, z_54);
                w_27 = t;
                t = (ATerm) ATinsert(ATempty, t_27);
                x_27 = t;
                t = SSLsetAnnotations(w_27, x_27);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,q_55 = NULL,r_55 = NULL,j_7 = NULL;
  ATerm q_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = q_29;
    }
  r_55 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_55);
  i_55 = t;
  t = j_55;
  t = DeclareBound_0_0(t);
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_55);
  j_7 = t;
  t = SSLsetAnnotations(j_7, i_55);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_55 = NULL,a_56 = NULL,e_56 = NULL,n_7 = NULL;
      e_56 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_56);
      v_55 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_56);
      n_7 = t;
      t = SSLsetAnnotations(n_7, v_55);
      LocalPopChoice(v_29);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = u_29;
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,o_7 = NULL;
            j_56 = t;
            if(match_cons(t, sym_App_2))
              {
                h_56 = ATgetArgument(t, 0);
                i_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_56);
            g_56 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, h_56, i_56);
            o_7 = t;
            t = SSLsetAnnotations(o_7, g_56);
            LocalPopChoice(x_29);
            {
              ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,q_56 = NULL,s_56 = NULL,t_56 = NULL,p_7 = NULL;
              t_56 = t;
              if(match_cons(t, sym_App_2))
                {
                  n_56 = ATgetArgument(t, 0);
                  o_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_56);
              m_56 = t;
              t = n_56;
              t = mark_buv_0_0(t);
              q_56 = t;
              t = o_56;
              t = mark_build_vars_0_0(t);
              s_56 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, q_56, s_56);
              p_7 = t;
              t = SSLsetAnnotations(p_7, m_56);
            }
          }
        else
          {
            t = w_29;
            {
              ATerm y_29 = t;
              int c_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,r_7 = NULL;
                  w_56 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      v_56 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_56);
                  u_56 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, v_56);
                  r_7 = t;
                  t = SSLsetAnnotations(r_7, u_56);
                  LocalPopChoice(c_30);
                  {
                    ATerm z_56 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,s_7 = NULL;
                    e_57 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        c_57 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(e_57);
                    z_56 = t;
                    t = c_57;
                    t = mark_buv_0_0(t);
                    d_57 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, d_57);
                    s_7 = t;
                    t = SSLsetAnnotations(s_7, z_56);
                  }
                }
              else
                {
                  t = y_29;
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
  ATerm d_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_58 = NULL,x_58 = NULL;
      w_58 = t;
      if(match_cons(t, sym_Match_1))
        {
          x_58 = ATgetArgument(t, 0);
          {
            ATerm w_28 = NULL,z_28 = NULL,b_8 = NULL;
            t = SSLgetAnnotations(w_58);
            w_28 = t;
            t = x_58;
            t = mark_match_vars_0_0(t);
            z_28 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, z_28);
            b_8 = t;
            t = SSLsetAnnotations(b_8, w_28);
          }
        }
      else
        {
          ATerm l_29 = NULL,p_29 = NULL,d_8 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              x_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_58);
          l_29 = t;
          t = x_58;
          t = mark_build_vars_0_0(t);
          p_29 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, p_29);
          d_8 = t;
          t = SSLsetAnnotations(d_8, l_29);
        }
      ;
      LocalPopChoice(h_30);
    }
  else
    {
      t = d_30;
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = mark_scope_0_0(t);
            ;
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            {
              ATerm l_30 = t;
              int m_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = mark_let_0_0(t);
                  ;
                  LocalPopChoice(m_30);
                }
              else
                {
                  t = l_30;
                  {
                    ATerm n_30 = t;
                    int o_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = mark_traversal_0_0(t);
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
                              ATerm c_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL;
                              c_59 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  h_59 = ATgetArgument(t, 0);
                                  i_59 = ATgetArgument(t, 1);
                                  j_59 = ATgetArgument(t, 2);
                                  k_59 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = c_59;
                              t = x_8(h_59, i_59, j_59, k_59, t);
                              ;
                              LocalPopChoice(q_30);
                            }
                          else
                            {
                              t = p_30;
                              {
                                ATerm r_30 = t;
                                int s_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    ;
                                    LocalPopChoice(s_30);
                                  }
                                else
                                  {
                                    t = r_30;
                                    {
                                      ATerm t_30 = t;
                                      int v_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_59 = NULL,x_59 = NULL,f_60 = NULL,w_60 = NULL,h_61 = NULL,m_61 = NULL,n_61 = NULL;
                                          w_60 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              h_61 = ATgetArgument(t, 0);
                                              t = h_61;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  u_59 = ATgetArgument(t, 0);
                                                  x_59 = ATgetArgument(t, 1);
                                                  f_60 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = w_60;
                                              t = w_8(u_59, x_59, f_60, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  h_61 = ATgetArgument(t, 0);
                                                  t = h_61;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      u_59 = ATgetArgument(t, 0);
                                                      x_59 = ATgetArgument(t, 1);
                                                      f_60 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = w_60;
                                                  t = v_8(u_59, x_59, f_60, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      h_61 = ATgetArgument(t, 0);
                                                      m_61 = ATgetArgument(t, 1);
                                                      n_61 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = w_60;
                                                  t = u_8(h_61, m_61, n_61, t);
                                                }
                                            }
                                          ;
                                          LocalPopChoice(v_30);
                                        }
                                      else
                                        {
                                          t = t_30;
                                          {
                                            ATerm w_30 = t;
                                            int x_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
                                                ;
                                                LocalPopChoice(x_30);
                                              }
                                            else
                                              {
                                                t = w_30;
                                                {
                                                  ATerm y_30 = t;
                                                  int z_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = mark_prim_0_0(t);
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
                                                            ATerm c_62 = NULL;
                                                            c_62 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm c_31 = ATgetArgument(t, 0);
                                                                ATerm d_31 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = c_62;
                                                            t = t_8(t);
                                                            ;
                                                            LocalPopChoice(b_31);
                                                          }
                                                        else
                                                          {
                                                            t = a_31;
                                                            {
                                                              ATerm e_31 = t;
                                                              int f_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
                                                                  ;
                                                                  LocalPopChoice(f_31);
                                                                }
                                                              else
                                                                {
                                                                  t = e_31;
                                                                  {
                                                                    ATerm g_31 = t;
                                                                    int i_31 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(i_31);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_31;
                                                                        {
                                                                          ATerm j_31 = t;
                                                                          int l_31 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(l_31);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_31;
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
ATerm e_9 (ATerm g_96 (ATerm), ATerm p_40, ATerm n_40, ATerm t)
{
  ATerm m_62 = NULL,q_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,c_63 = NULL;
  u_62 = t;
  t = g_96(t);
  m_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_62, p_40, n_40);
  t = d_10(m_62, p_40, n_40, t);
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_63 = NULL;
        t = term_o_31;
        d_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_62, term_o_31);
        t = c_10(m_62, d_63, t);
        ;
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_62 = ATgetFirst((ATermList) t);
        t_62 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_o_31;
    v_62 = t;
    t = (ATerm) ATinsert(CheckATermList(t_62), (ATerm) ATinsert(CheckATermList(q_62), p_40));
    c_63 = t;
    t = SSL_table_put(m_62, v_62, c_63);
    t = u_62;
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL,g_63 = NULL;
  e_63 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_63);
  f_63 = t;
  t = term_v_31;
  g_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, e_63), term_v_31);
  t = e_9(w_4, f_63, g_63, t);
  t = e_63;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm h_63 = NULL,l_63 = NULL,m_63 = NULL,o_63 = NULL,s_63 = NULL,u_10 = NULL;
  if(((s_63 != NULL) && (s_63 != t)))
    _fail(t);
  else
    s_63 = t;
  if(match_cons(t, sym_Scope_2))
    {
      if(((l_63 != NULL) && (l_63 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_63 = ATgetArgument(t, 0);
      if(((m_63 != NULL) && (m_63 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(s_63));
  if(((h_63 != NULL) && (h_63 != t)))
    _fail(t);
  else
    h_63 = t;
  t = not_null(m_63);
  {
    ATerm z_4 (ATerm t)
    {
      ATerm c_64 = NULL;
      c_64 = t;
      t = not_null(l_63);
      t = map_1_0(DeclareUnbound_0_0, t);
      t = c_64;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(y_4, z_4, t);
    if(((o_63 != NULL) && (o_63 != t)))
      _fail(t);
    else
      o_63 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_63), not_null(o_63));
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    t = SSLsetAnnotations(not_null(u_10), not_null(h_63));
  }
  return(t);
}
ATerm tboundin_3_0 (ATerm z_105 (ATerm), ATerm a_106 (ATerm), ATerm b_106 (ATerm), ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL,b_68 = NULL,d_68 = NULL;
  b_68 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_68 = ATgetArgument(t, 0);
      u_67 = ATgetArgument(t, 1);
      {
        ATerm a_30 = NULL,e_30 = NULL,g_30 = NULL,e_11 = NULL;
        t = SSLgetAnnotations(b_68);
        a_30 = t;
        t = d_68;
        t = b_106(t);
        e_30 = t;
        t = u_67;
        t = z_105(t);
        g_30 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, e_30, g_30);
        e_11 = t;
        t = SSLsetAnnotations(e_11, a_30);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          d_68 = ATgetArgument(t, 0);
          u_67 = ATgetArgument(t, 1);
          v_67 = ATgetArgument(t, 2);
          w_67 = ATgetArgument(t, 3);
          {
            ATerm k_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,j_11 = NULL;
            t = SSLgetAnnotations(b_68);
            k_31 = t;
            t = d_68;
            t = b_106(t);
            p_31 = t;
            t = u_67;
            t = b_106(t);
            q_31 = t;
            t = v_67;
            t = b_106(t);
            r_31 = t;
            t = w_67;
            t = z_105(t);
            s_31 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, p_31, q_31, r_31, s_31);
            j_11 = t;
            t = SSLsetAnnotations(j_11, k_31);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              d_68 = ATgetArgument(t, 0);
              u_67 = ATgetArgument(t, 1);
              v_67 = ATgetArgument(t, 2);
              w_67 = ATgetArgument(t, 3);
              {
                ATerm e_32 = NULL,j_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,o_11 = NULL;
                t = SSLgetAnnotations(b_68);
                e_32 = t;
                t = d_68;
                t = b_106(t);
                j_32 = t;
                t = u_67;
                t = b_106(t);
                n_32 = t;
                t = v_67;
                t = b_106(t);
                o_32 = t;
                t = w_67;
                t = z_105(t);
                p_32 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, j_32, n_32, o_32, p_32);
                o_11 = t;
                t = SSLsetAnnotations(o_11, e_32);
              }
            }
          else
            {
              ATerm b_33 = NULL,e_33 = NULL,q_11 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  d_68 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_68);
              b_33 = t;
              t = d_68;
              t = z_105(t);
              e_33 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, e_33);
              q_11 = t;
              t = SSLsetAnnotations(q_11, b_33);
            }
        }
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm w_68 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_68);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_31);
    }
  else
    {
      t = w_31;
      {
        ATerm e_69 = NULL,f_69 = NULL,l_69 = NULL,r_69 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            e_69 = ATgetArgument(t, 0);
            t = e_69;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                e_69 = ATgetArgument(t, 0);
                f_69 = ATgetArgument(t, 1);
                l_69 = ATgetArgument(t, 2);
                r_69 = ATgetArgument(t, 3);
                t = l_69;
                t = map_1_0(g_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    e_69 = ATgetArgument(t, 0);
                    f_69 = ATgetArgument(t, 1);
                    l_69 = ATgetArgument(t, 2);
                    r_69 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = l_69;
                t = map_1_0(i_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm c_70 = NULL;
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_70 = ATgetArgument(t, 0);
          {
            ATerm a_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_31);
      t = c_70;
    }
  else
    {
      t = y_31;
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
ATerm i_5 (ATerm t)
{
  ATerm m_70 = NULL;
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_70 = ATgetArgument(t, 0);
          {
            ATerm d_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_32);
      t = m_70;
    }
  else
    {
      t = b_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_70;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(a_5, f_5, tboundin_3_0, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm n_71 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_71);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      {
        ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_71 = ATgetArgument(t, 0);
            t = s_71;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                s_71 = ATgetArgument(t, 0);
                t_71 = ATgetArgument(t, 1);
                u_71 = ATgetArgument(t, 2);
                v_71 = ATgetArgument(t, 3);
                t = u_71;
                t = map_1_0(m_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    s_71 = ATgetArgument(t, 0);
                    t_71 = ATgetArgument(t, 1);
                    u_71 = ATgetArgument(t, 2);
                    v_71 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = u_71;
                t = map_1_0(n_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm m_74 = NULL;
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_74 = ATgetArgument(t, 0);
          {
            ATerm q_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_32);
      t = m_74;
    }
  else
    {
      t = h_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_74;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm v_74 = NULL;
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_74 = ATgetArgument(t, 0);
          {
            ATerm u_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_32);
      t = v_74;
    }
  else
    {
      t = r_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_74;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm u_70 = NULL,i_71 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      i_71 = ATgetArgument(t, 0);
      t = i_71;
      if(match_cons(t, sym_Rule_3))
        {
          u_70 = ATgetArgument(t, 0);
          {
            ATerm v_32 = ATgetArgument(t, 1);
          }
          {
            ATerm w_32 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_70;
      t = free_vars_3_0(j_5, l_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          i_71 = ATgetArgument(t, 0);
          {
            ATerm x_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = i_71;
    }
  return(t);
}
ATerm j_9 (ATerm k_92 (ATerm), ATerm h_35, ATerm g_35, ATerm t)
{
  ATerm o_75 (ATerm t)
  {
    ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL;
    j_75 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(g_35);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_75 = ATgetFirst((ATermList) t);
            l_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_32 = t;
          int z_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_75;
              {
                ATerm p_5 (ATerm t)
                {
                  t = not_null(g_35);
                  return(t);
                }
                t = k_9(k_92, p_5, not_null(k_75), not_null(l_75), t);
                t = o_75(t);
              }
              ;
              LocalPopChoice(z_32);
            }
          else
            {
              t = y_32;
              {
                ATerm m_33 = NULL,q_33 = NULL,v_11 = NULL;
                t = SSLgetAnnotations(j_75);
                m_33 = t;
                t = l_75;
                t = o_75(t);
                q_33 = t;
                t = (ATerm) ATinsert(CheckATermList(q_33), k_75);
                v_11 = t;
                t = SSLsetAnnotations(v_11, m_33);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(h_35);
  t = o_75(t);
  return(t);
}
ATerm foldr_3_0 (ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL;
  r_75 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_75;
      t = x_94(t);
    }
  else
    {
      ATerm w_75 = NULL,x_75 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_75 = ATgetFirst((ATermList) t);
          t_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_75;
      t = z_94(t);
      w_75 = t;
      t = t_75;
      t = foldr_3_0(x_94, y_94, z_94, t);
      x_75 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_75, x_75);
      t = y_94(t);
    }
  return(t);
}
ATerm k_9 (ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm l_35, ATerm k_35, ATerm t)
{
  t = o_92(t);
  {
    ATerm q_5 (ATerm t)
    {
      ATerm a_76 = NULL;
      a_76 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_35), a_76);
      t = n_92(t);
      return(t);
    }
    t = fetch_1_0(q_5, t);
    t = not_null(k_35);
  }
  return(t);
}
ATerm l_9 (ATerm f_92 (ATerm), ATerm f_35, ATerm e_35, ATerm t)
{
  ATerm q_76 (ATerm t)
  {
    ATerm l_76 = NULL,m_76 = NULL,n_76 = NULL;
    l_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_76;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_76 = ATgetFirst((ATermList) t);
            n_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_76;
              {
                ATerm r_5 (ATerm t)
                {
                  t = not_null(e_35);
                  return(t);
                }
                t = k_9(f_92, r_5, not_null(m_76), not_null(n_76), t);
                t = q_76(t);
              }
              ;
              LocalPopChoice(f_33);
            }
          else
            {
              t = c_33;
              {
                ATerm z_33 = NULL,d_34 = NULL,i_12 = NULL;
                t = SSLgetAnnotations(l_76);
                z_33 = t;
                t = n_76;
                t = q_76(t);
                d_34 = t;
                t = (ATerm) ATinsert(CheckATermList(d_34), m_76);
                i_12 = t;
                t = SSLsetAnnotations(i_12, z_33);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(f_35);
  t = q_76(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  ATerm m_77 (ATerm t)
  {
    ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL;
    l_77 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_77 = ATgetFirst((ATermList) t);
        k_77 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_34 = NULL,u_34 = NULL,n_12 = NULL;
          t = SSLgetAnnotations(l_77);
          n_34 = t;
          t = k_77;
          t = m_77(t);
          u_34 = t;
          t = (ATerm) ATinsert(CheckATermList(u_34), j_77);
          n_12 = t;
          t = SSLsetAnnotations(n_12, n_34);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_77;
        t = l_93(t);
      }
    return(t);
  }
  t = m_77(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL;
  t_76 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_76;
    }
  else
    {
      ATerm u_5 (ATerm t)
      {
        t = not_null(v_76);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((u_76 != NULL) && (u_76 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            u_76 = ATgetFirst((ATermList) t);
          if(((v_76 != NULL) && (v_76 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(u_76);
      t = at_end_1_0(u_5, t);
    }
  return(t);
}
ATerm y_77 (ATerm q_77, ATerm t)
{
  ATerm r_77 = NULL;
  t = SSL_explode_term(q_77);
  if(match_cons(t, sym__2))
    {
      ATerm g_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_77;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL;
  if(((v_77 != NULL) && (v_77 != t)))
    _fail(t);
  else
    v_77 = t;
  if(match_cons(t, sym__2))
    {
      t_77 = ATgetArgument(t, 0);
      u_77 = ATgetArgument(t, 1);
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_5 (ATerm t)
            {
              t = not_null(u_77);
              return(t);
            }
            t = not_null(t_77);
            t = at_end_1_0(w_5, t);
            ;
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            t = y_77(not_null(v_77), t);
          }
      }
    }
  else
    {
      t = y_77(not_null(v_77), t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm t)
{
  ATerm f_78 (ATerm t)
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_100(t);
        ;
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        {
          ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL,e_78 = NULL,p_12 = NULL;
          t = d_100(t);
          e_78 = t;
          if(match_cons(t, sym__2))
            {
              a_78 = ATgetArgument(t, 0);
              b_78 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_78);
          z_77 = t;
          t = a_78;
          t = f_100(t);
          c_78 = t;
          t = b_78;
          t = f_78(t);
          d_78 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_78, d_78);
          p_12 = t;
          t = SSLsetAnnotations(p_12, z_77);
          t = e_100(t);
        }
      }
    return(t);
  }
  t = f_78(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_33 = ATgetArgument(t, 0);
      if(((ATgetType(n_33) != AT_LIST) || !(ATisEmpty(n_33))))
        _fail(t);
      {
        ATerm p_33 = ATgetArgument(t, 1);
        if(((ATgetType(p_33) != AT_LIST) || !(ATisEmpty(p_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_33 = ATgetArgument(t, 0);
      if(((ATgetType(r_33) == AT_LIST) && !(ATisEmpty(r_33))))
        {
          m_78 = ATgetFirst((ATermList) r_33);
          n_78 = (ATerm) ATgetNext((ATermList) r_33);
        }
      else
        _fail(t);
      {
        ATerm s_33 = ATgetArgument(t, 1);
        if(((ATgetType(s_33) == AT_LIST) && !(ATisEmpty(s_33))))
          {
            o_78 = ATgetFirst((ATermList) s_33);
            p_78 = (ATerm) ATgetNext((ATermList) s_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_78, o_78), (ATerm) ATmakeAppl(sym__2, n_78, p_78));
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm q_78 = NULL,r_78 = NULL;
  if(match_cons(t, sym__2))
    {
      q_78 = ATgetArgument(t, 0);
      r_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_78), q_78);
  return(t);
}
ATerm p_9 (ATerm k_631, ATerm p_631, ATerm b_71, ATerm t)
{
  ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL;
  t = SSL_explode_term(p_631);
  if(match_cons(t, sym__2))
    {
      h_78 = ATgetArgument(t, 0);
      j_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_631);
  if(match_cons(t, sym__2))
    {
      if((h_78 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_78, j_78);
  t = genzip_4_0(a_6, b_6, c_6, _id, t);
  k_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_78, b_71);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t)
{
  ATerm t_78 (ATerm t)
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_111(t);
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = n_111(t);
        t = t_78(t);
      }
    return(t);
  }
  t = t_78(t);
  return(t);
}
ATerm for_3_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm t)
{
  t = p_111(t);
  t = while_not_2_0(q_111, r_111, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm c_79 = NULL;
  c_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, c_79);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,r_12 = NULL;
  g_79 = t;
  if(match_cons(t, sym__2))
    {
      e_79 = ATgetArgument(t, 0);
      f_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_79);
  d_79 = t;
  t = f_79;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_79, f_79);
  r_12 = t;
  t = SSLsetAnnotations(r_12, d_79);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL;
  z_79 = t;
  if(match_cons(t, sym__2))
    {
      a_80 = ATgetArgument(t, 0);
      b_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_80;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_80 = ATgetFirst((ATermList) t);
      d_80 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_80(a_80, b_80, z_79, t);
            ;
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_80), c_80), d_80);
          }
      }
    }
  else
    {
      t = n_80(a_80, b_80, z_79, t);
    }
  return(t);
}
ATerm n_80 (ATerm h_79, ATerm i_79, ATerm j_79, ATerm t)
{
  ATerm k_79 = NULL,n_79 = NULL,s_12 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL;
  t = SSLgetAnnotations(j_79);
  k_79 = t;
  t = i_79;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_79 = ATgetFirst((ATermList) t);
      t_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_79;
  if(match_cons(t, sym__2))
    {
      r_79 = ATgetArgument(t, 0);
      s_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_33 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_79;
        if((r_79 != t))
          {
            _fail(t);
          }
        t = t_79;
        ;
        LocalPopChoice(b_34);
      }
    else
      {
        t = y_33;
        t = i_79;
        t = p_9(r_79, s_79, t_79, t);
      }
    n_79 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_79, n_79);
    s_12 = t;
    t = SSLsetAnnotations(s_12, k_79);
  }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm m_80 = NULL;
  if(match_cons(t, sym__2))
    {
      m_80 = ATgetArgument(t, 0);
      if((m_80 != ATgetArgument(t, 1)))
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
  ATerm c_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_6, j_6, k_6, t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = c_34;
      {
        ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
        h_80 = t;
        if(match_cons(t, sym__2))
          {
            i_80 = ATgetArgument(t, 0);
            j_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_80;
        t = l_9(l_6, i_80, j_80, t);
      }
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL;
  if(match_cons(t, sym__2))
    {
      t_35 = ATgetArgument(t, 0);
      u_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(w_6, t_35, u_35, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm v_35 = NULL;
  if(match_cons(t, sym__2))
    {
      v_35 = ATgetArgument(t, 0);
      if((v_35 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL;
  if(match_cons(t, sym__2))
    {
      n_36 = ATgetArgument(t, 0);
      o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9(f_7, n_36, o_36, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm r_36 = NULL;
  if(match_cons(t, sym__2))
    {
      r_36 = ATgetArgument(t, 0);
      if((r_36 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_81 (ATerm t)
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_109(t);
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        {
          ATerm h_34 = t;
          int i_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_80 = NULL,q_80 = NULL,m_35 = NULL,p_35 = NULL;
              if(((p_80 != NULL) && (p_80 != t)))
                _fail(t);
              else
                p_80 = t;
              t = c_109(t);
              if(((q_80 != NULL) && (q_80 != t)))
                _fail(t);
              else
                q_80 = t;
              t = not_null(p_80);
              {
                ATerm o_6 (ATerm t)
                {
                  ATerm s_80 = NULL;
                  t = b_81(t);
                  s_80 = t;
                  t = (ATerm) ATmakeAppl(sym__2, s_80, not_null(q_80));
                  t = diff_0_0(t);
                  return(t);
                }
                t = d_109(o_6, b_81, r_6, t);
                if(((p_35 != NULL) && (p_35 != t)))
                  _fail(t);
                else
                  p_35 = t;
                t = SSL_explode_term(not_null(p_35));
                if(match_cons(t, sym__2))
                  {
                    ATerm j_34 = ATgetArgument(t, 0);
                    if(((m_35 != NULL) && (m_35 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      m_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(m_35);
                t = foldr_3_0(s_6, u_6, _id, t);
              }
              ;
              LocalPopChoice(i_34);
            }
          else
            {
              t = h_34;
              {
                ATerm x_35 = NULL,y_35 = NULL;
                y_35 = t;
                t = SSL_explode_term(y_35);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_34 = ATgetArgument(t, 0);
                    x_35 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_35;
                t = foldr_3_0(x_6, e_7, b_81, t);
              }
            }
        }
      }
    return(t);
  }
  t = b_81(t);
  return(t);
}
ATerm r_9 (ATerm c_41, ATerm d_41, ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL;
  d_81 = t;
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_41, d_41);
        t = c_10(c_41, d_41, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_34 = ATgetFirst((ATermList) t);
            c_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_34);
        t = SSL_table_put(c_41, d_41, c_81);
        t = (ATerm) ATmakeAppl(sym__3, c_41, d_41, c_81);
      }
    else
      {
        t = l_34;
        t = SSL_table_remove(c_41, d_41);
        t = (ATerm) ATmakeAppl(sym__2, c_41, d_41);
      }
    t = d_81;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_96 (ATerm), ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL;
  if(((h_81 != NULL) && (h_81 != t)))
    _fail(t);
  else
    h_81 = t;
  t = d_96(t);
  if(((g_81 != NULL) && (g_81 != t)))
    _fail(t);
  else
    g_81 = t;
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_81 = NULL;
        t = term_o_31;
        j_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_81), term_o_31);
        t = c_10(not_null(g_81), j_81, t);
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_81 != NULL) && (f_81 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_81 = ATgetFirst((ATermList) t);
        if(((e_81 != NULL) && (e_81 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          e_81 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_o_31;
    if(((i_81 != NULL) && (i_81 != t)))
      _fail(t);
    else
      i_81 = t;
    t = SSL_table_put(not_null(g_81), not_null(i_81), not_null(e_81));
    t = not_null(f_81);
    {
      ATerm g_7 (ATerm t)
      {
        ATerm k_81 = NULL;
        k_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_81), k_81);
        t = r_9(not_null(g_81), k_81, t);
        return(t);
      }
      t = map_1_0(g_7, t);
      t = not_null(h_81);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_103(t);
      t = e_103(t);
      ;
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      t = e_103(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL;
  n_81 = t;
  t = c_96(t);
  m_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_81, term_o_31);
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_81 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_35 = ATgetArgument(t, 0);
            ATerm i_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_31;
        u_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_81, term_o_31);
        t = c_10(m_81, u_81, t);
        ;
        LocalPopChoice(z_34);
      }
    else
      {
        t = y_34;
        t = (ATerm) ATempty;
      }
    o_81 = t;
    t = term_o_31;
    p_81 = t;
    t = (ATerm) ATinsert(CheckATermList(o_81), (ATerm) ATempty);
    q_81 = t;
    t = SSL_table_put(m_81, p_81, q_81);
    t = n_81;
  }
  return(t);
}
ATerm scope_2_0 (ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    t = end_scope_1_0(e_96, t);
    return(t);
  }
  t = begin_scope_1_0(e_96, t);
  t = restore_always_2_0(f_96, h_7, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = scope_2_0(l_7, m_7, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL;
  c_82 = t;
  t = free_vars_3_0(t_7, v_7, tboundin_3_0, t);
  b_82 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, b_82, c_82);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm n_35 = ATgetArgument(t, 0);
      a_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_82;
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        ;
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
        {
          ATerm s_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              ;
              LocalPopChoice(w_35);
            }
          else
            {
              t = s_35;
              {
                ATerm d_83 = NULL,e_83 = NULL,f_83 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    d_83 = ATgetArgument(t, 0);
                    e_83 = ATgetArgument(t, 1);
                    f_83 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = a_82;
                t = q_8(d_83, e_83, f_83, t);
              }
            }
        }
      }
    t = debug_1_0(z_7, t);
  }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm d_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_82);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm z_35 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_36);
    }
  else
    {
      t = z_35;
      {
        ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_82 = ATgetArgument(t, 0);
            t = f_82;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                f_82 = ATgetArgument(t, 0);
                g_82 = ATgetArgument(t, 1);
                h_82 = ATgetArgument(t, 2);
                i_82 = ATgetArgument(t, 3);
                t = h_82;
                t = map_1_0(w_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    f_82 = ATgetArgument(t, 0);
                    g_82 = ATgetArgument(t, 1);
                    h_82 = ATgetArgument(t, 2);
                    i_82 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = h_82;
                t = map_1_0(x_7, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm q_82 = NULL;
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_82 = ATgetArgument(t, 0);
          {
            ATerm i_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_36);
      t = q_82;
    }
  else
    {
      t = g_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_82;
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm z_82 = NULL;
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_82 = ATgetArgument(t, 0);
          {
            ATerm l_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_36);
      t = z_82;
    }
  else
    {
      t = j_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_82;
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_m_36;
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm z_81 = NULL;
  z_81 = t;
  t = scope_2_0(i_7, k_7, t);
  t = z_81;
  return(t);
}
ATerm filter_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL;
  u_83 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_83;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_83 = ATgetFirst((ATermList) t);
          w_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_36 = NULL,z_36 = NULL,a_37 = NULL,g_14 = NULL;
            t = SSLgetAnnotations(u_83);
            w_36 = t;
            t = v_83;
            t = c_102(t);
            z_36 = t;
            t = w_83;
            t = filter_1_0(c_102, t);
            a_37 = t;
            t = (ATerm) ATinsert(CheckATermList(a_37), z_36);
            g_14 = t;
            t = SSLsetAnnotations(g_14, w_36);
            ;
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            t = w_83;
            t = filter_1_0(c_102, t);
          }
      }
    }
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL,o_14 = NULL;
  o_84 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      n_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_84);
  m_84 = t;
  t = n_84;
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_84;
        ;
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_84;
      }
    t = (ATerm) ATmakeAppl(sym_Overlays_1, n_84);
    o_14 = t;
    t = SSLsetAnnotations(o_14, m_84);
  }
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = Cons_2_0(h_8, j_8, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL,p_14 = NULL;
  s_84 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      r_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_84);
  q_84 = t;
  t = r_84;
  {
    ATerm v_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_84;
        ;
        LocalPopChoice(x_36);
      }
    else
      {
        t = v_36;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_84;
      }
    t = (ATerm) ATmakeAppl(sym_Strategies_1, r_84);
    p_14 = t;
    t = SSLsetAnnotations(p_14, q_84);
  }
  return(t);
}
ATerm j_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL,s_14 = NULL,q_14 = NULL,j_14 = NULL;
  l_84 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_84);
  b_84 = t;
  t = c_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_84 = ATgetFirst((ATermList) t);
      f_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_84);
  d_84 = t;
  t = e_84;
  if(match_cons(t, sym_Signature_1))
    {
      j_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_84);
  i_84 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, j_84);
  j_14 = t;
  t = SSLsetAnnotations(j_14, i_84);
  k_84 = t;
  t = f_84;
  t = Cons_2_0(a_8, g_8, t);
  g_84 = t;
  t = (ATerm) ATinsert(CheckATermList(g_84), k_84);
  q_14 = t;
  t = SSLsetAnnotations(q_14, d_84);
  h_84 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_84);
  s_14 = t;
  t = SSLsetAnnotations(s_14, b_84);
  return(t);
}
ATerm s_9 (ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm u_84 = NULL;
  t = SSL_fputc(j_60, k_60);
  u_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_84);
  return(t);
}
ATerm t_9 (ATerm x_63, ATerm y_63, ATerm t)
{
  ATerm v_84 = NULL;
  t = SSL_write_term_to_stream_text(x_63, y_63);
  v_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_84);
  return(t);
}
ATerm v_9 (ATerm u_115 (ATerm), ATerm m_504, ATerm b_64, ATerm t)
{
  ATerm w_84 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_504, term_y_36);
  t = open_stream_0_0(t);
  w_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_84, b_64);
  t = u_115(t);
  t = fclose_0_0(t);
  t = b_64;
  return(t);
}
ATerm u_9 (ATerm t_63, ATerm u_63, ATerm t)
{
  ATerm x_84 = NULL;
  t = SSL_write_term_to_stream_baf(t_63, u_63);
  x_84 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_84);
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm a_85 = NULL,b_85 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_37 = ATgetArgument(t, 0);
      if(match_cons(b_37, sym_Stream_1))
        {
          a_85 = ATgetArgument(b_37, 0);
        }
      else
        _fail(t);
      b_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9(a_85, b_85, t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_37 = ATgetArgument(t, 0);
      if(match_cons(c_37, sym_Stream_1))
        {
          f_85 = ATgetArgument(c_37, 0);
        }
      else
        _fail(t);
      g_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_9(f_85, g_85, t);
  c_85 = t;
  t = term_d_37;
  d_85 = t;
  t = c_85;
  if(match_cons(t, sym_Stream_1))
    {
      e_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_37, c_85);
  t = s_9(d_85, e_85, t);
  return(t);
}
ATerm output_1_0 (ATerm d_120 (ATerm), ATerm t)
{
  ATerm y_84 = NULL,z_84 = NULL;
  t = d_120(t);
  z_84 = t;
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_37;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
        t = term_h_37;
      }
    y_84 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_84, z_84);
    {
      ATerm i_37 = t;
      int j_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_k_37;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, y_84, z_84);
          LocalPopChoice(j_37);
          if(match_cons(t, sym__2))
            {
              ATerm l_37 = ATgetArgument(t, 0);
              ATerm m_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_9(o_9, y_84, z_84, t);
        }
      else
        {
          t = i_37;
          if(match_cons(t, sym__2))
            {
              ATerm n_37 = ATgetArgument(t, 0);
              ATerm o_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_9(q_9, y_84, z_84, t);
        }
    }
  }
  return(t);
}
ATerm u_85 (ATerm o_85, ATerm t)
{
  t = SSL_fclose(o_85);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_85 = NULL,s_85 = NULL;
  s_85 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_85 = ATgetArgument(t, 0);
      {
        ATerm p_37 = t;
        int r_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_85);
            ;
            LocalPopChoice(r_37);
          }
        else
          {
            t = p_37;
            t = u_85(s_85, t);
          }
      }
    }
  else
    {
      t = u_85(s_85, t);
    }
  return(t);
}
ATerm w_9 (ATerm z_63, ATerm t)
{
  t = SSL_read_term_from_stream(z_63);
  return(t);
}
ATerm x_9 (ATerm l_60, ATerm m_60, ATerm t)
{
  ATerm v_85 = NULL;
  t = SSL_fopen(l_60, m_60);
  v_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_85);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_85 = NULL;
  t = SSL_stdin_stream();
  w_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_85);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_85 = NULL;
  t = SSL_stdout_stream();
  x_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_85);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_85 = NULL;
  t = SSL_stderr_stream();
  y_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_85);
  return(t);
}
ATerm f_87 (ATerm e_86, ATerm t)
{
  ATerm f_86 = NULL;
  t = SSL_explode_term(e_86);
  if(match_cons(t, sym__2))
    {
      ATerm s_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_37 = ATgetArgument(t, 1);
        if(((ATgetType(t_37) == AT_LIST) && !(ATisEmpty(t_37))))
          {
            f_86 = ATgetFirst((ATermList) t_37);
            {
              ATerm u_37 = (ATerm) ATgetNext((ATermList) t_37);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_86;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_86;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_86;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_86;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm g_87 (ATerm i_86, ATerm j_86, ATerm k_86, ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL,q_86 = NULL,c_15 = NULL;
  t = SSLgetAnnotations(k_86);
  n_86 = t;
  t = i_86;
  if(match_cons(t, sym_Path_1))
    {
      q_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_86, j_86);
  c_15 = t;
  t = SSLsetAnnotations(c_15, n_86);
  if(match_cons(t, sym__2))
    {
      l_86 = ATgetArgument(t, 0);
      m_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_9(l_86, m_86, t);
  return(t);
}
ATerm h_87 (ATerm s_86, ATerm t_86, ATerm u_86, ATerm t)
{
  ATerm v_86 = NULL,w_86 = NULL,x_86 = NULL,a_87 = NULL,d_15 = NULL;
  t = SSLgetAnnotations(u_86);
  x_86 = t;
  t = SSL_is_string(s_86);
  a_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_87, t_86);
  d_15 = t;
  t = SSLsetAnnotations(d_15, x_86);
  if(match_cons(t, sym__2))
    {
      v_86 = ATgetArgument(t, 0);
      w_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_9(v_86, w_86, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm c_87 = NULL,d_87 = NULL,e_87 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_37 = ATgetArgument(t, 0);
      ATerm w_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  c_87 = t;
  if(match_cons(t, sym__2))
    {
      d_87 = ATgetArgument(t, 0);
      e_87 = ATgetArgument(t, 1);
      {
        ATerm y_37 = t;
        int z_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_87(c_87, t);
            ;
            LocalPopChoice(z_37);
          }
        else
          {
            t = y_37;
            {
              ATerm a_38 = t;
              int c_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_87(d_87, e_87, c_87, t);
                  ;
                  LocalPopChoice(c_38);
                }
              else
                {
                  t = a_38;
                  t = h_87(d_87, e_87, c_87, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_87(c_87, t);
    }
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_d_38;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL;
  ATerm g_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_87 = NULL;
      l_87 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_87, term_k_38);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_38);
    }
  else
    {
      t = g_38;
      t = debug_1_0(a_10, t);
      _fail(t);
    }
  j_87 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_9(k_87, t);
  i_87 = t;
  t = j_87;
  t = fclose_0_0(t);
  t = i_87;
  return(t);
}
ATerm input_1_0 (ATerm e_120 (ATerm), ATerm t)
{
  ATerm l_38 = t;
  int m_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_38;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_38);
    }
  else
    {
      t = l_38;
      t = term_o_38;
    }
  t = ReadFromFile_0_0(t);
  t = e_120(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL;
  n_87 = t;
  t = term_p_38;
  t = whoami_0_0(t);
  o_87 = t;
  t = term_k_18;
  q_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_38), o_87), term_r_38);
  r_87 = t;
  t = SSL_printnl(q_87, r_87);
  t = term_u_38;
  p_87 = t;
  t = SSL_exit(p_87);
  t = n_87;
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm t_87 = NULL;
  t_87 = t;
  if(match_string(t, "-k"))
    {
      t = t_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_87;
    }
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL;
  u_87 = t;
  t = SSL_string_to_int(u_87);
  v_87 = t;
  t = term_v_38;
  w_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_38, v_87);
  t = f_10(w_87, v_87, t);
  t = u_87;
  return(t);
}
ATerm n_10 (ATerm t)
{
  t = term_y_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_10, m_10, n_10, t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm y_87 = NULL;
  y_87 = t;
  if(match_string(t, "-S"))
    {
      t = y_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_87;
    }
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm z_87 = NULL,a_88 = NULL;
  t = term_z_38;
  z_87 = t;
  t = term_d_39;
  a_88 = t;
  t = term_e_39;
  t = f_10(z_87, a_88, t);
  t = term_f_39;
  return(t);
}
ATerm v_10 (ATerm t)
{
  t = term_g_39;
  return(t);
}
ATerm w_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL;
  b_88 = t;
  t = SSL_string_to_int(b_88);
  c_88 = t;
  t = term_z_38;
  d_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_38, c_88);
  t = f_10(d_88, c_88, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_88);
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = term_h_39;
  return(t);
}
ATerm r_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm e_88 = NULL,f_88 = NULL;
  t = term_i_39;
  e_88 = t;
  t = term_p_38;
  f_88 = t;
  t = term_k_39;
  t = f_10(e_88, f_88, t);
  t = term_l_39;
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = term_n_39;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_10, r_10, v_10, t);
      ;
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
      {
        ATerm u_39 = t;
        int v_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_10, y_10, c_11, t);
            ;
            LocalPopChoice(v_39);
          }
        else
          {
            t = u_39;
            t = Option_3_0(r_11, s_11, t_11, t);
          }
      }
    }
  return(t);
}
ATerm f_10 (ATerm a_65, ATerm b_65, ATerm t)
{
  ATerm g_88 = NULL;
  t = term_w_39;
  g_88 = t;
  t = SSL_table_put(g_88, a_65, b_65);
  t = (ATerm) ATmakeAppl(sym__3, term_w_39, a_65, b_65);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_88 = NULL,m_88 = NULL,n_88 = NULL;
      t = term_p_38;
      t = d_0(t);
      l_88 = t;
      t = term_x_39;
      m_88 = t;
      t = term_z_39;
      n_88 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_39, term_z_39, l_88);
      t = d_10(m_88, n_88, l_88, t);
      _fail(t);
    }
  else
    {
      ATerm q_88 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_88 = ATgetFirst((ATermList) t);
          k_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_88;
      t = a_0(t);
      t = term_p_38;
      t = c_0(t);
      q_88 = t;
      t = (ATerm) ATinsert(CheckATermList(k_88), q_88);
    }
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm s_88 = NULL;
  s_88 = t;
  if(match_string(t, "-o"))
    {
      t = s_88;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_88;
    }
  return(t);
}
ATerm a_12 (ATerm t)
{
  ATerm t_88 = NULL,u_88 = NULL;
  t_88 = t;
  t = term_g_37;
  u_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_37, t_88);
  t = f_10(u_88, t_88, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_88);
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = term_a_40;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_11, a_12, m_12, t);
  return(t);
}
ATerm d_10 (ATerm x_40, ATerm y_40, ATerm w_40, ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
  w_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_40, y_40);
  {
    ATerm c_40 = t;
    int d_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_40 = ATgetArgument(t, 0);
            ATerm f_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_40, y_40);
        t = c_10(x_40, y_40, t);
        ;
        LocalPopChoice(d_40);
      }
    else
      {
        t = c_40;
        t = (ATerm) ATempty;
      }
    x_88 = t;
    t = (ATerm) ATinsert(CheckATermList(x_88), w_40);
    y_88 = t;
    t = SSL_table_put(x_40, y_40, y_88);
    t = w_88;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL;
      t = term_p_38;
      t = l_0(t);
      j_89 = t;
      t = term_x_39;
      k_89 = t;
      t = term_z_39;
      l_89 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_39, term_z_39, j_89);
      t = d_10(k_89, l_89, j_89, t);
      _fail(t);
    }
  else
    {
      ATerm p_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_89 = ATgetFirst((ATermList) t);
          g_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_89;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_89 = ATgetFirst((ATermList) t);
          i_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_89;
      t = i_0(t);
      t = h_89;
      t = k_0(t);
      p_89 = t;
      t = (ATerm) ATinsert(CheckATermList(i_89), p_89);
    }
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm r_89 = NULL;
  r_89 = t;
  if(match_string(t, "-i"))
    {
      t = r_89;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_89;
    }
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm s_89 = NULL,t_89 = NULL;
  s_89 = t;
  t = term_n_38;
  t_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_38, s_89);
  t = f_10(t_89, s_89, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_89);
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = term_g_40;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_12, q_12, t_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_38;
  t = whoami_0_0(t);
  u_89 = t;
  t = term_k_18;
  w_89 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_40), u_89);
  x_89 = t;
  t = SSL_printnl(w_89, x_89);
  t = term_u_38;
  v_89 = t;
  t = SSL_exit(v_89);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_40;
  t = get_config_0_0(t);
  return(t);
}
ATerm y_9 (ATerm b_39, ATerm c_39, ATerm t)
{
  ATerm j_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_39, c_39);
      ;
      LocalPopChoice(k_40);
    }
  else
    {
      t = j_40;
      t = SSL_addr(b_39, c_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL;
  z_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_89;
      t = v_94(t);
    }
  else
    {
      ATerm e_90 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_90 = ATgetFirst((ATermList) t);
          b_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_90;
      t = foldr_2_0(v_94, w_94, t);
      e_90 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_90, e_90);
      t = w_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = term_d_39;
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  if(match_cons(t, sym__2))
    {
      e_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_9(e_38, f_38, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_90 = NULL,x_37 = NULL,b_38 = NULL;
  t = times_0_0(t);
  b_38 = t;
  t = SSL_explode_term(b_38);
  if(match_cons(t, sym__2))
    {
      ATerm m_40 = ATgetArgument(t, 0);
      x_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_37;
  t = foldr_2_0(u_12, w_12, t);
  h_90 = t;
  t = SSL_TicksToSeconds(h_90);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL;
  s_90 = t;
  if(match_cons(t, sym__2))
    {
      t_90 = ATgetArgument(t, 0);
      u_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_90;
        if((t_90 != t))
          {
            _fail(t);
          }
        t = s_90;
        ;
        LocalPopChoice(r_40);
      }
    else
      {
        t = o_40;
        t = (ATerm) ATmakeAppl(sym__2, t_90, u_90);
        {
          ATerm s_40 = t;
          int t_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_90, u_90);
              ;
              LocalPopChoice(t_40);
            }
          else
            {
              t = s_40;
              t = SSL_gtr(t_90, u_90);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_90, u_90);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_117 (ATerm), ATerm t)
{
  ATerm y_90 = NULL;
  y_90 = t;
  {
    ATerm v_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_91 = NULL;
        t = term_z_38;
        t = get_config_0_0(t);
        a_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_91, term_u_38);
        t = geq_0_0(t);
        t = y_90;
        t = e_117(t);
        ;
        LocalPopChoice(z_40);
      }
    else
      {
        t = v_40;
        t = y_90;
      }
  }
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm c_91 = NULL,d_91 = NULL,f_91 = NULL,g_91 = NULL;
  t = run_time_0_0(t);
  c_91 = t;
  t = term_p_38;
  t = whoami_0_0(t);
  d_91 = t;
  t = term_k_18;
  f_91 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_41), c_91), term_a_41), d_91);
  g_91 = t;
  t = SSL_printnl(f_91, g_91);
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_41), c_91), term_a_41), d_91));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_91 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_39;
  h_91 = t;
  t = SSL_exit(h_91);
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm p_91 = NULL,q_91 = NULL;
  q_91 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_91;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_91 = ATgetArgument(t, 0);
          {
            ATerm a_39 = NULL,l_15 = NULL;
            t = SSLgetAnnotations(q_91);
            a_39 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_91);
            l_15 = t;
            t = SSLsetAnnotations(l_15, a_39);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_91;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_119 (ATerm), ATerm t)
{
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_41);
    }
  else
    {
      t = e_41;
      t = fetch_1_0(n_13, t);
    }
  t = u_119(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_91 = NULL,u_91 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_91 = ATgetFirst((ATermList) t);
      u_91 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_91 = NULL,z_91 = NULL;
        ATerm o_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_91)), not_null(z_91));
          return(t);
        }
        t = not_null(u_91);
        t = g_0(t);
        if(((y_91 != NULL) && (y_91 != t)))
          _fail(t);
        else
          y_91 = t;
        t = not_null(t_91);
        t = e_0(t);
        if(((z_91 != NULL) && (z_91 != t)))
          _fail(t);
        else
          z_91 = t;
        t = not_null(u_91);
        t = reverse_acc_2_0(e_0, o_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_38;
      t = g_0(t);
    }
  return(t);
}
ATerm r_13 (ATerm t)
{
  ATerm d_92 = NULL,e_92 = NULL,h_92 = NULL,o_15 = NULL;
  h_92 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_92);
  d_92 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_92);
  o_15 = t;
  t = SSLsetAnnotations(o_15, d_92);
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_13 (ATerm t)
{
  ATerm j_92 = NULL;
  j_92 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_92), term_h_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_92 = NULL,c_92 = NULL;
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_41);
    }
  else
    {
      t = n_41;
      t = fetch_1_0(r_13, t);
    }
  t = term_q_41;
  t = echo_0_0(t);
  t = term_x_39;
  b_92 = t;
  t = term_z_39;
  c_92 = t;
  t = term_r_41;
  t = c_10(b_92, c_92, t);
  t = reverse_acc_2_0(_id, u_13, t);
  t = map_1_0(v_13, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm r_93 (ATerm t)
  {
    ATerm o_93 = NULL,p_93 = NULL,q_93 = NULL;
    o_93 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_93 = ATgetFirst((ATermList) t);
        q_93 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_41 = t;
      int u_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_39 = NULL,b_40 = NULL,t_15 = NULL;
          t = SSLgetAnnotations(o_93);
          y_39 = t;
          t = p_93;
          t = f_93(t);
          b_40 = t;
          t = (ATerm) ATinsert(CheckATermList(q_93), b_40);
          t_15 = t;
          t = SSLsetAnnotations(t_15, y_39);
          ;
          LocalPopChoice(u_41);
        }
      else
        {
          t = t_41;
          {
            ATerm l_40 = NULL,q_40 = NULL,u_15 = NULL;
            t = SSLgetAnnotations(o_93);
            l_40 = t;
            t = q_93;
            t = r_93(t);
            q_40 = t;
            t = (ATerm) ATinsert(CheckATermList(q_40), p_93);
            u_15 = t;
            t = SSLsetAnnotations(u_15, l_40);
          }
        }
    }
    return(t);
  }
  t = r_93(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_93 = NULL,w_93 = NULL,x_93 = NULL;
  v_93 = t;
  {
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_93;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_41 = ATgetFirst((ATermList) t);
                ATerm b_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_93;
          }
        ;
        LocalPopChoice(w_41);
      }
    else
      {
        t = v_41;
        t = (ATerm) ATinsert(ATempty, v_93);
      }
    w_93 = t;
    t = term_h_37;
    x_93 = t;
    t = SSL_printnl(x_93, w_93);
    t = v_93;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_40;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_10 (ATerm z_57, ATerm a_58, ATerm t)
{
  t = SSL_strcat(z_57, a_58);
  return(t);
}
ATerm debug_1_0 (ATerm s_115 (ATerm), ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL;
  b_94 = t;
  t = s_115(t);
  c_94 = t;
  t = term_k_18;
  d_94 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_94), c_94);
  e_94 = t;
  t = SSL_printnl(d_94, e_94);
  t = b_94;
  return(t);
}
ATerm map_1_0 (ATerm v_92 (ATerm), ATerm t)
{
  ATerm t_94 (ATerm t)
  {
    ATerm q_94 = NULL,r_94 = NULL,s_94 = NULL;
    q_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_94;
      }
    else
      {
        ATerm p_41 = NULL,s_41 = NULL,x_41 = NULL,c_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_94 = ATgetFirst((ATermList) t);
            s_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_94);
        p_41 = t;
        t = r_94;
        t = v_92(t);
        s_41 = t;
        t = s_94;
        t = t_94(t);
        x_41 = t;
        t = (ATerm) ATinsert(CheckATermList(x_41), s_41);
        c_16 = t;
        t = SSLsetAnnotations(c_16, p_41);
      }
    return(t);
  }
  t = t_94(t);
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm c_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_42);
    }
  else
    {
      t = c_42;
    }
  return(t);
}
ATerm z_13 (ATerm t)
{
  t = term_f_42;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_95 = NULL;
      g_95 = t;
      t = SSL_is_string(g_95);
      ;
      LocalPopChoice(h_42);
    }
  else
    {
      t = g_42;
      {
        ATerm i_42 = t;
        int m_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_13, t);
            ;
            LocalPopChoice(m_42);
          }
        else
          {
            t = i_42;
            {
              ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL;
              m_95 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_95 = ATgetArgument(t, 0);
                  t = n_95;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_95 = ATgetArgument(t, 0);
                      t = n_95;
                      {
                        ATerm r_42 = t;
                        int s_42 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(s_42);
                          }
                        else
                          {
                            t = r_42;
                            t = debug_1_0(z_13, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_95 = NULL,t_95 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_95 = ATgetArgument(t, 0);
                          o_95 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_95;
                      t = eval_config_0_0(t);
                      s_95 = t;
                      t = o_95;
                      t = eval_config_0_0(t);
                      t_95 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_95, t_95);
                      t = b_10(s_95, t_95, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm c_10 (ATerm o_42, ATerm p_42, ATerm t)
{
  t = SSL_table_get(o_42, p_42);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL;
  x_95 = t;
  t = term_w_39;
  y_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_39, x_95);
  t = c_10(y_95, x_95, t);
  {
    ATerm t_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_95 = NULL,a_96 = NULL;
        t = eval_config_0_0(t);
        z_95 = t;
        t = term_w_39;
        a_96 = t;
        t = SSL_table_put(a_96, x_95, z_95);
        t = z_95;
        ;
        LocalPopChoice(v_42);
      }
    else
      {
        t = t_42;
      }
  }
  return(t);
}
ATerm h_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL;
  t = term_w_42;
  j_96 = t;
  t = term_p_38;
  k_96 = t;
  t = term_x_42;
  t = f_10(j_96, k_96, t);
  return(t);
}
ATerm k_14 (ATerm t)
{
  t = term_y_42;
  return(t);
}
ATerm m_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_14 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL;
  t = term_w_42;
  n_96 = t;
  t = term_p_38;
  o_96 = t;
  t = term_x_42;
  t = f_10(n_96, o_96, t);
  t = term_z_42;
  l_96 = t;
  t = term_p_38;
  m_96 = t;
  t = term_a_43;
  t = f_10(l_96, m_96, t);
  t = term_b_43;
  return(t);
}
ATerm u_14 (ATerm t)
{
  t = term_c_43;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_14, i_14, k_14, t);
      ;
      LocalPopChoice(f_43);
    }
  else
    {
      t = e_43;
      t = Option_3_0(m_14, t_14, u_14, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL,f_16 = NULL;
  u_96 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_96 = ATgetFirst((ATermList) t);
      r_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_96);
  p_96 = t;
  t = q_96;
  t = a_79(t);
  s_96 = t;
  t = r_96;
  t = b_79(t);
  t_96 = t;
  t = (ATerm) ATinsert(CheckATermList(t_96), s_96);
  f_16 = t;
  t = SSLsetAnnotations(f_16, p_96);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_121 (ATerm), ATerm t)
{
  ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL,e_97 = NULL,f_97 = NULL,h_16 = NULL;
  if(((z_96 != NULL) && (z_96 != t)))
    _fail(t);
  else
    z_96 = t;
  {
    ATerm g_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_43;
        t = x_121(t);
        ;
        LocalPopChoice(i_43);
      }
    else
      {
        t = g_43;
      }
    t = not_null(z_96);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_97 != NULL) && (b_97 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_97 = ATgetFirst((ATermList) t);
        if(((c_97 != NULL) && (c_97 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          c_97 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(z_96));
    if(((a_97 != NULL) && (a_97 != t)))
      _fail(t);
    else
      a_97 = t;
    t = term_i_40;
    if(((f_97 != NULL) && (f_97 != t)))
      _fail(t);
    else
      f_97 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_40, not_null(b_97));
    t = f_10(not_null(f_97), not_null(b_97), t);
    t = not_null(c_97);
    {
      ATerm p_97 (ATerm t)
      {
        ATerm k_43 = t;
        int l_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_43 = t;
            int n_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_97 = NULL;
                i_97 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_97;
                ;
                LocalPopChoice(n_43);
              }
            else
              {
                t = m_43;
                t = x_121(t);
                t = Cons_2_0(_id, p_97, t);
              }
            ;
            LocalPopChoice(l_43);
          }
        else
          {
            t = k_43;
            {
              ATerm l_97 = NULL,m_97 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_97 = ATgetFirst((ATermList) t);
                  m_97 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_97), (ATerm) ATmakeAppl(sym_Undefined_1, l_97));
            }
          }
        return(t);
      }
      t = p_97(t);
      if(((e_97 != NULL) && (e_97 != t)))
        _fail(t);
      else
        e_97 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(e_97)), (ATerm) ATmakeAppl(sym_Program_1, not_null(b_97)));
      if(((h_16 != NULL) && (h_16 != t)))
        _fail(t);
      else
        h_16 = t;
      t = SSLsetAnnotations(not_null(h_16), not_null(a_97));
    }
  }
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm b_98 = NULL;
  b_98 = t;
  if(match_string(t, "--help"))
    {
      t = b_98;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_98;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_98;
        }
    }
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm e_98 = NULL,f_98 = NULL;
  t = term_g_41;
  e_98 = t;
  t = term_p_38;
  f_98 = t;
  t = term_o_43;
  t = f_10(e_98, f_98, t);
  t = term_p_43;
  return(t);
}
ATerm y_14 (ATerm t)
{
  t = term_q_43;
  return(t);
}
ATerm a_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_121 (ATerm), ATerm t)
{
  ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL;
  if(((w_97 != NULL) && (w_97 != t)))
    _fail(t);
  else
    w_97 = t;
  t = term_x_39;
  if(((y_97 != NULL) && (y_97 != t)))
    _fail(t);
  else
    y_97 = t;
  t = term_z_39;
  if(((z_97 != NULL) && (z_97 != t)))
    _fail(t);
  else
    z_97 = t;
  t = (ATerm) ATempty;
  if(((a_98 != NULL) && (a_98 != t)))
    _fail(t);
  else
    a_98 = t;
  t = SSL_table_put(not_null(y_97), not_null(z_97), not_null(a_98));
  t = not_null(w_97);
  {
    ATerm v_14 (ATerm t)
    {
      ATerm r_43 = t;
      int s_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_121(t);
          ;
          LocalPopChoice(s_43);
        }
      else
        {
          t = r_43;
          {
            ATerm t_43 = t;
            int u_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_14, x_14, y_14, t);
                ;
                LocalPopChoice(u_43);
              }
            else
              {
                t = t_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_14, t);
    {
      ATerm v_43 = t;
      int w_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_98 = NULL;
          m_98 = t;
          {
            ATerm x_43 = t;
            int y_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_43 = NULL;
                t = m_98;
                {
                  ATerm z_43 = t;
                  int a_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_g_41;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(a_44);
                    }
                  else
                    {
                      t = z_43;
                      t = fetch_1_0(a_15, t);
                    }
                  t = m_98;
                  t = default_system_usage_0_0(t);
                  t = term_d_39;
                  d_43 = t;
                  t = SSL_exit(d_43);
                }
                ;
                LocalPopChoice(y_43);
              }
            else
              {
                t = x_43;
                {
                  ATerm h_43 = NULL;
                  t = term_w_42;
                  t = get_config_0_0(t);
                  t = m_98;
                  t = default_system_about_0_0(t);
                  t = term_d_39;
                  h_43 = t;
                  t = SSL_exit(h_43);
                }
              }
          }
          ;
          LocalPopChoice(w_43);
        }
      else
        {
          t = v_43;
          {
            ATerm f_44 = t;
            int g_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_98 = NULL,o_98 = NULL,p_98 = NULL;
                ATerm b_15 (ATerm t)
                {
                  ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL,n_16 = NULL;
                  s_98 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      r_98 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_98);
                  q_98 = t;
                  t = r_98;
                  if(((u_97 != NULL) && (u_97 != t)))
                    _fail(t);
                  else
                    u_97 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_98);
                  n_16 = t;
                  t = SSLsetAnnotations(n_16, q_98);
                  return(t);
                }
                t = fetch_1_0(b_15, t);
                t = term_k_18;
                if(((o_98 != NULL) && (o_98 != t)))
                  _fail(t);
                else
                  o_98 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_97)), term_h_44);
                if(((p_98 != NULL) && (p_98 != t)))
                  _fail(t);
                else
                  p_98 = t;
                t = SSL_printnl(not_null(o_98), not_null(p_98));
                t = (ATerm) ATmakeAppl(sym__2, term_k_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_97)), term_h_44));
                t = default_system_usage_0_0(t);
                t = term_u_38;
                if(((n_98 != NULL) && (n_98 != t)))
                  _fail(t);
                else
                  n_98 = t;
                t = SSL_exit(not_null(n_98));
                ;
                LocalPopChoice(g_44);
              }
            else
              {
                t = f_44;
              }
          }
        }
      if(((v_97 != NULL) && (v_97 != t)))
        _fail(t);
      else
        v_97 = t;
      t = term_x_39;
      if(((x_97 != NULL) && (x_97 != t)))
        _fail(t);
      else
        x_97 = t;
      t = SSL_table_destroy(not_null(x_97));
      t = not_null(v_97);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_119 (ATerm), ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL;
  t = parse_options_1_0(w_119, t);
  x_98 = t;
  t = term_i_44;
  a_99 = t;
  t = SSL_table_create(a_99);
  t = term_i_44;
  y_98 = t;
  t = term_j_44;
  z_98 = t;
  t = SSL_table_put(y_98, z_98, x_98);
  t = x_98;
  t = y_119(t);
  {
    ATerm k_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_119, t);
        ;
        LocalPopChoice(m_44);
      }
    else
      {
        t = k_44;
        {
          ATerm o_44 = t;
          int p_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_119(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_44);
            }
          else
            {
              t = o_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm q_44 = t;
  int u_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(u_44);
    }
  else
    {
      t = q_44;
      {
        ATerm v_44 = t;
        int w_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(w_44);
          }
        else
          {
            t = v_44;
            {
              ATerm x_44 = t;
              int y_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_15, j_15, m_15, t);
                  ;
                  LocalPopChoice(y_44);
                }
              else
                {
                  t = x_44;
                  {
                    ATerm z_44 = t;
                    int a_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(a_45);
                      }
                    else
                      {
                        t = z_44;
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
ATerm h_15 (ATerm t)
{
  t = input_1_0(n_15, t);
  return(t);
}
ATerm i_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm c_99 = NULL,d_99 = NULL;
  t = term_k_37;
  c_99 = t;
  t = term_p_38;
  d_99 = t;
  t = term_b_45;
  t = f_10(c_99, d_99, t);
  t = term_c_45;
  return(t);
}
ATerm m_15 (ATerm t)
{
  t = term_h_45;
  return(t);
}
ATerm n_15 (ATerm t)
{
  t = output_1_0(r_15, t);
  return(t);
}
ATerm r_15 (ATerm t)
{
  ATerm f_99 = NULL;
  f_99 = t;
  t = spec_use_def_0_0(t);
  t = f_99;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(f_15, default_usage_0_0, _id, h_15, t);
  return(t);
}
