#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_RDefT_4;
Symbol sym_RDecT_3;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Rec_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
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
ATerm term_r_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_m_21;
ATerm term_i_21;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_b_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_j_14;
ATerm term_d_14;
ATerm term_v_13;
ATerm term_e_12;
ATerm term_f_10;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_y_8;
ATerm term_o_8;
ATerm term_m_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_9);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_m_15);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_o_8);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_b_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_u_16);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_v_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_l_17, term_m_17);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_o_8);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_o_8);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_o_8);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__3, term_l_17, term_m_17, (ATerm) ATempty);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_o_19);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_h_22, term_o_8);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local        do not eliminate top-level definitions", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_o_8);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_h_22);
}
#include <srts/init-stratego-application.h>
ATerm DefDead_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_107 (ATerm), ATerm t);
static ATerm z_5 (ATerm c_41, ATerm d_41, ATerm e_41, ATerm t);
static ATerm d_6 (ATerm u_40, ATerm v_40, ATerm t);
ATerm end_scope_1_0 (ATerm p_99 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_99 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm local_dead_def_elim_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_100 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm h_6 (ATerm k_23, ATerm j_23, ATerm t);
static ATerm j_6 (ATerm c_103 (ATerm), ATerm l_47, ATerm k_47, ATerm t);
ATerm foldr_3_0 (ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm free_vars_3_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm l_6 (ATerm a_41, ATerm b_41, ATerm t);
ATerm Definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm z_100 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_25 (ATerm a_25, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm n_6 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm p_47, ATerm o_47, ATerm t);
static ATerm o_6 (ATerm x_102 (ATerm), ATerm j_47, ATerm i_47, ATerm t);
ATerm genzip_4_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm t_6 (ATerm w_650, ATerm b_651, ATerm a_63, ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_29 (ATerm t_27, ATerm u_27, ATerm v_27, ATerm t);
static ATerm s_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm v_6 (ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm i_64, ATerm f_64, ATerm m_64, ATerm j_64, ATerm g_64, ATerm h_64, ATerm t);
ATerm GnNext_3_0 (ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm t);
ATerm for_3_0 (ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t);
static ATerm y_6 (ATerm s_99 (ATerm), ATerm l_39, ATerm j_39, ATerm t);
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
ATerm dead_def_elim_0_0 (ATerm t);
static ATerm m_7 (ATerm i_42, ATerm j_42, ATerm t);
ATerm Cons_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t);
static ATerm z_6 (ATerm k_31, ATerm l_31, ATerm t);
static ATerm a_7 (ATerm c_30, ATerm d_30, ATerm t);
static ATerm c_7 (ATerm j_95 (ATerm), ATerm n_208, ATerm i_30, ATerm t);
static ATerm b_7 (ATerm y_29, ATerm z_29, ATerm t);
static ATerm l_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm output_1_0 (ATerm m_116 (ATerm), ATerm t);
static ATerm h_38 (ATerm z_37, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_7 (ATerm e_30, ATerm t);
static ATerm e_7 (ATerm o_56, ATerm p_56, ATerm t);
static ATerm f_7 (ATerm m_31, ATerm n_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_40 (ATerm v_38, ATerm t);
static ATerm g_41 (ATerm z_38, ATerm a_39, ATerm b_39, ATerm t);
static ATerm h_41 (ATerm v_39, ATerm w_39, ATerm y_39, ATerm t);
static ATerm g_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm n_116 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_7 (ATerm f_35, ATerm g_35, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_7 (ATerm p_40, ATerm q_40, ATerm o_40, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_7 (ATerm x_37, ATerm y_37, ATerm t);
ATerm foldr_2_0 (ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_96 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm need_help_1_0 (ATerm d_116 (ATerm), ATerm t);
static ATerm q_7 (ATerm h_44, ATerm i_44, ATerm j_44, ATerm t);
static ATerm r_7 (ATerm k_44, ATerm l_44, ATerm t);
ATerm lookup_table_0_1 (ATerm b_42, ATerm t);
ATerm new_hashtable_0_2 (ATerm p_44, ATerm q_44, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_7 (ATerm m_44, ATerm n_44, ATerm t);
static ATerm k_7 (ATerm r_44, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_100 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm g_118 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm parse_options_1_0 (ATerm f_118 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm i_116 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm w_6 (ATerm t);
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
        ATerm d_8 = ATgetArgument(t, 1);
      }
      {
        ATerm e_8 = ATgetArgument(t, 2);
      }
      {
        ATerm j_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_1 = NULL,n_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        d_1 = t;
        t = term_m_8;
        n_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        t = l_6(n_1, d_1, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = h_1;
        _fail(t);
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        {
          ATerm n_2 = NULL,o_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          n_2 = t;
          t = term_m_8;
          o_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_8, (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          t = l_6(o_2, n_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm n_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("j_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_o_8;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm j_107 (ATerm), ATerm t)
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
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 = NULL,b_3 = NULL,c_3 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(a_2);
            v_2 = t;
            t = b_2;
            t = j_107(t);
            b_3 = t;
            t = c_2;
            t = filter_1_0(j_107, t);
            c_3 = t;
            t = (ATerm) ATinsert(CheckATermList(c_3), b_3);
            a_0 = t;
            t = SSLsetAnnotations(a_0, v_2);
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            t = c_2;
            t = filter_1_0(j_107, t);
          }
      }
    }
  return(t);
}
static ATerm z_5 (ATerm c_41, ATerm d_41, ATerm e_41, ATerm t)
{
  ATerm g_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,p_2 = NULL;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_41, d_41);
  t = m_7(c_41, d_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_8 = ATgetFirst((ATermList) t);
      g_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_41, d_41, (ATerm) ATinsert(CheckATermList(g_2), e_41));
  t = lookup_table_0_1(c_41, t);
  p_2 = t;
  t = (ATerm) ATinsert(CheckATermList(g_2), e_41);
  j_2 = t;
  t = p_2;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(d_41, j_2, k_2, t);
  t = i_2;
  return(t);
}
static ATerm d_6 (ATerm u_40, ATerm v_40, ATerm t)
{
  ATerm q_2 = NULL,w_2 = NULL;
  w_2 = t;
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_40, v_40);
        t = m_7(u_40, v_40, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_8 = ATgetFirst((ATermList) t);
            q_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_8);
        {
          ATerm z_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, u_40, v_40, q_2);
          t = lookup_table_0_1(u_40, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              z_2 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_7(v_40, q_2, z_2, t);
          t = (ATerm) ATmakeAppl(sym__3, u_40, v_40, q_2);
        }
      }
    else
      {
        t = s_8;
        {
          ATerm j_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, u_40, v_40);
          t = lookup_table_0_1(u_40, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_7(v_40, j_3, t);
          t = (ATerm) ATmakeAppl(sym__2, u_40, v_40);
        }
      }
  }
  t = w_2;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,s_3 = NULL,u_3 = NULL,v_3 = NULL;
  q_3 = t;
  t = p_99(t);
  p_3 = t;
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 = NULL;
        t = term_y_8;
        w_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_3, term_y_8);
        t = m_7(p_3, w_3, t);
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
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
  t = (ATerm) ATmakeAppl(sym__3, p_3, term_y_8, m_3);
  t = lookup_table_0_1(p_3, t);
  v_3 = t;
  t = term_y_8;
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
    static ATerm n_0 (ATerm t)
    {
      ATerm y_3 = NULL;
      y_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_3, y_3);
      t = d_6(p_3, y_3, t);
      return(t);
    }
    t = map_1_0(n_0, t);
  }
  t = q_3;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t)
{
  ATerm c_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_91(t);
      t = h_91(t);
      LocalPopChoice(e_9);
    }
  else
    {
      t = c_9;
      t = h_91(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_99 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,i_4 = NULL;
  c_4 = t;
  t = o_99(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, term_y_8);
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_9 = ATgetArgument(t, 0);
            ATerm i_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_8;
        r_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_4, term_y_8);
        t = m_7(b_4, r_4, t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        t = (ATerm) ATempty;
      }
  }
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_4, term_y_8, (ATerm) ATinsert(CheckATermList(d_4), (ATerm) ATempty));
  t = lookup_table_0_1(b_4, t);
  i_4 = t;
  t = term_y_8;
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
ATerm scope_2_0 (ATerm q_99 (ATerm), ATerm r_99 (ATerm), ATerm t)
{
  static ATerm q_0 (ATerm t)
  {
    t = end_scope_1_0(q_99, t);
    return(t);
  }
  t = begin_scope_1_0(q_99, t);
  t = restore_always_2_0(r_99, q_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm a_4 = NULL,h_4 = NULL,j_4 = NULL,l_4 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      a_4 = ATgetArgument(t, 0);
      {
        ATerm j_9 = ATgetArgument(t, 1);
      }
      {
        ATerm k_9 = ATgetArgument(t, 2);
      }
      {
        ATerm l_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, a_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  j_4 = t;
  t = term_n_9;
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, a_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_n_9);
  t = y_6(v_0, j_4, l_4, t);
  t = h_4;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_m_8;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm o_9 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_9;
    }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  static ATerm t_0 (ATerm t)
  {
    ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,i_6 = NULL,u_6 = NULL,v_7 = NULL,x_7 = NULL;
    x_7 = t;
    if(match_cons(t, sym_Let_2))
      {
        i_6 = ATgetArgument(t, 0);
        v_7 = ATgetArgument(t, 1);
        {
          ATerm p_9 = t;
          int r_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_3 = NULL,x_3 = NULL,o_0 = NULL;
              t = SSLgetAnnotations(x_7);
              n_3 = t;
              t = i_6;
              t = map_1_0(u_0, t);
              x_3 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, x_3, v_7);
              o_0 = t;
              t = SSLsetAnnotations(o_0, n_3);
              LocalPopChoice(r_9);
            }
          else
            {
              t = p_9;
              t = x_7;
            }
        }
      }
    else
      {
        ATerm t_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_CallT_3))
              {
                i_6 = ATgetArgument(t, 0);
                {
                  ATerm x_9 = ATgetArgument(t, 1);
                }
                {
                  ATerm z_9 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_9);
            t = i_6;
            if(match_cons(t, sym_SVar_1))
              {
                u_6 = ATgetArgument(t, 0);
                {
                  ATerm d_10 = t;
                  int e_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_8 = NULL,c_8 = NULL,g_8 = NULL;
                      t = term_m_8;
                      b_8 = t;
                      t = (ATerm) ATmakeAppl(sym_SDefT_4, u_6, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
                      c_8 = t;
                      t = term_f_10;
                      g_8 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_m_8, (ATerm)ATmakeAppl(sym_SDefT_4, u_6, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_f_10);
                      t = z_5(b_8, c_8, g_8, t);
                      t = x_7;
                      LocalPopChoice(e_10);
                    }
                  else
                    {
                      t = d_10;
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
            t = t_9;
            t = x_7;
          }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    c_10 = t;
    if(match_cons(t, sym_Let_2))
      {
        a_10 = ATgetArgument(t, 0);
        b_10 = ATgetArgument(t, 1);
        {
          ATerm g_10 = t;
          int h_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_4 = NULL,y_4 = NULL,p_0 = NULL;
              t = SSLgetAnnotations(c_10);
              v_4 = t;
              t = a_10;
              t = filter_1_0(w_0, t);
              y_4 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, y_4, b_10);
              p_0 = t;
              t = SSLsetAnnotations(p_0, v_4);
              LocalPopChoice(h_10);
            }
          else
            {
              t = g_10;
              t = c_10;
            }
        }
      }
    else
      {
        t = c_10;
      }
    return(t);
  }
  t = scope_2_0(r_0, t_0, t);
  return(t);
}
ATerm map_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  static ATerm g_11 (ATerm t)
  {
    ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
    d_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_11;
      }
    else
      {
        ATerm j_5 = NULL,s_5 = NULL,t_5 = NULL,s_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_11 = ATgetFirst((ATermList) t);
            f_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_11);
        j_5 = t;
        t = e_11;
        t = i_100(t);
        s_5 = t;
        t = f_11;
        t = g_11(t);
        t_5 = t;
        t = (ATerm) ATinsert(CheckATermList(t_5), s_5);
        s_0 = t;
        t = SSLsetAnnotations(s_0, j_5);
      }
    return(t);
  }
  t = g_11(t);
  return(t);
}
ATerm sboundin_3_0 (ATerm e_87 (ATerm), ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  u_17 = t;
  if(match_cons(t, sym_Let_2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
      {
        ATerm e_6 = NULL,p_6 = NULL,q_6 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(u_17);
        e_6 = t;
        t = v_17;
        t = e_87(t);
        p_6 = t;
        t = w_17;
        t = e_87(t);
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
          v_17 = ATgetArgument(t, 0);
          w_17 = ATgetArgument(t, 1);
          t_17 = ATgetArgument(t, 2);
          {
            ATerm t_7 = NULL,f_8 = NULL,h_8 = NULL,i_8 = NULL,a_1 = NULL;
            t = SSLgetAnnotations(u_17);
            t_7 = t;
            t = v_17;
            t = g_87(t);
            f_8 = t;
            t = w_17;
            t = g_87(t);
            h_8 = t;
            t = t_17;
            t = e_87(t);
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
              v_17 = ATgetArgument(t, 0);
              w_17 = ATgetArgument(t, 1);
              t_17 = ATgetArgument(t, 2);
              s_17 = ATgetArgument(t, 3);
              {
                ATerm u_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,d_9 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(u_17);
                u_8 = t;
                t = v_17;
                t = g_87(t);
                z_8 = t;
                t = w_17;
                t = g_87(t);
                a_9 = t;
                t = t_17;
                t = g_87(t);
                b_9 = t;
                t = s_17;
                t = e_87(t);
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
                  v_17 = ATgetArgument(t, 0);
                  w_17 = ATgetArgument(t, 1);
                  t_17 = ATgetArgument(t, 2);
                  s_17 = ATgetArgument(t, 3);
                  {
                    ATerm q_9 = NULL,j_10 = NULL,k_10 = NULL,n_10 = NULL,o_10 = NULL,e_1 = NULL;
                    t = SSLgetAnnotations(u_17);
                    q_9 = t;
                    t = v_17;
                    t = g_87(t);
                    j_10 = t;
                    t = w_17;
                    t = g_87(t);
                    k_10 = t;
                    t = t_17;
                    t = g_87(t);
                    n_10 = t;
                    t = s_17;
                    t = e_87(t);
                    o_10 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, j_10, k_10, n_10, o_10);
                    e_1 = t;
                    t = SSLsetAnnotations(e_1, q_9);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      v_17 = ATgetArgument(t, 0);
                      w_17 = ATgetArgument(t, 1);
                      t_17 = ATgetArgument(t, 2);
                      {
                        ATerm n_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,f_1 = NULL;
                        t = SSLgetAnnotations(u_17);
                        n_11 = t;
                        t = v_17;
                        t = g_87(t);
                        r_11 = t;
                        t = w_17;
                        t = g_87(t);
                        s_11 = t;
                        t = t_17;
                        t = g_87(t);
                        t_11 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, r_11, s_11, t_11);
                        f_1 = t;
                        t = SSLsetAnnotations(f_1, n_11);
                      }
                    }
                  else
                    {
                      ATerm k_12 = NULL,p_12 = NULL,r_12 = NULL,g_1 = NULL;
                      if(match_cons(t, sym_Rec_2))
                        {
                          v_17 = ATgetArgument(t, 0);
                          w_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(u_17);
                      k_12 = t;
                      t = v_17;
                      t = g_87(t);
                      p_12 = t;
                      t = w_17;
                      t = e_87(t);
                      r_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Rec_2, p_12, r_12);
                      g_1 = t;
                      t = SSLsetAnnotations(g_1, k_12);
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm e_19 = NULL;
  ATerm i_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_19 = ATgetArgument(t, 0);
          {
            ATerm p_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_10);
      t = e_19;
    }
  else
    {
      t = i_10;
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
static ATerm z_0 (ATerm t)
{
  ATerm s_19 = NULL;
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_19 = ATgetArgument(t, 0);
          {
            ATerm v_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_10);
      t = s_19;
    }
  else
    {
      t = q_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_19;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm o_18 = NULL;
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm y_10 = ATgetArgument(t, 0);
          o_18 = ATgetArgument(t, 1);
          {
            ATerm z_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_10);
      t = o_18;
      t = map_1_0(x_0, t);
    }
  else
    {
      t = w_10;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm a_11 = ATgetArgument(t, 0);
          o_18 = ATgetArgument(t, 1);
          {
            ATerm b_11 = ATgetArgument(t, 2);
          }
          {
            ATerm c_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = o_18;
      t = map_1_0(z_0, t);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm x_19 = NULL;
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_19 = ATgetArgument(t, 0);
          {
            ATerm j_11 = ATgetArgument(t, 1);
          }
          {
            ATerm k_11 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_11);
      t = x_19;
    }
  else
    {
      t = h_11;
      if(match_cons(t, sym_SDefT_4))
        {
          x_19 = ATgetArgument(t, 0);
          {
            ATerm l_11 = ATgetArgument(t, 1);
          }
          {
            ATerm m_11 = ATgetArgument(t, 2);
          }
          {
            ATerm o_11 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_19;
    }
  return(t);
}
static ATerm h_6 (ATerm k_23, ATerm j_23, ATerm t)
{
  t = k_23;
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm j_6 (ATerm c_103 (ATerm), ATerm l_47, ATerm k_47, ATerm t)
{
  static ATerm w_20 (ATerm t)
  {
    ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
    r_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_47;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_20 = ATgetFirst((ATermList) t);
            t_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_20;
              {
                static ATerm j_1 (ATerm t)
                {
                  t = k_47;
                  return(t);
                }
                t = n_6(c_103, j_1, s_20, t_20, t);
              }
              t = w_20(t);
              LocalPopChoice(q_11);
            }
          else
            {
              t = p_11;
              {
                ATerm l_13 = NULL,r_13 = NULL,u_1 = NULL;
                t = SSLgetAnnotations(r_20);
                l_13 = t;
                t = t_20;
                t = w_20(t);
                r_13 = t;
                t = (ATerm) ATinsert(CheckATermList(r_13), s_20);
                u_1 = t;
                t = SSLsetAnnotations(u_1, l_13);
              }
            }
        }
      }
    return(t);
  }
  t = l_47;
  t = w_20(t);
  return(t);
}
ATerm foldr_3_0 (ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_21;
      t = h_106(t);
    }
  else
    {
      ATerm g_21 = NULL,h_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_21 = ATgetFirst((ATermList) t);
          d_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_21;
      t = j_106(t);
      g_21 = t;
      t = d_21;
      t = foldr_3_0(h_106, i_106, j_106, t);
      h_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_21, h_21);
      t = i_106(t);
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym__2))
    {
      h_14 = ATgetArgument(t, 0);
      i_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(p_1, h_14, i_14, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm l_14 = NULL;
  if(match_cons(t, sym__2))
    {
      l_14 = ATgetArgument(t, 0);
      if((l_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(s_1, z_14, a_15, t);
  return(t);
}
static ATerm s_1 (ATerm t)
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
ATerm free_vars_3_0 (ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm m_22 (ATerm t)
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_109(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        {
          ATerm w_11 = t;
          int x_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_21 = NULL,q_21 = NULL,b_14 = NULL,c_14 = NULL;
              n_21 = t;
              t = z_109(t);
              q_21 = t;
              t = n_21;
              {
                static ATerm k_1 (ATerm t)
                {
                  ATerm u_21 = NULL;
                  t = m_22(t);
                  u_21 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_21, q_21);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_110(k_1, m_22, l_1, t);
              }
              c_14 = t;
              t = SSL_explode_term(c_14);
              if(match_cons(t, sym__2))
                {
                  ATerm y_11 = ATgetArgument(t, 0);
                  b_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_14;
              t = foldr_3_0(m_1, o_1, _id, t);
              LocalPopChoice(x_11);
            }
          else
            {
              t = w_11;
              {
                ATerm o_14 = NULL,p_14 = NULL;
                p_14 = t;
                t = SSL_explode_term(p_14);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_11 = ATgetArgument(t, 0);
                    o_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_14;
                t = foldr_3_0(q_1, r_1, m_22, t);
              }
            }
        }
      }
    return(t);
  }
  t = m_22(t);
  return(t);
}
static ATerm l_6 (ATerm a_41, ATerm b_41, ATerm t)
{
  ATerm o_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_41, b_41);
  t = m_7(a_41, b_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_22 = ATgetFirst((ATermList) t);
      {
        ATerm a_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_22;
  return(t);
}
ATerm Definition_0_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL;
  u_23 = t;
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      {
        ATerm b_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_15 = NULL,b_16 = NULL,c_16 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, v_23, (ATerm) ATempty);
        b_16 = t;
        t = term_e_12;
        c_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_12, (ATerm) ATmakeAppl(sym__2, v_23, (ATerm) ATempty));
        t = l_6(c_16, b_16, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_12) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            v_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_15;
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        {
          ATerm g_12 = t;
          int h_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_16 = NULL,y_16 = NULL,z_16 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, v_23, (ATerm) ATempty);
              y_16 = t;
              t = term_e_12;
              z_16 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_12, (ATerm) ATmakeAppl(sym__2, v_23, (ATerm) ATempty));
              t = l_6(z_16, y_16, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm i_12 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_12) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  o_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_16;
              LocalPopChoice(h_12);
            }
          else
            {
              t = g_12;
              {
                ATerm i_17 = NULL,n_17 = NULL,o_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, v_23, (ATerm) ATempty);
                n_17 = t;
                t = term_e_12;
                o_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_12, (ATerm) ATmakeAppl(sym__2, v_23, (ATerm) ATempty));
                t = l_6(o_17, n_17, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm j_12 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_12) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    i_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_17;
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm z_100 (ATerm), ATerm t)
{
  static ATerm w_24 (ATerm t)
  {
    ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
    v_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_24 = ATgetFirst((ATermList) t);
        u_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_18 = NULL,i_18 = NULL,w_1 = NULL;
          t = SSLgetAnnotations(v_24);
          f_18 = t;
          t = u_24;
          t = w_24(t);
          i_18 = t;
          t = (ATerm) ATinsert(CheckATermList(i_18), t_24);
          w_1 = t;
          t = SSLsetAnnotations(w_1, f_18);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_24;
        t = z_100(t);
      }
    return(t);
  }
  t = w_24(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_24;
    }
  else
    {
      static ATerm t_1 (ATerm t)
      {
        t = not_null(d_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_24 = ATgetFirst((ATermList) t);
          if(((d_24 != NULL) && (d_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_24;
      t = at_end_1_0(t_1, t);
    }
  return(t);
}
static ATerm i_25 (ATerm a_25, ATerm t)
{
  ATerm b_25 = NULL;
  t = SSL_explode_term(a_25);
  if(match_cons(t, sym__2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  f_25 = t;
  if(match_cons(t, sym__2))
    {
      d_25 = ATgetArgument(t, 0);
      e_25 = ATgetArgument(t, 1);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_1 (ATerm t)
            {
              t = e_25;
              return(t);
            }
            t = d_25;
            t = at_end_1_0(v_1, t);
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            t = i_25(f_25, t);
          }
      }
    }
  else
    {
      t = i_25(f_25, t);
    }
  return(t);
}
static ATerm n_6 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm p_47, ATerm o_47, ATerm t)
{
  t = g_103(t);
  {
    static ATerm x_1 (ATerm t)
    {
      ATerm j_25 = NULL;
      j_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_47, j_25);
      t = f_103(t);
      return(t);
    }
    t = fetch_1_0(x_1, t);
  }
  t = o_47;
  return(t);
}
static ATerm o_6 (ATerm x_102 (ATerm), ATerm j_47, ATerm i_47, ATerm t)
{
  static ATerm z_25 (ATerm t)
  {
    ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
    u_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_25 = ATgetFirst((ATermList) t);
            w_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_25;
              {
                static ATerm z_1 (ATerm t)
                {
                  t = i_47;
                  return(t);
                }
                t = n_6(x_102, z_1, v_25, w_25, t);
              }
              t = z_25(t);
              LocalPopChoice(q_12);
            }
          else
            {
              t = o_12;
              {
                ATerm u_18 = NULL,b_19 = NULL,y_1 = NULL;
                t = SSLgetAnnotations(u_25);
                u_18 = t;
                t = w_25;
                t = z_25(t);
                b_19 = t;
                t = (ATerm) ATinsert(CheckATermList(b_19), v_25);
                y_1 = t;
                t = SSLsetAnnotations(y_1, u_18);
              }
            }
        }
      }
    return(t);
  }
  t = j_47;
  t = z_25(t);
  return(t);
}
ATerm genzip_4_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm o_92 (ATerm), ATerm t)
{
  static ATerm h_26 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_92(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        {
          ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,f_2 = NULL;
          t = m_92(t);
          g_26 = t;
          if(match_cons(t, sym__2))
            {
              c_26 = ATgetArgument(t, 0);
              d_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_26);
          b_26 = t;
          t = c_26;
          t = o_92(t);
          e_26 = t;
          t = d_26;
          t = h_26(t);
          f_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_26, f_26);
          f_2 = t;
          t = SSLsetAnnotations(f_2, b_26);
          t = n_92(t);
        }
      }
    return(t);
  }
  t = h_26(t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_12 = ATgetArgument(t, 0);
      if(((ATgetType(u_12) != AT_LIST) || !(ATisEmpty(u_12))))
        _fail(t);
      {
        ATerm v_12 = ATgetArgument(t, 1);
        if(((ATgetType(v_12) != AT_LIST) || !(ATisEmpty(v_12))))
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
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      if(((ATgetType(w_12) == AT_LIST) && !(ATisEmpty(w_12))))
        {
          r_26 = ATgetFirst((ATermList) w_12);
          s_26 = (ATerm) ATgetNext((ATermList) w_12);
        }
      else
        _fail(t);
      {
        ATerm x_12 = ATgetArgument(t, 1);
        if(((ATgetType(x_12) == AT_LIST) && !(ATisEmpty(x_12))))
          {
            t_26 = ATgetFirst((ATermList) x_12);
            u_26 = (ATerm) ATgetNext((ATermList) x_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_26, t_26), (ATerm) ATmakeAppl(sym__2, s_26, u_26));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm v_26 = NULL,a_27 = NULL;
  if(match_cons(t, sym__2))
    {
      v_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_27), v_26);
  return(t);
}
static ATerm t_6 (ATerm w_650, ATerm b_651, ATerm a_63, ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  t = SSL_explode_term(b_651);
  if(match_cons(t, sym__2))
    {
      j_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_650);
  if(match_cons(t, sym__2))
    {
      if((j_26 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_26, l_26);
  t = genzip_4_0(d_2, e_2, h_2, _id, t);
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_26, a_63);
  t = conc_0_0(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm o_27 = NULL;
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_27);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,f_5 = NULL;
  s_27 = t;
  if(match_cons(t, sym__2))
    {
      q_27 = ATgetArgument(t, 0);
      r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  p_27 = t;
  t = r_27;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
  f_5 = t;
  t = SSLsetAnnotations(f_5, p_27);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm m_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,w_28 = NULL;
  m_28 = t;
  if(match_cons(t, sym__2))
    {
      r_28 = ATgetArgument(t, 0);
      s_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_28 = ATgetFirst((ATermList) t);
      w_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_29(r_28, s_28, m_28, t);
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_28), t_28), w_28);
          }
      }
    }
  else
    {
      t = s_29(r_28, s_28, m_28, t);
    }
  return(t);
}
static ATerm s_29 (ATerm t_27, ATerm u_27, ATerm v_27, ATerm t)
{
  ATerm w_27 = NULL,z_27 = NULL,g_5 = NULL,c_28 = NULL,d_28 = NULL,f_28 = NULL,g_28 = NULL;
  t = SSLgetAnnotations(v_27);
  w_27 = t;
  t = u_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_28 = ATgetFirst((ATermList) t);
      g_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_28;
  if(match_cons(t, sym__2))
    {
      d_28 = ATgetArgument(t, 0);
      f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_28;
        if((d_28 != t))
          {
            _fail(t);
          }
        t = g_28;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = u_27;
        t = t_6(d_28, f_28, g_28, t);
      }
  }
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_27, z_27);
  g_5 = t;
  t = SSLsetAnnotations(g_5, w_27);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm p_29 = NULL;
  if(match_cons(t, sym__2))
    {
      p_29 = ATgetArgument(t, 0);
      if((p_29 != ATgetArgument(t, 1)))
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
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(l_2, m_2, r_2, t);
      LocalPopChoice(d_13);
    }
  else
    {
      t = c_13;
      {
        ATerm f_29 = NULL,l_29 = NULL,m_29 = NULL;
        f_29 = t;
        if(match_cons(t, sym__2))
          {
            l_29 = ATgetArgument(t, 0);
            m_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_29;
        t = o_6(s_2, l_29, m_29, t);
      }
    }
  return(t);
}
static ATerm v_6 (ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm i_64, ATerm f_64, ATerm m_64, ATerm j_64, ATerm g_64, ATerm h_64, ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,w_29 = NULL,x_29 = NULL,b_30 = NULL,f_30 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_64, j_64);
  t = r_120(t);
  t_29 = t;
  t = s_120(t);
  u_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_29, m_64);
  t = diff_0_0(t);
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_29, f_64);
  t = conc_0_0(t);
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_29, m_64);
  t = conc_0_0(t);
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_64, t_29, g_64);
  t = t_120(t);
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__5, x_29, b_30, j_64, f_30, h_64);
  return(t);
}
ATerm GnNext_3_0 (ATerm r_120 (ATerm), ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm t)
{
  ATerm j_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if(((ATgetType(e_13) == AT_LIST) && !(ATisEmpty(e_13))))
        {
          j_30 = ATgetFirst((ATermList) e_13);
          o_30 = (ATerm) ATgetNext((ATermList) e_13);
        }
      else
        _fail(t);
      p_30 = ATgetArgument(t, 1);
      q_30 = ATgetArgument(t, 2);
      r_30 = ATgetArgument(t, 3);
      s_30 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = v_6(r_120, s_120, t_120, j_30, o_30, p_30, q_30, r_30, s_30, t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm t)
{
  static ATerm t_30 (ATerm t)
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_94(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = m_94(t);
        t = t_30(t);
      }
    return(t);
  }
  t = t_30(t);
  return(t);
}
ATerm for_3_0 (ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm t)
{
  t = o_94(t);
  t = while_not_2_0(p_94, q_94, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  if(match_cons(t, sym__3))
    {
      z_30 = ATgetArgument(t, 0);
      a_31 = ATgetArgument(t, 1);
      b_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, z_30, z_30, a_31, b_31, (ATerm) ATempty);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm h_13 = ATgetArgument(t, 0);
      if(((ATgetType(h_13) != AT_LIST) || !(ATisEmpty(h_13))))
        _fail(t);
      {
        ATerm i_13 = ATgetArgument(t, 1);
      }
      {
        ATerm j_13 = ATgetArgument(t, 2);
      }
      e_31 = ATgetArgument(t, 3);
      f_31 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_31, f_31);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm o_120 (ATerm), ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t)
{
  ATerm y_30 = NULL;
  static ATerm x_2 (ATerm t)
  {
    ATerm k_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(o_120, p_120, q_120, t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = k_13;
        {
          ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
          if(match_cons(t, sym__5))
            {
              h_31 = ATgetArgument(t, 0);
              q_31 = ATgetArgument(t, 1);
              r_31 = ATgetArgument(t, 2);
              s_31 = ATgetArgument(t, 3);
              t_31 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = h_31;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_31 = ATgetFirst((ATermList) t);
              j_31 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, j_31, q_31, r_31, s_31, (ATerm) ATinsert(CheckATermList(t_31), i_31));
        }
      }
    return(t);
  }
  t = for_3_0(t_2, u_2, x_2, t);
  if(match_cons(t, sym__2))
    {
      y_30 = ATgetArgument(t, 0);
      {
        ATerm n_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_30;
  return(t);
}
static ATerm y_6 (ATerm s_99 (ATerm), ATerm l_39, ATerm j_39, ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  d_32 = t;
  t = s_99(t);
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_32, l_39, j_39);
  t = n_7(a_32, l_39, j_39, t);
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_32 = NULL;
        t = term_y_8;
        i_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_32, term_y_8);
        t = m_7(a_32, i_32, t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_32 = ATgetFirst((ATermList) t);
      c_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_32, term_y_8, (ATerm) ATinsert(CheckATermList(c_32), (ATerm) ATinsert(CheckATermList(b_32), l_39)));
  t = lookup_table_0_1(a_32, t);
  h_32 = t;
  t = term_y_8;
  e_32 = t;
  t = (ATerm) ATinsert(CheckATermList(c_32), (ATerm) ATinsert(CheckATermList(b_32), l_39));
  f_32 = t;
  t = h_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(e_32, f_32, g_32, t);
  t = d_32;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_e_12;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_e_12;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_e_12;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL;
  k_32 = t;
  {
    ATerm q_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDef_3))
          {
            l_32 = ATgetArgument(t, 0);
            {
              ATerm t_13 = ATgetArgument(t, 1);
            }
            {
              ATerm u_13 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_13);
        {
          ATerm y_32 = NULL,z_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, l_32, (ATerm) ATempty);
          y_32 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_13, k_32);
          z_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_32, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_v_13, k_32));
          t = y_6(y_2, y_32, z_32, t);
          t = k_32;
        }
      }
    else
      {
        t = q_13;
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  l_32 = ATgetArgument(t, 0);
                  {
                    ATerm y_13 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm z_13 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm a_14 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(x_13);
              {
                ATerm d_33 = NULL,j_33 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, l_32, (ATerm) ATempty);
                d_33 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_14, k_32);
                j_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_32, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_d_14, k_32));
                t = y_6(a_3, d_33, j_33, t);
                t = k_32;
              }
            }
          else
            {
              t = w_13;
              {
                ATerm p_33 = NULL,q_33 = NULL;
                if(match_cons(t, sym_SDefT_4))
                  {
                    l_32 = ATgetArgument(t, 0);
                    {
                      ATerm e_14 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm f_14 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm g_14 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, l_32, (ATerm) ATempty);
                p_33 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_14, k_32);
                q_33 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_32, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_j_14, k_32));
                t = y_6(d_3, p_33, q_33, t);
                t = k_32;
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
  ATerm y_35 = NULL,a_36 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm k_14 = ATgetArgument(t, 0);
      y_35 = ATgetArgument(t, 1);
      a_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_36), y_35);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm b_34 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      b_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_34);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_34 = NULL,f_34 = NULL,i_34 = NULL,k_34 = NULL,n_34 = NULL;
      e_34 = t;
      if(match_cons(t, sym_Let_2))
        {
          f_34 = ATgetArgument(t, 0);
          i_34 = ATgetArgument(t, 1);
          t = e_34;
          t = h_6(f_34, i_34, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              f_34 = ATgetArgument(t, 0);
              i_34 = ATgetArgument(t, 1);
              k_34 = ATgetArgument(t, 2);
              t = i_34;
              t = map_1_0(i_3, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  f_34 = ATgetArgument(t, 0);
                  i_34 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, f_34);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_34 = ATgetArgument(t, 0);
                      i_34 = ATgetArgument(t, 1);
                      k_34 = ATgetArgument(t, 2);
                      n_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_34;
                  t = map_1_0(k_3, t);
                }
            }
        }
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = Bind7_0_0(t);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm c_35 = NULL;
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_35 = ATgetArgument(t, 0);
          {
            ATerm s_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_14);
      t = c_35;
    }
  else
    {
      t = q_14;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_35;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm t_35 = NULL;
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_35 = ATgetArgument(t, 0);
          {
            ATerm v_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_14);
      t = t_35;
    }
  else
    {
      t = t_14;
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
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm x_33 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_w_14), x_33, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(Definition_0_0, e_3, f_3, t);
  return(t);
}
static ATerm m_7 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm b_36 = NULL;
  t = lookup_table_0_1(i_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(j_42, b_36, t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,o_36 = NULL,p_36 = NULL,l_5 = NULL;
  p_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_36 = ATgetFirst((ATermList) t);
      k_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_36);
  i_36 = t;
  t = j_36;
  t = v_73(t);
  l_36 = t;
  t = k_36;
  t = w_73(t);
  o_36 = t;
  t = (ATerm) ATinsert(CheckATermList(o_36), l_36);
  l_5 = t;
  t = SSLsetAnnotations(l_5, i_36);
  return(t);
}
static ATerm z_6 (ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm q_36 = NULL;
  t = SSL_fputc(k_31, l_31);
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_36);
  return(t);
}
static ATerm a_7 (ATerm c_30, ATerm d_30, ATerm t)
{
  ATerm r_36 = NULL;
  t = SSL_write_term_to_stream_text(c_30, d_30);
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_36);
  return(t);
}
static ATerm c_7 (ATerm j_95 (ATerm), ATerm n_208, ATerm i_30, ATerm t)
{
  ATerm s_36 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_208, term_x_14);
  t = g_7(t);
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_36, i_30);
  t = j_95(t);
  t = fclose_0_0(t);
  t = i_30;
  return(t);
}
static ATerm b_7 (ATerm y_29, ATerm z_29, ATerm t)
{
  ATerm t_36 = NULL;
  t = SSL_write_term_to_stream_baf(y_29, z_29);
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_36);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_14 = ATgetArgument(t, 0);
      if(match_cons(y_14, sym_Stream_1))
        {
          g_37 = ATgetArgument(y_14, 0);
        }
      else
        _fail(t);
      h_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(g_37, h_37, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_15 = ATgetArgument(t, 0);
      if(match_cons(c_15, sym_Stream_1))
        {
          o_37 = ATgetArgument(c_15, 0);
        }
      else
        _fail(t);
      p_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(o_37, p_37, t);
  j_37 = t;
  t = term_d_15;
  k_37 = t;
  t = j_37;
  if(match_cons(t, sym_Stream_1))
    {
      n_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_15, j_37);
  t = z_6(k_37, n_37, t);
  return(t);
}
ATerm output_1_0 (ATerm m_116 (ATerm), ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  t = m_116(t);
  x_36 = t;
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_36 = NULL,b_37 = NULL;
        t = term_g_15;
        y_36 = t;
        t = term_h_15;
        b_37 = t;
        t = term_i_15;
        t = m_7(y_36, b_37, t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        t = term_j_15;
      }
  }
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_37 = NULL,f_37 = NULL;
        t = term_g_15;
        c_37 = t;
        t = term_m_15;
        f_37 = t;
        t = term_n_15;
        t = m_7(c_37, f_37, t);
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        LocalPopChoice(l_15);
        if(match_cons(t, sym__2))
          {
            ATerm o_15 = ATgetArgument(t, 0);
            ATerm p_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_7(l_3, w_36, x_36, t);
      }
    else
      {
        t = k_15;
        if(match_cons(t, sym__2))
          {
            ATerm q_15 = ATgetArgument(t, 0);
            ATerm r_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_7(r_3, w_36, x_36, t);
      }
  }
  return(t);
}
static ATerm h_38 (ATerm z_37, ATerm t)
{
  t = SSL_fclose(z_37);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  f_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_38 = ATgetArgument(t, 0);
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_38);
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
            t = h_38(f_38, t);
          }
      }
    }
  else
    {
      t = h_38(f_38, t);
    }
  return(t);
}
static ATerm d_7 (ATerm e_30, ATerm t)
{
  t = SSL_read_term_from_stream(e_30);
  return(t);
}
static ATerm e_7 (ATerm o_56, ATerm p_56, ATerm t)
{
  t = SSL_strcat(o_56, p_56);
  return(t);
}
static ATerm f_7 (ATerm m_31, ATerm n_31, ATerm t)
{
  ATerm i_38 = NULL;
  t = SSL_fopen(m_31, n_31);
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_38);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_38 = NULL;
  t = SSL_stdin_stream();
  l_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_38);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_38 = NULL;
  t = SSL_stdout_stream();
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_38);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_38 = NULL;
  t = SSL_stderr_stream();
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_38);
  return(t);
}
static ATerm z_40 (ATerm v_38, ATerm t)
{
  ATerm w_38 = NULL;
  t = SSL_explode_term(v_38);
  if(match_cons(t, sym__2))
    {
      ATerm u_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_15 = ATgetArgument(t, 1);
        if(((ATgetType(w_15) == AT_LIST) && !(ATisEmpty(w_15))))
          {
            w_38 = ATgetFirst((ATermList) w_15);
            {
              ATerm x_15 = (ATerm) ATgetNext((ATermList) w_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_38;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_38;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_38;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_38;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_41 (ATerm z_38, ATerm a_39, ATerm b_39, ATerm t)
{
  ATerm c_39 = NULL,o_39 = NULL,p_39 = NULL,t_39 = NULL,p_5 = NULL;
  t = SSLgetAnnotations(b_39);
  p_39 = t;
  t = z_38;
  if(match_cons(t, sym_Path_1))
    {
      t_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_39, a_39);
  p_5 = t;
  t = SSLsetAnnotations(p_5, p_39);
  if(match_cons(t, sym__2))
    {
      c_39 = ATgetArgument(t, 0);
      o_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(c_39, o_39, t);
  return(t);
}
static ATerm h_41 (ATerm v_39, ATerm w_39, ATerm y_39, ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,g_40 = NULL,q_5 = NULL;
  t = SSLgetAnnotations(y_39);
  b_40 = t;
  t = SSL_is_string(v_39);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_40, w_39);
  q_5 = t;
  t = SSLsetAnnotations(q_5, b_40);
  if(match_cons(t, sym__2))
    {
      z_39 = ATgetArgument(t, 0);
      a_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(z_39, a_40, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm r_40 = NULL,x_40 = NULL,y_40 = NULL;
  r_40 = t;
  if(match_cons(t, sym__2))
    {
      x_40 = ATgetArgument(t, 0);
      y_40 = ATgetArgument(t, 1);
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_40(r_40, t);
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            {
              ATerm a_16 = t;
              int d_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_41(x_40, y_40, r_40, t);
                  LocalPopChoice(d_16);
                }
              else
                {
                  t = a_16;
                  t = h_41(x_40, y_40, r_40, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_40(r_40, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_41 = NULL,n_41 = NULL,o_41 = NULL,w_41 = NULL;
  w_41 = t;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_41, term_g_16);
        t = g_7(t);
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        {
          ATerm e_20 = NULL,m_20 = NULL;
          t = term_h_16;
          m_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_16, w_41);
          t = e_7(m_20, w_41, t);
          e_20 = t;
          t = SSL_perror(e_20);
          _fail(t);
        }
      }
  }
  n_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(o_41, t);
  j_41 = t;
  t = n_41;
  t = fclose_0_0(t);
  t = j_41;
  return(t);
}
ATerm input_1_0 (ATerm n_116 (ATerm), ATerm t)
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_41 = NULL,a_42 = NULL;
      t = term_g_15;
      z_41 = t;
      t = term_k_16;
      a_42 = t;
      t = term_l_16;
      t = m_7(z_41, a_42, t);
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      t = term_m_16;
    }
  t = ReadFromFile_0_0(t);
  t = n_116(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,k_42 = NULL,l_42 = NULL;
  f_42 = t;
  t = term_o_8;
  t = whoami_0_0(t);
  g_42 = t;
  t = term_n_16;
  k_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_16), g_42), term_p_16);
  l_42 = t;
  t = SSL_printnl(k_42, l_42);
  t = term_r_16;
  h_42 = t;
  t = SSL_exit(h_42);
  t = f_42;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm n_42 = NULL;
  n_42 = t;
  if(match_string(t, "-k"))
    {
      t = n_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_42;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
  p_42 = t;
  t = SSL_string_to_int(p_42);
  q_42 = t;
  t = term_s_16;
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_16, q_42);
  t = p_7(r_42, q_42, t);
  t = p_42;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_t_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, z_3, k_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm t_42 = NULL;
  t_42 = t;
  if(match_string(t, "-S"))
    {
      t = t_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_42;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL;
  t = term_u_16;
  w_42 = t;
  t = term_v_16;
  x_42 = t;
  t = term_w_16;
  t = p_7(w_42, x_42, t);
  t = term_x_16;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_a_17;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
  y_42 = t;
  t = SSL_string_to_int(y_42);
  z_42 = t;
  t = term_u_16;
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_16, z_42);
  t = p_7(a_43, z_42, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_42);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_b_17;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL;
  t = term_c_17;
  b_43 = t;
  t = term_o_8;
  c_43 = t;
  t = term_d_17;
  t = p_7(b_43, c_43, t);
  t = term_e_17;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_4, n_4, o_4, t);
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_4, q_4, s_4, t);
            LocalPopChoice(k_17);
          }
        else
          {
            t = j_17;
            t = Option_3_0(t_4, u_4, w_4, t);
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL;
  t = term_g_15;
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_15, f_35, g_35);
  t = lookup_table_0_1(d_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(f_35, g_35, e_43, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_15, f_35, g_35);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
      t = term_o_8;
      t = e_0(t);
      q_43 = t;
      t = term_l_17;
      r_43 = t;
      t = term_m_17;
      s_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_17, term_m_17, q_43);
      t = n_7(r_43, s_43, q_43, t);
      _fail(t);
    }
  else
    {
      ATerm x_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_43 = ATgetFirst((ATermList) t);
          n_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_43;
      t = c_0(t);
      t = term_o_8;
      t = d_0(t);
      x_43 = t;
      t = (ATerm) ATinsert(CheckATermList(n_43), x_43);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm c_44 = NULL;
  c_44 = t;
  if(match_string(t, "-o"))
    {
      t = c_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_44;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL;
  d_44 = t;
  t = term_h_15;
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_15, d_44);
  t = p_7(e_44, d_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_44);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, z_4, a_5, t);
  return(t);
}
static ATerm n_7 (ATerm p_40, ATerm q_40, ATerm o_40, ATerm t)
{
  ATerm g_44 = NULL,o_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_40, q_40);
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_17 = ATgetArgument(t, 0);
            ATerm y_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_40, q_40);
        t = m_7(p_40, q_40, t);
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        t = (ATerm) ATempty;
      }
  }
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_40, q_40, (ATerm) ATinsert(CheckATermList(o_44), o_40));
  t = lookup_table_0_1(p_40, t);
  v_44 = t;
  t = (ATerm) ATinsert(CheckATermList(o_44), o_40);
  t_44 = t;
  t = v_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(q_40, t_44, u_44, t);
  t = g_44;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_45 = NULL,w_45 = NULL,x_45 = NULL,a_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
      t = term_o_8;
      t = m_0(t);
      b_46 = t;
      t = term_l_17;
      c_46 = t;
      t = term_m_17;
      d_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_17, term_m_17, b_46);
      t = n_7(c_46, d_46, b_46, t);
      _fail(t);
    }
  else
    {
      ATerm l_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_45 = ATgetFirst((ATermList) t);
          w_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_45 = ATgetFirst((ATermList) t);
          a_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_45;
      t = k_0(t);
      t = x_45;
      t = l_0(t);
      l_46 = t;
      t = (ATerm) ATinsert(CheckATermList(a_46), l_46);
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm o_46 = NULL;
  o_46 = t;
  if(match_string(t, "-i"))
    {
      t = o_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_46;
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm p_46 = NULL,r_46 = NULL;
  p_46 = t;
  t = term_k_16;
  r_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_16, p_46);
  t = p_7(r_46, p_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_46);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, c_5, d_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_8;
  t = whoami_0_0(t);
  u_46 = t;
  t = term_n_16;
  w_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_18), u_46);
  x_46 = t;
  t = SSL_printnl(w_46, x_46);
  t = term_r_16;
  v_46 = t;
  t = SSL_exit(v_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL;
  t = term_g_15;
  y_46 = t;
  t = term_b_18;
  z_46 = t;
  t = term_c_18;
  t = m_7(y_46, z_46, t);
  return(t);
}
static ATerm h_7 (ATerm x_37, ATerm y_37, ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_37, y_37);
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      t = SSL_addr(x_37, y_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  b_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_47;
      t = f_106(t);
    }
  else
    {
      ATerm g_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_47 = ATgetFirst((ATermList) t);
          d_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_47;
      t = foldr_2_0(f_106, g_106, t);
      g_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_47, g_47);
      t = g_106(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_v_16;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm a_21 = NULL,j_21 = NULL;
  if(match_cons(t, sym__2))
    {
      a_21 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(a_21, j_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_47 = NULL,o_20 = NULL,p_20 = NULL;
  t = times_0_0(t);
  p_20 = t;
  t = SSL_explode_term(p_20);
  if(match_cons(t, sym__2))
    {
      ATerm g_18 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_20;
  t = foldr_2_0(e_5, h_5, t);
  n_47 = t;
  t = SSL_TicksToSeconds(n_47);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
  d_48 = t;
  if(match_cons(t, sym__2))
    {
      e_48 = ATgetArgument(t, 0);
      f_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_48;
        if((e_48 != t))
          {
            _fail(t);
          }
        t = d_48;
        LocalPopChoice(j_18);
      }
    else
      {
        t = h_18;
        t = (ATerm) ATmakeAppl(sym__2, e_48, f_48);
        {
          ATerm k_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_48, f_48);
              LocalPopChoice(l_18);
            }
          else
            {
              t = k_18;
              t = SSL_gtr(e_48, f_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_48, f_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  ATerm j_48 = NULL;
  j_48 = t;
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
        t = term_g_15;
        r_48 = t;
        t = term_u_16;
        s_48 = t;
        t = term_p_18;
        t = m_7(r_48, s_48, t);
        q_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_48, term_r_16);
        t = geq_0_0(t);
        t = j_48;
        t = z_96(t);
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        t = j_48;
      }
  }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,b_49 = NULL,c_49 = NULL;
  t = run_time_0_0(t);
  y_48 = t;
  t = term_o_8;
  t = whoami_0_0(t);
  z_48 = t;
  t = term_n_16;
  b_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_18), y_48), term_q_18), z_48);
  c_49 = t;
  t = SSL_printnl(b_49, c_49);
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_18), y_48), term_q_18), z_48));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_16;
  d_49 = t;
  t = SSL_exit(d_49);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL;
  q_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_49 = ATgetArgument(t, 0);
          {
            ATerm e_22 = NULL,f_6 = NULL;
            t = SSLgetAnnotations(q_49);
            e_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_49);
            f_6 = t;
            t = SSLsetAnnotations(f_6, e_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_116 (ATerm), ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_49 = NULL,j_49 = NULL;
      t = term_g_15;
      i_49 = t;
      t = term_v_18;
      j_49 = t;
      t = term_w_18;
      t = m_7(i_49, j_49, t);
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      t = fetch_1_0(k_5, t);
    }
  t = d_116(t);
  return(t);
}
static ATerm q_7 (ATerm h_44, ATerm i_44, ATerm j_44, ATerm t)
{
  ATerm s_49 = NULL;
  t = SSL_hashtable_put(j_44, h_44, i_44);
  s_49 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_49);
  return(t);
}
static ATerm r_7 (ATerm k_44, ATerm l_44, ATerm t)
{
  t = SSL_hashtable_get(l_44, k_44);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_42, ATerm t)
{
  ATerm b_50 = NULL;
  t = table_hashtable_0_0(t);
  b_50 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_22 = NULL;
        t = b_50;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_7(b_42, s_22, t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        {
          ATerm x_22 = NULL;
          t = b_42;
          t = table_create_0_0(t);
          t = b_50;
          if(match_cons(t, sym_Hashtable_1))
            {
              x_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_7(b_42, x_22, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm p_44, ATerm q_44, ATerm t)
{
  ATerm e_50 = NULL;
  t = SSL_hashtable_create(p_44, q_44);
  e_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_50);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,j_50 = NULL,k_50 = NULL;
  f_50 = t;
  t = term_z_18;
  j_50 = t;
  t = term_a_19;
  k_50 = t;
  t = f_50;
  t = new_hashtable_0_2(j_50, k_50, t);
  g_50 = t;
  t = f_50;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(f_50, g_50, h_50, t);
  t = f_50;
  return(t);
}
static ATerm j_7 (ATerm m_44, ATerm n_44, ATerm t)
{
  ATerm l_50 = NULL;
  t = SSL_hashtable_remove(n_44, m_44);
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_50);
  return(t);
}
static ATerm k_7 (ATerm r_44, ATerm t)
{
  ATerm m_50 = NULL;
  t = SSL_hashtable_destroy(r_44);
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_50);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm n_50 = NULL;
  t = SSL_table_hashtable();
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_50);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
  o_50 = t;
  t = table_hashtable_0_0(t);
  p_50 = t;
  t = lookup_table_0_1(o_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(r_50, t);
  t = p_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(o_50, q_50, t);
  t = o_50;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_50 = ATgetFirst((ATermList) t);
      u_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_50 = NULL,z_50 = NULL;
        static ATerm m_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_50)), not_null(z_50));
          return(t);
        }
        t = u_50;
        t = i_0(t);
        if(((y_50 != NULL) && (y_50 != t)))
          _fail(t);
        else
          y_50 = t;
        t = t_50;
        t = g_0(t);
        if(((z_50 != NULL) && (z_50 != t)))
          _fail(t);
        else
          z_50 = t;
        t = u_50;
        t = reverse_acc_2_0(g_0, m_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,s_9 = NULL;
  h_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_51);
  f_51 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_51);
  s_9 = t;
  t = SSLsetAnnotations(s_9, f_51);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm j_51 = NULL;
  j_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_51), term_c_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  ATerm d_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_51 = NULL,e_51 = NULL;
      t = term_g_15;
      d_51 = t;
      t = term_b_18;
      e_51 = t;
      t = term_c_18;
      t = m_7(d_51, e_51, t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = d_19;
      t = fetch_1_0(n_5, t);
    }
  t = term_g_19;
  t = echo_0_0(t);
  t = term_l_17;
  b_51 = t;
  t = term_m_17;
  c_51 = t;
  t = term_h_19;
  t = m_7(b_51, c_51, t);
  t = reverse_acc_2_0(_id, o_5, t);
  t = map_1_0(r_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  static ATerm h_52 (ATerm t)
  {
    ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
    e_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_52 = ATgetFirst((ATermList) t);
        g_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_19 = t;
      int j_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_23 = NULL,t_23 = NULL,u_9 = NULL;
          t = SSLgetAnnotations(e_52);
          c_23 = t;
          t = f_52;
          t = s_100(t);
          t_23 = t;
          t = (ATerm) ATinsert(CheckATermList(g_52), t_23);
          u_9 = t;
          t = SSLsetAnnotations(u_9, c_23);
          LocalPopChoice(j_19);
        }
      else
        {
          t = i_19;
          {
            ATerm k_25 = NULL,n_26 = NULL,v_9 = NULL;
            t = SSLgetAnnotations(e_52);
            k_25 = t;
            t = g_52;
            t = h_52(t);
            n_26 = t;
            t = (ATerm) ATinsert(CheckATermList(n_26), f_52);
            v_9 = t;
            t = SSLsetAnnotations(v_9, k_25);
          }
        }
    }
    return(t);
  }
  t = h_52(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL;
  l_52 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_52;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_19 = ATgetFirst((ATermList) t);
                ATerm n_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_52;
          }
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = (ATerm) ATinsert(ATempty, l_52);
      }
  }
  m_52 = t;
  t = term_j_15;
  n_52 = t;
  t = SSL_printnl(n_52, m_52);
  t = l_52;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  t = term_g_15;
  r_52 = t;
  t = term_b_18;
  s_52 = t;
  t = term_c_18;
  t = m_7(r_52, s_52, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL;
  t = term_o_19;
  t_52 = t;
  t = term_o_8;
  u_52 = t;
  t = term_p_19;
  t = p_7(t_52, u_52, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_q_19;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL;
  t = term_o_19;
  x_52 = t;
  t = term_o_8;
  y_52 = t;
  t = term_p_19;
  t = p_7(x_52, y_52, t);
  t = term_r_19;
  v_52 = t;
  t = term_o_8;
  w_52 = t;
  t = term_t_19;
  t = p_7(v_52, w_52, t);
  t = term_u_19;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, w_5, t);
      LocalPopChoice(y_19);
    }
  else
    {
      t = w_19;
      t = Option_3_0(x_5, y_5, a_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_118 (ATerm), ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,i_53 = NULL,j_53 = NULL,y_9 = NULL;
  d_53 = t;
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_20;
        t = g_118(t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
      }
  }
  t = d_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_53 = ATgetFirst((ATermList) t);
      g_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_53);
  e_53 = t;
  t = term_b_18;
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_18, f_53);
  t = p_7(j_53, f_53, t);
  t = g_53;
  {
    static ATerm t_53 (ATerm t)
    {
      ATerm c_20 = t;
      int d_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_20 = t;
          int g_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_53 = NULL;
              m_53 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_53;
              LocalPopChoice(g_20);
            }
          else
            {
              t = f_20;
              t = g_118(t);
              t = Cons_2_0(_id, t_53, t);
            }
          LocalPopChoice(d_20);
        }
      else
        {
          t = c_20;
          {
            ATerm p_53 = NULL,q_53 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_53 = ATgetFirst((ATermList) t);
                q_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_53), (ATerm) ATmakeAppl(sym_Undefined_1, p_53));
          }
        }
      return(t);
    }
    t = t_53(t);
  }
  i_53 = t;
  t = (ATerm) ATinsert(CheckATermList(i_53), (ATerm) ATmakeAppl(sym_Program_1, f_53));
  y_9 = t;
  t = SSLsetAnnotations(y_9, e_53);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm g_54 = NULL;
  g_54 = t;
  if(match_string(t, "--help"))
    {
      t = g_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_54;
        }
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL;
  t = term_v_18;
  h_54 = t;
  t = term_o_8;
  i_54 = t;
  t = term_h_20;
  t = p_7(h_54, i_54, t);
  t = term_i_20;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_j_20;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_118 (ATerm), ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
  a_54 = t;
  t = term_l_17;
  b_54 = t;
  t = term_k_20;
  t = lookup_table_0_1(b_54, t);
  f_54 = t;
  t = term_m_17;
  c_54 = t;
  t = (ATerm) ATempty;
  d_54 = t;
  t = f_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(c_54, d_54, e_54, t);
  t = a_54;
  {
    static ATerm b_6 (ATerm t)
    {
      ATerm l_20 = t;
      int n_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_118(t);
          LocalPopChoice(n_20);
        }
      else
        {
          t = l_20;
          {
            ATerm q_20 = t;
            int u_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_6, g_6, k_6, t);
                LocalPopChoice(u_20);
              }
            else
              {
                t = q_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_6, t);
  }
  {
    ATerm v_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_54 = NULL;
        t_54 = t;
        {
          ATerm y_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_27 = NULL;
              t = t_54;
              {
                ATerm e_21 = t;
                int f_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_27 = NULL,e_27 = NULL;
                    t = term_g_15;
                    d_27 = t;
                    t = term_v_18;
                    e_27 = t;
                    t = term_w_18;
                    t = m_7(d_27, e_27, t);
                    LocalPopChoice(f_21);
                  }
                else
                  {
                    t = e_21;
                    t = fetch_1_0(m_6, t);
                  }
              }
              t = t_54;
              t = default_system_usage_0_0(t);
              t = term_v_16;
              c_27 = t;
              t = SSL_exit(c_27);
              LocalPopChoice(z_20);
            }
          else
            {
              t = y_20;
              {
                ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
                t = term_g_15;
                j_27 = t;
                t = term_o_19;
                k_27 = t;
                t = term_i_21;
                t = m_7(j_27, k_27, t);
                t = t_54;
                t = default_system_about_0_0(t);
                t = term_v_16;
                i_27 = t;
                t = SSL_exit(i_27);
              }
            }
        }
        LocalPopChoice(x_20);
      }
    else
      {
        t = v_20;
        {
          ATerm k_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
              static ATerm r_6 (ATerm t)
              {
                ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL,l_10 = NULL;
                z_54 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_54 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_54);
                x_54 = t;
                t = y_54;
                if(((y_53 != NULL) && (y_53 != t)))
                  _fail(t);
                else
                  y_53 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_54);
                l_10 = t;
                t = SSLsetAnnotations(l_10, x_54);
                return(t);
              }
              t = fetch_1_0(r_6, t);
              t = term_n_16;
              v_54 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_53)), term_m_21);
              w_54 = t;
              t = SSL_printnl(v_54, w_54);
              t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_53)), term_m_21));
              t = default_system_usage_0_0(t);
              t = term_r_16;
              u_54 = t;
              t = SSL_exit(u_54);
              LocalPopChoice(l_21);
            }
          else
            {
              t = k_21;
            }
        }
      }
  }
  z_53 = t;
  t = term_l_17;
  t = table_destroy_0_0(t);
  t = z_53;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm h_116 (ATerm), ATerm i_116 (ATerm), ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
  t = parse_options_1_0(f_116, t);
  e_55 = t;
  t = term_o_21;
  t = table_create_0_0(t);
  t = term_o_21;
  f_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_21, term_p_21, e_55);
  t = lookup_table_0_1(f_55, t);
  i_55 = t;
  t = term_p_21;
  g_55 = t;
  t = i_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(g_55, e_55, h_55, t);
  t = e_55;
  t = h_116(t);
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_116, t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        {
          ATerm t_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_116(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_21);
            }
          else
            {
              t = t_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_6, i_7, l_7, t);
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            {
              ATerm a_22 = t;
              int b_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(b_22);
                }
              else
                {
                  t = a_22;
                  {
                    ATerm c_22 = t;
                    int d_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(o_7, s_7, u_7, t);
                        LocalPopChoice(d_22);
                      }
                    else
                      {
                        t = c_22;
                        {
                          ATerm f_22 = t;
                          int g_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(g_22);
                            }
                          else
                            {
                              t = f_22;
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
static ATerm w_6 (ATerm t)
{
  t = input_1_0(w_7, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--only-local", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
  l_55 = t;
  t = term_h_22;
  m_55 = t;
  t = term_o_8;
  n_55 = t;
  t = term_i_22;
  t = p_7(m_55, n_55, t);
  t = l_55;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL;
  t = term_m_15;
  o_55 = t;
  t = term_o_8;
  p_55 = t;
  t = term_k_22;
  t = p_7(o_55, p_55, t);
  t = term_l_22;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = output_1_0(y_7, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,u_10 = NULL,t_10 = NULL;
  y_55 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_55);
  r_55 = t;
  t = s_55;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_55 = ATgetFirst((ATermList) t);
      v_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_55);
  t_55 = t;
  t = v_55;
  t = Cons_2_0(z_7, a_8, t);
  w_55 = t;
  t = (ATerm) ATinsert(CheckATermList(w_55), u_55);
  t_10 = t;
  t = SSLsetAnnotations(t_10, t_55);
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_55);
  u_10 = t;
  t = SSLsetAnnotations(u_10, r_55);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,s_10 = NULL;
  c_56 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_56);
  z_55 = t;
  t = a_56;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_56 = NULL,e_56 = NULL;
        t = term_g_15;
        d_56 = t;
        t = term_h_22;
        e_56 = t;
        t = term_r_22;
        t = m_7(d_56, e_56, t);
        t = a_56;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = dead_def_elim_0_0(t);
      }
  }
  t = map_1_0(local_dead_def_elim_0_0, t);
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_56);
  s_10 = t;
  t = SSLsetAnnotations(s_10, z_55);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_6, default_usage_0_0, _id, w_6, t);
  return(t);
}
