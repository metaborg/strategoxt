#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_StratRule_3;
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
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Some_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
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
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
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
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_v_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_a_49;
ATerm term_u_48;
ATerm term_r_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_j_48;
ATerm term_z_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_k_47;
ATerm term_f_47;
ATerm term_b_47;
ATerm term_z_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_x_45;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_v_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_f_44;
ATerm term_x_43;
ATerm term_s_43;
ATerm term_s_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_d_42;
ATerm term_x_41;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_v_28;
ATerm term_l_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_u_20;
ATerm term_z_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_g_19;
ATerm term_l_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_t_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATempty);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in overlay ", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n   ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in rule ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** Error in definition ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("variable '", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but not bound", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_v_16, (ATerm) ATempty);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in overlay ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol(":\n  ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in rule ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("* Warning in definition ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("' used, but may not be bound", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("MarkVar", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("i_1", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("bound", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Defined_2, term_z_26, term_a_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("(un)bound", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("k_1", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Defined_2, term_z_33, term_a_27);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_Defined_2, term_b_36, term_c_36);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym__2, term_o_44, term_q_44);
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_44);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym__2, term_w_44, term_i_44);
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_q_44);
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_l_44);
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym__2, term_f_45, term_g_45);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(sym__2, term_j_48, term_i_44);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(sym__2, term_o_48, term_i_44);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym__2, term_f_47, term_i_44);
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(sym__2, term_s_42, term_i_44);
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm r_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm z_8 (ATerm l_23, ATerm k_23, ATerm m_23, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm rdef_ud_0_0 (ATerm t);
ATerm Context_0_0 (ATerm t);
ATerm Unbound_0_0 (ATerm t);
ATerm Warning_0_0 (ATerm t);
ATerm MaybeUnbound_0_0 (ATerm t);
ATerm use_vars_0_0 (ATerm t);
ATerm bind_vars_0_0 (ATerm t);
ATerm unbound_vars_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm sdef_ud_0_0 (ATerm t);
ATerm mark_guardedlchoice_1_0 (ATerm w_116 (ATerm), ATerm t);
ATerm mark_lchoice_1_0 (ATerm v_116 (ATerm), ATerm t);
ATerm abstract_choice_2_0 (ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm t);
ATerm mark_choice_1_0 (ATerm u_116 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm mark_prim_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm j_90 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
ATerm mark_call_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm b_9 (ATerm b_64, ATerm c_64, ATerm d_64, ATerm t);
static ATerm j_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm c_9 (ATerm v_63, ATerm z_63, ATerm x_63, ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm d_9 (ATerm p_63, ATerm t_63, ATerm r_63, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm mark_rdef_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm IntroduceBound_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm e_9 (ATerm n_62, ATerm o_62, ATerm p_62, ATerm r_62, ATerm t);
ATerm CompareEntries_0_0 (ATerm t);
static ATerm f_9 (ATerm y_60, ATerm z_60, ATerm x_60, ATerm t);
static ATerm r_4 (ATerm t);
ATerm isect_MarkVar_0_0 (ATerm t);
ATerm mark_traversal_0_0 (ATerm t);
static ATerm g_9 (ATerm z_30, ATerm y_30, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_MarkVar_0_0 (ATerm t);
ATerm undefine_unbound_MarkVar_0_1 (ATerm l_61, ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm mark_let_0_0 (ATerm t);
ATerm mark_build_vars_0_0 (ATerm t);
static ATerm h_9 (ATerm j_30, ATerm k_30, ATerm l_30, ATerm t);
ATerm DeclareBound_0_0 (ATerm t);
static ATerm k_9 (ATerm h_30, ATerm i_30, ATerm t);
ATerm MarkVar_0_0 (ATerm t);
ATerm MarkAndBind_0_0 (ATerm t);
ATerm mark_match_vars_0_0 (ATerm t);
ATerm mark_buv_0_0 (ATerm t);
static ATerm l_9 (ATerm n_88 (ATerm), ATerm o_29, ATerm m_29, ATerm t);
static ATerm h_5 (ATerm t);
ATerm DeclareUnbound_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm mark_scope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm p_9 (ATerm q_84 (ATerm), ATerm c_24, ATerm b_24, ATerm t);
ATerm foldr_3_0 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm t);
static ATerm q_9 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm g_24, ATerm f_24, ATerm t);
static ATerm r_9 (ATerm l_84 (ATerm), ATerm a_24, ATerm z_23, ATerm t);
ATerm genzip_4_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_9 (ATerm b_627, ATerm g_627, ATerm r_60, ATerm t);
ATerm while_not_2_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm t);
ATerm for_3_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm a_88 (ATerm p_86, ATerm q_86, ATerm r_86, ATerm t);
static ATerm d_7 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm free_vars_3_0 (ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm k_108 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm topdown_1_0 (ATerm r_88 (ATerm), ATerm t);
static ATerm y_9 (ATerm b_30, ATerm c_30, ATerm t);
ATerm end_scope_1_0 (ATerm k_88 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm j_88 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm def_use_def_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_101 (ATerm), ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm spec_use_def_0_0 (ATerm t);
static ATerm a_10 (ATerm b_38, ATerm c_38, ATerm t);
static ATerm b_10 (ATerm c_44, ATerm d_44, ATerm t);
static ATerm d_10 (ATerm g_98 (ATerm), ATerm x_412, ATerm g_44, ATerm t);
static ATerm c_10 (ATerm y_43, ATerm z_43, ATerm t);
static ATerm q_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm output_1_0 (ATerm m_113 (ATerm), ATerm t);
static ATerm d_94 (ATerm x_93, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_10 (ATerm e_44, ATerm t);
static ATerm f_10 (ATerm d_38, ATerm e_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_95 (ATerm o_94, ATerm t);
static ATerm q_95 (ATerm s_94, ATerm t_94, ATerm u_94, ATerm t);
static ATerm r_95 (ATerm c_95, ATerm d_95, ATerm e_95, ATerm t);
static ATerm g_10 (ATerm t);
static ATerm x_10 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm n_113 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_10 (ATerm v_41, ATerm w_41, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm y_12 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm q_13 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm r_85 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_98 (ATerm p_98, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm z_9 (ATerm b_42, ATerm a_42, ATerm t);
static ATerm m_10 (ATerm w_29, ATerm x_29, ATerm v_29, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_10 (ATerm a_28, ATerm b_28, ATerm t);
ATerm foldr_2_0 (ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_94 (ATerm), ATerm t);
static ATerm x_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_15 (ATerm t);
ATerm need_help_1_0 (ATerm d_113 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm f_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_85 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_10 (ATerm v_36, ATerm w_36, ATerm t);
ATerm debug_1_0 (ATerm e_98 (ATerm), ATerm t);
ATerm map_1_0 (ATerm b_85 (ATerm), ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm l_10 (ATerm n_31, ATerm o_31, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm y_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_115 (ATerm), ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
ATerm parse_options_1_0 (ATerm f_115 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_t_16;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm z_8 (ATerm l_23, ATerm k_23, ATerm m_23, ATerm t)
{
  ATerm a_0 = NULL,p_0 = NULL,t_0 = NULL,v_0 = NULL,x_0 = NULL;
  a_0 = t;
  t = (ATerm) ATempty;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_16, l_23);
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_x_16, l_23));
  t = l_9(r_0, v_0, x_0, t);
  t = (ATerm) ATempty;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_16, l_23);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_16, l_23));
  t = l_9(z_0, p_0, t_0, t);
  t = m_23;
  t = use_vars_0_0(t);
  t = a_0;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_t_16;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_t_16;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_t_16;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm rdef_ud_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,g_3 = NULL,i_3 = NULL,k_3 = NULL;
  z_2 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      a_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
      c_3 = ATgetArgument(t, 2);
      u_2 = ATgetArgument(t, 3);
      t = u_2;
      if(match_cons(t, sym_StratRule_3))
        {
          v_2 = ATgetArgument(t, 0);
          w_2 = ATgetArgument(t, 1);
          x_2 = ATgetArgument(t, 2);
          {
            ATerm u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
            t = (ATerm) ATempty;
            x_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_16, a_3);
            y_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_z_16, a_3));
            t = l_9(b_1, x_3, y_3, t);
            t = (ATerm) ATempty;
            u_3 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_17, a_3);
            w_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_a_17, a_3));
            t = l_9(c_1, u_3, w_3, t);
            t = (ATerm) ATmakeAppl(sym__3, v_2, w_2, x_2);
            t = unbound_vars_0_0(t);
            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_3, b_3, c_3, (ATerm) ATmakeAppl(sym_StratRule_3, v_2, w_2, x_2));
          }
        }
      else
        {
          if(match_cons(t, sym_Rule_3))
            {
              v_2 = ATgetArgument(t, 0);
              w_2 = ATgetArgument(t, 1);
              x_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = z_2;
          {
            ATerm b_17 = t;
            int c_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,h_3 = NULL;
                t = (ATerm) ATempty;
                f_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_17, a_3);
                h_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_f_17, a_3));
                t = l_9(d_1, f_3, h_3, t);
                t = (ATerm) ATempty;
                d_3 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_17, a_3);
                e_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_h_17, a_3));
                t = l_9(e_1, d_3, e_3, t);
                t = v_2;
                t = bind_vars_0_0(t);
                LocalPopChoice(c_17);
              }
            else
              {
                t = b_17;
                {
                  ATerm i_17 = t;
                  int m_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_2;
                      t = unbound_vars_0_0(t);
                      LocalPopChoice(m_17);
                    }
                  else
                    {
                      t = i_17;
                      t = w_2;
                      t = use_vars_0_0(t);
                    }
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_RDefT_4, a_3, b_3, c_3, (ATerm) ATmakeAppl(sym_Rule_3, v_2, w_2, x_2));
        }
    }
  else
    {
      if(match_cons(t, sym_RDef_3))
        {
          a_3 = ATgetArgument(t, 0);
          b_3 = ATgetArgument(t, 1);
          c_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_3;
      if(match_cons(t, sym_Rule_3))
        {
          g_3 = ATgetArgument(t, 0);
          i_3 = ATgetArgument(t, 1);
          k_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_2;
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
            t = (ATerm) ATempty;
            c_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_17, a_3);
            d_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_17, a_3));
            t = l_9(m_1, c_5, d_5, t);
            t = (ATerm) ATempty;
            a_5 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_17, a_3);
            b_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_17, a_3));
            t = l_9(n_1, a_5, b_5, t);
            t = g_3;
            t = bind_vars_0_0(t);
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            {
              ATerm t_17 = t;
              int v_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_3;
                  t = unbound_vars_0_0(t);
                  LocalPopChoice(v_17);
                }
              else
                {
                  t = t_17;
                  t = i_3;
                  t = use_vars_0_0(t);
                }
            }
          }
      }
      t = (ATerm) ATmakeAppl(sym_RDef_3, a_3, b_3, (ATerm) ATmakeAppl(sym_Rule_3, g_3, i_3, k_3));
    }
  return(t);
}
ATerm Context_0_0 (ATerm t)
{
  ATerm p_5 = NULL;
  p_5 = t;
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL,z_6 = NULL,a_7 = NULL;
        t = (ATerm) ATempty;
        z_6 = t;
        t = term_t_16;
        a_7 = t;
        t = term_y_17;
        t = k_9(a_7, z_6, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm z_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_17) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
            x_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_c_18), x_6), term_a_18);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        {
          ATerm e_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_7 = NULL,o_7 = NULL,u_7 = NULL;
              t = (ATerm) ATempty;
              o_7 = t;
              t = term_t_16;
              u_7 = t;
              t = term_y_17;
              t = k_9(u_7, o_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm k_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_18) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  l_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_c_18), l_7), term_l_18);
              LocalPopChoice(j_18);
            }
          else
            {
              t = e_18;
              {
                ATerm o_18 = t;
                int p_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_8 = NULL,m_8 = NULL,n_8 = NULL;
                    t = (ATerm) ATempty;
                    m_8 = t;
                    t = term_t_16;
                    n_8 = t;
                    t = term_y_17;
                    t = k_9(n_8, m_8, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm r_18 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) r_18) != ATmakeSymbol("q_0", 0, ATtrue)))
                          _fail(t);
                        i_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_c_18), i_8), term_l_18);
                    LocalPopChoice(p_18);
                  }
                else
                  {
                    t = o_18;
                    {
                      ATerm w_18 = t;
                      int z_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_8 = NULL,u_8 = NULL,x_8 = NULL;
                          t = (ATerm) ATempty;
                          u_8 = t;
                          t = term_t_16;
                          x_8 = t;
                          t = term_y_17;
                          t = k_9(x_8, u_8, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm a_19 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) a_19) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              r_8 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_c_18), r_8), term_l_18);
                          LocalPopChoice(z_18);
                        }
                      else
                        {
                          t = w_18;
                          {
                            ATerm c_19 = t;
                            int d_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_10 = NULL,s_10 = NULL,t_10 = NULL;
                                t = (ATerm) ATempty;
                                s_10 = t;
                                t = term_t_16;
                                t_10 = t;
                                t = term_y_17;
                                t = k_9(t_10, s_10, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm e_19 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) e_19) != ATmakeSymbol("h_0", 0, ATtrue)))
                                      _fail(t);
                                    p_10 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_c_18), p_10), term_g_19);
                                LocalPopChoice(d_19);
                              }
                            else
                              {
                                t = c_19;
                                {
                                  ATerm y_10 = NULL,a_11 = NULL,b_11 = NULL;
                                  t = (ATerm) ATempty;
                                  a_11 = t;
                                  t = term_t_16;
                                  b_11 = t;
                                  t = term_y_17;
                                  t = k_9(b_11, a_11, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm h_19 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) h_19) != ATmakeSymbol("b_0", 0, ATtrue)))
                                        _fail(t);
                                      y_10 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_5), term_c_18), y_10), term_g_19);
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
ATerm Unbound_0_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,v_6 = NULL;
  t_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6;
  if(match_cons(t, sym_ListVar_1))
    {
      s_6 = ATgetArgument(t, 0);
      {
        ATerm i_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_6;
            o_6 = t;
            t = t_6;
            LocalPopChoice(k_19);
          }
        else
          {
            t = i_19;
            t = v_6;
            o_6 = t;
            t = t_6;
          }
      }
    }
  else
    {
      t = v_6;
      o_6 = t;
      t = t_6;
    }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_19), o_6), term_m_19);
  t = Context_0_0(t);
  p_6 = t;
  t = term_p_19;
  r_6 = t;
  t = SSL_printnl(r_6, p_6);
  t = p_6;
  return(t);
}
ATerm Warning_0_0 (ATerm t)
{
  ATerm d_8 = NULL;
  d_8 = t;
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 = NULL,z_12 = NULL,a_13 = NULL;
        t = (ATerm) ATempty;
        z_12 = t;
        t = term_v_16;
        a_13 = t;
        t = term_s_19;
        t = k_9(a_13, z_12, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
            w_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_v_19), w_12), term_u_19);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        {
          ATerm w_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_13 = NULL,o_13 = NULL,p_13 = NULL;
              t = (ATerm) ATempty;
              o_13 = t;
              t = term_v_16;
              p_13 = t;
              t = term_s_19;
              t = k_9(p_13, o_13, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm y_19 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_19) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  m_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_v_19), m_13), term_z_19);
              LocalPopChoice(x_19);
            }
          else
            {
              t = w_19;
              {
                ATerm a_20 = t;
                int l_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_13 = NULL,v_13 = NULL,w_13 = NULL;
                    t = (ATerm) ATempty;
                    v_13 = t;
                    t = term_v_16;
                    w_13 = t;
                    t = term_s_19;
                    t = k_9(w_13, v_13, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm m_20 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) m_20) != ATmakeSymbol("s_0", 0, ATtrue)))
                          _fail(t);
                        t_13 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_v_19), t_13), term_z_19);
                    LocalPopChoice(l_20);
                  }
                else
                  {
                    t = a_20;
                    {
                      ATerm n_20 = t;
                      int o_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_14 = NULL,e_14 = NULL,g_14 = NULL;
                          t = (ATerm) ATempty;
                          e_14 = t;
                          t = term_v_16;
                          g_14 = t;
                          t = term_s_19;
                          t = k_9(g_14, e_14, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm q_20 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) q_20) != ATmakeSymbol("o_0", 0, ATtrue)))
                                _fail(t);
                              a_14 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_v_19), a_14), term_z_19);
                          LocalPopChoice(o_20);
                        }
                      else
                        {
                          t = n_20;
                          {
                            ATerm r_20 = t;
                            int s_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_14 = NULL,o_14 = NULL,q_14 = NULL;
                                t = (ATerm) ATempty;
                                o_14 = t;
                                t = term_v_16;
                                q_14 = t;
                                t = term_s_19;
                                t = k_9(q_14, o_14, t);
                                if(match_cons(t, sym_Defined_2))
                                  {
                                    ATerm t_20 = ATgetArgument(t, 0);
                                    if((ATgetSymbol((ATermAppl) t_20) != ATmakeSymbol("j_0", 0, ATtrue)))
                                      _fail(t);
                                    l_14 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_v_19), l_14), term_u_20);
                                LocalPopChoice(s_20);
                              }
                            else
                              {
                                t = r_20;
                                {
                                  ATerm w_14 = NULL,y_14 = NULL,z_14 = NULL;
                                  t = (ATerm) ATempty;
                                  y_14 = t;
                                  t = term_v_16;
                                  z_14 = t;
                                  t = term_s_19;
                                  t = k_9(z_14, y_14, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm v_20 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) v_20) != ATmakeSymbol("f_0", 0, ATtrue)))
                                        _fail(t);
                                      w_14 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_v_19), w_14), term_u_20);
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
ATerm MaybeUnbound_0_0 (ATerm t)
{
  ATerm t_8 = NULL,v_8 = NULL,w_8 = NULL,y_8 = NULL;
  w_8 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_8;
  if(match_cons(t, sym_ListVar_1))
    {
      v_8 = ATgetArgument(t, 0);
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_8;
            t_8 = t;
            t = w_8;
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            t = y_8;
            t_8 = t;
            t = w_8;
          }
      }
    }
  else
    {
      t = y_8;
      t_8 = t;
      t = w_8;
    }
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL,j_9 = NULL;
        t = term_a_21;
        t = get_config_0_0(t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_21), t_8), term_m_19);
        t = Warning_0_0(t);
        i_9 = t;
        t = term_p_19;
        j_9 = t;
        t = SSL_printnl(j_9, i_9);
        t = i_9;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
      }
  }
  return(t);
}
ATerm use_vars_0_0 (ATerm t)
{
  ATerm o_9 = NULL,s_9 = NULL;
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_9 = NULL,x_9 = NULL;
      t_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      x_9 = t;
      t = SSLgetAnnotations(t_9);
      o_9 = t;
      t = x_9;
      LocalPopChoice(d_21);
      {
        ATerm j_10 = NULL;
        j_10 = t;
        t = o_9;
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm g_21 = ATgetFirst((ATermList) t);
                  if((ATgetSymbol((ATermAppl) g_21) != ATmakeSymbol("bound", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm h_21 = (ATerm) ATgetNext((ATermList) t);
                    if(((ATgetType(h_21) != AT_LIST) || !(ATisEmpty(h_21))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(f_21);
              _fail(t);
            }
          else
            {
              t = e_21;
              {
                ATerm i_21 = t;
                int j_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm k_21 = ATgetFirst((ATermList) t);
                        if((ATgetSymbol((ATermAppl) k_21) != ATmakeSymbol("(un)bound", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm l_21 = (ATerm) ATgetNext((ATermList) t);
                          if(((ATgetType(l_21) != AT_LIST) || !(ATisEmpty(l_21))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_21);
                    t = (ATerm) ATmakeAppl(sym_Var_1, s_9);
                    t = MaybeUnbound_0_0(t);
                    _fail(t);
                  }
                else
                  {
                    t = i_21;
                    {
                      ATerm n_21 = t;
                      int o_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                            {
                              ATerm p_21 = ATgetFirst((ATermList) t);
                              if((ATgetSymbol((ATermAppl) p_21) != ATmakeSymbol("unbound", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm q_21 = (ATerm) ATgetNext((ATermList) t);
                                if(((ATgetType(q_21) != AT_LIST) || !(ATisEmpty(q_21))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(o_21);
                          t = (ATerm) ATmakeAppl(sym_Var_1, s_9);
                          t = Unbound_0_0(t);
                        }
                      else
                        {
                          t = n_21;
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Var_1, s_9);
                          t = Unbound_0_0(t);
                        }
                    }
                  }
              }
            }
        }
        t = j_10;
      }
    }
  else
    {
      t = c_21;
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_10 = NULL,r_10 = NULL,u_10 = NULL,g_11 = NULL,f_1 = NULL;
            g_11 = t;
            if(match_cons(t, sym_App_2))
              {
                r_10 = ATgetArgument(t, 0);
                u_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_11);
            n_10 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, r_10, u_10);
            f_1 = t;
            t = SSLsetAnnotations(f_1, n_10);
            LocalPopChoice(t_21);
            {
              ATerm j_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,t_11 = NULL,h_1 = NULL;
              t_11 = t;
              if(match_cons(t, sym_App_2))
                {
                  o_11 = ATgetArgument(t, 0);
                  p_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_11);
              j_11 = t;
              t = o_11;
              t = unbound_vars_0_0(t);
              q_11 = t;
              t = p_11;
              t = use_vars_0_0(t);
              r_11 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, q_11, r_11);
              h_1 = t;
              t = SSLsetAnnotations(h_1, j_11);
            }
          }
        else
          {
            t = s_21;
            {
              ATerm u_21 = t;
              int v_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,j_1 = NULL;
                  w_11 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      v_11 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_11);
                  u_11 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, v_11);
                  j_1 = t;
                  t = SSLsetAnnotations(j_1, u_11);
                  LocalPopChoice(v_21);
                  {
                    ATerm x_11 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,l_1 = NULL;
                    g_12 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        e_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(g_12);
                    x_11 = t;
                    t = e_12;
                    t = unbound_vars_0_0(t);
                    f_12 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, f_12);
                    l_1 = t;
                    t = SSLsetAnnotations(l_1, x_11);
                  }
                }
              else
                {
                  t = u_21;
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
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_12 = NULL,j_12 = NULL,k_12 = NULL,q_1 = NULL;
      k_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          j_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_12);
      h_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, j_12);
      q_1 = t;
      t = SSLsetAnnotations(q_1, h_12);
      LocalPopChoice(x_21);
      _fail(t);
    }
  else
    {
      t = w_21;
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_12 = NULL,m_12 = NULL,o_12 = NULL,p_12 = NULL,r_1 = NULL;
            p_12 = t;
            if(match_cons(t, sym_App_2))
              {
                m_12 = ATgetArgument(t, 0);
                o_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_12);
            l_12 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, m_12, o_12);
            r_1 = t;
            t = SSLsetAnnotations(r_1, l_12);
            LocalPopChoice(z_21);
            {
              ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL,v_12 = NULL,x_12 = NULL,c_13 = NULL,s_1 = NULL;
              c_13 = t;
              if(match_cons(t, sym_App_2))
                {
                  r_12 = ATgetArgument(t, 0);
                  s_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_13);
              q_12 = t;
              t = r_12;
              t = unbound_vars_0_0(t);
              v_12 = t;
              t = s_12;
              t = use_vars_0_0(t);
              x_12 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, v_12, x_12);
              s_1 = t;
              t = SSLsetAnnotations(s_1, q_12);
            }
          }
        else
          {
            t = y_21;
            {
              ATerm a_22 = t;
              int b_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,t_1 = NULL;
                  f_13 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      e_13 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_13);
                  d_13 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, e_13);
                  t_1 = t;
                  t = SSLsetAnnotations(t_1, d_13);
                  LocalPopChoice(b_22);
                  {
                    ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,u_1 = NULL;
                    j_13 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        h_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(j_13);
                    g_13 = t;
                    t = h_13;
                    t = unbound_vars_0_0(t);
                    i_13 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, i_13);
                    u_1 = t;
                    t = SSLsetAnnotations(u_1, g_13);
                  }
                }
              else
                {
                  t = a_22;
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
  ATerm c_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_14 = NULL,c_14 = NULL,f_14 = NULL,c_2 = NULL;
      f_14 = t;
      if(match_cons(t, sym_Build_1))
        {
          c_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_14);
      b_14 = t;
      t = (ATerm) ATmakeAppl(sym_Build_1, c_14);
      c_2 = t;
      t = SSLsetAnnotations(c_2, b_14);
      LocalPopChoice(e_22);
      {
        ATerm h_14 = NULL,m_14 = NULL,p_14 = NULL,s_14 = NULL,d_2 = NULL;
        s_14 = t;
        if(match_cons(t, sym_Build_1))
          {
            m_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_14);
        h_14 = t;
        t = m_14;
        t = use_vars_0_0(t);
        p_14 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, p_14);
        d_2 = t;
        t = SSLsetAnnotations(d_2, h_14);
      }
    }
  else
    {
      t = c_22;
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_14 = NULL,c_15 = NULL,d_15 = NULL,e_2 = NULL;
            d_15 = t;
            if(match_cons(t, sym_Match_1))
              {
                c_15 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_15);
            v_14 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, c_15);
            e_2 = t;
            t = SSLsetAnnotations(e_2, v_14);
            LocalPopChoice(g_22);
            {
              ATerm e_15 = NULL,g_15 = NULL,m_15 = NULL,n_15 = NULL,f_2 = NULL;
              n_15 = t;
              if(match_cons(t, sym_Match_1))
                {
                  g_15 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_15);
              e_15 = t;
              t = g_15;
              t = bind_vars_0_0(t);
              m_15 = t;
              t = (ATerm) ATmakeAppl(sym_Match_1, m_15);
              f_2 = t;
              t = SSLsetAnnotations(f_2, e_15);
            }
          }
        else
          {
            t = f_22;
            {
              ATerm h_22 = t;
              int j_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_15 = NULL,r_15 = NULL,s_15 = NULL,v_15 = NULL,z_15 = NULL,k_2 = NULL;
                  z_15 = t;
                  if(match_cons(t, sym_Rule_3))
                    {
                      r_15 = ATgetArgument(t, 0);
                      s_15 = ATgetArgument(t, 1);
                      v_15 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_15);
                  p_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Rule_3, r_15, s_15, v_15);
                  k_2 = t;
                  t = SSLsetAnnotations(k_2, p_15);
                  LocalPopChoice(j_22);
                  {
                    ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
                    f_18 = t;
                    if(match_cons(t, sym_Rule_3))
                      {
                        g_18 = ATgetArgument(t, 0);
                        h_18 = ATgetArgument(t, 1);
                        i_18 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    {
                      ATerm k_22 = t;
                      int l_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_15 = NULL,q_15 = NULL,l_2 = NULL;
                          t = SSLgetAnnotations(f_18);
                          j_15 = t;
                          t = g_18;
                          t = bind_vars_0_0(t);
                          q_15 = t;
                          t = (ATerm) ATmakeAppl(sym_Rule_3, q_15, h_18, i_18);
                          l_2 = t;
                          t = SSLsetAnnotations(l_2, j_15);
                          LocalPopChoice(l_22);
                        }
                      else
                        {
                          t = k_22;
                          {
                            ATerm m_22 = t;
                            int n_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_16 = NULL,q_16 = NULL,m_2 = NULL;
                                t = SSLgetAnnotations(f_18);
                                g_16 = t;
                                t = i_18;
                                t = unbound_vars_0_0(t);
                                q_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Rule_3, g_18, h_18, q_16);
                                m_2 = t;
                                t = SSLsetAnnotations(m_2, g_16);
                                LocalPopChoice(n_22);
                              }
                            else
                              {
                                t = m_22;
                                {
                                  ATerm g_17 = NULL,u_17 = NULL,n_2 = NULL;
                                  t = SSLgetAnnotations(f_18);
                                  g_17 = t;
                                  t = h_18;
                                  t = use_vars_0_0(t);
                                  u_17 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rule_3, g_18, u_17, i_18);
                                  n_2 = t;
                                  t = SSLsetAnnotations(n_2, g_17);
                                }
                              }
                          }
                        }
                    }
                  }
                }
              else
                {
                  t = h_22;
                  {
                    ATerm o_22 = t;
                    int p_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_18 = NULL,n_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,o_2 = NULL;
                        u_18 = t;
                        if(match_cons(t, sym_PrimT_3))
                          {
                            n_18 = ATgetArgument(t, 0);
                            s_18 = ATgetArgument(t, 1);
                            t_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(u_18);
                        m_18 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, n_18, s_18, t_18);
                        o_2 = t;
                        t = SSLsetAnnotations(o_2, m_18);
                        LocalPopChoice(p_22);
                        {
                          ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
                          c_20 = t;
                          if(match_cons(t, sym_PrimT_3))
                            {
                              d_20 = ATgetArgument(t, 0);
                              e_20 = ATgetArgument(t, 1);
                              f_20 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          {
                            ATerm q_22 = t;
                            int r_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm q_18 = NULL,f_19 = NULL,p_2 = NULL;
                                t = SSLgetAnnotations(c_20);
                                q_18 = t;
                                t = e_20;
                                t = unbound_vars_0_0(t);
                                f_19 = t;
                                t = (ATerm) ATmakeAppl(sym_PrimT_3, d_20, f_19, f_20);
                                p_2 = t;
                                t = SSLsetAnnotations(p_2, q_18);
                                LocalPopChoice(r_22);
                              }
                            else
                              {
                                t = q_22;
                                {
                                  ATerm b_20 = NULL,p_20 = NULL,q_2 = NULL;
                                  t = SSLgetAnnotations(c_20);
                                  b_20 = t;
                                  t = f_20;
                                  t = use_vars_0_0(t);
                                  p_20 = t;
                                  t = (ATerm) ATmakeAppl(sym_PrimT_3, d_20, e_20, p_20);
                                  q_2 = t;
                                  t = SSLsetAnnotations(q_2, b_20);
                                }
                              }
                          }
                        }
                      }
                    else
                      {
                        t = o_22;
                        {
                          ATerm s_22 = t;
                          int t_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,r_2 = NULL;
                              k_20 = t;
                              if(match_cons(t, sym_CallT_3))
                                {
                                  h_20 = ATgetArgument(t, 0);
                                  i_20 = ATgetArgument(t, 1);
                                  j_20 = ATgetArgument(t, 2);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(k_20);
                              g_20 = t;
                              t = (ATerm) ATmakeAppl(sym_CallT_3, h_20, i_20, j_20);
                              r_2 = t;
                              t = SSLsetAnnotations(r_2, g_20);
                              LocalPopChoice(t_22);
                              {
                                ATerm v_22 = NULL,e_23 = NULL,h_23 = NULL,n_23 = NULL;
                                v_22 = t;
                                if(match_cons(t, sym_CallT_3))
                                  {
                                    e_23 = ATgetArgument(t, 0);
                                    h_23 = ATgetArgument(t, 1);
                                    n_23 = ATgetArgument(t, 2);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm p_23 = t;
                                  int q_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm m_21 = NULL,r_21 = NULL,s_2 = NULL;
                                      t = SSLgetAnnotations(v_22);
                                      m_21 = t;
                                      t = h_23;
                                      t = unbound_vars_0_0(t);
                                      r_21 = t;
                                      t = (ATerm) ATmakeAppl(sym_CallT_3, e_23, r_21, n_23);
                                      s_2 = t;
                                      t = SSLsetAnnotations(s_2, m_21);
                                      LocalPopChoice(q_23);
                                    }
                                  else
                                    {
                                      t = p_23;
                                      {
                                        ATerm d_22 = NULL,i_22 = NULL,t_2 = NULL;
                                        t = SSLgetAnnotations(v_22);
                                        d_22 = t;
                                        t = n_23;
                                        t = use_vars_0_0(t);
                                        i_22 = t;
                                        t = (ATerm) ATmakeAppl(sym_CallT_3, e_23, h_23, i_22);
                                        t_2 = t;
                                        t = SSLsetAnnotations(t_2, d_22);
                                      }
                                    }
                                }
                              }
                            }
                          else
                            {
                              t = s_22;
                              t = SRTS_some(unbound_vars_0_0, t);
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
static ATerm o_1 (ATerm t)
{
  t = term_t_16;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_t_16;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm sdef_ud_0_0 (ATerm t)
{
  ATerm u_24 = NULL,w_24 = NULL,d_25 = NULL,e_25 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      w_24 = ATgetArgument(t, 0);
      d_25 = ATgetArgument(t, 1);
      e_25 = ATgetArgument(t, 2);
      u_24 = ATgetArgument(t, 3);
      {
        ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
        t = (ATerm) ATempty;
        n_25 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_23, w_24);
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_23, w_24));
        t = l_9(o_1, n_25, o_25, t);
        t = (ATerm) ATempty;
        l_25 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_23, w_24);
        m_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_23, w_24));
        t = l_9(p_1, l_25, m_25, t);
        t = u_24;
        t = unbound_vars_0_0(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, w_24, d_25, e_25, u_24);
      }
    }
  else
    {
      ATerm d_26 = NULL,i_26 = NULL,l_26 = NULL,m_26 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          w_24 = ATgetArgument(t, 0);
          d_25 = ATgetArgument(t, 1);
          e_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      l_26 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_23, w_24);
      m_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_23, w_24));
      t = l_9(v_1, l_26, m_26, t);
      t = (ATerm) ATempty;
      d_26 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_23, w_24);
      i_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_v_23, w_24));
      t = l_9(w_1, d_26, i_26, t);
      t = e_25;
      t = unbound_vars_0_0(t);
      t = (ATerm) ATmakeAppl(sym_SDef_3, w_24, d_25, e_25);
    }
  return(t);
}
ATerm mark_guardedlchoice_1_0 (ATerm w_116 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,r_26 = NULL,t_26 = NULL,e_5 = NULL;
  static ATerm x_1 (ATerm t)
  {
    ATerm u_26 = NULL,v_26 = NULL,x_26 = NULL,c_27 = NULL,f_27 = NULL,i_27 = NULL,m_27 = NULL,n_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,j_5 = NULL,g_5 = NULL;
    v_27 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        m_27 = ATgetArgument(t, 0);
        n_27 = ATgetArgument(t, 1);
        s_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_27);
    i_27 = t;
    t = m_27;
    t = w_116(t);
    t_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, t_27, n_27, s_27);
    g_5 = t;
    t = SSLsetAnnotations(g_5, i_27);
    u_27 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        v_26 = ATgetArgument(t, 0);
        x_26 = ATgetArgument(t, 1);
        c_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_27);
    u_26 = t;
    t = x_26;
    t = w_116(t);
    f_27 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, v_26, f_27, c_27);
    j_5 = t;
    t = SSLsetAnnotations(j_5, u_26);
    return(t);
  }
  static ATerm y_1 (ATerm t)
  {
    ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,c_28 = NULL,d_28 = NULL,m_5 = NULL;
    d_28 = t;
    if(match_cons(t, sym_GuardedLChoice_3))
      {
        x_27 = ATgetArgument(t, 0);
        y_27 = ATgetArgument(t, 1);
        z_27 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_28);
    w_27 = t;
    t = z_27;
    t = w_116(t);
    c_28 = t;
    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_27, y_27, c_28);
    m_5 = t;
    t = SSLsetAnnotations(m_5, w_27);
    return(t);
  }
  t_26 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      o_26 = ATgetArgument(t, 0);
      p_26 = ATgetArgument(t, 1);
      r_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_26);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, o_26, p_26, r_26);
  e_5 = t;
  t = SSLsetAnnotations(e_5, n_26);
  t = abstract_choice_2_0(x_1, y_1, t);
  return(t);
}
ATerm mark_lchoice_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,s_5 = NULL;
  static ATerm z_1 (ATerm t)
  {
    ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,u_5 = NULL;
    s_28 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        p_28 = ATgetArgument(t, 0);
        q_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_28);
    o_28 = t;
    t = p_28;
    t = v_116(t);
    r_28 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, r_28, q_28);
    u_5 = t;
    t = SSLsetAnnotations(u_5, o_28);
    return(t);
  }
  static ATerm a_2 (ATerm t)
  {
    ATerm t_28 = NULL,u_28 = NULL,x_28 = NULL,b_29 = NULL,c_29 = NULL,v_5 = NULL;
    c_29 = t;
    if(match_cons(t, sym_LChoice_2))
      {
        u_28 = ATgetArgument(t, 0);
        x_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_29);
    t_28 = t;
    t = x_28;
    t = v_116(t);
    b_29 = t;
    t = (ATerm) ATmakeAppl(sym_LChoice_2, u_28, b_29);
    v_5 = t;
    t = SSLsetAnnotations(v_5, t_28);
    return(t);
  }
  n_28 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_28);
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, l_28, m_28);
  s_5 = t;
  t = SSLsetAnnotations(s_5, e_28);
  t = abstract_choice_2_0(z_1, a_2, t);
  return(t);
}
ATerm abstract_choice_2_0 (ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,z_29 = NULL,d_30 = NULL;
  t_29 = t;
  t = save_MarkVar_0_0(t);
  d_29 = t;
  t = t_29;
  t = x_116(t);
  s_29 = t;
  t = save_MarkVar_0_0(t);
  e_29 = t;
  t = term_w_23;
  d_30 = t;
  t = SSL_table_destroy(d_30);
  t = term_w_23;
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_23, d_29);
  t = g_9(z_29, d_29, t);
  t = s_29;
  t = y_116(t);
  r_29 = t;
  t = e_29;
  t = isect_MarkVar_0_0(t);
  t = r_29;
  return(t);
}
ATerm mark_choice_1_0 (ATerm u_116 (ATerm), ATerm t)
{
  ATerm e_30 = NULL,n_30 = NULL,s_30 = NULL,t_30 = NULL,z_5 = NULL;
  static ATerm b_2 (ATerm t)
  {
    ATerm u_30 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,a_6 = NULL;
    f_31 = t;
    if(match_cons(t, sym_Choice_2))
      {
        c_31 = ATgetArgument(t, 0);
        d_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_31);
    u_30 = t;
    t = c_31;
    t = u_116(t);
    e_31 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, e_31, d_31);
    a_6 = t;
    t = SSLsetAnnotations(a_6, u_30);
    return(t);
  }
  static ATerm g_2 (ATerm t)
  {
    ATerm h_31 = NULL,i_31 = NULL,p_31 = NULL,r_31 = NULL,t_31 = NULL,b_6 = NULL;
    t_31 = t;
    if(match_cons(t, sym_Choice_2))
      {
        i_31 = ATgetArgument(t, 0);
        p_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_31);
    h_31 = t;
    t = p_31;
    t = u_116(t);
    r_31 = t;
    t = (ATerm) ATmakeAppl(sym_Choice_2, i_31, r_31);
    b_6 = t;
    t = SSLsetAnnotations(b_6, h_31);
    return(t);
  }
  t_30 = t;
  if(match_cons(t, sym_Choice_2))
    {
      n_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_30);
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, n_30, s_30);
  z_5 = t;
  t = SSLsetAnnotations(z_5, e_30);
  t = abstract_choice_2_0(b_2, g_2, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,g_6 = NULL,f_6 = NULL;
  z_31 = t;
  t = save_MarkVar_0_0(t);
  y_31 = t;
  t = z_31;
  if(match_cons(t, sym_Rec_2))
    {
      h_32 = ATgetArgument(t, 0);
      i_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_31);
  g_32 = t;
  t = i_32;
  t = mark_buv_0_0(t);
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, h_32, j_32);
  f_6 = t;
  t = SSLsetAnnotations(f_6, g_32);
  t = y_31;
  t = isect_MarkVar_0_0(t);
  t = z_31;
  if(match_cons(t, sym_Rec_2))
    {
      d_32 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_31);
  c_32 = t;
  t = e_32;
  t = mark_buv_0_0(t);
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, d_32, f_32);
  g_6 = t;
  t = SSLsetAnnotations(g_6, c_32);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_prim_0_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,l_6 = NULL,k_6 = NULL,j_6 = NULL;
  g_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      c_33 = ATgetArgument(t, 0);
      d_33 = ATgetArgument(t, 1);
      e_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_33);
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, c_33, d_33, e_33);
  j_6 = t;
  t = SSLsetAnnotations(j_6, b_33);
  f_33 = t;
  t = save_MarkVar_0_0(t);
  k_32 = t;
  t = f_33;
  if(match_cons(t, sym_PrimT_3))
    {
      v_32 = ATgetArgument(t, 0);
      x_32 = ATgetArgument(t, 1);
      y_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_33);
  u_32 = t;
  t = y_32;
  t = map_1_0(h_2, t);
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, v_32, x_32, z_32);
  k_6 = t;
  t = SSLsetAnnotations(k_6, u_32);
  a_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_32 = ATgetArgument(t, 0);
      n_32 = ATgetArgument(t, 1);
      o_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_33);
  l_32 = t;
  t = n_32;
  t = mark_buv_0_0(t);
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, m_32, s_32, o_32);
  l_6 = t;
  t = SSLsetAnnotations(l_6, l_32);
  t_32 = t;
  t = k_32;
  t = isect_MarkVar_0_0(t);
  t = t_32;
  return(t);
}
ATerm alltd_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  static ATerm h_33 (ATerm t)
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_90(t);
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = SRTS_all(h_33, t);
      }
    return(t);
  }
  t = h_33(t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = alltd_1_0(MarkVar_0_0, t);
  return(t);
}
ATerm mark_call_0_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,q_36 = NULL,r_36 = NULL;
  n_36 = t;
  if(match_cons(t, sym_CallT_3))
    {
      q_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
      m_36 = ATgetArgument(t, 2);
      {
        ATerm u_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,f_23 = NULL,g_23 = NULL,i_23 = NULL,j_23 = NULL,o_23 = NULL,t_23 = NULL,f_7 = NULL,e_7 = NULL,b_7 = NULL;
        t = SSLgetAnnotations(n_36);
        o_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, q_36, r_36, m_36);
        b_7 = t;
        t = SSLsetAnnotations(b_7, o_23);
        t_23 = t;
        t = save_MarkVar_0_0(t);
        u_22 = t;
        t = t_23;
        if(match_cons(t, sym_CallT_3))
          {
            d_23 = ATgetArgument(t, 0);
            f_23 = ATgetArgument(t, 1);
            g_23 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_23);
        c_23 = t;
        t = g_23;
        t = map_1_0(i_2, t);
        i_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, d_23, f_23, i_23);
        e_7 = t;
        t = SSLsetAnnotations(e_7, c_23);
        j_23 = t;
        if(match_cons(t, sym_CallT_3))
          {
            x_22 = ATgetArgument(t, 0);
            y_22 = ATgetArgument(t, 1);
            z_22 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_23);
        w_22 = t;
        t = y_22;
        t = mark_buv_0_0(t);
        a_23 = t;
        t = (ATerm) ATmakeAppl(sym_CallT_3, x_22, a_23, z_22);
        f_7 = t;
        t = SSLsetAnnotations(f_7, w_22);
        b_23 = t;
        t = u_22;
        t = isect_MarkVar_0_0(t);
        t = b_23;
      }
    }
  else
    {
      ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,x_24 = NULL,a_25 = NULL,h_7 = NULL,g_7 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          q_36 = ATgetArgument(t, 0);
          r_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_36);
      x_24 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, q_36, r_36);
      g_7 = t;
      t = SSLsetAnnotations(g_7, x_24);
      a_25 = t;
      t = save_MarkVar_0_0(t);
      o_24 = t;
      t = a_25;
      if(match_cons(t, sym_Call_2))
        {
          q_24 = ATgetArgument(t, 0);
          r_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_25);
      p_24 = t;
      t = r_24;
      t = mark_buv_0_0(t);
      s_24 = t;
      t = (ATerm) ATmakeAppl(sym_Call_2, q_24, s_24);
      h_7 = t;
      t = SSLsetAnnotations(h_7, p_24);
      t_24 = t;
      t = o_24;
      t = isect_MarkVar_0_0(t);
      t = t_24;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm b_9 (ATerm b_64, ATerm c_64, ATerm d_64, ATerm t)
{
  ATerm b_37 = NULL;
  static ATerm y_2 (ATerm t)
  {
    t = c_64;
    t = map_1_0(IntroduceBound_0_0, t);
    t = d_64;
    t = mark_build_vars_0_0(t);
    if(((b_37 != NULL) && (b_37 != t)))
      _fail(t);
    else
      b_37 = t;
    return(t);
  }
  t = scope_2_0(j_2, y_2, t);
  t = (ATerm) ATmakeAppl(sym_Overlay_3, b_64, c_64, not_null(b_37));
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm k_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_37);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            {
              ATerm m_37 = NULL,o_37 = NULL,p_37 = NULL,u_37 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  m_37 = ATgetArgument(t, 0);
                  o_37 = ATgetArgument(t, 1);
                  p_37 = ATgetArgument(t, 2);
                  u_37 = ATgetArgument(t, 3);
                  t = p_37;
                  t = map_1_0(o_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_37 = ATgetArgument(t, 0);
                      o_37 = ATgetArgument(t, 1);
                      p_37 = ATgetArgument(t, 2);
                      u_37 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_37;
                  t = map_1_0(p_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm j_38 = NULL;
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_38 = ATgetArgument(t, 0);
          {
            ATerm l_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_24);
      t = j_38;
    }
  else
    {
      t = j_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_38;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm y_38 = NULL;
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_38 = ATgetArgument(t, 0);
          {
            ATerm v_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_24);
      t = y_38;
    }
  else
    {
      t = m_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_38;
    }
  return(t);
}
static ATerm c_9 (ATerm v_63, ATerm z_63, ATerm x_63, ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,j_37 = NULL;
  static ATerm l_3 (ATerm t)
  {
    t = v_63;
    t = free_vars_3_0(m_3, n_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = v_63;
    t = mark_match_vars_0_0(t);
    if(((f_37 != NULL) && (f_37 != t)))
      _fail(t);
    else
      f_37 = t;
    t = x_63;
    t = mark_buv_0_0(t);
    if(((g_37 != NULL) && (g_37 != t)))
      _fail(t);
    else
      g_37 = t;
    t = z_63;
    t = mark_build_vars_0_0(t);
    if(((j_37 != NULL) && (j_37 != t)))
      _fail(t);
    else
      j_37 = t;
    return(t);
  }
  t = scope_2_0(j_3, l_3, t);
  t = (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_37), not_null(j_37), not_null(g_37)));
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm s_3 (ATerm t)
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
static ATerm t_3 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            {
              ATerm o_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_39 = ATgetArgument(t, 0);
                  r_39 = ATgetArgument(t, 1);
                  s_39 = ATgetArgument(t, 2);
                  t_39 = ATgetArgument(t, 3);
                  t = s_39;
                  t = map_1_0(v_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_39 = ATgetArgument(t, 0);
                      r_39 = ATgetArgument(t, 1);
                      s_39 = ATgetArgument(t, 2);
                      t_39 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_39;
                  t = map_1_0(z_3, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm e_40 = NULL;
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_40 = ATgetArgument(t, 0);
          {
            ATerm h_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_25);
      t = e_40;
    }
  else
    {
      t = f_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_40;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm v_40 = NULL;
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_40 = ATgetArgument(t, 0);
          {
            ATerm k_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_25);
      t = v_40;
    }
  else
    {
      t = i_25;
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
static ATerm d_9 (ATerm p_63, ATerm t_63, ATerm r_63, ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
  static ATerm r_3 (ATerm t)
  {
    t = p_63;
    t = free_vars_3_0(s_3, t_3, tboundin_3_0, t);
    t = map_1_0(DeclareUnbound_0_0, t);
    t = p_63;
    t = mark_match_vars_0_0(t);
    if(((j_39 != NULL) && (j_39 != t)))
      _fail(t);
    else
      j_39 = t;
    t = r_63;
    t = mark_buv_0_0(t);
    if(((k_39 != NULL) && (k_39 != t)))
      _fail(t);
    else
      k_39 = t;
    t = t_63;
    t = mark_build_vars_0_0(t);
    if(((l_39 != NULL) && (l_39 != t)))
      _fail(t);
    else
      l_39 = t;
    return(t);
  }
  t = scope_2_0(q_3, r_3, t);
  t = (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(j_39), not_null(l_39), not_null(k_39)));
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm k_43 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_43);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm r_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_25);
          }
        else
          {
            t = r_25;
            {
              ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_43 = ATgetArgument(t, 0);
                  p_43 = ATgetArgument(t, 1);
                  q_43 = ATgetArgument(t, 2);
                  r_43 = ATgetArgument(t, 3);
                  t = q_43;
                  t = map_1_0(c_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_43 = ATgetArgument(t, 0);
                      p_43 = ATgetArgument(t, 1);
                      q_43 = ATgetArgument(t, 2);
                      r_43 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_43;
                  t = map_1_0(d_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm p_44 = NULL;
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_44 = ATgetArgument(t, 0);
          {
            ATerm v_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_25);
      t = p_44;
    }
  else
    {
      t = t_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_44;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm j_45 = NULL;
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_45 = ATgetArgument(t, 0);
          {
            ATerm z_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_25);
      t = j_45;
    }
  else
    {
      t = w_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_45;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm r_46 = NULL;
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_46 = ATgetArgument(t, 0);
          {
            ATerm c_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_26);
      t = r_46;
    }
  else
    {
      t = a_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_46;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm y_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_46);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            {
              ATerm a_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  a_47 = ATgetArgument(t, 0);
                  h_47 = ATgetArgument(t, 1);
                  i_47 = ATgetArgument(t, 2);
                  j_47 = ATgetArgument(t, 3);
                  t = i_47;
                  t = map_1_0(j_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_47 = ATgetArgument(t, 0);
                      h_47 = ATgetArgument(t, 1);
                      i_47 = ATgetArgument(t, 2);
                      j_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_47;
                  t = map_1_0(k_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm q_47 = NULL;
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_47 = ATgetArgument(t, 0);
          {
            ATerm q_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_26);
      t = q_47;
    }
  else
    {
      t = j_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_47;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm e_48 = NULL;
  ATerm s_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_48 = ATgetArgument(t, 0);
          {
            ATerm y_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_26);
      t = e_48;
    }
  else
    {
      t = s_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_48;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm mark_rdef_0_0 (ATerm t)
{
  ATerm s_41 = NULL,u_41 = NULL,c_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  if(match_cons(t, sym_RDef_3))
    {
      l_42 = ATgetArgument(t, 0);
      m_42 = ATgetArgument(t, 1);
      n_42 = ATgetArgument(t, 2);
      {
        ATerm y_42 = NULL,f_43 = NULL,h_43 = NULL,j_43 = NULL;
        t = n_42;
        if(match_cons(t, sym_Rule_3))
          {
            s_41 = ATgetArgument(t, 0);
            u_41 = ATgetArgument(t, 1);
            c_42 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = n_42;
        t = free_vars_3_0(a_4, b_4, tboundin_3_0, t);
        y_42 = t;
        {
          static ATerm f_4 (ATerm t)
          {
            t = y_42;
            t = map_1_0(DeclareUnbound_0_0, t);
            t = s_41;
            t = mark_match_vars_0_0(t);
            if(((f_43 != NULL) && (f_43 != t)))
              _fail(t);
            else
              f_43 = t;
            t = c_42;
            t = mark_buv_0_0(t);
            if(((h_43 != NULL) && (h_43 != t)))
              _fail(t);
            else
              h_43 = t;
            t = u_41;
            t = mark_build_vars_0_0(t);
            if(((j_43 != NULL) && (j_43 != t)))
              _fail(t);
            else
              j_43 = t;
            return(t);
          }
          t = scope_2_0(e_4, f_4, t);
        }
        t = (ATerm) ATmakeAppl(sym_RDef_3, l_42, m_42, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_43), not_null(j_43), not_null(h_43)));
      }
    }
  else
    {
      ATerm y_45 = NULL,c_46 = NULL,f_46 = NULL,l_46 = NULL,n_46 = NULL,o_46 = NULL;
      if(match_cons(t, sym_RDefT_4))
        {
          l_42 = ATgetArgument(t, 0);
          m_42 = ATgetArgument(t, 1);
          n_42 = ATgetArgument(t, 2);
          o_42 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = o_42;
      if(match_cons(t, sym_Rule_3))
        {
          p_42 = ATgetArgument(t, 0);
          q_42 = ATgetArgument(t, 1);
          r_42 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_42;
      t = map_1_0(g_4, t);
      y_45 = t;
      t = o_42;
      t = free_vars_3_0(h_4, i_4, tboundin_3_0, t);
      o_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_46, y_45);
      t = diff_0_0(t);
      c_46 = t;
      {
        static ATerm m_4 (ATerm t)
        {
          t = y_45;
          t = map_1_0(IntroduceBound_0_0, t);
          t = c_46;
          t = map_1_0(DeclareUnbound_0_0, t);
          t = p_42;
          t = mark_match_vars_0_0(t);
          if(((f_46 != NULL) && (f_46 != t)))
            _fail(t);
          else
            f_46 = t;
          t = r_42;
          t = mark_buv_0_0(t);
          if(((l_46 != NULL) && (l_46 != t)))
            _fail(t);
          else
            l_46 = t;
          t = q_42;
          t = mark_build_vars_0_0(t);
          if(((n_46 != NULL) && (n_46 != t)))
            _fail(t);
          else
            n_46 = t;
          return(t);
        }
        t = scope_2_0(l_4, m_4, t);
      }
      t = (ATerm) ATmakeAppl(sym_RDefT_4, l_42, m_42, n_42, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_46), not_null(n_46), not_null(l_46)));
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm IntroduceBound_0_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,q_48 = NULL;
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_48);
  l_48 = t;
  t = term_b_27;
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, k_48), term_b_27);
  t = l_9(n_4, l_48, q_48, t);
  t = k_48;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm y_48 = NULL;
  ATerm d_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_48 = ATgetArgument(t, 0);
          {
            ATerm k_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_27);
      t = y_48;
    }
  else
    {
      t = d_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_48;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm e_9 (ATerm n_62, ATerm o_62, ATerm p_62, ATerm r_62, ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  t = p_62;
  t = map_1_0(o_4, t);
  s_48 = t;
  {
    static ATerm q_4 (ATerm t)
    {
      t = s_48;
      t = map_1_0(IntroduceBound_0_0, t);
      t = r_62;
      t = mark_buv_0_0(t);
      if(((t_48 != NULL) && (t_48 != t)))
        _fail(t);
      else
        t_48 = t;
      return(t);
    }
    t = scope_2_0(p_4, q_4, t);
  }
  t = (ATerm) ATmakeAppl(sym_SDefT_4, n_62, o_62, p_62, not_null(t_48));
  return(t);
}
ATerm CompareEntries_0_0 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,j_50 = NULL,l_50 = NULL,m_50 = NULL,u_50 = NULL;
  g_50 = t;
  if(match_cons(t, sym__2))
    {
      h_50 = ATgetArgument(t, 0);
      m_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_50;
  if(match_cons(t, sym_Undefined_0))
    {
      t = h_50;
      if(match_cons(t, sym_Undefined_0))
        {
          t = term_l_27;
        }
      else
        {
          t = term_l_27;
        }
    }
  else
    {
      ATerm o_27 = t;
      int q_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Defined_2))
            {
              ATerm r_27 = ATgetArgument(t, 0);
              u_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(q_27);
          t = h_50;
          if(match_cons(t, sym_Undefined_0))
            {
              t = term_l_27;
            }
          else
            {
              if(match_cons(t, sym_Defined_2))
                {
                  j_50 = ATgetArgument(t, 0);
                  l_50 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm f_28 = t;
                int g_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = (ATerm) ATmakeAppl(sym__2, l_50, u_50);
                    {
                      ATerm h_28 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm y_25 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              y_25 = ATgetArgument(t, 0);
                              if((y_25 != ATgetArgument(t, 1)))
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
                          t = h_28;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_Defined_2, j_50, term_v_28);
                    LocalPopChoice(g_28);
                  }
                else
                  {
                    t = f_28;
                    t = u_50;
                    if((l_50 != t))
                      {
                        _fail(t);
                      }
                    t = h_50;
                  }
              }
            }
        }
      else
        {
          t = o_27;
          t = h_50;
          if(!(match_cons(t, sym_Undefined_0)))
            _fail(t);
          t = term_l_27;
        }
    }
  return(t);
}
static ATerm f_9 (ATerm y_60, ATerm z_60, ATerm x_60, ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,c_51 = NULL;
  t = term_w_23;
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_23, y_60);
  t = l_10(c_51, y_60, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_50 = ATgetFirst((ATermList) t);
      {
        ATerm w_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_60, z_50);
  t = CompareEntries_0_0(t);
  a_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_60, (ATerm) ATinsert(CheckATermList(x_60), a_51));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm b_52 = NULL,d_52 = NULL,e_52 = NULL,n_52 = NULL,q_52 = NULL;
  q_52 = t;
  if(match_cons(t, sym__2))
    {
      b_52 = ATgetArgument(t, 0);
      d_52 = ATgetArgument(t, 1);
      t = d_52;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_52 = ATgetFirst((ATermList) t);
          n_52 = (ATerm) ATgetNext((ATermList) t);
          t = e_52;
          {
            ATerm y_28 = t;
            int z_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm f_29 = ATgetArgument(t, 0);
                    ATerm g_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(z_28);
                t = b_52;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = q_52;
                  }
                else
                  {
                    ATerm h_29 = t;
                    int i_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = q_52;
                        t = f_9(b_52, e_52, n_52, t);
                        LocalPopChoice(i_29);
                      }
                    else
                      {
                        t = h_29;
                        t = q_52;
                      }
                  }
              }
            else
              {
                t = y_28;
                t = b_52;
                if(match_cons(t, sym_Scopes_0))
                  {
                    t = q_52;
                  }
                else
                  {
                    t = q_52;
                  }
              }
          }
        }
      else
        {
          t = b_52;
          if(match_cons(t, sym_Scopes_0))
            {
              t = q_52;
            }
          else
            {
              t = q_52;
            }
        }
    }
  else
    {
      t = q_52;
    }
  return(t);
}
ATerm isect_MarkVar_0_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,a_52 = NULL;
  t = map_1_0(r_4, t);
  t_51 = t;
  t = term_w_23;
  a_52 = t;
  t = SSL_table_destroy(a_52);
  t = term_w_23;
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_23, t_51);
  t = g_9(u_51, t_51, t);
  t = t_51;
  return(t);
}
ATerm mark_traversal_0_0 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,h_54 = NULL;
  h_54 = t;
  {
    ATerm j_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_All_1))
          {
            ATerm q_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_29);
        t = h_54;
      }
    else
      {
        t = j_29;
        {
          ATerm u_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_One_1))
                {
                  ATerm f_30 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(y_29);
              t = h_54;
            }
          else
            {
              t = u_29;
              {
                ATerm g_30 = t;
                int m_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Some_1))
                      {
                        ATerm p_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(m_30);
                    t = h_54;
                  }
                else
                  {
                    t = g_30;
                    if(match_cons(t, sym_Thread_1))
                      {
                        ATerm r_30 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = h_54;
                  }
              }
            }
        }
      }
  }
  t = save_MarkVar_0_0(t);
  c_54 = t;
  t = h_54;
  t = SRTS_one(mark_buv_0_0, t);
  d_54 = t;
  t = c_54;
  t = isect_MarkVar_0_0(t);
  t = d_54;
  return(t);
}
static ATerm g_9 (ATerm z_30, ATerm y_30, ATerm t)
{
  static ATerm s_4 (ATerm t)
  {
    ATerm l_54 = NULL,m_54 = NULL;
    if(match_cons(t, sym__2))
      {
        l_54 = ATgetArgument(t, 0);
        m_54 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(z_30, l_54, m_54);
    t = (ATerm) ATmakeAppl(sym__3, z_30, l_54, m_54);
    return(t);
  }
  t = y_30;
  t = map_1_0(s_4, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_54 = NULL;
  static ATerm t_4 (ATerm t)
  {
    ATerm q_54 = NULL,r_54 = NULL;
    q_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_54), q_54);
    t = l_10(not_null(p_54), q_54, t);
    r_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_54, r_54);
    return(t);
  }
  if(((p_54 != NULL) && (p_54 != t)))
    _fail(t);
  else
    p_54 = t;
  t = SSL_table_keys(p_54);
  t = map_1_0(t_4, t);
  return(t);
}
ATerm save_MarkVar_0_0 (ATerm t)
{
  t = term_w_23;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm undefine_unbound_MarkVar_0_1 (ATerm l_61, ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  t = save_MarkVar_0_0(t);
  {
    static ATerm u_4 (ATerm t)
    {
      static ATerm i_56 (ATerm i_55, ATerm t)
      {
        ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,q_55 = NULL;
        t = i_55;
        if(match_cons(t, sym__2))
          {
            ATerm v_30 = ATgetArgument(t, 0);
            l_55 = v_30;
            if(match_cons(v_30, sym_Var_1))
              {
                m_55 = ATgetArgument(v_30, 0);
              }
            else
              _fail(t);
            {
              ATerm w_30 = ATgetArgument(t, 1);
              if(((ATgetType(w_30) == AT_LIST) && !(ATisEmpty(w_30))))
                {
                  ATerm x_30 = ATgetFirst((ATermList) w_30);
                  if(match_cons(x_30, sym_Defined_2))
                    {
                      n_55 = ATgetArgument(x_30, 0);
                      {
                        ATerm a_31 = ATgetArgument(x_30, 1);
                        if((ATgetSymbol((ATermAppl) a_31) != ATmakeSymbol("unbound", 0, ATtrue)))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  q_55 = (ATerm) ATgetNext((ATermList) w_30);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_61;
        {
          static ATerm v_4 (ATerm t)
          {
            if((m_55 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1_0(v_4, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, l_55, (ATerm) ATinsert(CheckATermList(q_55), (ATerm) ATmakeAppl(sym_Defined_2, n_55, term_v_28)));
        return(t);
      }
      ATerm s_55 = NULL,a_56 = NULL;
      a_56 = t;
      {
        ATerm g_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                s_55 = ATgetArgument(t, 0);
                {
                  ATerm l_31 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(k_31);
            t = s_55;
            if(match_cons(t, sym_Scopes_0))
              {
                t = a_56;
              }
            else
              {
                ATerm m_31 = t;
                int q_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_56(a_56, t);
                    LocalPopChoice(q_31);
                  }
                else
                  {
                    t = m_31;
                    t = a_56;
                  }
              }
          }
        else
          {
            t = g_31;
            {
              ATerm s_31 = t;
              int u_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_56(a_56, t);
                  LocalPopChoice(u_31);
                }
              else
                {
                  t = s_31;
                  t = a_56;
                }
            }
          }
      }
      return(t);
    }
    t = map_1_0(u_4, t);
  }
  f_55 = t;
  t = term_w_23;
  h_55 = t;
  t = SSL_table_destroy(h_55);
  t = term_w_23;
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_23, f_55);
  t = g_9(g_55, f_55, t);
  t = f_55;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm f_57 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_57);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_31);
    }
  else
    {
      t = w_31;
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            {
              ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_57 = ATgetArgument(t, 0);
                  k_57 = ATgetArgument(t, 1);
                  l_57 = ATgetArgument(t, 2);
                  m_57 = ATgetArgument(t, 3);
                  t = l_57;
                  t = map_1_0(y_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_57 = ATgetArgument(t, 0);
                      k_57 = ATgetArgument(t, 1);
                      l_57 = ATgetArgument(t, 2);
                      m_57 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_57;
                  t = map_1_0(z_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm z_57 = NULL;
  ATerm r_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_57 = ATgetArgument(t, 0);
          {
            ATerm i_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_32);
      t = z_57;
    }
  else
    {
      t = r_32;
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
static ATerm z_4 (ATerm t)
{
  ATerm b_59 = NULL;
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_59 = ATgetArgument(t, 0);
          {
            ATerm l_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_33);
      t = b_59;
    }
  else
    {
      t = j_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_59;
    }
  return(t);
}
ATerm mark_let_0_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,w_56 = NULL,x_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,r_7 = NULL,q_7 = NULL;
  c_57 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_57);
  x_56 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, z_56, a_57);
  q_7 = t;
  t = SSLsetAnnotations(q_7, x_56);
  b_57 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_56 = ATgetArgument(t, 0);
      {
        ATerm m_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = o_56;
  t = free_vars_3_0(w_4, x_4, tboundin_3_0, t);
  m_56 = t;
  t = undefine_unbound_MarkVar_0_1(m_56, t);
  n_56 = t;
  t = b_57;
  if(match_cons(t, sym_Let_2))
    {
      q_56 = ATgetArgument(t, 0);
      r_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_57);
  p_56 = t;
  t = q_56;
  {
    static ATerm f_5 (ATerm t)
    {
      ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL;
      f_59 = t;
      t = term_w_23;
      h_59 = t;
      t = SSL_table_destroy(h_59);
      t = term_w_23;
      g_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_23, n_56);
      t = g_9(g_59, n_56, t);
      t = f_59;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = map_1_0(f_5, t);
  }
  s_56 = t;
  t = term_w_23;
  w_56 = t;
  t = SSL_table_destroy(w_56);
  t = term_w_23;
  u_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_23, n_56);
  t = g_9(u_56, n_56, t);
  t = r_56;
  t = mark_buv_0_0(t);
  t_56 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, s_56, t_56);
  r_7 = t;
  t = SSLsetAnnotations(r_7, p_56);
  return(t);
}
ATerm mark_build_vars_0_0 (ATerm t)
{
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_59 = NULL,k_59 = NULL,m_59 = NULL,v_7 = NULL;
      m_59 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_59);
      j_59 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_59);
      v_7 = t;
      t = SSLsetAnnotations(v_7, j_59);
      LocalPopChoice(p_33);
      t = MarkVar_0_0(t);
    }
  else
    {
      t = o_33;
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,w_7 = NULL;
            q_59 = t;
            if(match_cons(t, sym_App_2))
              {
                o_59 = ATgetArgument(t, 0);
                p_59 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_59);
            n_59 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, o_59, p_59);
            w_7 = t;
            t = SSLsetAnnotations(w_7, n_59);
            LocalPopChoice(r_33);
            {
              ATerm r_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,x_7 = NULL;
              x_59 = t;
              if(match_cons(t, sym_App_2))
                {
                  t_59 = ATgetArgument(t, 0);
                  u_59 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_59);
              r_59 = t;
              t = t_59;
              t = mark_buv_0_0(t);
              v_59 = t;
              t = u_59;
              t = mark_build_vars_0_0(t);
              w_59 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, v_59, w_59);
              x_7 = t;
              t = SSLsetAnnotations(x_7, r_59);
            }
          }
        else
          {
            t = q_33;
            {
              ATerm w_33 = t;
              int x_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_60 = NULL,d_60 = NULL,e_60 = NULL,y_7 = NULL;
                  e_60 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      d_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_60);
                  a_60 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, d_60);
                  y_7 = t;
                  t = SSLsetAnnotations(y_7, a_60);
                  LocalPopChoice(x_33);
                  {
                    ATerm f_60 = NULL,g_60 = NULL,j_60 = NULL,m_60 = NULL,a_8 = NULL;
                    m_60 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        g_60 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(m_60);
                    f_60 = t;
                    t = g_60;
                    t = mark_buv_0_0(t);
                    j_60 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, j_60);
                    a_8 = t;
                    t = SSLsetAnnotations(a_8, f_60);
                  }
                }
              else
                {
                  t = w_33;
                  t = SRTS_all(mark_build_vars_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_9 (ATerm j_30, ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm n_60 = NULL,u_60 = NULL,w_60 = NULL;
  u_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_30, k_30);
  t = l_10(j_30, k_30, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_33 = ATgetFirst((ATermList) t);
      n_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_60), l_30);
  w_60 = t;
  t = SSL_table_put(j_30, k_30, w_60);
  t = u_60;
  return(t);
}
ATerm DeclareBound_0_0 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL,g_61 = NULL,h_61 = NULL;
  c_61 = t;
  t = term_w_23;
  d_61 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_61);
  g_61 = t;
  t = term_a_34;
  h_61 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_23, (ATerm)ATmakeAppl(sym_Var_1, c_61), term_a_34);
  t = h_9(d_61, g_61, h_61, t);
  t = c_61;
  return(t);
}
static ATerm k_9 (ATerm h_30, ATerm i_30, ATerm t)
{
  ATerm m_61 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_30, i_30);
  t = l_10(h_30, i_30, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_61 = ATgetFirst((ATermList) t);
      {
        ATerm b_34 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_61;
  return(t);
}
ATerm MarkVar_0_0 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL;
  f_66 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_27 = NULL,g_27 = NULL,h_27 = NULL,p_27 = NULL;
        t = term_w_23;
        p_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_23, f_66);
        t = k_9(p_27, f_66, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_34) != ATmakeSymbol("k_1", 0, ATtrue)))
              _fail(t);
            e_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, g_66);
        g_27 = t;
        t = (ATerm) ATinsert(ATempty, e_27);
        h_27 = t;
        t = SSLsetAnnotations(g_27, h_27);
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
          ATerm f_34 = t;
          int g_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,a_29 = NULL;
              t = term_w_23;
              a_29 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_w_23, f_66);
              t = k_9(a_29, f_66, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_34 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_34) != ATmakeSymbol("i_1", 0, ATtrue)))
                    _fail(t);
                  i_28 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, g_66);
              j_28 = t;
              t = (ATerm) ATinsert(ATempty, i_28);
              k_28 = t;
              t = SSLsetAnnotations(j_28, k_28);
              LocalPopChoice(g_34);
            }
          else
            {
              t = f_34;
              {
                ATerm k_29 = NULL,l_29 = NULL,n_29 = NULL,a_30 = NULL;
                t = term_w_23;
                a_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_23, f_66);
                t = k_9(a_30, f_66, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm i_34 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_34) != ATmakeSymbol("g_1", 0, ATtrue)))
                      _fail(t);
                    k_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, g_66);
                l_29 = t;
                t = (ATerm) ATinsert(ATempty, k_29);
                n_29 = t;
                t = SSLsetAnnotations(l_29, n_29);
              }
            }
        }
      }
  }
  return(t);
}
ATerm MarkAndBind_0_0 (ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,j_8 = NULL;
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MarkVar_0_0(t);
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
    }
  v_66 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_66);
  s_66 = t;
  t = t_66;
  t = DeclareBound_0_0(t);
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_66);
  j_8 = t;
  t = SSLsetAnnotations(j_8, s_66);
  return(t);
}
ATerm mark_match_vars_0_0 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_67 = NULL,c_67 = NULL,d_67 = NULL,o_8 = NULL;
      d_67 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_67);
      a_67 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_67);
      o_8 = t;
      t = SSLsetAnnotations(o_8, a_67);
      LocalPopChoice(m_34);
      t = MarkAndBind_0_0(t);
    }
  else
    {
      t = l_34;
      {
        ATerm n_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_67 = NULL,f_67 = NULL,j_67 = NULL,k_67 = NULL,u_9 = NULL;
            k_67 = t;
            if(match_cons(t, sym_App_2))
              {
                f_67 = ATgetArgument(t, 0);
                j_67 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_67);
            e_67 = t;
            t = (ATerm) ATmakeAppl(sym_App_2, f_67, j_67);
            u_9 = t;
            t = SSLsetAnnotations(u_9, e_67);
            LocalPopChoice(o_34);
            {
              ATerm m_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL,w_67 = NULL,z_67 = NULL,v_10 = NULL;
              z_67 = t;
              if(match_cons(t, sym_App_2))
                {
                  t_67 = ATgetArgument(t, 0);
                  u_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_67);
              m_67 = t;
              t = t_67;
              t = mark_buv_0_0(t);
              v_67 = t;
              t = u_67;
              t = mark_build_vars_0_0(t);
              w_67 = t;
              t = (ATerm) ATmakeAppl(sym_App_2, v_67, w_67);
              v_10 = t;
              t = SSLsetAnnotations(v_10, m_67);
            }
          }
        else
          {
            t = n_34;
            {
              ATerm p_34 = t;
              int q_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_68 = NULL,g_68 = NULL,h_68 = NULL,c_11 = NULL;
                  h_68 = t;
                  if(match_cons(t, sym_RootApp_1))
                    {
                      g_68 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_68);
                  b_68 = t;
                  t = (ATerm) ATmakeAppl(sym_RootApp_1, g_68);
                  c_11 = t;
                  t = SSLsetAnnotations(c_11, b_68);
                  LocalPopChoice(q_34);
                  {
                    ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,d_11 = NULL;
                    l_68 = t;
                    if(match_cons(t, sym_RootApp_1))
                      {
                        j_68 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(l_68);
                    i_68 = t;
                    t = j_68;
                    t = mark_buv_0_0(t);
                    k_68 = t;
                    t = (ATerm) ATmakeAppl(sym_RootApp_1, k_68);
                    d_11 = t;
                    t = SSLsetAnnotations(d_11, i_68);
                  }
                }
              else
                {
                  t = p_34;
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
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_71 = NULL,c_71 = NULL;
      b_71 = t;
      if(match_cons(t, sym_Match_1))
        {
          c_71 = ATgetArgument(t, 0);
          {
            ATerm o_30 = NULL,q_30 = NULL,l_11 = NULL;
            t = SSLgetAnnotations(b_71);
            o_30 = t;
            t = c_71;
            t = mark_match_vars_0_0(t);
            q_30 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, q_30);
            l_11 = t;
            t = SSLsetAnnotations(l_11, o_30);
          }
        }
      else
        {
          ATerm b_31 = NULL,j_31 = NULL,m_11 = NULL;
          if(match_cons(t, sym_Build_1))
            {
              c_71 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_71);
          b_31 = t;
          t = c_71;
          t = mark_build_vars_0_0(t);
          j_31 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, j_31);
          m_11 = t;
          t = SSLsetAnnotations(m_11, b_31);
        }
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
            t = mark_scope_0_0(t);
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
                  t = mark_let_0_0(t);
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
                        t = mark_traversal_0_0(t);
                        LocalPopChoice(y_34);
                      }
                    else
                      {
                        t = x_34;
                        {
                          ATerm z_34 = t;
                          int a_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL;
                              d_71 = t;
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  e_71 = ATgetArgument(t, 0);
                                  f_71 = ATgetArgument(t, 1);
                                  g_71 = ATgetArgument(t, 2);
                                  h_71 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              t = d_71;
                              t = e_9(e_71, f_71, g_71, h_71, t);
                              LocalPopChoice(a_35);
                            }
                          else
                            {
                              t = z_34;
                              {
                                ATerm b_35 = t;
                                int d_35 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = mark_rdef_0_0(t);
                                    LocalPopChoice(d_35);
                                  }
                                else
                                  {
                                    t = b_35;
                                    {
                                      ATerm e_35 = t;
                                      int f_35 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm r_71 = NULL,s_71 = NULL,t_71 = NULL,x_71 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL;
                                          x_71 = t;
                                          if(match_cons(t, sym_LRule_1))
                                            {
                                              c_72 = ATgetArgument(t, 0);
                                              t = c_72;
                                              if(match_cons(t, sym_Rule_3))
                                                {
                                                  r_71 = ATgetArgument(t, 0);
                                                  s_71 = ATgetArgument(t, 1);
                                                  t_71 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = x_71;
                                              t = d_9(r_71, s_71, t_71, t);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_SRule_1))
                                                {
                                                  c_72 = ATgetArgument(t, 0);
                                                  t = c_72;
                                                  if(match_cons(t, sym_Rule_3))
                                                    {
                                                      r_71 = ATgetArgument(t, 0);
                                                      s_71 = ATgetArgument(t, 1);
                                                      t_71 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_71;
                                                  t = c_9(r_71, s_71, t_71, t);
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Overlay_3))
                                                    {
                                                      c_72 = ATgetArgument(t, 0);
                                                      d_72 = ATgetArgument(t, 1);
                                                      e_72 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_71;
                                                  t = b_9(c_72, d_72, e_72, t);
                                                }
                                            }
                                          LocalPopChoice(f_35);
                                        }
                                      else
                                        {
                                          t = e_35;
                                          {
                                            ATerm g_35 = t;
                                            int h_35 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = mark_call_0_0(t);
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
                                                      t = mark_prim_0_0(t);
                                                      LocalPopChoice(j_35);
                                                    }
                                                  else
                                                    {
                                                      t = i_35;
                                                      {
                                                        ATerm k_35 = t;
                                                        int n_35 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm b_73 = NULL;
                                                            b_73 = t;
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm o_35 = ATgetArgument(t, 0);
                                                                ATerm r_35 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = b_73;
                                                            t = a_9(t);
                                                            LocalPopChoice(n_35);
                                                          }
                                                        else
                                                          {
                                                            t = k_35;
                                                            {
                                                              ATerm s_35 = t;
                                                              int t_35 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = mark_choice_1_0(mark_buv_0_0, t);
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
                                                                        t = mark_lchoice_1_0(mark_buv_0_0, t);
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
                                                                              t = mark_guardedlchoice_1_0(mark_buv_0_0, t);
                                                                              LocalPopChoice(x_35);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = w_35;
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
static ATerm l_9 (ATerm n_88 (ATerm), ATerm o_29, ATerm m_29, ATerm t)
{
  ATerm i_73 = NULL,l_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,w_73 = NULL;
  o_73 = t;
  t = n_88(t);
  i_73 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_73, o_29, m_29);
  t = m_10(i_73, o_29, m_29, t);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_73 = NULL;
        t = term_a_36;
        x_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_73, term_a_36);
        t = l_10(i_73, x_73, t);
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_73 = ATgetFirst((ATermList) t);
      n_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_a_36;
  p_73 = t;
  t = (ATerm) ATinsert(CheckATermList(n_73), (ATerm) ATinsert(CheckATermList(l_73), o_29));
  w_73 = t;
  t = SSL_table_put(i_73, p_73, w_73);
  t = o_73;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm DeclareUnbound_0_0 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL;
  y_73 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_73);
  z_73 = t;
  t = term_d_36;
  a_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, y_73), term_d_36);
  t = l_9(h_5, z_73, a_74, t);
  t = y_73;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm mark_scope_0_0 (ATerm t)
{
  ATerm b_74 = NULL,e_74 = NULL,f_74 = NULL,j_74 = NULL,l_74 = NULL,y_11 = NULL;
  l_74 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_74 = ATgetArgument(t, 0);
      f_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_74);
  b_74 = t;
  t = f_74;
  {
    static ATerm k_5 (ATerm t)
    {
      ATerm o_74 = NULL;
      o_74 = t;
      t = e_74;
      t = map_1_0(DeclareUnbound_0_0, t);
      t = o_74;
      t = mark_buv_0_0(t);
      return(t);
    }
    t = scope_2_0(i_5, k_5, t);
  }
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, e_74, j_74);
  y_11 = t;
  t = SSLsetAnnotations(y_11, b_74);
  return(t);
}
ATerm tboundin_3_0 (ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL;
  b_79 = t;
  if(match_cons(t, sym_Scope_2))
    {
      c_79 = ATgetArgument(t, 0);
      y_78 = ATgetArgument(t, 1);
      {
        ATerm v_31 = NULL,a_32 = NULL,b_32 = NULL,a_12 = NULL;
        t = SSLgetAnnotations(b_79);
        v_31 = t;
        t = c_79;
        t = i_105(t);
        a_32 = t;
        t = y_78;
        t = g_105(t);
        b_32 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_32, b_32);
        a_12 = t;
        t = SSLsetAnnotations(a_12, v_31);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          c_79 = ATgetArgument(t, 0);
          y_78 = ATgetArgument(t, 1);
          z_78 = ATgetArgument(t, 2);
          a_79 = ATgetArgument(t, 3);
          {
            ATerm n_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,b_12 = NULL;
            t = SSLgetAnnotations(b_79);
            n_33 = t;
            t = c_79;
            t = i_105(t);
            s_33 = t;
            t = y_78;
            t = i_105(t);
            t_33 = t;
            t = z_78;
            t = i_105(t);
            u_33 = t;
            t = a_79;
            t = g_105(t);
            v_33 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, s_33, t_33, u_33, v_33);
            b_12 = t;
            t = SSLsetAnnotations(b_12, n_33);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              c_79 = ATgetArgument(t, 0);
              y_78 = ATgetArgument(t, 1);
              z_78 = ATgetArgument(t, 2);
              a_79 = ATgetArgument(t, 3);
              {
                ATerm c_35 = NULL,l_35 = NULL,m_35 = NULL,p_35 = NULL,q_35 = NULL,c_12 = NULL;
                t = SSLgetAnnotations(b_79);
                c_35 = t;
                t = c_79;
                t = i_105(t);
                l_35 = t;
                t = y_78;
                t = i_105(t);
                m_35 = t;
                t = z_78;
                t = i_105(t);
                p_35 = t;
                t = a_79;
                t = g_105(t);
                q_35 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, l_35, m_35, p_35, q_35);
                c_12 = t;
                t = SSLsetAnnotations(c_12, c_35);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  c_79 = ATgetArgument(t, 0);
                  {
                    ATerm f_36 = NULL,h_36 = NULL,d_12 = NULL;
                    t = SSLgetAnnotations(b_79);
                    f_36 = t;
                    t = c_79;
                    t = g_105(t);
                    h_36 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_36);
                    d_12 = t;
                    t = SSLsetAnnotations(d_12, f_36);
                  }
                }
              else
                {
                  ATerm z_36 = NULL,c_37 = NULL,i_12 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      c_79 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_79);
                  z_36 = t;
                  t = c_79;
                  t = g_105(t);
                  c_37 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, c_37);
                  i_12 = t;
                  t = SSLsetAnnotations(i_12, z_36);
                }
            }
        }
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm v_79 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_79);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm e_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_36);
    }
  else
    {
      t = e_36;
      {
        ATerm i_36 = t;
        int j_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_36);
          }
        else
          {
            t = i_36;
            {
              ATerm x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  x_79 = ATgetArgument(t, 0);
                  y_79 = ATgetArgument(t, 1);
                  z_79 = ATgetArgument(t, 2);
                  a_80 = ATgetArgument(t, 3);
                  t = z_79;
                  t = map_1_0(o_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      x_79 = ATgetArgument(t, 0);
                      y_79 = ATgetArgument(t, 1);
                      z_79 = ATgetArgument(t, 2);
                      a_80 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_79;
                  t = map_1_0(q_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm h_80 = NULL;
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_80 = ATgetArgument(t, 0);
          {
            ATerm o_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_36);
      t = h_80;
    }
  else
    {
      t = k_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_80;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm q_80 = NULL;
  ATerm p_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_80 = ATgetArgument(t, 0);
          {
            ATerm t_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_36);
      t = q_80;
    }
  else
    {
      t = p_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_80;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm u_80 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_80);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm u_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_36);
    }
  else
    {
      t = u_36;
      {
        ATerm y_36 = t;
        int a_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_37);
          }
        else
          {
            t = y_36;
            {
              ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_80 = ATgetArgument(t, 0);
                  x_80 = ATgetArgument(t, 1);
                  y_80 = ATgetArgument(t, 2);
                  z_80 = ATgetArgument(t, 3);
                  t = y_80;
                  t = map_1_0(w_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_80 = ATgetArgument(t, 0);
                      x_80 = ATgetArgument(t, 1);
                      y_80 = ATgetArgument(t, 2);
                      z_80 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_80;
                  t = map_1_0(x_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm g_81 = NULL;
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_81 = ATgetArgument(t, 0);
          {
            ATerm h_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_37);
      t = g_81;
    }
  else
    {
      t = d_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_81;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm p_81 = NULL;
  ATerm i_37 = t;
  int l_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_81 = ATgetArgument(t, 0);
          {
            ATerm n_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_37);
      t = p_81;
    }
  else
    {
      t = i_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_81;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm t_79 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      t_79 = ATgetArgument(t, 0);
      t = t_79;
      t = free_vars_3_0(l_5, n_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          t_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_79;
      t = free_vars_3_0(r_5, t_5, tboundin_3_0, t);
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm e_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_82);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm q_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_37);
    }
  else
    {
      t = q_37;
      {
        ATerm t_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_37);
          }
        else
          {
            t = t_37;
            {
              ATerm g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_82 = ATgetArgument(t, 0);
                  h_82 = ATgetArgument(t, 1);
                  i_82 = ATgetArgument(t, 2);
                  j_82 = ATgetArgument(t, 3);
                  t = i_82;
                  t = map_1_0(d_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_82 = ATgetArgument(t, 0);
                      h_82 = ATgetArgument(t, 1);
                      i_82 = ATgetArgument(t, 2);
                      j_82 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_82;
                  t = map_1_0(e_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm q_82 = NULL;
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_82 = ATgetArgument(t, 0);
          {
            ATerm y_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_37);
      t = q_82;
    }
  else
    {
      t = w_37;
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
static ATerm e_6 (ATerm t)
{
  ATerm z_82 = NULL;
  ATerm z_37 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_82 = ATgetArgument(t, 0);
          {
            ATerm g_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_38);
      t = z_82;
    }
  else
    {
      t = z_37;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm x_81 = NULL,b_82 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      b_82 = ATgetArgument(t, 0);
      t = b_82;
      if(match_cons(t, sym_Rule_3))
        {
          x_81 = ATgetArgument(t, 0);
          {
            ATerm h_38 = ATgetArgument(t, 1);
          }
          {
            ATerm i_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = x_81;
      t = free_vars_3_0(y_5, c_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          b_82 = ATgetArgument(t, 0);
          {
            ATerm k_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_82;
    }
  return(t);
}
static ATerm p_9 (ATerm q_84 (ATerm), ATerm c_24, ATerm b_24, ATerm t)
{
  static ATerm s_83 (ATerm t)
  {
    ATerm n_83 = NULL,o_83 = NULL,p_83 = NULL;
    n_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_83 = ATgetFirst((ATermList) t);
            p_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_38 = t;
          int m_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_83;
              {
                static ATerm h_6 (ATerm t)
                {
                  t = b_24;
                  return(t);
                }
                t = q_9(q_84, h_6, o_83, p_83, t);
              }
              t = s_83(t);
              LocalPopChoice(m_38);
            }
          else
            {
              t = l_38;
              {
                ATerm r_37 = NULL,a_38 = NULL,r_14 = NULL;
                t = SSLgetAnnotations(n_83);
                r_37 = t;
                t = p_83;
                t = s_83(t);
                a_38 = t;
                t = (ATerm) ATinsert(CheckATermList(a_38), o_83);
                r_14 = t;
                t = SSLsetAnnotations(r_14, r_37);
              }
            }
        }
      }
    return(t);
  }
  t = c_24;
  t = s_83(t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL,x_83 = NULL;
  v_83 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_83;
      t = d_87(t);
    }
  else
    {
      ATerm a_84 = NULL,b_84 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_83 = ATgetFirst((ATermList) t);
          x_83 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_83;
      t = f_87(t);
      a_84 = t;
      t = x_83;
      t = foldr_3_0(d_87, e_87, f_87, t);
      b_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_84, b_84);
      t = e_87(t);
    }
  return(t);
}
static ATerm q_9 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm g_24, ATerm f_24, ATerm t)
{
  t = u_84(t);
  {
    static ATerm i_6 (ATerm t)
    {
      ATerm e_84 = NULL;
      e_84 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_24, e_84);
      t = t_84(t);
      return(t);
    }
    t = fetch_1_0(i_6, t);
  }
  t = f_24;
  return(t);
}
static ATerm r_9 (ATerm l_84 (ATerm), ATerm a_24, ATerm z_23, ATerm t)
{
  static ATerm d_85 (ATerm t)
  {
    ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL;
    v_84 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_84;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_84 = ATgetFirst((ATermList) t);
            x_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_38 = t;
          int o_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_84;
              {
                static ATerm m_6 (ATerm t)
                {
                  t = z_23;
                  return(t);
                }
                t = q_9(l_84, m_6, w_84, x_84, t);
              }
              t = d_85(t);
              LocalPopChoice(o_38);
            }
          else
            {
              t = n_38;
              {
                ATerm w_38 = NULL,c_39 = NULL,a_16 = NULL;
                t = SSLgetAnnotations(v_84);
                w_38 = t;
                t = x_84;
                t = d_85(t);
                c_39 = t;
                t = (ATerm) ATinsert(CheckATermList(c_39), w_84);
                a_16 = t;
                t = SSLsetAnnotations(a_16, w_38);
              }
            }
        }
      }
    return(t);
  }
  t = a_24;
  t = d_85(t);
  return(t);
}
ATerm genzip_4_0 (ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm t)
{
  static ATerm n_85 (ATerm t)
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_99(t);
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        {
          ATerm f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL,i_16 = NULL;
          t = k_99(t);
          k_85 = t;
          if(match_cons(t, sym__2))
            {
              g_85 = ATgetArgument(t, 0);
              h_85 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_85);
          f_85 = t;
          t = g_85;
          t = m_99(t);
          i_85 = t;
          t = h_85;
          t = n_85(t);
          j_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_85, j_85);
          i_16 = t;
          t = SSLsetAnnotations(i_16, f_85);
          t = l_99(t);
        }
      }
    return(t);
  }
  t = n_85(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_38 = ATgetArgument(t, 0);
      if(((ATgetType(r_38) != AT_LIST) || !(ATisEmpty(r_38))))
        _fail(t);
      {
        ATerm s_38 = ATgetArgument(t, 1);
        if(((ATgetType(s_38) != AT_LIST) || !(ATisEmpty(s_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL,y_85 = NULL,z_85 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_38 = ATgetArgument(t, 0);
      if(((ATgetType(t_38) == AT_LIST) && !(ATisEmpty(t_38))))
        {
          w_85 = ATgetFirst((ATermList) t_38);
          x_85 = (ATerm) ATgetNext((ATermList) t_38);
        }
      else
        _fail(t);
      {
        ATerm u_38 = ATgetArgument(t, 1);
        if(((ATgetType(u_38) == AT_LIST) && !(ATisEmpty(u_38))))
          {
            y_85 = ATgetFirst((ATermList) u_38);
            z_85 = (ATerm) ATgetNext((ATermList) u_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_85, y_85), (ATerm) ATmakeAppl(sym__2, x_85, z_85));
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm a_86 = NULL,b_86 = NULL;
  if(match_cons(t, sym__2))
    {
      a_86 = ATgetArgument(t, 0);
      b_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_86), a_86);
  return(t);
}
static ATerm w_9 (ATerm b_627, ATerm g_627, ATerm r_60, ATerm t)
{
  ATerm p_85 = NULL,q_85 = NULL,t_85 = NULL,u_85 = NULL;
  t = SSL_explode_term(g_627);
  if(match_cons(t, sym__2))
    {
      p_85 = ATgetArgument(t, 0);
      t_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_627);
  if(match_cons(t, sym__2))
    {
      if((p_85 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      q_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_85, t_85);
  t = genzip_4_0(n_6, q_6, u_6, _id, t);
  u_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_85, r_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm t)
{
  static ATerm d_86 (ATerm t)
  {
    ATerm v_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_97(t);
        LocalPopChoice(x_38);
      }
    else
      {
        t = v_38;
        t = j_97(t);
        t = d_86(t);
      }
    return(t);
  }
  t = d_86(t);
  return(t);
}
ATerm for_3_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm t)
{
  t = l_97(t);
  t = while_not_2_0(m_97, n_97, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm k_86 = NULL;
  k_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_86);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL,m_16 = NULL;
  o_86 = t;
  if(match_cons(t, sym__2))
    {
      m_86 = ATgetArgument(t, 0);
      n_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_86);
  l_86 = t;
  t = n_86;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_86, n_86);
  m_16 = t;
  t = SSLsetAnnotations(m_16, l_86);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm m_87 = NULL,n_87 = NULL,o_87 = NULL,p_87 = NULL,q_87 = NULL;
  m_87 = t;
  if(match_cons(t, sym__2))
    {
      n_87 = ATgetArgument(t, 0);
      o_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_87 = ATgetFirst((ATermList) t);
      q_87 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_88(n_87, o_87, m_87, t);
            LocalPopChoice(a_39);
          }
        else
          {
            t = z_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_87), p_87), q_87);
          }
      }
    }
  else
    {
      t = a_88(n_87, o_87, m_87, t);
    }
  return(t);
}
static ATerm a_88 (ATerm p_86, ATerm q_86, ATerm r_86, ATerm t)
{
  ATerm s_86 = NULL,v_86 = NULL,n_16 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,g_87 = NULL;
  t = SSLgetAnnotations(r_86);
  s_86 = t;
  t = q_86;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_86 = ATgetFirst((ATermList) t);
      g_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_86;
  if(match_cons(t, sym__2))
    {
      z_86 = ATgetArgument(t, 0);
      a_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_87;
        if((z_86 != t))
          {
            _fail(t);
          }
        t = g_87;
        LocalPopChoice(d_39);
      }
    else
      {
        t = b_39;
        t = q_86;
        t = w_9(z_86, a_87, g_87, t);
      }
  }
  v_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_86, v_86);
  n_16 = t;
  t = SSLsetAnnotations(n_16, s_86);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm z_87 = NULL;
  if(match_cons(t, sym__2))
    {
      z_87 = ATgetArgument(t, 0);
      if((z_87 != ATgetArgument(t, 1)))
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
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(w_6, y_6, c_7, t);
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
      {
        ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL;
        u_87 = t;
        if(match_cons(t, sym__2))
          {
            v_87 = ATgetArgument(t, 0);
            w_87 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_87;
        t = r_9(d_7, v_87, w_87, t);
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  if(match_cons(t, sym__2))
    {
      w_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(n_7, w_39, x_39, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm y_39 = NULL;
  if(match_cons(t, sym__2))
    {
      y_39 = ATgetArgument(t, 0);
      if((y_39 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL;
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      s_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9(t_7, r_40, s_40, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm x_40 = NULL;
  if(match_cons(t, sym__2))
    {
      x_40 = ATgetArgument(t, 0);
      if((x_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm k_108 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm v_88 (ATerm t)
  {
    ATerm g_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_108(t);
        LocalPopChoice(n_39);
      }
    else
      {
        t = g_39;
        {
          ATerm p_39 = t;
          int q_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_88 = NULL,d_88 = NULL,h_39 = NULL,i_39 = NULL;
              c_88 = t;
              t = j_108(t);
              d_88 = t;
              t = c_88;
              {
                static ATerm i_7 (ATerm t)
                {
                  ATerm f_88 = NULL;
                  t = v_88(t);
                  f_88 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_88, d_88);
                  t = diff_0_0(t);
                  return(t);
                }
                t = k_108(i_7, v_88, j_7, t);
              }
              i_39 = t;
              t = SSL_explode_term(i_39);
              if(match_cons(t, sym__2))
                {
                  ATerm u_39 = ATgetArgument(t, 0);
                  h_39 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_39;
              t = foldr_3_0(k_7, m_7, _id, t);
              LocalPopChoice(q_39);
            }
          else
            {
              t = p_39;
              {
                ATerm g_40 = NULL,l_40 = NULL;
                l_40 = t;
                t = SSL_explode_term(l_40);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_39 = ATgetArgument(t, 0);
                    g_40 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_40;
                t = foldr_3_0(p_7, s_7, v_88, t);
              }
            }
        }
      }
    return(t);
  }
  t = v_88(t);
  return(t);
}
ATerm topdown_1_0 (ATerm r_88 (ATerm), ATerm t)
{
  static ATerm z_7 (ATerm t)
  {
    t = topdown_1_0(r_88, t);
    return(t);
  }
  t = r_88(t);
  t = SRTS_all(z_7, t);
  return(t);
}
static ATerm y_9 (ATerm b_30, ATerm c_30, ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL;
  x_88 = t;
  {
    ATerm z_39 = t;
    int a_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_30, c_30);
        t = l_10(b_30, c_30, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_40 = ATgetFirst((ATermList) t);
            w_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_40);
        t = SSL_table_put(b_30, c_30, w_88);
        t = (ATerm) ATmakeAppl(sym__3, b_30, c_30, w_88);
      }
    else
      {
        t = z_39;
        t = SSL_table_remove(b_30, c_30);
        t = (ATerm) ATmakeAppl(sym__2, b_30, c_30);
      }
  }
  t = x_88;
  return(t);
}
ATerm end_scope_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL;
  b_89 = t;
  t = k_88(t);
  a_89 = t;
  {
    ATerm c_40 = t;
    int d_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_89 = NULL;
        t = term_a_36;
        d_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_89, term_a_36);
        t = l_10(a_89, d_89, t);
        LocalPopChoice(d_40);
      }
    else
      {
        t = c_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_88 = ATgetFirst((ATermList) t);
      y_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_a_36;
  c_89 = t;
  t = SSL_table_put(a_89, c_89, y_88);
  t = z_88;
  {
    static ATerm b_8 (ATerm t)
    {
      ATerm e_89 = NULL;
      e_89 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_89, e_89);
      t = y_9(a_89, e_89, t);
      return(t);
    }
    t = map_1_0(b_8, t);
  }
  t = b_89;
  return(t);
}
ATerm restore_always_2_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm t)
{
  ATerm f_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_102(t);
      t = l_102(t);
      LocalPopChoice(h_40);
    }
  else
    {
      t = f_40;
      t = l_102(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL;
  h_89 = t;
  t = j_88(t);
  g_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_89, term_a_36);
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_89 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_40 = ATgetArgument(t, 0);
            ATerm m_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_a_36;
        o_89 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_89, term_a_36);
        t = l_10(g_89, o_89, t);
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        t = (ATerm) ATempty;
      }
  }
  i_89 = t;
  t = term_a_36;
  j_89 = t;
  t = (ATerm) ATinsert(CheckATermList(i_89), (ATerm) ATempty);
  k_89 = t;
  t = SSL_table_put(g_89, j_89, k_89);
  t = h_89;
  return(t);
}
ATerm scope_2_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t)
{
  static ATerm c_8 (ATerm t)
  {
    t = end_scope_1_0(l_88, t);
    return(t);
  }
  t = begin_scope_1_0(l_88, t);
  t = restore_always_2_0(m_88, c_8, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_t_16;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = scope_2_0(g_8, h_8, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm x_89 = NULL,y_89 = NULL,z_89 = NULL;
  t = topdown_1_0(k_8, t);
  z_89 = t;
  t = free_vars_3_0(l_8, p_8, tboundin_3_0, t);
  y_89 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, y_89, z_89);
  t = mark_scope_0_0(t);
  if(match_cons(t, sym_Scope_2))
    {
      ATerm n_40 = ATgetArgument(t, 0);
      x_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_89;
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = sdef_ud_0_0(t);
        LocalPopChoice(p_40);
      }
    else
      {
        t = o_40;
        {
          ATerm q_40 = t;
          int t_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = rdef_ud_0_0(t);
              LocalPopChoice(t_40);
            }
          else
            {
              t = q_40;
              {
                ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL;
                if(match_cons(t, sym_Overlay_3))
                  {
                    l_91 = ATgetArgument(t, 0);
                    m_91 = ATgetArgument(t, 1);
                    n_91 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = x_89;
                t = z_8(l_91, m_91, n_91, t);
              }
            }
        }
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm g_90 = NULL,h_90 = NULL;
  h_90 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_90 = ATgetArgument(t, 0);
      {
        ATerm u_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_41 = NULL,d_41 = NULL,u_16 = NULL;
            t = SSLgetAnnotations(h_90);
            b_41 = t;
            t = g_90;
            if(match_cons(t, sym_ListVar_1))
              {
                d_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, d_41);
            u_16 = t;
            t = SSLsetAnnotations(u_16, b_41);
            LocalPopChoice(w_40);
          }
        else
          {
            t = u_40;
            t = h_90;
          }
      }
    }
  else
    {
      t = h_90;
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm m_90 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_90);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm y_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_40);
    }
  else
    {
      t = y_40;
      {
        ATerm a_41 = t;
        int c_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_41);
          }
        else
          {
            t = a_41;
            {
              ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_90 = ATgetArgument(t, 0);
                  p_90 = ATgetArgument(t, 1);
                  q_90 = ATgetArgument(t, 2);
                  r_90 = ATgetArgument(t, 3);
                  t = q_90;
                  t = map_1_0(q_8, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_90 = ATgetArgument(t, 0);
                      p_90 = ATgetArgument(t, 1);
                      q_90 = ATgetArgument(t, 2);
                      r_90 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_90;
                  t = map_1_0(s_8, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm y_90 = NULL;
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_90 = ATgetArgument(t, 0);
          {
            ATerm g_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_41);
      t = y_90;
    }
  else
    {
      t = e_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_90;
    }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm h_91 = NULL;
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_91 = ATgetArgument(t, 0);
          {
            ATerm j_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_41);
      t = h_91;
    }
  else
    {
      t = h_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_91;
    }
  return(t);
}
ATerm def_use_def_0_0 (ATerm t)
{
  ATerm w_89 = NULL;
  w_89 = t;
  t = scope_2_0(e_8, f_8, t);
  t = w_89;
  return(t);
}
ATerm filter_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  ATerm d_92 = NULL,e_92 = NULL,f_92 = NULL;
  d_92 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_92;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_92 = ATgetFirst((ATermList) t);
          f_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_41 = t;
        int m_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_41 = NULL,n_41 = NULL,o_41 = NULL,w_16 = NULL;
            t = SSLgetAnnotations(d_92);
            k_41 = t;
            t = e_92;
            t = j_101(t);
            n_41 = t;
            t = f_92;
            t = filter_1_0(j_101, t);
            o_41 = t;
            t = (ATerm) ATinsert(CheckATermList(o_41), n_41);
            w_16 = t;
            t = SSLsetAnnotations(w_16, k_41);
            LocalPopChoice(m_41);
          }
        else
          {
            t = l_41;
            t = f_92;
            t = filter_1_0(j_101, t);
          }
      }
    }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL,x_92 = NULL,e_17 = NULL;
  x_92 = t;
  if(match_cons(t, sym_Overlays_1))
    {
      w_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_92);
  v_92 = t;
  t = w_92;
  {
    ATerm p_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_92;
        LocalPopChoice(q_41);
      }
    else
      {
        t = p_41;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_92;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Overlays_1, w_92);
  e_17 = t;
  t = SSLsetAnnotations(e_17, v_92);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = Cons_2_0(v_9, i_10, t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL,j_17 = NULL;
  b_93 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_93);
  z_92 = t;
  t = a_93;
  {
    ATerm r_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_93;
        LocalPopChoice(t_41);
      }
    else
      {
        t = r_41;
        t = filter_1_0(def_use_def_0_0, t);
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_93;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_93);
  j_17 = t;
  t = SSLsetAnnotations(j_17, z_92);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm spec_use_def_0_0 (ATerm t)
{
  ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL,l_17 = NULL,k_17 = NULL,d_17 = NULL;
  u_92 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_92);
  k_92 = t;
  t = l_92;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_92 = ATgetFirst((ATermList) t);
      o_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_92);
  m_92 = t;
  t = n_92;
  if(match_cons(t, sym_Signature_1))
    {
      s_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_92);
  r_92 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, s_92);
  d_17 = t;
  t = SSLsetAnnotations(d_17, r_92);
  t_92 = t;
  t = o_92;
  t = Cons_2_0(m_9, n_9, t);
  p_92 = t;
  t = (ATerm) ATinsert(CheckATermList(p_92), t_92);
  k_17 = t;
  t = SSLsetAnnotations(k_17, m_92);
  q_92 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_92);
  l_17 = t;
  t = SSLsetAnnotations(l_17, k_92);
  return(t);
}
static ATerm a_10 (ATerm b_38, ATerm c_38, ATerm t)
{
  ATerm d_93 = NULL;
  t = SSL_fputc(b_38, c_38);
  d_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_93);
  return(t);
}
static ATerm b_10 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm e_93 = NULL;
  t = SSL_write_term_to_stream_text(c_44, d_44);
  e_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_93);
  return(t);
}
static ATerm d_10 (ATerm g_98 (ATerm), ATerm x_412, ATerm g_44, ATerm t)
{
  ATerm f_93 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_412, term_x_41);
  t = g_10(t);
  f_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_93, g_44);
  t = g_98(t);
  t = fclose_0_0(t);
  t = g_44;
  return(t);
}
static ATerm c_10 (ATerm y_43, ATerm z_43, ATerm t)
{
  ATerm g_93 = NULL;
  t = SSL_write_term_to_stream_baf(y_43, z_43);
  g_93 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_93);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_41 = ATgetArgument(t, 0);
      if(match_cons(y_41, sym_Stream_1))
        {
          j_93 = ATgetArgument(y_41, 0);
        }
      else
        _fail(t);
      k_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10(j_93, k_93, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_41 = ATgetArgument(t, 0);
      if(match_cons(z_41, sym_Stream_1))
        {
          o_93 = ATgetArgument(z_41, 0);
        }
      else
        _fail(t);
      p_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_10(o_93, p_93, t);
  l_93 = t;
  t = term_d_42;
  m_93 = t;
  t = l_93;
  if(match_cons(t, sym_Stream_1))
    {
      n_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_42, l_93);
  t = a_10(m_93, n_93, t);
  return(t);
}
ATerm output_1_0 (ATerm m_113 (ATerm), ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL;
  t = m_113(t);
  i_93 = t;
  {
    ATerm e_42 = t;
    int f_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_42;
        t = get_config_0_0(t);
        LocalPopChoice(f_42);
      }
    else
      {
        t = e_42;
        t = term_h_42;
      }
  }
  h_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_93, i_93);
  {
    ATerm i_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_42;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, h_93, i_93);
        LocalPopChoice(k_42);
        if(match_cons(t, sym__2))
          {
            ATerm t_42 = ATgetArgument(t, 0);
            ATerm u_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_10(q_10, h_93, i_93, t);
      }
    else
      {
        t = i_42;
        if(match_cons(t, sym__2))
          {
            ATerm v_42 = ATgetArgument(t, 0);
            ATerm x_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_10(w_10, h_93, i_93, t);
      }
  }
  return(t);
}
static ATerm d_94 (ATerm x_93, ATerm t)
{
  t = SSL_fclose(x_93);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL;
  b_94 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_94 = ATgetArgument(t, 0);
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_94);
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
            t = d_94(b_94, t);
          }
      }
    }
  else
    {
      t = d_94(b_94, t);
    }
  return(t);
}
static ATerm e_10 (ATerm e_44, ATerm t)
{
  t = SSL_read_term_from_stream(e_44);
  return(t);
}
static ATerm f_10 (ATerm d_38, ATerm e_38, ATerm t)
{
  ATerm e_94 = NULL;
  t = SSL_fopen(d_38, e_38);
  e_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_94);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_94 = NULL;
  t = SSL_stdin_stream();
  f_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_94);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_94 = NULL;
  t = SSL_stdout_stream();
  h_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_94);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_94 = NULL;
  t = SSL_stderr_stream();
  i_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_94);
  return(t);
}
static ATerm p_95 (ATerm o_94, ATerm t)
{
  ATerm p_94 = NULL;
  t = SSL_explode_term(o_94);
  if(match_cons(t, sym__2))
    {
      ATerm b_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_43 = ATgetArgument(t, 1);
        if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
          {
            p_94 = ATgetFirst((ATermList) c_43);
            {
              ATerm e_43 = (ATerm) ATgetNext((ATermList) c_43);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_94;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_94;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_94;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_94;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_95 (ATerm s_94, ATerm t_94, ATerm u_94, ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL,a_95 = NULL,r_17 = NULL;
  t = SSLgetAnnotations(u_94);
  x_94 = t;
  t = s_94;
  if(match_cons(t, sym_Path_1))
    {
      a_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_95, t_94);
  r_17 = t;
  t = SSLsetAnnotations(r_17, x_94);
  if(match_cons(t, sym__2))
    {
      v_94 = ATgetArgument(t, 0);
      w_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(v_94, w_94, t);
  return(t);
}
static ATerm r_95 (ATerm c_95, ATerm d_95, ATerm e_95, ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL,k_95 = NULL,s_17 = NULL;
  t = SSLgetAnnotations(e_95);
  h_95 = t;
  t = SSL_is_string(c_95);
  k_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_95, d_95);
  s_17 = t;
  t = SSLsetAnnotations(s_17, h_95);
  if(match_cons(t, sym__2))
    {
      f_95 = ATgetArgument(t, 0);
      g_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10(f_95, g_95, t);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL;
  m_95 = t;
  if(match_cons(t, sym__2))
    {
      n_95 = ATgetArgument(t, 0);
      o_95 = ATgetArgument(t, 1);
      {
        ATerm g_43 = t;
        int i_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_95(m_95, t);
            LocalPopChoice(i_43);
          }
        else
          {
            t = g_43;
            {
              ATerm l_43 = t;
              int n_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_95(n_95, o_95, m_95, t);
                  LocalPopChoice(n_43);
                }
              else
                {
                  t = l_43;
                  t = r_95(n_95, o_95, m_95, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_95(m_95, t);
    }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = term_s_43;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_95 = NULL,t_95 = NULL,u_95 = NULL;
  ATerm t_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_95 = NULL;
      v_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_95, term_x_43);
      t = g_10(t);
      LocalPopChoice(w_43);
    }
  else
    {
      t = t_43;
      t = debug_1_0(x_10, t);
      _fail(t);
    }
  t_95 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_10(u_95, t);
  s_95 = t;
  t = t_95;
  t = fclose_0_0(t);
  t = s_95;
  return(t);
}
ATerm input_1_0 (ATerm n_113 (ATerm), ATerm t)
{
  ATerm a_44 = t;
  int b_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_44;
      t = get_config_0_0(t);
      LocalPopChoice(b_44);
    }
  else
    {
      t = a_44;
      t = term_h_44;
    }
  t = ReadFromFile_0_0(t);
  t = n_113(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,b_96 = NULL;
  x_95 = t;
  t = term_i_44;
  t = whoami_0_0(t);
  y_95 = t;
  t = term_p_19;
  a_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_44), y_95), term_j_44);
  b_96 = t;
  t = SSL_printnl(a_96, b_96);
  t = term_l_44;
  z_95 = t;
  t = SSL_exit(z_95);
  t = x_95;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm d_96 = NULL;
  d_96 = t;
  if(match_string(t, "-k"))
    {
      t = d_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_96;
    }
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm e_96 = NULL,f_96 = NULL,g_96 = NULL;
  e_96 = t;
  t = SSL_string_to_int(e_96);
  f_96 = t;
  t = term_m_44;
  g_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_44, f_96);
  t = o_10(g_96, f_96, t);
  t = e_96;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  t = term_n_44;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_10, e_11, f_11, t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm i_96 = NULL;
  i_96 = t;
  if(match_string(t, "-S"))
    {
      t = i_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_96;
    }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL;
  t = term_o_44;
  j_96 = t;
  t = term_q_44;
  k_96 = t;
  t = term_r_44;
  t = o_10(j_96, k_96, t);
  t = term_s_44;
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = term_t_44;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL;
  l_96 = t;
  t = SSL_string_to_int(l_96);
  m_96 = t;
  t = term_o_44;
  n_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_44, m_96);
  t = o_10(n_96, m_96, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_96);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  t = term_v_44;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL;
  t = term_w_44;
  o_96 = t;
  t = term_i_44;
  p_96 = t;
  t = term_x_44;
  t = o_10(o_96, p_96, t);
  t = term_y_44;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_z_44;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_45 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_11, i_11, k_11, t);
      LocalPopChoice(b_45);
    }
  else
    {
      t = a_45;
      {
        ATerm c_45 = t;
        int d_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_11, s_11, z_11, t);
            LocalPopChoice(d_45);
          }
        else
          {
            t = c_45;
            t = Option_3_0(n_12, t_12, u_12, t);
          }
      }
    }
  return(t);
}
static ATerm o_10 (ATerm v_41, ATerm w_41, ATerm t)
{
  ATerm q_96 = NULL;
  t = term_e_45;
  q_96 = t;
  t = SSL_table_put(q_96, v_41, w_41);
  t = (ATerm) ATmakeAppl(sym__3, term_e_45, v_41, w_41);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm t_96 = NULL,u_96 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_96 = NULL,w_96 = NULL,x_96 = NULL;
      t = term_i_44;
      t = e_0(t);
      v_96 = t;
      t = term_f_45;
      w_96 = t;
      t = term_g_45;
      x_96 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_45, term_g_45, v_96);
      t = m_10(w_96, x_96, v_96, t);
      _fail(t);
    }
  else
    {
      ATerm a_97 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_96 = ATgetFirst((ATermList) t);
          u_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_96;
      t = c_0(t);
      t = term_i_44;
      t = d_0(t);
      a_97 = t;
      t = (ATerm) ATinsert(CheckATermList(u_96), a_97);
    }
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm c_97 = NULL;
  c_97 = t;
  if(match_string(t, "-o"))
    {
      t = c_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_97;
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm d_97 = NULL,e_97 = NULL;
  d_97 = t;
  t = term_g_42;
  e_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_42, d_97);
  t = o_10(e_97, d_97, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_97);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  t = term_h_45;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_12, b_13, k_13, t);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm g_97 = NULL;
  g_97 = t;
  if(match_string(t, "-i"))
    {
      t = g_97;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_97;
    }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm h_97 = NULL,o_97 = NULL;
  h_97 = t;
  t = term_f_44;
  o_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_44, h_97);
  t = o_10(o_97, h_97, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_97);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_i_45;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_13, n_13, q_13, t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  static ATerm l_98 (ATerm t)
  {
    ATerm i_98 = NULL,j_98 = NULL,k_98 = NULL;
    k_98 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_98 = ATgetFirst((ATermList) t);
        j_98 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_42 = NULL,w_42 = NULL,b_18 = NULL;
          t = SSLgetAnnotations(k_98);
          j_42 = t;
          t = j_98;
          t = l_98(t);
          w_42 = t;
          t = (ATerm) ATinsert(CheckATermList(w_42), i_98);
          b_18 = t;
          t = SSLsetAnnotations(b_18, j_42);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_98;
        t = r_85(t);
      }
    return(t);
  }
  t = l_98(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL;
  q_97 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_97;
    }
  else
    {
      static ATerm r_13 (ATerm t)
      {
        t = not_null(s_97);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_97 = ATgetFirst((ATermList) t);
          if(((s_97 != NULL) && (s_97 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_97 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_97;
      t = at_end_1_0(r_13, t);
    }
  return(t);
}
static ATerm x_98 (ATerm p_98, ATerm t)
{
  ATerm q_98 = NULL;
  t = SSL_explode_term(p_98);
  if(match_cons(t, sym__2))
    {
      ATerm l_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_98;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL,u_98 = NULL;
  u_98 = t;
  if(match_cons(t, sym__2))
    {
      s_98 = ATgetArgument(t, 0);
      t_98 = ATgetArgument(t, 1);
      {
        ATerm m_45 = t;
        int n_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_13 (ATerm t)
            {
              t = t_98;
              return(t);
            }
            t = s_98;
            t = at_end_1_0(s_13, t);
            LocalPopChoice(n_45);
          }
        else
          {
            t = m_45;
            t = x_98(u_98, t);
          }
      }
    }
  else
    {
      t = x_98(u_98, t);
    }
  return(t);
}
static ATerm z_9 (ATerm b_42, ATerm a_42, ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL;
  t = b_42;
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(q_45);
      }
    else
      {
        t = p_45;
        t = (ATerm) ATempty;
      }
  }
  z_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_42, z_98);
  t = conc_0_0(t);
  y_98 = t;
  t = term_e_45;
  a_99 = t;
  t = SSL_table_put(a_99, b_42, y_98);
  t = (ATerm) ATmakeAppl(sym__3, term_e_45, b_42, y_98);
  return(t);
}
static ATerm m_10 (ATerm w_29, ATerm x_29, ATerm v_29, ATerm t)
{
  ATerm c_99 = NULL,d_99 = NULL,e_99 = NULL;
  c_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_29, x_29);
  {
    ATerm r_45 = t;
    int s_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_45 = ATgetArgument(t, 0);
            ATerm u_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_29, x_29);
        t = l_10(w_29, x_29, t);
        LocalPopChoice(s_45);
      }
    else
      {
        t = r_45;
        t = (ATerm) ATempty;
      }
  }
  d_99 = t;
  t = (ATerm) ATinsert(CheckATermList(d_99), v_29);
  e_99 = t;
  t = SSL_table_put(w_29, x_29, e_99);
  t = c_99;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_99 = NULL,r_99 = NULL,s_99 = NULL,t_99 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_99 = NULL,v_99 = NULL,w_99 = NULL;
      t = term_i_44;
      t = n_0(t);
      u_99 = t;
      t = term_f_45;
      v_99 = t;
      t = term_g_45;
      w_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_45, term_g_45, u_99);
      t = m_10(v_99, w_99, u_99, t);
      _fail(t);
    }
  else
    {
      ATerm a_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_99 = ATgetFirst((ATermList) t);
          r_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_99;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_99 = ATgetFirst((ATermList) t);
          t_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_99;
      t = k_0(t);
      t = s_99;
      t = l_0(t);
      a_100 = t;
      t = (ATerm) ATinsert(CheckATermList(t_99), a_100);
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm c_100 = NULL;
  c_100 = t;
  if(match_string(t, "--warning"))
    {
      t = c_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = c_100;
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm d_100 = NULL,e_100 = NULL,f_100 = NULL;
  d_100 = t;
  t = term_v_45;
  e_100 = t;
  t = (ATerm) ATinsert(ATempty, d_100);
  f_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_45, (ATerm) ATinsert(ATempty, d_100));
  t = z_9(e_100, f_100, t);
  t = term_i_44;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_w_45;
  return(t);
}
static ATerm z_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm g_100 = NULL,h_100 = NULL,i_100 = NULL;
  g_100 = t;
  t = term_a_21;
  h_100 = t;
  t = term_q_44;
  i_100 = t;
  t = term_x_45;
  t = o_10(h_100, i_100, t);
  t = g_100;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_z_45;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL;
  j_100 = t;
  t = term_a_21;
  k_100 = t;
  t = term_l_44;
  l_100 = t;
  t = term_a_46;
  t = o_10(k_100, l_100, t);
  t = j_100;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm b_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(u_13, x_13, y_13, t);
      LocalPopChoice(e_46);
    }
  else
    {
      t = b_46;
      {
        ATerm g_46 = t;
        int h_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(z_13, d_14, i_14, t);
            LocalPopChoice(h_46);
          }
        else
          {
            t = g_46;
            t = Option_3_0(j_14, k_14, n_14, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_44;
  t = whoami_0_0(t);
  m_100 = t;
  t = term_p_19;
  o_100 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_46), m_100);
  p_100 = t;
  t = SSL_printnl(o_100, p_100);
  t = term_l_44;
  n_100 = t;
  t = SSL_exit(n_100);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_46;
  t = get_config_0_0(t);
  return(t);
}
static ATerm h_10 (ATerm a_28, ATerm b_28, ATerm t)
{
  ATerm m_46 = t;
  int p_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_28, b_28);
      LocalPopChoice(p_46);
    }
  else
    {
      t = m_46;
      t = SSL_addr(a_28, b_28);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm t)
{
  ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL;
  r_100 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_100;
      t = b_87(t);
    }
  else
    {
      ATerm w_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_100 = ATgetFirst((ATermList) t);
          t_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_100;
      t = foldr_2_0(b_87, c_87, t);
      w_100 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_100, w_100);
      t = c_87(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_q_44;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL;
  if(match_cons(t, sym__2))
    {
      u_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10(u_43, v_43, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_100 = NULL,d_43 = NULL,m_43 = NULL;
  t = times_0_0(t);
  m_43 = t;
  t = SSL_explode_term(m_43);
  if(match_cons(t, sym__2))
    {
      ATerm q_46 = ATgetArgument(t, 0);
      d_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_43;
  t = foldr_2_0(t_14, u_14, t);
  z_100 = t;
  t = SSL_TicksToSeconds(z_100);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL,n_101 = NULL;
  l_101 = t;
  if(match_cons(t, sym__2))
    {
      m_101 = ATgetArgument(t, 0);
      n_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_46 = t;
    int t_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_101;
        if((m_101 != t))
          {
            _fail(t);
          }
        t = l_101;
        LocalPopChoice(t_46);
      }
    else
      {
        t = s_46;
        t = (ATerm) ATmakeAppl(sym__2, m_101, n_101);
        {
          ATerm u_46 = t;
          int v_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_101, n_101);
              LocalPopChoice(v_46);
            }
          else
            {
              t = u_46;
              t = SSL_gtr(m_101, n_101);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_101, n_101);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_94 (ATerm), ATerm t)
{
  ATerm r_101 = NULL;
  r_101 = t;
  {
    ATerm w_46 = t;
    int x_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_101 = NULL;
        t = term_o_44;
        t = get_config_0_0(t);
        t_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_101, term_l_44);
        t = geq_0_0(t);
        t = r_101;
        t = g_94(t);
        LocalPopChoice(x_46);
      }
    else
      {
        t = w_46;
        t = r_101;
      }
  }
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm v_101 = NULL,w_101 = NULL,y_101 = NULL,z_101 = NULL;
  t = run_time_0_0(t);
  v_101 = t;
  t = term_i_44;
  t = whoami_0_0(t);
  w_101 = t;
  t = term_p_19;
  y_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_47), v_101), term_z_46), w_101);
  z_101 = t;
  t = SSL_printnl(y_101, z_101);
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_47), v_101), term_z_46), w_101));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_102 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_44;
  a_102 = t;
  t = SSL_exit(a_102);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm i_102 = NULL,j_102 = NULL;
  j_102 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = j_102;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_102 = ATgetArgument(t, 0);
          {
            ATerm u_44 = NULL,d_18 = NULL;
            t = SSLgetAnnotations(j_102);
            u_44 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_102);
            d_18 = t;
            t = SSLsetAnnotations(d_18, u_44);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = j_102;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm c_47 = t;
  int e_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_47;
      t = get_config_0_0(t);
      LocalPopChoice(e_47);
    }
  else
    {
      t = c_47;
      t = fetch_1_0(a_15, t);
    }
  t = d_113(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm o_102 = NULL,p_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_102 = ATgetFirst((ATermList) t);
      p_102 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_102 = NULL,z_102 = NULL;
        static ATerm b_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_102)), not_null(z_102));
          return(t);
        }
        t = p_102;
        t = i_0(t);
        if(((t_102 != NULL) && (t_102 != t)))
          _fail(t);
        else
          t_102 = t;
        t = o_102;
        t = g_0(t);
        if(((z_102 != NULL) && (z_102 != t)))
          _fail(t);
        else
          z_102 = t;
        t = p_102;
        t = reverse_acc_2_0(g_0, b_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_44;
      t = i_0(t);
    }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm d_103 = NULL,e_103 = NULL,f_103 = NULL,v_18 = NULL;
  f_103 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_103);
  d_103 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_103);
  v_18 = t;
  t = SSLsetAnnotations(v_18, d_103);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm h_103 = NULL;
  h_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_103), term_k_47);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_103 = NULL,c_103 = NULL;
  ATerm l_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_46;
      t = get_config_0_0(t);
      LocalPopChoice(m_47);
    }
  else
    {
      t = l_47;
      t = fetch_1_0(f_15, t);
    }
  t = term_n_47;
  t = echo_0_0(t);
  t = term_f_45;
  b_103 = t;
  t = term_g_45;
  c_103 = t;
  t = term_o_47;
  t = l_10(b_103, c_103, t);
  t = reverse_acc_2_0(_id, h_15, t);
  t = map_1_0(i_15, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  static ATerm e_104 (ATerm t)
  {
    ATerm b_104 = NULL,c_104 = NULL,d_104 = NULL;
    b_104 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_104 = ATgetFirst((ATermList) t);
        d_104 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_47 = t;
      int r_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_45 = NULL,o_45 = NULL,x_18 = NULL;
          t = SSLgetAnnotations(b_104);
          k_45 = t;
          t = c_104;
          t = l_85(t);
          o_45 = t;
          t = (ATerm) ATinsert(CheckATermList(d_104), o_45);
          x_18 = t;
          t = SSLsetAnnotations(x_18, k_45);
          LocalPopChoice(r_47);
        }
      else
        {
          t = p_47;
          {
            ATerm d_46 = NULL,i_46 = NULL,y_18 = NULL;
            t = SSLgetAnnotations(b_104);
            d_46 = t;
            t = d_104;
            t = e_104(t);
            i_46 = t;
            t = (ATerm) ATinsert(CheckATermList(i_46), c_104);
            y_18 = t;
            t = SSLsetAnnotations(y_18, d_46);
          }
        }
    }
    return(t);
  }
  t = e_104(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_104 = NULL,j_104 = NULL,k_104 = NULL;
  i_104 = t;
  {
    ATerm t_47 = t;
    int u_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_104;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_47 = ATgetFirst((ATermList) t);
                ATerm w_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_104;
          }
        LocalPopChoice(u_47);
      }
    else
      {
        t = t_47;
        t = (ATerm) ATinsert(ATempty, i_104);
      }
  }
  j_104 = t;
  t = term_h_42;
  k_104 = t;
  t = SSL_printnl(k_104, j_104);
  t = i_104;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_46;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_10 (ATerm v_36, ATerm w_36, ATerm t)
{
  t = SSL_strcat(v_36, w_36);
  return(t);
}
ATerm debug_1_0 (ATerm e_98 (ATerm), ATerm t)
{
  ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL;
  o_104 = t;
  t = e_98(t);
  p_104 = t;
  t = term_p_19;
  q_104 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_104), p_104);
  r_104 = t;
  t = SSL_printnl(q_104, r_104);
  t = o_104;
  return(t);
}
ATerm map_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  static ATerm j_105 (ATerm t)
  {
    ATerm d_105 = NULL,e_105 = NULL,f_105 = NULL;
    d_105 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_105;
      }
    else
      {
        ATerm d_47 = NULL,g_47 = NULL,s_47 = NULL,b_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_105 = ATgetFirst((ATermList) t);
            f_105 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_105);
        d_47 = t;
        t = e_105;
        t = b_85(t);
        g_47 = t;
        t = f_105;
        t = j_105(t);
        s_47 = t;
        t = (ATerm) ATinsert(CheckATermList(s_47), g_47);
        b_19 = t;
        t = SSLsetAnnotations(b_19, d_47);
      }
    return(t);
  }
  t = j_105(t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm x_47 = t;
  int y_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(y_47);
    }
  else
    {
      t = x_47;
    }
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = term_z_47;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_48 = t;
  int b_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_105 = NULL;
      r_105 = t;
      t = SSL_is_string(r_105);
      LocalPopChoice(b_48);
    }
  else
    {
      t = a_48;
      {
        ATerm c_48 = t;
        int d_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_15, t);
            LocalPopChoice(d_48);
          }
        else
          {
            t = c_48;
            {
              ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL;
              x_105 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_105 = ATgetArgument(t, 0);
                  t = y_105;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_105 = ATgetArgument(t, 0);
                      t = y_105;
                      {
                        ATerm f_48 = t;
                        int g_48 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(g_48);
                          }
                        else
                          {
                            t = f_48;
                            t = debug_1_0(l_15, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_106 = NULL,e_106 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_105 = ATgetArgument(t, 0);
                          z_105 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_105;
                      t = eval_config_0_0(t);
                      d_106 = t;
                      t = z_105;
                      t = eval_config_0_0(t);
                      e_106 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_106, e_106);
                      t = k_10(d_106, e_106, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_10 (ATerm n_31, ATerm o_31, ATerm t)
{
  t = SSL_table_get(n_31, o_31);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_106 = NULL,j_106 = NULL;
  i_106 = t;
  t = term_e_45;
  j_106 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_45, i_106);
  t = l_10(j_106, i_106, t);
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_106 = NULL,l_106 = NULL;
        t = eval_config_0_0(t);
        k_106 = t;
        t = term_e_45;
        l_106 = t;
        t = SSL_table_put(l_106, i_106, k_106);
        t = k_106;
        LocalPopChoice(i_48);
      }
    else
      {
        t = h_48;
      }
  }
  return(t);
}
static ATerm o_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm o_106 = NULL,p_106 = NULL;
  t = term_j_48;
  o_106 = t;
  t = term_i_44;
  p_106 = t;
  t = term_m_48;
  t = o_10(o_106, p_106, t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_n_48;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm q_106 = NULL,r_106 = NULL,s_106 = NULL,t_106 = NULL;
  t = term_j_48;
  s_106 = t;
  t = term_i_44;
  t_106 = t;
  t = term_m_48;
  t = o_10(s_106, t_106, t);
  t = term_o_48;
  q_106 = t;
  t = term_i_44;
  r_106 = t;
  t = term_p_48;
  t = o_10(q_106, r_106, t);
  t = term_r_48;
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = term_u_48;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_48 = t;
  int w_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_15, t_15, u_15, t);
      LocalPopChoice(w_48);
    }
  else
    {
      t = v_48;
      t = Option_3_0(w_15, x_15, y_15, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm t)
{
  ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL,y_106 = NULL,z_106 = NULL,j_19 = NULL;
  z_106 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_106 = ATgetFirst((ATermList) t);
      w_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_106);
  u_106 = t;
  t = v_106;
  t = a_72(t);
  x_106 = t;
  t = w_106;
  t = b_72(t);
  y_106 = t;
  t = (ATerm) ATinsert(CheckATermList(y_106), x_106);
  j_19 = t;
  t = SSLsetAnnotations(j_19, u_106);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_115 (ATerm), ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL,j_107 = NULL,k_107 = NULL,l_19 = NULL;
  e_107 = t;
  {
    ATerm x_48 = t;
    int z_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_49;
        t = g_115(t);
        LocalPopChoice(z_48);
      }
    else
      {
        t = x_48;
      }
  }
  t = e_107;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_107 = ATgetFirst((ATermList) t);
      h_107 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_107);
  f_107 = t;
  t = term_k_46;
  k_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_46, g_107);
  t = o_10(k_107, g_107, t);
  t = h_107;
  {
    static ATerm u_107 (ATerm t)
    {
      ATerm c_49 = t;
      int d_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_49 = t;
          int g_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_107 = NULL;
              n_107 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_107;
              LocalPopChoice(g_49);
            }
          else
            {
              t = e_49;
              t = g_115(t);
              t = Cons_2_0(_id, u_107, t);
            }
          LocalPopChoice(d_49);
        }
      else
        {
          t = c_49;
          {
            ATerm q_107 = NULL,r_107 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_107 = ATgetFirst((ATermList) t);
                r_107 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_107), (ATerm) ATmakeAppl(sym_Undefined_1, q_107));
          }
        }
      return(t);
    }
    t = u_107(t);
  }
  j_107 = t;
  t = (ATerm) ATinsert(CheckATermList(j_107), (ATerm) ATmakeAppl(sym_Program_1, g_107));
  l_19 = t;
  t = SSLsetAnnotations(l_19, f_107);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm g_108 = NULL;
  g_108 = t;
  if(match_string(t, "--help"))
    {
      t = g_108;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_108;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_108;
        }
    }
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm h_108 = NULL,m_108 = NULL;
  t = term_f_47;
  h_108 = t;
  t = term_i_44;
  m_108 = t;
  t = term_h_49;
  t = o_10(h_108, m_108, t);
  t = term_i_49;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = term_j_49;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_115 (ATerm), ATerm t)
{
  ATerm z_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL,d_108 = NULL,e_108 = NULL,f_108 = NULL;
  b_108 = t;
  t = term_f_45;
  d_108 = t;
  t = term_g_45;
  e_108 = t;
  t = (ATerm) ATempty;
  f_108 = t;
  t = SSL_table_put(d_108, e_108, f_108);
  t = b_108;
  {
    static ATerm b_16 (ATerm t)
    {
      ATerm k_49 = t;
      int l_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_115(t);
          LocalPopChoice(l_49);
        }
      else
        {
          t = k_49;
          {
            ATerm m_49 = t;
            int n_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_16, d_16, e_16, t);
                LocalPopChoice(n_49);
              }
            else
              {
                t = m_49;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_16, t);
  }
  {
    ATerm o_49 = t;
    int p_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_108 = NULL;
        t_108 = t;
        {
          ATerm q_49 = t;
          int r_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_49 = NULL;
              t = t_108;
              {
                ATerm s_49 = t;
                int t_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_f_47;
                    t = get_config_0_0(t);
                    LocalPopChoice(t_49);
                  }
                else
                  {
                    t = s_49;
                    t = fetch_1_0(f_16, t);
                  }
              }
              t = t_108;
              t = default_system_usage_0_0(t);
              t = term_q_44;
              b_49 = t;
              t = SSL_exit(b_49);
              LocalPopChoice(r_49);
            }
          else
            {
              t = q_49;
              {
                ATerm f_49 = NULL;
                t = term_j_48;
                t = get_config_0_0(t);
                t = t_108;
                t = default_system_about_0_0(t);
                t = term_q_44;
                f_49 = t;
                t = SSL_exit(f_49);
              }
            }
        }
        LocalPopChoice(p_49);
      }
    else
      {
        t = o_49;
        {
          ATerm u_49 = t;
          int v_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL;
              static ATerm h_16 (ATerm t)
              {
                ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL,n_19 = NULL;
                z_108 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_108 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_108);
                x_108 = t;
                t = y_108;
                if(((z_107 != NULL) && (z_107 != t)))
                  _fail(t);
                else
                  z_107 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_108);
                n_19 = t;
                t = SSLsetAnnotations(n_19, x_108);
                return(t);
              }
              t = fetch_1_0(h_16, t);
              t = term_p_19;
              v_108 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_107)), term_w_49);
              w_108 = t;
              t = SSL_printnl(v_108, w_108);
              t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_107)), term_w_49));
              t = default_system_usage_0_0(t);
              t = term_l_44;
              u_108 = t;
              t = SSL_exit(u_108);
              LocalPopChoice(v_49);
            }
          else
            {
              t = u_49;
            }
        }
      }
  }
  a_108 = t;
  t = term_f_45;
  c_108 = t;
  t = SSL_table_destroy(c_108);
  t = a_108;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm t)
{
  ATerm e_109 = NULL,f_109 = NULL,g_109 = NULL,h_109 = NULL;
  t = parse_options_1_0(f_113, t);
  e_109 = t;
  t = term_x_49;
  h_109 = t;
  t = SSL_table_create(h_109);
  t = term_x_49;
  f_109 = t;
  t = term_y_49;
  g_109 = t;
  t = SSL_table_put(f_109, g_109, e_109);
  t = e_109;
  t = h_113(t);
  {
    ATerm z_49 = t;
    int a_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_113, t);
        LocalPopChoice(a_50);
      }
    else
      {
        t = z_49;
        {
          ATerm b_50 = t;
          int c_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_113(t);
              t = report_success_0_0(t);
              LocalPopChoice(c_50);
            }
          else
            {
              t = b_50;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm d_50 = t;
  int e_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      LocalPopChoice(e_50);
    }
  else
    {
      t = d_50;
      {
        ATerm f_50 = t;
        int i_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(i_50);
          }
        else
          {
            t = f_50;
            {
              ATerm k_50 = t;
              int n_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(n_50);
                }
              else
                {
                  t = k_50;
                  {
                    ATerm o_50 = t;
                    int p_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(l_16, o_16, p_16, t);
                        LocalPopChoice(p_50);
                      }
                    else
                      {
                        t = o_50;
                        {
                          ATerm q_50 = t;
                          int r_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(r_50);
                            }
                          else
                            {
                              t = q_50;
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
static ATerm k_16 (ATerm t)
{
  t = input_1_0(r_16, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm j_109 = NULL,k_109 = NULL;
  t = term_s_42;
  j_109 = t;
  t = term_i_44;
  k_109 = t;
  t = term_s_50;
  t = o_10(j_109, k_109, t);
  t = term_t_50;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_v_50;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = output_1_0(s_16, t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm m_109 = NULL;
  m_109 = t;
  t = spec_use_def_0_0(t);
  t = m_109;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_16, default_usage_0_0, _id, k_16, t);
  return(t);
}
