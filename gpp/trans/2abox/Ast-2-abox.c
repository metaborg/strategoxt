#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Undefined_0;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_F__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_S_1;
Symbol sym_HV_2;
Symbol sym_SOpt_2;
Symbol sym_Strict_0;
Symbol sym_alt_2;
static void init_module_constructors (void)
{
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
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
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
}
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_o_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_l_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_k_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_r_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_r_21;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_z_19;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_e_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__2, term_t_17, term_l_17);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_m_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__2, term_e_25, term_k_11);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_11);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_e_10);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_t_25, term_u_25);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_z_27, term_e_10);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_e_10);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_u_26, term_e_10);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_e_10);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm n_78 (ATerm), ATerm t);
static ATerm q_6 (ATerm z_17, ATerm a_18, ATerm y_17, ATerm t);
static ATerm f_6 (ATerm q_4, ATerm s_4, ATerm t_4, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm j_101 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
ATerm collect_p__1_0 (ATerm u_109 (ATerm), ATerm t);
static ATerm r_6 (ATerm h_31, ATerm i_31, ATerm t);
static ATerm s_6 (ATerm i_75 (ATerm), ATerm b_16, ATerm c_16, ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm t_6 (ATerm q_17, ATerm s_17, ATerm p_17, ATerm t);
ATerm symbol2abox6_0_0 (ATerm t);
ATerm symbol2abox5_0_0 (ATerm t);
static ATerm v_6 (ATerm w_16, ATerm x_16, ATerm z_16, ATerm y_16, ATerm t);
static ATerm w_6 (ATerm r_16, ATerm s_16, ATerm v_16, ATerm u_16, ATerm t_16, ATerm t);
static ATerm y_6 (ATerm p_30, ATerm q_30, ATerm t);
static ATerm z_6 (ATerm f_35, ATerm d_35, ATerm e_35, ATerm t);
ATerm repeat_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_7 (ATerm i_16, ATerm h_16, ATerm m_16, ATerm t);
ATerm genzip_4_0 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm nzip_1_0 (ATerm q_88 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm trm2abox_appl_0_0 (ATerm t);
ATerm trm2abox_list_0_0 (ATerm t);
ATerm trm2abox_0_0 (ATerm t);
static ATerm g_7 (ATerm z_28, ATerm a_29, ATerm t);
static ATerm h_7 (ATerm x_84 (ATerm), ATerm p_306, ATerm j_29, ATerm t);
static ATerm i_7 (ATerm d_95 (ATerm), ATerm l_42, ATerm j_42, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm j_7 (ATerm o_41, ATerm p_41, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm i_77 (ATerm), ATerm t);
static ATerm k_7 (ATerm k_19, ATerm l_19, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm l_7 (ATerm s_21, ATerm t_21, ATerm t);
ATerm end_scope_1_0 (ATerm a_95 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_94 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_77 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm u_77 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_7 (ATerm n_51, ATerm o_51, ATerm t);
ATerm unescape_chars_1_0 (ATerm e_83 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm c_87 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm unquote_chars_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm m_78 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm u_7 (ATerm m_51, ATerm t);
ATerm oncetd_1_0 (ATerm q_79 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm c_36 (ATerm w_35, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_7 (ATerm f_29, ATerm t);
static ATerm y_7 (ATerm x_41, ATerm y_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_37 (ATerm m_36, ATerm t);
static ATerm s_37 (ATerm q_36, ATerm r_36, ATerm s_36, ATerm t);
static ATerm t_37 (ATerm b_37, ATerm c_37, ATerm d_37, ATerm t);
static ATerm z_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm ast2abox_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm r_86 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm o_42 (ATerm k_41, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_8 (ATerm y_18, ATerm x_18, ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_8 (ATerm s_18, ATerm t_18, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_8 (ATerm n_21, ATerm o_21, ATerm m_21, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_8 (ATerm j_30, ATerm k_30, ATerm t);
ATerm foldr_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_75 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm need_help_1_0 (ATerm j_96 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_86 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_8 (ATerm o_28, ATerm p_28, ATerm t);
ATerm debug_1_0 (ATerm v_84 (ATerm), ATerm t);
ATerm map_1_0 (ATerm a_86 (ATerm), ATerm t);
static ATerm p_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm f_8 (ATerm e_23, ATerm f_23, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_98 (ATerm), ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm i_9 (ATerm t);
ATerm parse_options_1_0 (ATerm g_98 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,r_2 = NULL;
  o_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_2;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_2 = ATgetFirst((ATermList) t);
          r_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_2 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 = NULL,q_0 = NULL,s_0 = NULL;
            t = SSLgetAnnotations(o_2);
            h_0 = t;
            t = p_2;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_2;
            t = flat_list_0_0(t);
            q_0 = t;
            t = (ATerm) ATinsert(CheckATermList(q_0), p_2);
            s_0 = t;
            t = SSLsetAnnotations(s_0, h_0);
            LocalPopChoice(s_9);
          }
        else
          {
            t = t_2;
            {
              ATerm t_9 = t;
              int v_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_1 = NULL,o_1 = NULL,q_1 = NULL,z_1 = NULL,v_0 = NULL;
                  t = SSLgetAnnotations(o_2);
                  q_1 = t;
                  t = p_2;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = p_2;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm a_10 = ATgetFirst((ATermList) t);
                          ATerm b_10 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = p_2;
                    }
                  t = (ATerm) ATinsert(CheckATermList(r_2), p_2);
                  v_0 = t;
                  t = SSLsetAnnotations(v_0, q_1);
                  z_1 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_1 = ATgetFirst((ATermList) t);
                      {
                        ATerm c_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = z_1;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm d_10 = ATgetFirst((ATermList) t);
                      m_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, o_1, m_1);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(v_9);
                }
              else
                {
                  t = t_9;
                  {
                    ATerm v_2 = NULL,c_3 = NULL,w_0 = NULL;
                    t = SSLgetAnnotations(o_2);
                    v_2 = t;
                    t = r_2;
                    t = flat_list_0_0(t);
                    c_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(c_3), p_2);
                    w_0 = t;
                    t = SSLsetAnnotations(w_0, v_2);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm b_3 = NULL,j_3 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      j_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
      {
        ATerm w_3 = NULL,x_3 = NULL;
        t = term_e_10;
        t = p_0(t);
        x_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_3, x_3);
        t = index_0_0(t);
        w_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_3, w_3);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm z_3 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          j_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_e_10;
      t = p_0(t);
      z_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_3, z_3);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm n_78 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(n_78, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = n_78(t);
  return(t);
}
static ATerm q_6 (ATerm z_17, ATerm a_18, ATerm y_17, ATerm t)
{
  ATerm b_4 = NULL,d_4 = NULL;
  static ATerm f_0 (ATerm t)
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_0 (ATerm t)
            {
              t = not_null(b_4);
              return(t);
            }
            t = Instantiate_1_0(j_0, t);
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
      }
    return(t);
  }
  t = SSL_explode_term(y_17);
  if(match_cons(t, sym__2))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4;
  {
    static ATerm b_0 (ATerm t)
    {
      ATerm f_4 = NULL,g_4 = NULL;
      if(match_cons(t, sym__2))
        {
          f_4 = ATgetArgument(t, 0);
          g_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, f_4, z_17, g_4);
      t = c_7(f_4, z_17, g_4, t);
      return(t);
    }
    t = nzip_1_0(b_0, t);
  }
  if(((b_4 != NULL) && (b_4 != t)))
    _fail(t);
  else
    b_4 = t;
  t = a_18;
  t = bottomup_1_0(f_0, t);
  return(t);
}
static ATerm f_6 (ATerm q_4, ATerm s_4, ATerm t_4, ATerm t)
{
  ATerm y_4 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(t_4);
  y_4 = t;
  t = s_4;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_4), q_4);
  b_1 = t;
  t = SSLsetAnnotations(b_1, y_4);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  static ATerm e_6 (ATerm t)
  {
    static ATerm j_6 (ATerm c_5, ATerm e_5, ATerm f_5, ATerm g_5, ATerm t)
    {
      ATerm k_5 = NULL,m_5 = NULL,o_5 = NULL,d_1 = NULL;
      t = g_5;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm k_10 = ATgetFirst((ATermList) t);
          ATerm l_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_5);
      k_5 = t;
      t = term_e_10;
      t = j_101(t);
      {
        static ATerm m_0 (ATerm t)
        {
          ATerm m_10 = t;
          int o_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_10 = t;
              int s_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm r_0 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, e_5), c_5);
                    return(t);
                  }
                  t = Instantiate_1_0(r_0, t);
                  LocalPopChoice(s_10);
                }
              else
                {
                  t = p_10;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(o_10);
            }
          else
            {
              t = m_10;
            }
          return(t);
        }
        t = bottomup_1_0(m_0, t);
      }
      o_5 = t;
      t = f_5;
      t = e_6(t);
      m_5 = t;
      t = (ATerm) ATinsert(CheckATermList(m_5), o_5);
      d_1 = t;
      t = SSLsetAnnotations(d_1, k_5);
      return(t);
    }
    ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL;
    u_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_5;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_5 = ATgetFirst((ATermList) t);
            w_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_5;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_5 = ATgetFirst((ATermList) t);
            y_5 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm w_10 = t;
              int y_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_6(v_5, w_5, u_5, t);
                  LocalPopChoice(y_10);
                }
              else
                {
                  t = w_10;
                  t = j_6(v_5, x_5, y_5, u_5, t);
                }
            }
          }
        else
          {
            t = f_6(v_5, w_5, u_5, t);
          }
      }
    return(t);
  }
  t = e_6(t);
  return(t);
}
ATerm foldr_3_0 (ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm a_93 (ATerm), ATerm t)
{
  ATerm n_6 = NULL,p_6 = NULL,u_6 = NULL;
  n_6 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_6;
      t = y_92(t);
    }
  else
    {
      ATerm f_7 = NULL,n_7 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_6 = ATgetFirst((ATermList) t);
          u_6 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_6;
      t = a_93(t);
      f_7 = t;
      t = u_6;
      t = foldr_3_0(y_92, z_92, a_93, t);
      n_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_7, n_7);
      t = z_92(t);
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm u_109 (ATerm), ATerm t)
{
  static ATerm r_7 (ATerm t)
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL;
        t = u_109(t);
        q_7 = t;
        t = (ATerm) ATinsert(ATempty, q_7);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        {
          ATerm i_3 = NULL,k_3 = NULL;
          k_3 = t;
          t = SSL_explode_term(k_3);
          if(match_cons(t, sym__2))
            {
              ATerm d_11 = ATgetArgument(t, 0);
              i_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_3;
          t = foldr_3_0(t_0, conc_0_0, r_7, t);
        }
      }
    return(t);
  }
  t = r_7(t);
  return(t);
}
static ATerm r_6 (ATerm h_31, ATerm i_31, ATerm t)
{
  t = SSL_mod(h_31, i_31);
  return(t);
}
static ATerm s_6 (ATerm i_75 (ATerm), ATerm b_16, ATerm c_16, ATerm t)
{
  ATerm s_7 = NULL;
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_8 = NULL,h_8 = NULL,j_8 = NULL;
      t = term_h_11;
      j_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_16, term_h_11);
      t = r_6(b_16, j_8, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_e_10;
      t = i_75(t);
      c_8 = t;
      t = term_h_11;
      h_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_11, c_8, c_16);
      t = c_7(h_8, c_8, c_16, t);
      s_7 = t;
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      {
        ATerm k_8 = NULL,l_8 = NULL;
        t = term_e_10;
        t = i_75(t);
        k_8 = t;
        t = term_j_11;
        l_8 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_j_11, k_8, c_16);
        t = c_7(l_8, k_8, c_16, t);
        s_7 = t;
      }
    }
  t = s_7;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm t_8 = NULL,x_8 = NULL,y_8 = NULL,g_1 = NULL;
  y_8 = t;
  if(match_cons(t, sym_S_1))
    {
      x_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_8);
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, x_8);
  g_1 = t;
  t = SSLsetAnnotations(g_1, t_8);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_k_11;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm z_8 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(z_8, e_9, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_j_11;
  return(t);
}
static ATerm t_6 (ATerm q_17, ATerm s_17, ATerm p_17, ATerm t)
{
  ATerm p_8 = NULL;
  static ATerm e_1 (ATerm t)
  {
    t = s_17;
    return(t);
  }
  t = p_17;
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm r_8 = NULL,s_8 = NULL;
      static ATerm x_0 (ATerm t)
      {
        t = q_17;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          r_8 = ATgetArgument(t, 0);
          s_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_6(x_0, r_8, s_8, t);
      return(t);
    }
    t = nzip_1_0(u_0, t);
  }
  p_8 = t;
  {
    ATerm l_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm p_9 (ATerm t)
        {
          ATerm g_9 = NULL,h_9 = NULL;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATempty;
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_9 = ATgetFirst((ATermList) t);
                  h_9 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_9;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm p_11 = t;
                  int r_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, g_9);
                      LocalPopChoice(r_11);
                    }
                  else
                    {
                      t = p_11;
                      {
                        ATerm l_9 = NULL;
                        t = h_9;
                        t = p_9(t);
                        l_9 = t;
                        t = (ATerm) ATinsert(ATinsert(CheckATermList(l_9), g_9), g_9);
                      }
                    }
                }
              else
                {
                  ATerm o_9 = NULL;
                  t = h_9;
                  t = p_9(t);
                  o_9 = t;
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(o_9), g_9), g_9);
                }
            }
          return(t);
        }
        t = s_17;
        t = collect_p__1_0(y_0, t);
        t = foldr_3_0(z_0, a_1, c_1, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = p_8;
        t = p_9(t);
        LocalPopChoice(o_11);
      }
    else
      {
        t = l_11;
        t = p_8;
      }
  }
  t = instantiate_sep_list_1_0(e_1, t);
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm u_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym__4))
    {
      u_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
      y_9 = ATgetArgument(t, 2);
      z_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = u_9;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, x_9, y_9, z_9);
      t = t_6(x_9, y_9, z_9, t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, x_9, y_9, z_9);
      t = t_6(x_9, y_9, z_9, t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm n_10 = NULL,q_10 = NULL,r_10 = NULL,t_10 = NULL,u_10 = NULL,x_10 = NULL;
  static ATerm h_1 (ATerm t)
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(n_10));
              return(t);
            }
            t = Instantiate_1_0(k_1, t);
            LocalPopChoice(w_11);
          }
        else
          {
            t = v_11;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
      }
    return(t);
  }
  q_10 = t;
  if(match_cons(t, sym__4))
    {
      r_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
      u_10 = ATgetArgument(t, 2);
      x_10 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = r_10;
  if(match_string(t, "iter"))
    {
      t = q_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = q_10;
    }
  t = x_10;
  {
    static ATerm f_1 (ATerm t)
    {
      ATerm b_11 = NULL,c_11 = NULL;
      b_11 = t;
      t = term_j_11;
      c_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_11, t_10, b_11);
      t = c_7(c_11, t_10, b_11, t);
      return(t);
    }
    t = map_1_0(f_1, t);
  }
  if(((n_10 != NULL) && (n_10 != t)))
    _fail(t);
  else
    n_10 = t;
  t = u_10;
  t = bottomup_1_0(h_1, t);
  return(t);
}
static ATerm v_6 (ATerm w_16, ATerm x_16, ATerm z_16, ATerm y_16, ATerm t)
{
  ATerm g_11 = NULL,i_11 = NULL;
  static ATerm l_1 (ATerm t)
  {
    ATerm a_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(g_11));
              return(t);
            }
            t = Instantiate_1_0(n_1, t);
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(c_12);
      }
    else
      {
        t = a_12;
      }
    return(t);
  }
  t = term_j_11;
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_11, x_16, y_16);
  t = c_7(i_11, x_16, y_16, t);
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  t = z_16;
  t = bottomup_1_0(l_1, t);
  return(t);
}
static ATerm w_6 (ATerm r_16, ATerm s_16, ATerm v_16, ATerm u_16, ATerm t_16, ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL;
  static ATerm p_1 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(n_11));
              return(t);
            }
            t = Instantiate_1_0(s_1, t);
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
      }
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__3, u_16, s_16, t_16);
  t = c_7(u_16, s_16, t_16, t);
  if(((n_11 != NULL) && (n_11 != t)))
    _fail(t);
  else
    n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_16, v_16);
  t = index_0_0(t);
  m_11 = t;
  t = (ATerm) ATinsert(ATempty, m_11);
  t = bottomup_1_0(p_1, t);
  return(t);
}
static ATerm y_6 (ATerm p_30, ATerm q_30, ATerm t)
{
  ATerm n_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(p_30, q_30);
      LocalPopChoice(r_12);
    }
  else
    {
      t = n_12;
      t = SSL_subtr(p_30, q_30);
    }
  return(t);
}
static ATerm z_6 (ATerm f_35, ATerm d_35, ATerm e_35, ATerm t)
{
  ATerm q_11 = NULL,x_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_35, term_h_11);
  t = geq_0_0(t);
  t = term_j_11;
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_35, term_j_11);
  t = y_6(f_35, x_11, t);
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_11, e_35);
  return(t);
}
ATerm repeat_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  static ATerm z_11 (ATerm t)
  {
    ATerm x_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_83(t);
        t = z_11(t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = x_12;
        t = j_83(t);
      }
    return(t);
  }
  t = z_11(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      {
        ATerm a_13 = ATgetArgument(t, 1);
        if(((ATgetType(a_13) == AT_LIST) && !(ATisEmpty(a_13))))
          {
            e_12 = ATgetFirst((ATermList) a_13);
            f_12 = (ATerm) ATgetNext((ATermList) a_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_6(d_12, e_12, f_12, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  t = repeat_2_0(t_1, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm b_13 = ATgetArgument(t, 0);
      if(((ATgetType(b_13) != AT_INT) || (ATgetInt((ATermInt) b_13) != 1)))
        _fail(t);
      {
        ATerm c_13 = ATgetArgument(t, 1);
        if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
          {
            b_12 = ATgetFirst((ATermList) c_13);
            {
              ATerm d_13 = (ATerm) ATgetNext((ATermList) c_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_12;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm f_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Instantiate_1_0(a_2, t);
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          t = flat_list_0_0(t);
        }
      LocalPopChoice(l_13);
    }
  else
    {
      t = f_13;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_7 (ATerm i_16, ATerm h_16, ATerm m_16, ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_16, (ATerm) ATinsert(ATempty, i_16));
  t = conc_0_0(t);
  p_12 = t;
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_12 = NULL,t_12 = NULL;
        t = pp_table_get_0_0(t);
        if(match_cons(t, sym__2))
          {
            o_12 = ATgetArgument(t, 0);
            q_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_12;
        if(match_cons(t, sym_Path_2))
          {
            ATerm w_13 = ATgetArgument(t, 0);
            s_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_12;
        {
          static ATerm v_1 (ATerm t)
          {
            ATerm u_12 = NULL,v_12 = NULL,y_12 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,j_1 = NULL,i_1 = NULL;
            k_13 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_12 = ATgetFirst((ATermList) t);
                y_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_13);
            u_12 = t;
            t = v_12;
            if(match_cons(t, sym_selector_2))
              {
                h_13 = ATgetArgument(t, 0);
                i_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_12);
            g_13 = t;
            t = i_13;
            if(((t_12 != NULL) && (t_12 != t)))
              _fail(t);
            else
              t_12 = t;
            t = (ATerm) ATmakeAppl(sym_selector_2, h_13, i_13);
            i_1 = t;
            t = SSLsetAnnotations(i_1, g_13);
            j_13 = t;
            t = y_12;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_12), j_13);
            j_1 = t;
            t = SSLsetAnnotations(j_1, u_12);
            return(t);
          }
          t = at_last_1_0(v_1, t);
        }
        t = (ATerm) ATmakeAppl(sym__4, not_null(t_12), p_12, q_12, m_16);
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
              if(match_cons(t, sym__4))
                {
                  ATerm z_13 = ATgetArgument(t, 0);
                  ATerm a_14 = ATgetArgument(t, 1);
                  ATerm b_14 = ATgetArgument(t, 2);
                  ATerm c_14 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = m_16;
              if(match_cons(t, sym_alt_2))
                {
                  q_13 = ATgetArgument(t, 0);
                  n_13 = ATgetArgument(t, 1);
                  t = n_13;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      ATerm g_14 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, q_13, q_12);
                      t = index_0_0(t);
                      g_14 = t;
                      t = (ATerm) ATinsert(ATempty, g_14);
                      t = bottomup_1_0(y_1, t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          o_13 = ATgetFirst((ATermList) t);
                          p_13 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = p_13;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(t_12), p_12, q_12, m_16);
                      t = w_6(not_null(t_12), p_12, q_12, q_13, o_13, t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Some_1))
                    {
                      q_13 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(t_12), p_12, q_12, m_16);
                      t = v_6(not_null(t_12), p_12, q_12, q_13, t);
                    }
                  else
                    {
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                }
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
              {
                ATerm d_14 = t;
                int e_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = symbol2abox5_0_0(t);
                    LocalPopChoice(e_14);
                  }
                else
                  {
                    t = d_14;
                    {
                      ATerm h_14 = t;
                      int i_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = symbol2abox6_0_0(t);
                          LocalPopChoice(i_14);
                        }
                      else
                        {
                          t = h_14;
                          if(match_cons(t, sym__4))
                            {
                              ATerm j_14 = ATgetArgument(t, 0);
                              ATerm k_14 = ATgetArgument(t, 1);
                              ATerm l_14 = ATgetArgument(t, 2);
                              ATerm m_14 = ATgetArgument(t, 3);
                            }
                          else
                            _fail(t);
                          t = not_null(t_12);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("seq", 0, ATtrue)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__4, not_null(t_12), p_12, q_12, m_16);
                          t = q_6(p_12, q_12, m_16, t);
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        t = m_16;
        t = trm2abox_0_0(t);
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm t)
{
  static ATerm u_15 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_88(t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
          ATerm e_15 = NULL,g_15 = NULL,l_15 = NULL,q_15 = NULL,s_15 = NULL,t_15 = NULL,r_1 = NULL;
          t = f_88(t);
          t_15 = t;
          if(match_cons(t, sym__2))
            {
              g_15 = ATgetArgument(t, 0);
              l_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_15);
          e_15 = t;
          t = g_15;
          t = h_88(t);
          q_15 = t;
          t = l_15;
          t = u_15(t);
          s_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_15, s_15);
          r_1 = t;
          t = SSLsetAnnotations(r_1, e_15);
          t = g_88(t);
        }
      }
    return(t);
  }
  t = u_15(t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      ATerm q_14 = ATgetArgument(t, 1);
      if(((ATgetType(q_14) != AT_LIST) || !(ATisEmpty(q_14))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      {
        ATerm r_14 = ATgetArgument(t, 1);
        if(((ATgetType(r_14) == AT_LIST) && !(ATisEmpty(r_14))))
          {
            y_15 = ATgetFirst((ATermList) r_14);
            z_15 = (ATerm) ATgetNext((ATermList) r_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_j_11;
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_15, term_j_11);
  t = b_8(x_15, e_16, t);
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_15, y_15), (ATerm) ATmakeAppl(sym__2, a_16, z_15));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm f_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_16), f_16);
  return(t);
}
ATerm nzip_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm v_15 = NULL;
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_11, v_15);
  t = genzip_4_0(b_2, c_2, d_2, q_88, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm q_16 = NULL,b_17 = NULL,g_17 = NULL,h_17 = NULL;
  q_16 = t;
  t = term_t_14;
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_14, q_16);
  t = f_8(h_17, q_16, t);
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_17;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(e_2, t);
  t = (ATerm) ATmakeAppl(sym__2, g_17, b_17);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_v_14;
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm u_17 = NULL,b_18 = NULL,c_18 = NULL,f_18 = NULL,g_18 = NULL;
  static ATerm i_2 (ATerm t)
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm q_2 (ATerm t)
            {
              t = not_null(f_18);
              return(t);
            }
            t = Instantiate_1_0(q_2, t);
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
      }
    return(t);
  }
  g_18 = t;
  t = SSL_explode_term(g_18);
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_18);
  {
    ATerm d_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        LocalPopChoice(h_15);
      }
    else
      {
        t = d_15;
        t = debug_1_0(g_2, t);
        _fail(t);
      }
  }
  if(match_cons(t, sym__2))
    {
      ATerm i_15 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_17;
  {
    static ATerm h_2 (ATerm t)
    {
      ATerm h_18 = NULL,r_18 = NULL,v_18 = NULL;
      if(match_cons(t, sym__2))
        {
          h_18 = ATgetArgument(t, 0);
          r_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, b_18);
      v_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, h_18, (ATerm)ATinsert(ATempty, b_18), r_18);
      t = c_7(h_18, v_18, r_18, t);
      return(t);
    }
    t = nzip_1_0(h_2, t);
  }
  if(((f_18 != NULL) && (f_18 != t)))
    _fail(t);
  else
    f_18 = t;
  t = c_18;
  t = bottomup_1_0(i_2, t);
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm g_19 = NULL;
  g_19 = t;
  t = SSL_explode_term(g_19);
  if(match_cons(t, sym__2))
    {
      ATerm o_15 = ATgetArgument(t, 0);
      ATerm p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm r_15 = ATgetFirst((ATermList) t);
          ATerm w_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_19;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm d_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_3 = NULL,p_3 = NULL;
      p_3 = t;
      t = SSL_is_string(p_3);
      o_3 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, o_3);
      LocalPopChoice(g_16);
    }
  else
    {
      t = d_16;
      {
        ATerm j_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL;
            s_3 = t;
            t = SSL_is_int(s_3);
            r_3 = t;
            t = SSL_int_to_string(r_3);
            q_3 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, q_3);
            LocalPopChoice(k_16);
          }
        else
          {
            t = j_16;
            {
              ATerm l_16 = t;
              int n_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0_0(t);
                  LocalPopChoice(n_16);
                }
              else
                {
                  t = l_16;
                  {
                    ATerm a_17 = t;
                    int c_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0_0(t);
                        LocalPopChoice(c_17);
                      }
                    else
                      {
                        t = a_17;
                        {
                          ATerm h_20 = NULL,c_4 = NULL,e_4 = NULL,h_4 = NULL;
                          h_20 = t;
                          t = term_e_17;
                          e_4 = t;
                          t = (ATerm) ATinsert(ATinsert(ATempty, h_20), term_f_17);
                          h_4 = t;
                          t = SSL_printnl(e_4, h_4);
                          t = term_j_11;
                          c_4 = t;
                          t = SSL_exit(c_4);
                          t = (ATerm) ATinsert(ATinsert(ATempty, h_20), term_f_17);
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
static ATerm g_7 (ATerm z_28, ATerm a_29, ATerm t)
{
  ATerm j_20 = NULL;
  t = SSL_write_term_to_stream_baf(z_28, a_29);
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_20);
  return(t);
}
static ATerm h_7 (ATerm x_84 (ATerm), ATerm p_306, ATerm j_29, ATerm t)
{
  ATerm k_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_306, term_i_17);
  t = z_7(t);
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_20, j_29);
  t = x_84(t);
  t = fclose_0_0(t);
  t = j_29;
  return(t);
}
static ATerm i_7 (ATerm d_95 (ATerm), ATerm l_42, ATerm j_42, ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
  u_20 = t;
  t = d_95(t);
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_20, l_42, j_42);
  t = g_8(l_20, l_42, j_42, t);
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_20 = NULL;
        t = term_l_17;
        x_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_20, term_l_17);
        t = f_8(l_20, x_20, t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_20 = ATgetFirst((ATermList) t);
      n_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_17;
  v_20 = t;
  t = (ATerm) ATinsert(CheckATermList(n_20), (ATerm) ATinsert(CheckATermList(m_20), l_42));
  w_20 = t;
  t = SSL_table_put(l_20, v_20, w_20);
  t = u_20;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm z_20 = NULL;
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_21 = NULL,n_4 = NULL;
      f_21 = t;
      t = term_o_17;
      n_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_21, term_o_17);
      t = e_8(f_21, n_4, t);
      z_20 = t;
      t = SSL_mkstemp(z_20);
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm h_21 = NULL;
        t = term_r_17;
        h_21 = t;
        t = SSL_perror(h_21);
        _fail(t);
      }
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_21 = NULL,p_21 = NULL,q_21 = NULL,u_21 = NULL,w_21 = NULL;
  t = P__tmpdir_0_0(t);
  u_21 = t;
  t = term_v_17;
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_21, term_v_17);
  t = e_8(u_21, w_21, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_e_10;
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_21, term_e_10);
  t = i_7(s_2, p_21, q_21, t);
  t = SSL_close(j_21);
  t = p_21;
  return(t);
}
static ATerm j_7 (ATerm o_41, ATerm p_41, ATerm t)
{
  t = SSL_access(o_41, p_41);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm z_21 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_d_18;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm b_22 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_18);
      b_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_21, (ATerm) ATinsert(ATempty, term_e_18));
      t = j_7(z_21, b_22, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if(match_cons(k_18, sym_Stream_1))
        {
          e_22 = ATgetArgument(k_18, 0);
        }
      else
        _fail(t);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(e_22, f_22, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  t = read_from_0_0(t);
  t = i_77(t);
  d_22 = t;
  t = xtc_new_file_0_0(t);
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_22, d_22);
  t = h_7(u_2, c_22, d_22, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_22);
  return(t);
}
static ATerm k_7 (ATerm k_19, ATerm l_19, ATerm t)
{
  t = SSL_copy(k_19, l_19);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  b_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      c_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 = NULL;
        t = b_23;
        t = o_0(t);
        d_5 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = d_5;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = d_5;
          }
        t = (ATerm) ATmakeAppl(sym__2, c_23, d_5);
        t = k_7(c_23, d_5, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, c_23);
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        {
          ATerm o_18 = t;
          int p_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_6 = NULL;
              t = b_23;
              t = o_0(t);
              h_6 = t;
              {
                ATerm u_18 = t;
                if((PushChoice() == 0))
                  {
                    ATerm i_6 = NULL;
                    i_6 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = i_6;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = i_6;
                          }
                        else
                          {
                            t = i_6;
                            if((c_23 != t))
                              {
                                _fail(t);
                              }
                            t = i_6;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_18;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, c_23, h_6);
              t = k_7(c_23, h_6, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_23);
              LocalPopChoice(p_18);
            }
          else
            {
              t = o_18;
              t = b_23;
              t = o_0(t);
              if((c_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_23);
            }
        }
      }
  }
  return(t);
}
static ATerm l_7 (ATerm s_21, ATerm t_21, ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  t_23 = t;
  {
    ATerm w_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
        t = f_8(s_21, t_21, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_19 = ATgetFirst((ATermList) t);
            s_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_18);
        t = SSL_table_put(s_21, t_21, s_23);
        t = (ATerm) ATmakeAppl(sym__3, s_21, t_21, s_23);
      }
    else
      {
        t = w_18;
        t = SSL_table_remove(s_21, t_21);
        t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
      }
  }
  t = t_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_95 (ATerm), ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  z_23 = t;
  t = a_95(t);
  y_23 = t;
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_24 = NULL;
        t = term_l_17;
        b_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_23, term_l_17);
        t = f_8(y_23, b_24, t);
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_23 = ATgetFirst((ATermList) t);
      u_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_17;
  a_24 = t;
  t = SSL_table_put(y_23, a_24, u_23);
  t = v_23;
  {
    static ATerm w_2 (ATerm t)
    {
      ATerm c_24 = NULL;
      c_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_23, c_24);
      t = l_7(y_23, c_24, t);
      return(t);
    }
    t = map_1_0(w_2, t);
  }
  t = z_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm t_81 (ATerm), ATerm u_81 (ATerm), ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_81(t);
      t = u_81(t);
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      t = u_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,l_24 = NULL,n_24 = NULL;
  i_24 = t;
  t = z_94(t);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_24, term_l_17);
  {
    ATerm j_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_19 = ATgetArgument(t, 0);
            ATerm r_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_17;
        s_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_24, term_l_17);
        t = f_8(h_24, s_24, t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = j_19;
        t = (ATerm) ATempty;
      }
  }
  j_24 = t;
  t = term_l_17;
  l_24 = t;
  t = (ATerm) ATinsert(CheckATermList(j_24), (ATerm) ATempty);
  n_24 = t;
  t = SSL_table_put(h_24, l_24, n_24);
  t = i_24;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(d_25);
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = d_25;
      }
  }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_t_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_77 (ATerm), ATerm t)
{
  ATerm v_24 = NULL;
  static ATerm y_2 (ATerm t)
  {
    ATerm w_24 = NULL;
    w_24 = t;
    {
      ATerm v_19 = t;
      int w_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_24 = NULL,y_24 = NULL;
          t = term_t_17;
          x_24 = t;
          t = term_l_17;
          y_24 = t;
          t = term_z_19;
          t = f_8(x_24, y_24, t);
          LocalPopChoice(w_19);
        }
      else
        {
          t = v_19;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((v_24 != NULL) && (v_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          v_24 = ATgetFirst((ATermList) t);
        {
          ATerm a_20 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = v_24;
    t = map_1_0(z_2, t);
    t = w_24;
    t = end_scope_1_0(a_3, t);
    return(t);
  }
  t = begin_scope_1_0(x_2, t);
  t = restore_always_2_0(t_77, y_2, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_20;
      t = get_config_0_0(t);
      LocalPopChoice(c_20);
    }
  else
    {
      t = b_20;
      t = term_f_20;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  static ATerm d_3 (ATerm t)
  {
    ATerm i_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_25 = NULL;
        t = term_p_20;
        t = get_config_0_0(t);
        g_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_25);
        LocalPopChoice(o_20);
      }
    else
      {
        t = i_20;
        t = term_d_18;
      }
    t = u_77(t);
    t = copy_to_1_0(e_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(d_3, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm q_8 = NULL,u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      q_8 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(q_8);
  v_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_8), term_r_20), v_8), term_q_20);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,i_26 = NULL;
  f_26 = t;
  if(match_cons(t, sym_Path1_1))
    {
      g_26 = ATgetArgument(t, 0);
      t = g_26;
    }
  else
    {
      ATerm n_8 = NULL,o_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          g_26 = ATgetArgument(t, 0);
          i_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_26;
      t = map_1_0(f_3, t);
      t = concat_0_0(t);
      n_8 = t;
      t = (ATerm) ATinsert(CheckATermList(n_8), g_26);
      o_8 = t;
      t = SSL_concat_strings(o_8);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm m_27 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      m_27 = ATgetArgument(t, 0);
      {
        ATerm s_20 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_27;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm x_26 = NULL,b_27 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      x_26 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, x_26);
    }
  else
    {
      ATerm l_27 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          x_26 = ATgetArgument(t, 0);
          b_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_27;
      t = map_1_0(g_3, t);
      l_27 = t;
      t = (ATerm) ATinsert(CheckATermList(l_27), x_26);
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = debug_1_0(l_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm m_7 (ATerm n_51, ATerm o_51, ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  t = n_51;
  t = mk_key_0_0(t);
  o_27 = t;
  t = term_t_14;
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_51, o_51);
  q_27 = t;
  t = SSL_table_put(p_27, o_27, q_27);
  t = n_51;
  t = path_to_string_0_0(t);
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_27, o_51);
  t = if_verbose1_1_0(h_3, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  static ATerm c_29 (ATerm t)
  {
    ATerm k_28 = NULL,v_28 = NULL,y_28 = NULL;
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_83(t);
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
      }
    y_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_28 = ATgetFirst((ATermList) t);
        v_28 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_9 = NULL,w_9 = NULL,u_1 = NULL;
          t = SSLgetAnnotations(y_28);
          r_9 = t;
          t = v_28;
          t = c_29(t);
          w_9 = t;
          t = (ATerm) ATinsert(CheckATermList(w_9), k_28);
          u_1 = t;
          t = SSLsetAnnotations(u_1, r_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_28;
      }
    return(t);
  }
  t = c_29(t);
  return(t);
}
ATerm at_last_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  static ATerm n_30 (ATerm t)
  {
    ATerm i_30 = NULL,l_30 = NULL,m_30 = NULL;
    i_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_30 = ATgetFirst((ATermList) t);
        m_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_21 = t;
      int g_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_10 = NULL,w_1 = NULL;
          t = SSLgetAnnotations(i_30);
          v_10 = t;
          t = m_30;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(m_30), l_30);
          w_1 = t;
          t = SSLsetAnnotations(w_1, v_10);
          t = c_87(t);
          LocalPopChoice(g_21);
        }
      else
        {
          t = d_21;
          {
            ATerm u_11 = NULL,y_11 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(i_30);
            u_11 = t;
            t = m_30;
            t = n_30(t);
            y_11 = t;
            t = (ATerm) ATinsert(CheckATermList(y_11), l_30);
            x_1 = t;
            t = SSLsetAnnotations(x_1, u_11);
          }
        }
    }
    return(t);
  }
  t = n_30(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_30 = ATgetFirst((ATermList) t);
      w_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_30;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_30;
    }
  else
    {
      t = w_30;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm e_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_21 = ATgetFirst((ATermList) t);
      e_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_31;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  b_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_31 = ATgetFirst((ATermList) t);
      {
        ATerm k_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_31;
  t = q_82(t);
  t = b_31;
  t = last_0_0(t);
  t = r_82(t);
  t = b_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_21 = ATgetFirst((ATermList) t);
      c_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_31;
  t = at_last_1_0(m_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_15 = ATgetFirst((ATermList) t);
      k_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_15;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = k_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_15 = ATgetFirst((ATermList) t);
      n_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_15;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(n_15), term_r_21);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(n_15), term_v_21);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(n_15), term_y_21);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_15), term_a_22);
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm f_34 = NULL,h_34 = NULL,i_34 = NULL;
  f_34 = t;
  if(match_cons(t, sym_Arg_1))
    {
      h_34 = ATgetArgument(t, 0);
      {
        ATerm m_12 = NULL,w_12 = NULL,j_2 = NULL;
        t = SSLgetAnnotations(f_34);
        m_12 = t;
        t = SSL_string_to_int(h_34);
        w_12 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, w_12);
        j_2 = t;
        t = SSLsetAnnotations(j_2, m_12);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          h_34 = ATgetArgument(t, 0);
          i_34 = ATgetArgument(t, 1);
          {
            ATerm e_13 = NULL,m_13 = NULL,t_13 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(f_34);
            e_13 = t;
            t = SSL_string_to_int(h_34);
            m_13 = t;
            t = SSL_string_to_int(i_34);
            t_13 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, m_13, t_13);
            k_2 = t;
            t = SSLsetAnnotations(k_2, e_13);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              h_34 = ATgetArgument(t, 0);
              i_34 = ATgetArgument(t, 1);
              {
                ATerm f_14 = NULL,l_2 = NULL;
                t = SSLgetAnnotations(f_34);
                f_14 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, h_34, i_34);
                l_2 = t;
                t = SSLsetAnnotations(l_2, f_14);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  h_34 = ATgetArgument(t, 0);
                  {
                    ATerm u_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,f_15 = NULL,m_2 = NULL;
                    t = SSLgetAnnotations(f_34);
                    u_14 = t;
                    t = SSL_explode_string(h_34);
                    t = unquote_chars_2_0(t_3, u_3, t);
                    f_15 = t;
                    t = SSL_implode_string(f_15);
                    c_15 = t;
                    t = SSL_explode_string(c_15);
                    t = unescape_chars_1_0(v_3, t);
                    b_15 = t;
                    t = SSL_implode_string(b_15);
                    a_15 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, a_15);
                    m_2 = t;
                    t = SSLsetAnnotations(m_2, u_14);
                  }
                }
              else
                {
                  ATerm o_16 = NULL,d_17 = NULL,n_2 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      h_34 = ATgetArgument(t, 0);
                      i_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_34);
                  o_16 = t;
                  t = SSL_string_to_int(h_34);
                  d_17 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, d_17, i_34);
                  n_2 = t;
                  t = SSLsetAnnotations(n_2, o_16);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm m_78 (ATerm), ATerm t)
{
  static ATerm y_3 (ATerm t)
  {
    t = topdown_1_0(m_78, t);
    return(t);
  }
  t = m_78(t);
  t = SRTS_all(y_3, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL;
  t = topdown_1_0(j_4, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      u_34 = ATgetArgument(t, 0);
      v_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(u_34, v_34, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
    }
  return(t);
}
static ATerm u_7 (ATerm m_51, ATerm t)
{
  t = m_51;
  t = reverse_acc_2_0(_id, a_4, t);
  t = map_1_0(i_4, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  static ATerm y_34 (ATerm t)
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_79(t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = SRTS_one(y_34, t);
      }
    return(t);
  }
  t = y_34(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  t = term_l_22;
  z_34 = t;
  t = term_m_22;
  a_35 = t;
  t = term_n_22;
  t = f_8(z_34, a_35, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_35 = NULL,c_35 = NULL,g_35 = NULL;
      t = term_q_22;
      t = get_options_0_0(t);
      t = oncetd_1_0(k_4, t);
      t = term_e_17;
      c_35 = t;
      t = (ATerm) ATinsert(ATempty, term_r_22);
      g_35 = t;
      t = SSL_printnl(c_35, g_35);
      t = term_j_11;
      b_35 = t;
      t = SSL_exit(b_35);
      t = (ATerm) ATinsert(ATempty, term_r_22);
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      {
        ATerm i_35 = NULL,j_35 = NULL;
        t = term_e_17;
        i_35 = t;
        t = (ATerm) ATinsert(ATempty, term_s_22);
        j_35 = t;
        t = SSL_printnl(i_35, j_35);
        t = (ATerm) ATinsert(ATempty, term_s_22);
      }
    }
  return(t);
}
static ATerm c_36 (ATerm w_35, ATerm t)
{
  t = SSL_fclose(w_35);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  a_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_35 = ATgetArgument(t, 0);
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_35);
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            t = c_36(a_36, t);
          }
      }
    }
  else
    {
      t = c_36(a_36, t);
    }
  return(t);
}
static ATerm x_7 (ATerm f_29, ATerm t)
{
  t = SSL_read_term_from_stream(f_29);
  return(t);
}
static ATerm y_7 (ATerm x_41, ATerm y_41, ATerm t)
{
  ATerm d_36 = NULL;
  t = SSL_fopen(x_41, y_41);
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_stdin_stream();
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_36 = NULL;
  t = SSL_stdout_stream();
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_36 = NULL;
  t = SSL_stderr_stream();
  g_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_36);
  return(t);
}
static ATerm q_37 (ATerm m_36, ATerm t)
{
  ATerm n_36 = NULL;
  t = SSL_explode_term(m_36);
  if(match_cons(t, sym__2))
    {
      ATerm v_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_22 = ATgetArgument(t, 1);
        if(((ATgetType(w_22) == AT_LIST) && !(ATisEmpty(w_22))))
          {
            n_36 = ATgetFirst((ATermList) w_22);
            {
              ATerm x_22 = (ATerm) ATgetNext((ATermList) w_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_37 (ATerm q_36, ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,z_36 = NULL,n_3 = NULL;
  t = SSLgetAnnotations(s_36);
  v_36 = t;
  t = q_36;
  if(match_cons(t, sym_Path_1))
    {
      z_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_36, r_36);
  n_3 = t;
  t = SSLsetAnnotations(n_3, v_36);
  if(match_cons(t, sym__2))
    {
      t_36 = ATgetArgument(t, 0);
      u_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(t_36, u_36, t);
  return(t);
}
static ATerm t_37 (ATerm b_37, ATerm c_37, ATerm d_37, ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,j_37 = NULL,o_7 = NULL;
  t = SSLgetAnnotations(d_37);
  g_37 = t;
  t = SSL_is_string(b_37);
  j_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_37, c_37);
  o_7 = t;
  t = SSLsetAnnotations(o_7, g_37);
  if(match_cons(t, sym__2))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(e_37, f_37, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm l_37 = NULL,o_37 = NULL,p_37 = NULL;
  l_37 = t;
  if(match_cons(t, sym__2))
    {
      o_37 = ATgetArgument(t, 0);
      p_37 = ATgetArgument(t, 1);
      {
        ATerm y_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_37(l_37, t);
            LocalPopChoice(a_23);
          }
        else
          {
            t = y_22;
            {
              ATerm d_23 = t;
              int g_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_37(o_37, p_37, l_37, t);
                  LocalPopChoice(g_23);
                }
              else
                {
                  t = d_23;
                  t = t_37(o_37, p_37, l_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_37(l_37, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,z_37 = NULL,g_38 = NULL;
  g_38 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_38, term_k_23);
        t = z_7(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm w_17 = NULL,x_17 = NULL;
          t = term_l_23;
          x_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_23, g_38);
          t = e_8(x_17, g_38, t);
          w_17 = t;
          t = SSL_perror(w_17);
          _fail(t);
        }
      }
  }
  w_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(z_37, t);
  v_37 = t;
  t = w_37;
  t = fclose_0_0(t);
  t = v_37;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,i_18 = NULL,j_18 = NULL;
  t = if_verbose1_1_0(m_4, t);
  t = ReadFromFile_0_0(t);
  r_38 = t;
  t = SSL_explode_term(r_38);
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      {
        ATerm m_23 = ATgetArgument(t, 1);
        if(((ATgetType(m_23) == AT_LIST) && !(ATisEmpty(m_23))))
          {
            i_18 = ATgetFirst((ATermList) m_23);
            {
              ATerm n_23 = (ATerm) ATgetNext((ATermList) m_23);
              if(((ATgetType(n_23) != AT_LIST) || !(ATisEmpty(n_23))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_18;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = i_18;
  if(match_cons(t, sym_PP_Table_1))
    {
      q_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(q_38, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = debug_1_0(o_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_o_23;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  l_38 = t;
  t = term_t_14;
  m_38 = t;
  t = SSL_table_create(m_38);
  t = l_38;
  t = map_1_0(l_4, t);
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_23;
      t = get_config_0_0(t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = xtc_io_transform_1_0(u_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = trm2abox_0_0(t);
  {
    ATerm x_23 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_39 = NULL;
        e_39 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_24 = ATgetFirst((ATermList) t);
                ATerm k_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_39;
          }
        LocalPopChoice(d_24);
        {
          ATerm m_39 = NULL;
          m_39 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, m_39);
        }
      }
    else
      {
        t = x_23;
      }
  }
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm c_39 = NULL;
  c_39 = t;
  t = get_config_p_0_0(t);
  t = reverse_acc_2_0(_id, p_4, t);
  t = read_pp_tables_0_0(t);
  t = c_39;
  t = xtc_io_1_0(r_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  p_39 = t;
  t = term_e_10;
  t = whoami_0_0(t);
  q_39 = t;
  t = term_e_17;
  t_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_24), q_39), term_m_24);
  u_39 = t;
  t = SSL_printnl(t_39, u_39);
  t = term_j_11;
  s_39 = t;
  t = SSL_exit(s_39);
  t = p_39;
  return(t);
}
ATerm at_end_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  static ATerm e_41 (ATerm t)
  {
    ATerm z_40 = NULL,a_41 = NULL,d_41 = NULL;
    d_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_40 = ATgetFirst((ATermList) t);
        a_41 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_18 = NULL,b_19 = NULL,l_18 = NULL;
          t = SSLgetAnnotations(d_41);
          q_18 = t;
          t = a_41;
          t = e_41(t);
          b_19 = t;
          t = (ATerm) ATinsert(CheckATermList(b_19), z_40);
          l_18 = t;
          t = SSLsetAnnotations(l_18, q_18);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_41;
        t = r_86(t);
      }
    return(t);
  }
  t = e_41(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_39 = NULL,c_40 = NULL,e_40 = NULL;
  z_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_39;
    }
  else
    {
      static ATerm v_4 (ATerm t)
      {
        t = not_null(e_40);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_40 = ATgetFirst((ATermList) t);
          if(((e_40 != NULL) && (e_40 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_40;
      t = at_end_1_0(v_4, t);
    }
  return(t);
}
static ATerm o_42 (ATerm k_41, ATerm t)
{
  ATerm n_41 = NULL;
  t = SSL_explode_term(k_41);
  if(match_cons(t, sym__2))
    {
      ATerm p_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_41;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_41 = NULL,w_41 = NULL,b_42 = NULL;
  b_42 = t;
  if(match_cons(t, sym__2))
    {
      r_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
      {
        ATerm q_24 = t;
        int r_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_4 (ATerm t)
            {
              t = w_41;
              return(t);
            }
            t = r_41;
            t = at_end_1_0(w_4, t);
            LocalPopChoice(r_24);
          }
        else
          {
            t = q_24;
            t = o_42(b_42, t);
          }
      }
    }
  else
    {
      t = o_42(b_42, t);
    }
  return(t);
}
static ATerm a_8 (ATerm y_18, ATerm x_18, ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  t = y_18;
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        t = (ATerm) ATempty;
      }
  }
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_18, s_42);
  t = conc_0_0(t);
  r_42 = t;
  t = term_z_24;
  t_42 = t;
  t = SSL_table_put(t_42, y_18, r_42);
  t = (ATerm) ATmakeAppl(sym__3, term_z_24, y_18, r_42);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  u_42 = t;
  t = term_r_23;
  v_42 = t;
  t = (ATerm) ATinsert(ATempty, u_42);
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_23, (ATerm) ATinsert(ATempty, u_42));
  t = a_8(v_42, w_42, t);
  t = u_42;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, z_4, a_5, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm a_43 = NULL;
  a_43 = t;
  if(match_string(t, "-k"))
    {
      t = a_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_43;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm b_43 = NULL,e_43 = NULL,f_43 = NULL;
  b_43 = t;
  t = SSL_string_to_int(b_43);
  e_43 = t;
  t = term_b_25;
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, e_43);
  t = i_8(f_43, e_43, t);
  t = b_43;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, h_5, i_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm i_43 = NULL;
  i_43 = t;
  if(match_string(t, "-S"))
    {
      t = i_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_43;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL;
  t = term_e_25;
  j_43 = t;
  t = term_k_11;
  k_43 = t;
  t = term_f_25;
  t = i_8(j_43, k_43, t);
  t = term_h_25;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  l_43 = t;
  t = SSL_string_to_int(l_43);
  m_43 = t;
  t = term_e_25;
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, m_43);
  t = i_8(n_43, m_43, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_43);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_j_25;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL;
  t = term_k_25;
  o_43 = t;
  t = term_e_10;
  p_43 = t;
  t = term_l_25;
  t = i_8(o_43, p_43, t);
  t = term_m_25;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_5, l_5, n_5, t);
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      {
        ATerm r_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_5, q_5, r_5, t);
            LocalPopChoice(s_25);
          }
        else
          {
            t = r_25;
            t = Option_3_0(s_5, t_5, z_5, t);
          }
      }
    }
  return(t);
}
static ATerm i_8 (ATerm s_18, ATerm t_18, ATerm t)
{
  ATerm q_43 = NULL;
  t = term_z_24;
  q_43 = t;
  t = SSL_table_put(q_43, s_18, t_18);
  t = (ATerm) ATmakeAppl(sym__3, term_z_24, s_18, t_18);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_43 = NULL,d_44 = NULL,e_44 = NULL;
      t = term_e_10;
      t = e_0(t);
      v_43 = t;
      t = term_t_25;
      d_44 = t;
      t = term_u_25;
      e_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_25, term_u_25, v_43);
      t = g_8(d_44, e_44, v_43, t);
      _fail(t);
    }
  else
    {
      ATerm h_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_43 = ATgetFirst((ATermList) t);
          u_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_43;
      t = c_0(t);
      t = term_e_10;
      t = d_0(t);
      h_44 = t;
      t = (ATerm) ATinsert(CheckATermList(u_43), h_44);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm j_44 = NULL;
  j_44 = t;
  if(match_string(t, "-o"))
    {
      t = j_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_44;
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm k_44 = NULL,m_44 = NULL;
  k_44 = t;
  t = term_e_20;
  m_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_20, k_44);
  t = i_8(m_44, k_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_44);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_v_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_6, b_6, c_6, t);
  return(t);
}
static ATerm g_8 (ATerm n_21, ATerm o_21, ATerm m_21, ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL;
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_25 = ATgetArgument(t, 0);
            ATerm z_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
        t = f_8(n_21, o_21, t);
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = (ATerm) ATempty;
      }
  }
  p_44 = t;
  t = (ATerm) ATinsert(CheckATermList(p_44), m_21);
  q_44 = t;
  t = SSL_table_put(n_21, o_21, q_44);
  t = o_44;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
      t = term_e_10;
      t = n_0(t);
      c_45 = t;
      t = term_t_25;
      d_45 = t;
      t = term_u_25;
      e_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_25, term_u_25, c_45);
      t = g_8(d_45, e_45, c_45, t);
      _fail(t);
    }
  else
    {
      ATerm k_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_44 = ATgetFirst((ATermList) t);
          z_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_45 = ATgetFirst((ATermList) t);
          b_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_44;
      t = k_0(t);
      t = a_45;
      t = l_0(t);
      k_45 = t;
      t = (ATerm) ATinsert(CheckATermList(b_45), k_45);
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm m_45 = NULL;
  m_45 = t;
  if(match_string(t, "-i"))
    {
      t = m_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_45;
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL;
  o_45 = t;
  t = term_p_20;
  p_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, o_45);
  t = i_8(p_45, o_45, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_45);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_6, g_6, k_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_45 = NULL,s_45 = NULL,t_45 = NULL,v_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_10;
  t = whoami_0_0(t);
  q_45 = t;
  t = term_e_17;
  t_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_26), q_45);
  v_45 = t;
  t = SSL_printnl(t_45, v_45);
  t = term_j_11;
  s_45 = t;
  t = SSL_exit(s_45);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm b_8 (ATerm j_30, ATerm k_30, ATerm t)
{
  ATerm e_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_30, k_30);
      LocalPopChoice(h_26);
    }
  else
    {
      t = e_26;
      t = SSL_addr(j_30, k_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_45;
      t = w_92(t);
    }
  else
    {
      ATerm j_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_45 = ATgetFirst((ATermList) t);
          a_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_46;
      t = foldr_2_0(w_92, x_92, t);
      j_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_45, j_46);
      t = x_92(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_k_11;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm o_19 = NULL,q_19 = NULL;
  if(match_cons(t, sym__2))
    {
      o_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(o_19, q_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_46 = NULL,h_19 = NULL,i_19 = NULL;
  t = times_0_0(t);
  i_19 = t;
  t = SSL_explode_term(i_19);
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_19;
  t = foldr_2_0(l_6, m_6, t);
  n_46 = t;
  t = SSL_TicksToSeconds(n_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_47 = NULL,d_47 = NULL,e_47 = NULL;
  b_47 = t;
  if(match_cons(t, sym__2))
    {
      d_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_47;
        if((d_47 != t))
          {
            _fail(t);
          }
        t = b_47;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATmakeAppl(sym__2, d_47, e_47);
        {
          ATerm m_26 = t;
          int n_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_47, e_47);
              LocalPopChoice(n_26);
            }
          else
            {
              t = m_26;
              t = SSL_gtr(d_47, e_47);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_47, e_47);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_75 (ATerm), ATerm t)
{
  ATerm i_47 = NULL;
  i_47 = t;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_47 = NULL;
        t = term_e_25;
        t = get_config_0_0(t);
        k_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_47, term_j_11);
        t = geq_0_0(t);
        t = i_47;
        t = r_75(t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = i_47;
      }
  }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,t_47 = NULL,u_47 = NULL;
  t = run_time_0_0(t);
  m_47 = t;
  t = term_e_10;
  t = whoami_0_0(t);
  n_47 = t;
  t = term_e_17;
  t_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_26), m_47), term_q_26), n_47);
  u_47 = t;
  t = SSL_printnl(t_47, u_47);
  t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_26), m_47), term_q_26), n_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_11;
  v_47 = t;
  t = SSL_exit(v_47);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm m_48 = NULL,p_48 = NULL;
  p_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_48 = ATgetArgument(t, 0);
          {
            ATerm y_20 = NULL,n_19 = NULL;
            t = SSLgetAnnotations(p_48);
            y_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_48);
            n_19 = t;
            t = SSLsetAnnotations(n_19, y_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_26;
      t = get_config_0_0(t);
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      t = fetch_1_0(x_6, t);
    }
  t = j_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_48 = NULL,z_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_48 = ATgetFirst((ATermList) t);
      z_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_49 = NULL,e_49 = NULL;
        static ATerm a_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_49)), not_null(e_49));
          return(t);
        }
        t = z_48;
        t = i_0(t);
        if(((d_49 != NULL) && (d_49 != t)))
          _fail(t);
        else
          d_49 = t;
        t = v_48;
        t = g_0(t);
        if(((e_49 != NULL) && (e_49 != t)))
          _fail(t);
        else
          e_49 = t;
        t = z_48;
        t = reverse_acc_2_0(g_0, a_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_10;
      t = i_0(t);
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,m_49 = NULL,u_19 = NULL;
  m_49 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_49);
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_49);
  u_19 = t;
  t = SSLsetAnnotations(u_19, i_49);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm o_49 = NULL;
  o_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_49), term_v_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL;
  ATerm w_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_26;
      t = get_config_0_0(t);
      LocalPopChoice(y_26);
    }
  else
    {
      t = w_26;
      t = fetch_1_0(b_7, t);
    }
  t = term_z_26;
  t = echo_0_0(t);
  t = term_t_25;
  g_49 = t;
  t = term_u_25;
  h_49 = t;
  t = term_a_27;
  t = f_8(g_49, h_49, t);
  t = reverse_acc_2_0(_id, d_7, t);
  t = map_1_0(e_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  static ATerm l_50 (ATerm t)
  {
    ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
    i_50 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_50 = ATgetFirst((ATermList) t);
        k_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_27 = t;
      int d_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_21 = NULL,i_22 = NULL,x_19 = NULL;
          t = SSLgetAnnotations(i_50);
          x_21 = t;
          t = j_50;
          t = k_86(t);
          i_22 = t;
          t = (ATerm) ATinsert(CheckATermList(k_50), i_22);
          x_19 = t;
          t = SSLsetAnnotations(x_19, x_21);
          LocalPopChoice(d_27);
        }
      else
        {
          t = c_27;
          {
            ATerm z_22 = NULL,h_23 = NULL,y_19 = NULL;
            t = SSLgetAnnotations(i_50);
            z_22 = t;
            t = k_50;
            t = l_50(t);
            h_23 = t;
            t = (ATerm) ATinsert(CheckATermList(h_23), j_50);
            y_19 = t;
            t = SSLsetAnnotations(y_19, z_22);
          }
        }
    }
    return(t);
  }
  t = l_50(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_27 = ATgetFirst((ATermList) t);
                ATerm h_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_50;
          }
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = (ATerm) ATinsert(ATempty, p_50);
      }
  }
  q_50 = t;
  t = term_f_20;
  r_50 = t;
  t = SSL_printnl(r_50, q_50);
  t = p_50;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_8 (ATerm o_28, ATerm p_28, ATerm t)
{
  t = SSL_strcat(o_28, p_28);
  return(t);
}
ATerm debug_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  v_50 = t;
  t = v_84(t);
  w_50 = t;
  t = term_e_17;
  x_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_50), w_50);
  y_50 = t;
  t = SSL_printnl(x_50, y_50);
  t = v_50;
  return(t);
}
ATerm map_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  static ATerm v_51 (ATerm t)
  {
    ATerm k_51 = NULL,p_51 = NULL,q_51 = NULL;
    k_51 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_51;
      }
    else
      {
        ATerm w_23 = NULL,e_24 = NULL,f_24 = NULL,d_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_51 = ATgetFirst((ATermList) t);
            q_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_51);
        w_23 = t;
        t = p_51;
        t = a_86(t);
        e_24 = t;
        t = q_51;
        t = v_51(t);
        f_24 = t;
        t = (ATerm) ATinsert(CheckATermList(f_24), e_24);
        d_20 = t;
        t = SSLsetAnnotations(d_20, w_23);
      }
    return(t);
  }
  t = v_51(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_52 = NULL;
      p_52 = t;
      t = SSL_is_string(p_52);
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_7, t);
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            {
              ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL;
              v_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_52 = ATgetArgument(t, 0);
                  t = w_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_52 = ATgetArgument(t, 0);
                      t = w_52;
                      {
                        ATerm v_27 = t;
                        int w_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(w_27);
                          }
                        else
                          {
                            t = v_27;
                            t = debug_1_0(t_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_53 = NULL,f_53 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_52 = ATgetArgument(t, 0);
                          x_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_52;
                      t = eval_config_0_0(t);
                      e_53 = t;
                      t = x_52;
                      t = eval_config_0_0(t);
                      f_53 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_53, f_53);
                      t = e_8(e_53, f_53, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_8 (ATerm e_23, ATerm f_23, ATerm t)
{
  t = SSL_table_get(e_23, f_23);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL;
  n_53 = t;
  t = term_z_24;
  o_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_24, n_53);
  t = f_8(o_53, n_53, t);
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_53 = NULL,q_53 = NULL;
        t = eval_config_0_0(t);
        p_53 = t;
        t = term_z_24;
        q_53 = t;
        t = SSL_table_put(q_53, n_53, p_53);
        t = p_53;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL;
  t = term_z_27;
  t_53 = t;
  t = term_e_10;
  u_53 = t;
  t = term_a_28;
  t = i_8(t_53, u_53, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_b_28;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL;
  t = term_z_27;
  x_53 = t;
  t = term_e_10;
  y_53 = t;
  t = term_a_28;
  t = i_8(x_53, y_53, t);
  t = term_c_28;
  v_53 = t;
  t = term_e_10;
  w_53 = t;
  t = term_d_28;
  t = i_8(v_53, w_53, t);
  t = term_e_28;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_7, w_7, d_8, t);
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      t = Option_3_0(m_8, w_8, a_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_70 (ATerm), ATerm r_70 (ATerm), ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,g_20 = NULL;
  e_54 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_54 = ATgetFirst((ATermList) t);
      b_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_54);
  z_53 = t;
  t = a_54;
  t = q_70(t);
  c_54 = t;
  t = b_54;
  t = r_70(t);
  d_54 = t;
  t = (ATerm) ATinsert(CheckATermList(d_54), c_54);
  g_20 = t;
  t = SSLsetAnnotations(g_20, z_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL,o_54 = NULL,p_54 = NULL,a_21 = NULL;
  j_54 = t;
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_28;
        t = h_98(t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
      }
  }
  t = j_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_54 = ATgetFirst((ATermList) t);
      m_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_54);
  k_54 = t;
  t = term_d_26;
  p_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, l_54);
  t = i_8(p_54, l_54, t);
  t = m_54;
  {
    static ATerm z_54 (ATerm t)
    {
      ATerm m_28 = t;
      int n_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_28 = t;
          int r_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_54 = NULL;
              s_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_54;
              LocalPopChoice(r_28);
            }
          else
            {
              t = q_28;
              t = h_98(t);
              t = Cons_2_0(_id, z_54, t);
            }
          LocalPopChoice(n_28);
        }
      else
        {
          t = m_28;
          {
            ATerm v_54 = NULL,w_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_54 = ATgetFirst((ATermList) t);
                w_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_54), (ATerm) ATmakeAppl(sym_Undefined_1, v_54));
          }
        }
      return(t);
    }
    t = z_54(t);
  }
  o_54 = t;
  t = (ATerm) ATinsert(CheckATermList(o_54), (ATerm) ATmakeAppl(sym_Program_1, l_54));
  a_21 = t;
  t = SSLsetAnnotations(a_21, k_54);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm l_55 = NULL;
  l_55 = t;
  if(match_string(t, "--help"))
    {
      t = l_55;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_55;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_55;
        }
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL;
  t = term_u_26;
  m_55 = t;
  t = term_e_10;
  n_55 = t;
  t = term_s_28;
  t = i_8(m_55, n_55, t);
  t = term_t_28;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_u_28;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_98 (ATerm), ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL;
  g_55 = t;
  t = term_t_25;
  i_55 = t;
  t = term_u_25;
  j_55 = t;
  t = (ATerm) ATempty;
  k_55 = t;
  t = SSL_table_put(i_55, j_55, k_55);
  t = g_55;
  {
    static ATerm b_9 (ATerm t)
    {
      ATerm w_28 = t;
      int x_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_98(t);
          LocalPopChoice(x_28);
        }
      else
        {
          t = w_28;
          {
            ATerm b_29 = t;
            int d_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_9, d_9, f_9, t);
                LocalPopChoice(d_29);
              }
            else
              {
                t = b_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_9, t);
  }
  {
    ATerm e_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_55 = NULL;
        u_55 = t;
        {
          ATerm h_29 = t;
          int i_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_25 = NULL;
              t = u_55;
              {
                ATerm k_29 = t;
                int l_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_u_26;
                    t = get_config_0_0(t);
                    LocalPopChoice(l_29);
                  }
                else
                  {
                    t = k_29;
                    t = fetch_1_0(i_9, t);
                  }
              }
              t = u_55;
              t = default_system_usage_0_0(t);
              t = term_k_11;
              q_25 = t;
              t = SSL_exit(q_25);
              LocalPopChoice(i_29);
            }
          else
            {
              t = h_29;
              {
                ATerm a_26 = NULL;
                t = term_z_27;
                t = get_config_0_0(t);
                t = u_55;
                t = default_system_about_0_0(t);
                t = term_k_11;
                a_26 = t;
                t = SSL_exit(a_26);
              }
            }
        }
        LocalPopChoice(g_29);
      }
    else
      {
        t = e_29;
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
              static ATerm j_9 (ATerm t)
              {
                ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL,e_21 = NULL;
                a_56 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_55 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_56);
                y_55 = t;
                t = z_55;
                if(((e_55 != NULL) && (e_55 != t)))
                  _fail(t);
                else
                  e_55 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_55);
                e_21 = t;
                t = SSLsetAnnotations(e_21, y_55);
                return(t);
              }
              t = fetch_1_0(j_9, t);
              t = term_e_17;
              w_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_55)), term_o_29);
              x_55 = t;
              t = SSL_printnl(w_55, x_55);
              t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_55)), term_o_29));
              t = default_system_usage_0_0(t);
              t = term_j_11;
              v_55 = t;
              t = SSL_exit(v_55);
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
            }
        }
      }
  }
  f_55 = t;
  t = term_t_25;
  h_55 = t;
  t = SSL_table_destroy(h_55);
  t = f_55;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
  t = parse_options_1_0(l_96, t);
  f_56 = t;
  t = term_l_22;
  i_56 = t;
  t = SSL_table_create(i_56);
  t = term_l_22;
  g_56 = t;
  t = term_m_22;
  h_56 = t;
  t = SSL_table_put(g_56, h_56, f_56);
  t = f_56;
  t = n_96(t);
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_96, t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        {
          ATerm r_29 = t;
          int s_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_96(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_29);
            }
          else
            {
              t = r_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
            {
              ATerm x_29 = t;
              int y_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(m_9, n_9, q_9, t);
                  LocalPopChoice(y_29);
                }
              else
                {
                  t = x_29;
                  {
                    ATerm z_29 = t;
                    int a_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(a_30);
                      }
                    else
                      {
                        t = z_29;
                        {
                          ATerm b_30 = t;
                          int c_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(c_30);
                            }
                          else
                            {
                              t = b_30;
                              t = pp_options_0_0(t);
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
static ATerm m_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL;
  t = term_d_30;
  k_56 = t;
  t = term_e_10;
  l_56 = t;
  t = term_e_30;
  t = i_8(k_56, l_56, t);
  t = term_f_30;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_9, default_usage_0_0, _id, ast2abox_0_0, t);
  return(t);
}
