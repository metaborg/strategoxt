#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_SVar_1;
Symbol sym_Path_2;
Symbol sym_Rec_2;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_RDefT_4;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
ATerm term_n_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_f_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_i_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_y_17;
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
ATerm term_n_16;
ATerm term_k_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_g_15;
ATerm term_c_15;
ATerm term_w_14;
ATerm term_d_13;
ATerm term_h_10;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_e_9;
ATerm term_p_8;
ATerm term_n_8;
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
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_k_16);
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
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_s_17);
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
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_r_18, term_s_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_p_8);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_r_18);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_p_8);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_p_8);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_p_8);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__3, term_e_18, term_g_18, (ATerm) ATempty);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_l_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_t_20);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_f_23, term_p_8);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local        do not eliminate top-level definitions", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_p_8);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_f_23);
}
#include <srts/init-stratego-application.h>
ATerm DefDead_0_0 (ATerm t);
ATerm filter_1_0 (ATerm b_132 (ATerm), ATerm t);
static ATerm y_5 (ATerm j_43, ATerm k_43, ATerm l_43, ATerm t);
static ATerm c_6 (ATerm b_43, ATerm c_43, ATerm t);
ATerm end_scope_1_0 (ATerm h_120 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_120 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm local_dead_def_elim_0_0 (ATerm t);
ATerm map_1_0 (ATerm a_125 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm g_107 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm g_6 (ATerm x_24, ATerm w_24, ATerm t);
static ATerm i_6 (ATerm u_127 (ATerm), ATerm p_62, ATerm o_62, ATerm t);
ATerm foldr_3_0 (ATerm z_130 (ATerm), ATerm a_131 (ATerm), ATerm b_131 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm free_vars_3_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm k_6 (ATerm h_43, ATerm i_43, ATerm t);
ATerm Definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm r_125 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_28 (ATerm d_28, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_6 (ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm t_62, ATerm s_62, ATerm t);
static ATerm n_6 (ATerm p_127 (ATerm), ATerm n_62, ATerm m_62, ATerm t);
ATerm genzip_4_0 (ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm s_6 (ATerm w_820, ATerm b_821, ATerm d_80, ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm p_33 (ATerm o_31, ATerm s_31, ATerm t_31, ATerm t);
static ATerm u_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm u_6 (ATerm c_145 (ATerm), ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm z_82, ATerm w_82, ATerm d_83, ATerm a_83, ATerm x_82, ATerm y_82, ATerm t);
ATerm GnNext_3_0 (ATerm c_145 (ATerm), ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t);
ATerm for_3_0 (ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm z_144 (ATerm), ATerm a_145 (ATerm), ATerm b_145 (ATerm), ATerm t);
static ATerm x_6 (ATerm k_120 (ATerm), ATerm s_41, ATerm q_41, ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm RegisterDefinition_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
static ATerm l_7 (ATerm p_44, ATerm q_44, ATerm t);
ATerm Cons_2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t);
static ATerm y_6 (ATerm j_33, ATerm k_33, ATerm t);
static ATerm z_6 (ATerm p_31, ATerm q_31, ATerm t);
static ATerm b_7 (ATerm x_115 (ATerm), ATerm j_235, ATerm v_31, ATerm t);
static ATerm a_7 (ATerm l_31, ATerm m_31, ATerm t);
static ATerm t_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm output_1_0 (ATerm o_140 (ATerm), ATerm t);
static ATerm p_42 (ATerm h_42, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_7 (ATerm r_31, ATerm t);
static ATerm d_7 (ATerm w_71, ATerm x_71, ATerm t);
static ATerm e_7 (ATerm l_33, ATerm m_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_45 (ATerm r_43, ATerm t);
static ATerm t_45 (ATerm y_43, ATerm z_43, ATerm a_44, ATerm t);
static ATerm u_45 (ATerm r_44, ATerm s_44, ATerm v_44, ATerm t);
static ATerm f_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm p_140 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm default_system_usage_2_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm t);
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
static ATerm o_7 (ATerm f_37, ATerm g_37, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_7 (ATerm w_42, ATerm x_42, ATerm v_42, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_7 (ATerm e_40, ATerm f_40, ATerm t);
ATerm foldr_2_0 (ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm o_117 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_7 (ATerm h_47, ATerm i_47, ATerm j_47, ATerm t);
static ATerm q_7 (ATerm k_47, ATerm l_47, ATerm t);
ATerm lookup_table_0_1 (ATerm i_44, ATerm t);
ATerm new_hashtable_0_2 (ATerm p_47, ATerm q_47, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm i_7 (ATerm m_47, ATerm n_47, ATerm t);
static ATerm j_7 (ATerm r_47, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_125 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm i_142 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm parse_options_3_0 (ATerm f_142 (ATerm), ATerm g_142 (ATerm), ATerm h_142 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm i_140 (ATerm), ATerm j_140 (ATerm), ATerm k_140 (ATerm), ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm c_8 (ATerm t);
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
        t = k_6(n_1, d_1, t);
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
          t = k_6(o_2, n_2, t);
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
ATerm filter_1_0 (ATerm b_132 (ATerm), ATerm t)
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
            t = b_132(t);
            f_3 = t;
            t = c_2;
            t = filter_1_0(b_132, t);
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
            t = filter_1_0(b_132, t);
          }
      }
    }
  return(t);
}
static ATerm y_5 (ATerm j_43, ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm g_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,p_2 = NULL;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_43, k_43);
  t = l_7(j_43, k_43, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_8 = ATgetFirst((ATermList) t);
      g_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_43, k_43, (ATerm) ATinsert(CheckATermList(g_2), l_43));
  t = lookup_table_0_1(j_43, t);
  p_2 = t;
  t = (ATerm) ATinsert(CheckATermList(g_2), l_43);
  j_2 = t;
  t = p_2;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(k_43, j_2, k_2, t);
  t = i_2;
  return(t);
}
static ATerm c_6 (ATerm b_43, ATerm c_43, ATerm t)
{
  ATerm q_2 = NULL,s_2 = NULL;
  s_2 = t;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_43, c_43);
        t = l_7(b_43, c_43, t);
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
          t = (ATerm) ATmakeAppl(sym__3, b_43, c_43, q_2);
          t = lookup_table_0_1(b_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_2 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_7(c_43, q_2, t_2, t);
          t = (ATerm) ATmakeAppl(sym__3, b_43, c_43, q_2);
        }
      }
    else
      {
        t = v_8;
        {
          ATerm w_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_43, c_43);
          t = lookup_table_0_1(b_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              w_2 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_7(c_43, w_2, t);
          t = (ATerm) ATmakeAppl(sym__2, b_43, c_43);
        }
      }
  }
  t = s_2;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_120 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,h_3 = NULL,k_3 = NULL,l_3 = NULL,u_3 = NULL,w_3 = NULL;
  k_3 = t;
  t = h_120(t);
  h_3 = t;
  {
    ATerm b_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 = NULL;
        t = term_e_9;
        x_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_3, term_e_9);
        t = l_7(h_3, x_3, t);
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
  t = (ATerm) ATmakeAppl(sym__3, h_3, term_e_9, y_2);
  t = lookup_table_0_1(h_3, t);
  w_3 = t;
  t = term_e_9;
  l_3 = t;
  t = w_3;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(l_3, y_2, u_3, t);
  t = z_2;
  {
    static ATerm e_0 (ATerm t);
    static ATerm e_0 (ATerm t)
    {
      ATerm z_3 = NULL;
      z_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_3, z_3);
      t = c_6(h_3, z_3, t);
      return(t);
    }
    t = map_1_0(e_0, t);
  }
  t = k_3;
  return(t);
}
ATerm restore_always_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_111(t);
      t = u_111(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      t = u_111(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_120 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,j_4 = NULL;
  d_4 = t;
  t = g_120(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, term_e_9);
  {
    ATerm i_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_9 = ATgetArgument(t, 0);
            ATerm l_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_9;
        n_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_4, term_e_9);
        t = l_7(b_4, n_4, t);
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
  j_4 = t;
  t = term_e_9;
  f_4 = t;
  t = (ATerm) ATinsert(CheckATermList(e_4), (ATerm) ATempty);
  g_4 = t;
  t = j_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(f_4, g_4, h_4, t);
  t = d_4;
  return(t);
}
ATerm scope_2_0 (ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm t)
{
  static ATerm q_0 (ATerm t);
  static ATerm q_0 (ATerm t)
  {
    t = end_scope_1_0(i_120, t);
    return(t);
  }
  t = begin_scope_1_0(i_120, t);
  t = restore_always_2_0(j_120, q_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_n_8;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm a_4 = NULL,c_4 = NULL,i_4 = NULL,o_4 = NULL;
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
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, a_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  i_4 = t;
  t = term_r_9;
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, a_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_r_9);
  t = x_6(v_0, i_4, o_4, t);
  t = c_4;
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
  static ATerm t_0 (ATerm t);
  static ATerm t_0 (ATerm t)
  {
    ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,t_6 = NULL,u_7 = NULL,v_7 = NULL,x_7 = NULL;
    x_7 = t;
    if(match_cons(t, sym_Let_2))
      {
        t_6 = ATgetArgument(t, 0);
        v_7 = ATgetArgument(t, 1);
        {
          ATerm t_9 = t;
          int u_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_3 = NULL,v_3 = NULL,o_0 = NULL;
              t = SSLgetAnnotations(x_7);
              r_3 = t;
              t = t_6;
              t = map_1_0(u_0, t);
              v_3 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, v_3, v_7);
              o_0 = t;
              t = SSLsetAnnotations(o_0, r_3);
              LocalPopChoice(u_9);
            }
          else
            {
              t = t_9;
              t = x_7;
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
                t_6 = ATgetArgument(t, 0);
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
            t = t_6;
            if(match_cons(t, sym_SVar_1))
              {
                u_7 = ATgetArgument(t, 0);
                {
                  ATerm e_10 = t;
                  int g_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_8 = NULL,f_8 = NULL,q_8 = NULL;
                      t = term_n_8;
                      b_8 = t;
                      t = (ATerm) ATmakeAppl(sym_SDefT_4, u_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
                      f_8 = t;
                      t = term_h_10;
                      q_8 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_n_8, (ATerm)ATmakeAppl(sym_SDefT_4, u_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_h_10);
                      t = y_5(b_8, f_8, q_8, t);
                      t = x_7;
                      LocalPopChoice(g_10);
                    }
                  else
                    {
                      t = e_10;
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
            t = a_10;
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
              ATerm v_4 = NULL,y_4 = NULL,p_0 = NULL;
              t = SSLgetAnnotations(u_10);
              v_4 = t;
              t = s_10;
              t = filter_1_0(w_0, t);
              y_4 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, y_4, t_10);
              p_0 = t;
              t = SSLsetAnnotations(p_0, v_4);
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
  t = scope_2_0(r_0, t_0, t);
  return(t);
}
ATerm map_1_0 (ATerm a_125 (ATerm), ATerm t)
{
  static ATerm x_11 (ATerm t);
  static ATerm x_11 (ATerm t)
  {
    ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
    t_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_11;
      }
    else
      {
        ATerm i_5 = NULL,r_5 = NULL,s_5 = NULL,s_0 = NULL;
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
        t = a_125(t);
        r_5 = t;
        t = v_11;
        t = x_11(t);
        s_5 = t;
        t = (ATerm) ATinsert(CheckATermList(s_5), r_5);
        s_0 = t;
        t = SSLsetAnnotations(s_0, i_5);
      }
    return(t);
  }
  t = x_11(t);
  return(t);
}
ATerm sboundin_3_0 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm t)
{
  ATerm e_20 = NULL,i_20 = NULL,k_20 = NULL,o_20 = NULL,q_20 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
      {
        ATerm d_6 = NULL,o_6 = NULL,p_6 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(k_20);
        d_6 = t;
        t = o_20;
        t = c_107(t);
        o_6 = t;
        t = q_20;
        t = c_107(t);
        p_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, o_6, p_6);
        y_0 = t;
        t = SSLsetAnnotations(y_0, d_6);
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
            ATerm s_7 = NULL,e_8 = NULL,g_8 = NULL,h_8 = NULL,a_1 = NULL;
            t = SSLgetAnnotations(k_20);
            s_7 = t;
            t = o_20;
            t = e_107(t);
            e_8 = t;
            t = q_20;
            t = e_107(t);
            g_8 = t;
            t = i_20;
            t = c_107(t);
            h_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, e_8, g_8, h_8);
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
                t = e_107(t);
                y_8 = t;
                t = q_20;
                t = e_107(t);
                z_8 = t;
                t = i_20;
                t = e_107(t);
                a_9 = t;
                t = e_20;
                t = c_107(t);
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
                    t = e_107(t);
                    v_9 = t;
                    t = q_20;
                    t = e_107(t);
                    w_9 = t;
                    t = i_20;
                    t = e_107(t);
                    x_9 = t;
                    t = e_20;
                    t = c_107(t);
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
                        ATerm l_10 = NULL,d_11 = NULL,g_11 = NULL,h_11 = NULL,f_1 = NULL;
                        t = SSLgetAnnotations(k_20);
                        l_10 = t;
                        t = o_20;
                        t = e_107(t);
                        d_11 = t;
                        t = q_20;
                        t = e_107(t);
                        g_11 = t;
                        t = i_20;
                        t = e_107(t);
                        h_11 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, d_11, g_11, h_11);
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
                            t = e_107(t);
                            f_12 = t;
                            t = q_20;
                            t = c_107(t);
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
                                ATerm o_12 = NULL,r_12 = NULL,t_12 = NULL,m_1 = NULL;
                                t = SSLgetAnnotations(k_20);
                                o_12 = t;
                                t = o_20;
                                t = e_107(t);
                                r_12 = t;
                                t = q_20;
                                t = c_107(t);
                                t_12 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, r_12, t_12);
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
                                    t = e_107(t);
                                    a_14 = t;
                                    t = q_20;
                                    t = c_107(t);
                                    c_14 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, a_14, c_14);
                                    o_1 = t;
                                    t = SSLsetAnnotations(o_1, u_13);
                                  }
                                }
                              else
                                {
                                  ATerm n_14 = NULL,u_14 = NULL,v_14 = NULL,p_1 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      o_20 = ATgetArgument(t, 0);
                                      q_20 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(k_20);
                                  n_14 = t;
                                  t = o_20;
                                  t = e_107(t);
                                  u_14 = t;
                                  t = q_20;
                                  t = c_107(t);
                                  v_14 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, u_14, v_14);
                                  p_1 = t;
                                  t = SSLsetAnnotations(p_1, n_14);
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
ATerm dynrule_sargs_1_0 (ATerm g_107 (ATerm), ATerm t)
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
                ATerm z_10 = ATgetArgument(t, 0);
                r_21 = ATgetArgument(t, 1);
                {
                  ATerm a_11 = ATgetArgument(t, 2);
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
  ATerm t_22 = NULL;
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_22 = ATgetArgument(t, 0);
          {
            ATerm m_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_11);
      t = t_22;
    }
  else
    {
      t = j_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_22;
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm d_23 = NULL;
  ATerm o_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_23 = ATgetArgument(t, 0);
          {
            ATerm r_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_11);
      t = d_23;
    }
  else
    {
      t = o_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_23;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm k_22 = NULL;
  ATerm w_11 = t;
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
      t = w_11;
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
  ATerm o_23 = NULL;
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_23 = ATgetArgument(t, 0);
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
      t = o_23;
    }
  else
    {
      t = h_12;
      if(match_cons(t, sym_SDefT_4))
        {
          o_23 = ATgetArgument(t, 0);
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
      t = o_23;
    }
  return(t);
}
static ATerm g_6 (ATerm x_24, ATerm w_24, ATerm t)
{
  t = x_24;
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm i_6 (ATerm u_127 (ATerm), ATerm p_62, ATerm o_62, ATerm t)
{
  static ATerm p_24 (ATerm t);
  static ATerm p_24 (ATerm t)
  {
    ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL;
    k_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_62;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_24 = ATgetFirst((ATermList) t);
            m_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_24;
              {
                static ATerm j_1 (ATerm t);
                static ATerm j_1 (ATerm t)
                {
                  t = o_62;
                  return(t);
                }
                t = m_6(u_127, j_1, l_24, m_24, t);
              }
              t = p_24(t);
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              {
                ATerm l_15 = NULL,p_15 = NULL,f_2 = NULL;
                t = SSLgetAnnotations(k_24);
                l_15 = t;
                t = m_24;
                t = p_24(t);
                p_15 = t;
                t = (ATerm) ATinsert(CheckATermList(p_15), l_24);
                f_2 = t;
                t = SSLsetAnnotations(f_2, l_15);
              }
            }
        }
      }
    return(t);
  }
  t = p_62;
  t = p_24(t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_130 (ATerm), ATerm a_131 (ATerm), ATerm b_131 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
  s_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_24;
      t = z_130(t);
    }
  else
    {
      ATerm z_24 = NULL,a_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_24 = ATgetFirst((ATermList) t);
          u_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_24;
      t = b_131(t);
      z_24 = t;
      t = u_24;
      t = foldr_3_0(z_130, a_131, b_131, t);
      a_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_24, a_25);
      t = a_131(t);
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
  ATerm h_16 = NULL,i_16 = NULL;
  if(match_cons(t, sym__2))
    {
      h_16 = ATgetArgument(t, 0);
      i_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(s_1, h_16, i_16, t);
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
  t = i_6(v_1, t_16, u_16, t);
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
ATerm free_vars_3_0 (ATerm r_134 (ATerm), ATerm s_134 (ATerm), ATerm t_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm q_25 (ATerm t);
  static ATerm q_25 (ATerm t)
  {
    ATerm s_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_134(t);
        LocalPopChoice(u_12);
      }
    else
      {
        t = s_12;
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_25 = NULL,f_25 = NULL,a_16 = NULL,b_16 = NULL;
              e_25 = t;
              t = s_134(t);
              f_25 = t;
              t = e_25;
              {
                static ATerm k_1 (ATerm t);
                static ATerm k_1 (ATerm t)
                {
                  ATerm h_25 = NULL;
                  t = q_25(t);
                  h_25 = t;
                  t = (ATerm) ATmakeAppl(sym__2, h_25, f_25);
                  t = diff_0_0(t);
                  return(t);
                }
                t = t_134(k_1, q_25, l_1, t);
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
                ATerm l_16 = NULL,m_16 = NULL;
                m_16 = t;
                t = SSL_explode_term(m_16);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_12 = ATgetArgument(t, 0);
                    l_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_16;
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
static ATerm k_6 (ATerm h_43, ATerm i_43, ATerm t)
{
  ATerm r_25 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_43, i_43);
  t = l_7(h_43, i_43, t);
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
        ATerm f_18 = NULL,k_18 = NULL,p_18 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty);
        k_18 = t;
        t = term_d_13;
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty));
        t = k_6(p_18, k_18, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_13) != ATmakeSymbol("i_0", 0, ATtrue)))
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
              ATerm w_18 = NULL,e_19 = NULL,f_19 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty);
              e_19 = t;
              t = term_d_13;
              f_19 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty));
              t = k_6(f_19, e_19, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_13 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_13) != ATmakeSymbol("f_0", 0, ATtrue)))
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
                t = k_6(a_20, w_19, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm i_13 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_13) != ATmakeSymbol("c_0", 0, ATtrue)))
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
ATerm at_end_1_0 (ATerm r_125 (ATerm), ATerm t)
{
  static ATerm z_27 (ATerm t);
  static ATerm z_27 (ATerm t)
  {
    ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
    s_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_27 = ATgetFirst((ATermList) t);
        r_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_20 = NULL,l_20 = NULL,f_5 = NULL;
          t = SSLgetAnnotations(s_27);
          g_20 = t;
          t = r_27;
          t = z_27(t);
          l_20 = t;
          t = (ATerm) ATinsert(CheckATermList(l_20), q_27);
          f_5 = t;
          t = SSLsetAnnotations(f_5, g_20);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_27;
        t = r_125(t);
      }
    return(t);
  }
  t = z_27(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,y_26 = NULL;
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
        t = not_null(y_26);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_26 = ATgetFirst((ATermList) t);
          if(((y_26 != NULL) && (y_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_26 = (ATerm) ATgetNext((ATermList) t);
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
static ATerm m_6 (ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm t_62, ATerm s_62, ATerm t)
{
  t = y_127(t);
  {
    static ATerm y_1 (ATerm t);
    static ATerm y_1 (ATerm t)
    {
      ATerm m_28 = NULL;
      m_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_62, m_28);
      t = x_127(t);
      return(t);
    }
    t = fetch_1_0(y_1, t);
  }
  t = s_62;
  return(t);
}
static ATerm n_6 (ATerm p_127 (ATerm), ATerm n_62, ATerm m_62, ATerm t)
{
  static ATerm t_29 (ATerm t);
  static ATerm t_29 (ATerm t)
  {
    ATerm j_29 = NULL,k_29 = NULL,q_29 = NULL;
    j_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_29;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_29 = ATgetFirst((ATermList) t);
            q_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_29;
              {
                static ATerm z_1 (ATerm t);
                static ATerm z_1 (ATerm t)
                {
                  t = m_62;
                  return(t);
                }
                t = m_6(p_127, z_1, k_29, q_29, t);
              }
              t = t_29(t);
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              {
                ATerm e_21 = NULL,h_21 = NULL,j_5 = NULL;
                t = SSLgetAnnotations(j_29);
                e_21 = t;
                t = q_29;
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
  t = n_62;
  t = t_29(t);
  return(t);
}
ATerm genzip_4_0 (ATerm z_112 (ATerm), ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm t)
{
  static ATerm d_30 (ATerm t);
  static ATerm d_30 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_112(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,b_30 = NULL,c_30 = NULL,n_5 = NULL;
          t = a_113(t);
          c_30 = t;
          if(match_cons(t, sym__2))
            {
              w_29 = ATgetArgument(t, 0);
              x_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_30);
          v_29 = t;
          t = w_29;
          t = c_113(t);
          y_29 = t;
          t = x_29;
          t = d_30(t);
          b_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_29, b_30);
          n_5 = t;
          t = SSLsetAnnotations(n_5, v_29);
          t = b_113(t);
        }
      }
    return(t);
  }
  t = d_30(t);
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
static ATerm s_6 (ATerm w_820, ATerm b_821, ATerm d_80, ATerm t)
{
  ATerm g_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  t = SSL_explode_term(b_821);
  if(match_cons(t, sym__2))
    {
      g_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_820);
  if(match_cons(t, sym__2))
    {
      if((g_30 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_30, j_30);
  t = genzip_4_0(d_2, e_2, h_2, _id, t);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_30, d_80);
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
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,n_31 = NULL,p_5 = NULL;
  n_31 = t;
  if(match_cons(t, sym__2))
    {
      j_31 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_31);
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
            t = p_33(p_32, q_32, o_32, t);
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
      t = p_33(p_32, q_32, o_32, t);
    }
  return(t);
}
static ATerm p_33 (ATerm o_31, ATerm s_31, ATerm t_31, ATerm t)
{
  ATerm w_31 = NULL,z_31 = NULL,q_5 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  t = SSLgetAnnotations(t_31);
  w_31 = t;
  t = s_31;
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
        t = s_31;
        t = s_6(d_32, e_32, f_32, t);
      }
  }
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_31, z_31);
  q_5 = t;
  t = SSLsetAnnotations(q_5, w_31);
  return(t);
}
static ATerm u_2 (ATerm t)
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
        ATerm a_33 = NULL,c_33 = NULL,d_33 = NULL;
        a_33 = t;
        if(match_cons(t, sym__2))
          {
            c_33 = ATgetArgument(t, 0);
            d_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_33;
        t = n_6(u_2, c_33, d_33, t);
      }
    }
  return(t);
}
static ATerm u_6 (ATerm c_145 (ATerm), ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm z_82, ATerm w_82, ATerm d_83, ATerm a_83, ATerm x_82, ATerm y_82, ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_82, a_83);
  t = c_145(t);
  q_33 = t;
  t = d_145(t);
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_33, d_83);
  t = diff_0_0(t);
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_33, w_82);
  t = conc_0_0(t);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_33, d_83);
  t = conc_0_0(t);
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_82, q_33, x_82);
  t = e_145(t);
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym__5, t_33, u_33, a_83, v_33, y_82);
  return(t);
}
ATerm GnNext_3_0 (ATerm c_145 (ATerm), ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm d_14 = ATgetArgument(t, 0);
      if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
        {
          x_33 = ATgetFirst((ATermList) d_14);
          y_33 = (ATerm) ATgetNext((ATermList) d_14);
        }
      else
        _fail(t);
      z_33 = ATgetArgument(t, 1);
      a_34 = ATgetArgument(t, 2);
      b_34 = ATgetArgument(t, 3);
      c_34 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = u_6(c_145, d_145, e_145, x_33, y_33, z_33, a_34, b_34, c_34, t);
  return(t);
}
ATerm while_not_2_0 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm t)
{
  static ATerm d_34 (ATerm t);
  static ATerm d_34 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_114(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = a_115(t);
        t = d_34(t);
      }
    return(t);
  }
  t = d_34(t);
  return(t);
}
ATerm for_3_0 (ATerm c_115 (ATerm), ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm t)
{
  t = c_115(t);
  t = while_not_2_0(d_115, e_115, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm i_34 = NULL,k_34 = NULL,l_34 = NULL;
  if(match_cons(t, sym__3))
    {
      i_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
      l_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, i_34, i_34, k_34, l_34, (ATerm) ATempty);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL;
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
      s_34 = ATgetArgument(t, 3);
      t_34 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm z_144 (ATerm), ATerm a_145 (ATerm), ATerm b_145 (ATerm), ATerm t)
{
  ATerm g_34 = NULL;
  static ATerm a_3 (ATerm t);
  static ATerm a_3 (ATerm t)
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(z_144, a_145, b_145, t);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,i_35 = NULL;
          if(match_cons(t, sym__5))
            {
              v_34 = ATgetArgument(t, 0);
              d_35 = ATgetArgument(t, 1);
              e_35 = ATgetArgument(t, 2);
              f_35 = ATgetArgument(t, 3);
              i_35 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = v_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_34 = ATgetFirst((ATermList) t);
              x_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, x_34, d_35, e_35, f_35, (ATerm) ATinsert(CheckATermList(i_35), w_34));
        }
      }
    return(t);
  }
  t = for_3_0(v_2, x_2, a_3, t);
  if(match_cons(t, sym__2))
    {
      g_34 = ATgetArgument(t, 0);
      {
        ATerm l_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_34;
  return(t);
}
static ATerm x_6 (ATerm k_120 (ATerm), ATerm s_41, ATerm q_41, ATerm t)
{
  ATerm v_35 = NULL,y_35 = NULL,z_35 = NULL,c_36 = NULL,e_36 = NULL,h_36 = NULL,j_36 = NULL,n_36 = NULL;
  c_36 = t;
  t = k_120(t);
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_35, s_41, q_41);
  t = m_7(v_35, s_41, q_41, t);
  {
    ATerm m_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_36 = NULL;
        t = term_e_9;
        o_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_35, term_e_9);
        t = l_7(v_35, o_36, t);
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
        LocalPopChoice(o_14);
      }
    else
      {
        t = m_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_35 = ATgetFirst((ATermList) t);
      z_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_35, term_e_9, (ATerm) ATinsert(CheckATermList(z_35), (ATerm) ATinsert(CheckATermList(y_35), s_41)));
  t = lookup_table_0_1(v_35, t);
  n_36 = t;
  t = term_e_9;
  e_36 = t;
  t = (ATerm) ATinsert(CheckATermList(z_35), (ATerm) ATinsert(CheckATermList(y_35), s_41));
  h_36 = t;
  t = n_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(e_36, h_36, j_36, t);
  t = c_36;
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
          ATerm c_37 = NULL,d_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, s_36, (ATerm) ATempty);
          c_37 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_14, r_36);
          d_37 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_36, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_w_14, r_36));
          t = x_6(b_3, c_37, d_37, t);
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
                ATerm m_37 = NULL,n_37 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, s_36, (ATerm) ATempty);
                m_37 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_15, r_36);
                n_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_36, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_c_15, r_36));
                t = x_6(d_3, m_37, n_37, t);
                t = r_36;
              }
            }
          else
            {
              t = x_14;
              {
                ATerm w_37 = NULL,x_37 = NULL;
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
                w_37 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_15, r_36);
                x_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_36, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_g_15, r_36));
                t = x_6(e_3, w_37, x_37, t);
                t = r_36;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = free_vars_3_0(m_3, n_3, sboundin_3_0, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm a_40 = NULL,d_40 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      a_40 = ATgetArgument(t, 1);
      d_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_40), a_40);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm f_38 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      f_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_38);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,n_38 = NULL,o_38 = NULL;
      i_38 = t;
      if(match_cons(t, sym_Let_2))
        {
          j_38 = ATgetArgument(t, 0);
          k_38 = ATgetArgument(t, 1);
          t = i_38;
          t = g_6(j_38, k_38, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              j_38 = ATgetArgument(t, 0);
              k_38 = ATgetArgument(t, 1);
              n_38 = ATgetArgument(t, 2);
              t = k_38;
              t = map_1_0(o_3, t);
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
                      n_38 = ATgetArgument(t, 2);
                      o_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_38;
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
  ATerm z_38 = NULL;
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_38 = ATgetArgument(t, 0);
          {
            ATerm q_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_15);
      t = z_38;
    }
  else
    {
      t = n_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_38;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm m_39 = NULL;
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_39 = ATgetArgument(t, 0);
          {
            ATerm t_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_15);
      t = m_39;
    }
  else
    {
      t = r_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_39;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = map_1_0(s_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm r_39 = NULL;
  ATerm u_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_39 = ATgetArgument(t, 0);
          {
            ATerm w_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_15);
      t = r_39;
    }
  else
    {
      t = u_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_39;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm e_38 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_x_15), e_38, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(Definition_0_0, i_3, j_3, t);
  return(t);
}
static ATerm l_7 (ATerm p_44, ATerm q_44, ATerm t)
{
  ATerm g_40 = NULL;
  t = lookup_table_0_1(p_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(q_44, g_40, t);
  return(t);
}
ATerm Cons_2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,p_40 = NULL,q_40 = NULL,f_6 = NULL;
  q_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_40 = ATgetFirst((ATermList) t);
      k_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_40);
  i_40 = t;
  t = j_40;
  t = o_93(t);
  l_40 = t;
  t = k_40;
  t = p_93(t);
  p_40 = t;
  t = (ATerm) ATinsert(CheckATermList(p_40), l_40);
  f_6 = t;
  t = SSLsetAnnotations(f_6, i_40);
  return(t);
}
static ATerm y_6 (ATerm j_33, ATerm k_33, ATerm t)
{
  ATerm r_40 = NULL;
  t = SSL_fputc(j_33, k_33);
  r_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_40);
  return(t);
}
static ATerm z_6 (ATerm p_31, ATerm q_31, ATerm t)
{
  ATerm s_40 = NULL;
  t = SSL_write_term_to_stream_text(p_31, q_31);
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_40);
  return(t);
}
static ATerm b_7 (ATerm x_115 (ATerm), ATerm j_235, ATerm v_31, ATerm t)
{
  ATerm u_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_235, term_y_15);
  t = f_7(t);
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_40, v_31);
  t = x_115(t);
  t = fclose_0_0(t);
  t = v_31;
  return(t);
}
static ATerm a_7 (ATerm l_31, ATerm m_31, ATerm t)
{
  ATerm v_40 = NULL;
  t = SSL_write_term_to_stream_baf(l_31, m_31);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_40);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      if(match_cons(z_15, sym_Stream_1))
        {
          e_41 = ATgetArgument(z_15, 0);
        }
      else
        _fail(t);
      f_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(e_41, f_41, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm g_41 = NULL,i_41 = NULL,j_41 = NULL,v_41 = NULL,w_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(match_cons(c_16, sym_Stream_1))
        {
          v_41 = ATgetArgument(c_16, 0);
        }
      else
        _fail(t);
      w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(v_41, w_41, t);
  g_41 = t;
  t = term_d_16;
  i_41 = t;
  t = g_41;
  if(match_cons(t, sym_Stream_1))
    {
      j_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_16, g_41);
  t = y_6(i_41, j_41, t);
  return(t);
}
ATerm output_1_0 (ATerm o_140 (ATerm), ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  t = o_140(t);
  z_40 = t;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_41 = NULL,b_41 = NULL;
        t = term_g_16;
        a_41 = t;
        t = term_k_16;
        b_41 = t;
        t = term_n_16;
        t = l_7(a_41, b_41, t);
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = term_o_16;
      }
  }
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_40, z_40);
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_41 = NULL,d_41 = NULL;
        t = term_g_16;
        c_41 = t;
        t = term_r_16;
        d_41 = t;
        t = term_s_16;
        t = l_7(c_41, d_41, t);
        t = (ATerm) ATmakeAppl(sym__2, y_40, z_40);
        LocalPopChoice(q_16);
        if(match_cons(t, sym__2))
          {
            ATerm w_16 = ATgetArgument(t, 0);
            ATerm x_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_7(t_3, y_40, z_40, t);
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
        t = b_7(y_3, y_40, z_40, t);
      }
  }
  return(t);
}
static ATerm p_42 (ATerm h_42, ATerm t)
{
  t = SSL_fclose(h_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  l_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_42 = ATgetArgument(t, 0);
      {
        ATerm a_17 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_42);
            LocalPopChoice(b_17);
          }
        else
          {
            t = a_17;
            t = p_42(l_42, t);
          }
      }
    }
  else
    {
      t = p_42(l_42, t);
    }
  return(t);
}
static ATerm c_7 (ATerm r_31, ATerm t)
{
  t = SSL_read_term_from_stream(r_31);
  return(t);
}
static ATerm d_7 (ATerm w_71, ATerm x_71, ATerm t)
{
  t = SSL_strcat(w_71, x_71);
  return(t);
}
static ATerm e_7 (ATerm l_33, ATerm m_33, ATerm t)
{
  ATerm s_42 = NULL;
  t = SSL_fopen(l_33, m_33);
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_42 = NULL;
  t = SSL_stdin_stream();
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_42 = NULL;
  t = SSL_stdout_stream();
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_42 = NULL;
  t = SSL_stderr_stream();
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_42);
  return(t);
}
static ATerm s_45 (ATerm r_43, ATerm t)
{
  ATerm u_43 = NULL;
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
            u_43 = ATgetFirst((ATermList) d_17);
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
  t = u_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_45 (ATerm y_43, ATerm z_43, ATerm a_44, ATerm t)
{
  ATerm b_44 = NULL,d_44 = NULL,e_44 = NULL,n_44 = NULL,y_9 = NULL;
  t = SSLgetAnnotations(a_44);
  e_44 = t;
  t = y_43;
  if(match_cons(t, sym_Path_1))
    {
      n_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_44, z_43);
  y_9 = t;
  t = SSLsetAnnotations(y_9, e_44);
  if(match_cons(t, sym__2))
    {
      b_44 = ATgetArgument(t, 0);
      d_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(b_44, d_44, t);
  return(t);
}
static ATerm u_45 (ATerm r_44, ATerm s_44, ATerm v_44, ATerm t)
{
  ATerm y_44 = NULL,b_45 = NULL,c_45 = NULL,i_45 = NULL,f_10 = NULL;
  t = SSLgetAnnotations(v_44);
  c_45 = t;
  t = SSL_is_string(r_44);
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_45, s_44);
  f_10 = t;
  t = SSLsetAnnotations(f_10, c_45);
  if(match_cons(t, sym__2))
    {
      y_44 = ATgetArgument(t, 0);
      b_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(y_44, b_45, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  if(match_cons(t, sym__2))
    {
      o_45 = ATgetArgument(t, 0);
      p_45 = ATgetArgument(t, 1);
      {
        ATerm f_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_45(n_45, t);
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
                  t = t_45(o_45, p_45, n_45, t);
                  LocalPopChoice(i_17);
                }
              else
                {
                  t = h_17;
                  t = u_45(o_45, p_45, n_45, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_45(n_45, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,j_46 = NULL;
  j_46 = t;
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_46, term_l_17);
        t = f_7(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        {
          ATerm f_22 = NULL,g_22 = NULL;
          t = term_m_17;
          g_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_17, j_46);
          t = d_7(g_22, j_46, t);
          f_22 = t;
          t = SSL_perror(f_22);
          _fail(t);
        }
      }
  }
  a_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(b_46, t);
  z_45 = t;
  t = a_46;
  t = fclose_0_0(t);
  t = z_45;
  return(t);
}
ATerm input_1_0 (ATerm p_140 (ATerm), ATerm t)
{
  ATerm n_17 = t;
  int o_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_46 = NULL,n_46 = NULL;
      t = term_g_16;
      m_46 = t;
      t = term_p_17;
      n_46 = t;
      t = term_q_17;
      t = l_7(m_46, n_46, t);
      LocalPopChoice(o_17);
    }
  else
    {
      t = n_17;
      t = term_r_17;
    }
  t = ReadFromFile_0_0(t);
  t = p_140(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL;
  t = term_g_16;
  o_46 = t;
  t = term_s_17;
  p_46 = t;
  t = term_t_17;
  t = l_7(o_46, p_46, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_46;
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
            t = r_46;
          }
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = (ATerm) ATinsert(ATempty, r_46);
      }
  }
  s_46 = t;
  t = term_o_16;
  t_46 = t;
  t = SSL_printnl(t_46, s_46);
  t = r_46;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_46 = ATgetFirst((ATermList) t);
      z_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_47 = NULL,e_47 = NULL;
        static ATerm k_4 (ATerm t);
        static ATerm k_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_47)), not_null(e_47));
          return(t);
        }
        t = z_46;
        t = n_0(t);
        if(((d_47 != NULL) && (d_47 != t)))
          _fail(t);
        else
          d_47 = t;
        t = y_46;
        t = m_0(t);
        if(((e_47 != NULL) && (e_47 != t)))
          _fail(t);
        else
          e_47 = t;
        t = z_46;
        t = reverse_acc_2_0(m_0, k_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_8;
      t = n_0(t);
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,o_10 = NULL;
  y_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_47);
  w_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_47);
  o_10 = t;
  t = SSLsetAnnotations(o_10, w_47);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm c_48 = NULL;
  c_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_48), term_y_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL;
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_47 = NULL,v_47 = NULL;
      t = term_g_16;
      u_47 = t;
      t = term_s_17;
      v_47 = t;
      t = term_t_17;
      t = l_7(u_47, v_47, t);
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      t = fetch_1_0(l_4, t);
    }
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_142(t);
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
  s_47 = t;
  t = term_g_18;
  t_47 = t;
  t = term_h_18;
  t = l_7(s_47, t_47, t);
  t = reverse_acc_2_0(_id, m_4, t);
  t = map_1_0(p_4, t);
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_48 = NULL;
        t = o_142(t);
        d_48 = t;
        t = (ATerm) ATinsert(CheckATermList(d_48), term_l_18);
        t = echo_0_0(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,q_10 = NULL;
  q_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_48);
  o_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_48);
  q_10 = t;
  t = SSLsetAnnotations(q_10, o_48);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_48 = NULL;
  g_48 = t;
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_48 = NULL,n_48 = NULL;
        t = term_g_16;
        k_48 = t;
        t = term_s_17;
        n_48 = t;
        t = term_t_17;
        t = l_7(k_48, n_48, t);
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        t = fetch_1_0(q_4, t);
      }
  }
  t = g_48;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm s_48 = NULL;
  s_48 = t;
  if(match_string(t, "-k"))
    {
      t = s_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_48;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t_48 = t;
  t = SSL_string_to_int(t_48);
  u_48 = t;
  t = term_o_18;
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_18, u_48);
  t = o_7(v_48, u_48, t);
  t = t_48;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm z_48 = NULL;
  z_48 = t;
  if(match_string(t, "-S"))
    {
      t = z_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_48;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL;
  t = term_r_18;
  a_49 = t;
  t = term_s_18;
  b_49 = t;
  t = term_t_18;
  t = o_7(a_49, b_49, t);
  t = term_u_18;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_v_18;
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
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  c_49 = t;
  t = SSL_string_to_int(c_49);
  d_49 = t;
  t = term_r_18;
  e_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, d_49);
  t = o_7(e_49, d_49, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_49);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_x_18;
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
  ATerm f_49 = NULL,g_49 = NULL;
  t = term_y_18;
  f_49 = t;
  t = term_p_8;
  g_49 = t;
  t = term_z_18;
  t = o_7(f_49, g_49, t);
  t = term_a_19;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_4, w_4, x_4, t);
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_4, a_5, b_5, t);
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            t = Option_3_0(c_5, d_5, e_5, t);
          }
      }
    }
  return(t);
}
static ATerm o_7 (ATerm f_37, ATerm g_37, ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL;
  t = term_g_16;
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_16, f_37, g_37);
  t = lookup_table_0_1(h_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(f_37, g_37, i_49, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_16, f_37, g_37);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
      t = term_p_8;
      t = g_0(t);
      o_49 = t;
      t = term_e_18;
      p_49 = t;
      t = term_g_18;
      q_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_18, term_g_18, o_49);
      t = m_7(p_49, q_49, o_49, t);
      _fail(t);
    }
  else
    {
      ATerm t_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_49 = ATgetFirst((ATermList) t);
          n_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_49;
      t = b_0(t);
      t = term_p_8;
      t = d_0(t);
      t_49 = t;
      t = (ATerm) ATinsert(CheckATermList(n_49), t_49);
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm v_49 = NULL;
  v_49 = t;
  if(match_string(t, "-o"))
    {
      t = v_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_49;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  w_49 = t;
  t = term_k_16;
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_16, w_49);
  t = o_7(x_49, w_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_49);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_i_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, h_5, k_5, t);
  return(t);
}
static ATerm m_7 (ATerm w_42, ATerm x_42, ATerm v_42, ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL;
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_42, x_42);
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_19 = ATgetArgument(t, 0);
            ATerm n_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_42, x_42);
        t = l_7(w_42, x_42, t);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = (ATerm) ATempty;
      }
  }
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_42, x_42, (ATerm) ATinsert(CheckATermList(a_50), v_42));
  t = lookup_table_0_1(w_42, t);
  d_50 = t;
  t = (ATerm) ATinsert(CheckATermList(a_50), v_42);
  b_50 = t;
  t = d_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(x_42, b_50, c_50, t);
  t = z_49;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
      t = term_p_8;
      t = l_0(t);
      o_50 = t;
      t = term_e_18;
      p_50 = t;
      t = term_g_18;
      q_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_18, term_g_18, o_50);
      t = m_7(p_50, q_50, o_50, t);
      _fail(t);
    }
  else
    {
      ATerm u_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_50 = ATgetFirst((ATermList) t);
          l_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_50 = ATgetFirst((ATermList) t);
          n_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_50;
      t = h_0(t);
      t = m_50;
      t = j_0(t);
      u_50 = t;
      t = (ATerm) ATinsert(CheckATermList(n_50), u_50);
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm w_50 = NULL;
  w_50 = t;
  if(match_string(t, "-i"))
    {
      t = w_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_50;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL;
  x_50 = t;
  t = term_p_17;
  y_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, x_50);
  t = o_7(y_50, x_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_50);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, m_5, o_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_8;
  t = whoami_0_0(t);
  z_50 = t;
  t = term_p_19;
  b_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_19), z_50);
  c_51 = t;
  t = SSL_printnl(b_51, c_51);
  t = term_r_19;
  a_51 = t;
  t = SSL_exit(a_51);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL;
  t = term_g_16;
  d_51 = t;
  t = term_s_17;
  e_51 = t;
  t = term_t_17;
  t = l_7(d_51, e_51, t);
  return(t);
}
static ATerm g_7 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_40, f_40);
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      t = SSL_addr(e_40, f_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_130 (ATerm), ATerm y_130 (ATerm), ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
  g_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_51;
      t = x_130(t);
    }
  else
    {
      ATerm l_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_51 = ATgetFirst((ATermList) t);
          i_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_51;
      t = foldr_2_0(x_130, y_130, t);
      l_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_51, l_51);
      t = y_130(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_s_18;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      w_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(w_22, x_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_51 = NULL,i_22 = NULL,p_22 = NULL;
  t = times_0_0(t);
  p_22 = t;
  t = SSL_explode_term(p_22);
  if(match_cons(t, sym__2))
    {
      ATerm u_19 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_22;
  t = foldr_2_0(t_5, u_5, t);
  o_51 = t;
  t = SSL_TicksToSeconds(o_51);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL;
  z_51 = t;
  if(match_cons(t, sym__2))
    {
      a_52 = ATgetArgument(t, 0);
      b_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_52;
        if((a_52 != t))
          {
            _fail(t);
          }
        t = z_51;
        LocalPopChoice(x_19);
      }
    else
      {
        t = v_19;
        t = (ATerm) ATmakeAppl(sym__2, a_52, b_52);
        {
          ATerm y_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_52, b_52);
              LocalPopChoice(z_19);
            }
          else
            {
              t = y_19;
              t = SSL_gtr(a_52, b_52);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_52, b_52);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_117 (ATerm), ATerm t)
{
  ATerm f_52 = NULL;
  f_52 = t;
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
        t = term_g_16;
        i_52 = t;
        t = term_r_18;
        j_52 = t;
        t = term_d_20;
        t = l_7(i_52, j_52, t);
        h_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_52, term_r_19);
        t = geq_0_0(t);
        t = f_52;
        t = o_117(t);
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        t = f_52;
      }
  }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,o_52 = NULL,p_52 = NULL;
  t = run_time_0_0(t);
  l_52 = t;
  t = term_p_8;
  t = whoami_0_0(t);
  m_52 = t;
  t = term_p_19;
  o_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_20), l_52), term_f_20), m_52);
  p_52 = t;
  t = SSL_printnl(o_52, p_52);
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_20), l_52), term_f_20), m_52));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_18;
  q_52 = t;
  t = SSL_exit(q_52);
  return(t);
}
static ATerm p_7 (ATerm h_47, ATerm i_47, ATerm j_47, ATerm t)
{
  ATerm r_52 = NULL;
  t = SSL_hashtable_put(j_47, h_47, i_47);
  r_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_52);
  return(t);
}
static ATerm q_7 (ATerm k_47, ATerm l_47, ATerm t)
{
  t = SSL_hashtable_get(l_47, k_47);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_44, ATerm t)
{
  ATerm a_53 = NULL;
  t = table_hashtable_0_0(t);
  a_53 = t;
  {
    ATerm j_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_23 = NULL;
        t = a_53;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_7(i_44, r_23, t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = j_20;
        {
          ATerm a_24 = NULL;
          t = i_44;
          t = table_create_0_0(t);
          t = a_53;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_7(i_44, a_24, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm p_47, ATerm q_47, ATerm t)
{
  ATerm d_53 = NULL;
  t = SSL_hashtable_create(p_47, q_47);
  d_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_53);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL,i_53 = NULL,j_53 = NULL;
  e_53 = t;
  t = term_n_20;
  i_53 = t;
  t = term_p_20;
  j_53 = t;
  t = e_53;
  t = new_hashtable_0_2(i_53, j_53, t);
  f_53 = t;
  t = e_53;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(e_53, f_53, g_53, t);
  t = e_53;
  return(t);
}
static ATerm i_7 (ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm k_53 = NULL;
  t = SSL_hashtable_remove(n_47, m_47);
  k_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_53);
  return(t);
}
static ATerm j_7 (ATerm r_47, ATerm t)
{
  ATerm l_53 = NULL;
  t = SSL_hashtable_destroy(r_47);
  l_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_53);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_53 = NULL;
  t = SSL_table_hashtable();
  m_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_53);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  n_53 = t;
  t = table_hashtable_0_0(t);
  o_53 = t;
  t = lookup_table_0_1(n_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(q_53, t);
  t = o_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(n_53, p_53, t);
  t = n_53;
  return(t);
}
ATerm fetch_1_0 (ATerm k_125 (ATerm), ATerm t)
{
  static ATerm n_54 (ATerm t);
  static ATerm n_54 (ATerm t)
  {
    ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
    k_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_54 = ATgetFirst((ATermList) t);
        m_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_20 = t;
      int s_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_25 = NULL,y_25 = NULL,y_10 = NULL;
          t = SSLgetAnnotations(k_54);
          v_25 = t;
          t = l_54;
          t = k_125(t);
          y_25 = t;
          t = (ATerm) ATinsert(CheckATermList(m_54), y_25);
          y_10 = t;
          t = SSLsetAnnotations(y_10, v_25);
          LocalPopChoice(s_20);
        }
      else
        {
          t = r_20;
          {
            ATerm f_27 = NULL,i_27 = NULL,b_11 = NULL;
            t = SSLgetAnnotations(k_54);
            f_27 = t;
            t = m_54;
            t = n_54(t);
            i_27 = t;
            t = (ATerm) ATinsert(CheckATermList(i_27), l_54);
            b_11 = t;
            t = SSLsetAnnotations(b_11, f_27);
          }
        }
    }
    return(t);
  }
  t = n_54(t);
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
  ATerm q_54 = NULL,r_54 = NULL;
  t = term_t_20;
  q_54 = t;
  t = term_p_8;
  r_54 = t;
  t = term_u_20;
  t = o_7(q_54, r_54, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_v_20;
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
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
  t = term_t_20;
  u_54 = t;
  t = term_p_8;
  v_54 = t;
  t = term_u_20;
  t = o_7(u_54, v_54, t);
  t = term_w_20;
  s_54 = t;
  t = term_p_8;
  t_54 = t;
  t = term_x_20;
  t = o_7(s_54, t_54, t);
  t = term_y_20;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, x_5, z_5, t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      t = Option_3_0(a_6, b_6, e_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_142 (ATerm), ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,f_55 = NULL,g_55 = NULL,i_11 = NULL;
  a_55 = t;
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_21;
        t = i_142(t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
      }
  }
  t = a_55;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_55 = ATgetFirst((ATermList) t);
      d_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_55);
  b_55 = t;
  t = term_s_17;
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_17, c_55);
  t = o_7(g_55, c_55, t);
  t = d_55;
  {
    static ATerm q_55 (ATerm t);
    static ATerm q_55 (ATerm t)
    {
      ATerm g_21 = t;
      int i_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_55 = NULL;
              j_55 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_55;
              LocalPopChoice(k_21);
            }
          else
            {
              t = j_21;
              t = i_142(t);
              t = Cons_2_0(_id, q_55, t);
            }
          LocalPopChoice(i_21);
        }
      else
        {
          t = g_21;
          {
            ATerm m_55 = NULL,n_55 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_55 = ATgetFirst((ATermList) t);
                n_55 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_55), (ATerm) ATmakeAppl(sym_Undefined_1, m_55));
          }
        }
      return(t);
    }
    t = q_55(t);
  }
  f_55 = t;
  t = (ATerm) ATinsert(CheckATermList(f_55), (ATerm) ATmakeAppl(sym_Program_1, c_55));
  i_11 = t;
  t = SSLsetAnnotations(i_11, b_55);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm d_56 = NULL;
  d_56 = t;
  if(match_string(t, "--help"))
    {
      t = d_56;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_56;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_56;
        }
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL;
  t = term_l_21;
  e_56 = t;
  t = term_p_8;
  f_56 = t;
  t = term_m_21;
  t = o_7(e_56, f_56, t);
  t = term_n_21;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_q_21;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm f_142 (ATerm), ATerm g_142 (ATerm), ATerm h_142 (ATerm), ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL;
  x_55 = t;
  t = term_e_18;
  y_55 = t;
  t = term_s_21;
  t = lookup_table_0_1(y_55, t);
  c_56 = t;
  t = term_g_18;
  z_55 = t;
  t = (ATerm) ATempty;
  a_56 = t;
  t = c_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(z_55, a_56, b_56, t);
  t = x_55;
  {
    static ATerm h_6 (ATerm t);
    static ATerm h_6 (ATerm t)
    {
      ATerm t_21 = t;
      int u_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_142(t);
          LocalPopChoice(u_21);
        }
      else
        {
          t = t_21;
          {
            ATerm v_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_6, l_6, q_6, t);
                LocalPopChoice(w_21);
              }
            else
              {
                t = v_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_6, t);
  }
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_56 = NULL;
        q_56 = t;
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_28 = NULL;
              t = q_56;
              {
                ATerm b_22 = t;
                int c_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_28 = NULL,n_28 = NULL;
                    t = term_g_16;
                    c_28 = t;
                    t = term_l_21;
                    n_28 = t;
                    t = term_d_22;
                    t = l_7(c_28, n_28, t);
                    LocalPopChoice(c_22);
                  }
                else
                  {
                    t = b_22;
                    t = fetch_1_0(r_6, t);
                  }
              }
              t = q_56;
              t = g_142(t);
              t = term_s_18;
              b_28 = t;
              t = SSL_exit(b_28);
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
              {
                ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
                t = term_g_16;
                w_28 = t;
                t = term_t_20;
                x_28 = t;
                t = term_e_22;
                t = l_7(w_28, x_28, t);
                t = q_56;
                t = h_142(t);
                t = term_s_18;
                v_28 = t;
                t = SSL_exit(v_28);
              }
            }
        }
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        {
          ATerm h_22 = t;
          int j_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
              static ATerm v_6 (ATerm t);
              static ATerm v_6 (ATerm t)
              {
                ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,l_11 = NULL;
                w_56 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_56 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_56);
                u_56 = t;
                t = v_56;
                if(((v_55 != NULL) && (v_55 != t)))
                  _fail(t);
                else
                  v_55 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_56);
                l_11 = t;
                t = SSLsetAnnotations(l_11, u_56);
                return(t);
              }
              t = fetch_1_0(v_6, t);
              t = term_p_19;
              s_56 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_55)), term_l_22);
              t_56 = t;
              t = SSL_printnl(s_56, t_56);
              t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_55)), term_l_22));
              t = g_142(t);
              t = term_r_19;
              r_56 = t;
              t = SSL_exit(r_56);
              LocalPopChoice(j_22);
            }
          else
            {
              t = h_22;
            }
        }
      }
  }
  w_55 = t;
  t = term_e_18;
  t = table_destroy_0_0(t);
  t = w_55;
  return(t);
}
ATerm option_wrap_5_0 (ATerm i_140 (ATerm), ATerm j_140 (ATerm), ATerm k_140 (ATerm), ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL;
  t = parse_options_3_0(i_140, j_140, k_140, t);
  b_57 = t;
  t = term_m_22;
  t = table_create_0_0(t);
  t = term_m_22;
  c_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_22, term_n_22, b_57);
  t = lookup_table_0_1(c_57, t);
  f_57 = t;
  t = term_n_22;
  d_57 = t;
  t = f_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(d_57, b_57, e_57, t);
  t = b_57;
  t = l_140(t);
  {
    ATerm o_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_140(t);
        t = report_success_0_0(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = o_22;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_7, n_7, r_7, t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm u_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(v_22);
          }
        else
          {
            t = u_22;
            {
              ATerm y_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(z_22);
                }
              else
                {
                  t = y_22;
                  {
                    ATerm a_23 = t;
                    int b_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(t_7, w_7, y_7, t);
                        LocalPopChoice(b_23);
                      }
                    else
                      {
                        t = a_23;
                        {
                          ATerm c_23 = t;
                          int e_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(e_23);
                            }
                          else
                            {
                              t = c_23;
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
static ATerm h_7 (ATerm t)
{
  t = input_1_0(z_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--only-local", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
  i_57 = t;
  t = term_f_23;
  j_57 = t;
  t = term_p_8;
  k_57 = t;
  t = term_g_23;
  t = o_7(j_57, k_57, t);
  t = i_57;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_h_23;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL;
  t = term_r_16;
  l_57 = t;
  t = term_p_8;
  m_57 = t;
  t = term_i_23;
  t = o_7(l_57, m_57, t);
  t = term_j_23;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_k_23;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = output_1_0(a_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,s_11 = NULL,p_11 = NULL;
  v_57 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_57);
  o_57 = t;
  t = p_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_57 = ATgetFirst((ATermList) t);
      s_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_57);
  q_57 = t;
  t = s_57;
  t = Cons_2_0(c_8, d_8, t);
  t_57 = t;
  t = (ATerm) ATinsert(CheckATermList(t_57), r_57);
  p_11 = t;
  t = SSLsetAnnotations(p_11, q_57);
  u_57 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, u_57);
  s_11 = t;
  t = SSLsetAnnotations(s_11, o_57);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,n_11 = NULL;
  z_57 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_57);
  w_57 = t;
  t = x_57;
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_58 = NULL,b_58 = NULL;
        t = term_g_16;
        a_58 = t;
        t = term_f_23;
        b_58 = t;
        t = term_n_23;
        t = l_7(a_58, b_58, t);
        t = x_57;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        t = dead_def_elim_0_0(t);
      }
  }
  t = map_1_0(local_dead_def_elim_0_0, t);
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, y_57);
  n_11 = t;
  t = SSLsetAnnotations(n_11, w_57);
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
  t = option_wrap_5_0(w_6, default_system_usage_0_0, default_system_about_0_0, _id, h_7, t);
  return(t);
}
