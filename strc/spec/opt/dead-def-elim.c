#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_q_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_r_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_l_15;
ATerm term_b_15;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_u_12;
ATerm term_z_10;
ATerm term_w_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_w_8;
ATerm term_h_8;
ATerm term_f_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_r_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__2, term_z_16, term_h_8);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_l_17);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_h_8);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_h_8);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_h_8);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__2, term_i_22, term_h_8);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local        do not eliminate top-level definitions", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_b_15, term_h_8);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm DefDead_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_100 (ATerm), ATerm t);
static ATerm t_5 (ATerm e_39, ATerm f_39, ATerm g_39, ATerm t);
static ATerm x_5 (ATerm w_38, ATerm x_38, ATerm t);
ATerm end_scope_1_0 (ATerm r_93 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_93 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm local_dead_def_elim_0_0 (ATerm t);
ATerm map_1_0 (ATerm e_94 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm i_81 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm c_6 (ATerm o_22, ATerm n_22, ATerm t);
static ATerm e_6 (ATerm r_96 (ATerm), ATerm z_42, ATerm y_42, ATerm t);
ATerm foldr_3_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm free_vars_3_0 (ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm g_6 (ATerm c_39, ATerm d_39, ATerm t);
ATerm Definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm u_94 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_20 (ATerm p_19, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_6 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm d_43, ATerm c_43, ATerm t);
static ATerm j_6 (ATerm m_96 (ATerm), ATerm x_42, ATerm w_42, ATerm t);
ATerm genzip_4_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm o_6 (ATerm w_609, ATerm b_610, ATerm o_58, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm k_24 (ATerm b_23, ATerm c_23, ATerm d_23, ATerm t);
static ATerm l_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm q_6 (ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm g_59, ATerm d_59, ATerm k_59, ATerm h_59, ATerm e_59, ATerm f_59, ATerm t);
ATerm GnNext_3_0 (ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t);
ATerm for_3_0 (ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t);
static ATerm t_6 (ATerm u_93 (ATerm), ATerm j_38, ATerm h_38, ATerm t);
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
static ATerm i_3 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
static ATerm e_7 (ATerm c_52, ATerm d_52, ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm t);
static ATerm u_6 (ATerm d_30, ATerm e_30, ATerm t);
static ATerm v_6 (ATerm x_28, ATerm y_28, ATerm t);
static ATerm x_6 (ATerm l_89 (ATerm), ATerm o_197, ATerm b_29, ATerm t);
static ATerm w_6 (ATerm t_28, ATerm u_28, ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm output_1_0 (ATerm m_109 (ATerm), ATerm t);
static ATerm n_34 (ATerm a_34, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_6 (ATerm z_28, ATerm t);
ATerm debug_1_0 (ATerm j_89 (ATerm), ATerm t);
static ATerm z_6 (ATerm f_30, ATerm g_30, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_36 (ATerm k_35, ATerm t);
static ATerm t_36 (ATerm q_35, ATerm r_35, ATerm u_35, ATerm t);
static ATerm u_36 (ATerm d_36, ATerm e_36, ATerm f_36, ATerm t);
static ATerm a_7 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm n_109 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_7 (ATerm y_33, ATerm z_33, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_7 (ATerm r_38, ATerm s_38, ATerm q_38, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_7 (ATerm v_36, ATerm w_36, ATerm t);
ATerm foldr_2_0 (ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_91 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm need_help_1_0 (ATerm d_109 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm f_7 (ATerm i_40, ATerm j_40, ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_94 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm g_111 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm parse_options_1_0 (ATerm f_111 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
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
        ATerm x_7 = ATgetArgument(t, 1);
      }
      {
        ATerm y_7 = ATgetArgument(t, 2);
      }
      {
        ATerm z_7 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm c_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL,m_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        b_1 = t;
        t = term_f_8;
        m_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_8, (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        t = g_6(m_1, b_1, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = h_1;
        _fail(t);
        LocalPopChoice(e_8);
      }
    else
      {
        t = c_8;
        {
          ATerm m_2 = NULL,n_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          m_2 = t;
          t = term_f_8;
          n_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_8, (ATerm) ATmakeAppl(sym_SDefT_4, i_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          t = g_6(n_2, m_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm g_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_8) != ATmakeSymbol("j_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_h_8;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm j_100 (ATerm), ATerm t)
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
        ATerm i_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 = NULL,x_2 = NULL,a_3 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(a_2);
            t_2 = t;
            t = b_2;
            t = j_100(t);
            x_2 = t;
            t = d_2;
            t = filter_1_0(j_100, t);
            a_3 = t;
            t = (ATerm) ATinsert(CheckATermList(a_3), x_2);
            a_0 = t;
            t = SSLsetAnnotations(a_0, t_2);
            LocalPopChoice(o_8);
          }
        else
          {
            t = i_8;
            t = d_2;
            t = filter_1_0(j_100, t);
          }
      }
    }
  return(t);
}
static ATerm t_5 (ATerm e_39, ATerm f_39, ATerm g_39, ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_39, f_39);
  t = f_7(e_39, f_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_8 = ATgetFirst((ATermList) t);
      h_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_2), g_39);
  j_2 = t;
  t = SSL_table_put(e_39, f_39, j_2);
  t = i_2;
  return(t);
}
static ATerm x_5 (ATerm w_38, ATerm x_38, ATerm t)
{
  ATerm o_2 = NULL,v_2 = NULL;
  v_2 = t;
  {
    ATerm q_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_38, x_38);
        t = f_7(w_38, x_38, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_8 = ATgetFirst((ATermList) t);
            o_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_8);
        t = SSL_table_put(w_38, x_38, o_2);
        t = (ATerm) ATmakeAppl(sym__3, w_38, x_38, o_2);
      }
    else
      {
        t = q_8;
        t = SSL_table_remove(w_38, x_38);
        t = (ATerm) ATmakeAppl(sym__2, w_38, x_38);
      }
  }
  t = v_2;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL;
  j_3 = t;
  t = r_93(t);
  h_3 = t;
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_3 = NULL;
        t = term_w_8;
        m_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_3, term_w_8);
        t = f_7(h_3, m_3, t);
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
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
  t = term_w_8;
  k_3 = t;
  t = SSL_table_put(h_3, k_3, y_2);
  t = z_2;
  {
    static ATerm b_0 (ATerm t)
    {
      ATerm n_3 = NULL;
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_3, n_3);
      t = x_5(h_3, n_3, t);
      return(t);
    }
    t = map_1_0(b_0, t);
  }
  t = j_3;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t)
{
  ATerm x_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_85(t);
      t = j_85(t);
      LocalPopChoice(z_8);
    }
  else
    {
      t = x_8;
      t = j_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  r_3 = t;
  t = q_93(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, term_w_8);
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_9 = ATgetArgument(t, 0);
            ATerm d_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_8;
        a_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_3, term_w_8);
        t = f_7(q_3, a_4, t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = (ATerm) ATempty;
      }
  }
  s_3 = t;
  t = term_w_8;
  t_3 = t;
  t = (ATerm) ATinsert(CheckATermList(s_3), (ATerm) ATempty);
  u_3 = t;
  t = SSL_table_put(q_3, t_3, u_3);
  t = r_3;
  return(t);
}
ATerm scope_2_0 (ATerm s_93 (ATerm), ATerm t_93 (ATerm), ATerm t)
{
  static ATerm n_0 (ATerm t)
  {
    t = end_scope_1_0(s_93, t);
    return(t);
  }
  t = begin_scope_1_0(s_93, t);
  t = restore_always_2_0(t_93, n_0, t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_f_8;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      b_4 = ATgetArgument(t, 0);
      {
        ATerm e_9 = ATgetArgument(t, 1);
      }
      {
        ATerm h_9 = ATgetArgument(t, 2);
      }
      {
        ATerm i_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, b_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  d_4 = t;
  t = term_m_9;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, b_4, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_m_9);
  t = t_6(v_0, d_4, e_4, t);
  t = c_4;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_f_8;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm n_9 = t;
  if((PushChoice() == 0))
    {
      t = DefDead_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_9;
    }
  return(t);
}
ATerm local_dead_def_elim_0_0 (ATerm t)
{
  static ATerm s_0 (ATerm t)
  {
    ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL,e_5 = NULL,f_5 = NULL,h_5 = NULL,j_5 = NULL;
    j_5 = t;
    if(match_cons(t, sym_Let_2))
      {
        e_5 = ATgetArgument(t, 0);
        h_5 = ATgetArgument(t, 1);
        {
          ATerm o_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_3 = NULL,v_3 = NULL,f_0 = NULL;
              t = SSLgetAnnotations(j_5);
              l_3 = t;
              t = e_5;
              t = map_1_0(u_0, t);
              v_3 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, v_3, h_5);
              f_0 = t;
              t = SSLsetAnnotations(f_0, l_3);
              LocalPopChoice(p_9);
            }
          else
            {
              t = o_9;
              t = j_5;
            }
        }
      }
    else
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_CallT_3))
              {
                e_5 = ATgetArgument(t, 0);
                {
                  ATerm s_9 = ATgetArgument(t, 1);
                }
                {
                  ATerm t_9 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(r_9);
            t = e_5;
            if(match_cons(t, sym_SVar_1))
              {
                f_5 = ATgetArgument(t, 0);
                {
                  ATerm u_9 = t;
                  int v_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_5 = NULL,z_5 = NULL,a_6 = NULL;
                      t = term_f_8;
                      o_5 = t;
                      t = (ATerm) ATmakeAppl(sym_SDefT_4, f_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
                      z_5 = t;
                      t = term_w_9;
                      a_6 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_f_8, (ATerm)ATmakeAppl(sym_SDefT_4, f_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_w_9);
                      t = t_5(o_5, z_5, a_6, t);
                      t = j_5;
                      LocalPopChoice(v_9);
                    }
                  else
                    {
                      t = u_9;
                      t = j_5;
                    }
                }
              }
            else
              {
                t = j_5;
              }
          }
        else
          {
            t = q_9;
            t = j_5;
          }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    n_8 = t;
    if(match_cons(t, sym_Let_2))
      {
        l_8 = ATgetArgument(t, 0);
        m_8 = ATgetArgument(t, 1);
        {
          ATerm x_9 = t;
          int y_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_4 = NULL,r_4 = NULL,m_0 = NULL;
              t = SSLgetAnnotations(n_8);
              l_4 = t;
              t = l_8;
              t = filter_1_0(w_0, t);
              r_4 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, r_4, m_8);
              m_0 = t;
              t = SSLsetAnnotations(m_0, l_4);
              LocalPopChoice(y_9);
            }
          else
            {
              t = x_9;
              t = n_8;
            }
        }
      }
    else
      {
        t = n_8;
      }
    return(t);
  }
  t = scope_2_0(p_0, s_0, t);
  return(t);
}
ATerm map_1_0 (ATerm e_94 (ATerm), ATerm t)
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
        ATerm r_5 = NULL,v_5 = NULL,w_5 = NULL,q_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_10 = ATgetFirst((ATermList) t);
            b_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_9);
        r_5 = t;
        t = a_10;
        t = e_94(t);
        v_5 = t;
        t = b_10;
        t = c_10(t);
        w_5 = t;
        t = (ATerm) ATinsert(CheckATermList(w_5), v_5);
        q_0 = t;
        t = SSLsetAnnotations(q_0, r_5);
      }
    return(t);
  }
  t = c_10(t);
  return(t);
}
ATerm sboundin_3_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm i_81 (ATerm), ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  q_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
      {
        ATerm p_6 = NULL,c_7 = NULL,d_7 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(q_13);
        p_6 = t;
        t = r_13;
        t = g_81(t);
        c_7 = t;
        t = s_13;
        t = g_81(t);
        d_7 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, c_7, d_7);
        y_0 = t;
        t = SSLsetAnnotations(y_0, p_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          r_13 = ATgetArgument(t, 0);
          s_13 = ATgetArgument(t, 1);
          o_13 = ATgetArgument(t, 2);
          {
            ATerm w_7 = NULL,a_8 = NULL,b_8 = NULL,d_8 = NULL,c_1 = NULL;
            t = SSLgetAnnotations(q_13);
            w_7 = t;
            t = r_13;
            t = i_81(t);
            a_8 = t;
            t = s_13;
            t = i_81(t);
            b_8 = t;
            t = o_13;
            t = g_81(t);
            d_8 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, a_8, b_8, d_8);
            c_1 = t;
            t = SSLsetAnnotations(c_1, w_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              r_13 = ATgetArgument(t, 0);
              s_13 = ATgetArgument(t, 1);
              o_13 = ATgetArgument(t, 2);
              p_13 = ATgetArgument(t, 3);
              {
                ATerm y_8 = NULL,f_9 = NULL,g_9 = NULL,k_9 = NULL,l_9 = NULL,d_1 = NULL;
                t = SSLgetAnnotations(q_13);
                y_8 = t;
                t = r_13;
                t = i_81(t);
                f_9 = t;
                t = s_13;
                t = i_81(t);
                g_9 = t;
                t = o_13;
                t = i_81(t);
                k_9 = t;
                t = p_13;
                t = g_81(t);
                l_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_9, g_9, k_9, l_9);
                d_1 = t;
                t = SSLsetAnnotations(d_1, y_8);
              }
            }
          else
            {
              ATerm e_10 = NULL,h_10 = NULL,i_10 = NULL,e_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  r_13 = ATgetArgument(t, 0);
                  s_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_13);
              e_10 = t;
              t = r_13;
              t = i_81(t);
              h_10 = t;
              t = s_13;
              t = g_81(t);
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
  ATerm c_14 = NULL;
  ATerm d_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_14 = ATgetArgument(t, 0);
          {
            ATerm g_10 = ATgetArgument(t, 1);
          }
          {
            ATerm j_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_10);
      t = c_14;
    }
  else
    {
      t = d_10;
      if(match_cons(t, sym_SDefT_4))
        {
          c_14 = ATgetArgument(t, 0);
          {
            ATerm k_10 = ATgetArgument(t, 1);
          }
          {
            ATerm l_10 = ATgetArgument(t, 2);
          }
          {
            ATerm m_10 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = c_14;
    }
  return(t);
}
static ATerm c_6 (ATerm o_22, ATerm n_22, ATerm t)
{
  t = o_22;
  t = map_1_0(x_0, t);
  return(t);
}
static ATerm e_6 (ATerm r_96 (ATerm), ATerm z_42, ATerm y_42, ATerm t)
{
  static ATerm z_15 (ATerm t)
  {
    ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
    u_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_15 = ATgetFirst((ATermList) t);
            w_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_10 = t;
          int o_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_15;
              {
                static ATerm z_0 (ATerm t)
                {
                  t = y_42;
                  return(t);
                }
                t = i_6(r_96, z_0, v_15, w_15, t);
              }
              t = z_15(t);
              LocalPopChoice(o_10);
            }
          else
            {
              t = n_10;
              {
                ATerm f_11 = NULL,l_11 = NULL,p_1 = NULL;
                t = SSLgetAnnotations(u_15);
                f_11 = t;
                t = w_15;
                t = z_15(t);
                l_11 = t;
                t = (ATerm) ATinsert(CheckATermList(l_11), v_15);
                p_1 = t;
                t = SSLsetAnnotations(p_1, f_11);
              }
            }
        }
      }
    return(t);
  }
  t = z_42;
  t = z_15(t);
  return(t);
}
ATerm foldr_3_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,l_16 = NULL;
  f_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_16;
      t = h_99(t);
    }
  else
    {
      ATerm v_16 = NULL,x_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_16 = ATgetFirst((ATermList) t);
          l_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_16;
      t = j_99(t);
      v_16 = t;
      t = l_16;
      t = foldr_3_0(h_99, i_99, j_99, t);
      x_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_16, x_16);
      t = i_99(t);
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
  ATerm g_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(k_1, g_12, i_12, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      if((j_12 != ATgetArgument(t, 1)))
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
  ATerm y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(o_1, y_12, z_12, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm a_13 = NULL;
  if(match_cons(t, sym__2))
    {
      a_13 = ATgetArgument(t, 0);
      if((a_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm o_17 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_102(t);
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        {
          ATerm r_10 = t;
          int s_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_17 = NULL,c_17 = NULL,y_11 = NULL,z_11 = NULL;
              b_17 = t;
              t = z_102(t);
              c_17 = t;
              t = b_17;
              {
                static ATerm a_1 (ATerm t)
                {
                  ATerm e_17 = NULL;
                  t = o_17(t);
                  e_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, e_17, c_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_103(a_1, o_17, f_1, t);
              }
              z_11 = t;
              t = SSL_explode_term(z_11);
              if(match_cons(t, sym__2))
                {
                  ATerm t_10 = ATgetArgument(t, 0);
                  y_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_11;
              t = foldr_3_0(g_1, j_1, _id, t);
              LocalPopChoice(s_10);
            }
          else
            {
              t = r_10;
              {
                ATerm q_12 = NULL,r_12 = NULL;
                r_12 = t;
                t = SSL_explode_term(r_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_10 = ATgetArgument(t, 0);
                    q_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_12;
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
static ATerm g_6 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm p_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
  t = f_7(c_39, d_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_17 = ATgetFirst((ATermList) t);
      {
        ATerm v_10 = (ATerm) ATgetNext((ATermList) t);
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
        ATerm w_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 = NULL,m_14 = NULL,n_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATempty);
        m_14 = t;
        t = term_z_10;
        n_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATempty));
        t = g_6(n_14, m_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm a_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_11) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            f_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_14;
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_14 = NULL,w_14 = NULL,x_14 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATempty);
              w_14 = t;
              t = term_z_10;
              x_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATempty));
              t = g_6(x_14, w_14, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm d_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_11) != ATmakeSymbol("e_0", 0, ATtrue)))
                    _fail(t);
                  t_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_14;
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              {
                ATerm d_15 = NULL,h_15 = NULL,i_15 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATempty);
                h_15 = t;
                t = term_z_10;
                i_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATmakeAppl(sym__2, l_18, (ATerm) ATempty));
                t = g_6(i_15, h_15, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm e_11 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) e_11) != ATmakeSymbol("c_0", 0, ATtrue)))
                      _fail(t);
                    d_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_15;
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm u_94 (ATerm), ATerm t)
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
          ATerm s_15 = NULL,d_16 = NULL,s_1 = NULL;
          t = SSLgetAnnotations(k_19);
          s_15 = t;
          t = j_19;
          t = l_19(t);
          d_16 = t;
          t = (ATerm) ATinsert(CheckATermList(d_16), i_19);
          s_1 = t;
          t = SSLsetAnnotations(s_1, s_15);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_19;
        t = u_94(t);
      }
    return(t);
  }
  t = l_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_18 = NULL,t_18 = NULL,u_18 = NULL;
  r_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_18;
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
static ATerm b_20 (ATerm p_19, ATerm t)
{
  ATerm q_19 = NULL;
  t = SSL_explode_term(p_19);
  if(match_cons(t, sym__2))
    {
      ATerm g_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_19;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  u_19 = t;
  if(match_cons(t, sym__2))
    {
      s_19 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_1 (ATerm t)
            {
              t = t_19;
              return(t);
            }
            t = s_19;
            t = at_end_1_0(r_1, t);
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            t = b_20(u_19, t);
          }
      }
    }
  else
    {
      t = b_20(u_19, t);
    }
  return(t);
}
static ATerm i_6 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm d_43, ATerm c_43, ATerm t)
{
  t = v_96(t);
  {
    static ATerm t_1 (ATerm t)
    {
      ATerm c_20 = NULL;
      c_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_43, c_20);
      t = u_96(t);
      return(t);
    }
    t = fetch_1_0(t_1, t);
  }
  t = c_43;
  return(t);
}
static ATerm j_6 (ATerm m_96 (ATerm), ATerm x_42, ATerm w_42, ATerm t)
{
  static ATerm c_21 (ATerm t)
  {
    ATerm r_20 = NULL,u_20 = NULL,x_20 = NULL;
    r_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_20;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_20 = ATgetFirst((ATermList) t);
            x_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_20;
              {
                static ATerm v_1 (ATerm t)
                {
                  t = w_42;
                  return(t);
                }
                t = i_6(m_96, v_1, u_20, x_20, t);
              }
              t = c_21(t);
              LocalPopChoice(k_11);
            }
          else
            {
              t = j_11;
              {
                ATerm o_16 = NULL,t_16 = NULL,u_1 = NULL;
                t = SSLgetAnnotations(r_20);
                o_16 = t;
                t = x_20;
                t = c_21(t);
                t_16 = t;
                t = (ATerm) ATinsert(CheckATermList(t_16), u_20);
                u_1 = t;
                t = SSLsetAnnotations(u_1, o_16);
              }
            }
        }
      }
    return(t);
  }
  t = x_42;
  t = c_21(t);
  return(t);
}
ATerm genzip_4_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm t)
{
  static ATerm s_21 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_86(t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        {
          ATerm g_21 = NULL,j_21 = NULL,m_21 = NULL,n_21 = NULL,p_21 = NULL,q_21 = NULL,w_1 = NULL;
          t = o_86(t);
          q_21 = t;
          if(match_cons(t, sym__2))
            {
              j_21 = ATgetArgument(t, 0);
              m_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_21);
          g_21 = t;
          t = j_21;
          t = q_86(t);
          n_21 = t;
          t = m_21;
          t = s_21(t);
          p_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_21, p_21);
          w_1 = t;
          t = SSLsetAnnotations(w_1, g_21);
          t = p_86(t);
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
      ATerm o_11 = ATgetArgument(t, 0);
      if(((ATgetType(o_11) != AT_LIST) || !(ATisEmpty(o_11))))
        _fail(t);
      {
        ATerm p_11 = ATgetArgument(t, 1);
        if(((ATgetType(p_11) != AT_LIST) || !(ATisEmpty(p_11))))
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
  ATerm z_21 = NULL,a_22 = NULL,d_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_11 = ATgetArgument(t, 0);
      if(((ATgetType(q_11) == AT_LIST) && !(ATisEmpty(q_11))))
        {
          z_21 = ATgetFirst((ATermList) q_11);
          a_22 = (ATerm) ATgetNext((ATermList) q_11);
        }
      else
        _fail(t);
      {
        ATerm r_11 = ATgetArgument(t, 1);
        if(((ATgetType(r_11) == AT_LIST) && !(ATisEmpty(r_11))))
          {
            d_22 = ATgetFirst((ATermList) r_11);
            e_22 = (ATerm) ATgetNext((ATermList) r_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_21, d_22), (ATerm) ATmakeAppl(sym__2, a_22, e_22));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL;
  if(match_cons(t, sym__2))
    {
      f_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_22), f_22);
  return(t);
}
static ATerm o_6 (ATerm w_609, ATerm b_610, ATerm o_58, ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  t = SSL_explode_term(b_610);
  if(match_cons(t, sym__2))
    {
      u_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_609);
  if(match_cons(t, sym__2))
    {
      if((u_21 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_21, w_21);
  t = genzip_4_0(x_1, c_2, e_2, _id, t);
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_21, o_58);
  t = conc_0_0(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm w_22 = NULL;
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_22);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,y_1 = NULL;
  a_23 = t;
  if(match_cons(t, sym__2))
    {
      y_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_23);
  x_22 = t;
  t = z_22;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_22, z_22);
  y_1 = t;
  t = SSLsetAnnotations(y_1, x_22);
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
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_24(x_23, y_23, w_23, t);
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
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
static ATerm k_24 (ATerm b_23, ATerm c_23, ATerm d_23, ATerm t)
{
  ATerm e_23 = NULL,h_23 = NULL,z_1 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  t = SSLgetAnnotations(d_23);
  e_23 = t;
  t = c_23;
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
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_23;
        if((o_23 != t))
          {
            _fail(t);
          }
        t = q_23;
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        t = c_23;
        t = o_6(o_23, p_23, q_23, t);
      }
  }
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_23, h_23);
  z_1 = t;
  t = SSLsetAnnotations(z_1, e_23);
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
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_2, g_2, k_2, t);
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
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
        t = j_6(l_2, f_24, g_24, t);
      }
    }
  return(t);
}
static ATerm q_6 (ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm g_59, ATerm d_59, ATerm k_59, ATerm h_59, ATerm e_59, ATerm f_59, ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_59, h_59);
  t = k_113(t);
  l_24 = t;
  t = l_113(t);
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_24, k_59);
  t = diff_0_0(t);
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_24, d_59);
  t = conc_0_0(t);
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_24, k_59);
  t = conc_0_0(t);
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_59, l_24, e_59);
  t = m_113(t);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__5, o_24, p_24, h_59, q_24, f_59);
  return(t);
}
ATerm GnNext_3_0 (ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm m_113 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm a_12 = ATgetArgument(t, 0);
      if(((ATgetType(a_12) == AT_LIST) && !(ATisEmpty(a_12))))
        {
          s_24 = ATgetFirst((ATermList) a_12);
          t_24 = (ATerm) ATgetNext((ATermList) a_12);
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
  t = q_6(k_113, l_113, m_113, s_24, t_24, u_24, v_24, w_24, x_24, t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  static ATerm y_24 (ATerm t)
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_88(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        t = o_88(t);
        t = y_24(t);
      }
    return(t);
  }
  t = y_24(t);
  return(t);
}
ATerm for_3_0 (ATerm q_88 (ATerm), ATerm r_88 (ATerm), ATerm s_88 (ATerm), ATerm t)
{
  t = q_88(t);
  t = while_not_2_0(r_88, s_88, t);
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
      ATerm d_12 = ATgetArgument(t, 0);
      if(((ATgetType(d_12) != AT_LIST) || !(ATisEmpty(d_12))))
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
ATerm graph_nodes_roots_3_0 (ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm j_113 (ATerm), ATerm t)
{
  ATerm b_25 = NULL;
  static ATerm r_2 (ATerm t)
  {
    ATerm h_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(h_113, i_113, j_113, t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = h_12;
        {
          ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL;
          if(match_cons(t, sym__5))
            {
              k_25 = ATgetArgument(t, 0);
              n_25 = ATgetArgument(t, 1);
              o_25 = ATgetArgument(t, 2);
              p_25 = ATgetArgument(t, 3);
              q_25 = ATgetArgument(t, 4);
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
          t = (ATerm) ATmakeAppl(sym__5, m_25, n_25, o_25, p_25, (ATerm) ATinsert(CheckATermList(q_25), l_25));
        }
      }
    return(t);
  }
  t = for_3_0(p_2, q_2, r_2, t);
  if(match_cons(t, sym__2))
    {
      b_25 = ATgetArgument(t, 0);
      {
        ATerm l_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_25;
  return(t);
}
static ATerm t_6 (ATerm u_93 (ATerm), ATerm j_38, ATerm h_38, ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  h_26 = t;
  t = u_93(t);
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_26, j_38, h_38);
  t = g_7(a_26, j_38, h_38, t);
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_26 = NULL;
        t = term_w_8;
        k_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_26, term_w_8);
        t = f_7(a_26, k_26, t);
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_26 = ATgetFirst((ATermList) t);
      c_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_w_8;
  i_26 = t;
  t = (ATerm) ATinsert(CheckATermList(c_26), (ATerm) ATinsert(CheckATermList(b_26), j_38));
  j_26 = t;
  t = SSL_table_put(a_26, i_26, j_26);
  t = h_26;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  m_26 = t;
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDef_3))
          {
            n_26 = ATgetArgument(t, 0);
            {
              ATerm s_12 = ATgetArgument(t, 1);
            }
            {
              ATerm t_12 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_12);
        {
          ATerm a_27 = NULL,b_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty);
          a_27 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_12, m_26);
          b_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_u_12, m_26));
          t = t_6(s_2, a_27, b_27, t);
          t = m_26;
        }
      }
    else
      {
        t = o_12;
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  n_26 = ATgetArgument(t, 0);
                  {
                    ATerm x_12 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm b_13 = ATgetArgument(t, 2);
                  }
                  {
                    ATerm c_13 = ATgetArgument(t, 3);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(w_12);
              {
                ATerm f_27 = NULL,g_27 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty);
                f_27 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_13, m_26);
                g_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_d_13, m_26));
                t = t_6(u_2, f_27, g_27, t);
                t = m_26;
              }
            }
          else
            {
              t = v_12;
              {
                ATerm k_27 = NULL,l_27 = NULL;
                if(match_cons(t, sym_SDefT_4))
                  {
                    n_26 = ATgetArgument(t, 0);
                    {
                      ATerm e_13 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm f_13 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm g_13 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, n_26, (ATerm) ATempty);
                k_27 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_13, m_26);
                l_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_h_13, m_26));
                t = t_6(w_2, k_27, l_27, t);
                t = m_26;
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
  ATerm r_30 = NULL,u_30 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm i_13 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
      u_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_30), r_30);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm s_27 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      s_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_27);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm v_27 = NULL,y_27 = NULL,b_28 = NULL,e_28 = NULL,g_28 = NULL;
  v_27 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_27 = ATgetArgument(t, 0);
      b_28 = ATgetArgument(t, 1);
      t = v_27;
      t = c_6(y_27, b_28, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_27 = ATgetArgument(t, 0);
          b_28 = ATgetArgument(t, 1);
          e_28 = ATgetArgument(t, 2);
          t = b_28;
          t = map_1_0(f_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              y_27 = ATgetArgument(t, 0);
              b_28 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, y_27);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  y_27 = ATgetArgument(t, 0);
                  b_28 = ATgetArgument(t, 1);
                  e_28 = ATgetArgument(t, 2);
                  g_28 = ATgetArgument(t, 3);
                  t = b_28;
                  t = map_1_0(g_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_27 = ATgetArgument(t, 0);
                      b_28 = ATgetArgument(t, 1);
                      e_28 = ATgetArgument(t, 2);
                      g_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_28;
                  t = map_1_0(i_3, t);
                }
            }
        }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm v_28 = NULL;
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_28 = ATgetArgument(t, 0);
          {
            ATerm l_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_13);
      t = v_28;
    }
  else
    {
      t = j_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_28;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm t_29 = NULL;
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_29 = ATgetArgument(t, 0);
          {
            ATerm t_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_13);
      t = t_29;
    }
  else
    {
      t = m_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_29;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm o_30 = NULL;
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_30 = ATgetArgument(t, 0);
          {
            ATerm w_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_13);
      t = o_30;
    }
  else
    {
      t = u_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_30;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm q_27 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_x_13), q_27, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(Definition_0_0, b_3, c_3, t);
  return(t);
}
static ATerm e_7 (ATerm c_52, ATerm d_52, ATerm t)
{
  t = SSL_strcat(c_52, d_52);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_31 = NULL;
      b_31 = t;
      t = SSL_is_string(b_31);
      LocalPopChoice(d_14);
    }
  else
    {
      t = b_14;
      {
        ATerm e_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_3, t);
            LocalPopChoice(g_14);
          }
        else
          {
            t = e_14;
            {
              ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
              h_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_31 = ATgetArgument(t, 0);
                  t = i_31;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_31 = ATgetArgument(t, 0);
                      t = i_31;
                      {
                        ATerm h_14 = t;
                        int i_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(i_14);
                          }
                        else
                          {
                            t = h_14;
                            t = debug_1_0(p_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_31 = NULL,o_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_31 = ATgetArgument(t, 0);
                          j_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_31;
                      t = eval_config_0_0(t);
                      n_31 = t;
                      t = j_31;
                      t = eval_config_0_0(t);
                      o_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_31, o_31);
                      t = e_7(n_31, o_31, t);
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
  ATerm s_31 = NULL,t_31 = NULL;
  s_31 = t;
  t = term_j_14;
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, s_31);
  t = f_7(t_31, s_31, t);
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_31 = NULL,v_31 = NULL;
        t = eval_config_0_0(t);
        u_31 = t;
        t = term_j_14;
        v_31 = t;
        t = SSL_table_put(v_31, s_31, u_31);
        t = u_31;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
      }
  }
  return(t);
}
ATerm Cons_2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,k_32 = NULL,m_4 = NULL;
  k_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_32 = ATgetFirst((ATermList) t);
      c_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_32);
  a_32 = t;
  t = b_32;
  t = y_67(t);
  d_32 = t;
  t = c_32;
  t = z_67(t);
  e_32 = t;
  t = (ATerm) ATinsert(CheckATermList(e_32), d_32);
  m_4 = t;
  t = SSLsetAnnotations(m_4, a_32);
  return(t);
}
static ATerm u_6 (ATerm d_30, ATerm e_30, ATerm t)
{
  ATerm n_32 = NULL;
  t = SSL_fputc(d_30, e_30);
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_32);
  return(t);
}
static ATerm v_6 (ATerm x_28, ATerm y_28, ATerm t)
{
  ATerm o_32 = NULL;
  t = SSL_write_term_to_stream_text(x_28, y_28);
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_32);
  return(t);
}
static ATerm x_6 (ATerm l_89 (ATerm), ATerm o_197, ATerm b_29, ATerm t)
{
  ATerm p_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_197, term_o_14);
  t = a_7(t);
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_32, b_29);
  t = l_89(t);
  t = fclose_0_0(t);
  t = b_29;
  return(t);
}
static ATerm w_6 (ATerm t_28, ATerm u_28, ATerm t)
{
  ATerm q_32 = NULL;
  t = SSL_write_term_to_stream_baf(t_28, u_28);
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_32);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm w_32 = NULL,a_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      if(match_cons(p_14, sym_Stream_1))
        {
          w_32 = ATgetArgument(p_14, 0);
        }
      else
        _fail(t);
      a_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(w_32, a_33, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm c_33 = NULL,f_33 = NULL,h_33 = NULL,l_33 = NULL,m_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      if(match_cons(q_14, sym_Stream_1))
        {
          l_33 = ATgetArgument(q_14, 0);
        }
      else
        _fail(t);
      m_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(l_33, m_33, t);
  c_33 = t;
  t = term_r_14;
  f_33 = t;
  t = c_33;
  if(match_cons(t, sym_Stream_1))
    {
      h_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, c_33);
  t = u_6(f_33, h_33, t);
  return(t);
}
ATerm output_1_0 (ATerm m_109 (ATerm), ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL;
  t = m_109(t);
  v_32 = t;
  {
    ATerm s_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_14;
        t = get_config_0_0(t);
        LocalPopChoice(u_14);
      }
    else
      {
        t = s_14;
        t = term_y_14;
      }
  }
  u_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_32, v_32);
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_15;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, u_32, v_32);
        LocalPopChoice(a_15);
        if(match_cons(t, sym__2))
          {
            ATerm c_15 = ATgetArgument(t, 0);
            ATerm e_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_6(w_3, u_32, v_32, t);
      }
    else
      {
        t = z_14;
        if(match_cons(t, sym__2))
          {
            ATerm f_15 = ATgetArgument(t, 0);
            ATerm g_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_6(x_3, u_32, v_32, t);
      }
  }
  return(t);
}
static ATerm n_34 (ATerm a_34, ATerm t)
{
  t = SSL_fclose(a_34);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_34 = NULL,g_34 = NULL;
  g_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_34 = ATgetArgument(t, 0);
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_34);
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            t = n_34(g_34, t);
          }
      }
    }
  else
    {
      t = n_34(g_34, t);
    }
  return(t);
}
static ATerm y_6 (ATerm z_28, ATerm t)
{
  t = SSL_read_term_from_stream(z_28);
  return(t);
}
ATerm debug_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,t_34 = NULL,u_34 = NULL;
  p_34 = t;
  t = j_89(t);
  q_34 = t;
  t = term_l_15;
  t_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_34), q_34);
  u_34 = t;
  t = SSL_printnl(t_34, u_34);
  t = p_34;
  return(t);
}
static ATerm z_6 (ATerm f_30, ATerm g_30, ATerm t)
{
  ATerm v_34 = NULL;
  t = SSL_fopen(f_30, g_30);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_34);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_35 = NULL;
  t = SSL_stdin_stream();
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_35);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_35 = NULL;
  t = SSL_stdout_stream();
  b_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_35);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_35 = NULL;
  t = SSL_stderr_stream();
  c_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_35);
  return(t);
}
static ATerm s_36 (ATerm k_35, ATerm t)
{
  ATerm l_35 = NULL;
  t = SSL_explode_term(k_35);
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_15 = ATgetArgument(t, 1);
        if(((ATgetType(n_15) == AT_LIST) && !(ATisEmpty(n_15))))
          {
            l_35 = ATgetFirst((ATermList) n_15);
            {
              ATerm o_15 = (ATerm) ATgetNext((ATermList) n_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_35;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_35;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_35;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_35;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_36 (ATerm q_35, ATerm r_35, ATerm u_35, ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,y_35 = NULL,b_36 = NULL,o_4 = NULL;
  t = SSLgetAnnotations(u_35);
  y_35 = t;
  t = q_35;
  if(match_cons(t, sym_Path_1))
    {
      b_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_36, r_35);
  o_4 = t;
  t = SSLsetAnnotations(o_4, y_35);
  if(match_cons(t, sym__2))
    {
      v_35 = ATgetArgument(t, 0);
      w_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(v_35, w_35, t);
  return(t);
}
static ATerm u_36 (ATerm d_36, ATerm e_36, ATerm f_36, ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,n_36 = NULL,s_4 = NULL;
  t = SSLgetAnnotations(f_36);
  i_36 = t;
  t = SSL_is_string(d_36);
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_36, e_36);
  s_4 = t;
  t = SSLsetAnnotations(s_4, i_36);
  if(match_cons(t, sym__2))
    {
      g_36 = ATgetArgument(t, 0);
      h_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(g_36, h_36, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  if(match_cons(t, sym__2))
    {
      q_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_36(p_36, t);
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            {
              ATerm r_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_36(q_36, r_36, p_36, t);
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = r_15;
                  t = u_36(q_36, r_36, p_36, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_36(p_36, t);
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  ATerm y_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_37 = NULL;
      a_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_37, term_b_16);
      t = a_7(t);
      LocalPopChoice(a_16);
    }
  else
    {
      t = y_15;
      t = debug_1_0(y_3, t);
      _fail(t);
    }
  y_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(z_36, t);
  x_36 = t;
  t = y_36;
  t = fclose_0_0(t);
  t = x_36;
  return(t);
}
ATerm input_1_0 (ATerm n_109 (ATerm), ATerm t)
{
  ATerm c_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_16;
      t = get_config_0_0(t);
      LocalPopChoice(e_16);
    }
  else
    {
      t = c_16;
      t = term_i_16;
    }
  t = ReadFromFile_0_0(t);
  t = n_109(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  c_37 = t;
  t = term_h_8;
  t = whoami_0_0(t);
  e_37 = t;
  t = term_l_15;
  g_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_16), e_37), term_j_16);
  h_37 = t;
  t = SSL_printnl(g_37, h_37);
  t = term_m_16;
  f_37 = t;
  t = SSL_exit(f_37);
  t = c_37;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  if(match_string(t, "-k"))
    {
      t = j_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_37;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,o_37 = NULL;
  k_37 = t;
  t = SSL_string_to_int(k_37);
  l_37 = t;
  t = term_n_16;
  o_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, l_37);
  t = i_7(o_37, l_37, t);
  t = k_37;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, f_4, g_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm q_37 = NULL;
  q_37 = t;
  if(match_string(t, "-S"))
    {
      t = q_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_37;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL;
  t = term_q_16;
  r_37 = t;
  t = term_r_16;
  s_37 = t;
  t = term_s_16;
  t = i_7(r_37, s_37, t);
  t = term_u_16;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_w_16;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  u_37 = t;
  t = SSL_string_to_int(u_37);
  v_37 = t;
  t = term_q_16;
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_16, v_37);
  t = i_7(w_37, v_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_37);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_y_16;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL;
  t = term_z_16;
  x_37 = t;
  t = term_h_8;
  y_37 = t;
  t = term_a_17;
  t = i_7(x_37, y_37, t);
  t = term_d_17;
  return(t);
}
static ATerm u_4 (ATerm t)
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
      t = Option_3_0(h_4, i_4, j_4, t);
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_4, n_4, p_4, t);
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            t = Option_3_0(q_4, t_4, u_4, t);
          }
      }
    }
  return(t);
}
static ATerm i_7 (ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm a_38 = NULL;
  t = term_j_14;
  a_38 = t;
  t = SSL_table_put(a_38, y_33, z_33);
  t = (ATerm) ATmakeAppl(sym__3, term_j_14, y_33, z_33);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm o_38 = NULL,t_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_38 = NULL,z_38 = NULL,b_39 = NULL;
      t = term_h_8;
      t = i_0(t);
      y_38 = t;
      t = term_k_17;
      z_38 = t;
      t = term_l_17;
      b_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_17, term_l_17, y_38);
      t = g_7(z_38, b_39, y_38, t);
      _fail(t);
    }
  else
    {
      ATerm q_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_38 = ATgetFirst((ATermList) t);
          t_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_38;
      t = d_0(t);
      t = term_h_8;
      t = g_0(t);
      q_39 = t;
      t = (ATerm) ATinsert(CheckATermList(t_38), q_39);
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm s_39 = NULL;
  s_39 = t;
  if(match_string(t, "-o"))
    {
      t = s_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_39;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm t_39 = NULL,v_39 = NULL;
  t_39 = t;
  t = term_v_14;
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_14, t_39);
  t = i_7(v_39, t_39, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_39);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, x_4, y_4, t);
  return(t);
}
static ATerm g_7 (ATerm r_38, ATerm s_38, ATerm q_38, ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,a_40 = NULL;
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_38, s_38);
  {
    ATerm n_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_17 = ATgetArgument(t, 0);
            ATerm s_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_38, s_38);
        t = f_7(r_38, s_38, t);
        LocalPopChoice(q_17);
      }
    else
      {
        t = n_17;
        t = (ATerm) ATempty;
      }
  }
  y_39 = t;
  t = (ATerm) ATinsert(CheckATermList(y_39), q_38);
  a_40 = t;
  t = SSL_table_put(r_38, s_38, a_40);
  t = x_39;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,n_40 = NULL,o_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
      t = term_h_8;
      t = t_0(t);
      p_40 = t;
      t = term_k_17;
      q_40 = t;
      t = term_l_17;
      r_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_17, term_l_17, p_40);
      t = g_7(q_40, r_40, p_40, t);
      _fail(t);
    }
  else
    {
      ATerm b_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_40 = ATgetFirst((ATermList) t);
          l_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_40 = ATgetFirst((ATermList) t);
          o_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_40;
      t = o_0(t);
      t = n_40;
      t = r_0(t);
      b_41 = t;
      t = (ATerm) ATinsert(CheckATermList(o_40), b_41);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm d_41 = NULL;
  d_41 = t;
  if(match_string(t, "-i"))
    {
      t = d_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_41;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  e_41 = t;
  t = term_h_16;
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, e_41);
  t = i_7(f_41, e_41, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_41);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, d_5, g_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_8;
  t = whoami_0_0(t);
  g_41 = t;
  t = term_l_15;
  i_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_17), g_41);
  j_41 = t;
  t = SSL_printnl(i_41, j_41);
  t = term_m_16;
  h_41 = t;
  t = SSL_exit(h_41);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_17;
  t = get_config_0_0(t);
  return(t);
}
static ATerm b_7 (ATerm v_36, ATerm w_36, ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_36, w_36);
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      t = SSL_addr(v_36, w_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm t)
{
  ATerm n_41 = NULL,r_41 = NULL,s_41 = NULL;
  n_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_41;
      t = f_99(t);
    }
  else
    {
      ATerm w_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_41 = ATgetFirst((ATermList) t);
          s_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_41;
      t = foldr_2_0(f_99, g_99, t);
      w_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_41, w_41);
      t = g_99(t);
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
  t = term_r_16;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(i_20, j_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_42 = NULL,y_19 = NULL,z_19 = NULL;
  t = times_0_0(t);
  z_19 = t;
  t = SSL_explode_term(z_19);
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_19;
  t = foldr_2_0(i_5, k_5, t);
  e_42 = t;
  t = SSL_TicksToSeconds(e_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
  k_43 = t;
  if(match_cons(t, sym__2))
    {
      l_43 = ATgetArgument(t, 0);
      m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_43;
        if((l_43 != t))
          {
            _fail(t);
          }
        t = k_43;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = (ATerm) ATmakeAppl(sym__2, l_43, m_43);
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_43, m_43);
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              t = SSL_gtr(l_43, m_43);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_43, m_43);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  ATerm q_43 = NULL;
  q_43 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_43 = NULL;
        t = term_q_16;
        t = get_config_0_0(t);
        s_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_43, term_m_16);
        t = geq_0_0(t);
        t = q_43;
        t = b_91(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = q_43;
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,x_43 = NULL,y_43 = NULL;
  t = run_time_0_0(t);
  u_43 = t;
  t = term_h_8;
  t = whoami_0_0(t);
  v_43 = t;
  t = term_l_15;
  x_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), u_43), term_f_18), v_43);
  y_43 = t;
  t = SSL_printnl(x_43, y_43);
  t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), u_43), term_f_18), v_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_16;
  z_43 = t;
  t = SSL_exit(z_43);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm h_44 = NULL,m_44 = NULL;
  m_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_44 = ATgetArgument(t, 0);
          {
            ATerm i_21 = NULL,w_4 = NULL;
            t = SSLgetAnnotations(m_44);
            i_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_44);
            w_4 = t;
            t = SSLsetAnnotations(w_4, i_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm h_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_18;
      t = get_config_0_0(t);
      LocalPopChoice(i_18);
    }
  else
    {
      t = h_18;
      t = fetch_1_0(m_5, t);
    }
  t = d_109(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_44 = ATgetFirst((ATermList) t);
      q_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_44 = NULL,a_45 = NULL;
        static ATerm n_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_44)), not_null(a_45));
          return(t);
        }
        t = q_44;
        t = l_0(t);
        if(((z_44 != NULL) && (z_44 != t)))
          _fail(t);
        else
          z_44 = t;
        t = p_44;
        t = k_0(t);
        if(((a_45 != NULL) && (a_45 != t)))
          _fail(t);
        else
          a_45 = t;
        t = q_44;
        t = reverse_acc_2_0(k_0, n_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_8;
      t = l_0(t);
    }
  return(t);
}
static ATerm f_7 (ATerm i_40, ATerm j_40, ATerm t)
{
  t = SSL_table_get(i_40, j_40);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,z_4 = NULL;
  g_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_45);
  e_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_45);
  z_4 = t;
  t = SSLsetAnnotations(z_4, e_45);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm i_45 = NULL;
  i_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_45), term_m_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  ATerm n_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_17;
      t = get_config_0_0(t);
      LocalPopChoice(o_18);
    }
  else
    {
      t = n_18;
      t = fetch_1_0(p_5, t);
    }
  t = term_p_18;
  t = echo_0_0(t);
  t = term_k_17;
  c_45 = t;
  t = term_l_17;
  d_45 = t;
  t = term_q_18;
  t = f_7(c_45, d_45, t);
  t = reverse_acc_2_0(_id, q_5, t);
  t = map_1_0(s_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm o_94 (ATerm), ATerm t)
{
  static ATerm f_46 (ATerm t)
  {
    ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
    c_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_46 = ATgetFirst((ATermList) t);
        e_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_18 = t;
      int v_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_22 = NULL,k_22 = NULL,b_5 = NULL;
          t = SSLgetAnnotations(c_46);
          h_22 = t;
          t = d_46;
          t = o_94(t);
          k_22 = t;
          t = (ATerm) ATinsert(CheckATermList(e_46), k_22);
          b_5 = t;
          t = SSLsetAnnotations(b_5, h_22);
          LocalPopChoice(v_18);
        }
      else
        {
          t = s_18;
          {
            ATerm v_22 = NULL,l_23 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(c_46);
            v_22 = t;
            t = e_46;
            t = f_46(t);
            l_23 = t;
            t = (ATerm) ATinsert(CheckATermList(l_23), d_46);
            c_5 = t;
            t = SSLsetAnnotations(c_5, v_22);
          }
        }
    }
    return(t);
  }
  t = f_46(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL;
  j_46 = t;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
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
                ATerm y_18 = ATgetFirst((ATermList) t);
                ATerm z_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_46;
          }
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = (ATerm) ATinsert(ATempty, j_46);
      }
  }
  k_46 = t;
  t = term_y_14;
  l_46 = t;
  t = SSL_printnl(l_46, k_46);
  t = j_46;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL;
  t = term_a_19;
  p_46 = t;
  t = term_h_8;
  q_46 = t;
  t = term_b_19;
  t = i_7(p_46, q_46, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_c_19;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
  t = term_a_19;
  t_46 = t;
  t = term_h_8;
  u_46 = t;
  t = term_b_19;
  t = i_7(t_46, u_46, t);
  t = term_d_19;
  r_46 = t;
  t = term_h_8;
  s_46 = t;
  t = term_e_19;
  t = i_7(r_46, s_46, t);
  t = term_f_19;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, y_5, b_6, t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = h_19;
      t = Option_3_0(d_6, f_6, h_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_111 (ATerm), ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,e_47 = NULL,f_47 = NULL,p_7 = NULL;
  z_46 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_19;
        t = g_111(t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
      }
  }
  t = z_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_47 = ATgetFirst((ATermList) t);
      c_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_46);
  a_47 = t;
  t = term_v_17;
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, b_47);
  t = i_7(f_47, b_47, t);
  t = c_47;
  {
    static ATerm q_47 (ATerm t)
    {
      ATerm v_19 = t;
      int w_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_19 = t;
          int a_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_47 = NULL;
              i_47 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_47;
              LocalPopChoice(a_20);
            }
          else
            {
              t = x_19;
              t = g_111(t);
              t = Cons_2_0(_id, q_47, t);
            }
          LocalPopChoice(w_19);
        }
      else
        {
          t = v_19;
          {
            ATerm m_47 = NULL,n_47 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_47 = ATgetFirst((ATermList) t);
                n_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_47), (ATerm) ATmakeAppl(sym_Undefined_1, m_47));
          }
        }
      return(t);
    }
    t = q_47(t);
  }
  e_47 = t;
  t = (ATerm) ATinsert(CheckATermList(e_47), (ATerm) ATmakeAppl(sym_Program_1, b_47));
  p_7 = t;
  t = SSLsetAnnotations(p_7, a_47);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm c_48 = NULL;
  c_48 = t;
  if(match_string(t, "--help"))
    {
      t = c_48;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_48;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_48;
        }
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  t = term_j_18;
  d_48 = t;
  t = term_h_8;
  e_48 = t;
  t = term_d_20;
  t = i_7(d_48, e_48, t);
  t = term_e_20;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_f_20;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_111 (ATerm), ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
  x_47 = t;
  t = term_k_17;
  z_47 = t;
  t = term_l_17;
  a_48 = t;
  t = (ATerm) ATempty;
  b_48 = t;
  t = SSL_table_put(z_47, a_48, b_48);
  t = x_47;
  {
    static ATerm k_6 (ATerm t)
    {
      ATerm g_20 = t;
      int h_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_111(t);
          LocalPopChoice(h_20);
        }
      else
        {
          t = g_20;
          {
            ATerm k_20 = t;
            int l_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_6, m_6, n_6, t);
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
    t = parse_options_p__1_0(k_6, t);
  }
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_48 = NULL;
        l_48 = t;
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_26 = NULL;
              t = l_48;
              {
                ATerm q_20 = t;
                int s_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_j_18;
                    t = get_config_0_0(t);
                    LocalPopChoice(s_20);
                  }
                else
                  {
                    t = q_20;
                    t = fetch_1_0(r_6, t);
                  }
              }
              t = l_48;
              t = default_system_usage_0_0(t);
              t = term_r_16;
              e_26 = t;
              t = SSL_exit(e_26);
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              {
                ATerm p_26 = NULL;
                t = term_a_19;
                t = get_config_0_0(t);
                t = l_48;
                t = default_system_about_0_0(t);
                t = term_r_16;
                p_26 = t;
                t = SSL_exit(p_26);
              }
            }
        }
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        {
          ATerm t_20 = t;
          int v_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL;
              static ATerm s_6 (ATerm t)
              {
                ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_7 = NULL;
                r_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_48);
                p_48 = t;
                t = q_48;
                if(((v_47 != NULL) && (v_47 != t)))
                  _fail(t);
                else
                  v_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_48);
                s_7 = t;
                t = SSLsetAnnotations(s_7, p_48);
                return(t);
              }
              t = fetch_1_0(s_6, t);
              t = term_l_15;
              n_48 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_47)), term_w_20);
              o_48 = t;
              t = SSL_printnl(n_48, o_48);
              t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_47)), term_w_20));
              t = default_system_usage_0_0(t);
              t = term_m_16;
              m_48 = t;
              t = SSL_exit(m_48);
              LocalPopChoice(v_20);
            }
          else
            {
              t = t_20;
            }
        }
      }
  }
  w_47 = t;
  t = term_k_17;
  y_47 = t;
  t = SSL_table_destroy(y_47);
  t = w_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
  t = parse_options_1_0(f_109, t);
  w_48 = t;
  t = term_y_20;
  z_48 = t;
  t = SSL_table_create(z_48);
  t = term_y_20;
  x_48 = t;
  t = term_z_20;
  y_48 = t;
  t = SSL_table_put(x_48, y_48, w_48);
  t = w_48;
  t = h_109(t);
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_109, t);
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        {
          ATerm d_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_109(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_21);
            }
          else
            {
              t = d_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm f_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_7, l_7, m_7, t);
      LocalPopChoice(h_21);
    }
  else
    {
      t = f_21;
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            {
              ATerm o_21 = t;
              int r_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(r_21);
                }
              else
                {
                  t = o_21;
                  {
                    ATerm t_21 = t;
                    int y_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(n_7, o_7, q_7, t);
                        LocalPopChoice(y_21);
                      }
                    else
                      {
                        t = t_21;
                        {
                          ATerm b_22 = t;
                          int c_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(c_22);
                            }
                          else
                            {
                              t = b_22;
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
static ATerm j_7 (ATerm t)
{
  t = input_1_0(r_7, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--only-local", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  c_49 = t;
  t = term_i_22;
  d_49 = t;
  t = term_h_8;
  e_49 = t;
  t = term_j_22;
  t = i_7(d_49, e_49, t);
  t = c_49;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL;
  t = term_b_15;
  f_49 = t;
  t = term_h_8;
  g_49 = t;
  t = term_m_22;
  t = i_7(f_49, g_49, t);
  t = term_p_22;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = output_1_0(t_7, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,r_8 = NULL,k_8 = NULL;
  p_49 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_49);
  i_49 = t;
  t = j_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_49 = ATgetFirst((ATermList) t);
      m_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_49);
  k_49 = t;
  t = m_49;
  t = Cons_2_0(u_7, v_7, t);
  n_49 = t;
  t = (ATerm) ATinsert(CheckATermList(n_49), l_49);
  k_8 = t;
  t = SSLsetAnnotations(k_8, k_49);
  o_49 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_49);
  r_8 = t;
  t = SSLsetAnnotations(r_8, i_49);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,j_8 = NULL;
  t_49 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      r_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_49);
  q_49 = t;
  t = r_49;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_22;
        t = get_config_0_0(t);
        t = r_49;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        t = dead_def_elim_0_0(t);
      }
  }
  t = map_1_0(local_dead_def_elim_0_0, t);
  s_49 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, s_49);
  j_8 = t;
  t = SSLsetAnnotations(j_8, q_49);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(h_7, default_usage_0_0, _id, j_7, t);
  return(t);
}
