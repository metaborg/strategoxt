#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_SVar_1;
static Symbol sym_Path_2;
static Symbol sym_Rec_2;
static Symbol sym_CallT_3;
static Symbol sym_Let_2;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_ExtSDef_3;
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_RDefT_4;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Path_1;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
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
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
static ATerm term_q_23;
static ATerm term_n_23;
static ATerm term_m_23;
static ATerm term_l_23;
static ATerm term_k_23;
static ATerm term_i_23;
static ATerm term_h_23;
static ATerm term_p_22;
static ATerm term_o_22;
static ATerm term_n_22;
static ATerm term_i_22;
static ATerm term_f_22;
static ATerm term_u_21;
static ATerm term_t_21;
static ATerm term_s_21;
static ATerm term_q_21;
static ATerm term_n_21;
static ATerm term_i_21;
static ATerm term_b_21;
static ATerm term_a_21;
static ATerm term_z_20;
static ATerm term_y_20;
static ATerm term_x_20;
static ATerm term_w_20;
static ATerm term_v_20;
static ATerm term_s_20;
static ATerm term_r_20;
static ATerm term_m_20;
static ATerm term_j_20;
static ATerm term_h_20;
static ATerm term_t_19;
static ATerm term_s_19;
static ATerm term_r_19;
static ATerm term_q_19;
static ATerm term_k_19;
static ATerm term_d_19;
static ATerm term_c_19;
static ATerm term_b_19;
static ATerm term_a_19;
static ATerm term_z_18;
static ATerm term_y_18;
static ATerm term_x_18;
static ATerm term_v_18;
static ATerm term_u_18;
static ATerm term_t_18;
static ATerm term_s_18;
static ATerm term_r_18;
static ATerm term_j_18;
static ATerm term_h_18;
static ATerm term_g_18;
static ATerm term_e_18;
static ATerm term_d_18;
static ATerm term_y_17;
static ATerm term_t_17;
static ATerm term_s_17;
static ATerm term_r_17;
static ATerm term_q_17;
static ATerm term_p_17;
static ATerm term_m_17;
static ATerm term_l_17;
static ATerm term_s_16;
static ATerm term_r_16;
static ATerm term_o_16;
static ATerm term_l_16;
static ATerm term_k_16;
static ATerm term_h_16;
static ATerm term_d_16;
static ATerm term_y_15;
static ATerm term_x_15;
static ATerm term_g_15;
static ATerm term_c_15;
static ATerm term_w_14;
static ATerm term_d_13;
static ATerm term_h_10;
static ATerm term_r_9;
static ATerm term_q_9;
static ATerm term_e_9;
static ATerm term_p_8;
static ATerm term_n_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_9);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_k_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_r_16);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_s_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, term_e_18, term_g_18);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym__2, term_t_18, term_u_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_p_8);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_t_18);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_p_8);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__2, term_y_20, term_p_8);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_n_21, term_p_8);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__3, term_e_18, term_g_18, (ATerm) ATempty);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_n_21);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_v_20);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_h_23, term_p_8);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local        do not eliminate top-level definitions", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_p_8);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_h_23);
}
#include <srts/init-stratego-application.h>
ATerm DefDead_0_0 (ATerm t);
ATerm filter_1_0 (ATerm b_140 (ATerm), ATerm t);
static ATerm z_5 (ATerm c_44, ATerm d_44, ATerm e_44, ATerm t);
static ATerm d_6 (ATerm u_43, ATerm v_43, ATerm t);
ATerm end_scope_1_0 (ATerm q_127 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_127 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm local_dead_def_elim_0_0 (ATerm t);
ATerm map_1_0 (ATerm c_133 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm o_114 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm h_6 (ATerm k_25, ATerm j_25, ATerm t);
static ATerm j_6 (ATerm u_135 (ATerm), ATerm q_67, ATerm p_67, ATerm t);
ATerm foldr_3_0 (ATerm z_138 (ATerm), ATerm a_139 (ATerm), ATerm b_139 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm free_vars_3_0 (ATerm t_142 (ATerm), ATerm u_142 (ATerm), ATerm v_142 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm l_6 (ATerm a_44, ATerm b_44, ATerm t);
ATerm Definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm r_133 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_28 (ATerm d_28, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm n_6 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm u_67, ATerm t_67, ATerm t);
static ATerm o_6 (ATerm p_135 (ATerm), ATerm o_67, ATerm n_67, ATerm t);
ATerm genzip_4_0 (ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm t_6 (ATerm d_884, ATerm i_884, ATerm y_86, ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm k_33 (ATerm m_31, ATerm n_31, ATerm o_31, ATerm t);
static ATerm u_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm v_6 (ATerm a_154 (ATerm), ATerm b_154 (ATerm), ATerm c_154 (ATerm), ATerm u_89, ATerm r_89, ATerm y_89, ATerm v_89, ATerm s_89, ATerm t_89, ATerm t);
ATerm GnNext_3_0 (ATerm a_154 (ATerm), ATerm b_154 (ATerm), ATerm c_154 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm h_122 (ATerm), ATerm i_122 (ATerm), ATerm t);
ATerm for_3_0 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm x_153 (ATerm), ATerm y_153 (ATerm), ATerm z_153 (ATerm), ATerm t);
static ATerm y_6 (ATerm t_127 (ATerm), ATerm l_42, ATerm j_42, ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm RegisterDefinition_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
static ATerm m_7 (ATerm i_45, ATerm j_45, ATerm t);
ATerm Cons_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm t);
static ATerm z_6 (ATerm w_33, ATerm x_33, ATerm t);
static ATerm a_7 (ATerm c_32, ATerm d_32, ATerm t);
static ATerm c_7 (ATerm f_123 (ATerm), ATerm u_243, ATerm i_32, ATerm t);
static ATerm b_7 (ATerm y_31, ATerm z_31, ATerm t);
static ATerm u_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm output_1_0 (ATerm i_149 (ATerm), ATerm t);
static ATerm p_42 (ATerm w_41, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_7 (ATerm e_32, ATerm t);
static ATerm e_7 (ATerm a_77, ATerm b_77, ATerm t);
static ATerm f_7 (ATerm y_33, ATerm z_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_45 (ATerm e_43, ATerm t);
static ATerm s_45 (ATerm n_43, ATerm r_43, ATerm s_43, ATerm t);
static ATerm v_45 (ATerm q_44, ATerm t_44, ATerm u_44, ATerm t);
static ATerm g_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm j_149 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm o_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm default_system_usage_2_0 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_7 (ATerm y_37, ATerm z_37, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_7 (ATerm p_43, ATerm q_43, ATerm o_43, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_7 (ATerm x_40, ATerm y_40, ATerm t);
ATerm foldr_2_0 (ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_124 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_7 (ATerm e_48, ATerm f_48, ATerm g_48, ATerm t);
static ATerm r_7 (ATerm h_48, ATerm i_48, ATerm t);
ATerm lookup_table_0_1 (ATerm b_45, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_48, ATerm n_48, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_7 (ATerm j_48, ATerm k_48, ATerm t);
static ATerm k_7 (ATerm o_48, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_133 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm c_151 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm parse_options_3_0 (ATerm z_150 (ATerm), ATerm a_151 (ATerm), ATerm b_151 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm c_149 (ATerm), ATerm d_149 (ATerm), ATerm e_149 (ATerm), ATerm f_149 (ATerm), ATerm g_149 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
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
        ATerm i_8 = ATgetArgument(t, 1);
      }
      {
        ATerm j_8 = ATgetArgument(t, 2);
      }
      {
        ATerm k_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_1 = NULL,n_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        d_1 = t;
        t = term_n_8;
        n_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        t = l_6(n_1, d_1, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = h_1;
        _fail(t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        {
          ATerm n_2 = NULL,o_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          n_2 = t;
          t = term_n_8;
          o_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_8, (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          t = l_6(o_2, n_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm o_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_8) != ATmakeSymbol("k_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_p_8;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm b_140 (ATerm), ATerm t)
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
            ATerm c_3 = NULL,f_3 = NULL,g_3 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(a_2);
            c_3 = t;
            t = b_2;
            t = b_140(t);
            f_3 = t;
            t = c_2;
            t = filter_1_0(b_140, t);
            g_3 = t;
            t = (ATerm) ATinsert(CheckATermList(g_3), f_3);
            a_0 = t;
            t = SSLsetAnnotations(a_0, c_3);
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
            t = c_2;
            t = filter_1_0(b_140, t);
          }
      }
    }
  return(t);
}
static ATerm z_5 (ATerm c_44, ATerm d_44, ATerm e_44, ATerm t)
{
  ATerm g_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,p_2 = NULL;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_44, d_44);
  t = m_7(c_44, d_44, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_8 = ATgetFirst((ATermList) t);
      g_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_44, d_44, (ATerm) ATinsert(CheckATermList(g_2), e_44));
  t = lookup_table_0_1(c_44, t);
  p_2 = t;
  t = (ATerm) ATinsert(CheckATermList(g_2), e_44);
  j_2 = t;
  t = p_2;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(d_44, j_2, k_2, t);
  t = i_2;
  return(t);
}
static ATerm d_6 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm q_2 = NULL,s_2 = NULL;
  s_2 = t;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_43, v_43);
        t = m_7(u_43, v_43, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_8 = ATgetFirst((ATermList) t);
            q_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_8);
        {
          ATerm t_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, u_43, v_43, q_2);
          t = lookup_table_0_1(u_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_2 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_7(v_43, q_2, t_2, t);
          t = (ATerm) ATmakeAppl(sym__3, u_43, v_43, q_2);
        }
      }
    else
      {
        t = v_8;
        {
          ATerm w_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, u_43, v_43);
          t = lookup_table_0_1(u_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              w_2 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_7(v_43, w_2, t);
          t = (ATerm) ATmakeAppl(sym__2, u_43, v_43);
        }
      }
  }
  t = s_2;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_127 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,i_3 = NULL,l_3 = NULL,m_3 = NULL,r_3 = NULL,v_3 = NULL;
  l_3 = t;
  t = q_127(t);
  i_3 = t;
  {
    ATerm b_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 = NULL;
        t = term_e_9;
        x_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_3, term_e_9);
        t = m_7(i_3, x_3, t);
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
        LocalPopChoice(d_9);
      }
    else
      {
        t = b_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_2 = ATgetFirst((ATermList) t);
      y_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, i_3, term_e_9, y_2);
  t = lookup_table_0_1(i_3, t);
  v_3 = t;
  t = term_e_9;
  m_3 = t;
  t = v_3;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(m_3, y_2, r_3, t);
  t = z_2;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm y_3 = NULL;
      y_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, y_3);
      t = d_6(i_3, y_3, t);
      return(t);
    }
    t = map_1_0(c_0, t);
  }
  t = l_3;
  return(t);
}
ATerm restore_always_2_0 (ATerm b_119 (ATerm), ATerm c_119 (ATerm), ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_119(t);
      t = c_119(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      t = c_119(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_127 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL;
  c_4 = t;
  t = p_127(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, term_e_9);
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_9 = ATgetArgument(t, 0);
            ATerm l_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_9;
        o_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_4, term_e_9);
        t = m_7(b_4, o_4, t);
        LocalPopChoice(j_9);
      }
    else
      {
        t = i_9;
        t = (ATerm) ATempty;
      }
  }
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_4, term_e_9, (ATerm) ATinsert(CheckATermList(e_4), (ATerm) ATempty));
  t = lookup_table_0_1(b_4, t);
  k_4 = t;
  t = term_e_9;
  g_4 = t;
  t = (ATerm) ATinsert(CheckATermList(e_4), (ATerm) ATempty);
  h_4 = t;
  t = k_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(g_4, h_4, i_4, t);
  t = c_4;
  return(t);
}
ATerm scope_2_0 (ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t)
{
  static ATerm p_0 (ATerm t);
  static ATerm p_0 (ATerm t)
  {
    t = end_scope_1_0(r_127, t);
    return(t);
  }
  t = begin_scope_1_0(r_127, t);
  t = restore_always_2_0(s_127, p_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_n_8;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm a_4 = NULL,d_4 = NULL,f_4 = NULL,j_4 = NULL;
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
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, a_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  f_4 = t;
  t = term_r_9;
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, a_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_r_9);
  t = y_6(v_0, f_4, j_4, t);
  t = d_4;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_n_8;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm s_9 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_9;
    }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,s_6 = NULL,u_7 = NULL,w_7 = NULL,y_7 = NULL;
    y_7 = t;
    if(match_cons(t, sym_Let_2))
      {
        s_6 = ATgetArgument(t, 0);
        w_7 = ATgetArgument(t, 1);
        {
          ATerm t_9 = t;
          int u_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_3 = NULL,w_3 = NULL,i_0 = NULL;
              t = SSLgetAnnotations(y_7);
              s_3 = t;
              t = s_6;
              t = map_1_0(u_0, t);
              w_3 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, w_3, w_7);
              i_0 = t;
              t = SSLsetAnnotations(i_0, s_3);
              LocalPopChoice(u_9);
            }
          else
            {
              t = t_9;
              t = y_7;
            }
        }
      }
    else
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_CallT_3))
              {
                s_6 = ATgetArgument(t, 0);
                {
                  ATerm c_10 = ATgetArgument(t, 1);
                }
                {
                  ATerm d_10 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_10);
            t = s_6;
            if(match_cons(t, sym_SVar_1))
              {
                u_7 = ATgetArgument(t, 0);
                {
                  ATerm e_10 = t;
                  int g_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_8 = NULL,g_8 = NULL,q_8 = NULL;
                      t = term_n_8;
                      c_8 = t;
                      t = (ATerm) ATmakeAppl(sym_SDefT_4, u_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
                      g_8 = t;
                      t = term_h_10;
                      q_8 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_n_8, (ATerm)ATmakeAppl(sym_SDefT_4, u_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_h_10);
                      t = z_5(c_8, g_8, q_8, t);
                      t = y_7;
                      LocalPopChoice(g_10);
                    }
                  else
                    {
                      t = e_10;
                      t = y_7;
                    }
                }
              }
            else
              {
                t = y_7;
              }
          }
        else
          {
            t = a_10;
            t = y_7;
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
              ATerm v_4 = NULL,y_4 = NULL,n_0 = NULL;
              t = SSLgetAnnotations(u_10);
              v_4 = t;
              t = s_10;
              t = filter_1_0(w_0, t);
              y_4 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, y_4, t_10);
              n_0 = t;
              t = SSLsetAnnotations(n_0, v_4);
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
  t = scope_2_0(q_0, s_0, t);
  return(t);
}
ATerm map_1_0 (ATerm c_133 (ATerm), ATerm t)
{
  static ATerm w_11 (ATerm t);
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
        ATerm i_5 = NULL,s_5 = NULL,t_5 = NULL,r_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_11 = ATgetFirst((ATermList) t);
            v_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_11);
        i_5 = t;
        t = u_11;
        t = c_133(t);
        s_5 = t;
        t = v_11;
        t = w_11(t);
        t_5 = t;
        t = (ATerm) ATinsert(CheckATermList(t_5), s_5);
        r_0 = t;
        t = SSLsetAnnotations(r_0, i_5);
      }
    return(t);
  }
  t = w_11(t);
  return(t);
}
ATerm sboundin_3_0 (ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm t)
{
  ATerm e_20 = NULL,i_20 = NULL,k_20 = NULL,o_20 = NULL,q_20 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
      {
        ATerm c_6 = NULL,m_6 = NULL,p_6 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(k_20);
        c_6 = t;
        t = o_20;
        t = k_114(t);
        m_6 = t;
        t = q_20;
        t = k_114(t);
        p_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, m_6, p_6);
        y_0 = t;
        t = SSLsetAnnotations(y_0, c_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_20 = ATgetArgument(t, 0);
          q_20 = ATgetArgument(t, 1);
          i_20 = ATgetArgument(t, 2);
          {
            ATerm s_7 = NULL,e_8 = NULL,f_8 = NULL,h_8 = NULL,a_1 = NULL;
            t = SSLgetAnnotations(k_20);
            s_7 = t;
            t = o_20;
            t = m_114(t);
            e_8 = t;
            t = q_20;
            t = m_114(t);
            f_8 = t;
            t = i_20;
            t = k_114(t);
            h_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, e_8, f_8, h_8);
            a_1 = t;
            t = SSLsetAnnotations(a_1, s_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              o_20 = ATgetArgument(t, 0);
              q_20 = ATgetArgument(t, 1);
              i_20 = ATgetArgument(t, 2);
              e_20 = ATgetArgument(t, 3);
              {
                ATerm t_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,c_9 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(k_20);
                t_8 = t;
                t = o_20;
                t = m_114(t);
                y_8 = t;
                t = q_20;
                t = m_114(t);
                z_8 = t;
                t = i_20;
                t = m_114(t);
                a_9 = t;
                t = e_20;
                t = k_114(t);
                c_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, y_8, z_8, a_9, c_9);
                b_1 = t;
                t = SSLsetAnnotations(b_1, t_8);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  o_20 = ATgetArgument(t, 0);
                  q_20 = ATgetArgument(t, 1);
                  i_20 = ATgetArgument(t, 2);
                  e_20 = ATgetArgument(t, 3);
                  {
                    ATerm p_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,z_9 = NULL,e_1 = NULL;
                    t = SSLgetAnnotations(k_20);
                    p_9 = t;
                    t = o_20;
                    t = m_114(t);
                    v_9 = t;
                    t = q_20;
                    t = m_114(t);
                    w_9 = t;
                    t = i_20;
                    t = m_114(t);
                    x_9 = t;
                    t = e_20;
                    t = k_114(t);
                    z_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, v_9, w_9, x_9, z_9);
                    e_1 = t;
                    t = SSLsetAnnotations(e_1, p_9);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      o_20 = ATgetArgument(t, 0);
                      q_20 = ATgetArgument(t, 1);
                      i_20 = ATgetArgument(t, 2);
                      {
                        ATerm l_10 = NULL,d_11 = NULL,h_11 = NULL,i_11 = NULL,f_1 = NULL;
                        t = SSLgetAnnotations(k_20);
                        l_10 = t;
                        t = o_20;
                        t = m_114(t);
                        d_11 = t;
                        t = q_20;
                        t = m_114(t);
                        h_11 = t;
                        t = i_20;
                        t = m_114(t);
                        i_11 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, d_11, h_11, i_11);
                        f_1 = t;
                        t = SSLsetAnnotations(f_1, l_10);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          o_20 = ATgetArgument(t, 0);
                          q_20 = ATgetArgument(t, 1);
                          {
                            ATerm c_12 = NULL,f_12 = NULL,g_12 = NULL,g_1 = NULL;
                            t = SSLgetAnnotations(k_20);
                            c_12 = t;
                            t = o_20;
                            t = m_114(t);
                            f_12 = t;
                            t = q_20;
                            t = k_114(t);
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
                              o_20 = ATgetArgument(t, 0);
                              q_20 = ATgetArgument(t, 1);
                              {
                                ATerm o_12 = NULL,r_12 = NULL,u_12 = NULL,m_1 = NULL;
                                t = SSLgetAnnotations(k_20);
                                o_12 = t;
                                t = o_20;
                                t = m_114(t);
                                r_12 = t;
                                t = q_20;
                                t = k_114(t);
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
                                  o_20 = ATgetArgument(t, 0);
                                  q_20 = ATgetArgument(t, 1);
                                  {
                                    ATerm u_13 = NULL,a_14 = NULL,c_14 = NULL,o_1 = NULL;
                                    t = SSLgetAnnotations(k_20);
                                    u_13 = t;
                                    t = o_20;
                                    t = m_114(t);
                                    a_14 = t;
                                    t = q_20;
                                    t = k_114(t);
                                    c_14 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, a_14, c_14);
                                    o_1 = t;
                                    t = SSLsetAnnotations(o_1, u_13);
                                  }
                                }
                              else
                                {
                                  ATerm o_14 = NULL,u_14 = NULL,v_14 = NULL,p_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      o_20 = ATgetArgument(t, 0);
                                      q_20 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(k_20);
                                  o_14 = t;
                                  t = o_20;
                                  t = m_114(t);
                                  u_14 = t;
                                  t = q_20;
                                  t = k_114(t);
                                  v_14 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, u_14, v_14);
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
ATerm dynrule_sargs_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,r_21 = NULL;
  ATerm k_10 = t;
  int m_10 = stack_ptr;
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
      LocalPopChoice(m_10);
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
  ATerm s_22 = NULL;
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_22 = ATgetArgument(t, 0);
          {
            ATerm m_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_11);
      t = s_22;
    }
  else
    {
      t = j_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_22;
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm z_22 = NULL;
  ATerm p_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_22 = ATgetArgument(t, 0);
          {
            ATerm s_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_11);
      t = z_22;
    }
  else
    {
      t = p_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_22;
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
  ATerm e_23 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_23 = ATgetArgument(t, 0);
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
      t = e_23;
    }
  else
    {
      t = h_12;
      if(match_cons(t, sym_SDefT_4))
        {
          e_23 = ATgetArgument(t, 0);
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
      t = e_23;
    }
  return(t);
}
static ATerm h_6 (ATerm k_25, ATerm j_25, ATerm t)
{
  t = k_25;
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm j_6 (ATerm u_135 (ATerm), ATerm q_67, ATerm p_67, ATerm t)
{
  static ATerm p_24 (ATerm t);
  static ATerm p_24 (ATerm t)
  {
    ATerm i_24 = NULL,j_24 = NULL,l_24 = NULL;
    i_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_67;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_24 = ATgetFirst((ATermList) t);
            l_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_24;
              {
                static ATerm j_1 (ATerm t);
                static ATerm j_1 (ATerm t)
                {
                  t = p_67;
                  return(t);
                }
                t = n_6(u_135, j_1, j_24, l_24, t);
              }
              t = p_24(t);
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              {
                ATerm l_15 = NULL,p_15 = NULL,f_2 = NULL;
                t = SSLgetAnnotations(i_24);
                l_15 = t;
                t = l_24;
                t = p_24(t);
                p_15 = t;
                t = (ATerm) ATinsert(CheckATermList(p_15), j_24);
                f_2 = t;
                t = SSLsetAnnotations(f_2, l_15);
              }
            }
        }
      }
    return(t);
  }
  t = q_67;
  t = p_24(t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_138 (ATerm), ATerm a_139 (ATerm), ATerm b_139 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  s_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_24;
      t = z_138(t);
    }
  else
    {
      ATerm x_24 = NULL,y_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_24 = ATgetFirst((ATermList) t);
          u_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_24;
      t = b_139(t);
      x_24 = t;
      t = u_24;
      t = foldr_3_0(z_138, a_139, b_139, t);
      y_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_24, y_24);
      t = a_139(t);
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
  ATerm f_16 = NULL,i_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      i_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(s_1, f_16, i_16, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm j_16 = NULL;
  if(match_cons(t, sym__2))
    {
      j_16 = ATgetArgument(t, 0);
      if((j_16 != ATgetArgument(t, 1)))
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
  ATerm t_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(v_1, t_16, u_16, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm v_16 = NULL;
  if(match_cons(t, sym__2))
    {
      v_16 = ATgetArgument(t, 0);
      if((v_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm t_142 (ATerm), ATerm u_142 (ATerm), ATerm v_142 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm q_25 (ATerm t);
  static ATerm q_25 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_142(t);
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
              ATerm c_25 = NULL,d_25 = NULL,a_16 = NULL,b_16 = NULL;
              c_25 = t;
              t = u_142(t);
              d_25 = t;
              t = c_25;
              {
                static ATerm k_1 (ATerm t);
                static ATerm k_1 (ATerm t)
                {
                  ATerm f_25 = NULL;
                  t = q_25(t);
                  f_25 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_25, d_25);
                  t = diff_0_0(t);
                  return(t);
                }
                t = v_142(k_1, q_25, l_1, t);
              }
              b_16 = t;
              t = SSL_explode_term(b_16);
              if(match_cons(t, sym__2))
                {
                  ATerm x_12 = ATgetArgument(t, 0);
                  a_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_16;
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
                t = foldr_3_0(t_1, u_1, q_25, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_25(t);
  return(t);
}
static ATerm l_6 (ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm r_25 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_44, b_44);
  t = m_7(a_44, b_44, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_25 = ATgetFirst((ATermList) t);
      {
        ATerm z_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_25;
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
        ATerm f_18 = NULL,i_18 = NULL,l_18 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty);
        i_18 = t;
        t = term_d_13;
        l_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty));
        t = l_6(l_18, i_18, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_13) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            f_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_18;
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
              ATerm w_18 = NULL,f_19 = NULL,g_19 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty);
              f_19 = t;
              t = term_d_13;
              g_19 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty));
              t = l_6(g_19, f_19, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_13 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_13) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  w_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_18;
              LocalPopChoice(g_13);
            }
          else
            {
              t = f_13;
              {
                ATerm l_19 = NULL,w_19 = NULL,a_20 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty);
                w_19 = t;
                t = term_d_13;
                a_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty));
                t = l_6(a_20, w_19, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm i_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_13) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    l_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_19;
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm r_133 (ATerm), ATerm t)
{
  static ATerm z_27 (ATerm t);
  static ATerm z_27 (ATerm t)
  {
    ATerm q_27 = NULL,r_27 = NULL,y_27 = NULL;
    y_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_27 = ATgetFirst((ATermList) t);
        r_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_20 = NULL,l_20 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(y_27);
          g_20 = t;
          t = r_27;
          t = z_27(t);
          l_20 = t;
          t = (ATerm) ATinsert(CheckATermList(l_20), q_27);
          g_5 = t;
          t = SSLsetAnnotations(g_5, g_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_27;
        t = r_133(t);
      }
    return(t);
  }
  t = z_27(t);
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
      static ATerm w_1 (ATerm t);
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
            static ATerm x_1 (ATerm t);
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
static ATerm n_6 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm u_67, ATerm t_67, ATerm t)
{
  t = y_135(t);
  {
    static ATerm y_1 (ATerm t);
    static ATerm y_1 (ATerm t)
    {
      ATerm m_28 = NULL;
      m_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_67, m_28);
      t = x_135(t);
      return(t);
    }
    t = fetch_1_0(y_1, t);
  }
  t = t_67;
  return(t);
}
static ATerm o_6 (ATerm p_135 (ATerm), ATerm o_67, ATerm n_67, ATerm t)
{
  static ATerm t_29 (ATerm t);
  static ATerm t_29 (ATerm t)
  {
    ATerm i_29 = NULL,k_29 = NULL,l_29 = NULL;
    i_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_29 = ATgetFirst((ATermList) t);
            l_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_29;
              {
                static ATerm z_1 (ATerm t);
                static ATerm z_1 (ATerm t)
                {
                  t = n_67;
                  return(t);
                }
                t = n_6(p_135, z_1, k_29, l_29, t);
              }
              t = t_29(t);
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              {
                ATerm e_21 = NULL,h_21 = NULL,j_5 = NULL;
                t = SSLgetAnnotations(i_29);
                e_21 = t;
                t = l_29;
                t = t_29(t);
                h_21 = t;
                t = (ATerm) ATinsert(CheckATermList(h_21), k_29);
                j_5 = t;
                t = SSLsetAnnotations(j_5, e_21);
              }
            }
        }
      }
    return(t);
  }
  t = o_67;
  t = t_29(t);
  return(t);
}
ATerm genzip_4_0 (ATerm h_120 (ATerm), ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t)
{
  static ATerm f_30 (ATerm t);
  static ATerm f_30 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_120(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          ATerm v_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,d_30 = NULL,e_30 = NULL,l_5 = NULL;
          t = i_120(t);
          e_30 = t;
          if(match_cons(t, sym__2))
            {
              y_29 = ATgetArgument(t, 0);
              z_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_30);
          v_29 = t;
          t = y_29;
          t = k_120(t);
          a_30 = t;
          t = z_29;
          t = f_30(t);
          d_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_30, d_30);
          l_5 = t;
          t = SSLsetAnnotations(l_5, v_29);
          t = j_120(t);
        }
      }
    return(t);
  }
  t = f_30(t);
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
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_13 = ATgetArgument(t, 0);
      if(((ATgetType(s_13) == AT_LIST) && !(ATisEmpty(s_13))))
        {
          q_30 = ATgetFirst((ATermList) s_13);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_30, s_30), (ATerm) ATmakeAppl(sym__2, r_30, t_30));
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
static ATerm t_6 (ATerm d_884, ATerm i_884, ATerm y_86, ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
  t = SSL_explode_term(i_884);
  if(match_cons(t, sym__2))
    {
      i_30 = ATgetArgument(t, 0);
      k_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_884);
  if(match_cons(t, sym__2))
    {
      if((i_30 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_30, k_30);
  t = genzip_4_0(d_2, e_2, h_2, _id, t);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_30, y_86);
  t = conc_0_0(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_31);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,p_5 = NULL;
  l_31 = t;
  if(match_cons(t, sym__2))
    {
      j_31 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_31);
  i_31 = t;
  t = k_31;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_31, k_31);
  p_5 = t;
  t = SSLsetAnnotations(p_5, i_31);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
  o_32 = t;
  if(match_cons(t, sym__2))
    {
      p_32 = ATgetArgument(t, 0);
      q_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_32 = ATgetFirst((ATermList) t);
      s_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_33(p_32, q_32, o_32, t);
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_32), r_32), s_32);
          }
      }
    }
  else
    {
      t = k_33(p_32, q_32, o_32, t);
    }
  return(t);
}
static ATerm k_33 (ATerm m_31, ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm p_31 = NULL,s_31 = NULL,q_5 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,a_32 = NULL;
  t = SSLgetAnnotations(o_31);
  p_31 = t;
  t = n_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_31 = ATgetFirst((ATermList) t);
      a_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_31;
  if(match_cons(t, sym__2))
    {
      w_31 = ATgetArgument(t, 0);
      x_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_31;
        if((w_31 != t))
          {
            _fail(t);
          }
        t = a_32;
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = n_31;
        t = t_6(w_31, x_31, a_32, t);
      }
  }
  s_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_31, s_31);
  q_5 = t;
  t = SSLsetAnnotations(q_5, p_31);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm h_33 = NULL;
  if(match_cons(t, sym__2))
    {
      h_33 = ATgetArgument(t, 0);
      if((h_33 != ATgetArgument(t, 1)))
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
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(l_2, m_2, r_2, t);
      LocalPopChoice(b_14);
    }
  else
    {
      t = z_13;
      {
        ATerm y_32 = NULL,b_33 = NULL,d_33 = NULL;
        y_32 = t;
        if(match_cons(t, sym__2))
          {
            b_33 = ATgetArgument(t, 0);
            d_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_32;
        t = o_6(u_2, b_33, d_33, t);
      }
    }
  return(t);
}
static ATerm v_6 (ATerm a_154 (ATerm), ATerm b_154 (ATerm), ATerm c_154 (ATerm), ATerm u_89, ATerm r_89, ATerm y_89, ATerm v_89, ATerm s_89, ATerm t_89, ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_89, v_89);
  t = a_154(t);
  l_33 = t;
  t = b_154(t);
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_33, y_89);
  t = diff_0_0(t);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_33, r_89);
  t = conc_0_0(t);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_33, y_89);
  t = conc_0_0(t);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_89, l_33, s_89);
  t = c_154(t);
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym__5, o_33, p_33, v_89, q_33, t_89);
  return(t);
}
ATerm GnNext_3_0 (ATerm a_154 (ATerm), ATerm b_154 (ATerm), ATerm c_154 (ATerm), ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,c_34 = NULL,d_34 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm d_14 = ATgetArgument(t, 0);
      if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
        {
          s_33 = ATgetFirst((ATermList) d_14);
          t_33 = (ATerm) ATgetNext((ATermList) d_14);
        }
      else
        _fail(t);
      u_33 = ATgetArgument(t, 1);
      v_33 = ATgetArgument(t, 2);
      c_34 = ATgetArgument(t, 3);
      d_34 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = v_6(a_154, b_154, c_154, s_33, t_33, u_33, v_33, c_34, d_34, t);
  return(t);
}
ATerm while_not_2_0 (ATerm h_122 (ATerm), ATerm i_122 (ATerm), ATerm t)
{
  static ATerm e_34 (ATerm t);
  static ATerm e_34 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_122(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = i_122(t);
        t = e_34(t);
      }
    return(t);
  }
  t = e_34(t);
  return(t);
}
ATerm for_3_0 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm m_122 (ATerm), ATerm t)
{
  t = k_122(t);
  t = while_not_2_0(l_122, m_122, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,m_34 = NULL;
  if(match_cons(t, sym__3))
    {
      i_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
      m_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, i_34, i_34, j_34, m_34, (ATerm) ATempty);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm r_34 = NULL,u_34 = NULL;
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
      r_34 = ATgetArgument(t, 3);
      u_34 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_34, u_34);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm x_153 (ATerm), ATerm y_153 (ATerm), ATerm z_153 (ATerm), ATerm t)
{
  ATerm h_34 = NULL;
  static ATerm a_3 (ATerm t);
  static ATerm a_3 (ATerm t)
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(x_153, y_153, z_153, t);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,g_35 = NULL,h_35 = NULL;
          if(match_cons(t, sym__5))
            {
              w_34 = ATgetArgument(t, 0);
              z_34 = ATgetArgument(t, 1);
              a_35 = ATgetArgument(t, 2);
              g_35 = ATgetArgument(t, 3);
              h_35 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = w_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_34 = ATgetFirst((ATermList) t);
              y_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, y_34, z_34, a_35, g_35, (ATerm) ATinsert(CheckATermList(h_35), x_34));
        }
      }
    return(t);
  }
  t = for_3_0(v_2, x_2, a_3, t);
  if(match_cons(t, sym__2))
    {
      h_34 = ATgetArgument(t, 0);
      {
        ATerm l_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_34;
  return(t);
}
static ATerm y_6 (ATerm t_127 (ATerm), ATerm l_42, ATerm j_42, ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,y_35 = NULL,b_36 = NULL,c_36 = NULL,f_36 = NULL,h_36 = NULL,k_36 = NULL;
  b_36 = t;
  t = t_127(t);
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_35, l_42, j_42);
  t = n_7(t_35, l_42, j_42, t);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_36 = NULL;
        t = term_e_9;
        m_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_35, term_e_9);
        t = m_7(t_35, m_36, t);
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
      u_35 = ATgetFirst((ATermList) t);
      y_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_35, term_e_9, (ATerm) ATinsert(CheckATermList(y_35), (ATerm) ATinsert(CheckATermList(u_35), l_42)));
  t = lookup_table_0_1(t_35, t);
  k_36 = t;
  t = term_e_9;
  c_36 = t;
  t = (ATerm) ATinsert(CheckATermList(y_35), (ATerm) ATinsert(CheckATermList(u_35), l_42));
  f_36 = t;
  t = k_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(c_36, f_36, h_36, t);
  t = b_36;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_d_13;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_d_13;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_d_13;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL;
  r_36 = t;
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDef_3))
          {
            s_36 = ATgetArgument(t, 0);
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
          ATerm d_37 = NULL,e_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, s_36, (ATerm) ATempty);
          d_37 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_14, r_36);
          e_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_36, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_w_14, r_36));
          t = y_6(b_3, d_37, e_37, t);
          t = r_36;
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
                  s_36 = ATgetArgument(t, 0);
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
                ATerm k_37 = NULL,m_37 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, s_36, (ATerm) ATempty);
                k_37 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_15, r_36);
                m_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_36, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_c_15, r_36));
                t = y_6(d_3, k_37, m_37, t);
                t = r_36;
              }
            }
          else
            {
              t = x_14;
              {
                ATerm v_37 = NULL,w_37 = NULL;
                if(match_cons(t, sym_SDefT_4))
                  {
                    s_36 = ATgetArgument(t, 0);
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
                t = (ATerm) ATmakeAppl(sym__2, s_36, (ATerm) ATempty);
                v_37 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_15, r_36);
                w_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_36, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_g_15, r_36));
                t = y_6(e_3, v_37, w_37, t);
                t = r_36;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = free_vars_3_0(k_3, n_3, sboundin_3_0, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm v_39 = NULL,c_40 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      v_39 = ATgetArgument(t, 1);
      c_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_40), v_39);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm g_38 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      g_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_38);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_38 = NULL,i_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
      h_38 = t;
      if(match_cons(t, sym_Let_2))
        {
          i_38 = ATgetArgument(t, 0);
          l_38 = ATgetArgument(t, 1);
          t = h_38;
          t = h_6(i_38, l_38, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              i_38 = ATgetArgument(t, 0);
              l_38 = ATgetArgument(t, 1);
              m_38 = ATgetArgument(t, 2);
              t = l_38;
              t = map_1_0(o_3, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  i_38 = ATgetArgument(t, 0);
                  l_38 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, i_38);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_38 = ATgetArgument(t, 0);
                      l_38 = ATgetArgument(t, 1);
                      m_38 = ATgetArgument(t, 2);
                      n_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_38;
                  t = map_1_0(p_3, t);
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
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(m_15);
          }
        else
          {
            t = k_15;
            t = dynrule_sargs_1_0(q_3, t);
          }
      }
    }
  return(t);
}
static ATerm o_3 (ATerm t)
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
            ATerm q_15 = ATgetArgument(t, 1);
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
static ATerm p_3 (ATerm t)
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
static ATerm q_3 (ATerm t)
{
  t = map_1_0(t_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
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
  ATerm f_38 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  f_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_x_15), f_38, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(Definition_0_0, h_3, j_3, t);
  return(t);
}
static ATerm m_7 (ATerm i_45, ATerm j_45, ATerm t)
{
  ATerm f_40 = NULL;
  t = lookup_table_0_1(i_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(j_45, f_40, t);
  return(t);
}
ATerm Cons_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,p_40 = NULL,f_6 = NULL;
  p_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_40 = ATgetFirst((ATermList) t);
      j_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_40);
  h_40 = t;
  t = i_40;
  t = u_90(t);
  k_40 = t;
  t = j_40;
  t = v_90(t);
  l_40 = t;
  t = (ATerm) ATinsert(CheckATermList(l_40), k_40);
  f_6 = t;
  t = SSLsetAnnotations(f_6, h_40);
  return(t);
}
static ATerm z_6 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm q_40 = NULL;
  t = SSL_fputc(w_33, x_33);
  q_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_40);
  return(t);
}
static ATerm a_7 (ATerm c_32, ATerm d_32, ATerm t)
{
  ATerm r_40 = NULL;
  t = SSL_write_term_to_stream_text(c_32, d_32);
  r_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_40);
  return(t);
}
static ATerm c_7 (ATerm f_123 (ATerm), ATerm u_243, ATerm i_32, ATerm t)
{
  ATerm s_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_243, term_y_15);
  t = g_7(t);
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_40, i_32);
  t = f_123(t);
  t = fclose_0_0(t);
  t = i_32;
  return(t);
}
static ATerm b_7 (ATerm y_31, ATerm z_31, ATerm t)
{
  ATerm t_40 = NULL;
  t = SSL_write_term_to_stream_baf(y_31, z_31);
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_40);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      if(match_cons(z_15, sym_Stream_1))
        {
          f_41 = ATgetArgument(z_15, 0);
        }
      else
        _fail(t);
      g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(f_41, g_41, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm h_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(match_cons(c_16, sym_Stream_1))
        {
          l_41 = ATgetArgument(c_16, 0);
        }
      else
        _fail(t);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(l_41, m_41, t);
  h_41 = t;
  t = term_d_16;
  j_41 = t;
  t = h_41;
  if(match_cons(t, sym_Stream_1))
    {
      k_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_16, h_41);
  t = z_6(j_41, k_41, t);
  return(t);
}
ATerm output_1_0 (ATerm i_149 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL;
  t = i_149(t);
  w_40 = t;
  {
    ATerm e_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_41 = NULL,c_41 = NULL;
        t = term_h_16;
        b_41 = t;
        t = term_k_16;
        c_41 = t;
        t = term_l_16;
        t = m_7(b_41, c_41, t);
        LocalPopChoice(g_16);
      }
    else
      {
        t = e_16;
        t = term_o_16;
      }
  }
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_41 = NULL,e_41 = NULL;
        t = term_h_16;
        d_41 = t;
        t = term_r_16;
        e_41 = t;
        t = term_s_16;
        t = m_7(d_41, e_41, t);
        t = (ATerm) ATmakeAppl(sym__2, v_40, w_40);
        LocalPopChoice(q_16);
        if(match_cons(t, sym__2))
          {
            ATerm w_16 = ATgetArgument(t, 0);
            ATerm x_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_7(u_3, v_40, w_40, t);
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
        t = c_7(z_3, v_40, w_40, t);
      }
  }
  return(t);
}
static ATerm p_42 (ATerm w_41, ATerm t)
{
  t = SSL_fclose(w_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL;
  a_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_41 = ATgetArgument(t, 0);
      {
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_41);
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            t = p_42(a_42, t);
          }
      }
    }
  else
    {
      t = p_42(a_42, t);
    }
  return(t);
}
static ATerm d_7 (ATerm e_32, ATerm t)
{
  t = SSL_read_term_from_stream(e_32);
  return(t);
}
static ATerm e_7 (ATerm a_77, ATerm b_77, ATerm t)
{
  t = SSL_strcat(a_77, b_77);
  return(t);
}
static ATerm f_7 (ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm q_42 = NULL;
  t = SSL_fopen(y_33, z_33);
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_42 = NULL;
  t = SSL_stdin_stream();
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_42 = NULL;
  t = SSL_stdout_stream();
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_42 = NULL;
  t = SSL_stderr_stream();
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_42);
  return(t);
}
static ATerm r_45 (ATerm e_43, ATerm t)
{
  ATerm h_43 = NULL;
  t = SSL_explode_term(e_43);
  if(match_cons(t, sym__2))
    {
      ATerm c_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_17 = ATgetArgument(t, 1);
        if(((ATgetType(d_17) == AT_LIST) && !(ATisEmpty(d_17))))
          {
            h_43 = ATgetFirst((ATermList) d_17);
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
  t = h_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_45 (ATerm n_43, ATerm r_43, ATerm s_43, ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,i_44 = NULL,y_9 = NULL;
  t = SSLgetAnnotations(s_43);
  y_43 = t;
  t = n_43;
  if(match_cons(t, sym_Path_1))
    {
      i_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_44, r_43);
  y_9 = t;
  t = SSLsetAnnotations(y_9, y_43);
  if(match_cons(t, sym__2))
    {
      w_43 = ATgetArgument(t, 0);
      x_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(w_43, x_43, t);
  return(t);
}
static ATerm v_45 (ATerm q_44, ATerm t_44, ATerm u_44, ATerm t)
{
  ATerm x_44 = NULL,z_44 = NULL,a_45 = NULL,h_45 = NULL,f_10 = NULL;
  t = SSLgetAnnotations(u_44);
  a_45 = t;
  t = SSL_is_string(q_44);
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, t_44);
  f_10 = t;
  t = SSLsetAnnotations(f_10, a_45);
  if(match_cons(t, sym__2))
    {
      x_44 = ATgetArgument(t, 0);
      z_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(x_44, z_44, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm l_45 = NULL,p_45 = NULL,q_45 = NULL;
  l_45 = t;
  if(match_cons(t, sym__2))
    {
      p_45 = ATgetArgument(t, 0);
      q_45 = ATgetArgument(t, 1);
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_45(l_45, t);
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
                  t = s_45(p_45, q_45, l_45, t);
                  LocalPopChoice(i_17);
                }
              else
                {
                  t = h_17;
                  t = v_45(p_45, q_45, l_45, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_45(l_45, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_45 = NULL,a_46 = NULL,c_46 = NULL,k_46 = NULL;
  k_46 = t;
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_46, term_l_17);
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
          t = (ATerm) ATmakeAppl(sym__2, term_m_17, k_46);
          t = e_7(h_22, k_46, t);
          g_22 = t;
          t = SSL_perror(g_22);
          _fail(t);
        }
      }
  }
  a_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(c_46, t);
  x_45 = t;
  t = a_46;
  t = fclose_0_0(t);
  t = x_45;
  return(t);
}
ATerm input_1_0 (ATerm j_149 (ATerm), ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_46 = NULL,o_46 = NULL;
      t = term_h_16;
      n_46 = t;
      t = term_p_17;
      o_46 = t;
      t = term_q_17;
      t = m_7(n_46, o_46, t);
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      t = term_r_17;
    }
  t = ReadFromFile_0_0(t);
  t = j_149(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL;
  t = term_h_16;
  p_46 = t;
  t = term_s_17;
  q_46 = t;
  t = term_t_17;
  t = m_7(p_46, q_46, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
  s_46 = t;
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_17 = ATgetFirst((ATermList) t);
                ATerm x_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_46;
          }
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = (ATerm) ATinsert(ATempty, s_46);
      }
  }
  t_46 = t;
  t = term_o_16;
  u_46 = t;
  t = SSL_printnl(u_46, t_46);
  t = s_46;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm o_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_46 = ATgetFirst((ATermList) t);
      a_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_47 = NULL,f_47 = NULL;
        static ATerm l_4 (ATerm t);
        static ATerm l_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_47)), not_null(f_47));
          return(t);
        }
        t = a_47;
        t = t_0(t);
        if(((e_47 != NULL) && (e_47 != t)))
          _fail(t);
        else
          e_47 = t;
        t = z_46;
        t = o_0(t);
        if(((f_47 != NULL) && (f_47 != t)))
          _fail(t);
        else
          f_47 = t;
        t = a_47;
        t = reverse_acc_2_0(o_0, l_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_8;
      t = t_0(t);
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,o_10 = NULL;
  q_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_47);
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_47);
  o_10 = t;
  t = SSLsetAnnotations(o_10, o_47);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm u_47 = NULL;
  u_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_47), term_y_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm h_151 (ATerm), ATerm i_151 (ATerm), ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL;
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_47 = NULL,n_47 = NULL;
      t = term_h_16;
      m_47 = t;
      t = term_s_17;
      n_47 = t;
      t = term_t_17;
      t = m_7(m_47, n_47, t);
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      t = fetch_1_0(m_4, t);
    }
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_151(t);
        t = echo_0_0(t);
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
      }
  }
  t = term_d_18;
  t = echo_0_0(t);
  t = term_e_18;
  k_47 = t;
  t = term_g_18;
  l_47 = t;
  t = term_h_18;
  t = m_7(k_47, l_47, t);
  t = reverse_acc_2_0(_id, n_4, t);
  t = map_1_0(p_4, t);
  t = term_j_18;
  t = echo_0_0(t);
  {
    ATerm k_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_151(t);
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_47 = NULL;
              v_47 = t;
              t = SSL_is_string(v_47);
              t = v_47;
              LocalPopChoice(o_18);
              {
                ATerm w_47 = NULL;
                w_47 = t;
                t = (ATerm) ATinsert(ATempty, w_47);
              }
            }
          else
            {
              t = n_18;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = k_18;
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,q_10 = NULL;
  u_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_48);
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_48);
  q_10 = t;
  t = SSLsetAnnotations(q_10, s_48);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_48 = NULL,r_48 = NULL;
        t = term_h_16;
        q_48 = t;
        t = term_s_17;
        r_48 = t;
        t = term_t_17;
        t = m_7(q_48, r_48, t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        t = fetch_1_0(q_4, t);
      }
  }
  t = d_48;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm w_48 = NULL;
  w_48 = t;
  if(match_string(t, "-k"))
    {
      t = w_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_48;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
  x_48 = t;
  t = SSL_string_to_int(x_48);
  y_48 = t;
  t = term_r_18;
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, y_48);
  t = p_7(z_48, y_48, t);
  t = x_48;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm d_49 = NULL;
  d_49 = t;
  if(match_string(t, "-S"))
    {
      t = d_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_49;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL;
  t = term_t_18;
  e_49 = t;
  t = term_u_18;
  f_49 = t;
  t = term_v_18;
  t = p_7(e_49, f_49, t);
  t = term_x_18;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_y_18;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
  g_49 = t;
  t = SSL_string_to_int(g_49);
  h_49 = t;
  t = term_t_18;
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_18, h_49);
  t = p_7(i_49, h_49, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_49);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_z_18;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL;
  t = term_a_19;
  j_49 = t;
  t = term_p_8;
  k_49 = t;
  t = term_b_19;
  t = p_7(j_49, k_49, t);
  t = term_c_19;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_4, w_4, x_4, t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = e_19;
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_4, a_5, b_5, t);
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            t = Option_3_0(c_5, d_5, e_5, t);
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL;
  t = term_h_16;
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_16, y_37, z_37);
  t = lookup_table_0_1(l_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(y_37, z_37, m_49, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_16, y_37, z_37);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
      t = term_p_8;
      t = g_0(t);
      s_49 = t;
      t = term_e_18;
      t_49 = t;
      t = term_g_18;
      u_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_18, term_g_18, s_49);
      t = n_7(t_49, u_49, s_49, t);
      _fail(t);
    }
  else
    {
      ATerm x_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_49 = ATgetFirst((ATermList) t);
          r_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_49;
      t = d_0(t);
      t = term_p_8;
      t = f_0(t);
      x_49 = t;
      t = (ATerm) ATinsert(CheckATermList(r_49), x_49);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm z_49 = NULL;
  z_49 = t;
  if(match_string(t, "-o"))
    {
      t = z_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_49;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL;
  a_50 = t;
  t = term_k_16;
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_16, a_50);
  t = p_7(b_50, a_50, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_50);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_k_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, h_5, k_5, t);
  return(t);
}
static ATerm n_7 (ATerm p_43, ATerm q_43, ATerm o_43, ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_43, q_43);
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_19 = ATgetArgument(t, 0);
            ATerm p_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_43, q_43);
        t = m_7(p_43, q_43, t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = (ATerm) ATempty;
      }
  }
  e_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_43, q_43, (ATerm) ATinsert(CheckATermList(e_50), o_43));
  t = lookup_table_0_1(p_43, t);
  h_50 = t;
  t = (ATerm) ATinsert(CheckATermList(e_50), o_43);
  f_50 = t;
  t = h_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(q_43, f_50, g_50, t);
  t = d_50;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL;
      t = term_p_8;
      t = m_0(t);
      s_50 = t;
      t = term_e_18;
      t_50 = t;
      t = term_g_18;
      u_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_18, term_g_18, s_50);
      t = n_7(t_50, u_50, s_50, t);
      _fail(t);
    }
  else
    {
      ATerm y_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_50 = ATgetFirst((ATermList) t);
          p_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_50 = ATgetFirst((ATermList) t);
          r_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_50;
      t = j_0(t);
      t = q_50;
      t = l_0(t);
      y_50 = t;
      t = (ATerm) ATinsert(CheckATermList(r_50), y_50);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm a_51 = NULL;
  a_51 = t;
  if(match_string(t, "-i"))
    {
      t = a_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_51;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  b_51 = t;
  t = term_p_17;
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, b_51);
  t = p_7(c_51, b_51, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_51);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_q_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_8;
  t = whoami_0_0(t);
  d_51 = t;
  t = term_r_19;
  f_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_19), d_51);
  g_51 = t;
  t = SSL_printnl(f_51, g_51);
  t = term_t_19;
  e_51 = t;
  t = SSL_exit(e_51);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL;
  t = term_h_16;
  h_51 = t;
  t = term_s_17;
  i_51 = t;
  t = term_t_17;
  t = m_7(h_51, i_51, t);
  return(t);
}
static ATerm h_7 (ATerm x_40, ATerm y_40, ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_40, y_40);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      t = SSL_addr(x_40, y_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL;
  k_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_51;
      t = x_138(t);
    }
  else
    {
      ATerm p_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_51 = ATgetFirst((ATermList) t);
          m_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_51;
      t = foldr_2_0(x_138, y_138, t);
      p_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_51, p_51);
      t = y_138(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm c_23 = NULL,j_23 = NULL;
  if(match_cons(t, sym__2))
    {
      c_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(c_23, j_23, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_51 = NULL,j_22 = NULL,q_22 = NULL;
  t = times_0_0(t);
  q_22 = t;
  t = SSL_explode_term(q_22);
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_22;
  t = foldr_2_0(r_5, u_5, t);
  s_51 = t;
  t = SSL_TicksToSeconds(s_51);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  d_52 = t;
  if(match_cons(t, sym__2))
    {
      e_52 = ATgetArgument(t, 0);
      f_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_52;
        if((e_52 != t))
          {
            _fail(t);
          }
        t = d_52;
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = (ATerm) ATmakeAppl(sym__2, e_52, f_52);
        {
          ATerm b_20 = t;
          int c_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_52, f_52);
              LocalPopChoice(c_20);
            }
          else
            {
              t = b_20;
              t = SSL_gtr(e_52, f_52);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_52, f_52);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_124 (ATerm), ATerm t)
{
  ATerm j_52 = NULL;
  j_52 = t;
  {
    ATerm d_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
        t = term_h_16;
        m_52 = t;
        t = term_t_18;
        n_52 = t;
        t = term_h_20;
        t = m_7(m_52, n_52, t);
        l_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_52, term_t_19);
        t = geq_0_0(t);
        t = j_52;
        t = x_124(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = d_20;
        t = j_52;
      }
  }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL,s_52 = NULL,t_52 = NULL;
  t = run_time_0_0(t);
  p_52 = t;
  t = term_p_8;
  t = whoami_0_0(t);
  q_52 = t;
  t = term_r_19;
  s_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_20), p_52), term_j_20), q_52);
  t_52 = t;
  t = SSL_printnl(s_52, t_52);
  t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_20), p_52), term_j_20), q_52));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_18;
  u_52 = t;
  t = SSL_exit(u_52);
  return(t);
}
static ATerm q_7 (ATerm e_48, ATerm f_48, ATerm g_48, ATerm t)
{
  ATerm v_52 = NULL;
  t = SSL_hashtable_put(g_48, e_48, f_48);
  v_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_52);
  return(t);
}
static ATerm r_7 (ATerm h_48, ATerm i_48, ATerm t)
{
  t = SSL_hashtable_get(i_48, h_48);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_45, ATerm t)
{
  ATerm e_53 = NULL;
  t = table_hashtable_0_0(t);
  e_53 = t;
  {
    ATerm n_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_24 = NULL;
        t = e_53;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_7(b_45, a_24, t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = n_20;
        {
          ATerm k_24 = NULL;
          t = b_45;
          t = table_create_0_0(t);
          t = e_53;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_7(b_45, k_24, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_48, ATerm n_48, ATerm t)
{
  ATerm h_53 = NULL;
  t = SSL_hashtable_create(m_48, n_48);
  h_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_53);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,m_53 = NULL,n_53 = NULL;
  i_53 = t;
  t = term_r_20;
  m_53 = t;
  t = term_s_20;
  n_53 = t;
  t = i_53;
  t = new_hashtable_0_2(m_53, n_53, t);
  j_53 = t;
  t = i_53;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(i_53, j_53, k_53, t);
  t = i_53;
  return(t);
}
static ATerm j_7 (ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm o_53 = NULL;
  t = SSL_hashtable_remove(k_48, j_48);
  o_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_53);
  return(t);
}
static ATerm k_7 (ATerm o_48, ATerm t)
{
  ATerm p_53 = NULL;
  t = SSL_hashtable_destroy(o_48);
  p_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_53);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm q_53 = NULL;
  t = SSL_table_hashtable();
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_53);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL;
  r_53 = t;
  t = table_hashtable_0_0(t);
  s_53 = t;
  t = lookup_table_0_1(r_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(u_53, t);
  t = s_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(r_53, t_53, t);
  t = r_53;
  return(t);
}
ATerm fetch_1_0 (ATerm k_133 (ATerm), ATerm t)
{
  static ATerm r_54 (ATerm t);
  static ATerm r_54 (ATerm t)
  {
    ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
    o_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_54 = ATgetFirst((ATermList) t);
        q_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_20 = t;
      int u_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_25 = NULL,g_26 = NULL,y_10 = NULL;
          t = SSLgetAnnotations(o_54);
          v_25 = t;
          t = p_54;
          t = k_133(t);
          g_26 = t;
          t = (ATerm) ATinsert(CheckATermList(q_54), g_26);
          y_10 = t;
          t = SSLsetAnnotations(y_10, v_25);
          LocalPopChoice(u_20);
        }
      else
        {
          t = t_20;
          {
            ATerm f_27 = NULL,i_27 = NULL,z_10 = NULL;
            t = SSLgetAnnotations(o_54);
            f_27 = t;
            t = q_54;
            t = r_54(t);
            i_27 = t;
            t = (ATerm) ATinsert(CheckATermList(i_27), p_54);
            z_10 = t;
            t = SSLsetAnnotations(z_10, f_27);
          }
        }
    }
    return(t);
  }
  t = r_54(t);
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
  ATerm u_54 = NULL,v_54 = NULL;
  t = term_v_20;
  u_54 = t;
  t = term_p_8;
  v_54 = t;
  t = term_w_20;
  t = p_7(u_54, v_54, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_x_20;
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
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL;
  t = term_v_20;
  y_54 = t;
  t = term_p_8;
  z_54 = t;
  t = term_w_20;
  t = p_7(y_54, z_54, t);
  t = term_y_20;
  w_54 = t;
  t = term_p_8;
  x_54 = t;
  t = term_z_20;
  t = p_7(w_54, x_54, t);
  t = term_a_21;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, x_5, y_5, t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      t = Option_3_0(a_6, b_6, e_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_151 (ATerm), ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,j_55 = NULL,k_55 = NULL,g_11 = NULL;
  e_55 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_21;
        t = c_151(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
      }
  }
  t = e_55;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_55 = ATgetFirst((ATermList) t);
      h_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_55);
  f_55 = t;
  t = term_s_17;
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_17, g_55);
  t = p_7(k_55, g_55, t);
  t = h_55;
  {
    static ATerm u_55 (ATerm t);
    static ATerm u_55 (ATerm t)
    {
      ATerm j_21 = t;
      int k_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_21 = t;
          int m_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_55 = NULL;
              n_55 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_55;
              LocalPopChoice(m_21);
            }
          else
            {
              t = l_21;
              t = c_151(t);
              t = Cons_2_0(_id, u_55, t);
            }
          LocalPopChoice(k_21);
        }
      else
        {
          t = j_21;
          {
            ATerm q_55 = NULL,r_55 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_55 = ATgetFirst((ATermList) t);
                r_55 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_55), (ATerm) ATmakeAppl(sym_Undefined_1, q_55));
          }
        }
      return(t);
    }
    t = u_55(t);
  }
  j_55 = t;
  t = (ATerm) ATinsert(CheckATermList(j_55), (ATerm) ATmakeAppl(sym_Program_1, g_55));
  g_11 = t;
  t = SSLsetAnnotations(g_11, f_55);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm h_56 = NULL;
  h_56 = t;
  if(match_string(t, "--help"))
    {
      t = h_56;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_56;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_56;
        }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL;
  t = term_n_21;
  i_56 = t;
  t = term_p_8;
  j_56 = t;
  t = term_q_21;
  t = p_7(i_56, j_56, t);
  t = term_s_21;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_t_21;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm z_150 (ATerm), ATerm a_151 (ATerm), ATerm b_151 (ATerm), ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL;
  b_56 = t;
  t = term_e_18;
  c_56 = t;
  t = term_u_21;
  t = lookup_table_0_1(c_56, t);
  g_56 = t;
  t = term_g_18;
  d_56 = t;
  t = (ATerm) ATempty;
  e_56 = t;
  t = g_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(d_56, e_56, f_56, t);
  t = b_56;
  {
    static ATerm g_6 (ATerm t);
    static ATerm g_6 (ATerm t)
    {
      ATerm v_21 = t;
      int w_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_150(t);
          LocalPopChoice(w_21);
        }
      else
        {
          t = v_21;
          {
            ATerm x_21 = t;
            int y_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_6, k_6, q_6, t);
                LocalPopChoice(y_21);
              }
            else
              {
                t = x_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_6, t);
  }
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_56 = NULL;
        u_56 = t;
        {
          ATerm b_22 = t;
          int c_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_28 = NULL;
              t = u_56;
              {
                ATerm d_22 = t;
                int e_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_28 = NULL,n_28 = NULL;
                    t = term_h_16;
                    c_28 = t;
                    t = term_n_21;
                    n_28 = t;
                    t = term_f_22;
                    t = m_7(c_28, n_28, t);
                    LocalPopChoice(e_22);
                  }
                else
                  {
                    t = d_22;
                    t = fetch_1_0(r_6, t);
                  }
              }
              t = u_56;
              t = a_151(t);
              t = term_u_18;
              b_28 = t;
              t = SSL_exit(b_28);
              LocalPopChoice(c_22);
            }
          else
            {
              t = b_22;
              {
                ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
                t = term_h_16;
                x_28 = t;
                t = term_v_20;
                y_28 = t;
                t = term_i_22;
                t = m_7(x_28, y_28, t);
                t = u_56;
                t = b_151(t);
                t = term_u_18;
                w_28 = t;
                t = SSL_exit(w_28);
              }
            }
        }
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL;
              static ATerm u_6 (ATerm t);
              static ATerm u_6 (ATerm t)
              {
                ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,l_11 = NULL;
                a_57 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_56 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_57);
                y_56 = t;
                t = z_56;
                if(((z_55 != NULL) && (z_55 != t)))
                  _fail(t);
                else
                  z_55 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_56);
                l_11 = t;
                t = SSLsetAnnotations(l_11, y_56);
                return(t);
              }
              t = fetch_1_0(u_6, t);
              t = term_r_19;
              w_56 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_55)), term_n_22);
              x_56 = t;
              t = SSL_printnl(w_56, x_56);
              t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_55)), term_n_22));
              t = a_151(t);
              t = term_t_19;
              v_56 = t;
              t = SSL_exit(v_56);
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
            }
        }
      }
  }
  a_56 = t;
  t = term_e_18;
  t = table_destroy_0_0(t);
  t = a_56;
  return(t);
}
ATerm option_wrap_5_0 (ATerm c_149 (ATerm), ATerm d_149 (ATerm), ATerm e_149 (ATerm), ATerm f_149 (ATerm), ATerm g_149 (ATerm), ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL;
  t = parse_options_3_0(c_149, d_149, e_149, t);
  f_57 = t;
  t = term_o_22;
  t = table_create_0_0(t);
  t = term_o_22;
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_22, term_p_22, f_57);
  t = lookup_table_0_1(g_57, t);
  j_57 = t;
  t = term_p_22;
  h_57 = t;
  t = j_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(h_57, f_57, i_57, t);
  t = f_57;
  t = f_149(t);
  {
    ATerm r_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_149(t);
        t = report_success_0_0(t);
        LocalPopChoice(t_22);
      }
    else
      {
        t = r_22;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_7, l_7, o_7, t);
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            {
              ATerm y_22 = t;
              int a_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(a_23);
                }
              else
                {
                  t = y_22;
                  {
                    ATerm b_23 = t;
                    int d_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(t_7, v_7, x_7, t);
                        LocalPopChoice(d_23);
                      }
                    else
                      {
                        t = b_23;
                        {
                          ATerm f_23 = t;
                          int g_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(g_23);
                            }
                          else
                            {
                              t = f_23;
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
static ATerm x_6 (ATerm t)
{
  t = input_1_0(z_7, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--only-local", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
  m_57 = t;
  t = term_h_23;
  n_57 = t;
  t = term_p_8;
  o_57 = t;
  t = term_i_23;
  t = p_7(n_57, o_57, t);
  t = m_57;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_k_23;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL;
  t = term_r_16;
  p_57 = t;
  t = term_p_8;
  q_57 = t;
  t = term_l_23;
  t = p_7(p_57, q_57, t);
  t = term_m_23;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_n_23;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = output_1_0(a_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,q_11 = NULL,o_11 = NULL;
  z_57 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_57);
  s_57 = t;
  t = t_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_57 = ATgetFirst((ATermList) t);
      w_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_57);
  u_57 = t;
  t = w_57;
  t = Cons_2_0(b_8, d_8, t);
  x_57 = t;
  t = (ATerm) ATinsert(CheckATermList(x_57), v_57);
  o_11 = t;
  t = SSLsetAnnotations(o_11, u_57);
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_57);
  q_11 = t;
  t = SSLsetAnnotations(q_11, s_57);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,n_11 = NULL;
  d_58 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_58);
  a_58 = t;
  t = b_58;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_58 = NULL,f_58 = NULL;
        t = term_h_16;
        e_58 = t;
        t = term_h_23;
        f_58 = t;
        t = term_q_23;
        t = m_7(e_58, f_58, t);
        t = b_58;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = dead_def_elim_0_0(t);
      }
  }
  t = map_1_0(local_dead_def_elim_0_0, t);
  c_58 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_58);
  n_11 = t;
  t = SSLsetAnnotations(n_11, a_58);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(w_6, default_system_usage_0_0, default_system_about_0_0, _id, x_6, t);
  return(t);
}
