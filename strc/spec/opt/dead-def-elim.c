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
ATerm term_g_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_f_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_y_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_e_13;
ATerm term_a_13;
ATerm term_r_12;
ATerm term_w_10;
ATerm term_t_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_r_8;
ATerm term_c_8;
ATerm term_a_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_l_14);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_c_8);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_i_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_a_16);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_v_16);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_c_8);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_c_8);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, term_a_18, term_c_8);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_p_18);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_c_8);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local        do not eliminate top-level definitions", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_c_8);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_r_21);
}
#include <srts/init-stratego-application.h>
ATerm DefDead_0_0 (ATerm t);
ATerm filter_1_0 (ATerm n_103 (ATerm), ATerm t);
static ATerm m_5 (ATerm c_40, ATerm d_40, ATerm e_40, ATerm t);
static ATerm q_5 (ATerm u_39, ATerm v_39, ATerm t);
ATerm end_scope_1_0 (ATerm c_96 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm b_96 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm local_dead_def_elim_0_0 (ATerm t);
ATerm map_1_0 (ATerm u_96 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm v_5 (ATerm r_22, ATerm q_22, ATerm t);
static ATerm x_5 (ATerm o_99 (ATerm), ATerm r_44, ATerm q_44, ATerm t);
ATerm foldr_3_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm free_vars_3_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm z_5 (ATerm a_40, ATerm b_40, ATerm t);
ATerm Definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm l_97 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_20 (ATerm t_19, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm b_6 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm v_44, ATerm u_44, ATerm t);
static ATerm c_6 (ATerm j_99 (ATerm), ATerm p_44, ATerm o_44, ATerm t);
ATerm genzip_4_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm h_6 (ATerm u_624, ATerm z_624, ATerm g_60, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm k_24 (ATerm e_23, ATerm f_23, ATerm g_23, ATerm t);
static ATerm l_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm j_6 (ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm o_61, ATerm l_61, ATerm s_61, ATerm p_61, ATerm m_61, ATerm n_61, ATerm t);
ATerm GnNext_3_0 (ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm t);
ATerm for_3_0 (ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm t);
static ATerm m_6 (ATerm f_96 (ATerm), ATerm l_38, ATerm j_38, ATerm t);
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
static ATerm y_6 (ATerm g_41, ATerm h_41, ATerm t);
ATerm Cons_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm t);
static ATerm n_6 (ATerm k_30, ATerm l_30, ATerm t);
static ATerm o_6 (ATerm c_29, ATerm d_29, ATerm t);
static ATerm q_6 (ATerm w_91 (ATerm), ATerm z_202, ATerm i_29, ATerm t);
static ATerm p_6 (ATerm y_28, ATerm z_28, ATerm t);
static ATerm m_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm output_1_0 (ATerm q_112 (ATerm), ATerm t);
static ATerm l_32 (ATerm b_32, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_6 (ATerm e_29, ATerm t);
static ATerm s_6 (ATerm u_53, ATerm v_53, ATerm t);
static ATerm t_6 (ATerm m_30, ATerm n_30, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_35 (ATerm c_33, ATerm t);
static ATerm e_35 (ATerm m_33, ATerm p_33, ATerm q_33, ATerm t);
static ATerm h_35 (ATerm j_34, ATerm l_34, ATerm m_34, ATerm t);
static ATerm u_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm r_112 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_7 (ATerm f_34, ATerm g_34, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_6 (ATerm p_39, ATerm q_39, ATerm o_39, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_6 (ATerm x_36, ATerm y_36, ATerm t);
ATerm foldr_2_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_93 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm need_help_1_0 (ATerm h_112 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_97 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm k_114 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm parse_options_1_0 (ATerm j_114 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
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
        ATerm s_7 = ATgetArgument(t, 1);
      }
      {
        ATerm t_7 = ATgetArgument(t, 2);
      }
      {
        ATerm w_7 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL,m_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        b_1 = t;
        t = term_a_8;
        m_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        t = z_5(m_1, b_1, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = h_1;
        _fail(t);
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        {
          ATerm m_2 = NULL,n_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          m_2 = t;
          t = term_a_8;
          n_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          t = z_5(n_2, m_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm b_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_8) != ATmakeSymbol("j_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_c_8;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm n_103 (ATerm), ATerm t)
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
        ATerm d_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 = NULL,x_2 = NULL,a_3 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(a_2);
            t_2 = t;
            t = b_2;
            t = n_103(t);
            x_2 = t;
            t = d_2;
            t = filter_1_0(n_103, t);
            a_3 = t;
            t = (ATerm) ATinsert(CheckATermList(a_3), x_2);
            a_0 = t;
            t = SSLsetAnnotations(a_0, t_2);
            LocalPopChoice(e_8);
          }
        else
          {
            t = d_8;
            t = d_2;
            t = filter_1_0(n_103, t);
          }
      }
    }
  return(t);
}
static ATerm m_5 (ATerm c_40, ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_40, d_40);
  t = y_6(c_40, d_40, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_8 = ATgetFirst((ATermList) t);
      h_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_2), e_40);
  j_2 = t;
  t = SSL_table_put(c_40, d_40, j_2);
  t = i_2;
  return(t);
}
static ATerm q_5 (ATerm u_39, ATerm v_39, ATerm t)
{
  ATerm o_2 = NULL,v_2 = NULL;
  v_2 = t;
  {
    ATerm i_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_39, v_39);
        t = y_6(u_39, v_39, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_8 = ATgetFirst((ATermList) t);
            o_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_8);
        t = SSL_table_put(u_39, v_39, o_2);
        t = (ATerm) ATmakeAppl(sym__3, u_39, v_39, o_2);
      }
    else
      {
        t = i_8;
        t = SSL_table_remove(u_39, v_39);
        t = (ATerm) ATmakeAppl(sym__2, u_39, v_39);
      }
  }
  t = v_2;
  return(t);
}
ATerm end_scope_1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL;
  k_3 = t;
  t = c_96(t);
  i_3 = t;
  {
    ATerm o_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_3 = NULL;
        t = term_r_8;
        n_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_3, term_r_8);
        t = y_6(i_3, n_3, t);
        LocalPopChoice(q_8);
      }
    else
      {
        t = o_8;
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
  t = term_r_8;
  l_3 = t;
  t = SSL_table_put(i_3, l_3, y_2);
  t = z_2;
  {
    static ATerm n_0 (ATerm t)
    {
      ATerm o_3 = NULL;
      o_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, o_3);
      t = q_5(i_3, o_3, t);
      return(t);
    }
    t = map_1_0(n_0, t);
  }
  t = k_3;
  return(t);
}
ATerm restore_always_2_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm t)
{
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_87(t);
      t = u_87(t);
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      t = u_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
  s_3 = t;
  t = b_96(t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_3, term_r_8);
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_8 = ATgetArgument(t, 0);
            ATerm z_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_8;
        b_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_3, term_r_8);
        t = y_6(r_3, b_4, t);
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        t = (ATerm) ATempty;
      }
  }
  t_3 = t;
  t = term_r_8;
  u_3 = t;
  t = (ATerm) ATinsert(CheckATermList(t_3), (ATerm) ATempty);
  v_3 = t;
  t = SSL_table_put(r_3, u_3, v_3);
  t = s_3;
  return(t);
}
ATerm scope_2_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm t)
{
  static ATerm q_0 (ATerm t)
  {
    t = end_scope_1_0(d_96, t);
    return(t);
  }
  t = begin_scope_1_0(d_96, t);
  t = restore_always_2_0(e_96, q_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_a_8;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm z_3 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      z_3 = ATgetArgument(t, 0);
      {
        ATerm a_9 = ATgetArgument(t, 1);
      }
      {
        ATerm c_9 = ATgetArgument(t, 2);
      }
      {
        ATerm h_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  d_4 = t;
  t = term_j_9;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, z_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_j_9);
  t = m_6(v_0, d_4, e_4, t);
  t = c_4;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_a_8;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm k_9 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_9;
    }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  static ATerm t_0 (ATerm t)
  {
    ATerm l_8 = NULL,p_8 = NULL,s_8 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL,u_5 = NULL;
    u_5 = t;
    if(match_cons(t, sym_Let_2))
      {
        g_5 = ATgetArgument(t, 0);
        j_5 = ATgetArgument(t, 1);
        {
          ATerm l_9 = t;
          int m_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_3 = NULL,q_3 = NULL,o_0 = NULL;
              t = SSLgetAnnotations(u_5);
              j_3 = t;
              t = g_5;
              t = map_1_0(u_0, t);
              q_3 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, q_3, j_5);
              o_0 = t;
              t = SSLsetAnnotations(o_0, j_3);
              LocalPopChoice(m_9);
            }
          else
            {
              t = l_9;
              t = u_5;
            }
        }
      }
    else
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_CallT_3))
              {
                g_5 = ATgetArgument(t, 0);
                {
                  ATerm p_9 = ATgetArgument(t, 1);
                }
                {
                  ATerm q_9 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_9);
            t = g_5;
            if(match_cons(t, sym_SVar_1))
              {
                h_5 = ATgetArgument(t, 0);
                {
                  ATerm r_9 = t;
                  int s_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
                      t = term_a_8;
                      g_7 = t;
                      t = (ATerm) ATmakeAppl(sym_SDefT_4, h_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
                      h_7 = t;
                      t = term_t_9;
                      i_7 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_a_8, (ATerm)ATmakeAppl(sym_SDefT_4, h_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_t_9);
                      t = m_5(g_7, h_7, i_7, t);
                      t = u_5;
                      LocalPopChoice(s_9);
                    }
                  else
                    {
                      t = r_9;
                      t = u_5;
                    }
                }
              }
            else
              {
                t = u_5;
              }
          }
        else
          {
            t = n_9;
            t = u_5;
          }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    s_8 = t;
    if(match_cons(t, sym_Let_2))
      {
        l_8 = ATgetArgument(t, 0);
        p_8 = ATgetArgument(t, 1);
        {
          ATerm u_9 = t;
          int v_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_4 = NULL,r_4 = NULL,p_0 = NULL;
              t = SSLgetAnnotations(s_8);
              l_4 = t;
              t = l_8;
              t = filter_1_0(w_0, t);
              r_4 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, r_4, p_8);
              p_0 = t;
              t = SSLsetAnnotations(p_0, l_4);
              LocalPopChoice(v_9);
            }
          else
            {
              t = u_9;
              t = s_8;
            }
        }
      }
    else
      {
        t = s_8;
      }
    return(t);
  }
  t = scope_2_0(r_0, t_0, t);
  return(t);
}
ATerm map_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  static ATerm c_10 (ATerm t)
  {
    ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
    z_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_9;
      }
    else
      {
        ATerm l_5 = NULL,p_5 = NULL,r_5 = NULL,s_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_10 = ATgetFirst((ATermList) t);
            b_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_9);
        l_5 = t;
        t = a_10;
        t = u_96(t);
        p_5 = t;
        t = b_10;
        t = c_10(t);
        r_5 = t;
        t = (ATerm) ATinsert(CheckATermList(r_5), p_5);
        s_0 = t;
        t = SSLsetAnnotations(s_0, l_5);
      }
    return(t);
  }
  t = c_10(t);
  return(t);
}
ATerm sboundin_3_0 (ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
  t_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
      {
        ATerm k_6 = NULL,x_6 = NULL,a_7 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(t_13);
        k_6 = t;
        t = u_13;
        t = r_83(t);
        x_6 = t;
        t = v_13;
        t = r_83(t);
        a_7 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_6, a_7);
        y_0 = t;
        t = SSLsetAnnotations(y_0, k_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_13 = ATgetArgument(t, 0);
          v_13 = ATgetArgument(t, 1);
          r_13 = ATgetArgument(t, 2);
          {
            ATerm q_7 = NULL,u_7 = NULL,v_7 = NULL,x_7 = NULL,c_1 = NULL;
            t = SSLgetAnnotations(t_13);
            q_7 = t;
            t = u_13;
            t = t_83(t);
            u_7 = t;
            t = v_13;
            t = t_83(t);
            v_7 = t;
            t = r_13;
            t = r_83(t);
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, u_7, v_7, x_7);
            c_1 = t;
            t = SSLsetAnnotations(c_1, q_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              u_13 = ATgetArgument(t, 0);
              v_13 = ATgetArgument(t, 1);
              r_13 = ATgetArgument(t, 2);
              s_13 = ATgetArgument(t, 3);
              {
                ATerm v_8 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,d_1 = NULL;
                t = SSLgetAnnotations(t_13);
                v_8 = t;
                t = u_13;
                t = t_83(t);
                d_9 = t;
                t = v_13;
                t = t_83(t);
                e_9 = t;
                t = r_13;
                t = t_83(t);
                f_9 = t;
                t = s_13;
                t = r_83(t);
                g_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_9, e_9, f_9, g_9);
                d_1 = t;
                t = SSLsetAnnotations(d_1, v_8);
              }
            }
          else
            {
              ATerm e_10 = NULL,h_10 = NULL,i_10 = NULL,e_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  u_13 = ATgetArgument(t, 0);
                  v_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_13);
              e_10 = t;
              t = u_13;
              t = t_83(t);
              h_10 = t;
              t = v_13;
              t = r_83(t);
              i_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, h_10, i_10);
              e_1 = t;
              t = SSLsetAnnotations(e_1, e_10);
            }
        }
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm k_14 = NULL;
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_14 = ATgetArgument(t, 0);
          {
            ATerm y_9 = ATgetArgument(t, 1);
          }
          {
            ATerm d_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_9);
      t = k_14;
    }
  else
    {
      t = w_9;
      if(match_cons(t, sym_SDefT_4))
        {
          k_14 = ATgetArgument(t, 0);
          {
            ATerm f_10 = ATgetArgument(t, 1);
          }
          {
            ATerm g_10 = ATgetArgument(t, 2);
          }
          {
            ATerm j_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_14;
    }
  return(t);
}
static ATerm v_5 (ATerm r_22, ATerm q_22, ATerm t)
{
  t = r_22;
  t = map_1_0(x_0, t);
  return(t);
}
static ATerm x_5 (ATerm o_99 (ATerm), ATerm r_44, ATerm q_44, ATerm t)
{
  static ATerm j_16 (ATerm t)
  {
    ATerm w_15 = NULL,y_15 = NULL,z_15 = NULL;
    w_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_44;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_15 = ATgetFirst((ATermList) t);
            z_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_15;
              {
                static ATerm z_0 (ATerm t)
                {
                  t = q_44;
                  return(t);
                }
                t = b_6(o_99, z_0, y_15, z_15, t);
              }
              t = j_16(t);
              LocalPopChoice(l_10);
            }
          else
            {
              t = k_10;
              {
                ATerm y_10 = NULL,e_11 = NULL,p_1 = NULL;
                t = SSLgetAnnotations(w_15);
                y_10 = t;
                t = z_15;
                t = j_16(t);
                e_11 = t;
                t = (ATerm) ATinsert(CheckATermList(e_11), y_15);
                p_1 = t;
                t = SSLsetAnnotations(p_1, y_10);
              }
            }
        }
      }
    return(t);
  }
  t = r_44;
  t = j_16(t);
  return(t);
}
ATerm foldr_3_0 (ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_16;
      t = l_102(t);
    }
  else
    {
      ATerm w_16 = NULL,x_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_16 = ATgetFirst((ATermList) t);
          t_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_16;
      t = n_102(t);
      w_16 = t;
      t = t_16;
      t = foldr_3_0(l_102, m_102, n_102, t);
      x_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_16, x_16);
      t = m_102(t);
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
  ATerm a_12 = NULL,c_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(k_1, a_12, c_12, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm d_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      if((d_12 != ATgetArgument(t, 1)))
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
  ATerm s_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      s_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(o_1, s_12, t_12, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      u_12 = ATgetArgument(t, 0);
      if((u_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm o_17 (ATerm t)
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_106(t);
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        {
          ATerm o_10 = t;
          int p_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_17 = NULL,d_17 = NULL,s_11 = NULL,t_11 = NULL;
              b_17 = t;
              t = d_106(t);
              d_17 = t;
              t = b_17;
              {
                static ATerm a_1 (ATerm t)
                {
                  ATerm f_17 = NULL;
                  t = o_17(t);
                  f_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_17, d_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = e_106(a_1, o_17, f_1, t);
              }
              t_11 = t;
              t = SSL_explode_term(t_11);
              if(match_cons(t, sym__2))
                {
                  ATerm q_10 = ATgetArgument(t, 0);
                  s_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_11;
              t = foldr_3_0(g_1, j_1, _id, t);
              LocalPopChoice(p_10);
            }
          else
            {
              t = o_10;
              {
                ATerm k_12 = NULL,l_12 = NULL;
                l_12 = t;
                t = SSL_explode_term(l_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm r_10 = ATgetArgument(t, 0);
                    k_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_12;
                t = foldr_3_0(l_1, n_1, o_17, t);
              }
            }
        }
      }
    return(t);
  }
  t = o_17(t);
  return(t);
}
static ATerm z_5 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm p_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_40, b_40);
  t = y_6(a_40, b_40, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_17 = ATgetFirst((ATermList) t);
      {
        ATerm s_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_17;
  return(t);
}
ATerm Definition_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL;
  k_18 = t;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      {
        ATerm t_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_14 = NULL,g_14 = NULL,h_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATempty);
        g_14 = t;
        t = term_w_10;
        h_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_10, (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATempty));
        t = z_5(h_14, g_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm x_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_10) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            a_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_14;
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        {
          ATerm z_10 = t;
          int a_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_14 = NULL,r_14 = NULL,s_14 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATempty);
              r_14 = t;
              t = term_w_10;
              s_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_w_10, (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATempty));
              t = z_5(s_14, r_14, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm b_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_11) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  o_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_14;
              LocalPopChoice(a_11);
            }
          else
            {
              t = z_10;
              {
                ATerm z_14 = NULL,f_15 = NULL,g_15 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATempty);
                f_15 = t;
                t = term_w_10;
                g_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_10, (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATempty));
                t = z_5(g_15, f_15, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm c_11 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) c_11) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    z_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_14;
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  static ATerm l_19 (ATerm t)
  {
    ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
    k_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_19 = ATgetFirst((ATermList) t);
        j_19 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_15 = NULL,x_15 = NULL,s_1 = NULL;
          t = SSLgetAnnotations(k_19);
          m_15 = t;
          t = j_19;
          t = l_19(t);
          x_15 = t;
          t = (ATerm) ATinsert(CheckATermList(x_15), i_19);
          s_1 = t;
          t = SSLsetAnnotations(s_1, m_15);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_19;
        t = l_97(t);
      }
    return(t);
  }
  t = l_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_18;
    }
  else
    {
      static ATerm q_1 (ATerm t)
      {
        t = not_null(u_18);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_18 = ATgetFirst((ATermList) t);
          if(((u_18 != NULL) && (u_18 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_18;
      t = at_end_1_0(q_1, t);
    }
  return(t);
}
static ATerm d_20 (ATerm t_19, ATerm t)
{
  ATerm u_19 = NULL;
  t = SSL_explode_term(t_19);
  if(match_cons(t, sym__2))
    {
      ATerm d_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_19;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  y_19 = t;
  if(match_cons(t, sym__2))
    {
      w_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_1 (ATerm t)
            {
              t = x_19;
              return(t);
            }
            t = w_19;
            t = at_end_1_0(r_1, t);
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            t = d_20(y_19, t);
          }
      }
    }
  else
    {
      t = d_20(y_19, t);
    }
  return(t);
}
static ATerm b_6 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm v_44, ATerm u_44, ATerm t)
{
  t = s_99(t);
  {
    static ATerm t_1 (ATerm t)
    {
      ATerm e_20 = NULL;
      e_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_44, e_20);
      t = r_99(t);
      return(t);
    }
    t = fetch_1_0(t_1, t);
  }
  t = u_44;
  return(t);
}
static ATerm c_6 (ATerm j_99 (ATerm), ATerm p_44, ATerm o_44, ATerm t)
{
  static ATerm b_21 (ATerm t)
  {
    ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
    s_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_20;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_20 = ATgetFirst((ATermList) t);
            u_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_20;
              {
                static ATerm v_1 (ATerm t)
                {
                  t = o_44;
                  return(t);
                }
                t = b_6(j_99, v_1, t_20, u_20, t);
              }
              t = b_21(t);
              LocalPopChoice(i_11);
            }
          else
            {
              t = h_11;
              {
                ATerm k_16 = NULL,o_16 = NULL,u_1 = NULL;
                t = SSLgetAnnotations(s_20);
                k_16 = t;
                t = u_20;
                t = b_21(t);
                o_16 = t;
                t = (ATerm) ATinsert(CheckATermList(o_16), t_20);
                u_1 = t;
                t = SSLsetAnnotations(u_1, k_16);
              }
            }
        }
      }
    return(t);
  }
  t = p_44;
  t = b_21(t);
  return(t);
}
ATerm genzip_4_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm), ATerm t)
{
  static ATerm s_21 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_88(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          ATerm f_21 = NULL,i_21 = NULL,j_21 = NULL,m_21 = NULL,p_21 = NULL,q_21 = NULL,w_1 = NULL;
          t = z_88(t);
          q_21 = t;
          if(match_cons(t, sym__2))
            {
              i_21 = ATgetArgument(t, 0);
              j_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_21);
          f_21 = t;
          t = i_21;
          t = b_89(t);
          m_21 = t;
          t = j_21;
          t = s_21(t);
          p_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_21, p_21);
          w_1 = t;
          t = SSLsetAnnotations(w_1, f_21);
          t = a_89(t);
        }
      }
    return(t);
  }
  t = s_21(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      if(((ATgetType(l_11) != AT_LIST) || !(ATisEmpty(l_11))))
        _fail(t);
      {
        ATerm m_11 = ATgetArgument(t, 1);
        if(((ATgetType(m_11) != AT_LIST) || !(ATisEmpty(m_11))))
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
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(((ATgetType(n_11) == AT_LIST) && !(ATisEmpty(n_11))))
        {
          h_22 = ATgetFirst((ATermList) n_11);
          i_22 = (ATerm) ATgetNext((ATermList) n_11);
        }
      else
        _fail(t);
      {
        ATerm o_11 = ATgetArgument(t, 1);
        if(((ATgetType(o_11) == AT_LIST) && !(ATisEmpty(o_11))))
          {
            j_22 = ATgetFirst((ATermList) o_11);
            k_22 = (ATerm) ATgetNext((ATermList) o_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_22, j_22), (ATerm) ATmakeAppl(sym__2, i_22, k_22));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm l_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_22), l_22);
  return(t);
}
static ATerm h_6 (ATerm u_624, ATerm z_624, ATerm g_60, ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  t = SSL_explode_term(z_624);
  if(match_cons(t, sym__2))
    {
      w_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_624);
  if(match_cons(t, sym__2))
    {
      if((w_21 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_21, y_21);
  t = genzip_4_0(x_1, c_2, e_2, _id, t);
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_21, g_60);
  t = conc_0_0(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm z_22 = NULL;
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_22);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,y_1 = NULL;
  d_23 = t;
  if(match_cons(t, sym__2))
    {
      b_23 = ATgetArgument(t, 0);
      c_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_23);
  a_23 = t;
  t = c_23;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_23, c_23);
  y_1 = t;
  t = SSLsetAnnotations(y_1, a_23);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  w_23 = t;
  if(match_cons(t, sym__2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_23 = ATgetFirst((ATermList) t);
      a_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_24(x_23, y_23, w_23, t);
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_23), z_23), a_24);
          }
      }
    }
  else
    {
      t = k_24(x_23, y_23, w_23, t);
    }
  return(t);
}
static ATerm k_24 (ATerm e_23, ATerm f_23, ATerm g_23, ATerm t)
{
  ATerm h_23 = NULL,k_23 = NULL,z_1 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  t = SSLgetAnnotations(g_23);
  h_23 = t;
  t = f_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_23 = ATgetFirst((ATermList) t);
      q_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_23;
  if(match_cons(t, sym__2))
    {
      o_23 = ATgetArgument(t, 0);
      p_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_23;
        if((o_23 != t))
          {
            _fail(t);
          }
        t = q_23;
        LocalPopChoice(u_11);
      }
    else
      {
        t = r_11;
        t = f_23;
        t = h_6(o_23, p_23, q_23, t);
      }
  }
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_23, k_23);
  z_1 = t;
  t = SSLsetAnnotations(z_1, h_23);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm j_24 = NULL;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      if((j_24 != ATgetArgument(t, 1)))
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
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_2, g_2, k_2, t);
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
        e_24 = t;
        if(match_cons(t, sym__2))
          {
            f_24 = ATgetArgument(t, 0);
            g_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_24;
        t = c_6(l_2, f_24, g_24, t);
      }
    }
  return(t);
}
static ATerm j_6 (ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm o_61, ATerm l_61, ATerm s_61, ATerm p_61, ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_61, p_61);
  t = v_116(t);
  l_24 = t;
  t = w_116(t);
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_24, s_61);
  t = diff_0_0(t);
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_24, l_61);
  t = conc_0_0(t);
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_24, s_61);
  t = conc_0_0(t);
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_61, l_24, m_61);
  t = x_116(t);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__5, o_24, p_24, p_61, q_24, n_61);
  return(t);
}
ATerm GnNext_3_0 (ATerm v_116 (ATerm), ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm x_11 = ATgetArgument(t, 0);
      if(((ATgetType(x_11) == AT_LIST) && !(ATisEmpty(x_11))))
        {
          s_24 = ATgetFirst((ATermList) x_11);
          t_24 = (ATerm) ATgetNext((ATermList) x_11);
        }
      else
        _fail(t);
      u_24 = ATgetArgument(t, 1);
      v_24 = ATgetArgument(t, 2);
      w_24 = ATgetArgument(t, 3);
      x_24 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = j_6(v_116, w_116, x_116, s_24, t_24, u_24, v_24, w_24, x_24, t);
  return(t);
}
ATerm while_not_2_0 (ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm t)
{
  static ATerm y_24 (ATerm t)
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_90(t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = z_90(t);
        t = y_24(t);
      }
    return(t);
  }
  t = y_24(t);
  return(t);
}
ATerm for_3_0 (ATerm b_91 (ATerm), ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm t)
{
  t = b_91(t);
  t = while_not_2_0(c_91, d_91, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  if(match_cons(t, sym__3))
    {
      c_25 = ATgetArgument(t, 0);
      d_25 = ATgetArgument(t, 1);
      e_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, c_25, c_25, d_25, e_25, (ATerm) ATempty);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm b_12 = ATgetArgument(t, 0);
      if(((ATgetType(b_12) != AT_LIST) || !(ATisEmpty(b_12))))
        _fail(t);
      {
        ATerm e_12 = ATgetArgument(t, 1);
      }
      {
        ATerm f_12 = ATgetArgument(t, 2);
      }
      h_25 = ATgetArgument(t, 3);
      i_25 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_25, i_25);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm s_116 (ATerm), ATerm t_116 (ATerm), ATerm u_116 (ATerm), ATerm t)
{
  ATerm b_25 = NULL;
  static ATerm r_2 (ATerm t)
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(s_116, t_116, u_116, t);
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        {
          ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
          if(match_cons(t, sym__5))
            {
              k_25 = ATgetArgument(t, 0);
              q_25 = ATgetArgument(t, 1);
              r_25 = ATgetArgument(t, 2);
              s_25 = ATgetArgument(t, 3);
              t_25 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = k_25;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_25 = ATgetFirst((ATermList) t);
              m_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, m_25, q_25, r_25, s_25, (ATerm) ATinsert(CheckATermList(t_25), l_25));
        }
      }
    return(t);
  }
  t = for_3_0(p_2, q_2, r_2, t);
  if(match_cons(t, sym__2))
    {
      b_25 = ATgetArgument(t, 0);
      {
        ATerm i_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_25;
  return(t);
}
static ATerm m_6 (ATerm f_96 (ATerm), ATerm l_38, ATerm j_38, ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,o_26 = NULL,p_26 = NULL;
  h_26 = t;
  t = f_96(t);
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_26, l_38, j_38);
  t = z_6(e_26, l_38, j_38, t);
  {
    ATerm j_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_26 = NULL;
        t = term_r_8;
        q_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_26, term_r_8);
        t = y_6(e_26, q_26, t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = j_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_26 = ATgetFirst((ATermList) t);
      g_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_8;
  o_26 = t;
  t = (ATerm) ATinsert(CheckATermList(g_26), (ATerm) ATinsert(CheckATermList(f_26), l_38));
  p_26 = t;
  t = SSL_table_put(e_26, o_26, p_26);
  t = h_26;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  s_26 = t;
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDef_3))
          {
            t_26 = ATgetArgument(t, 0);
            {
              ATerm p_12 = ATgetArgument(t, 1);
            }
            {
              ATerm q_12 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_12);
        {
          ATerm a_27 = NULL,b_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, t_26, (ATerm) ATempty);
          a_27 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_12, s_26);
          b_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_r_12, s_26));
          t = m_6(s_2, a_27, b_27, t);
          t = s_26;
        }
      }
    else
      {
        t = n_12;
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  t_26 = ATgetArgument(t, 0);
                  {
                    ATerm x_12 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm y_12 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm z_12 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(w_12);
              {
                ATerm i_27 = NULL,j_27 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, t_26, (ATerm) ATempty);
                i_27 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_13, s_26);
                j_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_a_13, s_26));
                t = m_6(u_2, i_27, j_27, t);
                t = s_26;
              }
            }
          else
            {
              t = v_12;
              {
                ATerm p_27 = NULL,s_27 = NULL;
                if(match_cons(t, sym_SDefT_4))
                  {
                    t_26 = ATgetArgument(t, 0);
                    {
                      ATerm b_13 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm c_13 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm d_13 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, t_26, (ATerm) ATempty);
                p_27 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_13, s_26);
                s_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_e_13, s_26));
                t = m_6(w_2, p_27, s_27, t);
                t = s_26;
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
  ATerm t_30 = NULL,u_30 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      t_30 = ATgetArgument(t, 1);
      u_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_30), t_30);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm g_28 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      g_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_28);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,n_28 = NULL;
  h_28 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
      t = h_28;
      t = v_5(i_28, j_28, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_28 = ATgetArgument(t, 0);
          j_28 = ATgetArgument(t, 1);
          k_28 = ATgetArgument(t, 2);
          t = j_28;
          t = map_1_0(f_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              i_28 = ATgetArgument(t, 0);
              j_28 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, i_28);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  i_28 = ATgetArgument(t, 0);
                  j_28 = ATgetArgument(t, 1);
                  k_28 = ATgetArgument(t, 2);
                  n_28 = ATgetArgument(t, 3);
                  t = j_28;
                  t = map_1_0(g_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_28 = ATgetArgument(t, 0);
                      j_28 = ATgetArgument(t, 1);
                      k_28 = ATgetArgument(t, 2);
                      n_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_28;
                  t = map_1_0(h_3, t);
                }
            }
        }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm x_28 = NULL;
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_28 = ATgetArgument(t, 0);
          {
            ATerm i_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_13);
      t = x_28;
    }
  else
    {
      t = g_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_28;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm z_29 = NULL;
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_29 = ATgetArgument(t, 0);
          {
            ATerm l_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_13);
      t = z_29;
    }
  else
    {
      t = j_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_29;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm q_30 = NULL;
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_30 = ATgetArgument(t, 0);
          {
            ATerm o_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_13);
      t = q_30;
    }
  else
    {
      t = m_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_30;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm a_28 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_p_13), a_28, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(Definition_0_0, b_3, c_3, t);
  return(t);
}
static ATerm y_6 (ATerm g_41, ATerm h_41, ATerm t)
{
  t = SSL_table_get(g_41, h_41);
  return(t);
}
ATerm Cons_2_0 (ATerm i_70 (ATerm), ATerm j_70 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,n_4 = NULL;
  a_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_30 = ATgetFirst((ATermList) t);
      x_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_31);
  v_30 = t;
  t = w_30;
  t = i_70(t);
  y_30 = t;
  t = x_30;
  t = j_70(t);
  z_30 = t;
  t = (ATerm) ATinsert(CheckATermList(z_30), y_30);
  n_4 = t;
  t = SSLsetAnnotations(n_4, v_30);
  return(t);
}
static ATerm n_6 (ATerm k_30, ATerm l_30, ATerm t)
{
  ATerm b_31 = NULL;
  t = SSL_fputc(k_30, l_30);
  b_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_31);
  return(t);
}
static ATerm o_6 (ATerm c_29, ATerm d_29, ATerm t)
{
  ATerm c_31 = NULL;
  t = SSL_write_term_to_stream_text(c_29, d_29);
  c_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_31);
  return(t);
}
static ATerm q_6 (ATerm w_91 (ATerm), ATerm z_202, ATerm i_29, ATerm t)
{
  ATerm d_31 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_202, term_q_13);
  t = u_6(t);
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_31, i_29);
  t = w_91(t);
  t = fclose_0_0(t);
  t = i_29;
  return(t);
}
static ATerm p_6 (ATerm y_28, ATerm z_28, ATerm t)
{
  ATerm e_31 = NULL;
  t = SSL_write_term_to_stream_baf(y_28, z_28);
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_31);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      if(match_cons(w_13, sym_Stream_1))
        {
          l_31 = ATgetArgument(w_13, 0);
        }
      else
        _fail(t);
      m_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(l_31, m_31, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_13 = ATgetArgument(t, 0);
      if(match_cons(x_13, sym_Stream_1))
        {
          q_31 = ATgetArgument(x_13, 0);
        }
      else
        _fail(t);
      r_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(q_31, r_31, t);
  n_31 = t;
  t = term_y_13;
  o_31 = t;
  t = n_31;
  if(match_cons(t, sym_Stream_1))
    {
      p_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, n_31);
  t = n_6(o_31, p_31, t);
  return(t);
}
ATerm output_1_0 (ATerm q_112 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL;
  t = q_112(t);
  g_31 = t;
  {
    ATerm z_13 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_31 = NULL,i_31 = NULL;
        t = term_c_14;
        h_31 = t;
        t = term_d_14;
        i_31 = t;
        t = term_e_14;
        t = y_6(h_31, i_31, t);
        LocalPopChoice(b_14);
      }
    else
      {
        t = z_13;
        t = term_f_14;
      }
  }
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_31, g_31);
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_31 = NULL,k_31 = NULL;
        t = term_c_14;
        j_31 = t;
        t = term_l_14;
        k_31 = t;
        t = term_m_14;
        t = y_6(j_31, k_31, t);
        t = (ATerm) ATmakeAppl(sym__2, f_31, g_31);
        LocalPopChoice(j_14);
        if(match_cons(t, sym__2))
          {
            ATerm n_14 = ATgetArgument(t, 0);
            ATerm p_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_6(m_3, f_31, g_31, t);
      }
    else
      {
        t = i_14;
        if(match_cons(t, sym__2))
          {
            ATerm q_14 = ATgetArgument(t, 0);
            ATerm t_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_6(p_3, f_31, g_31, t);
      }
  }
  return(t);
}
static ATerm l_32 (ATerm b_32, ATerm t)
{
  t = SSL_fclose(b_32);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_32 = NULL,j_32 = NULL;
  j_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_32 = ATgetArgument(t, 0);
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_32);
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            t = l_32(j_32, t);
          }
      }
    }
  else
    {
      t = l_32(j_32, t);
    }
  return(t);
}
static ATerm r_6 (ATerm e_29, ATerm t)
{
  t = SSL_read_term_from_stream(e_29);
  return(t);
}
static ATerm s_6 (ATerm u_53, ATerm v_53, ATerm t)
{
  t = SSL_strcat(u_53, v_53);
  return(t);
}
static ATerm t_6 (ATerm m_30, ATerm n_30, ATerm t)
{
  ATerm m_32 = NULL;
  t = SSL_fopen(m_30, n_30);
  m_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_32);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_32 = NULL;
  t = SSL_stdin_stream();
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_32 = NULL;
  t = SSL_stdout_stream();
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_32 = NULL;
  t = SSL_stderr_stream();
  u_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_32);
  return(t);
}
static ATerm d_35 (ATerm c_33, ATerm t)
{
  ATerm g_33 = NULL;
  t = SSL_explode_term(c_33);
  if(match_cons(t, sym__2))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_14 = ATgetArgument(t, 1);
        if(((ATgetType(x_14) == AT_LIST) && !(ATisEmpty(x_14))))
          {
            g_33 = ATgetFirst((ATermList) x_14);
            {
              ATerm y_14 = (ATerm) ATgetNext((ATermList) x_14);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_33;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_33;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_33;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_33;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_35 (ATerm m_33, ATerm p_33, ATerm q_33, ATerm t)
{
  ATerm t_33 = NULL,v_33 = NULL,x_33 = NULL,h_34 = NULL,p_4 = NULL;
  t = SSLgetAnnotations(q_33);
  x_33 = t;
  t = m_33;
  if(match_cons(t, sym_Path_1))
    {
      h_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_34, p_33);
  p_4 = t;
  t = SSLsetAnnotations(p_4, x_33);
  if(match_cons(t, sym__2))
    {
      t_33 = ATgetArgument(t, 0);
      v_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(t_33, v_33, t);
  return(t);
}
static ATerm h_35 (ATerm j_34, ATerm l_34, ATerm m_34, ATerm t)
{
  ATerm p_34 = NULL,r_34 = NULL,s_34 = NULL,v_34 = NULL,t_4 = NULL;
  t = SSLgetAnnotations(m_34);
  s_34 = t;
  t = SSL_is_string(j_34);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_34, l_34);
  t_4 = t;
  t = SSLsetAnnotations(t_4, s_34);
  if(match_cons(t, sym__2))
    {
      p_34 = ATgetArgument(t, 0);
      r_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(p_34, r_34, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  if(match_cons(t, sym__2))
    {
      a_35 = ATgetArgument(t, 0);
      b_35 = ATgetArgument(t, 1);
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_35(z_34, t);
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            {
              ATerm c_15 = t;
              int d_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_35(a_35, b_35, z_34, t);
                  LocalPopChoice(d_15);
                }
              else
                {
                  t = c_15;
                  t = h_35(a_35, b_35, z_34, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_35(z_34, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_35 = NULL,l_35 = NULL,m_35 = NULL,w_35 = NULL;
  w_35 = t;
  {
    ATerm e_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_35, term_i_15);
        t = u_6(t);
        LocalPopChoice(h_15);
      }
    else
      {
        t = e_15;
        {
          ATerm y_18 = NULL,z_18 = NULL;
          t = term_j_15;
          z_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_15, w_35);
          t = s_6(z_18, w_35, t);
          y_18 = t;
          t = SSL_perror(y_18);
          _fail(t);
        }
      }
  }
  l_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(m_35, t);
  j_35 = t;
  t = l_35;
  t = fclose_0_0(t);
  t = j_35;
  return(t);
}
ATerm input_1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_36 = NULL,c_36 = NULL;
      t = term_c_14;
      b_36 = t;
      t = term_n_15;
      c_36 = t;
      t = term_o_15;
      t = y_6(b_36, c_36, t);
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      t = term_p_15;
    }
  t = ReadFromFile_0_0(t);
  t = r_112(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  d_36 = t;
  t = term_c_8;
  t = whoami_0_0(t);
  e_36 = t;
  t = term_q_15;
  i_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_15), e_36), term_r_15);
  j_36 = t;
  t = SSL_printnl(i_36, j_36);
  t = term_t_15;
  h_36 = t;
  t = SSL_exit(h_36);
  t = d_36;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm n_36 = NULL;
  n_36 = t;
  if(match_string(t, "-k"))
    {
      t = n_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_36;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
  q_36 = t;
  t = SSL_string_to_int(q_36);
  r_36 = t;
  t = term_u_15;
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_15, r_36);
  t = b_7(s_36, r_36, t);
  t = q_36;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm v_36 = NULL;
  v_36 = t;
  if(match_string(t, "-S"))
    {
      t = v_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_36;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm w_36 = NULL,b_37 = NULL;
  t = term_a_16;
  w_36 = t;
  t = term_b_16;
  b_37 = t;
  t = term_c_16;
  t = b_7(w_36, b_37, t);
  t = term_d_16;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_e_16;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  t = SSL_string_to_int(c_37);
  d_37 = t;
  t = term_a_16;
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_16, d_37);
  t = b_7(e_37, d_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_37);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_f_16;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL;
  t = term_g_16;
  f_37 = t;
  t = term_c_8;
  g_37 = t;
  t = term_h_16;
  t = b_7(f_37, g_37, t);
  t = term_i_16;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_4, f_4, g_4, t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_4, i_4, j_4, t);
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            t = Option_3_0(k_4, m_4, o_4, t);
          }
      }
    }
  return(t);
}
static ATerm b_7 (ATerm f_34, ATerm g_34, ATerm t)
{
  ATerm h_37 = NULL;
  t = term_c_14;
  h_37 = t;
  t = SSL_table_put(h_37, f_34, g_34);
  t = (ATerm) ATmakeAppl(sym__3, term_c_14, f_34, g_34);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
      t = term_c_8;
      t = e_0(t);
      o_37 = t;
      t = term_u_16;
      p_37 = t;
      t = term_v_16;
      q_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_16, term_v_16, o_37);
      t = z_6(p_37, q_37, o_37, t);
      _fail(t);
    }
  else
    {
      ATerm v_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_37 = ATgetFirst((ATermList) t);
          l_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_37;
      t = c_0(t);
      t = term_c_8;
      t = d_0(t);
      v_37 = t;
      t = (ATerm) ATinsert(CheckATermList(l_37), v_37);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm x_37 = NULL;
  x_37 = t;
  if(match_string(t, "-o"))
    {
      t = x_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_37;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL;
  y_37 = t;
  t = term_d_14;
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_14, y_37);
  t = b_7(z_37, y_37, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_37);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_y_16;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, s_4, u_4, t);
  return(t);
}
static ATerm z_6 (ATerm p_39, ATerm q_39, ATerm o_39, ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,o_38 = NULL;
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_39, q_39);
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_17 = ATgetArgument(t, 0);
            ATerm e_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_39, q_39);
        t = y_6(p_39, q_39, t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        t = (ATerm) ATempty;
      }
  }
  c_38 = t;
  t = (ATerm) ATinsert(CheckATermList(c_38), o_39);
  o_38 = t;
  t = SSL_table_put(p_39, q_39, o_38);
  t = b_38;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
      t = term_c_8;
      t = m_0(t);
      b_39 = t;
      t = term_u_16;
      c_39 = t;
      t = term_v_16;
      d_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_16, term_v_16, b_39);
      t = z_6(c_39, d_39, b_39, t);
      _fail(t);
    }
  else
    {
      ATerm j_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_38 = ATgetFirst((ATermList) t);
          x_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_38 = ATgetFirst((ATermList) t);
          z_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_38;
      t = k_0(t);
      t = y_38;
      t = l_0(t);
      j_39 = t;
      t = (ATerm) ATinsert(CheckATermList(z_38), j_39);
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm x_39 = NULL;
  x_39 = t;
  if(match_string(t, "-i"))
    {
      t = x_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_39;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL;
  y_39 = t;
  t = term_n_15;
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_15, y_39);
  t = b_7(z_39, y_39, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_39);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, w_4, y_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_8;
  t = whoami_0_0(t);
  g_40 = t;
  t = term_q_15;
  j_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_17), g_40);
  k_40 = t;
  t = SSL_printnl(j_40, k_40);
  t = term_t_15;
  i_40 = t;
  t = SSL_exit(i_40);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_40 = NULL,n_40 = NULL;
  t = term_c_14;
  l_40 = t;
  t = term_i_17;
  n_40 = t;
  t = term_j_17;
  t = y_6(l_40, n_40, t);
  return(t);
}
static ATerm v_6 (ATerm x_36, ATerm y_36, ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_36, y_36);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      t = SSL_addr(x_36, y_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_102 (ATerm), ATerm k_102 (ATerm), ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
  r_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_40;
      t = j_102(t);
    }
  else
    {
      ATerm w_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_40 = ATgetFirst((ATermList) t);
          t_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_40;
      t = foldr_2_0(j_102, k_102, t);
      w_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_40, w_40);
      t = k_102(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_b_16;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm s_19 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      s_19 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(s_19, b_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_41 = NULL,o_19 = NULL,p_19 = NULL;
  t = times_0_0(t);
  p_19 = t;
  t = SSL_explode_term(p_19);
  if(match_cons(t, sym__2))
    {
      ATerm m_17 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_19;
  t = foldr_2_0(z_4, a_5, t);
  a_41 = t;
  t = SSL_TicksToSeconds(a_41);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  if(match_cons(t, sym__2))
    {
      o_41 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_41;
        if((o_41 != t))
          {
            _fail(t);
          }
        t = n_41;
        LocalPopChoice(q_17);
      }
    else
      {
        t = n_17;
        t = (ATerm) ATmakeAppl(sym__2, o_41, p_41);
        {
          ATerm r_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_41, p_41);
              LocalPopChoice(s_17);
            }
          else
            {
              t = r_17;
              t = SSL_gtr(o_41, p_41);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_41, p_41);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_93 (ATerm), ATerm t)
{
  ATerm v_41 = NULL;
  v_41 = t;
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
        t = term_c_14;
        a_42 = t;
        t = term_a_16;
        b_42 = t;
        t = term_v_17;
        t = y_6(a_42, b_42, t);
        z_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_41, term_t_15);
        t = geq_0_0(t);
        t = v_41;
        t = m_93(t);
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        t = v_41;
      }
  }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm n_42 = NULL,q_42 = NULL,u_42 = NULL,w_42 = NULL;
  t = run_time_0_0(t);
  n_42 = t;
  t = term_c_8;
  t = whoami_0_0(t);
  q_42 = t;
  t = term_q_15;
  u_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_17), n_42), term_w_17), q_42);
  w_42 = t;
  t = SSL_printnl(u_42, w_42);
  t = (ATerm) ATmakeAppl(sym__2, term_q_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_17), n_42), term_w_17), q_42));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_16;
  x_42 = t;
  t = SSL_exit(x_42);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm r_43 = NULL,v_43 = NULL;
  v_43 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_43;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_43 = ATgetArgument(t, 0);
          {
            ATerm e_21 = NULL,x_4 = NULL;
            t = SSLgetAnnotations(v_43);
            e_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_43);
            x_4 = t;
            t = SSLsetAnnotations(x_4, e_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_43;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_43 = NULL,g_43 = NULL;
      t = term_c_14;
      f_43 = t;
      t = term_a_18;
      g_43 = t;
      t = term_b_18;
      t = y_6(f_43, g_43, t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      t = fetch_1_0(d_5, t);
    }
  t = h_112(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_43 = ATgetFirst((ATermList) t);
      z_43 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_44 = NULL,e_44 = NULL;
        static ATerm i_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_44)), not_null(e_44));
          return(t);
        }
        t = z_43;
        t = i_0(t);
        if(((d_44 != NULL) && (d_44 != t)))
          _fail(t);
        else
          d_44 = t;
        t = y_43;
        t = g_0(t);
        if(((e_44 != NULL) && (e_44 != t)))
          _fail(t);
        else
          e_44 = t;
        t = z_43;
        t = reverse_acc_2_0(g_0, i_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,b_5 = NULL;
  m_44 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_44);
  k_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_44);
  b_5 = t;
  t = SSLsetAnnotations(b_5, k_44);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm s_44 = NULL;
  s_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_44), term_c_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL;
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_44 = NULL,j_44 = NULL;
      t = term_c_14;
      i_44 = t;
      t = term_i_17;
      j_44 = t;
      t = term_j_17;
      t = y_6(i_44, j_44, t);
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      t = fetch_1_0(k_5, t);
    }
  t = term_f_18;
  t = echo_0_0(t);
  t = term_u_16;
  g_44 = t;
  t = term_v_16;
  h_44 = t;
  t = term_g_18;
  t = y_6(g_44, h_44, t);
  t = reverse_acc_2_0(_id, n_5, t);
  t = map_1_0(o_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  static ATerm z_45 (ATerm t)
  {
    ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
    w_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_45 = ATgetFirst((ATermList) t);
        y_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_21 = NULL,a_22 = NULL,e_5 = NULL;
          t = SSLgetAnnotations(w_45);
          t_21 = t;
          t = x_45;
          t = e_97(t);
          a_22 = t;
          t = (ATerm) ATinsert(CheckATermList(y_45), a_22);
          e_5 = t;
          t = SSLsetAnnotations(e_5, t_21);
          LocalPopChoice(i_18);
        }
      else
        {
          t = h_18;
          {
            ATerm p_22 = NULL,v_22 = NULL,f_5 = NULL;
            t = SSLgetAnnotations(w_45);
            p_22 = t;
            t = y_45;
            t = z_45(t);
            v_22 = t;
            t = (ATerm) ATinsert(CheckATermList(v_22), x_45);
            f_5 = t;
            t = SSLsetAnnotations(f_5, p_22);
          }
        }
    }
    return(t);
  }
  t = z_45(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL;
  j_46 = t;
  {
    ATerm j_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_18 = ATgetFirst((ATermList) t);
                ATerm o_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_46;
          }
        LocalPopChoice(m_18);
      }
    else
      {
        t = j_18;
        t = (ATerm) ATinsert(ATempty, j_46);
      }
  }
  k_46 = t;
  t = term_f_14;
  l_46 = t;
  t = SSL_printnl(l_46, k_46);
  t = j_46;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL;
  t = term_c_14;
  p_46 = t;
  t = term_i_17;
  q_46 = t;
  t = term_j_17;
  t = y_6(p_46, q_46, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL;
  t = term_p_18;
  r_46 = t;
  t = term_c_8;
  s_46 = t;
  t = term_q_18;
  t = b_7(r_46, s_46, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_r_18;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL;
  t = term_p_18;
  v_46 = t;
  t = term_c_8;
  w_46 = t;
  t = term_q_18;
  t = b_7(v_46, w_46, t);
  t = term_v_18;
  t_46 = t;
  t = term_c_8;
  u_46 = t;
  t = term_w_18;
  t = b_7(t_46, u_46, t);
  t = term_x_18;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_a_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_5, t_5, w_5, t);
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      t = Option_3_0(y_5, a_6, d_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_114 (ATerm), ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,g_47 = NULL,h_47 = NULL,f_8 = NULL;
  b_47 = t;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_19;
        t = k_114(t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
      }
  }
  t = b_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_47 = ATgetFirst((ATermList) t);
      e_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_47);
  c_47 = t;
  t = term_i_17;
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_17, d_47);
  t = b_7(h_47, d_47, t);
  t = e_47;
  {
    static ATerm r_47 (ATerm t)
    {
      ATerm g_19 = t;
      int h_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_19 = t;
          int n_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_47 = NULL;
              k_47 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_47;
              LocalPopChoice(n_19);
            }
          else
            {
              t = m_19;
              t = k_114(t);
              t = Cons_2_0(_id, r_47, t);
            }
          LocalPopChoice(h_19);
        }
      else
        {
          t = g_19;
          {
            ATerm n_47 = NULL,o_47 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_47 = ATgetFirst((ATermList) t);
                o_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_47), (ATerm) ATmakeAppl(sym_Undefined_1, n_47));
          }
        }
      return(t);
    }
    t = r_47(t);
  }
  g_47 = t;
  t = (ATerm) ATinsert(CheckATermList(g_47), (ATerm) ATmakeAppl(sym_Program_1, d_47));
  f_8 = t;
  t = SSLsetAnnotations(f_8, c_47);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  if(match_string(t, "--help"))
    {
      t = d_48;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_48;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_48;
        }
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL;
  t = term_a_18;
  e_48 = t;
  t = term_c_8;
  f_48 = t;
  t = term_q_19;
  t = b_7(e_48, f_48, t);
  t = term_r_19;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_v_19;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  y_47 = t;
  t = term_u_16;
  a_48 = t;
  t = term_v_16;
  b_48 = t;
  t = (ATerm) ATempty;
  c_48 = t;
  t = SSL_table_put(a_48, b_48, c_48);
  t = y_47;
  {
    static ATerm e_6 (ATerm t)
    {
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_114(t);
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
          {
            ATerm c_20 = t;
            int f_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_6, g_6, i_6, t);
                LocalPopChoice(f_20);
              }
            else
              {
                t = c_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_6, t);
  }
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_48 = NULL;
        q_48 = t;
        {
          ATerm i_20 = t;
          int j_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_25 = NULL;
              t = q_48;
              {
                ATerm k_20 = t;
                int l_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_25 = NULL,w_25 = NULL;
                    t = term_c_14;
                    p_25 = t;
                    t = term_a_18;
                    w_25 = t;
                    t = term_b_18;
                    t = y_6(p_25, w_25, t);
                    LocalPopChoice(l_20);
                  }
                else
                  {
                    t = k_20;
                    t = fetch_1_0(l_6, t);
                  }
              }
              t = q_48;
              t = default_system_usage_0_0(t);
              t = term_b_16;
              o_25 = t;
              t = SSL_exit(o_25);
              LocalPopChoice(j_20);
            }
          else
            {
              t = i_20;
              {
                ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
                t = term_c_14;
                j_26 = t;
                t = term_p_18;
                k_26 = t;
                t = term_m_20;
                t = y_6(j_26, k_26, t);
                t = q_48;
                t = default_system_about_0_0(t);
                t = term_b_16;
                i_26 = t;
                t = SSL_exit(i_26);
              }
            }
        }
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        {
          ATerm n_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
              static ATerm w_6 (ATerm t)
              {
                ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,h_8 = NULL;
                w_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_48);
                u_48 = t;
                t = v_48;
                if(((w_47 != NULL) && (w_47 != t)))
                  _fail(t);
                else
                  w_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_48);
                h_8 = t;
                t = SSLsetAnnotations(h_8, u_48);
                return(t);
              }
              t = fetch_1_0(w_6, t);
              t = term_q_15;
              s_48 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_47)), term_p_20);
              t_48 = t;
              t = SSL_printnl(s_48, t_48);
              t = (ATerm) ATmakeAppl(sym__2, term_q_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_47)), term_p_20));
              t = default_system_usage_0_0(t);
              t = term_t_15;
              r_48 = t;
              t = SSL_exit(r_48);
              LocalPopChoice(o_20);
            }
          else
            {
              t = n_20;
            }
        }
      }
  }
  x_47 = t;
  t = term_u_16;
  z_47 = t;
  t = SSL_table_destroy(z_47);
  t = x_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,e_49 = NULL,f_49 = NULL;
  t = parse_options_1_0(j_112, t);
  b_49 = t;
  t = term_q_20;
  f_49 = t;
  t = SSL_table_create(f_49);
  t = term_q_20;
  c_49 = t;
  t = term_r_20;
  e_49 = t;
  t = SSL_table_put(c_49, e_49, b_49);
  t = b_49;
  t = l_112(t);
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_112, t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        {
          ATerm x_20 = t;
          int y_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_112(t);
              t = report_success_0_0(t);
              LocalPopChoice(y_20);
            }
          else
            {
              t = x_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_7, f_7, j_7, t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            {
              ATerm g_21 = t;
              int h_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(h_21);
                }
              else
                {
                  t = g_21;
                  {
                    ATerm k_21 = t;
                    int l_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(k_7, l_7, m_7, t);
                        LocalPopChoice(l_21);
                      }
                    else
                      {
                        t = k_21;
                        {
                          ATerm n_21 = t;
                          int o_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(o_21);
                            }
                          else
                            {
                              t = n_21;
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
static ATerm d_7 (ATerm t)
{
  t = input_1_0(n_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--only-local", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
  i_49 = t;
  t = term_r_21;
  j_49 = t;
  t = term_c_8;
  k_49 = t;
  t = term_u_21;
  t = b_7(j_49, k_49, t);
  t = i_49;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL;
  t = term_l_14;
  l_49 = t;
  t = term_c_8;
  m_49 = t;
  t = term_b_22;
  t = b_7(l_49, m_49, t);
  t = term_c_22;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_d_22;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = output_1_0(o_7, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,b_9 = NULL,k_8 = NULL;
  v_49 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_49);
  o_49 = t;
  t = p_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_49 = ATgetFirst((ATermList) t);
      s_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_49);
  q_49 = t;
  t = s_49;
  t = Cons_2_0(p_7, r_7, t);
  t_49 = t;
  t = (ATerm) ATinsert(CheckATermList(t_49), r_49);
  k_8 = t;
  t = SSLsetAnnotations(k_8, q_49);
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, u_49);
  b_9 = t;
  t = SSLsetAnnotations(b_9, o_49);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,j_8 = NULL;
  z_49 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_49);
  w_49 = t;
  t = x_49;
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_50 = NULL,b_50 = NULL;
        t = term_c_14;
        a_50 = t;
        t = term_r_21;
        b_50 = t;
        t = term_g_22;
        t = y_6(a_50, b_50, t);
        t = x_49;
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        t = dead_def_elim_0_0(t);
      }
  }
  t = map_1_0(local_dead_def_elim_0_0, t);
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, y_49);
  j_8 = t;
  t = SSLsetAnnotations(j_8, w_49);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(c_7, default_usage_0_0, _id, d_7, t);
  return(t);
}
