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
ATerm term_h_22;
ATerm term_g_22;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_s_19;
ATerm term_k_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_t_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_x_15;
ATerm term_l_15;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_o_14;
ATerm term_l_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_x_12;
ATerm term_z_10;
ATerm term_w_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_x_8;
ATerm term_h_8;
ATerm term_d_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("DefDead", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Definition", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("main_0_0", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__2, term_r_16, term_s_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_b_17, term_h_8);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
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
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_k_17, term_l_17);
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
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_h_8);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_h_8);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local        do not eliminate top-level definitions", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_h_8);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm DefDead_0_0 (ATerm t);
ATerm filter_1_0 (ATerm f_100 (ATerm), ATerm t);
static ATerm o_5 (ATerm c_39, ATerm d_39, ATerm e_39, ATerm t);
static ATerm s_5 (ATerm u_38, ATerm v_38, ATerm t);
ATerm end_scope_1_0 (ATerm n_93 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_93 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm local_dead_def_elim_0_0 (ATerm t);
ATerm map_1_0 (ATerm a_94 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm e_81 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm x_5 (ATerm o_22, ATerm n_22, ATerm t);
static ATerm z_5 (ATerm n_96 (ATerm), ATerm x_42, ATerm w_42, ATerm t);
ATerm foldr_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm free_vars_3_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm b_6 (ATerm a_39, ATerm b_39, ATerm t);
ATerm Definition_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm q_94 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_19 (ATerm n_19, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm d_6 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm b_43, ATerm a_43, ATerm t);
static ATerm e_6 (ATerm i_96 (ATerm), ATerm v_42, ATerm u_42, ATerm t);
ATerm genzip_4_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm j_6 (ATerm t_607, ATerm y_607, ATerm k_58, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm i_24 (ATerm b_23, ATerm d_23, ATerm e_23, ATerm t);
static ATerm l_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm l_6 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm c_59, ATerm z_58, ATerm g_59, ATerm d_59, ATerm a_59, ATerm b_59, ATerm t);
ATerm GnNext_3_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm t);
ATerm while_not_2_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm t);
ATerm for_3_0 (ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm graph_nodes_roots_3_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm t);
static ATerm o_6 (ATerm q_93 (ATerm), ATerm h_38, ATerm f_38, ATerm t);
static ATerm r_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm RegisterDefinition_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
static ATerm z_6 (ATerm y_51, ATerm z_51, ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_67 (ATerm), ATerm v_67 (ATerm), ATerm t);
static ATerm p_6 (ATerm c_30, ATerm d_30, ATerm t);
static ATerm q_6 (ATerm w_28, ATerm x_28, ATerm t);
static ATerm s_6 (ATerm h_89 (ATerm), ATerm p_196, ATerm a_29, ATerm t);
static ATerm r_6 (ATerm s_28, ATerm t_28, ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm output_1_0 (ATerm i_109 (ATerm), ATerm t);
static ATerm o_34 (ATerm y_33, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_6 (ATerm y_28, ATerm t);
ATerm debug_1_0 (ATerm f_89 (ATerm), ATerm t);
static ATerm u_6 (ATerm e_30, ATerm f_30, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_36 (ATerm k_35, ATerm t);
static ATerm r_36 (ATerm q_35, ATerm r_35, ATerm t_35, ATerm t);
static ATerm s_36 (ATerm b_36, ATerm c_36, ATerm d_36, ATerm t);
static ATerm v_6 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm j_109 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_7 (ATerm w_33, ATerm x_33, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_7 (ATerm p_38, ATerm q_38, ATerm o_38, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_6 (ATerm t_36, ATerm u_36, ATerm t);
ATerm foldr_2_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_90 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm need_help_1_0 (ATerm z_108 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_7 (ATerm g_40, ATerm h_40, ATerm t);
static ATerm p_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_94 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm c_111 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm parse_options_1_0 (ATerm b_111 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm DefDead_0_0 (ATerm t)
{
  ATerm f_1 = NULL,g_1 = NULL;
  f_1 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      g_1 = ATgetArgument(t, 0);
      {
        ATerm x_7 = ATgetArgument(t, 1);
      }
      {
        ATerm z_7 = ATgetArgument(t, 2);
      }
      {
        ATerm a_8 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL,k_1 = NULL;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
        z_0 = t;
        t = term_d_8;
        k_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATmakeAppl(sym_SDefT_4, g_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
        t = b_6(k_1, z_0, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        {
          ATerm h_2 = NULL,i_2 = NULL;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, g_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
          h_2 = t;
          t = term_d_8;
          i_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATmakeAppl(sym_SDefT_4, g_1, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty));
          t = b_6(i_2, h_2, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm f_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_8) != ATmakeSymbol("j_0", 0, ATtrue)))
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
ATerm filter_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,c_2 = NULL;
  z_1 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_1;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_2 = ATgetFirst((ATermList) t);
          c_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 = NULL,s_2 = NULL,v_2 = NULL,a_0 = NULL;
            t = SSLgetAnnotations(z_1);
            o_2 = t;
            t = a_2;
            t = f_100(t);
            s_2 = t;
            t = c_2;
            t = filter_1_0(f_100, t);
            v_2 = t;
            t = (ATerm) ATinsert(CheckATermList(v_2), s_2);
            a_0 = t;
            t = SSLsetAnnotations(a_0, o_2);
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            t = c_2;
            t = filter_1_0(f_100, t);
          }
      }
    }
  return(t);
}
static ATerm o_5 (ATerm c_39, ATerm d_39, ATerm e_39, ATerm t)
{
  ATerm j_2 = NULL,q_2 = NULL,t_2 = NULL;
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
  t = a_7(c_39, d_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_8 = ATgetFirst((ATermList) t);
      j_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_2), e_39);
  t_2 = t;
  t = SSL_table_put(c_39, d_39, t_2);
  t = q_2;
  return(t);
}
static ATerm s_5 (ATerm u_38, ATerm v_38, ATerm t)
{
  ATerm u_2 = NULL,c_3 = NULL;
  c_3 = t;
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_38, v_38);
        t = a_7(u_38, v_38, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_8 = ATgetFirst((ATermList) t);
            u_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_8);
        t = SSL_table_put(u_38, v_38, u_2);
        t = (ATerm) ATmakeAppl(sym__3, u_38, v_38, u_2);
      }
    else
      {
        t = p_8;
        t = SSL_table_remove(u_38, v_38);
        t = (ATerm) ATmakeAppl(sym__2, u_38, v_38);
      }
  }
  t = c_3;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_93 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL;
  i_3 = t;
  t = n_93(t);
  h_3 = t;
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_3 = NULL;
        t = term_x_8;
        l_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_3, term_x_8);
        t = a_7(h_3, l_3, t);
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_3 = ATgetFirst((ATermList) t);
      e_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_8;
  j_3 = t;
  t = SSL_table_put(h_3, j_3, e_3);
  t = f_3;
  {
    static ATerm n_0 (ATerm t)
    {
      ATerm m_3 = NULL;
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_3, m_3);
      t = s_5(h_3, m_3, t);
      return(t);
    }
    t = map_1_0(n_0, t);
  }
  t = i_3;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm t)
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_85(t);
      t = f_85(t);
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      t = f_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_93 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL,u_3 = NULL;
  p_3 = t;
  t = m_93(t);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_3, term_x_8);
  {
    ATerm a_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_9 = ATgetArgument(t, 0);
            ATerm h_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_8;
        y_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_3, term_x_8);
        t = a_7(o_3, y_3, t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = a_9;
        t = (ATerm) ATempty;
      }
  }
  r_3 = t;
  t = term_x_8;
  s_3 = t;
  t = (ATerm) ATinsert(CheckATermList(r_3), (ATerm) ATempty);
  u_3 = t;
  t = SSL_table_put(o_3, s_3, u_3);
  t = p_3;
  return(t);
}
ATerm scope_2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t)
{
  static ATerm q_0 (ATerm t)
  {
    t = end_scope_1_0(o_93, t);
    return(t);
  }
  t = begin_scope_1_0(o_93, t);
  t = restore_always_2_0(p_93, q_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_d_8;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      z_3 = ATgetArgument(t, 0);
      {
        ATerm i_9 = ATgetArgument(t, 1);
      }
      {
        ATerm j_9 = ATgetArgument(t, 2);
      }
      {
        ATerm k_9 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
  b_4 = t;
  t = term_m_9;
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_SDefT_4, z_3, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_m_9);
  t = o_6(v_0, b_4, c_4, t);
  t = a_4;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_d_8;
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
  static ATerm t_0 (ATerm t)
  {
    ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,d_5 = NULL,e_5 = NULL,g_5 = NULL,i_5 = NULL;
    i_5 = t;
    if(match_cons(t, sym_Let_2))
      {
        d_5 = ATgetArgument(t, 0);
        g_5 = ATgetArgument(t, 1);
        {
          ATerm o_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_3 = NULL,q_3 = NULL,o_0 = NULL;
              t = SSLgetAnnotations(i_5);
              g_3 = t;
              t = d_5;
              t = map_1_0(u_0, t);
              q_3 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, q_3, g_5);
              o_0 = t;
              t = SSLsetAnnotations(o_0, g_3);
              LocalPopChoice(p_9);
            }
          else
            {
              t = o_9;
              t = i_5;
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
                d_5 = ATgetArgument(t, 0);
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
            t = d_5;
            if(match_cons(t, sym_SVar_1))
              {
                e_5 = ATgetArgument(t, 0);
                {
                  ATerm u_9 = t;
                  int v_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_5 = NULL,i_6 = NULL,g_7 = NULL;
                      t = term_d_8;
                      w_5 = t;
                      t = (ATerm) ATmakeAppl(sym_SDefT_4, e_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty);
                      i_6 = t;
                      t = term_w_9;
                      g_7 = t;
                      t = (ATerm) ATmakeAppl(sym__3, term_d_8, (ATerm)ATmakeAppl(sym_SDefT_4, e_5, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATempty), term_w_9);
                      t = o_5(w_5, i_6, g_7, t);
                      t = i_5;
                      LocalPopChoice(v_9);
                    }
                  else
                    {
                      t = u_9;
                      t = i_5;
                    }
                }
              }
            else
              {
                t = i_5;
              }
          }
        else
          {
            t = q_9;
            t = i_5;
          }
      }
    t = SRTS_all(local_dead_def_elim_0_0, t);
    l_8 = t;
    if(match_cons(t, sym_Let_2))
      {
        j_8 = ATgetArgument(t, 0);
        k_8 = ATgetArgument(t, 1);
        {
          ATerm b_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_4 = NULL,m_4 = NULL,p_0 = NULL;
              t = SSLgetAnnotations(l_8);
              j_4 = t;
              t = j_8;
              t = filter_1_0(w_0, t);
              m_4 = t;
              t = (ATerm) ATmakeAppl(sym_Let_2, m_4, k_8);
              p_0 = t;
              t = SSLsetAnnotations(p_0, j_4);
              LocalPopChoice(d_10);
            }
          else
            {
              t = b_10;
              t = l_8;
            }
        }
      }
    else
      {
        t = l_8;
      }
    return(t);
  }
  t = scope_2_0(r_0, t_0, t);
  return(t);
}
ATerm map_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  static ATerm a_10 (ATerm t)
  {
    ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
    x_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_9;
      }
    else
      {
        ATerm m_5 = NULL,q_5 = NULL,r_5 = NULL,s_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_9 = ATgetFirst((ATermList) t);
            z_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_9);
        m_5 = t;
        t = y_9;
        t = a_94(t);
        q_5 = t;
        t = z_9;
        t = a_10(t);
        r_5 = t;
        t = (ATerm) ATinsert(CheckATermList(r_5), q_5);
        s_0 = t;
        t = SSLsetAnnotations(s_0, m_5);
      }
    return(t);
  }
  t = a_10(t);
  return(t);
}
ATerm sboundin_3_0 (ATerm c_81 (ATerm), ATerm d_81 (ATerm), ATerm e_81 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,q_13 = NULL,s_13 = NULL,t_13 = NULL;
  q_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
      {
        ATerm k_6 = NULL,x_6 = NULL,y_6 = NULL,a_1 = NULL;
        t = SSLgetAnnotations(q_13);
        k_6 = t;
        t = s_13;
        t = c_81(t);
        x_6 = t;
        t = t_13;
        t = c_81(t);
        y_6 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_6, y_6);
        a_1 = t;
        t = SSLsetAnnotations(a_1, k_6);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_13 = ATgetArgument(t, 0);
          t_13 = ATgetArgument(t, 1);
          m_13 = ATgetArgument(t, 2);
          {
            ATerm r_7 = NULL,v_7 = NULL,w_7 = NULL,y_7 = NULL,b_1 = NULL;
            t = SSLgetAnnotations(q_13);
            r_7 = t;
            t = s_13;
            t = e_81(t);
            v_7 = t;
            t = t_13;
            t = e_81(t);
            w_7 = t;
            t = m_13;
            t = c_81(t);
            y_7 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, v_7, w_7, y_7);
            b_1 = t;
            t = SSLsetAnnotations(b_1, r_7);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              s_13 = ATgetArgument(t, 0);
              t_13 = ATgetArgument(t, 1);
              m_13 = ATgetArgument(t, 2);
              n_13 = ATgetArgument(t, 3);
              {
                ATerm w_8 = NULL,b_9 = NULL,c_9 = NULL,f_9 = NULL,g_9 = NULL,c_1 = NULL;
                t = SSLgetAnnotations(q_13);
                w_8 = t;
                t = s_13;
                t = e_81(t);
                b_9 = t;
                t = t_13;
                t = e_81(t);
                c_9 = t;
                t = m_13;
                t = e_81(t);
                f_9 = t;
                t = n_13;
                t = c_81(t);
                g_9 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, b_9, c_9, f_9, g_9);
                c_1 = t;
                t = SSLsetAnnotations(c_1, w_8);
              }
            }
          else
            {
              ATerm c_10 = NULL,f_10 = NULL,g_10 = NULL,d_1 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  s_13 = ATgetArgument(t, 0);
                  t_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_13);
              c_10 = t;
              t = s_13;
              t = e_81(t);
              f_10 = t;
              t = t_13;
              t = c_81(t);
              g_10 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, f_10, g_10);
              d_1 = t;
              t = SSLsetAnnotations(d_1, c_10);
            }
        }
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm f_14 = NULL;
  ATerm e_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_14 = ATgetArgument(t, 0);
          {
            ATerm i_10 = ATgetArgument(t, 1);
          }
          {
            ATerm j_10 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_10);
      t = f_14;
    }
  else
    {
      t = e_10;
      if(match_cons(t, sym_SDefT_4))
        {
          f_14 = ATgetArgument(t, 0);
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
      t = f_14;
    }
  return(t);
}
static ATerm x_5 (ATerm o_22, ATerm n_22, ATerm t)
{
  t = o_22;
  t = map_1_0(x_0, t);
  return(t);
}
static ATerm z_5 (ATerm n_96 (ATerm), ATerm x_42, ATerm w_42, ATerm t)
{
  static ATerm a_16 (ATerm t)
  {
    ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
    s_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_42;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_15 = ATgetFirst((ATermList) t);
            u_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_10 = t;
          int o_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_15;
              {
                static ATerm y_0 (ATerm t)
                {
                  t = w_42;
                  return(t);
                }
                t = d_6(n_96, y_0, t_15, u_15, t);
              }
              t = a_16(t);
              LocalPopChoice(o_10);
            }
          else
            {
              t = n_10;
              {
                ATerm a_11 = NULL,g_11 = NULL,p_1 = NULL;
                t = SSLgetAnnotations(s_15);
                a_11 = t;
                t = u_15;
                t = a_16(t);
                g_11 = t;
                t = (ATerm) ATinsert(CheckATermList(g_11), t_15);
                p_1 = t;
                t = SSLsetAnnotations(p_1, a_11);
              }
            }
        }
      }
    return(t);
  }
  t = x_42;
  t = a_16(t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,m_16 = NULL,q_16 = NULL;
  k_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_16;
      t = d_99(t);
    }
  else
    {
      ATerm u_16 = NULL,v_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_16 = ATgetFirst((ATermList) t);
          q_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_16;
      t = f_99(t);
      u_16 = t;
      t = q_16;
      t = foldr_3_0(d_99, e_99, f_99, t);
      v_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_16, v_16);
      t = e_99(t);
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm b_12 = NULL,d_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(l_1, b_12, d_12, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      if((e_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(o_1, t_12, u_12, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm v_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      if((v_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm m_17 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_102(t);
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
              ATerm z_16 = NULL,a_17 = NULL,t_11 = NULL,u_11 = NULL;
              z_16 = t;
              t = v_102(t);
              a_17 = t;
              t = z_16;
              {
                static ATerm e_1 (ATerm t)
                {
                  ATerm c_17 = NULL;
                  t = m_17(t);
                  c_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_17, a_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = w_102(e_1, m_17, h_1, t);
              }
              u_11 = t;
              t = SSL_explode_term(u_11);
              if(match_cons(t, sym__2))
                {
                  ATerm t_10 = ATgetArgument(t, 0);
                  t_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_11;
              t = foldr_3_0(i_1, j_1, _id, t);
              LocalPopChoice(s_10);
            }
          else
            {
              t = r_10;
              {
                ATerm l_12 = NULL,m_12 = NULL;
                m_12 = t;
                t = SSL_explode_term(m_12);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_10 = ATgetArgument(t, 0);
                    l_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_12;
                t = foldr_3_0(m_1, n_1, m_17, t);
              }
            }
        }
      }
    return(t);
  }
  t = m_17(t);
  return(t);
}
static ATerm b_6 (ATerm a_39, ATerm b_39, ATerm t)
{
  ATerm n_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_39, b_39);
  t = a_7(a_39, b_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_17 = ATgetFirst((ATermList) t);
      {
        ATerm v_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_17;
  return(t);
}
ATerm Definition_0_0 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  i_18 = t;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
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
        ATerm b_14 = NULL,h_14 = NULL,i_14 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATempty);
        h_14 = t;
        t = term_z_10;
        i_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATempty));
        t = b_6(i_14, h_14, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_11) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            b_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_14;
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        {
          ATerm c_11 = t;
          int d_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_14 = NULL,t_14 = NULL,u_14 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATempty);
              t_14 = t;
              t = term_z_10;
              u_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATempty));
              t = b_6(u_14, t_14, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm e_11 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_11) != ATmakeSymbol("f_0", 0, ATtrue)))
                    _fail(t);
                  q_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_14;
              LocalPopChoice(d_11);
            }
          else
            {
              t = c_11;
              {
                ATerm a_15 = NULL,d_15 = NULL,e_15 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATempty);
                d_15 = t;
                t = term_z_10;
                e_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATmakeAppl(sym__2, j_18, (ATerm) ATempty));
                t = b_6(e_15, d_15, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm f_11 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_11) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    a_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_15;
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm q_94 (ATerm), ATerm t)
{
  static ATerm j_19 (ATerm t)
  {
    ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
    i_19 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_19 = ATgetFirst((ATermList) t);
        h_19 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_15 = NULL,y_15 = NULL,r_1 = NULL;
          t = SSLgetAnnotations(i_19);
          n_15 = t;
          t = h_19;
          t = j_19(t);
          y_15 = t;
          t = (ATerm) ATinsert(CheckATermList(y_15), g_19);
          r_1 = t;
          t = SSLsetAnnotations(r_1, n_15);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_19;
        t = q_94(t);
      }
    return(t);
  }
  t = j_19(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_18;
    }
  else
    {
      static ATerm q_1 (ATerm t)
      {
        t = not_null(s_18);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_18 = ATgetFirst((ATermList) t);
          if(((s_18 != NULL) && (s_18 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_18;
      t = at_end_1_0(q_1, t);
    }
  return(t);
}
static ATerm z_19 (ATerm n_19, ATerm t)
{
  ATerm o_19 = NULL;
  t = SSL_explode_term(n_19);
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_19;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_19 = NULL,v_19 = NULL,w_19 = NULL;
  w_19 = t;
  if(match_cons(t, sym__2))
    {
      q_19 = ATgetArgument(t, 0);
      v_19 = ATgetArgument(t, 1);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_1 (ATerm t)
            {
              t = v_19;
              return(t);
            }
            t = q_19;
            t = at_end_1_0(s_1, t);
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            t = z_19(w_19, t);
          }
      }
    }
  else
    {
      t = z_19(w_19, t);
    }
  return(t);
}
static ATerm d_6 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm b_43, ATerm a_43, ATerm t)
{
  t = r_96(t);
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm a_20 = NULL;
      a_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_43, a_20);
      t = q_96(t);
      return(t);
    }
    t = fetch_1_0(u_1, t);
  }
  t = a_43;
  return(t);
}
static ATerm e_6 (ATerm i_96 (ATerm), ATerm v_42, ATerm u_42, ATerm t)
{
  static ATerm y_20 (ATerm t)
  {
    ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
    p_20 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_20;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_20 = ATgetFirst((ATermList) t);
            r_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_20;
              {
                static ATerm w_1 (ATerm t)
                {
                  t = u_42;
                  return(t);
                }
                t = d_6(i_96, w_1, q_20, r_20, t);
              }
              t = y_20(t);
              LocalPopChoice(l_11);
            }
          else
            {
              t = k_11;
              {
                ATerm j_16 = NULL,o_16 = NULL,t_1 = NULL;
                t = SSLgetAnnotations(p_20);
                j_16 = t;
                t = r_20;
                t = y_20(t);
                o_16 = t;
                t = (ATerm) ATinsert(CheckATermList(o_16), q_20);
                t_1 = t;
                t = SSLsetAnnotations(t_1, j_16);
              }
            }
        }
      }
    return(t);
  }
  t = v_42;
  t = y_20(t);
  return(t);
}
ATerm genzip_4_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t)
{
  static ATerm p_21 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_86(t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        {
          ATerm c_21 = NULL,f_21 = NULL,g_21 = NULL,j_21 = NULL,m_21 = NULL,n_21 = NULL,v_1 = NULL;
          t = k_86(t);
          n_21 = t;
          if(match_cons(t, sym__2))
            {
              f_21 = ATgetArgument(t, 0);
              g_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_21);
          c_21 = t;
          t = f_21;
          t = m_86(t);
          j_21 = t;
          t = g_21;
          t = p_21(t);
          m_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_21, m_21);
          v_1 = t;
          t = SSLsetAnnotations(v_1, c_21);
          t = l_86(t);
        }
      }
    return(t);
  }
  t = p_21(t);
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
static ATerm b_2 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,i_22 = NULL;
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
            b_22 = ATgetFirst((ATermList) r_11);
            i_22 = (ATerm) ATgetNext((ATermList) r_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_21, b_22), (ATerm) ATmakeAppl(sym__2, a_22, i_22));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  if(match_cons(t, sym__2))
    {
      j_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_22), j_22);
  return(t);
}
static ATerm j_6 (ATerm t_607, ATerm y_607, ATerm k_58, ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t = SSL_explode_term(y_607);
  if(match_cons(t, sym__2))
    {
      s_21 = ATgetArgument(t, 0);
      u_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_607);
  if(match_cons(t, sym__2))
    {
      if((s_21 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_21, u_21);
  t = genzip_4_0(x_1, b_2, d_2, _id, t);
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_21, k_58);
  t = conc_0_0(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_22);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,y_1 = NULL;
  y_22 = t;
  if(match_cons(t, sym__2))
    {
      w_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_22);
  v_22 = t;
  t = x_22;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_22, x_22);
  y_1 = t;
  t = SSLsetAnnotations(y_1, v_22);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  u_23 = t;
  if(match_cons(t, sym__2))
    {
      v_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_23 = ATgetFirst((ATermList) t);
      y_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_24(v_23, w_23, u_23, t);
            LocalPopChoice(v_11);
          }
        else
          {
            t = s_11;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_23), x_23), y_23);
          }
      }
    }
  else
    {
      t = i_24(v_23, w_23, u_23, t);
    }
  return(t);
}
static ATerm i_24 (ATerm b_23, ATerm d_23, ATerm e_23, ATerm t)
{
  ATerm f_23 = NULL,i_23 = NULL,e_2 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
  t = SSLgetAnnotations(e_23);
  f_23 = t;
  t = d_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_23 = ATgetFirst((ATermList) t);
      o_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_23;
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_23;
        if((m_23 != t))
          {
            _fail(t);
          }
        t = o_23;
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = d_23;
        t = j_6(m_23, n_23, o_23, t);
      }
  }
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_23, i_23);
  e_2 = t;
  t = SSLsetAnnotations(e_2, f_23);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm h_24 = NULL;
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      if((h_24 != ATgetArgument(t, 1)))
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
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_2, g_2, k_2, t);
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
        c_24 = t;
        if(match_cons(t, sym__2))
          {
            d_24 = ATgetArgument(t, 0);
            e_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_24;
        t = e_6(l_2, d_24, e_24, t);
      }
    }
  return(t);
}
static ATerm l_6 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm c_59, ATerm z_58, ATerm g_59, ATerm d_59, ATerm a_59, ATerm b_59, ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_59, d_59);
  t = g_113(t);
  j_24 = t;
  t = h_113(t);
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_24, g_59);
  t = diff_0_0(t);
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_24, z_58);
  t = conc_0_0(t);
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_24, g_59);
  t = conc_0_0(t);
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_59, j_24, a_59);
  t = i_113(t);
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym__5, m_24, n_24, d_59, o_24, b_59);
  return(t);
}
ATerm GnNext_3_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm i_113 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm a_12 = ATgetArgument(t, 0);
      if(((ATgetType(a_12) == AT_LIST) && !(ATisEmpty(a_12))))
        {
          q_24 = ATgetFirst((ATermList) a_12);
          r_24 = (ATerm) ATgetNext((ATermList) a_12);
        }
      else
        _fail(t);
      s_24 = ATgetArgument(t, 1);
      t_24 = ATgetArgument(t, 2);
      u_24 = ATgetArgument(t, 3);
      v_24 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = l_6(g_113, h_113, i_113, q_24, r_24, s_24, t_24, u_24, v_24, t);
  return(t);
}
ATerm while_not_2_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm t)
{
  static ATerm w_24 (ATerm t)
  {
    ATerm c_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_88(t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = c_12;
        t = k_88(t);
        t = w_24(t);
      }
    return(t);
  }
  t = w_24(t);
  return(t);
}
ATerm for_3_0 (ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  t = m_88(t);
  t = while_not_2_0(n_88, o_88, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  if(match_cons(t, sym__3))
    {
      a_25 = ATgetArgument(t, 0);
      b_25 = ATgetArgument(t, 1);
      c_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__5, a_25, a_25, b_25, c_25, (ATerm) ATempty);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL;
  if(match_cons(t, sym__5))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      if(((ATgetType(g_12) != AT_LIST) || !(ATisEmpty(g_12))))
        _fail(t);
      {
        ATerm h_12 = ATgetArgument(t, 1);
      }
      {
        ATerm i_12 = ATgetArgument(t, 2);
      }
      f_25 = ATgetArgument(t, 3);
      g_25 = ATgetArgument(t, 4);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_25, g_25);
  return(t);
}
ATerm graph_nodes_roots_3_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm t)
{
  ATerm z_24 = NULL;
  static ATerm p_2 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3_0(d_113, e_113, f_113, t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        {
          ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
          if(match_cons(t, sym__5))
            {
              i_25 = ATgetArgument(t, 0);
              l_25 = ATgetArgument(t, 1);
              m_25 = ATgetArgument(t, 2);
              n_25 = ATgetArgument(t, 3);
              o_25 = ATgetArgument(t, 4);
            }
          else
            _fail(t);
          t = i_25;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_25 = ATgetFirst((ATermList) t);
              k_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__5, k_25, l_25, m_25, n_25, (ATerm) ATinsert(CheckATermList(o_25), j_25));
        }
      }
    return(t);
  }
  t = for_3_0(m_2, n_2, p_2, t);
  if(match_cons(t, sym__2))
    {
      z_24 = ATgetArgument(t, 0);
      {
        ATerm n_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_24;
  return(t);
}
static ATerm o_6 (ATerm q_93 (ATerm), ATerm h_38, ATerm f_38, ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  t = q_93(t);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_26, h_38, f_38);
  t = b_7(c_26, h_38, f_38, t);
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_26 = NULL;
        t = term_x_8;
        i_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_26, term_x_8);
        t = a_7(c_26, i_26, t);
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_26 = ATgetFirst((ATermList) t);
      e_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_8;
  g_26 = t;
  t = (ATerm) ATinsert(CheckATermList(e_26), (ATerm) ATinsert(CheckATermList(d_26), h_38));
  h_26 = t;
  t = SSL_table_put(c_26, g_26, h_26);
  t = f_26;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm RegisterDefinition_0_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  q_26 = t;
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_ExtSDef_3))
          {
            r_26 = ATgetArgument(t, 0);
            {
              ATerm s_12 = ATgetArgument(t, 1);
            }
            {
              ATerm w_12 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_12);
        {
          ATerm y_26 = NULL,z_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, r_26, (ATerm) ATempty);
          y_26 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_12, q_26);
          z_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_12, q_26));
          t = o_6(r_2, y_26, z_26, t);
          t = q_26;
        }
      }
    else
      {
        t = q_12;
        {
          ATerm y_12 = t;
          int z_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  r_26 = ATgetArgument(t, 0);
                  {
                    ATerm a_13 = ATgetArgument(t, 1);
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
              LocalPopChoice(z_12);
              {
                ATerm d_27 = NULL,e_27 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, r_26, (ATerm) ATempty);
                d_27 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_13, q_26);
                e_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_d_13, q_26));
                t = o_6(w_2, d_27, e_27, t);
                t = q_26;
              }
            }
          else
            {
              t = y_12;
              {
                ATerm i_27 = NULL,j_27 = NULL;
                if(match_cons(t, sym_SDefT_4))
                  {
                    r_26 = ATgetArgument(t, 0);
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
                t = (ATerm) ATmakeAppl(sym__2, r_26, (ATerm) ATempty);
                i_27 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_13, q_26);
                j_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_26, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_h_13, q_26));
                t = o_6(x_2, i_27, j_27, t);
                t = q_26;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = free_vars_3_0(a_3, b_3, sboundin_3_0, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm i_13 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
      s_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_30), r_30);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm w_27 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      w_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_27);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm z_27 = NULL,b_28 = NULL,c_28 = NULL,i_28 = NULL,j_28 = NULL;
  z_27 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_28 = ATgetArgument(t, 0);
      c_28 = ATgetArgument(t, 1);
      t = z_27;
      t = x_5(b_28, c_28, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_28 = ATgetArgument(t, 0);
          c_28 = ATgetArgument(t, 1);
          i_28 = ATgetArgument(t, 2);
          t = c_28;
          t = map_1_0(d_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              b_28 = ATgetArgument(t, 0);
              c_28 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, b_28);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  b_28 = ATgetArgument(t, 0);
                  c_28 = ATgetArgument(t, 1);
                  i_28 = ATgetArgument(t, 2);
                  j_28 = ATgetArgument(t, 3);
                  t = c_28;
                  t = map_1_0(k_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_28 = ATgetArgument(t, 0);
                      c_28 = ATgetArgument(t, 1);
                      i_28 = ATgetArgument(t, 2);
                      j_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_28;
                  t = map_1_0(n_3, t);
                }
            }
        }
    }
  return(t);
}
static ATerm d_3 (ATerm t)
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
static ATerm k_3 (ATerm t)
{
  ATerm t_29 = NULL;
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_29 = ATgetArgument(t, 0);
          {
            ATerm r_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_13);
      t = t_29;
    }
  else
    {
      t = o_13;
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
static ATerm n_3 (ATerm t)
{
  ATerm m_30 = NULL;
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_30 = ATgetArgument(t, 0);
          {
            ATerm w_13 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_13);
      t = m_30;
    }
  else
    {
      t = u_13;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_30;
    }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm t_27 = NULL;
  t = map_1_0(RegisterDefinition_0_0, t);
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATempty, term_x_13), t_27, (ATerm) ATempty);
  t = graph_nodes_roots_3_0(Definition_0_0, y_2, z_2, t);
  return(t);
}
static ATerm z_6 (ATerm y_51, ATerm z_51, ATerm t)
{
  t = SSL_strcat(y_51, z_51);
  return(t);
}
static ATerm t_3 (ATerm t)
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
static ATerm v_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_30 = NULL;
      z_30 = t;
      t = SSL_is_string(z_30);
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm e_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(t_3, t);
            LocalPopChoice(g_14);
          }
        else
          {
            t = e_14;
            {
              ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
              f_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_31 = ATgetArgument(t, 0);
                  t = g_31;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_31 = ATgetArgument(t, 0);
                      t = g_31;
                      {
                        ATerm j_14 = t;
                        int k_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(k_14);
                          }
                        else
                          {
                            t = j_14;
                            t = debug_1_0(v_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_31 = NULL,m_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_31 = ATgetArgument(t, 0);
                          h_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_31;
                      t = eval_config_0_0(t);
                      l_31 = t;
                      t = h_31;
                      t = eval_config_0_0(t);
                      m_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_31, m_31);
                      t = z_6(l_31, m_31, t);
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
  ATerm q_31 = NULL,r_31 = NULL;
  q_31 = t;
  t = term_l_14;
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_14, q_31);
  t = a_7(r_31, q_31, t);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_31 = NULL,v_31 = NULL;
        t = eval_config_0_0(t);
        u_31 = t;
        t = term_l_14;
        v_31 = t;
        t = SSL_table_put(v_31, q_31, u_31);
        t = u_31;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
      }
  }
  return(t);
}
ATerm Cons_2_0 (ATerm u_67 (ATerm), ATerm v_67 (ATerm), ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL,f_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,o_4 = NULL;
  k_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_31 = ATgetFirst((ATermList) t);
      f_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_32);
  y_31 = t;
  t = z_31;
  t = u_67(t);
  i_32 = t;
  t = f_32;
  t = v_67(t);
  j_32 = t;
  t = (ATerm) ATinsert(CheckATermList(j_32), i_32);
  o_4 = t;
  t = SSLsetAnnotations(o_4, y_31);
  return(t);
}
static ATerm p_6 (ATerm c_30, ATerm d_30, ATerm t)
{
  ATerm l_32 = NULL;
  t = SSL_fputc(c_30, d_30);
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_32);
  return(t);
}
static ATerm q_6 (ATerm w_28, ATerm x_28, ATerm t)
{
  ATerm p_32 = NULL;
  t = SSL_write_term_to_stream_text(w_28, x_28);
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_32);
  return(t);
}
static ATerm s_6 (ATerm h_89 (ATerm), ATerm p_196, ATerm a_29, ATerm t)
{
  ATerm q_32 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_196, term_o_14);
  t = v_6(t);
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_32, a_29);
  t = h_89(t);
  t = fclose_0_0(t);
  t = a_29;
  return(t);
}
static ATerm r_6 (ATerm s_28, ATerm t_28, ATerm t)
{
  ATerm r_32 = NULL;
  t = SSL_write_term_to_stream_baf(s_28, t_28);
  r_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_32);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm a_33 = NULL,c_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      if(match_cons(p_14, sym_Stream_1))
        {
          a_33 = ATgetArgument(p_14, 0);
        }
      else
        _fail(t);
      c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(a_33, c_33, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,k_33 = NULL,l_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      if(match_cons(r_14, sym_Stream_1))
        {
          k_33 = ATgetArgument(r_14, 0);
        }
      else
        _fail(t);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(k_33, l_33, t);
  g_33 = t;
  t = term_s_14;
  h_33 = t;
  t = g_33;
  if(match_cons(t, sym_Stream_1))
    {
      i_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, g_33);
  t = p_6(h_33, i_33, t);
  return(t);
}
ATerm output_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm v_32 = NULL,x_32 = NULL;
  t = i_109(t);
  x_32 = t;
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_14;
        t = get_config_0_0(t);
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        t = term_y_14;
      }
  }
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_32, x_32);
  {
    ATerm z_14 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_15;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, v_32, x_32);
        LocalPopChoice(b_15);
        if(match_cons(t, sym__2))
          {
            ATerm f_15 = ATgetArgument(t, 0);
            ATerm g_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_6(w_3, v_32, x_32, t);
      }
    else
      {
        t = z_14;
        if(match_cons(t, sym__2))
          {
            ATerm h_15 = ATgetArgument(t, 0);
            ATerm i_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_6(x_3, v_32, x_32, t);
      }
  }
  return(t);
}
static ATerm o_34 (ATerm y_33, ATerm t)
{
  t = SSL_fclose(y_33);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_34 = NULL,k_34 = NULL;
  k_34 = t;
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
            t = o_34(k_34, t);
          }
      }
    }
  else
    {
      t = o_34(k_34, t);
    }
  return(t);
}
static ATerm t_6 (ATerm y_28, ATerm t)
{
  t = SSL_read_term_from_stream(y_28);
  return(t);
}
ATerm debug_1_0 (ATerm f_89 (ATerm), ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,v_34 = NULL,w_34 = NULL;
  p_34 = t;
  t = f_89(t);
  q_34 = t;
  t = term_l_15;
  v_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_34), q_34);
  w_34 = t;
  t = SSL_printnl(v_34, w_34);
  t = p_34;
  return(t);
}
static ATerm u_6 (ATerm e_30, ATerm f_30, ATerm t)
{
  ATerm x_34 = NULL;
  t = SSL_fopen(e_30, f_30);
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_34);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_34 = NULL;
  t = SSL_stdin_stream();
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_34);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_34 = NULL;
  t = SSL_stdout_stream();
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_34);
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
static ATerm q_36 (ATerm k_35, ATerm t)
{
  ATerm l_35 = NULL;
  t = SSL_explode_term(k_35);
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_15 = ATgetArgument(t, 1);
        if(((ATgetType(o_15) == AT_LIST) && !(ATisEmpty(o_15))))
          {
            l_35 = ATgetFirst((ATermList) o_15);
            {
              ATerm p_15 = (ATerm) ATgetNext((ATermList) o_15);
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
static ATerm r_36 (ATerm q_35, ATerm r_35, ATerm t_35, ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,z_35 = NULL,r_4 = NULL;
  t = SSLgetAnnotations(t_35);
  w_35 = t;
  t = q_35;
  if(match_cons(t, sym_Path_1))
    {
      z_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_35, r_35);
  r_4 = t;
  t = SSLsetAnnotations(r_4, w_35);
  if(match_cons(t, sym__2))
    {
      u_35 = ATgetArgument(t, 0);
      v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(u_35, v_35, t);
  return(t);
}
static ATerm s_36 (ATerm b_36, ATerm c_36, ATerm d_36, ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,l_36 = NULL,t_4 = NULL;
  t = SSLgetAnnotations(d_36);
  i_36 = t;
  t = SSL_is_string(b_36);
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_36, c_36);
  t_4 = t;
  t = SSLsetAnnotations(t_4, i_36);
  if(match_cons(t, sym__2))
    {
      g_36 = ATgetArgument(t, 0);
      h_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(g_36, h_36, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  if(match_cons(t, sym__2))
    {
      o_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
      {
        ATerm q_15 = t;
        int r_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_36(n_36, t);
            LocalPopChoice(r_15);
          }
        else
          {
            t = q_15;
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_36(o_36, p_36, n_36, t);
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = v_15;
                  t = s_36(o_36, p_36, n_36, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_36(n_36, t);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  ATerm z_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_36 = NULL;
      z_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_36, term_c_16);
      t = v_6(t);
      LocalPopChoice(b_16);
    }
  else
    {
      t = z_15;
      t = debug_1_0(d_4, t);
      _fail(t);
    }
  w_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(x_36, t);
  v_36 = t;
  t = w_36;
  t = fclose_0_0(t);
  t = v_36;
  return(t);
}
ATerm input_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_16;
      t = get_config_0_0(t);
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      t = term_g_16;
    }
  t = ReadFromFile_0_0(t);
  t = j_109(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
  b_37 = t;
  t = term_h_8;
  t = whoami_0_0(t);
  c_37 = t;
  t = term_l_15;
  e_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_16), c_37), term_h_16);
  f_37 = t;
  t = SSL_printnl(e_37, f_37);
  t = term_l_16;
  d_37 = t;
  t = SSL_exit(d_37);
  t = b_37;
  return(t);
}
static ATerm e_4 (ATerm t)
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
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  k_37 = t;
  t = SSL_string_to_int(k_37);
  l_37 = t;
  t = term_n_16;
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, l_37);
  t = d_7(m_37, l_37, t);
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
  t = ArgOption_3_0(e_4, f_4, g_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm p_37 = NULL;
  p_37 = t;
  if(match_string(t, "-S"))
    {
      t = p_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_37;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL;
  t = term_r_16;
  q_37 = t;
  t = term_s_16;
  r_37 = t;
  t = term_t_16;
  t = d_7(q_37, r_37, t);
  t = term_w_16;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_x_16;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t_37 = t;
  t = SSL_string_to_int(t_37);
  u_37 = t;
  t = term_r_16;
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, u_37);
  t = d_7(v_37, u_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_37);
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
static ATerm s_4 (ATerm t)
{
  ATerm w_37 = NULL,y_37 = NULL;
  t = term_b_17;
  w_37 = t;
  t = term_h_8;
  y_37 = t;
  t = term_d_17;
  t = d_7(w_37, y_37, t);
  t = term_e_17;
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
      t = Option_3_0(h_4, i_4, k_4, t);
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
            t = ArgOption_3_0(l_4, n_4, p_4, t);
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            t = Option_3_0(q_4, s_4, u_4, t);
          }
      }
    }
  return(t);
}
static ATerm d_7 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm k_38 = NULL;
  t = term_l_14;
  k_38 = t;
  t = SSL_table_put(k_38, w_33, x_33);
  t = (ATerm) ATmakeAppl(sym__3, term_l_14, w_33, x_33);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm r_38 = NULL,w_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_38 = NULL,y_38 = NULL,l_39 = NULL;
      t = term_h_8;
      t = e_0(t);
      x_38 = t;
      t = term_k_17;
      y_38 = t;
      t = term_l_17;
      l_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_17, term_l_17, x_38);
      t = b_7(y_38, l_39, x_38, t);
      _fail(t);
    }
  else
    {
      ATerm o_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_38 = ATgetFirst((ATermList) t);
          w_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_38;
      t = c_0(t);
      t = term_h_8;
      t = d_0(t);
      o_39 = t;
      t = (ATerm) ATinsert(CheckATermList(w_38), o_39);
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm r_39 = NULL;
  r_39 = t;
  if(match_string(t, "-o"))
    {
      t = r_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_39;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL;
  s_39 = t;
  t = term_x_14;
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, s_39);
  t = d_7(t_39, s_39, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_39);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_o_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, x_4, y_4, t);
  return(t);
}
static ATerm b_7 (ATerm p_38, ATerm q_38, ATerm o_38, ATerm t)
{
  ATerm w_39 = NULL,z_39 = NULL,a_40 = NULL;
  w_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_38, q_38);
  {
    ATerm p_17 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, p_38, q_38);
        t = a_7(p_38, q_38, t);
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = (ATerm) ATempty;
      }
  }
  z_39 = t;
  t = (ATerm) ATinsert(CheckATermList(z_39), o_38);
  a_40 = t;
  t = SSL_table_put(p_38, q_38, a_40);
  t = w_39;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_40 = NULL,o_40 = NULL,q_40 = NULL;
      t = term_h_8;
      t = m_0(t);
      n_40 = t;
      t = term_k_17;
      o_40 = t;
      t = term_l_17;
      q_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_17, term_l_17, n_40);
      t = b_7(o_40, q_40, n_40, t);
      _fail(t);
    }
  else
    {
      ATerm z_40 = NULL;
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
          l_40 = ATgetFirst((ATermList) t);
          m_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_40;
      t = k_0(t);
      t = l_40;
      t = l_0(t);
      z_40 = t;
      t = (ATerm) ATinsert(CheckATermList(m_40), z_40);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm b_41 = NULL;
  b_41 = t;
  if(match_string(t, "-i"))
    {
      t = b_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_41;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL;
  c_41 = t;
  t = term_f_16;
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_16, c_41);
  t = d_7(d_41, c_41, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_41);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, f_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,i_41 = NULL,l_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_8;
  t = whoami_0_0(t);
  e_41 = t;
  t = term_l_15;
  i_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_17), e_41);
  l_41 = t;
  t = SSL_printnl(i_41, l_41);
  t = term_l_16;
  f_41 = t;
  t = SSL_exit(f_41);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_17;
  t = get_config_0_0(t);
  return(t);
}
static ATerm w_6 (ATerm t_36, ATerm u_36, ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_36, u_36);
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      t = SSL_addr(t_36, u_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
  p_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_41;
      t = b_99(t);
    }
  else
    {
      ATerm z_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_41 = ATgetFirst((ATermList) t);
          r_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_41;
      t = foldr_2_0(b_99, c_99, t);
      z_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_41, z_41);
      t = c_99(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_s_16;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  if(match_cons(t, sym__2))
    {
      d_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(d_20, e_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_42 = NULL,t_19 = NULL,u_19 = NULL;
  t = times_0_0(t);
  u_19 = t;
  t = SSL_explode_term(u_19);
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_19;
  t = foldr_2_0(h_5, j_5, t);
  g_42 = t;
  t = SSL_TicksToSeconds(g_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
  i_43 = t;
  if(match_cons(t, sym__2))
    {
      j_43 = ATgetArgument(t, 0);
      k_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_43;
        if((j_43 != t))
          {
            _fail(t);
          }
        t = i_43;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = (ATerm) ATmakeAppl(sym__2, j_43, k_43);
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_43, k_43);
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              t = SSL_gtr(j_43, k_43);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_43, k_43);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_90 (ATerm), ATerm t)
{
  ATerm o_43 = NULL;
  o_43 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_43 = NULL;
        t = term_r_16;
        t = get_config_0_0(t);
        q_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_43, term_l_16);
        t = geq_0_0(t);
        t = o_43;
        t = x_90(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = o_43;
      }
  }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,v_43 = NULL,w_43 = NULL;
  t = run_time_0_0(t);
  s_43 = t;
  t = term_h_8;
  t = whoami_0_0(t);
  t_43 = t;
  t = term_l_15;
  v_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), s_43), term_f_18), t_43);
  w_43 = t;
  t = SSL_printnl(v_43, w_43);
  t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), s_43), term_f_18), t_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_16;
  x_43 = t;
  t = SSL_exit(x_43);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm f_44 = NULL,k_44 = NULL;
  k_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_44 = ATgetArgument(t, 0);
          {
            ATerm i_21 = NULL,w_4 = NULL;
            t = SSLgetAnnotations(k_44);
            i_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_44);
            w_4 = t;
            t = SSLsetAnnotations(w_4, i_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm h_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_18;
      t = get_config_0_0(t);
      LocalPopChoice(k_18);
    }
  else
    {
      t = h_18;
      t = fetch_1_0(l_5, t);
    }
  t = z_108(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_44 = ATgetFirst((ATermList) t);
      t_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_44 = NULL,y_44 = NULL;
        static ATerm n_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_44)), not_null(y_44));
          return(t);
        }
        t = t_44;
        t = i_0(t);
        if(((x_44 != NULL) && (x_44 != t)))
          _fail(t);
        else
          x_44 = t;
        t = s_44;
        t = g_0(t);
        if(((y_44 != NULL) && (y_44 != t)))
          _fail(t);
        else
          y_44 = t;
        t = t_44;
        t = reverse_acc_2_0(g_0, n_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm a_7 (ATerm g_40, ATerm h_40, ATerm t)
{
  t = SSL_table_get(g_40, h_40);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,z_4 = NULL;
  e_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_45);
  c_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_45);
  z_4 = t;
  t = SSLsetAnnotations(z_4, c_45);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_45), term_m_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL;
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
  a_45 = t;
  t = term_l_17;
  b_45 = t;
  t = term_t_18;
  t = a_7(a_45, b_45, t);
  t = reverse_acc_2_0(_id, t_5, t);
  t = map_1_0(u_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  static ATerm d_46 (ATerm t)
  {
    ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
    a_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_46 = ATgetFirst((ATermList) t);
        c_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_18 = t;
      int v_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_22 = NULL,f_22 = NULL,c_5 = NULL;
          t = SSLgetAnnotations(a_46);
          c_22 = t;
          t = b_46;
          t = k_94(t);
          f_22 = t;
          t = (ATerm) ATinsert(CheckATermList(c_46), f_22);
          c_5 = t;
          t = SSLsetAnnotations(c_5, c_22);
          LocalPopChoice(v_18);
        }
      else
        {
          t = u_18;
          {
            ATerm t_22 = NULL,c_23 = NULL,l_7 = NULL;
            t = SSLgetAnnotations(a_46);
            t_22 = t;
            t = c_46;
            t = d_46(t);
            c_23 = t;
            t = (ATerm) ATinsert(CheckATermList(c_23), b_46);
            l_7 = t;
            t = SSLsetAnnotations(l_7, t_22);
          }
        }
    }
    return(t);
  }
  t = d_46(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
  h_46 = t;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_46;
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
            t = h_46;
          }
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = (ATerm) ATinsert(ATempty, h_46);
      }
  }
  i_46 = t;
  t = term_y_14;
  j_46 = t;
  t = SSL_printnl(j_46, i_46);
  t = h_46;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL;
  t = term_a_19;
  n_46 = t;
  t = term_h_8;
  o_46 = t;
  t = term_b_19;
  t = d_7(n_46, o_46, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_c_19;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  t = term_a_19;
  r_46 = t;
  t = term_h_8;
  s_46 = t;
  t = term_b_19;
  t = d_7(r_46, s_46, t);
  t = term_d_19;
  p_46 = t;
  t = term_h_8;
  q_46 = t;
  t = term_e_19;
  t = d_7(p_46, q_46, t);
  t = term_f_19;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_k_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_5, y_5, a_6, t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      t = Option_3_0(c_6, f_6, g_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_111 (ATerm), ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,c_47 = NULL,d_47 = NULL,e_8 = NULL;
  x_46 = t;
  {
    ATerm p_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_19;
        t = c_111(t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = p_19;
      }
  }
  t = x_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_46 = ATgetFirst((ATermList) t);
      a_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_46);
  y_46 = t;
  t = term_v_17;
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, z_46);
  t = d_7(d_47, z_46, t);
  t = a_47;
  {
    static ATerm o_47 (ATerm t)
    {
      ATerm x_19 = t;
      int y_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_20 = t;
          int c_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_47 = NULL;
              g_47 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_47;
              LocalPopChoice(c_20);
            }
          else
            {
              t = b_20;
              t = c_111(t);
              t = Cons_2_0(_id, o_47, t);
            }
          LocalPopChoice(y_19);
        }
      else
        {
          t = x_19;
          {
            ATerm k_47 = NULL,l_47 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_47 = ATgetFirst((ATermList) t);
                l_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_47), (ATerm) ATmakeAppl(sym_Undefined_1, k_47));
          }
        }
      return(t);
    }
    t = o_47(t);
  }
  c_47 = t;
  t = (ATerm) ATinsert(CheckATermList(c_47), (ATerm) ATmakeAppl(sym_Program_1, z_46));
  e_8 = t;
  t = SSLsetAnnotations(e_8, y_46);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm a_48 = NULL;
  a_48 = t;
  if(match_string(t, "--help"))
    {
      t = a_48;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_48;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_48;
        }
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm b_48 = NULL,c_48 = NULL;
  t = term_l_18;
  b_48 = t;
  t = term_h_8;
  c_48 = t;
  t = term_f_20;
  t = d_7(b_48, c_48, t);
  t = term_g_20;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_h_20;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_111 (ATerm), ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
  v_47 = t;
  t = term_k_17;
  x_47 = t;
  t = term_l_17;
  y_47 = t;
  t = (ATerm) ATempty;
  z_47 = t;
  t = SSL_table_put(x_47, y_47, z_47);
  t = v_47;
  {
    static ATerm h_6 (ATerm t)
    {
      ATerm i_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_111(t);
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
                t = Option_3_0(m_6, n_6, c_7, t);
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
    t = parse_options_p__1_0(h_6, t);
  }
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_48 = NULL;
        j_48 = t;
        {
          ATerm o_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_25 = NULL;
              t = j_48;
              {
                ATerm t_20 = t;
                int u_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_l_18;
                    t = get_config_0_0(t);
                    LocalPopChoice(u_20);
                  }
                else
                  {
                    t = t_20;
                    t = fetch_1_0(e_7, t);
                  }
              }
              t = j_48;
              t = default_system_usage_0_0(t);
              t = term_s_16;
              z_25 = t;
              t = SSL_exit(z_25);
              LocalPopChoice(s_20);
            }
          else
            {
              t = o_20;
              {
                ATerm k_26 = NULL;
                t = term_a_19;
                t = get_config_0_0(t);
                t = j_48;
                t = default_system_about_0_0(t);
                t = term_s_16;
                k_26 = t;
                t = SSL_exit(k_26);
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
              ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
              static ATerm f_7 (ATerm t)
              {
                ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,g_8 = NULL;
                p_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_48);
                n_48 = t;
                t = o_48;
                if(((t_47 != NULL) && (t_47 != t)))
                  _fail(t);
                else
                  t_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_48);
                g_8 = t;
                t = SSLsetAnnotations(g_8, n_48);
                return(t);
              }
              t = fetch_1_0(f_7, t);
              t = term_l_15;
              l_48 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_47)), term_x_20);
              m_48 = t;
              t = SSL_printnl(l_48, m_48);
              t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_47)), term_x_20));
              t = default_system_usage_0_0(t);
              t = term_l_16;
              k_48 = t;
              t = SSL_exit(k_48);
              LocalPopChoice(w_20);
            }
          else
            {
              t = v_20;
            }
        }
      }
  }
  u_47 = t;
  t = term_k_17;
  w_47 = t;
  t = SSL_table_destroy(w_47);
  t = u_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
  t = parse_options_1_0(b_109, t);
  u_48 = t;
  t = term_z_20;
  x_48 = t;
  t = SSL_table_create(x_48);
  t = term_z_20;
  v_48 = t;
  t = term_a_21;
  w_48 = t;
  t = SSL_table_put(v_48, w_48, u_48);
  t = u_48;
  t = d_109(t);
  {
    ATerm b_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_109, t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = b_21;
        {
          ATerm e_21 = t;
          int h_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_109(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_21);
            }
          else
            {
              t = e_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_7, k_7, m_7, t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm o_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(q_21);
          }
        else
          {
            t = o_21;
            {
              ATerm r_21 = t;
              int w_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(w_21);
                }
              else
                {
                  t = r_21;
                  {
                    ATerm x_21 = t;
                    int y_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(n_7, o_7, p_7, t);
                        LocalPopChoice(y_21);
                      }
                    else
                      {
                        t = x_21;
                        {
                          ATerm d_22 = t;
                          int e_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(e_22);
                            }
                          else
                            {
                              t = d_22;
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
  t = input_1_0(q_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--only-local", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL;
  a_49 = t;
  t = term_g_22;
  b_49 = t;
  t = term_h_8;
  c_49 = t;
  t = term_h_22;
  t = d_7(b_49, c_49, t);
  t = a_49;
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
  ATerm d_49 = NULL,e_49 = NULL;
  t = term_c_15;
  d_49 = t;
  t = term_h_8;
  e_49 = t;
  t = term_m_22;
  t = d_7(d_49, e_49, t);
  t = term_p_22;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = output_1_0(s_7, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,v_8 = NULL,u_8 = NULL;
  n_49 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_49);
  g_49 = t;
  t = h_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_49 = ATgetFirst((ATermList) t);
      k_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_49);
  i_49 = t;
  t = k_49;
  t = Cons_2_0(t_7, u_7, t);
  l_49 = t;
  t = (ATerm) ATinsert(CheckATermList(l_49), j_49);
  u_8 = t;
  t = SSLsetAnnotations(u_8, i_49);
  m_49 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_49);
  v_8 = t;
  t = SSLsetAnnotations(v_8, g_49);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,i_8 = NULL;
  r_49 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_49);
  o_49 = t;
  t = p_49;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_22;
        t = get_config_0_0(t);
        t = p_49;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        t = dead_def_elim_0_0(t);
      }
  }
  t = map_1_0(local_dead_def_elim_0_0, t);
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, q_49);
  i_8 = t;
  t = SSLsetAnnotations(i_8, o_49);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(h_7, default_usage_0_0, _id, i_7, t);
  return(t);
}
