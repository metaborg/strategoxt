#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_RDefT_4;
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
ATerm term_o_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_x_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_w_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_y_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_g_13;
ATerm term_k_11;
ATerm term_g_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_y_8;
ATerm term_m_8;
ATerm term_k_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_9);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_m_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_s_14);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_y_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_k_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_m_8);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_o_17);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_j_16);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_q_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_d_17);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__2, term_j_19, term_m_8);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym__2, term_m_19, term_m_8);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_m_8);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__3, term_c_17, term_d_17, (ATerm) ATempty);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_j_19);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, term_b_22, term_m_8);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local        do not eliminate top-level definitions", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_m_8);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_b_22);
}
#include <srts/init-stratego-application.h>
ATerm DefDead_0_0 (ATerm t);
ATerm filter_1_0 (ATerm w_104 (ATerm), ATerm t);
static ATerm y_5 (ATerm c_40, ATerm d_40, ATerm e_40, ATerm t);
static ATerm c_6 (ATerm u_39, ATerm v_39, ATerm t);
ATerm end_scope_1_0 (ATerm l_97 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_97 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm local_dead_def_elim_0_0 (ATerm t);
ATerm map_1_0 (ATerm d_98 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm h_6 (ATerm r_22, ATerm q_22, ATerm t);
static ATerm j_6 (ATerm x_100 (ATerm), ATerm a_46, ATerm z_45, ATerm t);
ATerm foldr_3_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm free_vars_3_0 (ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm l_6 (ATerm a_40, ATerm b_40, ATerm t);
ATerm Definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm u_98 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_21 (ATerm a_21, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm n_6 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm e_46, ATerm d_46, ATerm t);
static ATerm o_6 (ATerm s_100 (ATerm), ATerm y_45, ATerm x_45, ATerm t);
ATerm genzip_4_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm t_6 (ATerm j_641, ATerm o_641, ATerm p_61, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm p_25 (ATerm y_23, ATerm z_23, ATerm c_24, ATerm t);
static ATerm l_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm v_6 (ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm x_62, ATerm u_62, ATerm b_63, ATerm y_62, ATerm v_62, ATerm w_62, ATerm t);
ATerm GnNext_3_0 (ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm t);
ATerm for_3_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm t);
static ATerm y_6 (ATerm o_97 (ATerm), ATerm l_38, ATerm j_38, ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm RegisterDefinition_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
static ATerm m_7 (ATerm i_41, ATerm j_41, ATerm t);
ATerm Cons_2_0 (ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t);
static ATerm z_6 (ATerm k_30, ATerm l_30, ATerm t);
static ATerm a_7 (ATerm c_29, ATerm d_29, ATerm t);
static ATerm c_7 (ATerm f_93 (ATerm), ATerm i_204, ATerm i_29, ATerm t);
static ATerm b_7 (ATerm y_28, ATerm z_28, ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm output_1_0 (ATerm z_113 (ATerm), ATerm t);
static ATerm q_33 (ATerm k_33, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_7 (ATerm e_29, ATerm t);
static ATerm e_7 (ATerm d_55, ATerm e_55, ATerm t);
static ATerm f_7 (ATerm m_30, ATerm n_30, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_36 (ATerm i_34, ATerm t);
static ATerm m_36 (ATerm m_34, ATerm s_34, ATerm t_34, ATerm t);
static ATerm n_36 (ATerm g_35, ATerm k_35, ATerm n_35, ATerm t);
static ATerm g_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm a_114 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_7 (ATerm f_34, ATerm g_34, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_7 (ATerm p_39, ATerm q_39, ATerm o_39, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_7 (ATerm x_36, ATerm y_36, ATerm t);
ATerm foldr_2_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_94 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm need_help_1_0 (ATerm q_113 (ATerm), ATerm t);
static ATerm q_7 (ATerm w_42, ATerm x_42, ATerm y_42, ATerm t);
static ATerm r_7 (ATerm z_42, ATerm a_43, ATerm t);
ATerm lookup_table_0_1 (ATerm b_41, ATerm t);
ATerm new_hashtable_0_2 (ATerm e_43, ATerm f_43, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_7 (ATerm b_43, ATerm c_43, ATerm t);
static ATerm k_7 (ATerm g_43, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_98 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm t_115 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm parse_options_1_0 (ATerm s_115 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm y_7 (ATerm t);
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
        ATerm b_8 = ATgetArgument(t, 1);
      }
      {
        ATerm c_8 = ATgetArgument(t, 2);
      }
      {
        ATerm h_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL,m_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        b_1 = t;
        t = term_k_8;
        m_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        t = l_6(m_1, b_1, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = h_1;
        _fail(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        {
          ATerm m_2 = NULL,n_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          m_2 = t;
          t = term_k_8;
          n_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          t = l_6(n_2, m_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm l_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_8) != ATmakeSymbol("j_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_m_8;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,d_2 = NULL;
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
          d_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 = NULL,x_2 = NULL,a_3 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(a_2);
            t_2 = t;
            t = b_2;
            t = w_104(t);
            x_2 = t;
            t = d_2;
            t = filter_1_0(w_104, t);
            a_3 = t;
            t = (ATerm) ATinsert(CheckATermList(a_3), x_2);
            a_0 = t;
            t = SSLsetAnnotations(a_0, t_2);
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            t = d_2;
            t = filter_1_0(w_104, t);
          }
      }
    }
  return(t);
}
static ATerm y_5 (ATerm c_40, ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,o_2 = NULL,v_2 = NULL;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_40, d_40);
  t = m_7(c_40, d_40, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_8 = ATgetFirst((ATermList) t);
      h_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_40, d_40, (ATerm) ATinsert(CheckATermList(h_2), e_40));
  t = lookup_table_0_1(c_40, t);
  v_2 = t;
  t = (ATerm) ATinsert(CheckATermList(h_2), e_40);
  j_2 = t;
  t = v_2;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(d_40, j_2, o_2, t);
  t = i_2;
  return(t);
}
static ATerm c_6 (ATerm u_39, ATerm v_39, ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  z_2 = t;
  {
    ATerm r_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_39, v_39);
        t = m_7(u_39, v_39, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_8 = ATgetFirst((ATermList) t);
            y_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_8);
        {
          ATerm i_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, u_39, v_39, y_2);
          t = lookup_table_0_1(u_39, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              i_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_7(v_39, y_2, i_3, t);
          t = (ATerm) ATmakeAppl(sym__3, u_39, v_39, y_2);
        }
      }
    else
      {
        t = r_8;
        {
          ATerm l_3 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, u_39, v_39);
          t = lookup_table_0_1(u_39, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_7(v_39, l_3, t);
          t = (ATerm) ATmakeAppl(sym__2, u_39, v_39);
        }
      }
  }
  t = z_2;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
  s_3 = t;
  t = l_97(t);
  r_3 = t;
  {
    ATerm v_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 = NULL;
        t = term_y_8;
        x_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_3, term_y_8);
        t = m_7(r_3, x_3, t);
        LocalPopChoice(x_8);
      }
    else
      {
        t = v_8;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_3 = ATgetFirst((ATermList) t);
      o_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_3, term_y_8, o_3);
  t = lookup_table_0_1(r_3, t);
  v_3 = t;
  t = term_y_8;
  t_3 = t;
  t = v_3;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(t_3, o_3, u_3, t);
  t = p_3;
  {
    static ATerm n_0 (ATerm t)
    {
      ATerm y_3 = NULL;
      y_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_3, y_3);
      t = c_6(r_3, y_3, t);
      return(t);
    }
    t = map_1_0(n_0, t);
  }
  t = s_3;
  return(t);
}
ATerm restore_always_2_0 (ATerm c_89 (ATerm), ATerm d_89 (ATerm), ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_89(t);
      t = d_89(t);
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      t = d_89(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_97 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,j_4 = NULL,o_4 = NULL;
  c_4 = t;
  t = k_97(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, term_y_8);
  {
    ATerm b_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_9 = ATgetArgument(t, 0);
            ATerm i_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_8;
        s_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_4, term_y_8);
        t = m_7(b_4, s_4, t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = b_9;
        t = (ATerm) ATempty;
      }
  }
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_4, term_y_8, (ATerm) ATinsert(CheckATermList(d_4), (ATerm) ATempty));
  t = lookup_table_0_1(b_4, t);
  o_4 = t;
  t = term_y_8;
  e_4 = t;
  t = (ATerm) ATinsert(CheckATermList(d_4), (ATerm) ATempty);
  g_4 = t;
  t = o_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(e_4, g_4, j_4, t);
  t = c_4;
  return(t);
}
ATerm scope_2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm t)
{
  static ATerm q_0 (ATerm t)
  {
    t = end_scope_1_0(m_97, t);
    return(t);
  }
  t = begin_scope_1_0(m_97, t);
  t = restore_always_2_0(n_97, q_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_k_8;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm a_4 = NULL,f_4 = NULL,h_4 = NULL,i_4 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      a_4 = ATgetArgument(t, 0);
      {
        ATerm o_9 = ATgetArgument(t, 1);
      }
      {
        ATerm p_9 = ATgetArgument(t, 2);
      }
      {
        ATerm q_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, a_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  h_4 = t;
  t = term_t_9;
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, a_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_t_9);
  t = y_6(v_0, h_4, i_4, t);
  t = f_4;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_k_8;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm v_9 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_9;
    }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  static ATerm t_0 (ATerm t)
  {
    ATerm n_9 = NULL,r_9 = NULL,u_9 = NULL,t_7 = NULL,w_7 = NULL,x_7 = NULL,z_7 = NULL;
    z_7 = t;
    if(match_cons(t, sym_Let_2))
      {
        t_7 = ATgetArgument(t, 0);
        x_7 = ATgetArgument(t, 1);
        {
          ATerm w_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_3 = NULL,w_3 = NULL,o_0 = NULL;
              t = SSLgetAnnotations(z_7);
              j_3 = t;
              t = t_7;
              t = map_1_0(u_0, t);
              w_3 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, w_3, x_7);
              o_0 = t;
              t = SSLsetAnnotations(o_0, j_3);
              LocalPopChoice(x_9);
            }
          else
            {
              t = w_9;
              t = z_7;
            }
        }
      }
    else
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_CallT_3))
              {
                t_7 = ATgetArgument(t, 0);
                {
                  ATerm a_10 = ATgetArgument(t, 1);
                }
                {
                  ATerm b_10 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(z_9);
            t = t_7;
            if(match_cons(t, sym_SVar_1))
              {
                w_7 = ATgetArgument(t, 0);
                {
                  ATerm e_10 = t;
                  int f_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_8 = NULL,p_8 = NULL,w_8 = NULL;
                      t = term_k_8;
                      g_8 = t;
                      t = (ATerm) ATmakeAppl(sym_SDefT_4, w_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
                      p_8 = t;
                      t = term_g_10;
                      w_8 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_k_8, (ATerm)ATmakeAppl(sym_SDefT_4, w_7, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_g_10);
                      t = y_5(g_8, p_8, w_8, t);
                      t = z_7;
                      LocalPopChoice(f_10);
                    }
                  else
                    {
                      t = e_10;
                      t = z_7;
                    }
                }
              }
            else
              {
                t = z_7;
              }
          }
        else
          {
            t = y_9;
            t = z_7;
          }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    u_9 = t;
    if(match_cons(t, sym_Let_2))
      {
        n_9 = ATgetArgument(t, 0);
        r_9 = ATgetArgument(t, 1);
        {
          ATerm j_10 = t;
          int k_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_4 = NULL,y_4 = NULL,p_0 = NULL;
              t = SSLgetAnnotations(u_9);
              v_4 = t;
              t = n_9;
              t = filter_1_0(w_0, t);
              y_4 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, y_4, r_9);
              p_0 = t;
              t = SSLsetAnnotations(p_0, v_4);
              LocalPopChoice(k_10);
            }
          else
            {
              t = j_10;
              t = u_9;
            }
        }
      }
    else
      {
        t = u_9;
      }
    return(t);
  }
  t = scope_2_0(r_0, t_0, t);
  return(t);
}
ATerm map_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  static ATerm z_10 (ATerm t)
  {
    ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
    w_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_10;
      }
    else
      {
        ATerm h_5 = NULL,r_5 = NULL,s_5 = NULL,s_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_10 = ATgetFirst((ATermList) t);
            y_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_10);
        h_5 = t;
        t = x_10;
        t = d_98(t);
        r_5 = t;
        t = y_10;
        t = z_10(t);
        s_5 = t;
        t = (ATerm) ATinsert(CheckATermList(s_5), r_5);
        s_0 = t;
        t = SSLsetAnnotations(s_0, h_5);
      }
    return(t);
  }
  t = z_10(t);
  return(t);
}
ATerm sboundin_3_0 (ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  v_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
      {
        ATerm b_6 = NULL,k_6 = NULL,m_6 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(v_14);
        b_6 = t;
        t = w_14;
        t = a_85(t);
        k_6 = t;
        t = x_14;
        t = a_85(t);
        m_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, k_6, m_6);
        y_0 = t;
        t = SSLsetAnnotations(y_0, b_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_14 = ATgetArgument(t, 0);
          x_14 = ATgetArgument(t, 1);
          t_14 = ATgetArgument(t, 2);
          {
            ATerm o_7 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,c_1 = NULL;
            t = SSLgetAnnotations(v_14);
            o_7 = t;
            t = w_14;
            t = c_85(t);
            d_8 = t;
            t = x_14;
            t = c_85(t);
            e_8 = t;
            t = t_14;
            t = a_85(t);
            f_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, d_8, e_8, f_8);
            c_1 = t;
            t = SSLsetAnnotations(c_1, o_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              w_14 = ATgetArgument(t, 0);
              x_14 = ATgetArgument(t, 1);
              t_14 = ATgetArgument(t, 2);
              u_14 = ATgetArgument(t, 3);
              {
                ATerm s_8 = NULL,g_9 = NULL,h_9 = NULL,j_9 = NULL,k_9 = NULL,d_1 = NULL;
                t = SSLgetAnnotations(v_14);
                s_8 = t;
                t = w_14;
                t = c_85(t);
                g_9 = t;
                t = x_14;
                t = c_85(t);
                h_9 = t;
                t = t_14;
                t = c_85(t);
                j_9 = t;
                t = u_14;
                t = a_85(t);
                k_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, g_9, h_9, j_9, k_9);
                d_1 = t;
                t = SSLsetAnnotations(d_1, s_8);
              }
            }
          else
            {
              ATerm c_10 = NULL,h_10 = NULL,i_10 = NULL,e_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  w_14 = ATgetArgument(t, 0);
                  x_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(v_14);
              c_10 = t;
              t = w_14;
              t = c_85(t);
              h_10 = t;
              t = x_14;
              t = a_85(t);
              i_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, h_10, i_10);
              e_1 = t;
              t = SSLsetAnnotations(e_1, c_10);
            }
        }
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm h_15 = NULL;
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          h_15 = ATgetArgument(t, 0);
          {
            ATerm n_10 = ATgetArgument(t, 1);
          }
          {
            ATerm o_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_10);
      t = h_15;
    }
  else
    {
      t = l_10;
      if(match_cons(t, sym_SDefT_4))
        {
          h_15 = ATgetArgument(t, 0);
          {
            ATerm p_10 = ATgetArgument(t, 1);
          }
          {
            ATerm q_10 = ATgetArgument(t, 2);
          }
          {
            ATerm r_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = h_15;
    }
  return(t);
}
static ATerm h_6 (ATerm r_22, ATerm q_22, ATerm t)
{
  t = r_22;
  t = map_1_0(x_0, t);
  return(t);
}
static ATerm j_6 (ATerm x_100 (ATerm), ATerm a_46, ATerm z_45, ATerm t)
{
  static ATerm e_17 (ATerm t)
  {
    ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
    z_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_45;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_17 = ATgetFirst((ATermList) t);
            b_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_10 = t;
          int t_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_16;
              {
                static ATerm z_0 (ATerm t)
                {
                  t = z_45;
                  return(t);
                }
                t = n_6(x_100, z_0, a_17, b_17, t);
              }
              t = e_17(t);
              LocalPopChoice(t_10);
            }
          else
            {
              t = s_10;
              {
                ATerm e_11 = NULL,h_11 = NULL,p_1 = NULL;
                t = SSLgetAnnotations(z_16);
                e_11 = t;
                t = b_17;
                t = e_17(t);
                h_11 = t;
                t = (ATerm) ATinsert(CheckATermList(h_11), a_17);
                p_1 = t;
                t = SSLsetAnnotations(p_1, e_11);
              }
            }
        }
      }
    return(t);
  }
  t = a_46;
  t = e_17(t);
  return(t);
}
ATerm foldr_3_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,q_17 = NULL;
  k_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_17;
      t = u_103(t);
    }
  else
    {
      ATerm a_18 = NULL,c_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_17 = ATgetFirst((ATermList) t);
          q_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_17;
      t = w_103(t);
      a_18 = t;
      t = q_17;
      t = foldr_3_0(u_103, v_103, w_103, t);
      c_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_18, c_18);
      t = v_103(t);
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(k_1, e_12, f_12, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      if((h_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm r_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(o_1, r_12, u_12, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm c_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      if((c_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm u_18 (ATerm t)
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_107(t);
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        {
          ATerm a_11 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_18 = NULL,h_18 = NULL,r_11 = NULL,s_11 = NULL;
              g_18 = t;
              t = m_107(t);
              h_18 = t;
              t = g_18;
              {
                static ATerm a_1 (ATerm t)
                {
                  ATerm j_18 = NULL;
                  t = u_18(t);
                  j_18 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_18, h_18);
                  t = diff_0_0(t);
                  return(t);
                }
                t = n_107(a_1, u_18, f_1, t);
              }
              s_11 = t;
              t = SSL_explode_term(s_11);
              if(match_cons(t, sym__2))
                {
                  ATerm c_11 = ATgetArgument(t, 0);
                  r_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_11;
              t = foldr_3_0(g_1, j_1, _id, t);
              LocalPopChoice(b_11);
            }
          else
            {
              t = a_11;
              {
                ATerm j_12 = NULL,k_12 = NULL;
                k_12 = t;
                t = SSL_explode_term(k_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_11 = ATgetArgument(t, 0);
                    j_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_12;
                t = foldr_3_0(l_1, n_1, u_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_18(t);
  return(t);
}
static ATerm l_6 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm v_18 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_40, b_40);
  t = m_7(a_40, b_40, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_18 = ATgetFirst((ATermList) t);
      {
        ATerm f_11 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_18;
  return(t);
}
ATerm Definition_0_0 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  q_19 = t;
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      {
        ATerm g_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_13 = NULL,e_14 = NULL,f_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, r_19, (ATerm) ATempty);
        e_14 = t;
        t = term_k_11;
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATmakeAppl(sym__2, r_19, (ATerm) ATempty));
        t = l_6(f_14, e_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm l_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_11) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            y_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_13;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        {
          ATerm m_11 = t;
          int n_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_14 = NULL,z_14 = NULL,b_15 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, r_19, (ATerm) ATempty);
              z_14 = t;
              t = term_k_11;
              b_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATmakeAppl(sym__2, r_19, (ATerm) ATempty));
              t = l_6(b_15, z_14, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm o_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) o_11) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  n_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_14;
              LocalPopChoice(n_11);
            }
          else
            {
              t = m_11;
              {
                ATerm o_15 = NULL,s_15 = NULL,t_15 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, r_19, (ATerm) ATempty);
                s_15 = t;
                t = term_k_11;
                t_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATmakeAppl(sym__2, r_19, (ATerm) ATempty));
                t = l_6(t_15, s_15, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm p_11 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) p_11) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    o_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_15;
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  static ATerm s_20 (ATerm t)
  {
    ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
    p_20 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_20 = ATgetFirst((ATermList) t);
        o_20 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_15 = NULL,d_16 = NULL,s_1 = NULL;
          t = SSLgetAnnotations(p_20);
          z_15 = t;
          t = o_20;
          t = s_20(t);
          d_16 = t;
          t = (ATerm) ATinsert(CheckATermList(d_16), n_20);
          s_1 = t;
          t = SSLsetAnnotations(s_1, z_15);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_20;
        t = u_98(t);
      }
    return(t);
  }
  t = s_20(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_19;
    }
  else
    {
      static ATerm q_1 (ATerm t)
      {
        t = not_null(z_19);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_19 = ATgetFirst((ATermList) t);
          if(((z_19 != NULL) && (z_19 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_19;
      t = at_end_1_0(q_1, t);
    }
  return(t);
}
static ATerm q_21 (ATerm a_21, ATerm t)
{
  ATerm b_21 = NULL;
  t = SSL_explode_term(a_21);
  if(match_cons(t, sym__2))
    {
      ATerm q_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_21;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_21 = NULL,i_21 = NULL,j_21 = NULL;
  j_21 = t;
  if(match_cons(t, sym__2))
    {
      f_21 = ATgetArgument(t, 0);
      i_21 = ATgetArgument(t, 1);
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_1 (ATerm t)
            {
              t = i_21;
              return(t);
            }
            t = f_21;
            t = at_end_1_0(r_1, t);
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            t = q_21(j_21, t);
          }
      }
    }
  else
    {
      t = q_21(j_21, t);
    }
  return(t);
}
static ATerm n_6 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm e_46, ATerm d_46, ATerm t)
{
  t = b_101(t);
  {
    static ATerm t_1 (ATerm t)
    {
      ATerm s_21 = NULL;
      s_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_46, s_21);
      t = a_101(t);
      return(t);
    }
    t = fetch_1_0(t_1, t);
  }
  t = d_46;
  return(t);
}
static ATerm o_6 (ATerm s_100 (ATerm), ATerm y_45, ATerm x_45, ATerm t)
{
  static ATerm j_22 (ATerm t)
  {
    ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
    e_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_22 = ATgetFirst((ATermList) t);
            g_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_11 = t;
          int w_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_22;
              {
                static ATerm v_1 (ATerm t)
                {
                  t = x_45;
                  return(t);
                }
                t = n_6(s_100, v_1, f_22, g_22, t);
              }
              t = j_22(t);
              LocalPopChoice(w_11);
            }
          else
            {
              t = v_11;
              {
                ATerm m_16 = NULL,u_16 = NULL,u_1 = NULL;
                t = SSLgetAnnotations(e_22);
                m_16 = t;
                t = g_22;
                t = j_22(t);
                u_16 = t;
                t = (ATerm) ATinsert(CheckATermList(u_16), f_22);
                u_1 = t;
                t = SSLsetAnnotations(u_1, m_16);
              }
            }
        }
      }
    return(t);
  }
  t = y_45;
  t = j_22(t);
  return(t);
}
ATerm genzip_4_0 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm t)
{
  static ATerm x_22 (ATerm t)
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_90(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        {
          ATerm p_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,w_1 = NULL;
          t = i_90(t);
          w_22 = t;
          if(match_cons(t, sym__2))
            {
              s_22 = ATgetArgument(t, 0);
              t_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_22);
          p_22 = t;
          t = s_22;
          t = k_90(t);
          u_22 = t;
          t = t_22;
          t = x_22(t);
          v_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_22, v_22);
          w_1 = t;
          t = SSLsetAnnotations(w_1, p_22);
          t = j_90(t);
        }
      }
    return(t);
  }
  t = x_22(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_11 = ATgetArgument(t, 0);
      if(((ATgetType(z_11) != AT_LIST) || !(ATisEmpty(z_11))))
        _fail(t);
      {
        ATerm a_12 = ATgetArgument(t, 1);
        if(((ATgetType(a_12) != AT_LIST) || !(ATisEmpty(a_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,j_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_12 = ATgetArgument(t, 0);
      if(((ATgetType(b_12) == AT_LIST) && !(ATisEmpty(b_12))))
        {
          e_23 = ATgetFirst((ATermList) b_12);
          f_23 = (ATerm) ATgetNext((ATermList) b_12);
        }
      else
        _fail(t);
      {
        ATerm c_12 = ATgetArgument(t, 1);
        if(((ATgetType(c_12) == AT_LIST) && !(ATisEmpty(c_12))))
          {
            g_23 = ATgetFirst((ATermList) c_12);
            j_23 = (ATerm) ATgetNext((ATermList) c_12);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_23, g_23), (ATerm) ATmakeAppl(sym__2, f_23, j_23));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_23), k_23);
  return(t);
}
static ATerm t_6 (ATerm j_641, ATerm o_641, ATerm p_61, ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  t = SSL_explode_term(o_641);
  if(match_cons(t, sym__2))
    {
      z_22 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_641);
  if(match_cons(t, sym__2))
    {
      if((z_22 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_23, b_23);
  t = genzip_4_0(x_1, c_2, e_2, _id, t);
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_23, p_61);
  t = conc_0_0(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_23);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_1 = NULL;
  x_23 = t;
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_23);
  u_23 = t;
  t = w_23;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_23, w_23);
  y_1 = t;
  t = SSLsetAnnotations(y_1, u_23);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  b_25 = t;
  if(match_cons(t, sym__2))
    {
      c_25 = ATgetArgument(t, 0);
      d_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_25;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_25 = ATgetFirst((ATermList) t);
      f_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_25(c_25, d_25, b_25, t);
            LocalPopChoice(g_12);
          }
        else
          {
            t = d_12;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_25), e_25), f_25);
          }
      }
    }
  else
    {
      t = p_25(c_25, d_25, b_25, t);
    }
  return(t);
}
static ATerm p_25 (ATerm y_23, ATerm z_23, ATerm c_24, ATerm t)
{
  ATerm d_24 = NULL,m_24 = NULL,z_1 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL;
  t = SSLgetAnnotations(c_24);
  d_24 = t;
  t = z_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_24 = ATgetFirst((ATermList) t);
      s_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_24;
  if(match_cons(t, sym__2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_24;
        if((q_24 != t))
          {
            _fail(t);
          }
        t = s_24;
        LocalPopChoice(l_12);
      }
    else
      {
        t = i_12;
        t = z_23;
        t = t_6(q_24, r_24, s_24, t);
      }
  }
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_23, m_24);
  z_1 = t;
  t = SSLsetAnnotations(z_1, d_24);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm o_25 = NULL;
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      if((o_25 != ATgetArgument(t, 1)))
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
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_2, g_2, k_2, t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
        j_25 = t;
        if(match_cons(t, sym__2))
          {
            k_25 = ATgetArgument(t, 0);
            l_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_25;
        t = o_6(l_2, k_25, l_25, t);
      }
    }
  return(t);
}
static ATerm v_6 (ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm x_62, ATerm u_62, ATerm b_63, ATerm y_62, ATerm v_62, ATerm w_62, ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_62, y_62);
  t = e_118(t);
  q_25 = t;
  t = f_118(t);
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_25, b_63);
  t = diff_0_0(t);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_25, u_62);
  t = conc_0_0(t);
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_25, b_63);
  t = conc_0_0(t);
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_62, q_25, v_62);
  t = g_118(t);
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym__5, t_25, u_25, y_62, v_25, w_62);
  return(t);
}
ATerm GnNext_3_0 (ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm g_118 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm o_12 = ATgetArgument(t, 0);
      if(((ATgetType(o_12) == AT_LIST) && !(ATisEmpty(o_12))))
        {
          x_25 = ATgetFirst((ATermList) o_12);
          y_25 = (ATerm) ATgetNext((ATermList) o_12);
        }
      else
        _fail(t);
      z_25 = ATgetArgument(t, 1);
      a_26 = ATgetArgument(t, 2);
      b_26 = ATgetArgument(t, 3);
      c_26 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = v_6(e_118, f_118, g_118, x_25, y_25, z_25, a_26, b_26, c_26, t);
  return(t);
}
ATerm while_not_2_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm t)
{
  static ATerm d_26 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_92(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = i_92(t);
        t = d_26(t);
      }
    return(t);
  }
  t = d_26(t);
  return(t);
}
ATerm for_3_0 (ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm t)
{
  t = k_92(t);
  t = while_not_2_0(l_92, m_92, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
  if(match_cons(t, sym__3))
    {
      h_26 = ATgetArgument(t, 0);
      i_26 = ATgetArgument(t, 1);
      j_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, h_26, h_26, i_26, j_26, (ATerm) ATempty);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm s_12 = ATgetArgument(t, 0);
      if(((ATgetType(s_12) != AT_LIST) || !(ATisEmpty(s_12))))
        _fail(t);
      {
        ATerm t_12 = ATgetArgument(t, 1);
      }
      {
        ATerm v_12 = ATgetArgument(t, 2);
      }
      m_26 = ATgetArgument(t, 3);
      n_26 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_26, n_26);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm t)
{
  ATerm g_26 = NULL;
  static ATerm r_2 (ATerm t)
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(b_118, c_118, d_118, t);
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
        {
          ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
          if(match_cons(t, sym__5))
            {
              p_26 = ATgetArgument(t, 0);
              s_26 = ATgetArgument(t, 1);
              t_26 = ATgetArgument(t, 2);
              u_26 = ATgetArgument(t, 3);
              v_26 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = p_26;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_26 = ATgetFirst((ATermList) t);
              r_26 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, r_26, s_26, t_26, u_26, (ATerm) ATinsert(CheckATermList(v_26), q_26));
        }
      }
    return(t);
  }
  t = for_3_0(p_2, q_2, r_2, t);
  if(match_cons(t, sym__2))
    {
      g_26 = ATgetArgument(t, 0);
      {
        ATerm y_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = g_26;
  return(t);
}
static ATerm y_6 (ATerm o_97 (ATerm), ATerm l_38, ATerm j_38, ATerm t)
{
  ATerm c_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
  i_27 = t;
  t = o_97(t);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_27, l_38, j_38);
  t = n_7(c_27, l_38, j_38, t);
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_27 = NULL;
        t = term_y_8;
        n_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_27, term_y_8);
        t = m_7(c_27, n_27, t);
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_27 = ATgetFirst((ATermList) t);
      h_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_27, term_y_8, (ATerm) ATinsert(CheckATermList(h_27), (ATerm) ATinsert(CheckATermList(g_27), l_38)));
  t = lookup_table_0_1(c_27, t);
  m_27 = t;
  t = term_y_8;
  j_27 = t;
  t = (ATerm) ATinsert(CheckATermList(h_27), (ATerm) ATinsert(CheckATermList(g_27), l_38));
  k_27 = t;
  t = m_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(j_27, k_27, l_27, t);
  t = i_27;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_k_11;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_k_11;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm p_27 = NULL,s_27 = NULL;
  p_27 = t;
  {
    ATerm b_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDef_3))
          {
            s_27 = ATgetArgument(t, 0);
            {
              ATerm e_13 = ATgetArgument(t, 1);
            }
            {
              ATerm f_13 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_13);
        {
          ATerm b_28 = NULL,c_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, s_27, (ATerm) ATempty);
          b_28 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_13, p_27);
          c_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_27, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_g_13, p_27));
          t = y_6(s_2, b_28, c_28, t);
          t = p_27;
        }
      }
    else
      {
        t = b_13;
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  s_27 = ATgetArgument(t, 0);
                  {
                    ATerm j_13 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm k_13 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm l_13 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(i_13);
              {
                ATerm m_28 = NULL,n_28 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, s_27, (ATerm) ATempty);
                m_28 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_13, p_27);
                n_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_27, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_m_13, p_27));
                t = y_6(u_2, m_28, n_28, t);
                t = p_27;
              }
            }
          else
            {
              t = h_13;
              {
                ATerm r_28 = NULL,s_28 = NULL;
                if(match_cons(t, sym_SDefT_4))
                  {
                    s_27 = ATgetArgument(t, 0);
                    {
                      ATerm n_13 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm o_13 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm p_13 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, s_27, (ATerm) ATempty);
                r_28 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_13, p_27);
                s_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_27, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_q_13, p_27));
                t = y_6(w_2, r_28, s_28, t);
                t = p_27;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = free_vars_3_0(d_3, e_3, sboundin_3_0, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm w_31 = NULL,b_32 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm r_13 = ATgetArgument(t, 0);
      w_31 = ATgetArgument(t, 1);
      b_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_32), w_31);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm a_29 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      a_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_29);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm b_29 = NULL,f_29 = NULL,g_29 = NULL,k_29 = NULL,l_29 = NULL;
  b_29 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
      t = b_29;
      t = h_6(f_29, g_29, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_29 = ATgetArgument(t, 0);
          g_29 = ATgetArgument(t, 1);
          k_29 = ATgetArgument(t, 2);
          t = g_29;
          t = map_1_0(f_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              f_29 = ATgetArgument(t, 0);
              g_29 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, f_29);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  f_29 = ATgetArgument(t, 0);
                  g_29 = ATgetArgument(t, 1);
                  k_29 = ATgetArgument(t, 2);
                  l_29 = ATgetArgument(t, 3);
                  t = g_29;
                  t = map_1_0(g_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_29 = ATgetArgument(t, 0);
                      g_29 = ATgetArgument(t, 1);
                      k_29 = ATgetArgument(t, 2);
                      l_29 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_29;
                  t = map_1_0(h_3, t);
                }
            }
        }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm e_30 = NULL;
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_30 = ATgetArgument(t, 0);
          {
            ATerm u_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_13);
      t = e_30;
    }
  else
    {
      t = s_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_30;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm e_31 = NULL;
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_31 = ATgetArgument(t, 0);
          {
            ATerm x_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_13);
      t = e_31;
    }
  else
    {
      t = v_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_31;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm t_31 = NULL;
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_31 = ATgetArgument(t, 0);
          {
            ATerm b_14 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_14);
      t = t_31;
    }
  else
    {
      t = z_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_31;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm x_28 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_c_14), x_28, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(Definition_0_0, b_3, c_3, t);
  return(t);
}
static ATerm m_7 (ATerm i_41, ATerm j_41, ATerm t)
{
  ATerm c_32 = NULL;
  t = lookup_table_0_1(i_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(j_41, c_32, t);
  return(t);
}
ATerm Cons_2_0 (ATerm r_71 (ATerm), ATerm s_71 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,g_5 = NULL;
  l_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_32 = ATgetFirst((ATermList) t);
      g_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_32);
  e_32 = t;
  t = f_32;
  t = r_71(t);
  j_32 = t;
  t = g_32;
  t = s_71(t);
  k_32 = t;
  t = (ATerm) ATinsert(CheckATermList(k_32), j_32);
  g_5 = t;
  t = SSLsetAnnotations(g_5, e_32);
  return(t);
}
static ATerm z_6 (ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm m_32 = NULL;
  t = SSL_fputc(k_30, l_30);
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_32);
  return(t);
}
static ATerm a_7 (ATerm c_29, ATerm d_29, ATerm t)
{
  ATerm n_32 = NULL;
  t = SSL_write_term_to_stream_text(c_29, d_29);
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_32);
  return(t);
}
static ATerm c_7 (ATerm f_93 (ATerm), ATerm i_204, ATerm i_29, ATerm t)
{
  ATerm o_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_204, term_d_14);
  t = g_7(t);
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_32, i_29);
  t = f_93(t);
  t = fclose_0_0(t);
  t = i_29;
  return(t);
}
static ATerm b_7 (ATerm y_28, ATerm z_28, ATerm t)
{
  ATerm p_32 = NULL;
  t = SSL_write_term_to_stream_baf(y_28, z_28);
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_32);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      if(match_cons(g_14, sym_Stream_1))
        {
          w_32 = ATgetArgument(g_14, 0);
        }
      else
        _fail(t);
      x_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(w_32, x_32, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_14 = ATgetArgument(t, 0);
      if(match_cons(h_14, sym_Stream_1))
        {
          b_33 = ATgetArgument(h_14, 0);
        }
      else
        _fail(t);
      c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(b_33, c_33, t);
  y_32 = t;
  t = term_i_14;
  z_32 = t;
  t = y_32;
  if(match_cons(t, sym_Stream_1))
    {
      a_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_14, y_32);
  t = z_6(z_32, a_33, t);
  return(t);
}
ATerm output_1_0 (ATerm z_113 (ATerm), ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL;
  t = z_113(t);
  r_32 = t;
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_32 = NULL,t_32 = NULL;
        t = term_l_14;
        s_32 = t;
        t = term_m_14;
        t_32 = t;
        t = term_o_14;
        t = m_7(s_32, t_32, t);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        t = term_p_14;
      }
  }
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_32 = NULL,v_32 = NULL;
        t = term_l_14;
        u_32 = t;
        t = term_s_14;
        v_32 = t;
        t = term_y_14;
        t = m_7(u_32, v_32, t);
        t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
        LocalPopChoice(r_14);
        if(match_cons(t, sym__2))
          {
            ATerm a_15 = ATgetArgument(t, 0);
            ATerm c_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_7(k_3, q_32, r_32, t);
      }
    else
      {
        t = q_14;
        if(match_cons(t, sym__2))
          {
            ATerm d_15 = ATgetArgument(t, 0);
            ATerm e_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_7(m_3, q_32, r_32, t);
      }
  }
  return(t);
}
static ATerm q_33 (ATerm k_33, ATerm t)
{
  t = SSL_fclose(k_33);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  o_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_33 = ATgetArgument(t, 0);
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_33);
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            t = q_33(o_33, t);
          }
      }
    }
  else
    {
      t = q_33(o_33, t);
    }
  return(t);
}
static ATerm d_7 (ATerm e_29, ATerm t)
{
  t = SSL_read_term_from_stream(e_29);
  return(t);
}
static ATerm e_7 (ATerm d_55, ATerm e_55, ATerm t)
{
  t = SSL_strcat(d_55, e_55);
  return(t);
}
static ATerm f_7 (ATerm m_30, ATerm n_30, ATerm t)
{
  ATerm r_33 = NULL;
  t = SSL_fopen(m_30, n_30);
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_33);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_33 = NULL;
  t = SSL_stdin_stream();
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_33);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_33 = NULL;
  t = SSL_stdout_stream();
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_33);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_33 = NULL;
  t = SSL_stderr_stream();
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_33);
  return(t);
}
static ATerm k_36 (ATerm i_34, ATerm t)
{
  ATerm j_34 = NULL;
  t = SSL_explode_term(i_34);
  if(match_cons(t, sym__2))
    {
      ATerm i_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_15 = ATgetArgument(t, 1);
        if(((ATgetType(j_15) == AT_LIST) && !(ATisEmpty(j_15))))
          {
            j_34 = ATgetFirst((ATermList) j_15);
            {
              ATerm k_15 = (ATerm) ATgetNext((ATermList) j_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_34;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_34;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_34;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_34;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_36 (ATerm m_34, ATerm s_34, ATerm t_34, ATerm t)
{
  ATerm u_34 = NULL,x_34 = NULL,y_34 = NULL,e_35 = NULL,j_5 = NULL;
  t = SSLgetAnnotations(t_34);
  y_34 = t;
  t = m_34;
  if(match_cons(t, sym_Path_1))
    {
      e_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_35, s_34);
  j_5 = t;
  t = SSLsetAnnotations(j_5, y_34);
  if(match_cons(t, sym__2))
    {
      u_34 = ATgetArgument(t, 0);
      x_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(u_34, x_34, t);
  return(t);
}
static ATerm n_36 (ATerm g_35, ATerm k_35, ATerm n_35, ATerm t)
{
  ATerm o_35 = NULL,r_35 = NULL,t_35 = NULL,c_36 = NULL,k_5 = NULL;
  t = SSLgetAnnotations(n_35);
  t_35 = t;
  t = SSL_is_string(g_35);
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_36, k_35);
  k_5 = t;
  t = SSLsetAnnotations(k_5, t_35);
  if(match_cons(t, sym__2))
    {
      o_35 = ATgetArgument(t, 0);
      r_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(o_35, r_35, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm e_36 = NULL,g_36 = NULL,h_36 = NULL;
  e_36 = t;
  if(match_cons(t, sym__2))
    {
      g_36 = ATgetArgument(t, 0);
      h_36 = ATgetArgument(t, 1);
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_36(e_36, t);
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            {
              ATerm n_15 = t;
              int p_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_36(g_36, h_36, e_36, t);
                  LocalPopChoice(p_15);
                }
              else
                {
                  t = n_15;
                  t = n_36(g_36, h_36, e_36, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_36(e_36, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,b_37 = NULL;
  b_37 = t;
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_37, term_u_15);
        t = g_7(t);
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        {
          ATerm s_17 = NULL,t_17 = NULL;
          t = term_v_15;
          t_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_15, b_37);
          t = e_7(t_17, b_37, t);
          s_17 = t;
          t = SSL_perror(s_17);
          _fail(t);
        }
      }
  }
  q_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(r_36, t);
  p_36 = t;
  t = q_36;
  t = fclose_0_0(t);
  t = p_36;
  return(t);
}
ATerm input_1_0 (ATerm a_114 (ATerm), ATerm t)
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_37 = NULL,h_37 = NULL;
      t = term_l_14;
      g_37 = t;
      t = term_y_15;
      h_37 = t;
      t = term_a_16;
      t = m_7(g_37, h_37, t);
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      t = term_b_16;
    }
  t = ReadFromFile_0_0(t);
  t = a_114(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  j_37 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  k_37 = t;
  t = term_c_16;
  r_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_16), k_37), term_e_16);
  s_37 = t;
  t = SSL_printnl(r_37, s_37);
  t = term_g_16;
  q_37 = t;
  t = SSL_exit(q_37);
  t = j_37;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm u_37 = NULL;
  u_37 = t;
  if(match_string(t, "-k"))
    {
      t = u_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_37;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
  x_37 = t;
  t = SSL_string_to_int(x_37);
  y_37 = t;
  t = term_h_16;
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, y_37);
  t = p_7(z_37, y_37, t);
  t = x_37;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_i_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, q_3, z_3, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm b_38 = NULL;
  b_38 = t;
  if(match_string(t, "-S"))
    {
      t = b_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_38;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm c_38 = NULL,o_38 = NULL;
  t = term_j_16;
  c_38 = t;
  t = term_k_16;
  o_38 = t;
  t = term_l_16;
  t = p_7(c_38, o_38, t);
  t = term_n_16;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_o_16;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,s_38 = NULL;
  p_38 = t;
  t = SSL_string_to_int(p_38);
  q_38 = t;
  t = term_j_16;
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_16, q_38);
  t = p_7(s_38, q_38, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_38);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_p_16;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm t_38 = NULL,w_38 = NULL;
  t = term_q_16;
  t_38 = t;
  t = term_m_8;
  w_38 = t;
  t = term_r_16;
  t = p_7(t_38, w_38, t);
  t = term_s_16;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_t_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, l_4, m_4, t);
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_4, p_4, q_4, t);
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            t = Option_3_0(r_4, t_4, u_4, t);
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm f_34, ATerm g_34, ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL;
  t = term_l_14;
  x_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_14, f_34, g_34);
  t = lookup_table_0_1(x_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(f_34, g_34, y_38, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_14, f_34, g_34);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_39 = NULL,k_39 = NULL,n_39 = NULL;
      t = term_m_8;
      t = e_0(t);
      j_39 = t;
      t = term_c_17;
      k_39 = t;
      t = term_d_17;
      n_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_17, term_d_17, j_39);
      t = n_7(k_39, n_39, j_39, t);
      _fail(t);
    }
  else
    {
      ATerm w_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_39 = ATgetFirst((ATermList) t);
          h_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_39;
      t = c_0(t);
      t = term_m_8;
      t = d_0(t);
      w_39 = t;
      t = (ATerm) ATinsert(CheckATermList(h_39), w_39);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm y_39 = NULL;
  y_39 = t;
  if(match_string(t, "-o"))
    {
      t = y_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_39;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm z_39 = NULL,g_40 = NULL;
  z_39 = t;
  t = term_m_14;
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_14, z_39);
  t = p_7(g_40, z_39, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_39);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, x_4, z_4, t);
  return(t);
}
static ATerm n_7 (ATerm p_39, ATerm q_39, ATerm o_39, ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,l_40 = NULL,n_40 = NULL,o_40 = NULL;
  i_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_39, q_39);
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_17 = ATgetArgument(t, 0);
            ATerm j_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_39, q_39);
        t = m_7(p_39, q_39, t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = (ATerm) ATempty;
      }
  }
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_39, q_39, (ATerm) ATinsert(CheckATermList(j_40), o_39));
  t = lookup_table_0_1(p_39, t);
  o_40 = t;
  t = (ATerm) ATinsert(CheckATermList(j_40), o_39);
  l_40 = t;
  t = o_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(q_39, l_40, n_40, t);
  t = i_40;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,a_41 = NULL,f_41 = NULL,g_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_41 = NULL,k_41 = NULL,l_41 = NULL;
      t = term_m_8;
      t = m_0(t);
      h_41 = t;
      t = term_c_17;
      k_41 = t;
      t = term_d_17;
      l_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_17, term_d_17, h_41);
      t = n_7(k_41, l_41, h_41, t);
      _fail(t);
    }
  else
    {
      ATerm p_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_40 = ATgetFirst((ATermList) t);
          a_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_41 = ATgetFirst((ATermList) t);
          g_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_40;
      t = k_0(t);
      t = f_41;
      t = l_0(t);
      p_41 = t;
      t = (ATerm) ATinsert(CheckATermList(g_41), p_41);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm r_41 = NULL;
  r_41 = t;
  if(match_string(t, "-i"))
    {
      t = r_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_41;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  s_41 = t;
  t = term_y_15;
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_15, s_41);
  t = p_7(t_41, s_41, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_41);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_8;
  t = whoami_0_0(t);
  u_41 = t;
  t = term_c_16;
  w_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_17), u_41);
  x_41 = t;
  t = SSL_printnl(w_41, x_41);
  t = term_g_16;
  v_41 = t;
  t = SSL_exit(v_41);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL;
  t = term_l_14;
  y_41 = t;
  t = term_o_17;
  z_41 = t;
  t = term_p_17;
  t = m_7(y_41, z_41, t);
  return(t);
}
static ATerm h_7 (ATerm x_36, ATerm y_36, ATerm t)
{
  ATerm r_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_36, y_36);
      LocalPopChoice(u_17);
    }
  else
    {
      t = r_17;
      t = SSL_addr(x_36, y_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_103 (ATerm), ATerm t_103 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL;
  c_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_42;
      t = s_103(t);
    }
  else
    {
      ATerm j_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_42 = ATgetFirst((ATermList) t);
          e_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_42;
      t = foldr_2_0(s_103, t_103, t);
      j_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_42, j_42);
      t = t_103(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_k_16;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm f_18 = NULL,p_18 = NULL;
  if(match_cons(t, sym__2))
    {
      f_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(f_18, p_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_42 = NULL,x_17 = NULL,y_17 = NULL;
  t = times_0_0(t);
  y_17 = t;
  t = SSL_explode_term(y_17);
  if(match_cons(t, sym__2))
    {
      ATerm v_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_17;
  t = foldr_2_0(d_5, e_5, t);
  u_42 = t;
  t = SSL_TicksToSeconds(u_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,c_44 = NULL;
  y_43 = t;
  if(match_cons(t, sym__2))
    {
      z_43 = ATgetArgument(t, 0);
      c_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_44;
        if((z_43 != t))
          {
            _fail(t);
          }
        t = y_43;
        LocalPopChoice(z_17);
      }
    else
      {
        t = w_17;
        t = (ATerm) ATmakeAppl(sym__2, z_43, c_44);
        {
          ATerm b_18 = t;
          int d_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_43, c_44);
              LocalPopChoice(d_18);
            }
          else
            {
              t = b_18;
              t = SSL_gtr(z_43, c_44);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_43, c_44);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm g_44 = NULL;
  g_44 = t;
  {
    ATerm e_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_44 = NULL,l_44 = NULL,m_44 = NULL;
        t = term_l_14;
        l_44 = t;
        t = term_j_16;
        m_44 = t;
        t = term_k_18;
        t = m_7(l_44, m_44, t);
        i_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_44, term_g_16);
        t = geq_0_0(t);
        t = g_44;
        t = v_94(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = e_18;
        t = g_44;
      }
  }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,s_44 = NULL,v_44 = NULL;
  t = run_time_0_0(t);
  p_44 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  q_44 = t;
  t = term_c_16;
  s_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_18), p_44), term_l_18), q_44);
  v_44 = t;
  t = SSL_printnl(s_44, v_44);
  t = (ATerm) ATmakeAppl(sym__2, term_c_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_18), p_44), term_l_18), q_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_16;
  w_44 = t;
  t = SSL_exit(w_44);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL;
  l_45 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_45;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_45 = ATgetArgument(t, 0);
          {
            ATerm r_20 = NULL,p_5 = NULL;
            t = SSLgetAnnotations(l_45);
            r_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_45);
            p_5 = t;
            t = SSLsetAnnotations(p_5, r_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_45;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_113 (ATerm), ATerm t)
{
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_44 = NULL,a_45 = NULL;
      t = term_l_14;
      z_44 = t;
      t = term_q_18;
      a_45 = t;
      t = term_r_18;
      t = m_7(z_44, a_45, t);
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      t = fetch_1_0(i_5, t);
    }
  t = q_113(t);
  return(t);
}
static ATerm q_7 (ATerm w_42, ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm p_45 = NULL;
  t = SSL_hashtable_put(y_42, w_42, x_42);
  p_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_45);
  return(t);
}
static ATerm r_7 (ATerm z_42, ATerm a_43, ATerm t)
{
  t = SSL_hashtable_get(a_43, z_42);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_41, ATerm t)
{
  ATerm m_46 = NULL;
  t = table_hashtable_0_0(t);
  m_46 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL;
        t = m_46;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_7(b_41, z_20, t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        {
          ATerm k_21 = NULL;
          t = b_41;
          t = table_create_0_0(t);
          t = m_46;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_7(b_41, k_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm p_46 = NULL;
  t = SSL_hashtable_create(e_43, f_43);
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_46);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,b_47 = NULL,e_47 = NULL;
  r_46 = t;
  t = term_w_18;
  b_47 = t;
  t = term_x_18;
  e_47 = t;
  t = r_46;
  t = new_hashtable_0_2(b_47, e_47, t);
  s_46 = t;
  t = r_46;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(r_46, s_46, t_46, t);
  t = r_46;
  return(t);
}
static ATerm j_7 (ATerm b_43, ATerm c_43, ATerm t)
{
  ATerm f_47 = NULL;
  t = SSL_hashtable_remove(c_43, b_43);
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_47);
  return(t);
}
static ATerm k_7 (ATerm g_43, ATerm t)
{
  ATerm i_47 = NULL;
  t = SSL_hashtable_destroy(g_43);
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_47);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm o_47 = NULL;
  t = SSL_table_hashtable();
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_47);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  p_47 = t;
  t = table_hashtable_0_0(t);
  t_47 = t;
  t = lookup_table_0_1(p_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(v_47, t);
  t = t_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(p_47, u_47, t);
  t = p_47;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_47 = ATgetFirst((ATermList) t);
      a_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_48 = NULL,i_48 = NULL;
        static ATerm l_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_48)), not_null(i_48));
          return(t);
        }
        t = a_48;
        t = i_0(t);
        if(((h_48 != NULL) && (h_48 != t)))
          _fail(t);
        else
          h_48 = t;
        t = z_47;
        t = g_0(t);
        if(((i_48 != NULL) && (i_48 != t)))
          _fail(t);
        else
          i_48 = t;
        t = a_48;
        t = reverse_acc_2_0(g_0, l_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,d_6 = NULL;
  t_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_48);
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_48);
  d_6 = t;
  t = SSLsetAnnotations(d_6, r_48);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm v_48 = NULL;
  v_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_48), term_y_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_48 = NULL,q_48 = NULL;
      t = term_l_14;
      p_48 = t;
      t = term_o_17;
      q_48 = t;
      t = term_p_17;
      t = m_7(p_48, q_48, t);
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      t = fetch_1_0(m_5, t);
    }
  t = term_b_19;
  t = echo_0_0(t);
  t = term_c_17;
  n_48 = t;
  t = term_d_17;
  o_48 = t;
  t = term_c_19;
  t = m_7(n_48, o_48, t);
  t = reverse_acc_2_0(_id, n_5, t);
  t = map_1_0(o_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  static ATerm s_49 (ATerm t)
  {
    ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
    p_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_49 = ATgetFirst((ATermList) t);
        r_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_19 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_21 = NULL,k_22 = NULL,f_6 = NULL;
          t = SSLgetAnnotations(p_49);
          t_21 = t;
          t = q_49;
          t = n_98(t);
          k_22 = t;
          t = (ATerm) ATinsert(CheckATermList(r_49), k_22);
          f_6 = t;
          t = SSLsetAnnotations(f_6, t_21);
          LocalPopChoice(e_19);
        }
      else
        {
          t = d_19;
          {
            ATerm o_23 = NULL,r_23 = NULL,r_6 = NULL;
            t = SSLgetAnnotations(p_49);
            o_23 = t;
            t = r_49;
            t = s_49(t);
            r_23 = t;
            t = (ATerm) ATinsert(CheckATermList(r_23), q_49);
            r_6 = t;
            t = SSLsetAnnotations(r_6, o_23);
          }
        }
    }
    return(t);
  }
  t = s_49(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_19 = ATgetFirst((ATermList) t);
                ATerm i_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_50;
          }
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = (ATerm) ATinsert(ATempty, b_50);
      }
  }
  c_50 = t;
  t = term_p_14;
  d_50 = t;
  t = SSL_printnl(d_50, c_50);
  t = b_50;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  t = term_l_14;
  h_50 = t;
  t = term_o_17;
  i_50 = t;
  t = term_p_17;
  t = m_7(h_50, i_50, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm j_50 = NULL,n_50 = NULL;
  t = term_j_19;
  j_50 = t;
  t = term_m_8;
  n_50 = t;
  t = term_k_19;
  t = p_7(j_50, n_50, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_l_19;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
  t = term_j_19;
  q_50 = t;
  t = term_m_8;
  r_50 = t;
  t = term_k_19;
  t = p_7(q_50, r_50, t);
  t = term_m_19;
  o_50 = t;
  t = term_m_8;
  p_50 = t;
  t = term_n_19;
  t = p_7(o_50, p_50, t);
  t = term_o_19;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_5, t_5, u_5, t);
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      t = Option_3_0(v_5, w_5, x_5, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_115 (ATerm), ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,b_51 = NULL,c_51 = NULL,c_9 = NULL;
  w_50 = t;
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_19;
        t = t_115(t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
      }
  }
  t = w_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_50 = ATgetFirst((ATermList) t);
      z_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_50);
  x_50 = t;
  t = term_o_17;
  c_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_17, y_50);
  t = p_7(c_51, y_50, t);
  t = z_50;
  {
    static ATerm m_51 (ATerm t)
    {
      ATerm a_20 = t;
      int b_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_51 = NULL;
              f_51 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_51;
              LocalPopChoice(d_20);
            }
          else
            {
              t = c_20;
              t = t_115(t);
              t = Cons_2_0(_id, m_51, t);
            }
          LocalPopChoice(b_20);
        }
      else
        {
          t = a_20;
          {
            ATerm i_51 = NULL,j_51 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_51 = ATgetFirst((ATermList) t);
                j_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_51), (ATerm) ATmakeAppl(sym_Undefined_1, i_51));
          }
        }
      return(t);
    }
    t = m_51(t);
  }
  b_51 = t;
  t = (ATerm) ATinsert(CheckATermList(b_51), (ATerm) ATmakeAppl(sym_Program_1, y_50));
  c_9 = t;
  t = SSLsetAnnotations(c_9, x_50);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm z_51 = NULL;
  z_51 = t;
  if(match_string(t, "--help"))
    {
      t = z_51;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_51;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_51;
        }
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  t = term_q_18;
  a_52 = t;
  t = term_m_8;
  b_52 = t;
  t = term_e_20;
  t = p_7(a_52, b_52, t);
  t = term_f_20;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_g_20;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_115 (ATerm), ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
  t_51 = t;
  t = term_c_17;
  u_51 = t;
  t = term_h_20;
  t = lookup_table_0_1(u_51, t);
  y_51 = t;
  t = term_d_17;
  v_51 = t;
  t = (ATerm) ATempty;
  w_51 = t;
  t = y_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(v_51, w_51, x_51, t);
  t = t_51;
  {
    static ATerm z_5 (ATerm t)
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_115(t);
          LocalPopChoice(j_20);
        }
      else
        {
          t = i_20;
          {
            ATerm k_20 = t;
            int l_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_6, e_6, g_6, t);
                LocalPopChoice(l_20);
              }
            else
              {
                t = k_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_5, t);
  }
  {
    ATerm m_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_52 = NULL;
        m_52 = t;
        {
          ATerm t_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_24 = NULL;
              t = m_52;
              {
                ATerm v_20 = t;
                int w_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_24 = NULL,l_24 = NULL;
                    t = term_l_14;
                    k_24 = t;
                    t = term_q_18;
                    l_24 = t;
                    t = term_r_18;
                    t = m_7(k_24, l_24, t);
                    LocalPopChoice(w_20);
                  }
                else
                  {
                    t = v_20;
                    t = fetch_1_0(i_6, t);
                  }
              }
              t = m_52;
              t = default_system_usage_0_0(t);
              t = term_k_16;
              j_24 = t;
              t = SSL_exit(j_24);
              LocalPopChoice(u_20);
            }
          else
            {
              t = t_20;
              {
                ATerm e_26 = NULL,f_26 = NULL,d_27 = NULL;
                t = term_l_14;
                f_26 = t;
                t = term_j_19;
                d_27 = t;
                t = term_x_20;
                t = m_7(f_26, d_27, t);
                t = m_52;
                t = default_system_about_0_0(t);
                t = term_k_16;
                e_26 = t;
                t = SSL_exit(e_26);
              }
            }
        }
        LocalPopChoice(q_20);
      }
    else
      {
        t = m_20;
        {
          ATerm y_20 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
              static ATerm p_6 (ATerm t)
              {
                ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,e_9 = NULL;
                s_52 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_52 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_52);
                q_52 = t;
                t = r_52;
                if(((r_51 != NULL) && (r_51 != t)))
                  _fail(t);
                else
                  r_51 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_52);
                e_9 = t;
                t = SSLsetAnnotations(e_9, q_52);
                return(t);
              }
              t = fetch_1_0(p_6, t);
              t = term_c_16;
              o_52 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_51)), term_d_21);
              p_52 = t;
              t = SSL_printnl(o_52, p_52);
              t = (ATerm) ATmakeAppl(sym__2, term_c_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_51)), term_d_21));
              t = default_system_usage_0_0(t);
              t = term_g_16;
              n_52 = t;
              t = SSL_exit(n_52);
              LocalPopChoice(c_21);
            }
          else
            {
              t = y_20;
            }
        }
      }
  }
  s_51 = t;
  t = term_c_17;
  t = table_destroy_0_0(t);
  t = s_51;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_113 (ATerm), ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL;
  t = parse_options_1_0(s_113, t);
  x_52 = t;
  t = term_e_21;
  t = table_create_0_0(t);
  t = term_e_21;
  y_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, term_g_21, x_52);
  t = lookup_table_0_1(y_52, t);
  b_53 = t;
  t = term_g_21;
  z_52 = t;
  t = b_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(z_52, x_52, a_53, t);
  t = x_52;
  t = u_113(t);
  {
    ATerm h_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_113, t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = h_21;
        {
          ATerm m_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_113(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_21);
            }
          else
            {
              t = m_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_6, w_6, x_6, t);
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      {
        ATerm r_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(u_21);
          }
        else
          {
            t = r_21;
            {
              ATerm v_21 = t;
              int w_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
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
                        t = Option_3_0(i_7, l_7, s_7, t);
                        LocalPopChoice(y_21);
                      }
                    else
                      {
                        t = x_21;
                        {
                          ATerm z_21 = t;
                          int a_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(a_22);
                            }
                          else
                            {
                              t = z_21;
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
static ATerm s_6 (ATerm t)
{
  t = input_1_0(u_7, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--only-local", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  e_53 = t;
  t = term_b_22;
  f_53 = t;
  t = term_m_8;
  g_53 = t;
  t = term_c_22;
  t = p_7(f_53, g_53, t);
  t = e_53;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_d_22;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL;
  t = term_s_14;
  h_53 = t;
  t = term_m_8;
  i_53 = t;
  t = term_h_22;
  t = p_7(h_53, i_53, t);
  t = term_i_22;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = output_1_0(v_7, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,d_10 = NULL,m_9 = NULL;
  r_53 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_53);
  k_53 = t;
  t = l_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_53 = ATgetFirst((ATermList) t);
      o_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_53);
  m_53 = t;
  t = o_53;
  t = Cons_2_0(y_7, a_8, t);
  p_53 = t;
  t = (ATerm) ATinsert(CheckATermList(p_53), n_53);
  m_9 = t;
  t = SSLsetAnnotations(m_9, m_53);
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_53);
  d_10 = t;
  t = SSLsetAnnotations(d_10, k_53);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,l_9 = NULL;
  v_53 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      t_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_53);
  s_53 = t;
  t = t_53;
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_53 = NULL,x_53 = NULL;
        t = term_l_14;
        w_53 = t;
        t = term_b_22;
        x_53 = t;
        t = term_o_22;
        t = m_7(w_53, x_53, t);
        t = t_53;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        t = dead_def_elim_0_0(t);
      }
  }
  t = map_1_0(local_dead_def_elim_0_0, t);
  u_53 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, u_53);
  l_9 = t;
  t = SSLsetAnnotations(l_9, s_53);
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
  t = option_wrap_4_0(q_6, default_usage_0_0, _id, s_6, t);
  return(t);
}
