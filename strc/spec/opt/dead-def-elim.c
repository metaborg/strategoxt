#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_SVar_1;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Path_2;
Symbol sym_Rec_2;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_RDefT_4;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Path_1;
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
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
ATerm term_m_23;
ATerm term_j_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_b_22;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_d_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_g_15;
ATerm term_c_15;
ATerm term_u_14;
ATerm term_d_13;
ATerm term_h_10;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_e_9;
ATerm term_q_8;
ATerm term_o_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_9);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_h_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_r_16);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__2, term_e_18, term_q_8);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_z_18);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_y_17);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_s_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_p_18);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_q_8);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_q_8);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_q_8);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, (ATerm) ATempty);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_s_20);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_d_23, term_q_8);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local        do not eliminate top-level definitions", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_q_8);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_d_23);
}
#include <srts/init-stratego-application.h>
ATerm DefDead_0_0 (ATerm t);
ATerm filter_1_0 (ATerm z_121 (ATerm), ATerm t);
static ATerm z_5 (ATerm b_42, ATerm c_42, ATerm d_42, ATerm t);
static ATerm d_6 (ATerm t_41, ATerm u_41, ATerm t);
ATerm end_scope_1_0 (ATerm r_111 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_111 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t);
static ATerm o_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm local_dead_def_elim_0_0 (ATerm t);
ATerm map_1_0 (ATerm y_114 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm v_98 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm h_6 (ATerm j_24, ATerm i_24, ATerm t);
static ATerm j_6 (ATerm s_117 (ATerm), ATerm z_57, ATerm y_57, ATerm t);
ATerm foldr_3_0 (ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm free_vars_3_0 (ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm r_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm l_6 (ATerm z_41, ATerm a_42, ATerm t);
ATerm Definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm p_115 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_28 (ATerm d_28, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm n_6 (ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm d_58, ATerm c_58, ATerm t);
static ATerm o_6 (ATerm n_117 (ATerm), ATerm x_57, ATerm w_57, ATerm t);
ATerm genzip_4_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm t_6 (ATerm f_730, ATerm k_730, ATerm o_73, ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm j_33 (ATerm t_31, ATerm u_31, ATerm v_31, ATerm t);
static ATerm s_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm v_6 (ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm w_74, ATerm t_74, ATerm a_75, ATerm x_74, ATerm u_74, ATerm v_74, ATerm t);
ATerm GnNext_3_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm t);
ATerm for_3_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm t);
static ATerm y_6 (ATerm u_111 (ATerm), ATerm k_40, ATerm i_40, ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm RegisterDefinition_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
static ATerm m_7 (ATerm h_43, ATerm i_43, ATerm t);
ATerm Cons_2_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm t);
static ATerm z_6 (ATerm j_32, ATerm k_32, ATerm t);
static ATerm a_7 (ATerm b_31, ATerm c_31, ATerm t);
static ATerm c_7 (ATerm l_107 (ATerm), ATerm s_224, ATerm h_31, ATerm t);
static ATerm b_7 (ATerm x_30, ATerm y_30, ATerm t);
static ATerm t_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm output_1_0 (ATerm u_129 (ATerm), ATerm t);
static ATerm f_43 (ATerm t_42, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_7 (ATerm d_31, ATerm t);
static ATerm e_7 (ATerm c_67, ATerm d_67, ATerm t);
static ATerm f_7 (ATerm l_32, ATerm m_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_45 (ATerm r_43, ATerm t);
static ATerm q_45 (ATerm z_43, ATerm a_44, ATerm b_44, ATerm t);
static ATerm r_45 (ATerm q_44, ATerm r_44, ATerm s_44, ATerm t);
static ATerm g_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm v_129 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_7 (ATerm e_36, ATerm f_36, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_7 (ATerm o_41, ATerm p_41, ATerm n_41, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_7 (ATerm w_38, ATerm x_38, ATerm t);
ATerm foldr_2_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_109 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm need_help_1_0 (ATerm l_129 (ATerm), ATerm t);
static ATerm q_7 (ATerm g_46, ATerm h_46, ATerm i_46, ATerm t);
static ATerm r_7 (ATerm j_46, ATerm k_46, ATerm t);
ATerm lookup_table_0_1 (ATerm a_43, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_46, ATerm p_46, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_7 (ATerm l_46, ATerm m_46, ATerm t);
static ATerm k_7 (ATerm q_46, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_115 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm o_131 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm parse_options_1_0 (ATerm n_131 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm t);
static ATerm x_6 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm DefDead_0_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL;
  h_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_1 = ATgetArgument(t, 0);
      {
        ATerm j_8 = ATgetArgument(t, 1);
      }
      {
        ATerm k_8 = ATgetArgument(t, 2);
      }
      {
        ATerm l_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_1 = NULL,n_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        d_1 = t;
        t = term_o_8;
        n_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        t = l_6(n_1, d_1, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = h_1;
        _fail(t);
        LocalPopChoice(n_8);
      }
    else
      {
        t = m_8;
        {
          ATerm n_2 = NULL,o_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          n_2 = t;
          t = term_o_8;
          o_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_8, (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          t = l_6(o_2, n_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm p_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_8) != ATmakeSymbol("k_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_q_8;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm z_121 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL;
  a_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_2 = ATgetFirst((ATermList) t);
          c_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 = NULL,b_3 = NULL,c_3 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(a_2);
            v_2 = t;
            t = b_2;
            t = z_121(t);
            b_3 = t;
            t = c_2;
            t = filter_1_0(z_121, t);
            c_3 = t;
            t = (ATerm) ATinsert(CheckATermList(c_3), b_3);
            a_0 = t;
            t = SSLsetAnnotations(a_0, v_2);
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
            t = c_2;
            t = filter_1_0(z_121, t);
          }
      }
    }
  return(t);
}
static ATerm z_5 (ATerm b_42, ATerm c_42, ATerm d_42, ATerm t)
{
  ATerm g_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,p_2 = NULL;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_42, c_42);
  t = m_7(b_42, c_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_8 = ATgetFirst((ATermList) t);
      g_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_42, c_42, (ATerm) ATinsert(CheckATermList(g_2), d_42));
  t = lookup_table_0_1(b_42, t);
  p_2 = t;
  t = (ATerm) ATinsert(CheckATermList(g_2), d_42);
  j_2 = t;
  t = p_2;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(c_42, j_2, k_2, t);
  t = i_2;
  return(t);
}
static ATerm d_6 (ATerm t_41, ATerm u_41, ATerm t)
{
  ATerm q_2 = NULL,w_2 = NULL;
  w_2 = t;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_41, u_41);
        t = m_7(t_41, u_41, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_8 = ATgetFirst((ATermList) t);
            q_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_8);
        {
          ATerm z_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, t_41, u_41, q_2);
          t = lookup_table_0_1(t_41, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              z_2 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_7(u_41, q_2, z_2, t);
          t = (ATerm) ATmakeAppl(sym__3, t_41, u_41, q_2);
        }
      }
    else
      {
        t = v_8;
        {
          ATerm j_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, t_41, u_41);
          t = lookup_table_0_1(t_41, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_7(u_41, j_3, t);
          t = (ATerm) ATmakeAppl(sym__2, t_41, u_41);
        }
      }
  }
  t = w_2;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,s_3 = NULL,u_3 = NULL,v_3 = NULL;
  q_3 = t;
  t = r_111(t);
  p_3 = t;
  {
    ATerm y_8 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 = NULL;
        t = term_e_9;
        w_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_3, term_e_9);
        t = m_7(p_3, w_3, t);
        {
          ATerm f_9 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_9;
            }
        }
        LocalPopChoice(c_9);
      }
    else
      {
        t = y_8;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_3 = ATgetFirst((ATermList) t);
      m_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_3, term_e_9, m_3);
  t = lookup_table_0_1(p_3, t);
  v_3 = t;
  t = term_e_9;
  s_3 = t;
  t = v_3;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(s_3, m_3, u_3, t);
  t = o_3;
  {
    static ATerm c_0 (ATerm t)
    {
      ATerm y_3 = NULL;
      y_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_3, y_3);
      t = d_6(p_3, y_3, t);
      return(t);
    }
    t = map_1_0(c_0, t);
  }
  t = q_3;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_103(t);
      t = j_103(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      t = j_103(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_111 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,i_4 = NULL;
  c_4 = t;
  t = q_111(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, term_e_9);
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_9 = ATgetArgument(t, 0);
            ATerm l_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_9;
        r_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_4, term_e_9);
        t = m_7(b_4, r_4, t);
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        t = (ATerm) ATempty;
      }
  }
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_4, term_e_9, (ATerm) ATinsert(CheckATermList(d_4), (ATerm) ATempty));
  t = lookup_table_0_1(b_4, t);
  i_4 = t;
  t = term_e_9;
  e_4 = t;
  t = (ATerm) ATinsert(CheckATermList(d_4), (ATerm) ATempty);
  f_4 = t;
  t = i_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(e_4, f_4, g_4, t);
  t = c_4;
  return(t);
}
ATerm scope_2_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  static ATerm n_0 (ATerm t)
  {
    t = end_scope_1_0(s_111, t);
    return(t);
  }
  t = begin_scope_1_0(s_111, t);
  t = restore_always_2_0(t_111, n_0, t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = term_o_8;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm a_4 = NULL,h_4 = NULL,j_4 = NULL,l_4 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      a_4 = ATgetArgument(t, 0);
      {
        ATerm m_9 = ATgetArgument(t, 1);
      }
      {
        ATerm n_9 = ATgetArgument(t, 2);
      }
      {
        ATerm o_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, a_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  j_4 = t;
  t = term_r_9;
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, a_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_r_9);
  t = y_6(v_0, j_4, l_4, t);
  t = h_4;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_o_8;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm t_9 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_9;
    }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  static ATerm s_0 (ATerm t)
  {
    ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,i_6 = NULL,u_6 = NULL,v_7 = NULL,x_7 = NULL;
    x_7 = t;
    if(match_cons(t, sym_Let_2))
      {
        i_6 = ATgetArgument(t, 0);
        v_7 = ATgetArgument(t, 1);
        {
          ATerm u_9 = t;
          int v_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_3 = NULL,x_3 = NULL,e_0 = NULL;
              t = SSLgetAnnotations(x_7);
              n_3 = t;
              t = i_6;
              t = map_1_0(u_0, t);
              x_3 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, x_3, v_7);
              e_0 = t;
              t = SSLsetAnnotations(e_0, n_3);
              LocalPopChoice(v_9);
            }
          else
            {
              t = u_9;
              t = x_7;
            }
        }
      }
    else
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_CallT_3))
              {
                i_6 = ATgetArgument(t, 0);
                {
                  ATerm d_10 = ATgetArgument(t, 1);
                }
                {
                  ATerm e_10 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(c_10);
            t = i_6;
            if(match_cons(t, sym_SVar_1))
              {
                u_6 = ATgetArgument(t, 0);
                {
                  ATerm f_10 = t;
                  int g_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_8 = NULL,c_8 = NULL,g_8 = NULL;
                      t = term_o_8;
                      b_8 = t;
                      t = (ATerm) ATmakeAppl(sym_SDefT_4, u_6, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
                      c_8 = t;
                      t = term_h_10;
                      g_8 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_o_8, (ATerm)ATmakeAppl(sym_SDefT_4, u_6, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_h_10);
                      t = z_5(b_8, c_8, g_8, t);
                      t = x_7;
                      LocalPopChoice(g_10);
                    }
                  else
                    {
                      t = f_10;
                      t = x_7;
                    }
                }
              }
            else
              {
                t = x_7;
              }
          }
        else
          {
            t = b_10;
            t = x_7;
          }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    u_10 = t;
    if(match_cons(t, sym_Let_2))
      {
        s_10 = ATgetArgument(t, 0);
        t_10 = ATgetArgument(t, 1);
        {
          ATerm i_10 = t;
          int j_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_4 = NULL,y_4 = NULL,i_0 = NULL;
              t = SSLgetAnnotations(u_10);
              v_4 = t;
              t = s_10;
              t = filter_1_0(w_0, t);
              y_4 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, y_4, t_10);
              i_0 = t;
              t = SSLsetAnnotations(i_0, v_4);
              LocalPopChoice(j_10);
            }
          else
            {
              t = i_10;
              t = u_10;
            }
        }
      }
    else
      {
        t = u_10;
      }
    return(t);
  }
  t = scope_2_0(o_0, s_0, t);
  return(t);
}
ATerm map_1_0 (ATerm y_114 (ATerm), ATerm t)
{
  static ATerm w_11 (ATerm t)
  {
    ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
    t_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_11;
      }
    else
      {
        ATerm j_5 = NULL,s_5 = NULL,t_5 = NULL,r_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_11 = ATgetFirst((ATermList) t);
            v_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_11);
        j_5 = t;
        t = u_11;
        t = y_114(t);
        s_5 = t;
        t = v_11;
        t = w_11(t);
        t_5 = t;
        t = (ATerm) ATinsert(CheckATermList(t_5), s_5);
        r_0 = t;
        t = SSLsetAnnotations(r_0, j_5);
      }
    return(t);
  }
  t = w_11(t);
  return(t);
}
ATerm sboundin_3_0 (ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm t)
{
  ATerm a_20 = NULL,f_20 = NULL,j_20 = NULL,l_20 = NULL,p_20 = NULL;
  j_20 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
      {
        ATerm e_6 = NULL,p_6 = NULL,q_6 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(j_20);
        e_6 = t;
        t = l_20;
        t = r_98(t);
        p_6 = t;
        t = p_20;
        t = r_98(t);
        q_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_6, q_6);
        y_0 = t;
        t = SSLsetAnnotations(y_0, e_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_20 = ATgetArgument(t, 0);
          p_20 = ATgetArgument(t, 1);
          f_20 = ATgetArgument(t, 2);
          {
            ATerm t_7 = NULL,f_8 = NULL,h_8 = NULL,i_8 = NULL,a_1 = NULL;
            t = SSLgetAnnotations(j_20);
            t_7 = t;
            t = l_20;
            t = t_98(t);
            f_8 = t;
            t = p_20;
            t = t_98(t);
            h_8 = t;
            t = f_20;
            t = r_98(t);
            i_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, f_8, h_8, i_8);
            a_1 = t;
            t = SSLsetAnnotations(a_1, t_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              l_20 = ATgetArgument(t, 0);
              p_20 = ATgetArgument(t, 1);
              f_20 = ATgetArgument(t, 2);
              a_20 = ATgetArgument(t, 3);
              {
                ATerm u_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,d_9 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(j_20);
                u_8 = t;
                t = l_20;
                t = t_98(t);
                z_8 = t;
                t = p_20;
                t = t_98(t);
                a_9 = t;
                t = f_20;
                t = t_98(t);
                b_9 = t;
                t = a_20;
                t = r_98(t);
                d_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_8, a_9, b_9, d_9);
                b_1 = t;
                t = SSLsetAnnotations(b_1, u_8);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  l_20 = ATgetArgument(t, 0);
                  p_20 = ATgetArgument(t, 1);
                  f_20 = ATgetArgument(t, 2);
                  a_20 = ATgetArgument(t, 3);
                  {
                    ATerm q_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,a_10 = NULL,e_1 = NULL;
                    t = SSLgetAnnotations(j_20);
                    q_9 = t;
                    t = l_20;
                    t = t_98(t);
                    w_9 = t;
                    t = p_20;
                    t = t_98(t);
                    x_9 = t;
                    t = f_20;
                    t = t_98(t);
                    y_9 = t;
                    t = a_20;
                    t = r_98(t);
                    a_10 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, w_9, x_9, y_9, a_10);
                    e_1 = t;
                    t = SSLsetAnnotations(e_1, q_9);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      l_20 = ATgetArgument(t, 0);
                      p_20 = ATgetArgument(t, 1);
                      f_20 = ATgetArgument(t, 2);
                      {
                        ATerm m_10 = NULL,d_11 = NULL,h_11 = NULL,i_11 = NULL,f_1 = NULL;
                        t = SSLgetAnnotations(j_20);
                        m_10 = t;
                        t = l_20;
                        t = t_98(t);
                        d_11 = t;
                        t = p_20;
                        t = t_98(t);
                        h_11 = t;
                        t = f_20;
                        t = t_98(t);
                        i_11 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, d_11, h_11, i_11);
                        f_1 = t;
                        t = SSLsetAnnotations(f_1, m_10);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          l_20 = ATgetArgument(t, 0);
                          p_20 = ATgetArgument(t, 1);
                          {
                            ATerm c_12 = NULL,f_12 = NULL,g_12 = NULL,g_1 = NULL;
                            t = SSLgetAnnotations(j_20);
                            c_12 = t;
                            t = l_20;
                            t = t_98(t);
                            f_12 = t;
                            t = p_20;
                            t = r_98(t);
                            g_12 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, f_12, g_12);
                            g_1 = t;
                            t = SSLsetAnnotations(g_1, c_12);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              l_20 = ATgetArgument(t, 0);
                              p_20 = ATgetArgument(t, 1);
                              {
                                ATerm o_12 = NULL,r_12 = NULL,u_12 = NULL,m_1 = NULL;
                                t = SSLgetAnnotations(j_20);
                                o_12 = t;
                                t = l_20;
                                t = t_98(t);
                                r_12 = t;
                                t = p_20;
                                t = r_98(t);
                                u_12 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, r_12, u_12);
                                m_1 = t;
                                t = SSLsetAnnotations(m_1, o_12);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  l_20 = ATgetArgument(t, 0);
                                  p_20 = ATgetArgument(t, 1);
                                  {
                                    ATerm v_13 = NULL,b_14 = NULL,d_14 = NULL,o_1 = NULL;
                                    t = SSLgetAnnotations(j_20);
                                    v_13 = t;
                                    t = l_20;
                                    t = t_98(t);
                                    b_14 = t;
                                    t = p_20;
                                    t = r_98(t);
                                    d_14 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, b_14, d_14);
                                    o_1 = t;
                                    t = SSLsetAnnotations(o_1, v_13);
                                  }
                                }
                              else
                                {
                                  ATerm o_14 = NULL,v_14 = NULL,w_14 = NULL,p_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      l_20 = ATgetArgument(t, 0);
                                      p_20 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(j_20);
                                  o_14 = t;
                                  t = l_20;
                                  t = t_98(t);
                                  v_14 = t;
                                  t = p_20;
                                  t = r_98(t);
                                  w_14 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, v_14, w_14);
                                  p_1 = t;
                                  t = SSLsetAnnotations(p_1, o_14);
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
ATerm dynrule_sargs_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,r_21 = NULL;
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          o_21 = ATgetArgument(t, 0);
          {
            ATerm n_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_10);
      t = o_21;
      if(match_cons(t, sym_DynRuleId_1))
        {
          p_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_21;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_10 = ATgetArgument(t, 0);
          r_21 = ATgetArgument(t, 1);
          {
            ATerm r_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_21;
    }
  else
    {
      t = k_10;
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                o_21 = ATgetArgument(t, 0);
                {
                  ATerm x_10 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_10);
            t = o_21;
            if(match_cons(t, sym_DynRuleId_1))
              {
                p_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_21;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm a_11 = ATgetArgument(t, 0);
                r_21 = ATgetArgument(t, 1);
                {
                  ATerm b_11 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = r_21;
          }
        else
          {
            t = v_10;
            if(match_cons(t, sym_AddDynRule_2))
              {
                o_21 = ATgetArgument(t, 0);
                {
                  ATerm c_11 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = o_21;
            if(match_cons(t, sym_DynRuleId_1))
              {
                p_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_21;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm e_11 = ATgetArgument(t, 0);
                r_21 = ATgetArgument(t, 1);
                {
                  ATerm f_11 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = r_21;
          }
      }
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm u_22 = NULL;
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_22 = ATgetArgument(t, 0);
          {
            ATerm m_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_11);
      t = u_22;
    }
  else
    {
      t = j_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_22;
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm i_23 = NULL;
  ATerm p_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_23 = ATgetArgument(t, 0);
          {
            ATerm s_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_11);
      t = i_23;
    }
  else
    {
      t = p_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_23;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm k_22 = NULL;
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm z_11 = ATgetArgument(t, 0);
          k_22 = ATgetArgument(t, 1);
          {
            ATerm a_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_11);
      t = k_22;
      t = map_1_0(x_0, t);
    }
  else
    {
      t = x_11;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm b_12 = ATgetArgument(t, 0);
          k_22 = ATgetArgument(t, 1);
          {
            ATerm d_12 = ATgetArgument(t, 2);
          }
          {
            ATerm e_12 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_22;
      t = map_1_0(z_0, t);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm r_23 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          r_23 = ATgetArgument(t, 0);
          {
            ATerm j_12 = ATgetArgument(t, 1);
          }
          {
            ATerm k_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_12);
      t = r_23;
    }
  else
    {
      t = h_12;
      if(match_cons(t, sym_SDefT_4))
        {
          r_23 = ATgetArgument(t, 0);
          {
            ATerm l_12 = ATgetArgument(t, 1);
          }
          {
            ATerm m_12 = ATgetArgument(t, 2);
          }
          {
            ATerm n_12 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = r_23;
    }
  return(t);
}
static ATerm h_6 (ATerm j_24, ATerm i_24, ATerm t)
{
  t = j_24;
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm j_6 (ATerm s_117 (ATerm), ATerm z_57, ATerm y_57, ATerm t)
{
  static ATerm r_24 (ATerm t)
  {
    ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
    m_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_57;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_24 = ATgetFirst((ATermList) t);
            o_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_24;
              {
                static ATerm j_1 (ATerm t)
                {
                  t = y_57;
                  return(t);
                }
                t = n_6(s_117, j_1, n_24, o_24, t);
              }
              t = r_24(t);
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              {
                ATerm m_15 = NULL,q_15 = NULL,f_2 = NULL;
                t = SSLgetAnnotations(m_24);
                m_15 = t;
                t = o_24;
                t = r_24(t);
                q_15 = t;
                t = (ATerm) ATinsert(CheckATermList(q_15), n_24);
                f_2 = t;
                t = SSLsetAnnotations(f_2, m_15);
              }
            }
        }
      }
    return(t);
  }
  t = z_57;
  t = r_24(t);
  return(t);
}
ATerm foldr_3_0 (ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  u_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_24;
      t = x_120(t);
    }
  else
    {
      ATerm z_24 = NULL,a_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_24 = ATgetFirst((ATermList) t);
          w_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_24;
      t = z_120(t);
      z_24 = t;
      t = w_24;
      t = foldr_3_0(x_120, y_120, z_120, t);
      a_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_24, a_25);
      t = y_120(t);
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      j_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(s_1, i_16, j_16, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm k_16 = NULL;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      if((k_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL;
  if(match_cons(t, sym__2))
    {
      u_16 = ATgetArgument(t, 0);
      v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(v_1, u_16, v_16, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      if((w_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm r_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm s_25 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_124(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_25 = NULL,g_25 = NULL,b_16 = NULL,c_16 = NULL;
              e_25 = t;
              t = q_124(t);
              g_25 = t;
              t = e_25;
              {
                static ATerm k_1 (ATerm t)
                {
                  ATerm j_25 = NULL;
                  t = s_25(t);
                  j_25 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_25, g_25);
                  t = diff_0_0(t);
                  return(t);
                }
                t = r_124(k_1, s_25, l_1, t);
              }
              c_16 = t;
              t = SSL_explode_term(c_16);
              if(match_cons(t, sym__2))
                {
                  ATerm x_12 = ATgetArgument(t, 0);
                  b_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_16;
              t = foldr_3_0(q_1, r_1, _id, t);
              LocalPopChoice(w_12);
            }
          else
            {
              t = v_12;
              {
                ATerm m_16 = NULL,n_16 = NULL;
                n_16 = t;
                t = SSL_explode_term(n_16);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_12 = ATgetArgument(t, 0);
                    m_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_16;
                t = foldr_3_0(t_1, u_1, s_25, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_25(t);
  return(t);
}
static ATerm l_6 (ATerm z_41, ATerm a_42, ATerm t)
{
  ATerm t_25 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_41, a_42);
  t = m_7(z_41, a_42, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_25 = ATgetFirst((ATermList) t);
      {
        ATerm z_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_25;
  return(t);
}
ATerm Definition_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  m_26 = t;
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      {
        ATerm a_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_18 = NULL,l_18 = NULL,q_18 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty);
        l_18 = t;
        t = term_d_13;
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty));
        t = l_6(q_18, l_18, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_13) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            g_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_18;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_18 = NULL,f_19 = NULL,g_19 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty);
              f_19 = t;
              t = term_d_13;
              g_19 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty));
              t = l_6(g_19, f_19, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_13 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_13) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  x_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_18;
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
              {
                ATerm m_19 = NULL,x_19 = NULL,b_20 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty);
                x_19 = t;
                t = term_d_13;
                b_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty));
                t = l_6(b_20, x_19, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm i_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_13) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    m_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_19;
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  static ATerm t_27 (ATerm t)
  {
    ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
    s_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_27 = ATgetFirst((ATermList) t);
        r_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_20 = NULL,m_20 = NULL,f_5 = NULL;
          t = SSLgetAnnotations(s_27);
          h_20 = t;
          t = r_27;
          t = t_27(t);
          m_20 = t;
          t = (ATerm) ATinsert(CheckATermList(m_20), q_27);
          f_5 = t;
          t = SSLsetAnnotations(f_5, h_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_27;
        t = p_115(t);
      }
    return(t);
  }
  t = t_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_26;
    }
  else
    {
      static ATerm w_1 (ATerm t)
      {
        t = not_null(v_26);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_26 = ATgetFirst((ATermList) t);
          if(((v_26 != NULL) && (v_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_26;
      t = at_end_1_0(w_1, t);
    }
  return(t);
}
static ATerm l_28 (ATerm d_28, ATerm t)
{
  ATerm e_28 = NULL;
  t = SSL_explode_term(d_28);
  if(match_cons(t, sym__2))
    {
      ATerm j_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_28;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  i_28 = t;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_1 (ATerm t)
            {
              t = h_28;
              return(t);
            }
            t = g_28;
            t = at_end_1_0(x_1, t);
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            t = l_28(i_28, t);
          }
      }
    }
  else
    {
      t = l_28(i_28, t);
    }
  return(t);
}
static ATerm n_6 (ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm d_58, ATerm c_58, ATerm t)
{
  t = w_117(t);
  {
    static ATerm y_1 (ATerm t)
    {
      ATerm m_28 = NULL;
      m_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_58, m_28);
      t = v_117(t);
      return(t);
    }
    t = fetch_1_0(y_1, t);
  }
  t = c_58;
  return(t);
}
static ATerm o_6 (ATerm n_117 (ATerm), ATerm x_57, ATerm w_57, ATerm t)
{
  static ATerm o_29 (ATerm t)
  {
    ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
    h_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_29 = ATgetFirst((ATermList) t);
            j_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_29;
              {
                static ATerm z_1 (ATerm t)
                {
                  t = w_57;
                  return(t);
                }
                t = n_6(n_117, z_1, i_29, j_29, t);
              }
              t = o_29(t);
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              {
                ATerm e_21 = NULL,h_21 = NULL,h_5 = NULL;
                t = SSLgetAnnotations(h_29);
                e_21 = t;
                t = j_29;
                t = o_29(t);
                h_21 = t;
                t = (ATerm) ATinsert(CheckATermList(h_21), i_29);
                h_5 = t;
                t = SSLsetAnnotations(h_5, e_21);
              }
            }
        }
      }
    return(t);
  }
  t = x_57;
  t = o_29(t);
  return(t);
}
ATerm genzip_4_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t)
{
  static ATerm b_30 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_104(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          ATerm r_29 = NULL,s_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,l_5 = NULL;
          t = o_104(t);
          a_30 = t;
          if(match_cons(t, sym__2))
            {
              s_29 = ATgetArgument(t, 0);
              x_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_30);
          r_29 = t;
          t = s_29;
          t = q_104(t);
          y_29 = t;
          t = x_29;
          t = b_30(t);
          z_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_29, z_29);
          l_5 = t;
          t = SSLsetAnnotations(l_5, r_29);
          t = p_104(t);
        }
      }
    return(t);
  }
  t = b_30(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if(((ATgetType(q_13) != AT_LIST) || !(ATisEmpty(q_13))))
        _fail(t);
      {
        ATerm r_13 = ATgetArgument(t, 1);
        if(((ATgetType(r_13) != AT_LIST) || !(ATisEmpty(r_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm m_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_13 = ATgetArgument(t, 0);
      if(((ATgetType(s_13) == AT_LIST) && !(ATisEmpty(s_13))))
        {
          m_30 = ATgetFirst((ATermList) s_13);
          r_30 = (ATerm) ATgetNext((ATermList) s_13);
        }
      else
        _fail(t);
      {
        ATerm t_13 = ATgetArgument(t, 1);
        if(((ATgetType(t_13) == AT_LIST) && !(ATisEmpty(t_13))))
          {
            s_30 = ATgetFirst((ATermList) t_13);
            t_30 = (ATerm) ATgetNext((ATermList) t_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_30, s_30), (ATerm) ATmakeAppl(sym__2, r_30, t_30));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL;
  if(match_cons(t, sym__2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_30), u_30);
  return(t);
}
static ATerm t_6 (ATerm f_730, ATerm k_730, ATerm o_73, ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,j_30 = NULL,k_30 = NULL;
  t = SSL_explode_term(k_730);
  if(match_cons(t, sym__2))
    {
      f_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_730);
  if(match_cons(t, sym__2))
    {
      if((f_30 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_30, j_30);
  t = genzip_4_0(d_2, e_2, h_2, _id, t);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_30, o_73);
  t = conc_0_0(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_31);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,p_5 = NULL;
  s_31 = t;
  if(match_cons(t, sym__2))
    {
      q_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_31);
  p_31 = t;
  t = r_31;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_31, r_31);
  p_5 = t;
  t = SSLsetAnnotations(p_5, p_31);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
  r_32 = t;
  if(match_cons(t, sym__2))
    {
      s_32 = ATgetArgument(t, 0);
      t_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_32 = ATgetFirst((ATermList) t);
      v_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_33(s_32, t_32, r_32, t);
            LocalPopChoice(w_13);
          }
        else
          {
            t = u_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_32), u_32), v_32);
          }
      }
    }
  else
    {
      t = j_33(s_32, t_32, r_32, t);
    }
  return(t);
}
static ATerm j_33 (ATerm t_31, ATerm u_31, ATerm v_31, ATerm t)
{
  ATerm w_31 = NULL,z_31 = NULL,q_5 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  t = SSLgetAnnotations(v_31);
  w_31 = t;
  t = u_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_32 = ATgetFirst((ATermList) t);
      f_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_32;
  if(match_cons(t, sym__2))
    {
      d_32 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_32;
        if((d_32 != t))
          {
            _fail(t);
          }
        t = f_32;
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = u_31;
        t = t_6(d_32, e_32, f_32, t);
      }
  }
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_31, z_31);
  q_5 = t;
  t = SSLsetAnnotations(q_5, w_31);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm i_33 = NULL;
  if(match_cons(t, sym__2))
    {
      i_33 = ATgetArgument(t, 0);
      if((i_33 != ATgetArgument(t, 1)))
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
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(l_2, m_2, r_2, t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
      {
        ATerm z_32 = NULL,a_33 = NULL,d_33 = NULL;
        z_32 = t;
        if(match_cons(t, sym__2))
          {
            a_33 = ATgetArgument(t, 0);
            d_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_32;
        t = o_6(s_2, a_33, d_33, t);
      }
    }
  return(t);
}
static ATerm v_6 (ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm w_74, ATerm t_74, ATerm a_75, ATerm x_74, ATerm u_74, ATerm v_74, ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_74, x_74);
  t = z_133(t);
  m_33 = t;
  t = a_134(t);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_33, a_75);
  t = diff_0_0(t);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_33, t_74);
  t = conc_0_0(t);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_33, a_75);
  t = conc_0_0(t);
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_74, m_33, u_74);
  t = b_134(t);
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__5, p_33, q_33, x_74, r_33, v_74);
  return(t);
}
ATerm GnNext_3_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm c_14 = ATgetArgument(t, 0);
      if(((ATgetType(c_14) == AT_LIST) && !(ATisEmpty(c_14))))
        {
          y_33 = ATgetFirst((ATermList) c_14);
          z_33 = (ATerm) ATgetNext((ATermList) c_14);
        }
      else
        _fail(t);
      c_34 = ATgetArgument(t, 1);
      d_34 = ATgetArgument(t, 2);
      e_34 = ATgetArgument(t, 3);
      f_34 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = v_6(z_133, a_134, b_134, y_33, z_33, c_34, d_34, e_34, f_34, t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm t)
{
  static ATerm j_34 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_106(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = o_106(t);
        t = j_34(t);
      }
    return(t);
  }
  t = j_34(t);
  return(t);
}
ATerm for_3_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t)
{
  t = q_106(t);
  t = while_not_2_0(r_106, s_106, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,w_34 = NULL;
  if(match_cons(t, sym__3))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
      w_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, s_34, s_34, t_34, w_34, (ATerm) ATempty);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm d_35 = NULL,h_35 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      if(((ATgetType(g_14) != AT_LIST) || !(ATisEmpty(g_14))))
        _fail(t);
      {
        ATerm h_14 = ATgetArgument(t, 1);
      }
      {
        ATerm i_14 = ATgetArgument(t, 2);
      }
      d_35 = ATgetArgument(t, 3);
      h_35 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_35, h_35);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm t)
{
  ATerm p_34 = NULL;
  static ATerm x_2 (ATerm t)
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(w_133, x_133, y_133, t);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm j_35 = NULL,l_35 = NULL,m_35 = NULL,p_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
          if(match_cons(t, sym__5))
            {
              j_35 = ATgetArgument(t, 0);
              p_35 = ATgetArgument(t, 1);
              r_35 = ATgetArgument(t, 2);
              s_35 = ATgetArgument(t, 3);
              t_35 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = j_35;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_35 = ATgetFirst((ATermList) t);
              m_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, m_35, p_35, r_35, s_35, (ATerm) ATinsert(CheckATermList(t_35), l_35));
        }
      }
    return(t);
  }
  t = for_3_0(t_2, u_2, x_2, t);
  if(match_cons(t, sym__2))
    {
      p_34 = ATgetArgument(t, 0);
      {
        ATerm l_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = p_34;
  return(t);
}
static ATerm y_6 (ATerm u_111 (ATerm), ATerm k_40, ATerm i_40, ATerm t)
{
  ATerm c_36 = NULL,g_36 = NULL,h_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,o_36 = NULL,p_36 = NULL;
  k_36 = t;
  t = u_111(t);
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_36, k_40, i_40);
  t = n_7(c_36, k_40, i_40, t);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_36 = NULL;
        t = term_e_9;
        v_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_36, term_e_9);
        t = m_7(c_36, v_36, t);
        {
          ATerm p_14 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_14;
            }
        }
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_36 = ATgetFirst((ATermList) t);
      h_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_36, term_e_9, (ATerm) ATinsert(CheckATermList(h_36), (ATerm) ATinsert(CheckATermList(g_36), k_40)));
  t = lookup_table_0_1(c_36, t);
  p_36 = t;
  t = term_e_9;
  l_36 = t;
  t = (ATerm) ATinsert(CheckATermList(h_36), (ATerm) ATinsert(CheckATermList(g_36), k_40));
  m_36 = t;
  t = p_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(l_36, m_36, o_36, t);
  t = k_36;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_d_13;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_d_13;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_d_13;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  x_36 = t;
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDef_3))
          {
            y_36 = ATgetArgument(t, 0);
            {
              ATerm s_14 = ATgetArgument(t, 1);
            }
            {
              ATerm t_14 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_14);
        {
          ATerm h_37 = NULL,k_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, y_36, (ATerm) ATempty);
          h_37 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_14, x_36);
          k_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_36, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_u_14, x_36));
          t = y_6(y_2, h_37, k_37, t);
          t = x_36;
        }
      }
    else
      {
        t = q_14;
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  y_36 = ATgetArgument(t, 0);
                  {
                    ATerm z_14 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm a_15 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm b_15 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(y_14);
              {
                ATerm q_37 = NULL,t_37 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, y_36, (ATerm) ATempty);
                q_37 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_15, x_36);
                t_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_36, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_c_15, x_36));
                t = y_6(a_3, q_37, t_37, t);
                t = x_36;
              }
            }
          else
            {
              t = x_14;
              {
                ATerm y_37 = NULL,b_38 = NULL;
                if(match_cons(t, sym_SDefT_4))
                  {
                    y_36 = ATgetArgument(t, 0);
                    {
                      ATerm d_15 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm e_15 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm f_15 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, y_36, (ATerm) ATempty);
                y_37 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_15, x_36);
                b_38 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_36, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_g_15, x_36));
                t = y_6(d_3, y_37, b_38, t);
                t = x_36;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = free_vars_3_0(g_3, h_3, sboundin_3_0, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
      x_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_39), w_39);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm h_38 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      h_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_38);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,n_38 = NULL;
      i_38 = t;
      if(match_cons(t, sym_Let_2))
        {
          j_38 = ATgetArgument(t, 0);
          k_38 = ATgetArgument(t, 1);
          t = i_38;
          t = h_6(j_38, k_38, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              j_38 = ATgetArgument(t, 0);
              k_38 = ATgetArgument(t, 1);
              l_38 = ATgetArgument(t, 2);
              t = k_38;
              t = map_1_0(i_3, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  j_38 = ATgetArgument(t, 0);
                  k_38 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, j_38);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_38 = ATgetArgument(t, 0);
                      k_38 = ATgetArgument(t, 1);
                      l_38 = ATgetArgument(t, 2);
                      n_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_38;
                  t = map_1_0(k_3, t);
                }
            }
        }
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            t = dynrule_sargs_1_0(l_3, t);
          }
      }
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm a_39 = NULL;
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_39 = ATgetArgument(t, 0);
          {
            ATerm p_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_15);
      t = a_39;
    }
  else
    {
      t = n_15;
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
static ATerm k_3 (ATerm t)
{
  ATerm n_39 = NULL;
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_39 = ATgetArgument(t, 0);
          {
            ATerm t_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_15);
      t = n_39;
    }
  else
    {
      t = r_15;
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
static ATerm l_3 (ATerm t)
{
  t = map_1_0(r_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm s_39 = NULL;
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_39 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_15);
      t = s_39;
    }
  else
    {
      t = u_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_39;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm g_38 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_x_15), g_38, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(Definition_0_0, e_3, f_3, t);
  return(t);
}
static ATerm m_7 (ATerm h_43, ATerm i_43, ATerm t)
{
  ATerm y_39 = NULL;
  t = lookup_table_0_1(h_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(i_43, y_39, t);
  return(t);
}
ATerm Cons_2_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,r_40 = NULL,f_6 = NULL;
  r_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_40 = ATgetFirst((ATermList) t);
      n_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_40);
  a_40 = t;
  t = b_40;
  t = b_85(t);
  o_40 = t;
  t = n_40;
  t = c_85(t);
  p_40 = t;
  t = (ATerm) ATinsert(CheckATermList(p_40), o_40);
  f_6 = t;
  t = SSLsetAnnotations(f_6, a_40);
  return(t);
}
static ATerm z_6 (ATerm j_32, ATerm k_32, ATerm t)
{
  ATerm u_40 = NULL;
  t = SSL_fputc(j_32, k_32);
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_40);
  return(t);
}
static ATerm a_7 (ATerm b_31, ATerm c_31, ATerm t)
{
  ATerm v_40 = NULL;
  t = SSL_write_term_to_stream_text(b_31, c_31);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_40);
  return(t);
}
static ATerm c_7 (ATerm l_107 (ATerm), ATerm s_224, ATerm h_31, ATerm t)
{
  ATerm c_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_224, term_y_15);
  t = g_7(t);
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_41, h_31);
  t = l_107(t);
  t = fclose_0_0(t);
  t = h_31;
  return(t);
}
static ATerm b_7 (ATerm x_30, ATerm y_30, ATerm t)
{
  ATerm f_41 = NULL;
  t = SSL_write_term_to_stream_baf(x_30, y_30);
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_41);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      if(match_cons(z_15, sym_Stream_1))
        {
          v_41 = ATgetArgument(z_15, 0);
        }
      else
        _fail(t);
      w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(v_41, w_41, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,g_42 = NULL,h_42 = NULL,k_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_16 = ATgetArgument(t, 0);
      if(match_cons(a_16, sym_Stream_1))
        {
          h_42 = ATgetArgument(a_16, 0);
        }
      else
        _fail(t);
      k_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(h_42, k_42, t);
  x_41 = t;
  t = term_d_16;
  y_41 = t;
  t = x_41;
  if(match_cons(t, sym_Stream_1))
    {
      g_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_16, x_41);
  t = z_6(y_41, g_42, t);
  return(t);
}
ATerm output_1_0 (ATerm u_129 (ATerm), ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL;
  t = u_129(t);
  h_41 = t;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_41 = NULL,j_41 = NULL;
        t = term_g_16;
        i_41 = t;
        t = term_h_16;
        j_41 = t;
        t = term_l_16;
        t = m_7(i_41, j_41, t);
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = term_o_16;
      }
  }
  g_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_41, h_41);
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_41 = NULL,l_41 = NULL;
        t = term_g_16;
        k_41 = t;
        t = term_r_16;
        l_41 = t;
        t = term_s_16;
        t = m_7(k_41, l_41, t);
        t = (ATerm) ATmakeAppl(sym__2, g_41, h_41);
        LocalPopChoice(q_16);
        if(match_cons(t, sym__2))
          {
            ATerm t_16 = ATgetArgument(t, 0);
            ATerm x_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_7(t_3, g_41, h_41, t);
      }
    else
      {
        t = p_16;
        if(match_cons(t, sym__2))
          {
            ATerm y_16 = ATgetArgument(t, 0);
            ATerm z_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_7(z_3, g_41, h_41, t);
      }
  }
  return(t);
}
static ATerm f_43 (ATerm t_42, ATerm t)
{
  t = SSL_fclose(t_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_42 = NULL,z_42 = NULL;
  z_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_42 = ATgetArgument(t, 0);
      {
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_42);
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            t = f_43(z_42, t);
          }
      }
    }
  else
    {
      t = f_43(z_42, t);
    }
  return(t);
}
static ATerm d_7 (ATerm d_31, ATerm t)
{
  t = SSL_read_term_from_stream(d_31);
  return(t);
}
static ATerm e_7 (ATerm c_67, ATerm d_67, ATerm t)
{
  t = SSL_strcat(c_67, d_67);
  return(t);
}
static ATerm f_7 (ATerm l_32, ATerm m_32, ATerm t)
{
  ATerm g_43 = NULL;
  t = SSL_fopen(l_32, m_32);
  g_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_43);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_43 = NULL;
  t = SSL_stdin_stream();
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_43 = NULL;
  t = SSL_stdout_stream();
  k_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_43 = NULL;
  t = SSL_stderr_stream();
  l_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_43);
  return(t);
}
static ATerm o_45 (ATerm r_43, ATerm t)
{
  ATerm s_43 = NULL;
  t = SSL_explode_term(r_43);
  if(match_cons(t, sym__2))
    {
      ATerm c_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_17 = ATgetArgument(t, 1);
        if(((ATgetType(d_17) == AT_LIST) && !(ATisEmpty(d_17))))
          {
            s_43 = ATgetFirst((ATermList) d_17);
            {
              ATerm e_17 = (ATerm) ATgetNext((ATermList) d_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_45 (ATerm z_43, ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,l_44 = NULL,s_9 = NULL;
  t = SSLgetAnnotations(b_44);
  g_44 = t;
  t = z_43;
  if(match_cons(t, sym_Path_1))
    {
      l_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_44, a_44);
  s_9 = t;
  t = SSLsetAnnotations(s_9, g_44);
  if(match_cons(t, sym__2))
    {
      e_44 = ATgetArgument(t, 0);
      f_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(e_44, f_44, t);
  return(t);
}
static ATerm r_45 (ATerm q_44, ATerm r_44, ATerm s_44, ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,z_44 = NULL,z_9 = NULL;
  t = SSLgetAnnotations(s_44);
  v_44 = t;
  t = SSL_is_string(q_44);
  z_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_44, r_44);
  z_9 = t;
  t = SSLsetAnnotations(z_9, v_44);
  if(match_cons(t, sym__2))
    {
      t_44 = ATgetArgument(t, 0);
      u_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(t_44, u_44, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm h_45 = NULL,k_45 = NULL,l_45 = NULL;
  h_45 = t;
  if(match_cons(t, sym__2))
    {
      k_45 = ATgetArgument(t, 0);
      l_45 = ATgetArgument(t, 1);
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_45(h_45, t);
            LocalPopChoice(g_17);
          }
        else
          {
            t = f_17;
            {
              ATerm h_17 = t;
              int i_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_45(k_45, l_45, h_45, t);
                  LocalPopChoice(i_17);
                }
              else
                {
                  t = h_17;
                  t = r_45(k_45, l_45, h_45, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_45(h_45, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,s_46 = NULL;
  s_46 = t;
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_46, term_l_17);
        t = g_7(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        {
          ATerm g_22 = NULL,h_22 = NULL;
          t = term_m_17;
          h_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_17, s_46);
          t = e_7(h_22, s_46, t);
          g_22 = t;
          t = SSL_perror(g_22);
          _fail(t);
        }
      }
  }
  x_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(y_45, t);
  w_45 = t;
  t = x_45;
  t = fclose_0_0(t);
  t = w_45;
  return(t);
}
ATerm input_1_0 (ATerm v_129 (ATerm), ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_46 = NULL,z_46 = NULL;
      t = term_g_16;
      w_46 = t;
      t = term_p_17;
      z_46 = t;
      t = term_q_17;
      t = m_7(w_46, z_46, t);
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      t = term_r_17;
    }
  t = ReadFromFile_0_0(t);
  t = v_129(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
  a_47 = t;
  t = term_q_8;
  t = whoami_0_0(t);
  b_47 = t;
  t = term_s_17;
  d_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_17), b_47), term_t_17);
  e_47 = t;
  t = SSL_printnl(d_47, e_47);
  t = term_v_17;
  c_47 = t;
  t = SSL_exit(c_47);
  t = a_47;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm g_47 = NULL;
  g_47 = t;
  if(match_string(t, "-k"))
    {
      t = g_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_47;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL;
  h_47 = t;
  t = SSL_string_to_int(h_47);
  i_47 = t;
  t = term_w_17;
  j_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_17, i_47);
  t = p_7(j_47, i_47, t);
  t = h_47;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, m_4, n_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm l_47 = NULL;
  l_47 = t;
  if(match_string(t, "-S"))
    {
      t = l_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_47;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL;
  t = term_y_17;
  m_47 = t;
  t = term_z_17;
  n_47 = t;
  t = term_a_18;
  t = p_7(m_47, n_47, t);
  t = term_b_18;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_c_18;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL;
  o_47 = t;
  t = SSL_string_to_int(o_47);
  p_47 = t;
  t = term_y_17;
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, p_47);
  t = p_7(q_47, p_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_47);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_d_18;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL;
  t = term_e_18;
  r_47 = t;
  t = term_q_8;
  s_47 = t;
  t = term_f_18;
  t = p_7(r_47, s_47, t);
  t = term_h_18;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_i_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, p_4, q_4, t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_4, t_4, u_4, t);
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            t = Option_3_0(w_4, x_4, z_4, t);
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm e_36, ATerm f_36, ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL;
  t = term_g_16;
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_16, e_36, f_36);
  t = lookup_table_0_1(t_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(e_36, f_36, u_47, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_16, e_36, f_36);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
      t = term_q_8;
      t = j_0(t);
      a_48 = t;
      t = term_o_18;
      b_48 = t;
      t = term_p_18;
      c_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, a_48);
      t = n_7(b_48, c_48, a_48, t);
      _fail(t);
    }
  else
    {
      ATerm f_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_47 = ATgetFirst((ATermList) t);
          z_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_47;
      t = d_0(t);
      t = term_q_8;
      t = g_0(t);
      f_48 = t;
      t = (ATerm) ATinsert(CheckATermList(z_47), f_48);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm m_48 = NULL;
  m_48 = t;
  if(match_string(t, "-o"))
    {
      t = m_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_48;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  n_48 = t;
  t = term_h_16;
  o_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, n_48);
  t = p_7(o_48, n_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_48);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
static ATerm n_7 (ATerm o_41, ATerm p_41, ATerm n_41, ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_41, p_41);
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_18 = ATgetArgument(t, 0);
            ATerm v_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_41, p_41);
        t = m_7(o_41, p_41, t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = (ATerm) ATempty;
      }
  }
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_41, p_41, (ATerm) ATinsert(CheckATermList(r_48), n_41));
  t = lookup_table_0_1(o_41, t);
  u_48 = t;
  t = (ATerm) ATinsert(CheckATermList(r_48), n_41);
  s_48 = t;
  t = u_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(p_41, s_48, t_48, t);
  t = q_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
      t = term_q_8;
      t = t_0(t);
      h_49 = t;
      t = term_o_18;
      i_49 = t;
      t = term_p_18;
      j_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, h_49);
      t = n_7(i_49, j_49, h_49, t);
      _fail(t);
    }
  else
    {
      ATerm n_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_49 = ATgetFirst((ATermList) t);
          e_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_49 = ATgetFirst((ATermList) t);
          g_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_49;
      t = p_0(t);
      t = f_49;
      t = q_0(t);
      n_49 = t;
      t = (ATerm) ATinsert(CheckATermList(g_49), n_49);
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm p_49 = NULL;
  p_49 = t;
  if(match_string(t, "-i"))
    {
      t = p_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_49;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL;
  q_49 = t;
  t = term_p_17;
  r_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, q_49);
  t = p_7(r_49, q_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_49);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_w_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, e_5, g_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_8;
  t = whoami_0_0(t);
  s_49 = t;
  t = term_s_17;
  u_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_18), s_49);
  v_49 = t;
  t = SSL_printnl(u_49, v_49);
  t = term_v_17;
  t_49 = t;
  t = SSL_exit(t_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  t = term_g_16;
  w_49 = t;
  t = term_z_18;
  x_49 = t;
  t = term_a_19;
  t = m_7(w_49, x_49, t);
  return(t);
}
static ATerm h_7 (ATerm w_38, ATerm x_38, ATerm t)
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_38, x_38);
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      t = SSL_addr(w_38, x_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
  z_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_49;
      t = v_120(t);
    }
  else
    {
      ATerm e_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_50 = ATgetFirst((ATermList) t);
          b_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_50;
      t = foldr_2_0(v_120, w_120, t);
      e_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_50, e_50);
      t = w_120(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_z_17;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm r_22 = NULL,v_22 = NULL;
  if(match_cons(t, sym__2))
    {
      r_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(r_22, v_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_50 = NULL,j_22 = NULL,n_22 = NULL;
  t = times_0_0(t);
  n_22 = t;
  t = SSL_explode_term(n_22);
  if(match_cons(t, sym__2))
    {
      ATerm d_19 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_22;
  t = foldr_2_0(i_5, k_5, t);
  h_50 = t;
  t = SSL_TicksToSeconds(h_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
  s_50 = t;
  if(match_cons(t, sym__2))
    {
      t_50 = ATgetArgument(t, 0);
      u_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_50;
        if((t_50 != t))
          {
            _fail(t);
          }
        t = s_50;
        LocalPopChoice(h_19);
      }
    else
      {
        t = e_19;
        t = (ATerm) ATmakeAppl(sym__2, t_50, u_50);
        {
          ATerm i_19 = t;
          int j_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_50, u_50);
              LocalPopChoice(j_19);
            }
          else
            {
              t = i_19;
              t = SSL_gtr(t_50, u_50);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_50, u_50);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm y_50 = NULL;
  y_50 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
        t = term_g_16;
        b_51 = t;
        t = term_y_17;
        c_51 = t;
        t = term_n_19;
        t = m_7(b_51, c_51, t);
        a_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_51, term_v_17);
        t = geq_0_0(t);
        t = y_50;
        t = b_109(t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = y_50;
      }
  }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL,h_51 = NULL,i_51 = NULL;
  t = run_time_0_0(t);
  e_51 = t;
  t = term_q_8;
  t = whoami_0_0(t);
  f_51 = t;
  t = term_s_17;
  h_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_19), e_51), term_o_19), f_51);
  i_51 = t;
  t = SSL_printnl(h_51, i_51);
  t = (ATerm) ATmakeAppl(sym__2, term_s_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_19), e_51), term_o_19), f_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_17;
  j_51 = t;
  t = SSL_exit(j_51);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL;
  u_51 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_51;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_51 = ATgetArgument(t, 0);
          {
            ATerm p_23 = NULL,o_10 = NULL;
            t = SSLgetAnnotations(u_51);
            p_23 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_51);
            o_10 = t;
            t = SSLsetAnnotations(o_10, p_23);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_51;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_129 (ATerm), ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_51 = NULL,n_51 = NULL;
      t = term_g_16;
      m_51 = t;
      t = term_s_19;
      n_51 = t;
      t = term_t_19;
      t = m_7(m_51, n_51, t);
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      t = fetch_1_0(n_5, t);
    }
  t = l_129(t);
  return(t);
}
static ATerm q_7 (ATerm g_46, ATerm h_46, ATerm i_46, ATerm t)
{
  ATerm w_51 = NULL;
  t = SSL_hashtable_put(i_46, g_46, h_46);
  w_51 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_51);
  return(t);
}
static ATerm r_7 (ATerm j_46, ATerm k_46, ATerm t)
{
  t = SSL_hashtable_get(k_46, j_46);
  return(t);
}
ATerm lookup_table_0_1 (ATerm a_43, ATerm t)
{
  ATerm f_52 = NULL;
  t = table_hashtable_0_0(t);
  f_52 = t;
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_24 = NULL;
        t = f_52;
        if(match_cons(t, sym_Hashtable_1))
          {
            t_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_7(a_43, t_24, t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        {
          ATerm x_25 = NULL;
          t = a_43;
          t = table_create_0_0(t);
          t = f_52;
          if(match_cons(t, sym_Hashtable_1))
            {
              x_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_7(a_43, x_25, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_46, ATerm p_46, ATerm t)
{
  ATerm i_52 = NULL;
  t = SSL_hashtable_create(o_46, p_46);
  i_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_52);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL,n_52 = NULL,o_52 = NULL;
  j_52 = t;
  t = term_w_19;
  n_52 = t;
  t = term_y_19;
  o_52 = t;
  t = j_52;
  t = new_hashtable_0_2(n_52, o_52, t);
  k_52 = t;
  t = j_52;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(j_52, k_52, l_52, t);
  t = j_52;
  return(t);
}
static ATerm j_7 (ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm p_52 = NULL;
  t = SSL_hashtable_remove(m_46, l_46);
  p_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_52);
  return(t);
}
static ATerm k_7 (ATerm q_46, ATerm t)
{
  ATerm q_52 = NULL;
  t = SSL_hashtable_destroy(q_46);
  q_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_52);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_52 = NULL;
  t = SSL_table_hashtable();
  r_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_52);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL;
  s_52 = t;
  t = table_hashtable_0_0(t);
  t_52 = t;
  t = lookup_table_0_1(s_52, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(v_52, t);
  t = t_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(s_52, u_52, t);
  t = s_52;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_52 = ATgetFirst((ATermList) t);
      y_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_53 = NULL,d_53 = NULL;
        static ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_53)), not_null(d_53));
          return(t);
        }
        t = y_52;
        t = m_0(t);
        if(((c_53 != NULL) && (c_53 != t)))
          _fail(t);
        else
          c_53 = t;
        t = x_52;
        t = l_0(t);
        if(((d_53 != NULL) && (d_53 != t)))
          _fail(t);
        else
          d_53 = t;
        t = y_52;
        t = reverse_acc_2_0(l_0, o_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_8;
      t = m_0(t);
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL,q_10 = NULL;
  l_53 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_53);
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_53);
  q_10 = t;
  t = SSLsetAnnotations(q_10, j_53);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm n_53 = NULL;
  n_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_53), term_z_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL;
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_53 = NULL,i_53 = NULL;
      t = term_g_16;
      h_53 = t;
      t = term_z_18;
      i_53 = t;
      t = term_a_19;
      t = m_7(h_53, i_53, t);
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      t = fetch_1_0(r_5, t);
    }
  t = term_e_20;
  t = echo_0_0(t);
  t = term_o_18;
  f_53 = t;
  t = term_p_18;
  g_53 = t;
  t = term_g_20;
  t = m_7(f_53, g_53, t);
  t = reverse_acc_2_0(_id, u_5, t);
  t = map_1_0(v_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  static ATerm k_54 (ATerm t)
  {
    ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL;
    h_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_54 = ATgetFirst((ATermList) t);
        j_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_20 = t;
      int k_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_26 = NULL,d_27 = NULL,y_10 = NULL;
          t = SSLgetAnnotations(h_54);
          y_26 = t;
          t = i_54;
          t = i_115(t);
          d_27 = t;
          t = (ATerm) ATinsert(CheckATermList(j_54), d_27);
          y_10 = t;
          t = SSLsetAnnotations(y_10, y_26);
          LocalPopChoice(k_20);
        }
      else
        {
          t = i_20;
          {
            ATerm x_27 = NULL,b_28 = NULL,z_10 = NULL;
            t = SSLgetAnnotations(h_54);
            x_27 = t;
            t = j_54;
            t = k_54(t);
            b_28 = t;
            t = (ATerm) ATinsert(CheckATermList(b_28), i_54);
            z_10 = t;
            t = SSLsetAnnotations(z_10, x_27);
          }
        }
    }
    return(t);
  }
  t = k_54(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
  o_54 = t;
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_20 = ATgetFirst((ATermList) t);
                ATerm r_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_54;
          }
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = (ATerm) ATinsert(ATempty, o_54);
      }
  }
  p_54 = t;
  t = term_o_16;
  q_54 = t;
  t = SSL_printnl(q_54, p_54);
  t = o_54;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL;
  t = term_g_16;
  u_54 = t;
  t = term_z_18;
  v_54 = t;
  t = term_a_19;
  t = m_7(u_54, v_54, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm w_54 = NULL,x_54 = NULL;
  t = term_s_20;
  w_54 = t;
  t = term_q_8;
  x_54 = t;
  t = term_t_20;
  t = p_7(w_54, x_54, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL;
  t = term_s_20;
  a_55 = t;
  t = term_q_8;
  b_55 = t;
  t = term_t_20;
  t = p_7(a_55, b_55, t);
  t = term_v_20;
  y_54 = t;
  t = term_q_8;
  z_54 = t;
  t = term_w_20;
  t = p_7(y_54, z_54, t);
  t = term_x_20;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, x_5, y_5, t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      t = Option_3_0(a_6, b_6, c_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_131 (ATerm), ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,l_55 = NULL,m_55 = NULL,g_11 = NULL;
  g_55 = t;
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_21;
        t = o_131(t);
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
      }
  }
  t = g_55;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_55 = ATgetFirst((ATermList) t);
      j_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_55);
  h_55 = t;
  t = term_z_18;
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_18, i_55);
  t = p_7(m_55, i_55, t);
  t = j_55;
  {
    static ATerm b_56 (ATerm t)
    {
      ATerm f_21 = t;
      int g_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_21 = t;
          int j_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_55 = NULL;
              u_55 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_55;
              LocalPopChoice(j_21);
            }
          else
            {
              t = i_21;
              t = o_131(t);
              t = Cons_2_0(_id, b_56, t);
            }
          LocalPopChoice(g_21);
        }
      else
        {
          t = f_21;
          {
            ATerm x_55 = NULL,y_55 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_55 = ATgetFirst((ATermList) t);
                y_55 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_55), (ATerm) ATmakeAppl(sym_Undefined_1, x_55));
          }
        }
      return(t);
    }
    t = b_56(t);
  }
  l_55 = t;
  t = (ATerm) ATinsert(CheckATermList(l_55), (ATerm) ATmakeAppl(sym_Program_1, i_55));
  g_11 = t;
  t = SSLsetAnnotations(g_11, h_55);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm q_56 = NULL;
  q_56 = t;
  if(match_string(t, "--help"))
    {
      t = q_56;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_56;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_56;
        }
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL;
  t = term_s_19;
  r_56 = t;
  t = term_q_8;
  s_56 = t;
  t = term_k_21;
  t = p_7(r_56, s_56, t);
  t = term_l_21;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_m_21;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_131 (ATerm), ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL;
  k_56 = t;
  t = term_o_18;
  l_56 = t;
  t = term_n_21;
  t = lookup_table_0_1(l_56, t);
  p_56 = t;
  t = term_p_18;
  m_56 = t;
  t = (ATerm) ATempty;
  n_56 = t;
  t = p_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(m_56, n_56, o_56, t);
  t = k_56;
  {
    static ATerm g_6 (ATerm t)
    {
      ATerm q_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_131(t);
          LocalPopChoice(s_21);
        }
      else
        {
          t = q_21;
          {
            ATerm t_21 = t;
            int u_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_6, m_6, r_6, t);
                LocalPopChoice(u_21);
              }
            else
              {
                t = t_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_6, t);
  }
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_57 = NULL;
        d_57 = t;
        {
          ATerm x_21 = t;
          int y_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_28 = NULL;
              t = d_57;
              {
                ATerm z_21 = t;
                int a_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_28 = NULL,a_29 = NULL;
                    t = term_g_16;
                    y_28 = t;
                    t = term_s_19;
                    a_29 = t;
                    t = term_t_19;
                    t = m_7(y_28, a_29, t);
                    LocalPopChoice(a_22);
                  }
                else
                  {
                    t = z_21;
                    t = fetch_1_0(s_6, t);
                  }
              }
              t = d_57;
              t = default_system_usage_0_0(t);
              t = term_z_17;
              x_28 = t;
              t = SSL_exit(x_28);
              LocalPopChoice(y_21);
            }
          else
            {
              t = x_21;
              {
                ATerm g_29 = NULL,l_29 = NULL,n_29 = NULL;
                t = term_g_16;
                l_29 = t;
                t = term_s_20;
                n_29 = t;
                t = term_b_22;
                t = m_7(l_29, n_29, t);
                t = d_57;
                t = default_system_about_0_0(t);
                t = term_z_17;
                g_29 = t;
                t = SSL_exit(g_29);
              }
            }
        }
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        {
          ATerm c_22 = t;
          int d_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
              static ATerm w_6 (ATerm t)
              {
                ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL,l_11 = NULL;
                j_57 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_57 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_57);
                h_57 = t;
                t = i_57;
                if(((g_56 != NULL) && (g_56 != t)))
                  _fail(t);
                else
                  g_56 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_57);
                l_11 = t;
                t = SSLsetAnnotations(l_11, h_57);
                return(t);
              }
              t = fetch_1_0(w_6, t);
              t = term_s_17;
              f_57 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_56)), term_e_22);
              g_57 = t;
              t = SSL_printnl(f_57, g_57);
              t = (ATerm) ATmakeAppl(sym__2, term_s_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_56)), term_e_22));
              t = default_system_usage_0_0(t);
              t = term_v_17;
              e_57 = t;
              t = SSL_exit(e_57);
              LocalPopChoice(d_22);
            }
          else
            {
              t = c_22;
            }
        }
      }
  }
  h_56 = t;
  t = term_o_18;
  t = table_destroy_0_0(t);
  t = h_56;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL;
  t = parse_options_1_0(n_129, t);
  o_57 = t;
  t = term_f_22;
  t = table_create_0_0(t);
  t = term_f_22;
  p_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_22, term_i_22, o_57);
  t = lookup_table_0_1(p_57, t);
  s_57 = t;
  t = term_i_22;
  q_57 = t;
  t = s_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(q_57, o_57, r_57, t);
  t = o_57;
  t = p_129(t);
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_129, t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        {
          ATerm o_22 = t;
          int p_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_129(t);
              t = report_success_0_0(t);
              LocalPopChoice(p_22);
            }
          else
            {
              t = o_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm q_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_7, o_7, s_7, t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = q_22;
      {
        ATerm t_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(w_22);
          }
        else
          {
            t = t_22;
            {
              ATerm x_22 = t;
              int y_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
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
                        t = Option_3_0(u_7, w_7, y_7, t);
                        LocalPopChoice(a_23);
                      }
                    else
                      {
                        t = z_22;
                        {
                          ATerm b_23 = t;
                          int c_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(c_23);
                            }
                          else
                            {
                              t = b_23;
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
static ATerm i_7 (ATerm t)
{
  t = input_1_0(z_7, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--only-local", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm v_57 = NULL,a_58 = NULL,b_58 = NULL;
  v_57 = t;
  t = term_d_23;
  a_58 = t;
  t = term_q_8;
  b_58 = t;
  t = term_e_23;
  t = p_7(a_58, b_58, t);
  t = v_57;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm f_58 = NULL,i_58 = NULL;
  t = term_r_16;
  f_58 = t;
  t = term_q_8;
  i_58 = t;
  t = term_g_23;
  t = p_7(f_58, i_58, t);
  t = term_h_23;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_j_23;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = output_1_0(a_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,q_11 = NULL,o_11 = NULL;
  r_58 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_58);
  k_58 = t;
  t = l_58;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_58 = ATgetFirst((ATermList) t);
      o_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_58);
  m_58 = t;
  t = o_58;
  t = Cons_2_0(d_8, e_8, t);
  p_58 = t;
  t = (ATerm) ATinsert(CheckATermList(p_58), n_58);
  o_11 = t;
  t = SSLsetAnnotations(o_11, m_58);
  q_58 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_58);
  q_11 = t;
  t = SSLsetAnnotations(q_11, k_58);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,n_11 = NULL;
  v_58 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      t_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_58);
  s_58 = t;
  t = t_58;
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_58 = NULL,x_58 = NULL;
        t = term_g_16;
        w_58 = t;
        t = term_d_23;
        x_58 = t;
        t = term_m_23;
        t = m_7(w_58, x_58, t);
        t = t_58;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = dead_def_elim_0_0(t);
      }
  }
  t = map_1_0(local_dead_def_elim_0_0, t);
  u_58 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, u_58);
  n_11 = t;
  t = SSLsetAnnotations(n_11, s_58);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_6, default_usage_0_0, _id, i_7, t);
  return(t);
}
