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
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_j_29;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_h_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_g_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_k_24;
ATerm term_i_24;
ATerm term_c_24;
ATerm term_v_23;
ATerm term_k_23;
ATerm term_d_23;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_z_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_g_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_r_19;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_r_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_m_17, term_l_17);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__2, term_h_22, term_i_22);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_b_25, term_o_11);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_11);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_g_25, term_f_10);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_q_25);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_u_27, term_f_10);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_x_27, term_f_10);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_r_26, term_f_10);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_y_29, term_f_10);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm x_76 (ATerm), ATerm t);
static ATerm q_6 (ATerm z_17, ATerm a_18, ATerm y_17, ATerm t);
static ATerm f_6 (ATerm p_4, ATerm q_4, ATerm s_4, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm k_99 (ATerm), ATerm t);
ATerm foldr_3_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
ATerm collect_p__1_0 (ATerm o_107 (ATerm), ATerm t);
static ATerm r_6 (ATerm f_31, ATerm g_31, ATerm t);
static ATerm s_6 (ATerm s_73 (ATerm), ATerm m_0, ATerm c_16, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm t_6 (ATerm q_17, ATerm s_17, ATerm p_17, ATerm t);
ATerm symbol2abox6_0_0 (ATerm t);
ATerm symbol2abox5_0_0 (ATerm t);
static ATerm v_6 (ATerm w_16, ATerm x_16, ATerm z_16, ATerm y_16, ATerm t);
static ATerm w_6 (ATerm r_16, ATerm s_16, ATerm v_16, ATerm u_16, ATerm t_16, ATerm t);
static ATerm y_6 (ATerm n_30, ATerm o_30, ATerm t);
static ATerm z_6 (ATerm b_35, ATerm z_34, ATerm a_35, ATerm t);
ATerm repeat_2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_7 (ATerm i_16, ATerm h_16, ATerm m_16, ATerm t);
ATerm genzip_4_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm nzip_1_0 (ATerm z_86 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm trm2abox_appl_0_0 (ATerm t);
ATerm trm2abox_list_0_0 (ATerm t);
ATerm trm2abox_0_0 (ATerm t);
static ATerm g_7 (ATerm z_28, ATerm a_29, ATerm t);
static ATerm h_7 (ATerm h_83 (ATerm), ATerm w_303, ATerm h_29, ATerm t);
static ATerm i_7 (ATerm j_93 (ATerm), ATerm h_42, ATerm f_42, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
static ATerm j_7 (ATerm k_41, ATerm l_41, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm s_75 (ATerm), ATerm t);
static ATerm k_7 (ATerm k_19, ATerm l_19, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm l_7 (ATerm s_21, ATerm t_21, ATerm t);
ATerm end_scope_1_0 (ATerm g_93 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm f_93 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm d_76 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm e_76 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm m_7 (ATerm n_50, ATerm o_50, ATerm t);
ATerm unescape_chars_1_0 (ATerm o_81 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm l_85 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm unquote_chars_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm w_76 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm u_7 (ATerm m_50, ATerm t);
ATerm oncetd_1_0 (ATerm a_78 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm u_35 (ATerm o_35, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_7 (ATerm f_29, ATerm t);
static ATerm y_7 (ATerm t_41, ATerm u_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_37 (ATerm e_36, ATerm t);
static ATerm j_37 (ATerm k_36, ATerm l_36, ATerm m_36, ATerm t);
static ATerm k_37 (ATerm u_36, ATerm v_36, ATerm w_36, ATerm t);
static ATerm z_7 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm ast2abox_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm a_85 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm a_41 (ATerm o_40, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_8 (ATerm y_18, ATerm x_18, ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_8 (ATerm s_18, ATerm t_18, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_8 (ATerm n_21, ATerm o_21, ATerm m_21, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_8 (ATerm h_30, ATerm i_30, ATerm t);
ATerm foldr_2_0 (ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_74 (ATerm), ATerm t);
static ATerm x_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm need_help_1_0 (ATerm k_94 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_8 (ATerm o_28, ATerm p_28, ATerm t);
ATerm debug_1_0 (ATerm f_83 (ATerm), ATerm t);
ATerm map_1_0 (ATerm k_84 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm f_8 (ATerm e_23, ATerm f_23, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_96 (ATerm), ATerm t);
static ATerm f_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm parse_options_1_0 (ATerm h_96 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm t);
static ATerm n_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,s_2 = NULL;
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
          s_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_2 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 = NULL,j_0 = NULL,s_0 = NULL;
            t = SSLgetAnnotations(o_2);
            e_0 = t;
            t = p_2;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = s_2;
            t = flat_list_0_0(t);
            j_0 = t;
            t = (ATerm) ATinsert(CheckATermList(j_0), p_2);
            s_0 = t;
            t = SSLsetAnnotations(s_0, e_0);
            LocalPopChoice(w_9);
          }
        else
          {
            t = u_2;
            {
              ATerm z_9 = t;
              int a_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_1 = NULL,p_1 = NULL,r_1 = NULL,a_2 = NULL,w_0 = NULL;
                  t = SSLgetAnnotations(o_2);
                  r_1 = t;
                  t = p_2;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = p_2;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm b_10 = ATgetFirst((ATermList) t);
                          ATerm c_10 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = p_2;
                    }
                  t = (ATerm) ATinsert(CheckATermList(s_2), p_2);
                  w_0 = t;
                  t = SSLsetAnnotations(w_0, r_1);
                  a_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_1 = ATgetFirst((ATermList) t);
                      {
                        ATerm d_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = a_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm e_10 = ATgetFirst((ATermList) t);
                      n_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, p_1, n_1);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(a_10);
                }
              else
                {
                  t = z_9;
                  {
                    ATerm w_2 = NULL,d_3 = NULL,x_0 = NULL;
                    t = SSLgetAnnotations(o_2);
                    w_2 = t;
                    t = s_2;
                    t = flat_list_0_0(t);
                    d_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(d_3), p_2);
                    x_0 = t;
                    t = SSLsetAnnotations(x_0, w_2);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm c_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      k_3 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
      {
        ATerm v_3 = NULL,w_3 = NULL;
        t = term_f_10;
        t = t_0(t);
        w_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_3, w_3);
        t = index_0_0(t);
        v_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_3, v_3);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm y_3 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          k_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_f_10;
      t = t_0(t);
      y_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_3, y_3);
      t = index_0_0(t);
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm x_76 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(x_76, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = x_76(t);
  return(t);
}
static ATerm q_6 (ATerm z_17, ATerm a_18, ATerm y_17, ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL;
  static ATerm c_0 (ATerm t)
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm f_0 (ATerm t)
            {
              t = not_null(a_4);
              return(t);
            }
            t = Instantiate_1_0(f_0, t);
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
      }
    return(t);
  }
  t = SSL_explode_term(y_17);
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4;
  {
    static ATerm b_0 (ATerm t)
    {
      ATerm d_4 = NULL,f_4 = NULL;
      if(match_cons(t, sym__2))
        {
          d_4 = ATgetArgument(t, 0);
          f_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, d_4, z_17, f_4);
      t = c_7(d_4, z_17, f_4, t);
      return(t);
    }
    t = nzip_1_0(b_0, t);
  }
  if(((a_4 != NULL) && (a_4 != t)))
    _fail(t);
  else
    a_4 = t;
  t = a_18;
  t = bottomup_1_0(c_0, t);
  return(t);
}
static ATerm f_6 (ATerm p_4, ATerm q_4, ATerm s_4, ATerm t)
{
  ATerm x_4 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(s_4);
  x_4 = t;
  t = q_4;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_4), p_4);
  c_1 = t;
  t = SSLsetAnnotations(c_1, x_4);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm k_99 (ATerm), ATerm t)
{
  static ATerm e_6 (ATerm t)
  {
    static ATerm i_6 (ATerm b_5, ATerm c_5, ATerm e_5, ATerm f_5, ATerm t)
    {
      ATerm j_5 = NULL,k_5 = NULL,n_5 = NULL,e_1 = NULL;
      t = f_5;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm l_10 = ATgetFirst((ATermList) t);
          ATerm o_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_5);
      j_5 = t;
      t = term_f_10;
      t = k_99(t);
      {
        static ATerm h_0 (ATerm t)
        {
          ATerm s_10 = t;
          int v_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_10 = t;
              int x_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  static ATerm q_0 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, c_5), b_5);
                    return(t);
                  }
                  t = Instantiate_1_0(q_0, t);
                  LocalPopChoice(x_10);
                }
              else
                {
                  t = w_10;
                  t = flat_list_0_0(t);
                }
              LocalPopChoice(v_10);
            }
          else
            {
              t = s_10;
            }
          return(t);
        }
        t = bottomup_1_0(h_0, t);
      }
      n_5 = t;
      t = e_5;
      t = e_6(t);
      k_5 = t;
      t = (ATerm) ATinsert(CheckATermList(k_5), n_5);
      e_1 = t;
      t = SSLsetAnnotations(e_1, j_5);
      return(t);
    }
    ATerm s_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
    s_5 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_5;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_5 = ATgetFirst((ATermList) t);
            v_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_5;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_5 = ATgetFirst((ATermList) t);
            x_5 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm y_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_6(u_5, v_5, s_5, t);
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = y_10;
                  t = i_6(u_5, w_5, x_5, s_5, t);
                }
            }
          }
        else
          {
            t = f_6(u_5, v_5, s_5, t);
          }
      }
    return(t);
  }
  t = e_6(t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_91 (ATerm), ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL,p_6 = NULL;
  m_6 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_6;
      t = e_91(t);
    }
  else
    {
      ATerm e_7 = NULL,f_7 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_6 = ATgetFirst((ATermList) t);
          p_6 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_6;
      t = g_91(t);
      e_7 = t;
      t = p_6;
      t = foldr_3_0(e_91, f_91, g_91, t);
      f_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_7, f_7);
      t = f_91(t);
    }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm o_107 (ATerm), ATerm t)
{
  static ATerm q_7 (ATerm t)
  {
    ATerm a_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_7 = NULL;
        t = o_107(t);
        p_7 = t;
        t = (ATerm) ATinsert(ATempty, p_7);
        LocalPopChoice(d_11);
      }
    else
      {
        t = a_11;
        {
          ATerm j_3 = NULL,l_3 = NULL;
          l_3 = t;
          t = SSL_explode_term(l_3);
          if(match_cons(t, sym__2))
            {
              ATerm e_11 = ATgetArgument(t, 0);
              j_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_3;
          t = foldr_3_0(u_0, conc_0_0, q_7, t);
        }
      }
    return(t);
  }
  t = q_7(t);
  return(t);
}
static ATerm r_6 (ATerm f_31, ATerm g_31, ATerm t)
{
  t = SSL_mod(f_31, g_31);
  return(t);
}
static ATerm s_6 (ATerm s_73 (ATerm), ATerm m_0, ATerm c_16, ATerm t)
{
  ATerm r_7 = NULL;
  ATerm f_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_7 = NULL,d_8 = NULL,h_8 = NULL;
      t = term_j_11;
      h_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_0, term_j_11);
      t = r_6(m_0, h_8, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
        _fail(t);
      t = term_f_10;
      t = s_73(t);
      v_7 = t;
      t = term_j_11;
      d_8 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_11, v_7, c_16);
      t = c_7(d_8, v_7, c_16, t);
      r_7 = t;
      LocalPopChoice(h_11);
    }
  else
    {
      t = f_11;
      {
        ATerm j_8 = NULL,k_8 = NULL;
        t = term_f_10;
        t = s_73(t);
        j_8 = t;
        t = term_k_11;
        k_8 = t;
        t = (ATerm) ATmakeAppl(sym__3, term_k_11, j_8, c_16);
        t = c_7(k_8, j_8, c_16, t);
        r_7 = t;
      }
    }
  t = r_7;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm s_8 = NULL,w_8 = NULL,x_8 = NULL,h_1 = NULL;
  x_8 = t;
  if(match_cons(t, sym_S_1))
    {
      w_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_8);
  s_8 = t;
  t = (ATerm) ATmakeAppl(sym_S_1, w_8);
  h_1 = t;
  t = SSLsetAnnotations(h_1, s_8);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_o_11;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm y_8 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(y_8, e_9, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_k_11;
  return(t);
}
static ATerm t_6 (ATerm q_17, ATerm s_17, ATerm p_17, ATerm t)
{
  ATerm o_8 = NULL;
  static ATerm f_1 (ATerm t)
  {
    t = s_17;
    return(t);
  }
  t = p_17;
  {
    static ATerm v_0 (ATerm t)
    {
      ATerm p_8 = NULL,r_8 = NULL;
      static ATerm y_0 (ATerm t)
      {
        t = q_17;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          p_8 = ATgetArgument(t, 0);
          r_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_6(y_0, p_8, r_8, t);
      return(t);
    }
    t = nzip_1_0(v_0, t);
  }
  o_8 = t;
  {
    ATerm p_11 = t;
    int r_11 = stack_ptr;
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
                  ATerm s_11 = t;
                  int t_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATempty, g_9);
                      LocalPopChoice(t_11);
                    }
                  else
                    {
                      t = s_11;
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
        t = collect_p__1_0(z_0, t);
        t = foldr_3_0(a_1, b_1, d_1, t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
          _fail(t);
        t = o_8;
        t = p_9(t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = p_11;
        t = o_8;
      }
  }
  t = instantiate_sep_list_1_0(f_1, t);
  return(t);
}
ATerm symbol2abox6_0_0 (ATerm t)
{
  ATerm t_9 = NULL,v_9 = NULL,x_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__4))
    {
      t_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
      x_9 = ATgetArgument(t, 2);
      y_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_9;
  if(match_string(t, "iter-star-sep"))
    {
      t = (ATerm) ATmakeAppl(sym__3, v_9, x_9, y_9);
      t = t_6(v_9, x_9, y_9, t);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-sep", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, v_9, x_9, y_9);
      t = t_6(v_9, x_9, y_9, t);
    }
  return(t);
}
ATerm symbol2abox5_0_0 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,q_10 = NULL,r_10 = NULL,t_10 = NULL,u_10 = NULL;
  static ATerm i_1 (ATerm t)
  {
    ATerm v_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_11 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(m_10));
              return(t);
            }
            t = Instantiate_1_0(l_1, t);
            LocalPopChoice(b_12);
          }
        else
          {
            t = z_11;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(y_11);
      }
    else
      {
        t = v_11;
      }
    return(t);
  }
  n_10 = t;
  if(match_cons(t, sym__4))
    {
      q_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
      t_10 = ATgetArgument(t, 2);
      u_10 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = q_10;
  if(match_string(t, "iter"))
    {
      t = n_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("iter-star", 0, ATtrue)))
        _fail(t);
      t = n_10;
    }
  t = u_10;
  {
    static ATerm g_1 (ATerm t)
    {
      ATerm b_11 = NULL,c_11 = NULL;
      b_11 = t;
      t = term_k_11;
      c_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_11, r_10, b_11);
      t = c_7(c_11, r_10, b_11, t);
      return(t);
    }
    t = map_1_0(g_1, t);
  }
  if(((m_10 != NULL) && (m_10 != t)))
    _fail(t);
  else
    m_10 = t;
  t = t_10;
  t = bottomup_1_0(i_1, t);
  return(t);
}
static ATerm v_6 (ATerm w_16, ATerm x_16, ATerm z_16, ATerm y_16, ATerm t)
{
  ATerm g_11 = NULL,i_11 = NULL;
  static ATerm m_1 (ATerm t)
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(g_11));
              return(t);
            }
            t = Instantiate_1_0(o_1, t);
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
      }
    return(t);
  }
  t = term_k_11;
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_11, x_16, y_16);
  t = c_7(i_11, x_16, y_16, t);
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  t = z_16;
  t = bottomup_1_0(m_1, t);
  return(t);
}
static ATerm w_6 (ATerm r_16, ATerm s_16, ATerm v_16, ATerm u_16, ATerm t_16, ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL;
  static ATerm q_1 (ATerm t)
  {
    ATerm k_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, not_null(n_11));
              return(t);
            }
            t = Instantiate_1_0(t_1, t);
            LocalPopChoice(v_12);
          }
        else
          {
            t = q_12;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(m_12);
      }
    else
      {
        t = k_12;
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
  t = bottomup_1_0(q_1, t);
  return(t);
}
static ATerm y_6 (ATerm n_30, ATerm o_30, ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(n_30, o_30);
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      t = SSL_subtr(n_30, o_30);
    }
  return(t);
}
static ATerm z_6 (ATerm b_35, ATerm z_34, ATerm a_35, ATerm t)
{
  ATerm q_11 = NULL,w_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_35, term_j_11);
  t = geq_0_0(t);
  t = term_k_11;
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_35, term_k_11);
  t = y_6(b_35, w_11, t);
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_11, a_35);
  return(t);
}
ATerm repeat_2_0 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm t)
{
  static ATerm x_11 (ATerm t)
  {
    ATerm z_12 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_81(t);
        t = x_11(t);
        LocalPopChoice(b_13);
      }
    else
      {
        t = z_12;
        t = t_81(t);
      }
    return(t);
  }
  t = x_11(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      {
        ATerm d_13 = ATgetArgument(t, 1);
        if(((ATgetType(d_13) == AT_LIST) && !(ATisEmpty(d_13))))
          {
            d_12 = ATgetFirst((ATermList) d_13);
            e_12 = (ATerm) ATgetNext((ATermList) d_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_6(c_12, d_12, e_12, t);
  return(t);
}
ATerm index_0_0 (ATerm t)
{
  ATerm a_12 = NULL;
  t = repeat_2_0(u_1, _id, t);
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if(((ATgetType(e_13) != AT_INT) || (ATgetInt((ATermInt) e_13) != 1)))
        _fail(t);
      {
        ATerm l_13 = ATgetArgument(t, 1);
        if(((ATgetType(l_13) == AT_LIST) && !(ATisEmpty(l_13))))
          {
            a_12 = ATgetFirst((ATermList) l_13);
            {
              ATerm q_13 = (ATerm) ATgetNext((ATermList) l_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_12;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Instantiate_1_0(b_2, t);
          LocalPopChoice(u_13);
        }
      else
        {
          t = t_13;
          t = flat_list_0_0(t);
        }
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_7 (ATerm i_16, ATerm h_16, ATerm m_16, ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_16, (ATerm) ATinsert(ATempty, i_16));
  t = conc_0_0(t);
  o_12 = t;
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_12 = NULL,s_12 = NULL;
        t = pp_table_get_0_0(t);
        if(match_cons(t, sym__2))
          {
            n_12 = ATgetArgument(t, 0);
            p_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_12;
        if(match_cons(t, sym_Path_2))
          {
            ATerm x_13 = ATgetArgument(t, 0);
            r_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_12;
        {
          static ATerm w_1 (ATerm t)
          {
            ATerm t_12 = NULL,u_12 = NULL,y_12 = NULL,a_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_1 = NULL,j_1 = NULL;
            j_13 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_12 = ATgetFirst((ATermList) t);
                y_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_13);
            t_12 = t;
            t = u_12;
            if(match_cons(t, sym_selector_2))
              {
                g_13 = ATgetArgument(t, 0);
                h_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_12);
            a_13 = t;
            t = h_13;
            if(((s_12 != NULL) && (s_12 != t)))
              _fail(t);
            else
              s_12 = t;
            t = (ATerm) ATmakeAppl(sym_selector_2, g_13, h_13);
            j_1 = t;
            t = SSLsetAnnotations(j_1, a_13);
            i_13 = t;
            t = y_12;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_12), i_13);
            k_1 = t;
            t = SSLsetAnnotations(k_1, t_12);
            return(t);
          }
          t = at_last_1_0(w_1, t);
        }
        t = (ATerm) ATmakeAppl(sym__4, not_null(s_12), o_12, p_12, m_16);
        {
          ATerm y_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
              if(match_cons(t, sym__4))
                {
                  ATerm a_14 = ATgetArgument(t, 0);
                  ATerm c_14 = ATgetArgument(t, 1);
                  ATerm d_14 = ATgetArgument(t, 2);
                  ATerm e_14 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = m_16;
              if(match_cons(t, sym_alt_2))
                {
                  p_13 = ATgetArgument(t, 0);
                  m_13 = ATgetArgument(t, 1);
                  t = m_13;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      ATerm f_14 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, p_13, p_12);
                      t = index_0_0(t);
                      f_14 = t;
                      t = (ATerm) ATinsert(ATempty, f_14);
                      t = bottomup_1_0(z_1, t);
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          n_13 = ATgetFirst((ATermList) t);
                          o_13 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = o_13;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(s_12), o_12, p_12, m_16);
                      t = w_6(not_null(s_12), o_12, p_12, p_13, n_13, t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Some_1))
                    {
                      p_13 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym__4, not_null(s_12), o_12, p_12, m_16);
                      t = v_6(not_null(s_12), o_12, p_12, p_13, t);
                    }
                  else
                    {
                      if(!(match_cons(t, sym_None_0)))
                        _fail(t);
                      t = (ATerm) ATempty;
                    }
                }
              LocalPopChoice(z_13);
            }
          else
            {
              t = y_13;
              {
                ATerm g_14 = t;
                int h_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = symbol2abox5_0_0(t);
                    LocalPopChoice(h_14);
                  }
                else
                  {
                    t = g_14;
                    {
                      ATerm i_14 = t;
                      int j_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = symbol2abox6_0_0(t);
                          LocalPopChoice(j_14);
                        }
                      else
                        {
                          t = i_14;
                          if(match_cons(t, sym__4))
                            {
                              ATerm k_14 = ATgetArgument(t, 0);
                              ATerm l_14 = ATgetArgument(t, 1);
                              ATerm m_14 = ATgetArgument(t, 2);
                              ATerm n_14 = ATgetArgument(t, 3);
                            }
                          else
                            _fail(t);
                          t = not_null(s_12);
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("seq", 0, ATtrue)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__4, not_null(s_12), o_12, p_12, m_16);
                          t = q_6(o_12, p_12, m_16, t);
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        t = m_16;
        t = trm2abox_0_0(t);
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm t)
{
  static ATerm t_15 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_86(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm d_15 = NULL,f_15 = NULL,k_15 = NULL,p_15 = NULL,r_15 = NULL,s_15 = NULL,s_1 = NULL;
          t = o_86(t);
          s_15 = t;
          if(match_cons(t, sym__2))
            {
              f_15 = ATgetArgument(t, 0);
              k_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_15);
          d_15 = t;
          t = f_15;
          t = q_86(t);
          p_15 = t;
          t = k_15;
          t = t_15(t);
          r_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_15, r_15);
          s_1 = t;
          t = SSLsetAnnotations(s_1, d_15);
          t = p_86(t);
        }
      }
    return(t);
  }
  t = t_15(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      ATerm s_14 = ATgetArgument(t, 1);
      if(((ATgetType(s_14) != AT_LIST) || !(ATisEmpty(s_14))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      {
        ATerm v_14 = ATgetArgument(t, 1);
        if(((ATgetType(v_14) == AT_LIST) && !(ATisEmpty(v_14))))
          {
            x_15 = ATgetFirst((ATermList) v_14);
            y_15 = (ATerm) ATgetNext((ATermList) v_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_k_11;
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_15, term_k_11);
  t = b_8(w_15, a_16, t);
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_15, x_15), (ATerm) ATmakeAppl(sym__2, z_15, y_15));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm b_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_16), b_16);
  return(t);
}
ATerm nzip_1_0 (ATerm z_86 (ATerm), ATerm t)
{
  ATerm u_15 = NULL;
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_11, u_15);
  t = genzip_4_0(c_2, d_2, e_2, z_86, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm o_16 = NULL,q_16 = NULL,g_17 = NULL,h_17 = NULL;
  o_16 = t;
  t = term_x_14;
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, o_16);
  t = f_8(h_17, o_16, t);
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_17;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(f_2, t);
  t = (ATerm) ATmakeAppl(sym__2, g_17, q_16);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm trm2abox_appl_0_0 (ATerm t)
{
  ATerm u_17 = NULL,b_18 = NULL,c_18 = NULL,f_18 = NULL,g_18 = NULL;
  static ATerm q_2 (ATerm t)
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm r_2 (ATerm t)
            {
              t = not_null(f_18);
              return(t);
            }
            t = Instantiate_1_0(r_2, t);
            LocalPopChoice(l_15);
          }
        else
          {
            t = e_15;
            t = flat_list_0_0(t);
          }
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
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
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0_0(t);
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        t = debug_1_0(h_2, t);
        _fail(t);
      }
  }
  if(match_cons(t, sym__2))
    {
      ATerm o_15 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_17;
  {
    static ATerm i_2 (ATerm t)
    {
      ATerm h_18 = NULL,p_18 = NULL,r_18 = NULL;
      if(match_cons(t, sym__2))
        {
          h_18 = ATgetArgument(t, 0);
          p_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, b_18);
      r_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, h_18, (ATerm)ATinsert(ATempty, b_18), p_18);
      t = c_7(h_18, r_18, p_18, t);
      return(t);
    }
    t = nzip_1_0(i_2, t);
  }
  if(((f_18 != NULL) && (f_18 != t)))
    _fail(t);
  else
    f_18 = t;
  t = c_18;
  t = bottomup_1_0(q_2, t);
  return(t);
}
ATerm trm2abox_list_0_0 (ATerm t)
{
  ATerm z_18 = NULL;
  z_18 = t;
  t = SSL_explode_term(z_18);
  if(match_cons(t, sym__2))
    {
      ATerm q_15 = ATgetArgument(t, 0);
      ATerm v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_18;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm d_16 = ATgetFirst((ATermList) t);
          ATerm e_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_18;
    }
  t = map_1_0(trm2abox_0_0, t);
  return(t);
}
ATerm trm2abox_0_0 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_3 = NULL,r_3 = NULL;
      r_3 = t;
      t = SSL_is_string(r_3);
      p_3 = t;
      t = (ATerm) ATmakeAppl(sym_S_1, p_3);
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm k_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 = NULL,t_3 = NULL,z_3 = NULL;
            z_3 = t;
            t = SSL_is_int(z_3);
            t_3 = t;
            t = SSL_int_to_string(t_3);
            s_3 = t;
            t = (ATerm) ATmakeAppl(sym_S_1, s_3);
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            {
              ATerm a_17 = t;
              int b_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0_0(t);
                  LocalPopChoice(b_17);
                }
              else
                {
                  t = a_17;
                  {
                    ATerm c_17 = t;
                    int d_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0_0(t);
                        LocalPopChoice(d_17);
                      }
                    else
                      {
                        t = c_17;
                        {
                          ATerm f_20 = NULL,h_4 = NULL,j_4 = NULL,k_4 = NULL;
                          f_20 = t;
                          t = term_e_17;
                          j_4 = t;
                          t = (ATerm) ATinsert(ATinsert(ATempty, f_20), term_f_17);
                          k_4 = t;
                          t = SSL_printnl(j_4, k_4);
                          t = term_k_11;
                          h_4 = t;
                          t = SSL_exit(h_4);
                          t = (ATerm) ATinsert(ATinsert(ATempty, f_20), term_f_17);
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
  ATerm h_20 = NULL;
  t = SSL_write_term_to_stream_baf(z_28, a_29);
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_20);
  return(t);
}
static ATerm h_7 (ATerm h_83 (ATerm), ATerm w_303, ATerm h_29, ATerm t)
{
  ATerm i_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_303, term_i_17);
  t = z_7(t);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_20, h_29);
  t = h_83(t);
  t = fclose_0_0(t);
  t = h_29;
  return(t);
}
static ATerm i_7 (ATerm j_93 (ATerm), ATerm h_42, ATerm f_42, ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,u_20 = NULL;
  m_20 = t;
  t = j_93(t);
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_20, h_42, f_42);
  t = g_8(j_20, h_42, f_42, t);
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_20 = NULL;
        t = term_l_17;
        v_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_20, term_l_17);
        t = f_8(j_20, v_20, t);
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
      k_20 = ATgetFirst((ATermList) t);
      l_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_17;
  n_20 = t;
  t = (ATerm) ATinsert(CheckATermList(l_20), (ATerm) ATinsert(CheckATermList(k_20), h_42));
  u_20 = t;
  t = SSL_table_put(j_20, n_20, u_20);
  t = m_20;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,e_21 = NULL,f_21 = NULL;
  t = P__tmpdir_0_0(t);
  z_20 = t;
  t = term_r_17;
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_20, term_r_17);
  t = e_8(z_20, f_21, t);
  b_21 = t;
  t = term_v_17;
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_21, term_v_17);
  t = e_8(b_21, e_21, t);
  a_21 = t;
  t = SSL_mkstemp(a_21);
  if(match_cons(t, sym__2))
    {
      x_20 = ATgetArgument(t, 0);
      w_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_10;
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_20, term_f_10);
  t = i_7(t_2, x_20, y_20, t);
  t = SSL_close(w_20);
  t = x_20;
  return(t);
}
static ATerm j_7 (ATerm k_41, ATerm l_41, ATerm t)
{
  t = SSL_access(k_41, l_41);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_21 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_17;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_21 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_17);
      u_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_21, (ATerm) ATinsert(ATempty, term_x_17));
      t = j_7(l_21, u_21, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_18 = ATgetArgument(t, 0);
      if(match_cons(d_18, sym_Stream_1))
        {
          x_21 = ATgetArgument(d_18, 0);
        }
      else
        _fail(t);
      y_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(x_21, y_21, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm s_75 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  t = read_from_0_0(t);
  t = s_75(t);
  w_21 = t;
  t = xtc_new_file_0_0(t);
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_21, w_21);
  t = h_7(v_2, v_21, w_21, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_21);
  return(t);
}
static ATerm k_7 (ATerm k_19, ATerm l_19, ATerm t)
{
  t = SSL_copy(k_19, l_19);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  r_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_4 = NULL;
        t = r_22;
        t = r_0(t);
        r_4 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = r_4;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = r_4;
          }
        t = (ATerm) ATmakeAppl(sym__2, s_22, r_4);
        t = k_7(s_22, r_4, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_22);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        {
          ATerm l_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_6 = NULL;
              t = r_22;
              t = r_0(t);
              c_6 = t;
              {
                ATerm n_18 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_6 = NULL;
                    d_6 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = d_6;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = d_6;
                          }
                        else
                          {
                            t = d_6;
                            if((s_22 != t))
                              {
                                _fail(t);
                              }
                            t = d_6;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_18;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, s_22, c_6);
              t = k_7(s_22, c_6, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_22);
              LocalPopChoice(m_18);
            }
          else
            {
              t = l_18;
              t = r_22;
              t = r_0(t);
              if((s_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_22);
            }
        }
      }
  }
  return(t);
}
static ATerm l_7 (ATerm s_21, ATerm t_21, ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  a_23 = t;
  {
    ATerm o_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
        t = f_8(s_21, t_21, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_18 = ATgetFirst((ATermList) t);
            z_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_18);
        t = SSL_table_put(s_21, t_21, z_22);
        t = (ATerm) ATmakeAppl(sym__3, s_21, t_21, z_22);
      }
    else
      {
        t = o_18;
        t = SSL_table_remove(s_21, t_21);
        t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
      }
  }
  t = a_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm g_93 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,l_23 = NULL,m_23 = NULL,q_23 = NULL,r_23 = NULL;
  q_23 = t;
  t = g_93(t);
  m_23 = t;
  {
    ATerm a_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_23 = NULL;
        t = term_l_17;
        s_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_23, term_l_17);
        t = f_8(m_23, s_23, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = a_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_23 = ATgetFirst((ATermList) t);
      h_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_l_17;
  r_23 = t;
  t = SSL_table_put(m_23, r_23, h_23);
  t = l_23;
  {
    static ATerm x_2 (ATerm t)
    {
      ATerm u_23 = NULL;
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_23, u_23);
      t = l_7(m_23, u_23, t);
      return(t);
    }
    t = map_1_0(x_2, t);
  }
  t = q_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_80(t);
      t = e_80(t);
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      t = e_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,e_24 = NULL;
  y_23 = t;
  t = f_93(t);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_23, term_l_17);
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_19 = ATgetArgument(t, 0);
            ATerm m_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_17;
        j_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_23, term_l_17);
        t = f_8(x_23, j_24, t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = (ATerm) ATempty;
      }
  }
  z_23 = t;
  t = term_l_17;
  a_24 = t;
  t = (ATerm) ATinsert(CheckATermList(z_23), (ATerm) ATempty);
  e_24 = t;
  t = SSL_table_put(x_23, a_24, e_24);
  t = y_23;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_m_17;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(u_24);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = u_24;
      }
  }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_m_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm o_24 = NULL;
  static ATerm z_2 (ATerm t)
  {
    ATerm p_24 = NULL;
    p_24 = t;
    {
      ATerm p_19 = t;
      int q_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_24 = NULL,r_24 = NULL;
          t = term_m_17;
          q_24 = t;
          t = term_l_17;
          r_24 = t;
          t = term_r_19;
          t = f_8(q_24, r_24, t);
          LocalPopChoice(q_19);
        }
      else
        {
          t = p_19;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((o_24 != NULL) && (o_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_24 = ATgetFirst((ATermList) t);
        {
          ATerm s_19 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = o_24;
    t = map_1_0(a_3, t);
    t = p_24;
    t = end_scope_1_0(b_3, t);
    return(t);
  }
  t = begin_scope_1_0(y_2, t);
  t = restore_always_2_0(d_76, z_2, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm u_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_19;
      t = get_config_0_0(t);
      LocalPopChoice(x_19);
    }
  else
    {
      t = u_19;
      t = term_z_19;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm e_76 (ATerm), ATerm t)
{
  static ATerm e_3 (ATerm t)
  {
    ATerm a_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_24 = NULL;
        t = term_g_20;
        t = get_config_0_0(t);
        y_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_24);
        LocalPopChoice(c_20);
      }
    else
      {
        t = a_20;
        t = term_w_17;
      }
    t = e_76(t);
    t = copy_to_1_0(f_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(e_3, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      m_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(m_8);
  q_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_8), term_p_20), q_8), term_o_20);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,w_25 = NULL;
  t_25 = t;
  if(match_cons(t, sym_Path1_1))
    {
      u_25 = ATgetArgument(t, 0);
      t = u_25;
    }
  else
    {
      ATerm c_8 = NULL,l_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          u_25 = ATgetArgument(t, 0);
          w_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_25;
      t = map_1_0(g_3, t);
      t = concat_0_0(t);
      c_8 = t;
      t = (ATerm) ATinsert(CheckATermList(c_8), u_25);
      l_8 = t;
      t = SSL_concat_strings(l_8);
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm i_27 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      i_27 = ATgetArgument(t, 0);
      {
        ATerm q_20 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_27;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm o_26 = NULL,q_26 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      o_26 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, o_26);
    }
  else
    {
      ATerm e_27 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          o_26 = ATgetArgument(t, 0);
          q_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_26;
      t = map_1_0(h_3, t);
      e_27 = t;
      t = (ATerm) ATinsert(CheckATermList(e_27), o_26);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_r_20;
  return(t);
}
static ATerm m_7 (ATerm n_50, ATerm o_50, ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,n_27 = NULL,o_27 = NULL;
  t = n_50;
  t = mk_key_0_0(t);
  k_27 = t;
  t = term_x_14;
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_50, o_50);
  o_27 = t;
  t = SSL_table_put(n_27, k_27, o_27);
  t = n_50;
  t = path_to_string_0_0(t);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_27, o_50);
  t = if_verbose1_1_0(i_3, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  static ATerm k_28 (ATerm t)
  {
    ATerm e_28 = NULL,g_28 = NULL,i_28 = NULL;
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_81(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
      }
    i_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_28 = ATgetFirst((ATermList) t);
        g_28 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_9 = NULL,r_9 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(i_28);
          c_9 = t;
          t = g_28;
          t = k_28(t);
          r_9 = t;
          t = (ATerm) ATinsert(CheckATermList(r_9), e_28);
          v_1 = t;
          t = SSLsetAnnotations(v_1, c_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_28;
      }
    return(t);
  }
  t = k_28(t);
  return(t);
}
ATerm at_last_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  static ATerm f_30 (ATerm t)
  {
    ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
    c_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_30 = ATgetFirst((ATermList) t);
        e_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_21 = t;
      int g_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_10 = NULL,x_1 = NULL;
          t = SSLgetAnnotations(c_30);
          p_10 = t;
          t = e_30;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(e_30), d_30);
          x_1 = t;
          t = SSLsetAnnotations(x_1, p_10);
          t = l_85(t);
          LocalPopChoice(g_21);
        }
      else
        {
          t = c_21;
          {
            ATerm l_11 = NULL,u_11 = NULL,y_1 = NULL;
            t = SSLgetAnnotations(c_30);
            l_11 = t;
            t = e_30;
            t = f_30(t);
            u_11 = t;
            t = (ATerm) ATinsert(CheckATermList(u_11), d_30);
            y_1 = t;
            t = SSLsetAnnotations(y_1, l_11);
          }
        }
    }
    return(t);
  }
  t = f_30(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_30 = ATgetFirst((ATermList) t);
      q_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_30;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_30;
    }
  else
    {
      t = q_30;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm y_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_21 = ATgetFirst((ATermList) t);
      y_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_30;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm a_81 (ATerm), ATerm b_81 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
  v_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_30 = ATgetFirst((ATermList) t);
      {
        ATerm j_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_30;
  t = a_81(t);
  t = v_30;
  t = last_0_0(t);
  t = b_81(t);
  t = v_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_21 = ATgetFirst((ATermList) t);
      w_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_30;
  t = at_last_1_0(n_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
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
static ATerm x_3 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_15 = ATgetFirst((ATermList) t);
      h_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_15;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = h_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_15 = ATgetFirst((ATermList) t);
      j_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_15;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(j_15), term_p_21);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(j_15), term_q_21);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(j_15), term_r_21);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(j_15), term_z_21);
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
  u_33 = t;
  if(match_cons(t, sym_Arg_1))
    {
      v_33 = ATgetArgument(t, 0);
      {
        ATerm j_12 = NULL,l_12 = NULL,j_2 = NULL;
        t = SSLgetAnnotations(u_33);
        j_12 = t;
        t = SSL_string_to_int(v_33);
        l_12 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, l_12);
        j_2 = t;
        t = SSLsetAnnotations(j_2, j_12);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          v_33 = ATgetArgument(t, 0);
          w_33 = ATgetArgument(t, 1);
          {
            ATerm c_13 = NULL,f_13 = NULL,k_13 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(u_33);
            c_13 = t;
            t = SSL_string_to_int(v_33);
            f_13 = t;
            t = SSL_string_to_int(w_33);
            k_13 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, f_13, k_13);
            k_2 = t;
            t = SSLsetAnnotations(k_2, c_13);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              v_33 = ATgetArgument(t, 0);
              w_33 = ATgetArgument(t, 1);
              {
                ATerm b_14 = NULL,l_2 = NULL;
                t = SSLgetAnnotations(u_33);
                b_14 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, v_33, w_33);
                l_2 = t;
                t = SSLsetAnnotations(l_2, b_14);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  v_33 = ATgetArgument(t, 0);
                  {
                    ATerm r_14 = NULL,t_14 = NULL,u_14 = NULL,z_14 = NULL,a_15 = NULL,m_2 = NULL;
                    t = SSLgetAnnotations(u_33);
                    r_14 = t;
                    t = SSL_explode_string(v_33);
                    t = unquote_chars_2_0(q_3, u_3, t);
                    a_15 = t;
                    t = SSL_implode_string(a_15);
                    z_14 = t;
                    t = SSL_explode_string(z_14);
                    t = unescape_chars_1_0(x_3, t);
                    u_14 = t;
                    t = SSL_implode_string(u_14);
                    t_14 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, t_14);
                    m_2 = t;
                    t = SSLsetAnnotations(m_2, r_14);
                  }
                }
              else
                {
                  ATerm j_16 = NULL,p_16 = NULL,n_2 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      v_33 = ATgetArgument(t, 0);
                      w_33 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_33);
                  j_16 = t;
                  t = SSL_string_to_int(v_33);
                  p_16 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, p_16, w_33);
                  n_2 = t;
                  t = SSLsetAnnotations(n_2, j_16);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  static ATerm c_4 (ATerm t)
  {
    t = topdown_1_0(w_76, t);
    return(t);
  }
  t = w_76(t);
  t = SRTS_all(c_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm j_34 = NULL,l_34 = NULL;
  t = topdown_1_0(i_4, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      j_34 = ATgetArgument(t, 0);
      l_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(j_34, l_34, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
    }
  return(t);
}
static ATerm u_7 (ATerm m_50, ATerm t)
{
  t = m_50;
  t = reverse_acc_2_0(_id, e_4, t);
  t = map_1_0(g_4, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  static ATerm p_34 (ATerm t)
  {
    ATerm c_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_78(t);
        LocalPopChoice(f_22);
      }
    else
      {
        t = c_22;
        t = SRTS_one(p_34, t);
      }
    return(t);
  }
  t = p_34(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL;
  t = term_h_22;
  r_34 = t;
  t = term_i_22;
  s_34 = t;
  t = term_j_22;
  t = f_8(r_34, s_34, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
      t = term_m_22;
      t = get_options_0_0(t);
      t = oncetd_1_0(l_4, t);
      t = term_e_17;
      u_34 = t;
      t = (ATerm) ATinsert(ATempty, term_o_22);
      v_34 = t;
      t = SSL_printnl(u_34, v_34);
      t = term_k_11;
      t_34 = t;
      t = SSL_exit(t_34);
      t = (ATerm) ATinsert(ATempty, term_o_22);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm x_34 = NULL,y_34 = NULL;
        t = term_e_17;
        x_34 = t;
        t = (ATerm) ATinsert(ATempty, term_p_22);
        y_34 = t;
        t = SSL_printnl(x_34, y_34);
        t = (ATerm) ATinsert(ATempty, term_p_22);
      }
    }
  return(t);
}
static ATerm u_35 (ATerm o_35, ATerm t)
{
  t = SSL_fclose(o_35);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL;
  s_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_35 = ATgetArgument(t, 0);
      {
        ATerm q_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_35);
            LocalPopChoice(t_22);
          }
        else
          {
            t = q_22;
            t = u_35(s_35, t);
          }
      }
    }
  else
    {
      t = u_35(s_35, t);
    }
  return(t);
}
static ATerm x_7 (ATerm f_29, ATerm t)
{
  t = SSL_read_term_from_stream(f_29);
  return(t);
}
static ATerm y_7 (ATerm t_41, ATerm u_41, ATerm t)
{
  ATerm v_35 = NULL;
  t = SSL_fopen(t_41, u_41);
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_35);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_35 = NULL;
  t = SSL_stdin_stream();
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_35);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_35 = NULL;
  t = SSL_stdout_stream();
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_35);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_35 = NULL;
  t = SSL_stderr_stream();
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_35);
  return(t);
}
static ATerm i_37 (ATerm e_36, ATerm t)
{
  ATerm f_36 = NULL;
  t = SSL_explode_term(e_36);
  if(match_cons(t, sym__2))
    {
      ATerm u_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_22 = ATgetArgument(t, 1);
        if(((ATgetType(v_22) == AT_LIST) && !(ATisEmpty(v_22))))
          {
            f_36 = ATgetFirst((ATermList) v_22);
            {
              ATerm w_22 = (ATerm) ATgetNext((ATermList) v_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_37 (ATerm k_36, ATerm l_36, ATerm m_36, ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL,s_36 = NULL,o_3 = NULL;
  t = SSLgetAnnotations(m_36);
  p_36 = t;
  t = k_36;
  if(match_cons(t, sym_Path_1))
    {
      s_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_36, l_36);
  o_3 = t;
  t = SSLsetAnnotations(o_3, p_36);
  if(match_cons(t, sym__2))
    {
      n_36 = ATgetArgument(t, 0);
      o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(n_36, o_36, t);
  return(t);
}
static ATerm k_37 (ATerm u_36, ATerm v_36, ATerm w_36, ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,c_37 = NULL,n_7 = NULL;
  t = SSLgetAnnotations(w_36);
  z_36 = t;
  t = SSL_is_string(u_36);
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_37, v_36);
  n_7 = t;
  t = SSLsetAnnotations(n_7, z_36);
  if(match_cons(t, sym__2))
    {
      x_36 = ATgetArgument(t, 0);
      y_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(x_36, y_36, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  if(match_cons(t, sym__2))
    {
      g_37 = ATgetArgument(t, 0);
      h_37 = ATgetArgument(t, 1);
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_37(f_37, t);
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            {
              ATerm b_23 = t;
              int c_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_37(g_37, h_37, f_37, t);
                  LocalPopChoice(c_23);
                }
              else
                {
                  t = b_23;
                  t = k_37(g_37, h_37, f_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_37(f_37, t);
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_d_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  ATerm g_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_37 = NULL;
      o_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_37, term_k_23);
      t = z_7(t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = g_23;
      t = debug_1_0(m_4, t);
      _fail(t);
    }
  m_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(n_37, t);
  l_37 = t;
  t = m_37;
  t = fclose_0_0(t);
  t = l_37;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm s_37 = NULL,v_37 = NULL,n_17 = NULL,o_17 = NULL;
  t = if_verbose1_1_0(o_4, t);
  t = ReadFromFile_0_0(t);
  v_37 = t;
  t = SSL_explode_term(v_37);
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      {
        ATerm p_23 = ATgetArgument(t, 1);
        if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
          {
            n_17 = ATgetFirst((ATermList) p_23);
            {
              ATerm t_23 = (ATerm) ATgetNext((ATermList) p_23);
              if(((ATgetType(t_23) != AT_LIST) || !(ATisEmpty(t_23))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_17;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = n_17;
  if(match_cons(t, sym_PP_Table_1))
    {
      s_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(s_37, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = debug_1_0(t_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL;
  q_37 = t;
  t = term_x_14;
  r_37 = t;
  t = SSL_table_create(r_37);
  t = q_37;
  t = map_1_0(n_4, t);
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm w_23 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_24;
      t = get_config_0_0(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = w_23;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = xtc_io_transform_1_0(w_4, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = trm2abox_0_0(t);
  {
    ATerm d_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_38 = NULL;
        e_38 = t;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_24 = ATgetFirst((ATermList) t);
                ATerm h_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_38;
          }
        LocalPopChoice(f_24);
        {
          ATerm j_38 = NULL;
          j_38 = t;
          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, j_38);
        }
      }
    else
      {
        t = d_24;
      }
  }
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm c_38 = NULL;
  c_38 = t;
  t = get_config_p_0_0(t);
  t = reverse_acc_2_0(_id, u_4, t);
  t = read_pp_tables_0_0(t);
  t = c_38;
  t = xtc_io_1_0(v_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,q_38 = NULL,r_38 = NULL;
  l_38 = t;
  t = term_f_10;
  t = whoami_0_0(t);
  m_38 = t;
  t = term_e_17;
  q_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_24), m_38), term_i_24);
  r_38 = t;
  t = SSL_printnl(q_38, r_38);
  t = term_k_11;
  n_38 = t;
  t = SSL_exit(n_38);
  t = l_38;
  return(t);
}
ATerm at_end_1_0 (ATerm a_85 (ATerm), ATerm t)
{
  static ATerm g_40 (ATerm t)
  {
    ATerm y_39 = NULL,b_40 = NULL,d_40 = NULL;
    d_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_39 = ATgetFirst((ATermList) t);
        b_40 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_18 = NULL,k_18 = NULL,t_17 = NULL;
          t = SSLgetAnnotations(d_40);
          e_18 = t;
          t = b_40;
          t = g_40(t);
          k_18 = t;
          t = (ATerm) ATinsert(CheckATermList(k_18), y_39);
          t_17 = t;
          t = SSLsetAnnotations(t_17, e_18);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_40;
        t = a_85(t);
      }
    return(t);
  }
  t = g_40(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_38 = NULL,x_38 = NULL,y_38 = NULL;
  t_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_38;
    }
  else
    {
      static ATerm y_4 (ATerm t)
      {
        t = not_null(y_38);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_38 = ATgetFirst((ATermList) t);
          if(((y_38 != NULL) && (y_38 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_38;
      t = at_end_1_0(y_4, t);
    }
  return(t);
}
static ATerm a_41 (ATerm o_40, ATerm t)
{
  ATerm q_40 = NULL;
  t = SSL_explode_term(o_40);
  if(match_cons(t, sym__2))
    {
      ATerm l_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_40;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_40 = NULL,w_40 = NULL,x_40 = NULL;
  x_40 = t;
  if(match_cons(t, sym__2))
    {
      u_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm z_4 (ATerm t)
            {
              t = w_40;
              return(t);
            }
            t = u_40;
            t = at_end_1_0(z_4, t);
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            t = a_41(x_40, t);
          }
      }
    }
  else
    {
      t = a_41(x_40, t);
    }
  return(t);
}
static ATerm a_8 (ATerm y_18, ATerm x_18, ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
  t = y_18;
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = (ATerm) ATempty;
      }
  }
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_18, c_41);
  t = conc_0_0(t);
  b_41 = t;
  t = term_v_24;
  d_41 = t;
  t = SSL_table_put(d_41, y_18, b_41);
  t = (ATerm) ATmakeAppl(sym__3, term_v_24, y_18, b_41);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
  e_41 = t;
  t = term_c_24;
  f_41 = t;
  t = (ATerm) ATinsert(ATempty, e_41);
  g_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATinsert(ATempty, e_41));
  t = a_8(f_41, g_41, t);
  t = e_41;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_w_24;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, d_5, g_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  if(match_string(t, "-k"))
    {
      t = m_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_41;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm n_41 = NULL,p_41 = NULL,q_41 = NULL;
  n_41 = t;
  t = SSL_string_to_int(n_41);
  p_41 = t;
  t = term_x_24;
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_24, p_41);
  t = i_8(q_41, p_41, t);
  t = n_41;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, i_5, l_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm y_41 = NULL;
  y_41 = t;
  if(match_string(t, "-S"))
    {
      t = y_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_41;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm z_41 = NULL,o_42 = NULL;
  t = term_b_25;
  z_41 = t;
  t = term_o_11;
  o_42 = t;
  t = term_c_25;
  t = i_8(z_41, o_42, t);
  t = term_d_25;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_e_25;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
  p_42 = t;
  t = SSL_string_to_int(p_42);
  q_42 = t;
  t = term_b_25;
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, q_42);
  t = i_8(r_42, q_42, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_42);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL;
  t = term_g_25;
  s_42 = t;
  t = term_f_10;
  t_42 = t;
  t = term_h_25;
  t = i_8(s_42, t_42, t);
  t = term_i_25;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_j_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_5, o_5, p_5, t);
      LocalPopChoice(m_25);
    }
  else
    {
      t = k_25;
      {
        ATerm n_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_5, r_5, t_5, t);
            LocalPopChoice(o_25);
          }
        else
          {
            t = n_25;
            t = Option_3_0(y_5, z_5, a_6, t);
          }
      }
    }
  return(t);
}
static ATerm i_8 (ATerm s_18, ATerm t_18, ATerm t)
{
  ATerm u_42 = NULL;
  t = term_v_24;
  u_42 = t;
  t = SSL_table_put(u_42, s_18, t_18);
  t = (ATerm) ATmakeAppl(sym__3, term_v_24, s_18, t_18);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
      t = term_f_10;
      t = i_0(t);
      g_43 = t;
      t = term_p_25;
      h_43 = t;
      t = term_q_25;
      i_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_25, term_q_25, g_43);
      t = g_8(h_43, i_43, g_43, t);
      _fail(t);
    }
  else
    {
      ATerm m_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_43 = ATgetFirst((ATermList) t);
          f_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_43;
      t = d_0(t);
      t = term_f_10;
      t = g_0(t);
      m_43 = t;
      t = (ATerm) ATinsert(CheckATermList(f_43), m_43);
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm q_43 = NULL;
  q_43 = t;
  if(match_string(t, "-o"))
    {
      t = q_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_43;
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL;
  r_43 = t;
  t = term_y_19;
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_19, r_43);
  t = i_8(s_43, r_43, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_43);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_6, g_6, h_6, t);
  return(t);
}
static ATerm g_8 (ATerm n_21, ATerm o_21, ATerm m_21, ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,z_43 = NULL;
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
  {
    ATerm s_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_25 = ATgetArgument(t, 0);
            ATerm y_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
        t = f_8(n_21, o_21, t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = s_25;
        t = (ATerm) ATempty;
      }
  }
  x_43 = t;
  t = (ATerm) ATinsert(CheckATermList(x_43), m_21);
  z_43 = t;
  t = SSL_table_put(n_21, o_21, z_43);
  t = w_43;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
      t = term_f_10;
      t = p_0(t);
      m_44 = t;
      t = term_p_25;
      n_44 = t;
      t = term_q_25;
      o_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_25, term_q_25, m_44);
      t = g_8(n_44, o_44, m_44, t);
      _fail(t);
    }
  else
    {
      ATerm s_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_44 = ATgetFirst((ATermList) t);
          h_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_44 = ATgetFirst((ATermList) t);
          j_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_44;
      t = n_0(t);
      t = i_44;
      t = o_0(t);
      s_44 = t;
      t = (ATerm) ATinsert(CheckATermList(j_44), s_44);
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm u_44 = NULL;
  u_44 = t;
  if(match_string(t, "-i"))
    {
      t = u_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_44;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  v_44 = t;
  t = term_g_20;
  w_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_20, v_44);
  t = i_8(w_44, v_44, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_44);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_6, k_6, l_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_10;
  t = whoami_0_0(t);
  x_44 = t;
  t = term_e_17;
  z_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_26), x_44);
  a_45 = t;
  t = SSL_printnl(z_44, a_45);
  t = term_k_11;
  y_44 = t;
  t = SSL_exit(y_44);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm b_8 (ATerm h_30, ATerm i_30, ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_30, i_30);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = SSL_addr(h_30, i_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_45;
      t = c_91(t);
    }
  else
    {
      ATerm i_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_45 = ATgetFirst((ATermList) t);
          f_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_45;
      t = foldr_2_0(c_91, d_91, t);
      i_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_45, i_45);
      t = d_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_o_11;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(c_19, d_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_45 = NULL,q_18 = NULL,w_18 = NULL;
  t = times_0_0(t);
  w_18 = t;
  t = SSL_explode_term(w_18);
  if(match_cons(t, sym__2))
    {
      ATerm e_26 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_18;
  t = foldr_2_0(o_6, u_6, t);
  n_45 = t;
  t = SSL_TicksToSeconds(n_45);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  c_46 = t;
  if(match_cons(t, sym__2))
    {
      d_46 = ATgetArgument(t, 0);
      e_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_46;
        if((d_46 != t))
          {
            _fail(t);
          }
        t = c_46;
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = (ATerm) ATmakeAppl(sym__2, d_46, e_46);
        {
          ATerm h_26 = t;
          int i_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_46, e_46);
              LocalPopChoice(i_26);
            }
          else
            {
              t = h_26;
              t = SSL_gtr(d_46, e_46);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_46, e_46);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_74 (ATerm), ATerm t)
{
  ATerm o_46 = NULL;
  o_46 = t;
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_46 = NULL;
        t = term_b_25;
        t = get_config_0_0(t);
        r_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_46, term_k_11);
        t = geq_0_0(t);
        t = o_46;
        t = b_74(t);
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        t = o_46;
      }
  }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm t_46 = NULL,v_46 = NULL,z_46 = NULL,a_47 = NULL;
  t = run_time_0_0(t);
  t_46 = t;
  t = term_f_10;
  t = whoami_0_0(t);
  v_46 = t;
  t = term_e_17;
  z_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_26), t_46), term_l_26), v_46);
  a_47 = t;
  t = SSL_printnl(z_46, a_47);
  t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_26), t_46), term_l_26), v_46));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_11;
  b_47 = t;
  t = SSL_exit(b_47);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL;
  l_47 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_47;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_47 = ATgetArgument(t, 0);
          {
            ATerm d_20 = NULL,b_19 = NULL;
            t = SSLgetAnnotations(l_47);
            d_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_47);
            b_19 = t;
            t = SSLsetAnnotations(b_19, d_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_47;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm n_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_26;
      t = get_config_0_0(t);
      LocalPopChoice(p_26);
    }
  else
    {
      t = n_26;
      t = fetch_1_0(a_7, t);
    }
  t = k_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_47 = ATgetFirst((ATermList) t);
      p_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_47 = NULL,y_47 = NULL;
        static ATerm b_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_47)), not_null(y_47));
          return(t);
        }
        t = p_47;
        t = l_0(t);
        if(((x_47 != NULL) && (x_47 != t)))
          _fail(t);
        else
          x_47 = t;
        t = o_47;
        t = k_0(t);
        if(((y_47 != NULL) && (y_47 != t)))
          _fail(t);
        else
          y_47 = t;
        t = p_47;
        t = reverse_acc_2_0(k_0, b_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_10;
      t = l_0(t);
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,l_48 = NULL,t_19 = NULL;
  l_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_48);
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_48);
  t_19 = t;
  t = SSLsetAnnotations(t_19, h_48);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm p_48 = NULL;
  p_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_48), term_s_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_48 = NULL,e_48 = NULL;
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_26;
      t = get_config_0_0(t);
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      t = fetch_1_0(d_7, t);
    }
  t = term_v_26;
  t = echo_0_0(t);
  t = term_p_25;
  a_48 = t;
  t = term_q_25;
  e_48 = t;
  t = term_w_26;
  t = f_8(a_48, e_48, t);
  t = reverse_acc_2_0(_id, o_7, t);
  t = map_1_0(s_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_84 (ATerm), ATerm t)
{
  static ATerm w_49 (ATerm t)
  {
    ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
    t_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_49 = ATgetFirst((ATermList) t);
        v_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_26 = t;
      int y_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_21 = NULL,i_21 = NULL,v_19 = NULL;
          t = SSLgetAnnotations(t_49);
          d_21 = t;
          t = u_49;
          t = u_84(t);
          i_21 = t;
          t = (ATerm) ATinsert(CheckATermList(v_49), i_21);
          v_19 = t;
          t = SSLsetAnnotations(v_19, d_21);
          LocalPopChoice(y_26);
        }
      else
        {
          t = x_26;
          {
            ATerm d_22 = NULL,n_22 = NULL,w_19 = NULL;
            t = SSLgetAnnotations(t_49);
            d_22 = t;
            t = v_49;
            t = w_49(t);
            n_22 = t;
            t = (ATerm) ATinsert(CheckATermList(n_22), u_49);
            w_19 = t;
            t = SSLsetAnnotations(w_19, d_22);
          }
        }
    }
    return(t);
  }
  t = w_49(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
  a_50 = t;
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_27 = ATgetFirst((ATermList) t);
                ATerm c_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_50;
          }
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        t = (ATerm) ATinsert(ATempty, a_50);
      }
  }
  b_50 = t;
  t = term_z_19;
  c_50 = t;
  t = SSL_printnl(c_50, b_50);
  t = a_50;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_8 (ATerm o_28, ATerm p_28, ATerm t)
{
  t = SSL_strcat(o_28, p_28);
  return(t);
}
ATerm debug_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
  g_50 = t;
  t = f_83(t);
  h_50 = t;
  t = term_e_17;
  i_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_50), h_50);
  j_50 = t;
  t = SSL_printnl(i_50, j_50);
  t = g_50;
  return(t);
}
ATerm map_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  static ATerm s_51 (ATerm t)
  {
    ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
    p_51 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_51;
      }
    else
      {
        ATerm i_23 = NULL,n_23 = NULL,o_23 = NULL,b_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_51 = ATgetFirst((ATermList) t);
            r_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_51);
        i_23 = t;
        t = q_51;
        t = k_84(t);
        n_23 = t;
        t = r_51;
        t = s_51(t);
        o_23 = t;
        t = (ATerm) ATinsert(CheckATermList(o_23), n_23);
        b_20 = t;
        t = SSLsetAnnotations(b_20, i_23);
      }
    return(t);
  }
  t = s_51(t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm d_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(f_27);
    }
  else
    {
      t = d_27;
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_52 = NULL;
      a_52 = t;
      t = SSL_is_string(a_52);
      LocalPopChoice(l_27);
    }
  else
    {
      t = h_27;
      {
        ATerm m_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(t_7, t);
            LocalPopChoice(p_27);
          }
        else
          {
            t = m_27;
            {
              ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
              n_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_52 = ATgetArgument(t, 0);
                  t = o_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_52 = ATgetArgument(t, 0);
                      t = o_52;
                      {
                        ATerm q_27 = t;
                        int r_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(r_27);
                          }
                        else
                          {
                            t = q_27;
                            t = debug_1_0(w_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_52 = NULL,u_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_52 = ATgetArgument(t, 0);
                          p_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_52;
                      t = eval_config_0_0(t);
                      t_52 = t;
                      t = p_52;
                      t = eval_config_0_0(t);
                      u_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
                      t = e_8(t_52, u_52, t);
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
  ATerm y_52 = NULL,z_52 = NULL;
  y_52 = t;
  t = term_v_24;
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_24, y_52);
  t = f_8(z_52, y_52, t);
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_53 = NULL,b_53 = NULL;
        t = eval_config_0_0(t);
        a_53 = t;
        t = term_v_24;
        b_53 = t;
        t = SSL_table_put(b_53, y_52, a_53);
        t = a_53;
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
      }
  }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  t = term_u_27;
  e_53 = t;
  t = term_f_10;
  f_53 = t;
  t = term_v_27;
  t = i_8(e_53, f_53, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_w_27;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL;
  t = term_u_27;
  i_53 = t;
  t = term_f_10;
  j_53 = t;
  t = term_v_27;
  t = i_8(i_53, j_53, t);
  t = term_x_27;
  g_53 = t;
  t = term_f_10;
  h_53 = t;
  t = term_y_27;
  t = i_8(g_53, h_53, t);
  t = term_z_27;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_a_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_8, u_8, v_8, t);
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      t = Option_3_0(z_8, a_9, b_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,e_20 = NULL;
  p_53 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_53 = ATgetFirst((ATermList) t);
      m_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_53);
  k_53 = t;
  t = l_53;
  t = a_69(t);
  n_53 = t;
  t = m_53;
  t = b_69(t);
  o_53 = t;
  t = (ATerm) ATinsert(CheckATermList(o_53), n_53);
  e_20 = t;
  t = SSLsetAnnotations(e_20, k_53);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_96 (ATerm), ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,z_53 = NULL,a_54 = NULL,e_22 = NULL;
  u_53 = t;
  {
    ATerm d_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_28;
        t = i_96(t);
        LocalPopChoice(f_28);
      }
    else
      {
        t = d_28;
      }
  }
  t = u_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_53 = ATgetFirst((ATermList) t);
      x_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_53);
  v_53 = t;
  t = term_b_26;
  a_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_26, w_53);
  t = i_8(a_54, w_53, t);
  t = x_53;
  {
    static ATerm k_54 (ATerm t)
    {
      ATerm j_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_28 = t;
          int n_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_54 = NULL;
              d_54 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_54;
              LocalPopChoice(n_28);
            }
          else
            {
              t = m_28;
              t = i_96(t);
              t = Cons_2_0(_id, k_54, t);
            }
          LocalPopChoice(l_28);
        }
      else
        {
          t = j_28;
          {
            ATerm g_54 = NULL,h_54 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_54 = ATgetFirst((ATermList) t);
                h_54 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_54), (ATerm) ATmakeAppl(sym_Undefined_1, g_54));
          }
        }
      return(t);
    }
    t = k_54(t);
  }
  z_53 = t;
  t = (ATerm) ATinsert(CheckATermList(z_53), (ATerm) ATmakeAppl(sym_Program_1, w_53));
  e_22 = t;
  t = SSLsetAnnotations(e_22, v_53);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm w_54 = NULL;
  w_54 = t;
  if(match_string(t, "--help"))
    {
      t = w_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_54;
        }
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL;
  t = term_r_26;
  x_54 = t;
  t = term_f_10;
  y_54 = t;
  t = term_q_28;
  t = i_8(x_54, y_54, t);
  t = term_r_28;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_s_28;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
  r_54 = t;
  t = term_p_25;
  t_54 = t;
  t = term_q_25;
  u_54 = t;
  t = (ATerm) ATempty;
  v_54 = t;
  t = SSL_table_put(t_54, u_54, v_54);
  t = r_54;
  {
    static ATerm d_9 (ATerm t)
    {
      ATerm t_28 = t;
      int u_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_96(t);
          LocalPopChoice(u_28);
        }
      else
        {
          t = t_28;
          {
            ATerm v_28 = t;
            int w_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_9, i_9, j_9, t);
                LocalPopChoice(w_28);
              }
            else
              {
                t = v_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_9, t);
  }
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_55 = NULL;
        f_55 = t;
        {
          ATerm b_29 = t;
          int c_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_25 = NULL;
              t = f_55;
              {
                ATerm d_29 = t;
                int e_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_26;
                    t = get_config_0_0(t);
                    LocalPopChoice(e_29);
                  }
                else
                  {
                    t = d_29;
                    t = fetch_1_0(k_9, t);
                  }
              }
              t = f_55;
              t = default_system_usage_0_0(t);
              t = term_o_11;
              a_25 = t;
              t = SSL_exit(a_25);
              LocalPopChoice(c_29);
            }
          else
            {
              t = b_29;
              {
                ATerm l_25 = NULL;
                t = term_u_27;
                t = get_config_0_0(t);
                t = f_55;
                t = default_system_about_0_0(t);
                t = term_o_11;
                l_25 = t;
                t = SSL_exit(l_25);
              }
            }
        }
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        {
          ATerm g_29 = t;
          int i_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL;
              static ATerm m_9 (ATerm t)
              {
                ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,g_22 = NULL;
                l_55 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_55 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_55);
                j_55 = t;
                t = k_55;
                if(((p_54 != NULL) && (p_54 != t)))
                  _fail(t);
                else
                  p_54 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_55);
                g_22 = t;
                t = SSLsetAnnotations(g_22, j_55);
                return(t);
              }
              t = fetch_1_0(m_9, t);
              t = term_e_17;
              h_55 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_54)), term_j_29);
              i_55 = t;
              t = SSL_printnl(h_55, i_55);
              t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_54)), term_j_29));
              t = default_system_usage_0_0(t);
              t = term_k_11;
              g_55 = t;
              t = SSL_exit(g_55);
              LocalPopChoice(i_29);
            }
          else
            {
              t = g_29;
            }
        }
      }
  }
  q_54 = t;
  t = term_p_25;
  s_54 = t;
  t = SSL_table_destroy(s_54);
  t = q_54;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL;
  t = parse_options_1_0(m_94, t);
  q_55 = t;
  t = term_h_22;
  t_55 = t;
  t = SSL_table_create(t_55);
  t = term_h_22;
  r_55 = t;
  t = term_i_22;
  s_55 = t;
  t = SSL_table_put(r_55, s_55, q_55);
  t = q_55;
  t = o_94(t);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_94, t);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_94(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      {
        ATerm q_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(r_29);
          }
        else
          {
            t = q_29;
            {
              ATerm s_29 = t;
              int t_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_9, s_9, u_9, t);
                  LocalPopChoice(t_29);
                }
              else
                {
                  t = s_29;
                  {
                    ATerm u_29 = t;
                    int v_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(v_29);
                      }
                    else
                      {
                        t = u_29;
                        {
                          ATerm w_29 = t;
                          int x_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = keep_option_0_0(t);
                              LocalPopChoice(x_29);
                            }
                          else
                            {
                              t = w_29;
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
static ATerm q_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL;
  t = term_y_29;
  v_55 = t;
  t = term_f_10;
  w_55 = t;
  t = term_z_29;
  t = i_8(v_55, w_55, t);
  t = term_a_30;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_b_30;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(n_9, default_usage_0_0, _id, ast2abox_0_0, t);
  return(t);
}
