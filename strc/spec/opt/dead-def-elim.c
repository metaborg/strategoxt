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
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
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
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm DefDead_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_101 (ATerm), ATerm t);
static ATerm t_5 (ATerm c_40, ATerm d_40, ATerm e_40, ATerm t);
static ATerm x_5 (ATerm u_39, ATerm v_39, ATerm t);
ATerm end_scope_1_0 (ATerm r_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_94 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm local_dead_def_elim_0_0 (ATerm t);
ATerm map_1_0 (ATerm j_95 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm c_6 (ATerm q_22, ATerm p_22, ATerm t);
static ATerm e_6 (ATerm w_97 (ATerm), ATerm x_43, ATerm w_43, ATerm t);
ATerm foldr_3_0 (ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm free_vars_3_0 (ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm f_104 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm g_6 (ATerm a_40, ATerm b_40, ATerm t);
ATerm Definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm z_95 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_20 (ATerm p_19, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_6 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_44, ATerm a_44, ATerm t);
static ATerm j_6 (ATerm r_97 (ATerm), ATerm v_43, ATerm u_43, ATerm t);
ATerm genzip_4_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm o_6 (ATerm w_616, ATerm b_617, ATerm m_59, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm k_24 (ATerm b_23, ATerm c_23, ATerm d_23, ATerm t);
static ATerm l_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm q_6 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm e_60, ATerm b_60, ATerm i_60, ATerm f_60, ATerm c_60, ATerm d_60, ATerm t);
ATerm GnNext_3_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm t);
ATerm for_3_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm t);
static ATerm t_6 (ATerm u_94 (ATerm), ATerm l_38, ATerm j_38, ATerm t);
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
static ATerm e_7 (ATerm a_53, ATerm b_53, ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm t);
static ATerm u_6 (ATerm g_30, ATerm h_30, ATerm t);
static ATerm v_6 (ATerm b_29, ATerm c_29, ATerm t);
static ATerm x_6 (ATerm l_90 (ATerm), ATerm h_200, ATerm f_29, ATerm t);
static ATerm w_6 (ATerm x_28, ATerm y_28, ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm output_1_0 (ATerm r_110 (ATerm), ATerm t);
static ATerm i_34 (ATerm y_33, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_6 (ATerm d_29, ATerm t);
ATerm debug_1_0 (ATerm j_90 (ATerm), ATerm t);
static ATerm z_6 (ATerm i_30, ATerm j_30, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_36 (ATerm k_35, ATerm t);
static ATerm t_36 (ATerm q_35, ATerm r_35, ATerm u_35, ATerm t);
static ATerm u_36 (ATerm d_36, ATerm e_36, ATerm f_36, ATerm t);
static ATerm a_7 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm s_110 (ATerm), ATerm t);
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
static ATerm i_7 (ATerm a_34, ATerm b_34, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_7 (ATerm p_39, ATerm q_39, ATerm o_39, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_7 (ATerm x_36, ATerm y_36, ATerm t);
ATerm foldr_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_92 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm need_help_1_0 (ATerm i_110 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm f_7 (ATerm g_41, ATerm h_41, ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_95 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm l_112 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm parse_options_1_0 (ATerm k_112 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t);
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
ATerm filter_1_0 (ATerm o_101 (ATerm), ATerm t)
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
            t = o_101(t);
            x_2 = t;
            t = d_2;
            t = filter_1_0(o_101, t);
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
            t = filter_1_0(o_101, t);
          }
      }
    }
  return(t);
}
static ATerm t_5 (ATerm c_40, ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_40, d_40);
  t = f_7(c_40, d_40, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_8 = ATgetFirst((ATermList) t);
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
static ATerm x_5 (ATerm u_39, ATerm v_39, ATerm t)
{
  ATerm o_2 = NULL,v_2 = NULL;
  v_2 = t;
  {
    ATerm q_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_39, v_39);
        t = f_7(u_39, v_39, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_8 = ATgetFirst((ATermList) t);
            o_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_8);
        t = SSL_table_put(u_39, v_39, o_2);
        t = (ATerm) ATmakeAppl(sym__3, u_39, v_39, o_2);
      }
    else
      {
        t = q_8;
        t = SSL_table_remove(u_39, v_39);
        t = (ATerm) ATmakeAppl(sym__2, u_39, v_39);
      }
  }
  t = v_2;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_94 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL;
  j_3 = t;
  t = r_94(t);
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
ATerm restore_always_2_0 (ATerm i_86 (ATerm), ATerm j_86 (ATerm), ATerm t)
{
  ATerm x_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_86(t);
      t = j_86(t);
      LocalPopChoice(z_8);
    }
  else
    {
      t = x_8;
      t = j_86(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_94 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  r_3 = t;
  t = q_94(t);
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
ATerm scope_2_0 (ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm t)
{
  static ATerm n_0 (ATerm t)
  {
    t = end_scope_1_0(s_94, t);
    return(t);
  }
  t = begin_scope_1_0(s_94, t);
  t = restore_always_2_0(t_94, n_0, t);
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
ATerm map_1_0 (ATerm j_95 (ATerm), ATerm t)
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
        t = j_95(t);
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
ATerm sboundin_3_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm t)
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
        t = g_82(t);
        c_7 = t;
        t = s_13;
        t = g_82(t);
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
            t = i_82(t);
            a_8 = t;
            t = s_13;
            t = i_82(t);
            b_8 = t;
            t = o_13;
            t = g_82(t);
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
                t = i_82(t);
                f_9 = t;
                t = s_13;
                t = i_82(t);
                g_9 = t;
                t = o_13;
                t = i_82(t);
                k_9 = t;
                t = p_13;
                t = g_82(t);
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
              t = i_82(t);
              h_10 = t;
              t = s_13;
              t = g_82(t);
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
static ATerm c_6 (ATerm q_22, ATerm p_22, ATerm t)
{
  t = q_22;
  t = map_1_0(x_0, t);
  return(t);
}
static ATerm e_6 (ATerm w_97 (ATerm), ATerm x_43, ATerm w_43, ATerm t)
{
  static ATerm z_15 (ATerm t)
  {
    ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
    u_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_43;
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
                  t = w_43;
                  return(t);
                }
                t = i_6(w_97, z_0, v_15, w_15, t);
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
  t = x_43;
  t = z_15(t);
  return(t);
}
ATerm foldr_3_0 (ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,l_16 = NULL;
  f_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_16;
      t = m_100(t);
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
      t = o_100(t);
      v_16 = t;
      t = l_16;
      t = foldr_3_0(m_100, n_100, o_100, t);
      x_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_16, x_16);
      t = n_100(t);
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
ATerm free_vars_3_0 (ATerm d_104 (ATerm), ATerm e_104 (ATerm), ATerm f_104 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm o_17 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_104(t);
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
              t = e_104(t);
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
                t = f_104(a_1, o_17, f_1, t);
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
static ATerm g_6 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm p_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_40, b_40);
  t = f_7(a_40, b_40, t);
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
ATerm at_end_1_0 (ATerm z_95 (ATerm), ATerm t)
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
        t = z_95(t);
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
static ATerm i_6 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_44, ATerm a_44, ATerm t)
{
  t = a_98(t);
  {
    static ATerm t_1 (ATerm t)
    {
      ATerm c_20 = NULL;
      c_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_44, c_20);
      t = z_97(t);
      return(t);
    }
    t = fetch_1_0(t_1, t);
  }
  t = a_44;
  return(t);
}
static ATerm j_6 (ATerm r_97 (ATerm), ATerm v_43, ATerm u_43, ATerm t)
{
  static ATerm a_21 (ATerm t)
  {
    ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
    r_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_20;
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
          ATerm j_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_20;
              {
                static ATerm v_1 (ATerm t)
                {
                  t = u_43;
                  return(t);
                }
                t = i_6(r_97, v_1, s_20, t_20, t);
              }
              t = a_21(t);
              LocalPopChoice(k_11);
            }
          else
            {
              t = j_11;
              {
                ATerm o_16 = NULL,t_16 = NULL,u_1 = NULL;
                t = SSLgetAnnotations(r_20);
                o_16 = t;
                t = t_20;
                t = a_21(t);
                t_16 = t;
                t = (ATerm) ATinsert(CheckATermList(t_16), s_20);
                u_1 = t;
                t = SSLsetAnnotations(u_1, o_16);
              }
            }
        }
      }
    return(t);
  }
  t = v_43;
  t = a_21(t);
  return(t);
}
ATerm genzip_4_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t)
{
  static ATerm r_21 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_87(t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        {
          ATerm e_21 = NULL,h_21 = NULL,i_21 = NULL,l_21 = NULL,o_21 = NULL,p_21 = NULL,w_1 = NULL;
          t = o_87(t);
          p_21 = t;
          if(match_cons(t, sym__2))
            {
              h_21 = ATgetArgument(t, 0);
              i_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_21);
          e_21 = t;
          t = h_21;
          t = q_87(t);
          l_21 = t;
          t = i_21;
          t = r_21(t);
          o_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_21, o_21);
          w_1 = t;
          t = SSLsetAnnotations(w_1, e_21);
          t = p_87(t);
        }
      }
    return(t);
  }
  t = r_21(t);
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
static ATerm o_6 (ATerm w_616, ATerm b_617, ATerm m_59, ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  t = SSL_explode_term(b_617);
  if(match_cons(t, sym__2))
    {
      u_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_616);
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
  t = (ATerm) ATmakeAppl(sym__2, x_21, m_59);
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
  ATerm g_23 = NULL,k_23 = NULL,z_1 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  t = SSLgetAnnotations(d_23);
  g_23 = t;
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
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_23, k_23);
  z_1 = t;
  t = SSLsetAnnotations(z_1, g_23);
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
static ATerm q_6 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm e_60, ATerm b_60, ATerm i_60, ATerm f_60, ATerm c_60, ATerm d_60, ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_60, f_60);
  t = p_114(t);
  l_24 = t;
  t = q_114(t);
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_24, i_60);
  t = diff_0_0(t);
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_24, b_60);
  t = conc_0_0(t);
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_24, i_60);
  t = conc_0_0(t);
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_60, l_24, c_60);
  t = r_114(t);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__5, o_24, p_24, f_60, q_24, d_60);
  return(t);
}
ATerm GnNext_3_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm t)
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
  t = q_6(p_114, q_114, r_114, s_24, t_24, u_24, v_24, w_24, x_24, t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_89 (ATerm), ATerm o_89 (ATerm), ATerm t)
{
  static ATerm y_24 (ATerm t)
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_89(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        t = o_89(t);
        t = y_24(t);
      }
    return(t);
  }
  t = y_24(t);
  return(t);
}
ATerm for_3_0 (ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm s_89 (ATerm), ATerm t)
{
  t = q_89(t);
  t = while_not_2_0(r_89, s_89, t);
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
ATerm graph_nodes_roots_3_0 (ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm o_114 (ATerm), ATerm t)
{
  ATerm b_25 = NULL;
  static ATerm r_2 (ATerm t)
  {
    ATerm h_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(m_114, n_114, o_114, t);
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
static ATerm t_6 (ATerm u_94 (ATerm), ATerm l_38, ATerm j_38, ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  h_26 = t;
  t = u_94(t);
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_26, l_38, j_38);
  t = g_7(a_26, l_38, j_38, t);
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
  t = (ATerm) ATinsert(CheckATermList(c_26), (ATerm) ATinsert(CheckATermList(b_26), l_38));
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
  ATerm r_27 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_x_13), r_27, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(Definition_0_0, b_3, c_3, t);
  return(t);
}
static ATerm e_7 (ATerm a_53, ATerm b_53, ATerm t)
{
  t = SSL_strcat(a_53, b_53);
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
ATerm Cons_2_0 (ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm t)
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
  t = y_68(t);
  d_32 = t;
  t = c_32;
  t = z_68(t);
  e_32 = t;
  t = (ATerm) ATinsert(CheckATermList(e_32), d_32);
  m_4 = t;
  t = SSLsetAnnotations(m_4, a_32);
  return(t);
}
static ATerm u_6 (ATerm g_30, ATerm h_30, ATerm t)
{
  ATerm n_32 = NULL;
  t = SSL_fputc(g_30, h_30);
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_32);
  return(t);
}
static ATerm v_6 (ATerm b_29, ATerm c_29, ATerm t)
{
  ATerm o_32 = NULL;
  t = SSL_write_term_to_stream_text(b_29, c_29);
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_32);
  return(t);
}
static ATerm x_6 (ATerm l_90 (ATerm), ATerm h_200, ATerm f_29, ATerm t)
{
  ATerm p_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_200, term_o_14);
  t = a_7(t);
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_32, f_29);
  t = l_90(t);
  t = fclose_0_0(t);
  t = f_29;
  return(t);
}
static ATerm w_6 (ATerm x_28, ATerm y_28, ATerm t)
{
  ATerm q_32 = NULL;
  t = SSL_write_term_to_stream_baf(x_28, y_28);
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
ATerm output_1_0 (ATerm r_110 (ATerm), ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL;
  t = r_110(t);
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
static ATerm i_34 (ATerm y_33, ATerm t)
{
  t = SSL_fclose(y_33);
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
            t = i_34(g_34, t);
          }
      }
    }
  else
    {
      t = i_34(g_34, t);
    }
  return(t);
}
static ATerm y_6 (ATerm d_29, ATerm t)
{
  t = SSL_read_term_from_stream(d_29);
  return(t);
}
ATerm debug_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,t_34 = NULL,u_34 = NULL;
  p_34 = t;
  t = j_90(t);
  q_34 = t;
  t = term_l_15;
  t_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_34), q_34);
  u_34 = t;
  t = SSL_printnl(t_34, u_34);
  t = p_34;
  return(t);
}
static ATerm z_6 (ATerm i_30, ATerm j_30, ATerm t)
{
  ATerm v_34 = NULL;
  t = SSL_fopen(i_30, j_30);
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
  ATerm v_36 = NULL,w_36 = NULL,z_36 = NULL;
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
  w_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(z_36, t);
  v_36 = t;
  t = w_36;
  t = fclose_0_0(t);
  t = v_36;
  return(t);
}
ATerm input_1_0 (ATerm s_110 (ATerm), ATerm t)
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
  t = s_110(t);
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
static ATerm i_7 (ATerm a_34, ATerm b_34, ATerm t)
{
  ATerm a_38 = NULL;
  t = term_j_14;
  a_38 = t;
  t = SSL_table_put(a_38, a_34, b_34);
  t = (ATerm) ATmakeAppl(sym__3, term_j_14, a_34, b_34);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_38 = NULL,t_38 = NULL,v_38 = NULL;
      t = term_h_8;
      t = i_0(t);
      s_38 = t;
      t = term_k_17;
      t_38 = t;
      t = term_l_17;
      v_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_17, term_l_17, s_38);
      t = g_7(t_38, v_38, s_38, t);
      _fail(t);
    }
  else
    {
      ATerm e_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_38 = ATgetFirst((ATermList) t);
          q_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_38;
      t = d_0(t);
      t = term_h_8;
      t = g_0(t);
      e_39 = t;
      t = (ATerm) ATinsert(CheckATermList(q_38), e_39);
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm g_39 = NULL;
  g_39 = t;
  if(match_string(t, "-o"))
    {
      t = g_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_39;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm h_39 = NULL,j_39 = NULL;
  h_39 = t;
  t = term_v_14;
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_14, h_39);
  t = i_7(j_39, h_39, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_39);
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
static ATerm g_7 (ATerm p_39, ATerm q_39, ATerm o_39, ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,r_39 = NULL;
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_39, q_39);
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
        t = (ATerm) ATmakeAppl(sym__2, p_39, q_39);
        t = f_7(p_39, q_39, t);
        LocalPopChoice(q_17);
      }
    else
      {
        t = n_17;
        t = (ATerm) ATempty;
      }
  }
  m_39 = t;
  t = (ATerm) ATinsert(CheckATermList(m_39), o_39);
  r_39 = t;
  t = SSL_table_put(p_39, q_39, r_39);
  t = l_39;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,m_40 = NULL,n_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
      t = term_h_8;
      t = t_0(t);
      o_40 = t;
      t = term_k_17;
      p_40 = t;
      t = term_l_17;
      q_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_17, term_l_17, o_40);
      t = g_7(p_40, q_40, o_40, t);
      _fail(t);
    }
  else
    {
      ATerm u_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_40 = ATgetFirst((ATermList) t);
          k_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_40 = ATgetFirst((ATermList) t);
          n_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_40;
      t = o_0(t);
      t = m_40;
      t = r_0(t);
      u_40 = t;
      t = (ATerm) ATinsert(CheckATermList(n_40), u_40);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm w_40 = NULL;
  w_40 = t;
  if(match_string(t, "-i"))
    {
      t = w_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_40;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm z_40 = NULL,b_41 = NULL;
  z_40 = t;
  t = term_h_16;
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_16, z_40);
  t = i_7(b_41, z_40, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_40);
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
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_8;
  t = whoami_0_0(t);
  c_41 = t;
  t = term_l_15;
  e_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_17), c_41);
  f_41 = t;
  t = SSL_printnl(e_41, f_41);
  t = term_m_16;
  d_41 = t;
  t = SSL_exit(d_41);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_17;
  t = get_config_0_0(t);
  return(t);
}
static ATerm b_7 (ATerm x_36, ATerm y_36, ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_36, y_36);
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      t = SSL_addr(x_36, y_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm t)
{
  ATerm j_41 = NULL,l_41 = NULL,m_41 = NULL;
  j_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_41;
      t = k_100(t);
    }
  else
    {
      ATerm s_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_41 = ATgetFirst((ATermList) t);
          m_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_41;
      t = foldr_2_0(k_100, l_100, t);
      s_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_41, s_41);
      t = l_100(t);
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
  ATerm g_42 = NULL,y_19 = NULL,z_19 = NULL;
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
  g_42 = t;
  t = SSL_TicksToSeconds(g_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
  b_43 = t;
  if(match_cons(t, sym__2))
    {
      c_43 = ATgetArgument(t, 0);
      d_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_43;
        if((c_43 != t))
          {
            _fail(t);
          }
        t = b_43;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = (ATerm) ATmakeAppl(sym__2, c_43, d_43);
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_43, d_43);
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              t = SSL_gtr(c_43, d_43);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_43, d_43);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm h_43 = NULL;
  h_43 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_43 = NULL;
        t = term_q_16;
        t = get_config_0_0(t);
        j_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_43, term_m_16);
        t = geq_0_0(t);
        t = h_43;
        t = b_92(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = h_43;
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,o_43 = NULL,p_43 = NULL;
  t = run_time_0_0(t);
  l_43 = t;
  t = term_h_8;
  t = whoami_0_0(t);
  m_43 = t;
  t = term_l_15;
  o_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), l_43), term_f_18), m_43);
  p_43 = t;
  t = SSL_printnl(o_43, p_43);
  t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), l_43), term_f_18), m_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_16;
  q_43 = t;
  t = SSL_exit(q_43);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL;
  i_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_44 = ATgetArgument(t, 0);
          {
            ATerm k_21 = NULL,w_4 = NULL;
            t = SSLgetAnnotations(i_44);
            k_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_44);
            w_4 = t;
            t = SSLsetAnnotations(w_4, k_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_110 (ATerm), ATerm t)
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
  t = i_110(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_44 = ATgetFirst((ATermList) t);
      m_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_44 = NULL,w_44 = NULL;
        static ATerm n_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_44)), not_null(w_44));
          return(t);
        }
        t = m_44;
        t = l_0(t);
        if(((v_44 != NULL) && (v_44 != t)))
          _fail(t);
        else
          v_44 = t;
        t = l_44;
        t = k_0(t);
        if(((w_44 != NULL) && (w_44 != t)))
          _fail(t);
        else
          w_44 = t;
        t = m_44;
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
static ATerm f_7 (ATerm g_41, ATerm h_41, ATerm t)
{
  t = SSL_table_get(g_41, h_41);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL,z_4 = NULL;
  c_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_45);
  a_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_45);
  z_4 = t;
  t = SSLsetAnnotations(z_4, a_45);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm e_45 = NULL;
  e_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_45), term_m_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
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
  y_44 = t;
  t = term_l_17;
  z_44 = t;
  t = term_q_18;
  t = f_7(y_44, z_44, t);
  t = reverse_acc_2_0(_id, q_5, t);
  t = map_1_0(s_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_95 (ATerm), ATerm t)
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
          t = t_95(t);
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
            ATerm v_22 = NULL,h_23 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(c_46);
            v_22 = t;
            t = e_46;
            t = f_46(t);
            h_23 = t;
            t = (ATerm) ATinsert(CheckATermList(h_23), d_46);
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
ATerm parse_options_p__1_0 (ATerm l_112 (ATerm), ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,e_47 = NULL,f_47 = NULL,p_7 = NULL;
  z_46 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_19;
        t = l_112(t);
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
    static ATerm p_47 (ATerm t)
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
              t = l_112(t);
              t = Cons_2_0(_id, p_47, t);
            }
          LocalPopChoice(w_19);
        }
      else
        {
          t = v_19;
          {
            ATerm l_47 = NULL,m_47 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_47 = ATgetFirst((ATermList) t);
                m_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_47), (ATerm) ATmakeAppl(sym_Undefined_1, l_47));
          }
        }
      return(t);
    }
    t = p_47(t);
  }
  e_47 = t;
  t = (ATerm) ATinsert(CheckATermList(e_47), (ATerm) ATmakeAppl(sym_Program_1, b_47));
  p_7 = t;
  t = SSLsetAnnotations(p_7, a_47);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm b_48 = NULL;
  b_48 = t;
  if(match_string(t, "--help"))
    {
      t = b_48;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_48;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_48;
        }
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL;
  t = term_j_18;
  c_48 = t;
  t = term_h_8;
  d_48 = t;
  t = term_d_20;
  t = i_7(c_48, d_48, t);
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
ATerm parse_options_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
  w_47 = t;
  t = term_k_17;
  y_47 = t;
  t = term_l_17;
  z_47 = t;
  t = (ATerm) ATempty;
  a_48 = t;
  t = SSL_table_put(y_47, z_47, a_48);
  t = w_47;
  {
    static ATerm k_6 (ATerm t)
    {
      ATerm g_20 = t;
      int h_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_112(t);
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
                int u_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_j_18;
                    t = get_config_0_0(t);
                    LocalPopChoice(u_20);
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
          ATerm v_20 = t;
          int w_20 = stack_ptr;
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
                if(((u_47 != NULL) && (u_47 != t)))
                  _fail(t);
                else
                  u_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_48);
                s_7 = t;
                t = SSLsetAnnotations(s_7, p_48);
                return(t);
              }
              t = fetch_1_0(s_6, t);
              t = term_l_15;
              n_48 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_47)), term_x_20);
              o_48 = t;
              t = SSL_printnl(n_48, o_48);
              t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_47)), term_x_20));
              t = default_system_usage_0_0(t);
              t = term_m_16;
              m_48 = t;
              t = SSL_exit(m_48);
              LocalPopChoice(w_20);
            }
          else
            {
              t = v_20;
            }
        }
      }
  }
  v_47 = t;
  t = term_k_17;
  x_47 = t;
  t = SSL_table_destroy(x_47);
  t = v_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_110 (ATerm), ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL;
  t = parse_options_1_0(k_110, t);
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
  t = m_110(t);
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_110, t);
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        {
          ATerm d_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_110(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_21);
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
  ATerm g_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_7, l_7, m_7, t);
      LocalPopChoice(j_21);
    }
  else
    {
      t = g_21;
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            {
              ATerm q_21 = t;
              int s_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(s_21);
                }
              else
                {
                  t = q_21;
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
  t = term_n_22;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_o_22;
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
